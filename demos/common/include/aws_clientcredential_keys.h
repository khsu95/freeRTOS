/*
 * Amazon FreeRTOS V1.4.1
 * Copyright (C) 2017 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

#include <stdint.h>

/*
 * PEM-encoded client certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWjCCAkKgAwIBAgIVAO5Nh5RamdXYaThz+EepnSCBv9QpMA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xOTA0MjQwNDQ0\n"\
"NDBaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQC63joR+PSvxj818hfe\n"\
"Af3bntsPhq1Lf9/awnEKPlq4pkZEKChujsomK6ewGCt5q38rIiodbX/B5b8Lrypg\n"\
"kt/fMD8Av3hXt7UILXI9IsVuXDMbBc7p+A2Saur2bxhEOhkndWwfyI2CRUXjH82b\n"\
"rS5GEEfosCOZST7TzogODulgIhxmPxXCUYsLlDkgCaVHnY8QqkOONoWs3FgtIiV6\n"\
"uXr25lxBhxw/mm2yQwqB82v2vqfGIWtZ/NJ5xTpi0i0KEw7sa4wXswCO5AIN0FeQ\n"\
"10XFBsKFtBTfUr8lelkGAYhFvuVW31fvciKwi0dVF7sEpxjJM+jj6h31islx5iud\n"\
"e88JAgMBAAGjYDBeMB8GA1UdIwQYMBaAFMO/+ageSRliZTpTjeNkZwFcxnpbMB0G\n"\
"A1UdDgQWBBSSlgcEqYCtvQ+UVzRIn5IHdP+5RzAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAFBb35cTyDePA/JeVfDUy+X9x\n"\
"/MKSTPOSeF9JJDvykoRBwIVEsmq/VpS6xFgGMIkS+YeKJRFEU3L3WXVOQwzNbGmV\n"\
"/9FrA0EoZaCCC4EWwY9Je7Zxejk3YPoTTj6maR8C3Jr2Yi8jtgoVOladDR/W294W\n"\
"YvZjZVnSlrzXxruu8Uw8vm5egF2MSCUBr0pOVfTtRaMwRXiYbrD0gMp0tmPrhmDc\n"\
"LcxAnQr4RDzCsZODno9eyQKOjlz1UqIDgtcXVbQtzIoBLTW4iTWuvUz3pt/CNk3r\n"\
"Jd/I11lBvBuvGxxj1hm25E75mK2J4ZI5KIfDGTNkYGk+eY5YqnFQunTdrOVgGg==\n"\
"-----END CERTIFICATE-----\n"

/*
 * PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 * This is required if you're using JITR, since the issuer (Certificate 
 * Authority) of the client certificate is used by the server for routing the 
 * device's initial request. (The device client certificate must always be 
 * sent as well.) For more information about JITR, see:
 *  https://docs.aws.amazon.com/iot/latest/developerguide/jit-provisioning.html, 
 *  https://aws.amazon.com/blogs/iot/just-in-time-registration-of-device-certificates-on-aws-iot/.
 *
 * If you're not using JITR, set below to NULL.
 * 
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  NULL

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----\n"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEpQIBAAKCAQEAut46Efj0r8Y/NfIX3gH9257bD4atS3/f2sJxCj5auKZGRCgo\n"\
"bo7KJiunsBgreat/KyIqHW1/weW/C68qYJLf3zA/AL94V7e1CC1yPSLFblwzGwXO\n"\
"6fgNkmrq9m8YRDoZJ3VsH8iNgkVF4x/Nm60uRhBH6LAjmUk+086IDg7pYCIcZj8V\n"\
"wlGLC5Q5IAmlR52PEKpDjjaFrNxYLSIlerl69uZcQYccP5ptskMKgfNr9r6nxiFr\n"\
"WfzSecU6YtItChMO7GuMF7MAjuQCDdBXkNdFxQbChbQU31K/JXpZBgGIRb7lVt9X\n"\
"73IisItHVRe7BKcYyTPo4+od9YrJceYrnXvPCQIDAQABAoIBAQCE8NQfNR3ebwtJ\n"\
"NZIFPyV6uOjfgtCGhdKbrvj8cJ/Z/XC/zFH3VV47CZOik49aX8d4yDVt+hiJuQjR\n"\
"Jyzex569CXXI8m6K+QaxaqN7GuGaQb2Z2+f4S6BcKfQ+nYqF/08l40Oo2OTTaLTv\n"\
"gBCmT+47qhl+UNECnDk2NhhU6AbffC2sl7xoF4rXMopTH8xC439EVlSH/CehA5cD\n"\
"wg2tVwD1cOYSvtN/V1hsjlg77dno/jD7pDLFcfIauuTmv/d4gZ8iDxvHSt22c2sV\n"\
"8go/h3GV4FgZSazQUqcVdh7wNuQM13jRU8d0e9eD8ZSdNpJZ3VwukCeV9XzAZTBF\n"\
"C4VfrmIBAoGBAOAGd6h7ZS2uipDVIbrQx35CPBMCOIUutg+Q4sB8w7AkxBIJ3+sj\n"\
"084YJzDwzESYDKtJgQA+RMXmgdIrMtnZimJjbJ+yEBzCWS9ZcveM86xAKsUJ1z6H\n"\
"cxZtoC8afRq6At2ncQ+D0/KXi+dE0XHTaAzpWrbvwAMBOGszVJHGoH7dAoGBANWK\n"\
"GAZ9zxgOKUaSAqBNdZe0Icw6ub5EogXNe5CoXefrVlKhk02VIKD8dzB73AIryNxd\n"\
"8BvQI/o7hBFpJN6QVIky0qhz1PAXTEOhZ5CWrheDWvJzEVbQwrcU0JBSAh7PZ6lI\n"\
"wDNKZFDHmM4mABhBrRdnxnLuNOVrnSBXMLspVDAdAoGBALzf9waPcpB/NchCSTvO\n"\
"RkOG6EtGdgyjg0/AYczT49CgTsa+mJERFcQOzQwQGMhEQXowcJiZ5zXKz+04Cplt\n"\
"NaUaGjzRzY/Rs4ueKLXZmp/BQc36LAVGAZwJNSJBfPSJm1zxjPr9tDY12vhTJxqG\n"\
"mJU6MQdHP2XJI54OGuEEy8/pAoGBAMmCgHuXu5dyvaa34LyPfDnFpeNJQ8D2mYMq\n"\
"TsHK8JsL7TEbApvC78CbnoplR8/Qq8Kw7wYAHANmqJGZjE5vGydBi6OlczuCcNid\n"\
"dtLuLqlHrsp+pc0sQaNthAe9K/0RMjyAx8dfG11TjbJ0D8DUMViV+KK6gbZCIEvF\n"\
"m9ny/VxNAoGAL2Yip+o6m4Bk5t9wTOzE4AJA0YT4qo2tRPQ1ATXaVBGZDdxqb0H4\n"\
"HpOrIV/dV142b9kEWEpeuMO8uJtxuoXJTZsW2EoTKQh4hv5Ls3Ik3/pCyZauq4xL\n"\
"I1qKPumQCu6h3w02tXgdCfxCN88wHCLffzecVbz8M4H8Eqp55stVKXw=\n"\
"-----END RSA PRIVATE KEY-----\n"

/* The constants above are set to const char * pointers defined in aws_demo_runner.c,
 * and externed here for use in C files.  NOTE!  THIS IS DONE FOR CONVENIENCE
 * DURING AN EVALUATION PHASE AND IS NOT GOOD PRACTICE FOR PRODUCTION SYSTEMS 
 * WHICH MUST STORE KEYS SECURELY. */
extern const char clientcredentialCLIENT_CERTIFICATE_PEM[];
extern const char* clientcredentialJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM;
extern const char clientcredentialCLIENT_PRIVATE_KEY_PEM[];
extern const uint32_t clientcredentialCLIENT_CERTIFICATE_LENGTH;
extern const uint32_t clientcredentialCLIENT_PRIVATE_KEY_LENGTH;

#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
