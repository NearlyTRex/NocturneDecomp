; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_httpRequestUpdate_FUN_0057ad10(void *request,char *status_text)
;
; Parameters:
; void *           Stack[0x4]:4   request
; char *           Stack[0x8]:4   status_text
;
; Referenced Globals:
;   undefined1* switchdataD_0057acd8 = 0057ae10
;   undefined1* PTR_caseD_fffffffb_0057ace0 = 0057ae10
;   undefined1* PTR_caseD_fffffffb_0057ace4 = 0057ae10
;   undefined1* PTR_caseD_2_0057acf4 = 0057b4f5
;   TerminatedCString s_Error_connecting_socket_005ed356
;   TerminatedCString s_DNS_error_resolving_s_005ed374
;   TerminatedCString s_Error_contacting_s_005ed38b
;   TerminatedCString s_POST_s_HTTP_1_0_Host_s_d_005ed39f
;   TerminatedCString s_GET_s_HTTP_1_0_Host_s_d_005ed3d5
;   TerminatedCString s_Error_requesting_s_005ed409
;   TerminatedCString s_Error_requesting_s_005ed41d
;   TerminatedCString s_Error_requesting_s_005ed431
;   TerminatedCString s_Unknown_error_005ed445
;   undefined4 s_nknown_error_005ed445+1
;   undefined4 s_known_error_005ed445+2
;   ... and 17 more
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;   crt_stdio.c_sscanf_FUN_005ba8cc
;   crt_string.c__strnicmp_FUN_005b8da0
;   crt_unknown.c_sprintf_FUN_005b7790
;   support_trisock.cpp_CSocket_bindSocket_FUN_005790a0
;   support_trisock.cpp_CSocket_closeSocket_FUN_00579360
;   support_trisock.cpp_CSocket_connectSocket_FUN_005790f0
;   support_trisock.cpp_CSocket_createSocket_FUN_00579030
;   support_trisock.cpp_CSocket_isSocketValid_FUN_00579090
;   support_trisock.cpp_CSocket_pollSocketStatus_FUN_00579150
;   support_trisock.cpp_CSocket_sendSocketData_FUN_005792e0
;   support_trisock.cpp_CSocket_setSocketBlocking_FUN_00579490
;   support_trisock.cpp_dnsRequestGetResult_FUN_0057a7c0
;   support_trisock.cpp_formatSocketAddress_FUN_00578f50
;   support_trisock.cpp_httpRequestGetByte_FUN_0057b680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ad10
        ;   Label: support_trisock.cpp_httpRequestUpdate_FUN_0057ad10
    PUSH ESI                            ; 0057ad11
    PUSH EDI                            ; 0057ad12
    PUSH EBP                            ; 0057ad13
    SUB ESP,0x7f8                       ; 0057ad14
    MOV EBX,dword ptr [ESP + 0x80c]     ; 0057ad1a
    MOV EDX,dword ptr [EBX + 0xd28]     ; 0057ad21
    LEA EAX,[EDX + -0x1]                ; 0057ad27
    CMP EAX,0x3                         ; 0057ad2a
    JA 0x0057adfb                       ; 0057ad2d
        ;   XREF to: 0057adfb (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x57acc8]  ; 0057ad33 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    PUSH 0x5fd370                       ; 0057ad3a | g_IpAddrTypeInfo
        ;   Label: caseD_1
    PUSH 0xc                            ; 0057ad3f
    LEA EAX,[ESP + 0x690]               ; 0057ad41
    PUSH EAX                            ; 0057ad48
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0057ad49
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0057ad4e
    LEA EAX,[ESP + 0x400]               ; 0057ad51
    PUSH EAX                            ; 0057ad58
    LEA EAX,[EBX + 0xd30]               ; 0057ad59
    PUSH EAX                            ; 0057ad5f
    CALL support_trisock.cpp_dnsRequestGetResult_FUN_0057a7c0 ; 0057ad60
        ;   XREF to: 0057a7c0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_dnsRequestGetResult_FUN_0057a7c0(void * request, void * host_info_out)
    LEA EDI,[EBX + 0x400]               ; 0057ad65
    ADD ESP,0x8                         ; 0057ad6b
    CMP EAX,0x2                         ; 0057ad6e
    JNZ 0x0057ae81                      ; 0057ad71
        ;   XREF to: 0057ae81 (CONDITIONAL_JUMP)  ; LAB_0057ae81
    CMP byte ptr [ESP + 0x400],0x0      ; 0057ad77
    JZ 0x0057ada2                       ; 0057ad7f
        ;   XREF to: 0057ada2 (CONDITIONAL_JUMP)  ; LAB_0057ada2
    LEA ESI,[ESP + 0x400]               ; 0057ad81
    PUSH EDI                            ; 0057ad88
    MOV AL,byte ptr [ESI]               ; 0057ad89
        ;   Label: LAB_0057ad89
    MOV byte ptr [EDI],AL               ; 0057ad8b
    CMP AL,0x0                          ; 0057ad8d
    JZ 0x0057ada1                       ; 0057ad8f
        ;   XREF to: 0057ada1 (CONDITIONAL_JUMP)  ; LAB_0057ada1
    MOV AL,byte ptr [ESI + 0x1]         ; 0057ad91
    ADD ESI,0x2                         ; 0057ad94
    MOV byte ptr [EDI + 0x1],AL         ; 0057ad97
    ADD EDI,0x2                         ; 0057ad9a
    CMP AL,0x0                          ; 0057ad9d
    JNZ 0x0057ad89                      ; 0057ad9f
        ;   XREF to: 0057ad89 (CONDITIONAL_JUMP)  ; LAB_0057ad89
    POP EDI                             ; 0057ada1
        ;   Label: LAB_0057ada1
    MOV EAX,dword ptr [ESP + 0x688]     ; 0057ada2
        ;   Label: LAB_0057ada2
    LEA ESI,[EBX + 0xd2c]               ; 0057ada9
    MOV dword ptr [EBX + 0xd28],0x2     ; 0057adaf
    PUSH ESI                            ; 0057adb9
    MOV dword ptr [EBX + 0x600],EAX     ; 0057adba
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_00579360 ; 0057adc0
        ;   XREF to: 00579360 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_00579360(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057adc5
    PUSH ESI                            ; 0057adc8
    CALL support_trisock.cpp_CSocket_createSocket_FUN_00579030 ; 0057adc9
        ;   XREF to: 00579030 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_createSocket_FUN_00579030(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057adce
    PUSH 0x0                            ; 0057add1
    PUSH ESI                            ; 0057add3
    CALL support_trisock.cpp_CSocket_setSocketBlocking_FUN_00579490 ; 0057add4
        ;   XREF to: 00579490 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_setSocketBlocking_FUN_00579490(CSocket * this_ptr, int blocking_mode)
    ADD ESP,0x8                         ; 0057add9
    PUSH 0x0                            ; 0057addc
    PUSH ESI                            ; 0057adde
    CALL support_trisock.cpp_CSocket_bindSocket_FUN_005790a0 ; 0057addf
        ;   XREF to: 005790a0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_bindSocket_FUN_005790a0(CSocket * this_ptr, ushort port)
    ADD ESP,0x8                         ; 0057ade4
    LEA EAX,[EBX + 0x600]               ; 0057ade7
    PUSH EAX                            ; 0057aded
    PUSH ESI                            ; 0057adee
    CALL support_trisock.cpp_CSocket_connectSocket_FUN_005790f0 ; 0057adef
        ;   XREF to: 005790f0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_connectSocket_FUN_005790f0(CSocket * this_ptr, SNetworkAddr * dest_addr)
    ADD ESP,0x8                         ; 0057adf4
    TEST EAX,EAX                        ; 0057adf7
    JZ 0x0057ae57                       ; 0057adf9
        ;   XREF to: 0057ae57 (CONDITIONAL_JUMP)  ; LAB_0057ae57
    MOV EAX,dword ptr [EBX + 0xd28]     ; 0057adfb
        ;   Label: default
    ADD EAX,0x5                         ; 0057ae01
    CMP EAX,0xa                         ; 0057ae04
    JA 0x0057ae10                       ; 0057ae07
        ;   XREF to: 0057ae10 (CONDITIONAL_JUMP)  ; caseD_ffffffff
    JMP dword ptr [EAX*0x4 + 0x57acd8]  ; 0057ae09 | caseD_ffffffff | caseD_0 | caseD_1
        ;   Label: switchD
    LEA EAX,[EBX + 0xd2c]               ; 0057ae10
        ;   Label: caseD_fffffffb
    PUSH EAX                            ; 0057ae16
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_00579360 ; 0057ae17
        ;   XREF to: 00579360 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_00579360(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057ae1c
    LEA ESI,[EBX + 0xa18]               ; 0057ae1f
    MOV EDI,dword ptr [ESP + 0x810]     ; 0057ae25
        ;   Label: LAB_0057ae25
    PUSH EDI                            ; 0057ae2c
    MOV AL,byte ptr [ESI]               ; 0057ae2d | = "Done" | s_ne_005ed519+2
        ;   Label: LAB_0057ae2d
    MOV byte ptr [EDI],AL               ; 0057ae2f
    CMP AL,0x0                          ; 0057ae31
    JZ 0x0057ae45                       ; 0057ae33
        ;   XREF to: 0057ae45 (CONDITIONAL_JUMP)  ; LAB_0057ae45
    MOV AL,byte ptr [ESI + 0x1]         ; 0057ae35 | s_one_005ed519+1 | s_e_005ed519+3
    ADD ESI,0x2                         ; 0057ae38
    MOV byte ptr [EDI + 0x1],AL         ; 0057ae3b
    ADD EDI,0x2                         ; 0057ae3e
    CMP AL,0x0                          ; 0057ae41
    JNZ 0x0057ae2d                      ; 0057ae43
        ;   XREF to: 0057ae2d (CONDITIONAL_JUMP)  ; LAB_0057ae2d
    POP EDI                             ; 0057ae45
        ;   Label: LAB_0057ae45
    MOV EAX,dword ptr [EBX + 0xd28]     ; 0057ae46
    ADD ESP,0x7f8                       ; 0057ae4c
    POP EBP                             ; 0057ae52
    POP EDI                             ; 0057ae53
    POP ESI                             ; 0057ae54
    POP EBX                             ; 0057ae55
    RET                                 ; 0057ae56
    LEA EAX,[EBX + 0x400]               ; 0057ae57
        ;   Label: LAB_0057ae57
    PUSH EAX                            ; 0057ae5d
    PUSH 0x5ed356                       ; 0057ae5e | = "Error connecting socket to %s"
    LEA EAX,[EBX + 0xa18]               ; 0057ae63
    PUSH EAX                            ; 0057ae69
    MOV dword ptr [EBX + 0xd28],0xfffffffd ; 0057ae6a
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057ae74
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057ae79
    JMP 0x0057adfb                      ; 0057ae7c
        ;   XREF to: 0057adfb (UNCONDITIONAL_JUMP)  ; default
    CMP EAX,0x1                         ; 0057ae81
        ;   Label: LAB_0057ae81
    JZ 0x0057adfb                       ; 0057ae84
        ;   XREF to: 0057adfb (CONDITIONAL_JUMP)  ; default
    PUSH EDI                            ; 0057ae8a
    PUSH 0x5ed374                       ; 0057ae8b | = "DNS error resolving %s"
    LEA EAX,[EBX + 0xa18]               ; 0057ae90
    PUSH EAX                            ; 0057ae96
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057ae97
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057ae9c
    MOV dword ptr [EBX + 0xd28],0xfffffffe ; 0057ae9f
    JMP 0x0057adfb                      ; 0057aea9
        ;   XREF to: 0057adfb (UNCONDITIONAL_JUMP)  ; default
    LEA ESI,[EBX + 0xd2c]               ; 0057aeae
        ;   Label: caseD_2
    MOV EAX,0x4                         ; 0057aeb4
    PUSH ESI                            ; 0057aeb9
    MOV dword ptr [ESP + 0x7e4],EAX     ; 0057aeba
    CALL support_trisock.cpp_CSocket_isSocketValid_FUN_00579090 ; 0057aec1
        ;   XREF to: 00579090 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_isSocketValid_FUN_00579090(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057aec6
    TEST EAX,EAX                        ; 0057aec9
    JZ 0x0057aedd                       ; 0057aecb
        ;   XREF to: 0057aedd (CONDITIONAL_JUMP)  ; LAB_0057aedd
    PUSH ESI                            ; 0057aecd
    CALL support_trisock.cpp_CSocket_pollSocketStatus_FUN_00579150 ; 0057aece
        ;   XREF to: 00579150 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_pollSocketStatus_FUN_00579150(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057aed3
    MOV dword ptr [ESP + 0x7e0],EAX     ; 0057aed6
    MOV DH,byte ptr [ESP + 0x7e0]       ; 0057aedd
        ;   Label: LAB_0057aedd
    TEST DH,0x4                         ; 0057aee4
    JNZ 0x0057b009                      ; 0057aee7
        ;   XREF to: 0057b009 (CONDITIONAL_JUMP)  ; LAB_0057b009
    TEST DH,0x2                         ; 0057aeed
    JZ 0x0057adfb                       ; 0057aef0
        ;   XREF to: 0057adfb (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0xd18],0x0     ; 0057aef6
    MOV EDX,dword ptr [EBX + 0xd20]     ; 0057af00
    MOV dword ptr [EBX + 0xd28],0x3     ; 0057af06
    TEST EDX,EDX                        ; 0057af10
    JZ 0x0057af77                       ; 0057af12
        ;   XREF to: 0057af77 (CONDITIONAL_JUMP)  ; LAB_0057af77
    MOV EAX,EDX                         ; 0057af14
    PUSH EAX                            ; 0057af16
    MOV EDX,dword ptr [EDX]             ; 0057af17
    CALL dword ptr [EDX + 0x18]         ; 0057af19
    MOV ESI,EAX                         ; 0057af1c
    ADD ESP,0x4                         ; 0057af1e
    TEST EAX,EAX                        ; 0057af21
    JL 0x0057af77                       ; 0057af23
        ;   XREF to: 0057af77 (CONDITIONAL_JUMP)  ; LAB_0057af77
    PUSH 0x2                            ; 0057af25
    MOV EAX,dword ptr [EBX + 0xd20]     ; 0057af27
    PUSH 0x0                            ; 0057af2d
    MOV EDX,dword ptr [EAX]             ; 0057af2f
    PUSH EAX                            ; 0057af31
    CALL dword ptr [EDX + 0x14]         ; 0057af32
    ADD ESP,0xc                         ; 0057af35
    MOV EAX,dword ptr [EBX + 0xd20]     ; 0057af38
    PUSH EAX                            ; 0057af3e
    MOV EDX,dword ptr [EAX]             ; 0057af3f
    CALL dword ptr [EDX + 0x18]         ; 0057af41
    ADD ESP,0x4                         ; 0057af44
    MOV dword ptr [EBX + 0xd18],EAX     ; 0057af47
    PUSH 0x0                            ; 0057af4d
    MOV EAX,dword ptr [EBX + 0xd20]     ; 0057af4f
    PUSH ESI                            ; 0057af55
    MOV EDX,dword ptr [EAX]             ; 0057af56
    PUSH EAX                            ; 0057af58
    CALL dword ptr [EDX + 0x14]         ; 0057af59
    MOV ECX,dword ptr [EBX + 0xd18]     ; 0057af5c
    ADD ESP,0xc                         ; 0057af62
    TEST ECX,ECX                        ; 0057af65
    JL 0x0057b033                       ; 0057af67
        ;   XREF to: 0057b033 (CONDITIONAL_JUMP)  ; LAB_0057b033
    MOV EDI,ECX                         ; 0057af6d
    SUB EDI,ESI                         ; 0057af6f
    MOV dword ptr [EBX + 0xd18],EDI     ; 0057af71
    MOV EBP,dword ptr [EBX + 0xd18]     ; 0057af77
        ;   Label: LAB_0057af77
    TEST EBP,EBP                        ; 0057af7d
    JLE 0x0057b03d                      ; 0057af7f
        ;   XREF to: 0057b03d (CONDITIONAL_JUMP)  ; LAB_0057b03d
    MOV EAX,EBP                         ; 0057af85
    XOR EAX,EBP                         ; 0057af87
    PUSH EBP                            ; 0057af89
    MOV AX,word ptr [EBX + 0x604]       ; 0057af8a
    PUSH EAX                            ; 0057af91
    LEA EAX,[EBX + 0x400]               ; 0057af92
    PUSH EAX                            ; 0057af98
    LEA EAX,[EBX + 0x500]               ; 0057af99
    PUSH EAX                            ; 0057af9f
    PUSH 0x5ed39f                       ; 0057afa0 | = "POST %s HTTP/1.0\r\nHost: %s:%d\r\nCo..."
    LEA EAX,[ESP + 0x14]                ; 0057afa5
    PUSH EAX                            ; 0057afa9
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057afaa
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x18                        ; 0057afaf
    PUSH 0x0                            ; 0057afb2
        ;   Label: LAB_0057afb2
    LEA EDI,[ESP + 0x4]                 ; 0057afb4
    SUB ECX,ECX                         ; 0057afb8
    DEC ECX                             ; 0057afba
    XOR EAX,EAX                         ; 0057afbb
    SCASB.REPNE ES:EDI                  ; 0057afbd
    NOT ECX                             ; 0057afbf
    DEC ECX                             ; 0057afc1
    PUSH ECX                            ; 0057afc2
    LEA EAX,[ESP + 0x8]                 ; 0057afc3
    PUSH EAX                            ; 0057afc7
    LEA EAX,[EBX + 0xd2c]               ; 0057afc8
    PUSH EAX                            ; 0057afce
    CALL support_trisock.cpp_CSocket_sendSocketData_FUN_005792e0 ; 0057afcf
        ;   XREF to: 005792e0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_sendSocketData_FUN_005792e0(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * dest_addr)
    ADD ESP,0x10                        ; 0057afd4
    TEST EAX,EAX                        ; 0057afd7
    JNZ 0x0057adfb                      ; 0057afd9
        ;   XREF to: 0057adfb (CONDITIONAL_JUMP)  ; default
    LEA EAX,[EBX + 0x500]               ; 0057afdf
    PUSH EAX                            ; 0057afe5
    PUSH 0x5ed409                       ; 0057afe6 | = "Error requesting %s"
    LEA EAX,[EBX + 0xa18]               ; 0057afeb
    PUSH EAX                            ; 0057aff1
    MOV dword ptr [EBX + 0xd28],0xfffffffc ; 0057aff2
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057affc
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057b001
    JMP 0x0057adfb                      ; 0057b004
        ;   XREF to: 0057adfb (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EBX + 0x400]               ; 0057b009
        ;   Label: LAB_0057b009
    PUSH EAX                            ; 0057b00f
    PUSH 0x5ed38b                       ; 0057b010 | = "Error contacting %s"
    LEA EAX,[EBX + 0xa18]               ; 0057b015
    PUSH EAX                            ; 0057b01b
    MOV dword ptr [EBX + 0xd28],0xfffffffd ; 0057b01c
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057b026
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057b02b
    JMP 0x0057adfb                      ; 0057b02e
        ;   XREF to: 0057adfb (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0xd18],0x0     ; 0057b033
        ;   Label: LAB_0057b033
    XOR EAX,EAX                         ; 0057b03d
        ;   Label: LAB_0057b03d
    MOV AX,word ptr [EBX + 0x604]       ; 0057b03f
    PUSH EAX                            ; 0057b046
    LEA EAX,[EBX + 0x400]               ; 0057b047
    PUSH EAX                            ; 0057b04d
    LEA EAX,[EBX + 0x500]               ; 0057b04e
    PUSH EAX                            ; 0057b054
    PUSH 0x5ed3d5                       ; 0057b055 | = "GET %s HTTP/1.0\r\nHost: %s:%d\r\nCon..."
    LEA EAX,[ESP + 0x10]                ; 0057b05a
    PUSH EAX                            ; 0057b05e
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057b05f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x14                        ; 0057b064
    JMP 0x0057afb2                      ; 0057b067
        ;   XREF to: 0057afb2 (UNCONDITIONAL_JUMP)  ; LAB_0057afb2
    LEA ESI,[EBX + 0xd2c]               ; 0057b06c
        ;   Label: caseD_3
    MOV EDX,0x4                         ; 0057b072
    PUSH ESI                            ; 0057b077
    MOV dword ptr [ESP + 0x7ec],EDX     ; 0057b078
    CALL support_trisock.cpp_CSocket_isSocketValid_FUN_00579090 ; 0057b07f
        ;   XREF to: 00579090 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_isSocketValid_FUN_00579090(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057b084
    TEST EAX,EAX                        ; 0057b087
    JZ 0x0057b09b                       ; 0057b089
        ;   XREF to: 0057b09b (CONDITIONAL_JUMP)  ; LAB_0057b09b
    PUSH ESI                            ; 0057b08b
    CALL support_trisock.cpp_CSocket_pollSocketStatus_FUN_00579150 ; 0057b08c
        ;   XREF to: 00579150 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_pollSocketStatus_FUN_00579150(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057b091
    MOV dword ptr [ESP + 0x7e8],EAX     ; 0057b094
    MOV AH,byte ptr [ESP + 0x7e8]       ; 0057b09b
        ;   Label: LAB_0057b09b
    TEST AH,0x4                         ; 0057b0a2
    JNZ 0x0057b139                      ; 0057b0a5
        ;   XREF to: 0057b139 (CONDITIONAL_JUMP)  ; LAB_0057b139
    MOV ECX,dword ptr [EBX + 0xd18]     ; 0057b0ab
    TEST ECX,ECX                        ; 0057b0b1
    JLE 0x0057b16a                      ; 0057b0b3
        ;   XREF to: 0057b16a (CONDITIONAL_JUMP)  ; LAB_0057b16a
    TEST AH,0x2                         ; 0057b0b9
    JZ 0x0057adfb                       ; 0057b0bc
        ;   XREF to: 0057adfb (CONDITIONAL_JUMP)  ; default
    MOV ESI,0x200                       ; 0057b0c2
    CMP ECX,ESI                         ; 0057b0c7
    JGE 0x0057b0cd                      ; 0057b0c9
        ;   XREF to: 0057b0cd (CONDITIONAL_JUMP)  ; LAB_0057b0cd
    MOV ESI,ECX                         ; 0057b0cb
    PUSH ESI                            ; 0057b0cd
        ;   Label: LAB_0057b0cd
    LEA EBP,[EBX + 0x610]               ; 0057b0ce
    MOV EAX,dword ptr [EBX + 0xd20]     ; 0057b0d4
    PUSH EBP                            ; 0057b0da
    MOV EDX,dword ptr [EAX]             ; 0057b0db
    PUSH EAX                            ; 0057b0dd
    CALL dword ptr [EDX + 0x10]         ; 0057b0de
    ADD ESP,0xc                         ; 0057b0e1
    MOV EDI,EAX                         ; 0057b0e4
    CMP EAX,ESI                         ; 0057b0e6
    JNZ 0x0057b107                      ; 0057b0e8
        ;   XREF to: 0057b107 (CONDITIONAL_JUMP)  ; LAB_0057b107
    PUSH 0x0                            ; 0057b0ea
    PUSH ESI                            ; 0057b0ec
    PUSH EBP                            ; 0057b0ed
    LEA EAX,[EBX + 0xd2c]               ; 0057b0ee
    PUSH EAX                            ; 0057b0f4
    CALL support_trisock.cpp_CSocket_sendSocketData_FUN_005792e0 ; 0057b0f5
        ;   XREF to: 005792e0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_sendSocketData_FUN_005792e0(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * dest_addr)
    ADD ESP,0x10                        ; 0057b0fa
    TEST EAX,EAX                        ; 0057b0fd
    JZ 0x0057b163                       ; 0057b0ff
        ;   XREF to: 0057b163 (CONDITIONAL_JUMP)  ; LAB_0057b163
    SUB dword ptr [EBX + 0xd18],ESI     ; 0057b101
    CMP EDI,ESI                         ; 0057b107
        ;   Label: LAB_0057b107
    JZ 0x0057adfb                       ; 0057b109
        ;   XREF to: 0057adfb (CONDITIONAL_JUMP)  ; default
    LEA EAX,[EBX + 0x400]               ; 0057b10f
    PUSH EAX                            ; 0057b115
    PUSH 0x5ed431                       ; 0057b116 | = "Error requesting %s"
    LEA EAX,[EBX + 0xa18]               ; 0057b11b
    PUSH EAX                            ; 0057b121
    MOV dword ptr [EBX + 0xd28],0xfffffffc ; 0057b122
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057b12c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057b131
    JMP 0x0057adfb                      ; 0057b134
        ;   XREF to: 0057adfb (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EBX + 0x400]               ; 0057b139
        ;   Label: LAB_0057b139
    PUSH EAX                            ; 0057b13f
    PUSH 0x5ed41d                       ; 0057b140 | = "Error requesting %s"
    LEA EAX,[EBX + 0xa18]               ; 0057b145
    PUSH EAX                            ; 0057b14b
    MOV dword ptr [EBX + 0xd28],0xfffffffc ; 0057b14c
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057b156
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057b15b
    JMP 0x0057adfb                      ; 0057b15e
        ;   XREF to: 0057adfb (UNCONDITIONAL_JUMP)  ; default
    MOV EDI,0xffffffff                  ; 0057b163
        ;   Label: LAB_0057b163
    JMP 0x0057b107                      ; 0057b168
        ;   XREF to: 0057b107 (UNCONDITIONAL_JUMP)  ; LAB_0057b107
    MOV byte ptr [EBX + 0x810],0x0      ; 0057b16a
        ;   Label: LAB_0057b16a
    MOV dword ptr [EBX + 0xd1c],0x0     ; 0057b171
    MOV dword ptr [EBX + 0xd28],0x4     ; 0057b17b
    JMP 0x0057adfb                      ; 0057b185
        ;   XREF to: 0057adfb (UNCONDITIONAL_JUMP)  ; default
    CMP EDX,0x4                         ; 0057b18a
        ;   Label: caseD_4
    JNZ 0x0057adfb                      ; 0057b18d
        ;   XREF to: 0057adfb (CONDITIONAL_JUMP)  ; default
    LEA EAX,[EBX + 0x610]               ; 0057b193
    MOV dword ptr [ESP + 0x7ec],EAX     ; 0057b199
    LEA EAX,[EBX + 0xa18]               ; 0057b1a0
    MOV dword ptr [ESP + 0x7e4],EAX     ; 0057b1a6
    LEA EAX,[EBX + 0x60c]               ; 0057b1ad
    MOV dword ptr [ESP + 0x7f4],EAX     ; 0057b1b3
    LEA EAX,[EBX + 0x81f]               ; 0057b1ba
    LEA EBP,[EBX + 0x810]               ; 0057b1c0
    MOV dword ptr [ESP + 0x7f0],EAX     ; 0057b1c6
    LEA EAX,[EBX + 0xd2c]               ; 0057b1cd
    MOV dword ptr [ESP + 0x7dc],EAX     ; 0057b1d3
    CMP dword ptr [EBX + 0xd1c],0x2     ; 0057b1da
        ;   Label: LAB_0057b1da
    JGE 0x0057b3f5                      ; 0057b1e1
        ;   XREF to: 0057b3f5 (CONDITIONAL_JUMP)  ; LAB_0057b3f5
    MOV EDI,EBP                         ; 0057b1e7
    SUB ECX,ECX                         ; 0057b1e9
    DEC ECX                             ; 0057b1eb
    XOR EAX,EAX                         ; 0057b1ec
    SCASB.REPNE ES:EDI                  ; 0057b1ee
    NOT ECX                             ; 0057b1f0
    DEC ECX                             ; 0057b1f2
    MOV EDI,ECX                         ; 0057b1f3
    LEA ESI,[ECX + EBX*0x1]             ; 0057b1f5
    PUSH 0x0                            ; 0057b1f8
        ;   Label: LAB_0057b1f8
    PUSH EBX                            ; 0057b1fa
    MOV byte ptr [ESI + 0x810],0x0      ; 0057b1fb
    CALL support_trisock.cpp_httpRequestGetByte_FUN_0057b680 ; 0057b202
        ;   XREF to: 0057b680 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_httpRequestGetByte_FUN_0057b680(void * request, int non_blocking)
    ADD ESP,0x8                         ; 0057b207
    MOV EDX,EAX                         ; 0057b20a
    TEST EAX,EAX                        ; 0057b20c
    JL 0x0057adfb                       ; 0057b20e
        ;   XREF to: 0057adfb (CONDITIONAL_JUMP)  ; default
    CMP EAX,0xd                         ; 0057b214
    JZ 0x0057b1f8                       ; 0057b217
        ;   XREF to: 0057b1f8 (CONDITIONAL_JUMP)  ; LAB_0057b1f8
    CMP EAX,0xa                         ; 0057b219
    JNZ 0x0057b2dc                      ; 0057b21c
        ;   XREF to: 0057b2dc (CONDITIONAL_JUMP)  ; LAB_0057b2dc
    TEST EDI,EDI                        ; 0057b222
    JL 0x0057adfb                       ; 0057b224
        ;   XREF to: 0057adfb (CONDITIONAL_JUMP)  ; default
    MOV EDX,dword ptr [EBX + 0xd1c]     ; 0057b22a
    TEST EDX,EDX                        ; 0057b230
    JNZ 0x0057b373                      ; 0057b232
        ;   XREF to: 0057b373 (CONDITIONAL_JUMP)  ; LAB_0057b373
    MOV EAX,0xffffffff                  ; 0057b238
    MOV ESI,0x5ed445                    ; 0057b23d | = "Unknown error"
    LEA EDI,[ESP + 0x6b8]               ; 0057b242
    MOV dword ptr [ESP + 0x7d8],EAX     ; 0057b249
    PUSH EDI                            ; 0057b250
    MOV AL,byte ptr [ESI]               ; 0057b251 | = "Unknown error" | s_known_error_005ed445+2
        ;   Label: LAB_0057b251
    MOV byte ptr [EDI],AL               ; 0057b253
    CMP AL,0x0                          ; 0057b255
    JZ 0x0057b269                       ; 0057b257
        ;   XREF to: 0057b269 (CONDITIONAL_JUMP)  ; LAB_0057b269
    MOV AL,byte ptr [ESI + 0x1]         ; 0057b259 | s_nknown_error_005ed445+1 | s_nown_error_005ed445+3
    ADD ESI,0x2                         ; 0057b25c
    MOV byte ptr [EDI + 0x1],AL         ; 0057b25f
    ADD EDI,0x2                         ; 0057b262
    CMP AL,0x0                          ; 0057b265
    JNZ 0x0057b251                      ; 0057b267
        ;   XREF to: 0057b251 (CONDITIONAL_JUMP)  ; LAB_0057b251
    POP EDI                             ; 0057b269
        ;   Label: LAB_0057b269
    LEA EAX,[ESP + 0x6b8]               ; 0057b26a
    PUSH EAX                            ; 0057b271
    LEA EAX,[ESP + 0x7dc]               ; 0057b272
    PUSH EAX                            ; 0057b279
    PUSH 0x5ed453                       ; 0057b27a | = "%*[^ ]%d %255[^\n]"
    MOV EDX,dword ptr [ESP + 0x7f8]     ; 0057b27f
    PUSH EDX                            ; 0057b286
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0057b287
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 0057b28c
    MOV ECX,dword ptr [ESP + 0x7d8]     ; 0057b28f
    CMP ECX,-0x1                        ; 0057b296
    JZ 0x0057b2f5                       ; 0057b299
        ;   XREF to: 0057b2f5 (CONDITIONAL_JUMP)  ; LAB_0057b2f5
    CMP ECX,0x190                       ; 0057b29b
    JGE 0x0057b319                      ; 0057b2a1
        ;   XREF to: 0057b319 (CONDITIONAL_JUMP)  ; LAB_0057b319
    CMP ECX,0x12c                       ; 0057b2a3
    JGE 0x0057b346                      ; 0057b2a9
        ;   XREF to: 0057b346 (CONDITIONAL_JUMP)  ; LAB_0057b346
    MOV dword ptr [EBX + 0x60c],0xffffffff ; 0057b2af
    MOV byte ptr [EBX + 0x810],0x0      ; 0057b2b9
    MOV dword ptr [EBX + 0xd1c],0x1     ; 0057b2c0
    CMP dword ptr [EBX + 0xd28],0x4     ; 0057b2ca
        ;   Label: LAB_0057b2ca
    JZ 0x0057b1da                       ; 0057b2d1
        ;   XREF to: 0057b1da (CONDITIONAL_JUMP)  ; LAB_0057b1da
    JMP 0x0057adfb                      ; 0057b2d7
        ;   XREF to: 0057adfb (UNCONDITIONAL_JUMP)  ; default
    CMP EDI,0x1ff                       ; 0057b2dc
        ;   Label: LAB_0057b2dc
    JNC 0x0057b1f8                      ; 0057b2e2
        ;   XREF to: 0057b1f8 (CONDITIONAL_JUMP)  ; LAB_0057b1f8
    INC ESI                             ; 0057b2e8
    INC EDI                             ; 0057b2e9
    MOV byte ptr [ESI + 0x80f],AL       ; 0057b2ea
    JMP 0x0057b1f8                      ; 0057b2f0
        ;   XREF to: 0057b1f8 (UNCONDITIONAL_JUMP)  ; LAB_0057b1f8
    PUSH 0x5ed465                       ; 0057b2f5 | = "Invalid HTTP header returned by server"
        ;   Label: LAB_0057b2f5
    MOV ESI,dword ptr [ESP + 0x7e8]     ; 0057b2fa
    PUSH ESI                            ; 0057b301
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057b302
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x8                         ; 0057b307
    MOV dword ptr [EBX + 0xd28],0xfffffffb ; 0057b30a
    JMP 0x0057adfb                      ; 0057b314
        ;   XREF to: 0057adfb (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x6b8]               ; 0057b319
        ;   Label: LAB_0057b319
    PUSH EAX                            ; 0057b320
    PUSH ECX                            ; 0057b321
    PUSH 0x5ed48c                       ; 0057b322 | = "%d: %s"
    MOV ECX,dword ptr [ESP + 0x7f0]     ; 0057b327
    PUSH ECX                            ; 0057b32e
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057b32f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 0057b334
    MOV dword ptr [EBX + 0xd28],0xfffffffb ; 0057b337
    JMP 0x0057adfb                      ; 0057b341
        ;   XREF to: 0057adfb (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x6b8]               ; 0057b346
        ;   Label: LAB_0057b346
    PUSH EAX                            ; 0057b34d
    PUSH ECX                            ; 0057b34e
    PUSH 0x5ed493                       ; 0057b34f | = "Not implemented: %d: %s"
    MOV EAX,dword ptr [ESP + 0x7f0]     ; 0057b354
    PUSH EAX                            ; 0057b35b
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057b35c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 0057b361
    MOV dword ptr [EBX + 0xd28],0xfffffffb ; 0057b364
    JMP 0x0057adfb                      ; 0057b36e
        ;   XREF to: 0057adfb (UNCONDITIONAL_JUMP)  ; default
    CMP EDX,0x1                         ; 0057b373
        ;   Label: LAB_0057b373
    JNZ 0x0057b2ca                      ; 0057b376
        ;   XREF to: 0057b2ca (CONDITIONAL_JUMP)  ; LAB_0057b2ca
    CMP byte ptr [EBX + 0x810],0x0      ; 0057b37c
    JNZ 0x0057b3ab                      ; 0057b383
        ;   XREF to: 0057b3ab (CONDITIONAL_JUMP)  ; LAB_0057b3ab
    MOV dword ptr [EBX + 0xd1c],0x2     ; 0057b385
    MOV dword ptr [EBX + 0x608],0x0     ; 0057b38f
    CMP dword ptr [EBX + 0xd28],0x4     ; 0057b399
    JZ 0x0057b1da                       ; 0057b3a0
        ;   XREF to: 0057b1da (CONDITIONAL_JUMP)  ; LAB_0057b1da
    JMP 0x0057adfb                      ; 0057b3a6
        ;   XREF to: 0057adfb (UNCONDITIONAL_JUMP)  ; default
    PUSH 0xf                            ; 0057b3ab
        ;   Label: LAB_0057b3ab
    PUSH 0x5ed4ab                       ; 0057b3ad | = "Content-length:"
    PUSH EBP                            ; 0057b3b2
    CALL crt_string.c__strnicmp_FUN_005b8da0 ; 0057b3b3
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005b8da0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0057b3b8
    TEST EAX,EAX                        ; 0057b3bb
    JNZ 0x0057b3dc                      ; 0057b3bd
        ;   XREF to: 0057b3dc (CONDITIONAL_JUMP)  ; LAB_0057b3dc
    MOV ESI,dword ptr [ESP + 0x7f4]     ; 0057b3bf
    PUSH ESI                            ; 0057b3c6
    PUSH 0x5ed4bb                       ; 0057b3c7 | = "%d"
    MOV EDI,dword ptr [ESP + 0x7f8]     ; 0057b3cc
    PUSH EDI                            ; 0057b3d3
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0057b3d4
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 0057b3d9
    MOV byte ptr [EBX + 0x810],0x0      ; 0057b3dc
        ;   Label: LAB_0057b3dc
    CMP dword ptr [EBX + 0xd28],0x4     ; 0057b3e3
    JZ 0x0057b1da                       ; 0057b3ea
        ;   XREF to: 0057b1da (CONDITIONAL_JUMP)  ; LAB_0057b1da
    JMP 0x0057adfb                      ; 0057b3f0
        ;   XREF to: 0057adfb (UNCONDITIONAL_JUMP)  ; default
    XOR EDI,EDI                         ; 0057b3f5
        ;   Label: LAB_0057b3f5
    MOV ESI,dword ptr [EBX + 0x60c]     ; 0057b3f7
        ;   Label: LAB_0057b3f7
    CMP EDI,ESI                         ; 0057b3fd
    JG 0x0057b409                       ; 0057b3ff
        ;   XREF to: 0057b409 (CONDITIONAL_JUMP)  ; LAB_0057b409
    CMP ESI,dword ptr [EBX + 0x608]     ; 0057b401
    JLE 0x0057b455                      ; 0057b407
        ;   XREF to: 0057b455 (CONDITIONAL_JUMP)  ; LAB_0057b455
    CMP EDI,dword ptr [EBX + 0x60c]     ; 0057b409
        ;   Label: LAB_0057b409
    SETG AL                             ; 0057b40f
    AND EAX,0xff                        ; 0057b412
    PUSH EAX                            ; 0057b417
    PUSH EBX                            ; 0057b418
    CALL support_trisock.cpp_httpRequestGetByte_FUN_0057b680 ; 0057b419
        ;   XREF to: 0057b680 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_httpRequestGetByte_FUN_0057b680(void * request, int non_blocking)
    ADD ESP,0x8                         ; 0057b41e
    MOV EDX,EAX                         ; 0057b421
    CMP EAX,-0x2                        ; 0057b423
    JZ 0x0057b481                       ; 0057b426
        ;   XREF to: 0057b481 (CONDITIONAL_JUMP)  ; LAB_0057b481
    TEST EAX,EAX                        ; 0057b428
    JL 0x0057b2ca                       ; 0057b42a
        ;   XREF to: 0057b2ca (CONDITIONAL_JUMP)  ; LAB_0057b2ca
    MOV EAX,dword ptr [EBX + 0xd24]     ; 0057b430
    MOV ESI,dword ptr [EAX]             ; 0057b436
    AND EDX,0xff                        ; 0057b438
    PUSH EDX                            ; 0057b43e
    PUSH EAX                            ; 0057b43f
    CALL dword ptr [ESI + 0x4]          ; 0057b440
    MOV ESI,dword ptr [EBX + 0x608]     ; 0057b443
    INC ESI                             ; 0057b449
    ADD ESP,0x8                         ; 0057b44a
    MOV dword ptr [EBX + 0x608],ESI     ; 0057b44d
    JMP 0x0057b3f7                      ; 0057b453
        ;   XREF to: 0057b3f7 (UNCONDITIONAL_JUMP)  ; LAB_0057b3f7
    MOV EAX,dword ptr [ESP + 0x7dc]     ; 0057b455
        ;   Label: LAB_0057b455
    PUSH EAX                            ; 0057b45c
    MOV dword ptr [EBX + 0xd28],0x5     ; 0057b45d
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_00579360 ; 0057b467
        ;   XREF to: 00579360 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_00579360(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057b46c
    CMP dword ptr [EBX + 0xd28],0x4     ; 0057b46f
    JZ 0x0057b1da                       ; 0057b476
        ;   XREF to: 0057b1da (CONDITIONAL_JUMP)  ; LAB_0057b1da
    JMP 0x0057adfb                      ; 0057b47c
        ;   XREF to: 0057adfb (UNCONDITIONAL_JUMP)  ; default
    MOV EDI,dword ptr [ESP + 0x7dc]     ; 0057b481
        ;   Label: LAB_0057b481
    PUSH EDI                            ; 0057b488
    MOV dword ptr [EBX + 0xd28],0x5     ; 0057b489
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_00579360 ; 0057b493
        ;   XREF to: 00579360 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_00579360(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057b498
    CMP dword ptr [EBX + 0xd28],0x4     ; 0057b49b
    JZ 0x0057b1da                       ; 0057b4a2
        ;   XREF to: 0057b1da (CONDITIONAL_JUMP)  ; LAB_0057b1da
    JMP 0x0057adfb                      ; 0057b4a8
        ;   XREF to: 0057adfb (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESP + 0x810]     ; 0057b4ad
        ;   Label: caseD_0
    MOV byte ptr [EAX],0x0              ; 0057b4b4
    MOV EAX,dword ptr [EBX + 0xd28]     ; 0057b4b7
    ADD ESP,0x7f8                       ; 0057b4bd
    POP EBP                             ; 0057b4c3
    POP EDI                             ; 0057b4c4
    POP ESI                             ; 0057b4c5
    POP EBX                             ; 0057b4c6
    RET                                 ; 0057b4c7
    LEA EAX,[EBX + 0x400]               ; 0057b4c8
        ;   Label: caseD_1
    PUSH EAX                            ; 0057b4ce
    PUSH 0x5ed4be                       ; 0057b4cf | = "Looking up %s..."
    MOV EDI,dword ptr [ESP + 0x818]     ; 0057b4d4
    PUSH EDI                            ; 0057b4db
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057b4dc
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057b4e1
    MOV EAX,dword ptr [EBX + 0xd28]     ; 0057b4e4
    ADD ESP,0x7f8                       ; 0057b4ea
    POP EBP                             ; 0057b4f0
    POP EDI                             ; 0057b4f1
    POP ESI                             ; 0057b4f2
    POP EBX                             ; 0057b4f3
    RET                                 ; 0057b4f4
    LEA EAX,[ESP + 0x7b8]               ; 0057b4f5
        ;   Label: caseD_2
    PUSH EAX                            ; 0057b4fc
    LEA EAX,[EBX + 0x600]               ; 0057b4fd
    PUSH EAX                            ; 0057b503
    CALL support_trisock.cpp_formatSocketAddress_FUN_00578f50 ; 0057b504
        ;   XREF to: 00578f50 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_formatSocketAddress_FUN_00578f50(SNetworkAddr * network_addr, char * output_buffer)
    ADD ESP,0x8                         ; 0057b509
    LEA EAX,[ESP + 0x7b8]               ; 0057b50c
    PUSH EAX                            ; 0057b513
    PUSH 0x5ed4cf                       ; 0057b514 | = "Contacting %s..."
    MOV ESI,dword ptr [ESP + 0x818]     ; 0057b519
    PUSH ESI                            ; 0057b520
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057b521
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057b526
    MOV EAX,dword ptr [EBX + 0xd28]     ; 0057b529
    ADD ESP,0x7f8                       ; 0057b52f
    POP EBP                             ; 0057b535
    POP EDI                             ; 0057b536
    POP ESI                             ; 0057b537
    POP EBX                             ; 0057b538
    RET                                 ; 0057b539
    LEA EAX,[EBX + 0x500]               ; 0057b53a
        ;   Label: caseD_3
    PUSH EAX                            ; 0057b540
    PUSH 0x5ed4e0                       ; 0057b541 | = "Requesting %s..."
    MOV ECX,dword ptr [ESP + 0x818]     ; 0057b546
    PUSH ECX                            ; 0057b54d
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057b54e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057b553
    MOV EAX,dword ptr [EBX + 0xd28]     ; 0057b556
    ADD ESP,0x7f8                       ; 0057b55c
    POP EBP                             ; 0057b562
    POP EDI                             ; 0057b563
    POP ESI                             ; 0057b564
    POP EBX                             ; 0057b565
    RET                                 ; 0057b566
    MOV EDI,dword ptr [EBX + 0x60c]     ; 0057b567
        ;   Label: caseD_4
    MOV EAX,0xffffffff                  ; 0057b56d
    TEST EDI,EDI                        ; 0057b572
    JLE 0x0057b594                      ; 0057b574
        ;   XREF to: 0057b594 (CONDITIONAL_JUMP)  ; LAB_0057b594
    MOV EDX,dword ptr [EBX + 0x608]     ; 0057b576
    LEA EAX,[EDX*0x4 + 0x0]             ; 0057b57c
    SUB EAX,EDX                         ; 0057b583
    SHL EAX,0x3                         ; 0057b585
    ADD EDX,EAX                         ; 0057b588
    SHL EDX,0x2                         ; 0057b58a
    MOV EAX,EDX                         ; 0057b58d
    SAR EDX,0x1f                        ; 0057b58f
    IDIV EDI                            ; 0057b592
    TEST EAX,EAX                        ; 0057b594
        ;   Label: LAB_0057b594
    JLE 0x0057b5cb                      ; 0057b596
        ;   XREF to: 0057b5cb (CONDITIONAL_JUMP)  ; LAB_0057b5cb
    CMP EAX,0x64                        ; 0057b598
    JGE 0x0057b5cb                      ; 0057b59b
        ;   XREF to: 0057b5cb (CONDITIONAL_JUMP)  ; LAB_0057b5cb
    LEA EDX,[EBX + 0x500]               ; 0057b59d
    PUSH EDX                            ; 0057b5a3
    PUSH EAX                            ; 0057b5a4
    PUSH 0x5ed4f1                       ; 0057b5a5 | = "Received %d%% of %s... "
    MOV EDX,dword ptr [ESP + 0x81c]     ; 0057b5aa
    PUSH EDX                            ; 0057b5b1
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057b5b2
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 0057b5b7
    MOV EAX,dword ptr [EBX + 0xd28]     ; 0057b5ba
    ADD ESP,0x7f8                       ; 0057b5c0
    POP EBP                             ; 0057b5c6
    POP EDI                             ; 0057b5c7
    POP ESI                             ; 0057b5c8
    POP EBX                             ; 0057b5c9
    RET                                 ; 0057b5ca
    LEA EAX,[EBX + 0x500]               ; 0057b5cb
        ;   Label: LAB_0057b5cb
    PUSH EAX                            ; 0057b5d1
    PUSH 0x5ed509                       ; 0057b5d2 | = "Receiving %s..."
    MOV EAX,dword ptr [ESP + 0x818]     ; 0057b5d7
    PUSH EAX                            ; 0057b5de
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057b5df
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057b5e4
    MOV EAX,dword ptr [EBX + 0xd28]     ; 0057b5e7
    ADD ESP,0x7f8                       ; 0057b5ed
    POP EBP                             ; 0057b5f3
    POP EDI                             ; 0057b5f4
    POP ESI                             ; 0057b5f5
    POP EBX                             ; 0057b5f6
    RET                                 ; 0057b5f7
    MOV ESI,0x5ed519                    ; 0057b5f8 | = "Done"
        ;   Label: caseD_5
    JMP 0x0057ae25                      ; 0057b5fd
        ;   XREF to: 0057ae25 (UNCONDITIONAL_JUMP)  ; LAB_0057ae25

