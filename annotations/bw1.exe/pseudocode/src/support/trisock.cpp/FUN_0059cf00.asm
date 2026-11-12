; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_0059cf00(undefined4 param_1,undefined4 param_2,uint16_t *param_3,undefined4 param_4,undefined4 param_5,CSocket *param_6,code *param_7)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_unknown.c_sprintf_FUN_005bfb40
;   support_trisock.cpp_createNetworkAddr_FUN_0059c740
;   support_trisock.cpp_CSocket_bindSocket_FUN_0059c980
;   support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40
;   support_trisock.cpp_CSocket_createSocket_FUN_0059c910
;   support_trisock.cpp_CSocket_ctor_FUN_0059c8e0
;   support_trisock.cpp_CSocket_dtor_FUN_0059c8f0
;   support_trisock.cpp_CSocket_setSocketBlocking_FUN_0059cd70
;   support_trisock.cpp_formatSocketAddress_FUN_0059c830
;   support_trisock.cpp_FUN_0059c9d0
;   support_trisock.cpp_FUN_0059ca30
;   support_trisock.cpp_FUN_0059d9d0
;   support_trisock.cpp_FUN_0059f1a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059cf00
        ;   Label: support_trisock.cpp_FUN_0059cf00
    PUSH ESI                            ; 0059cf01
    PUSH EDI                            ; 0059cf02
    PUSH EBP                            ; 0059cf03
    SUB ESP,0xbe4                       ; 0059cf04
    MOV EDI,dword ptr [ESP + 0xbfc]     ; 0059cf0a
    MOV ESI,dword ptr [ESP + 0xc0c]     ; 0059cf11
    MOV EBX,dword ptr [ESP + 0xc10]     ; 0059cf18
    MOV EDX,dword ptr [ESP + 0xc08]     ; 0059cf1f
    PUSH EDX                            ; 0059cf26
    MOV ECX,dword ptr [ESP + 0xc08]     ; 0059cf27
    PUSH ECX                            ; 0059cf2e
    MOV EBP,dword ptr [ESP + 0xc08]     ; 0059cf2f
    PUSH EBP                            ; 0059cf36
    PUSH EDI                            ; 0059cf37
    MOV EAX,dword ptr [ESP + 0xc08]     ; 0059cf38
    PUSH EAX                            ; 0059cf3f
    CALL support_trisock.cpp_FUN_0059d9d0 ; 0059cf40
        ;   XREF to: 0059d9d0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059d9d0()
    ADD ESP,0x14                        ; 0059cf45
    TEST EAX,EAX                        ; 0059cf48
    JZ 0x0059cf93                       ; 0059cf4a
        ;   XREF to: 0059cf93 (CONDITIONAL_JUMP)  ; LAB_0059cf93
    PUSH 0x607310                       ; 0059cf4c
    PUSH 0xc                            ; 0059cf51
    LEA EAX,[ESP + 0xb90]               ; 0059cf53
    PUSH EAX                            ; 0059cf5a
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0059cf5b
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0059cf60
    PUSH EDI                            ; 0059cf63
    PUSH 0x5f83de                       ; 0059cf64
    LEA EAX,[ESP + 0x8]                 ; 0059cf69
    PUSH EAX                            ; 0059cf6d
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059cf6e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059cf73
    MOV EAX,ESP                         ; 0059cf76
    PUSH EAX                            ; 0059cf78
    PUSH 0x0                            ; 0059cf79
    CALL EBX                            ; 0059cf7b
    ADD ESP,0x8                         ; 0059cf7d
    TEST EAX,EAX                        ; 0059cf80
    JNZ 0x0059cfa3                      ; 0059cf82
        ;   XREF to: 0059cfa3 (CONDITIONAL_JUMP)  ; LAB_0059cfa3
    XOR ESI,ESI                         ; 0059cf84
    MOV EAX,ESI                         ; 0059cf86
        ;   Label: LAB_0059cf86
    ADD ESP,0xbe4                       ; 0059cf88
    POP EBP                             ; 0059cf8e
    POP EDI                             ; 0059cf8f
    POP ESI                             ; 0059cf90
    POP EBX                             ; 0059cf91
    RET                                 ; 0059cf92
    PUSH 0x5f83ca                       ; 0059cf93
        ;   Label: LAB_0059cf93
    PUSH 0x1                            ; 0059cf98
    XOR ESI,ESI                         ; 0059cf9a
    CALL EBX                            ; 0059cf9c
    ADD ESP,0x8                         ; 0059cf9e
    JMP 0x0059cf86                      ; 0059cfa1
        ;   XREF to: 0059cf86 (UNCONDITIONAL_JUMP)  ; LAB_0059cf86
    LEA EAX,[ESP + 0x900]               ; 0059cfa3
        ;   Label: LAB_0059cfa3
    PUSH EAX                            ; 0059cfaa
    PUSH EDI                            ; 0059cfab
    CALL support_trisock.cpp_FUN_0059f1a0 ; 0059cfac
        ;   XREF to: 0059f1a0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059f1a0()
    ADD ESP,0x8                         ; 0059cfb1
    TEST EAX,EAX                        ; 0059cfb4
    JZ 0x0059d0ac                       ; 0059cfb6
        ;   XREF to: 0059d0ac (CONDITIONAL_JUMP)  ; LAB_0059d0ac
    LEA EAX,[ESP + 0xbe0]               ; 0059cfbc
    PUSH EAX                            ; 0059cfc3
    CALL support_trisock.cpp_CSocket_ctor_FUN_0059c8e0 ; 0059cfc4
        ;   XREF to: 0059c8e0 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_ctor_FUN_0059c8e0(CSocket * this_ptr)
    XOR EAX,EAX                         ; 0059cfc9
    ADD ESP,0x4                         ; 0059cfcb
    MOV AX,word ptr [EBP]               ; 0059cfce
    PUSH EAX                            ; 0059cfd2
    MOV EDX,dword ptr [ESP + 0xb8c]     ; 0059cfd3
    PUSH EDX                            ; 0059cfda
    LEA EAX,[ESP + 0xbe0]               ; 0059cfdb
    PUSH EAX                            ; 0059cfe2
    CALL support_trisock.cpp_createNetworkAddr_FUN_0059c740 ; 0059cfe3
        ;   XREF to: 0059c740 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_createNetworkAddr_FUN_0059c740(SNetworkAddr * dest_addr, uint32_t * ip_address_ptr, uint16_t port)
    ADD ESP,0xc                         ; 0059cfe8
    LEA EAX,[ESP + 0xbb8]               ; 0059cfeb
    PUSH EAX                            ; 0059cff2
    LEA EAX,[ESP + 0xbdc]               ; 0059cff3
    PUSH EAX                            ; 0059cffa
    CALL support_trisock.cpp_formatSocketAddress_FUN_0059c830 ; 0059cffb
        ;   XREF to: 0059c830 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_formatSocketAddress_FUN_0059c830(SNetworkAddr * network_addr, char * output_buffer)
    ADD ESP,0x8                         ; 0059d000
    LEA EAX,[ESP + 0xbb8]               ; 0059d003
    PUSH EAX                            ; 0059d00a
    PUSH 0x5f8408                       ; 0059d00b
    LEA EAX,[ESP + 0x8]                 ; 0059d010
    PUSH EAX                            ; 0059d014
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059d015
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059d01a
    MOV EAX,ESP                         ; 0059d01d
    PUSH EAX                            ; 0059d01f
    PUSH 0x0                            ; 0059d020
    CALL EBX                            ; 0059d022
    ADD ESP,0x8                         ; 0059d024
    TEST EAX,EAX                        ; 0059d027
    JZ 0x0059d08c                       ; 0059d029
        ;   XREF to: 0059d08c (CONDITIONAL_JUMP)  ; LAB_0059d08c
    PUSH ESI                            ; 0059d02b
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40 ; 0059d02c
        ;   XREF to: 0059cc40 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0059d031
    PUSH ESI                            ; 0059d034
    CALL support_trisock.cpp_CSocket_createSocket_FUN_0059c910 ; 0059d035
        ;   XREF to: 0059c910 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_createSocket_FUN_0059c910(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0059d03a
    PUSH 0x0                            ; 0059d03d
    PUSH ESI                            ; 0059d03f
    CALL support_trisock.cpp_CSocket_setSocketBlocking_FUN_0059cd70 ; 0059d040
        ;   XREF to: 0059cd70 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_setSocketBlocking_FUN_0059cd70(CSocket * this_ptr, int blocking_mode)
    ADD ESP,0x8                         ; 0059d045
    PUSH 0x0                            ; 0059d048
    PUSH ESI                            ; 0059d04a
    CALL support_trisock.cpp_CSocket_bindSocket_FUN_0059c980 ; 0059d04b
        ;   XREF to: 0059c980 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_bindSocket_FUN_0059c980(CSocket * this_ptr, ushort port)
    ADD ESP,0x8                         ; 0059d050
    LEA EAX,[ESP + 0xbd8]               ; 0059d053
    PUSH EAX                            ; 0059d05a
    PUSH ESI                            ; 0059d05b
    CALL support_trisock.cpp_FUN_0059c9d0 ; 0059d05c
        ;   XREF to: 0059c9d0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059c9d0()
    ADD ESP,0x8                         ; 0059d061
    TEST EAX,EAX                        ; 0059d064
    JZ 0x0059d0d8                       ; 0059d066
        ;   XREF to: 0059d0d8 (CONDITIONAL_JUMP)  ; LAB_0059d0d8
    XOR EDI,EDI                         ; 0059d068
    PUSH ESI                            ; 0059d06a
        ;   Label: LAB_0059d06a
    CALL support_trisock.cpp_FUN_0059ca30 ; 0059d06b
        ;   XREF to: 0059ca30 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059ca30()
    ADD ESP,0x4                         ; 0059d070
    TEST AL,0x4                         ; 0059d073
    JNZ 0x0059d0d8                      ; 0059d075
        ;   XREF to: 0059d0d8 (CONDITIONAL_JUMP)  ; LAB_0059d0d8
    TEST AL,0x2                         ; 0059d077
    JNZ 0x0059d11c                      ; 0059d079
        ;   XREF to: 0059d11c (CONDITIONAL_JUMP)  ; LAB_0059d11c
    MOV EAX,ESP                         ; 0059d07f
    PUSH EAX                            ; 0059d081
    PUSH EDI                            ; 0059d082
    CALL EBX                            ; 0059d083
    ADD ESP,0x8                         ; 0059d085
    TEST EAX,EAX                        ; 0059d088
    JNZ 0x0059d06a                      ; 0059d08a
        ;   XREF to: 0059d06a (CONDITIONAL_JUMP)  ; LAB_0059d06a
    PUSH EAX                            ; 0059d08c
        ;   Label: LAB_0059d08c
    LEA EAX,[ESP + 0xbe4]               ; 0059d08d
    PUSH EAX                            ; 0059d094
    XOR ESI,ESI                         ; 0059d095
    CALL support_trisock.cpp_CSocket_dtor_FUN_0059c8f0 ; 0059d097
        ;   XREF to: 0059c8f0 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_dtor_FUN_0059c8f0(CSocket * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059d09c
    MOV EAX,ESI                         ; 0059d09f
    ADD ESP,0xbe4                       ; 0059d0a1
    POP EBP                             ; 0059d0a7
    POP EDI                             ; 0059d0a8
    POP ESI                             ; 0059d0a9
    POP EBX                             ; 0059d0aa
    RET                                 ; 0059d0ab
    PUSH EDI                            ; 0059d0ac
        ;   Label: LAB_0059d0ac
    PUSH 0x5f83ec                       ; 0059d0ad
    LEA EAX,[ESP + 0x8]                 ; 0059d0b2
    PUSH EAX                            ; 0059d0b6
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059d0b7
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059d0bc
    MOV EAX,ESP                         ; 0059d0bf
    PUSH EAX                            ; 0059d0c1
    PUSH 0x1                            ; 0059d0c2
    XOR ESI,ESI                         ; 0059d0c4
    CALL EBX                            ; 0059d0c6
    ADD ESP,0x8                         ; 0059d0c8
    MOV EAX,ESI                         ; 0059d0cb
    ADD ESP,0xbe4                       ; 0059d0cd
    POP EBP                             ; 0059d0d3
    POP EDI                             ; 0059d0d4
    POP ESI                             ; 0059d0d5
    POP EBX                             ; 0059d0d6
    RET                                 ; 0059d0d7
    LEA EAX,[ESP + 0xbb8]               ; 0059d0d8
        ;   Label: LAB_0059d0d8
    PUSH EAX                            ; 0059d0df
    PUSH 0x5f841e                       ; 0059d0e0
    LEA EAX,[ESP + 0x8]                 ; 0059d0e5
    PUSH EAX                            ; 0059d0e9
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059d0ea
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059d0ef
    MOV EAX,ESP                         ; 0059d0f2
    PUSH EAX                            ; 0059d0f4
    PUSH 0x1                            ; 0059d0f5
    CALL EBX                            ; 0059d0f7
    ADD ESP,0x8                         ; 0059d0f9
    XOR ESI,ESI                         ; 0059d0fc
    PUSH ESI                            ; 0059d0fe
    LEA EAX,[ESP + 0xbe4]               ; 0059d0ff
    PUSH EAX                            ; 0059d106
    CALL support_trisock.cpp_CSocket_dtor_FUN_0059c8f0 ; 0059d107
        ;   XREF to: 0059c8f0 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_dtor_FUN_0059c8f0(CSocket * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059d10c
    MOV EAX,ESI                         ; 0059d10f
    ADD ESP,0xbe4                       ; 0059d111
    POP EBP                             ; 0059d117
    POP EDI                             ; 0059d118
    POP ESI                             ; 0059d119
    POP EBX                             ; 0059d11a
    RET                                 ; 0059d11b
    LEA EAX,[ESP + 0xbb8]               ; 0059d11c
        ;   Label: LAB_0059d11c
    PUSH EAX                            ; 0059d123
    PUSH 0x5f8435                       ; 0059d124
    LEA EAX,[ESP + 0x8]                 ; 0059d129
    PUSH EAX                            ; 0059d12d
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059d12e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059d133
    MOV EAX,ESP                         ; 0059d136
    PUSH EAX                            ; 0059d138
    PUSH 0x0                            ; 0059d139
    CALL EBX                            ; 0059d13b
    ADD ESP,0x8                         ; 0059d13d
    PUSH 0x0                            ; 0059d140
    MOV ESI,EAX                         ; 0059d142
    LEA EAX,[ESP + 0xbe4]               ; 0059d144
    PUSH EAX                            ; 0059d14b
    CALL support_trisock.cpp_CSocket_dtor_FUN_0059c8f0 ; 0059d14c
        ;   XREF to: 0059c8f0 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_dtor_FUN_0059c8f0(CSocket * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059d151
    MOV EAX,ESI                         ; 0059d154
    ADD ESP,0xbe4                       ; 0059d156
    POP EBP                             ; 0059d15c
    POP EDI                             ; 0059d15d
    POP ESI                             ; 0059d15e
    POP EBX                             ; 0059d15f
    RET                                 ; 0059d160

