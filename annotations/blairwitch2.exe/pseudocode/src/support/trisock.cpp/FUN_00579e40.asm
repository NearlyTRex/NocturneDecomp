; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_00579e40(undefined4 param_1,int *param_2,undefined4 param_3,code *param_4)
;
;
; XREF[2]:
;   support_trisock.cpp_FUN_0057a0f0 at 0057a1c0
;   support_trisock.cpp_FUN_0057a1e0 at 0057a343
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005ba8cc
;   crt_string.c__strnicmp_FUN_005b8da0
;   crt_unknown.c_sprintf_FUN_005b7790
;   support_trisock.cpp_FUN_00579cc0
;   support_trisock.cpp_FUN_00579cf0
;   support_trisock.cpp_FUN_00579dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579e40
        ;   Label: support_trisock.cpp_FUN_00579e40
    PUSH ESI                            ; 00579e41
    PUSH EDI                            ; 00579e42
    PUSH EBP                            ; 00579e43
    SUB ESP,0x1118                      ; 00579e44
    MOV EBP,dword ptr [ESP + 0x1138]    ; 00579e4a
    MOV EDX,dword ptr [ESP + 0x112c]    ; 00579e51
    PUSH EDX                            ; 00579e58
    LEA EAX,[ESP + 0x4]                 ; 00579e59
    PUSH EAX                            ; 00579e5d
    CALL support_trisock.cpp_FUN_00579cc0 ; 00579e5e
        ;   XREF to: 00579cc0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00579cc0()
    ADD ESP,0x8                         ; 00579e63
    MOV ECX,dword ptr [ESP + 0x1134]    ; 00579e66
    PUSH ECX                            ; 00579e6d
    PUSH EBP                            ; 00579e6e
    PUSH 0x800                          ; 00579e6f
    LEA EAX,[ESP + 0x81c]               ; 00579e74
    PUSH EAX                            ; 00579e7b
    LEA EAX,[ESP + 0x10]                ; 00579e7c
    PUSH EAX                            ; 00579e80
    CALL support_trisock.cpp_FUN_00579dc0 ; 00579e81
        ;   XREF to: 00579dc0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00579dc0()
    ADD ESP,0x14                        ; 00579e86
    TEST EAX,EAX                        ; 00579e89
    JNZ 0x00579e98                      ; 00579e8b
        ;   XREF to: 00579e98 (CONDITIONAL_JUMP)  ; LAB_00579e98
    ADD ESP,0x1118                      ; 00579e8d
        ;   Label: LAB_00579e8d
    POP EBP                             ; 00579e93
    POP EDI                             ; 00579e94
    POP ESI                             ; 00579e95
    POP EBX                             ; 00579e96
    RET                                 ; 00579e97
    MOV EBX,0xffffffff                  ; 00579e98
        ;   Label: LAB_00579e98
    MOV ESI,0x5ed14f                    ; 00579e9d
    LEA EDI,[ESP + 0x1010]              ; 00579ea2
    MOV dword ptr [ESP + 0x1110],EBX    ; 00579ea9
    PUSH EDI                            ; 00579eb0
    MOV AL,byte ptr [ESI]               ; 00579eb1
        ;   Label: LAB_00579eb1
    MOV byte ptr [EDI],AL               ; 00579eb3
    CMP AL,0x0                          ; 00579eb5
    JZ 0x00579ec9                       ; 00579eb7
        ;   XREF to: 00579ec9 (CONDITIONAL_JUMP)  ; LAB_00579ec9
    MOV AL,byte ptr [ESI + 0x1]         ; 00579eb9
    ADD ESI,0x2                         ; 00579ebc
    MOV byte ptr [EDI + 0x1],AL         ; 00579ebf
    ADD EDI,0x2                         ; 00579ec2
    CMP AL,0x0                          ; 00579ec5
    JNZ 0x00579eb1                      ; 00579ec7
        ;   XREF to: 00579eb1 (CONDITIONAL_JUMP)  ; LAB_00579eb1
    POP EDI                             ; 00579ec9
        ;   Label: LAB_00579ec9
    LEA EAX,[ESP + 0x1010]              ; 00579eca
    PUSH EAX                            ; 00579ed1
    LEA EAX,[ESP + 0x1114]              ; 00579ed2
    PUSH EAX                            ; 00579ed9
    PUSH 0x5ed15d                       ; 00579eda
    LEA EAX,[ESP + 0x81c]               ; 00579edf
    PUSH EAX                            ; 00579ee6
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 00579ee7
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 00579eec
    MOV ESI,dword ptr [ESP + 0x1110]    ; 00579eef
    CMP ESI,EBX                         ; 00579ef6
    JZ 0x00579fd7                       ; 00579ef8
        ;   XREF to: 00579fd7 (CONDITIONAL_JUMP)  ; LAB_00579fd7
    CMP ESI,0x190                       ; 00579efe
    JGE 0x00579ff0                      ; 00579f04
        ;   XREF to: 00579ff0 (CONDITIONAL_JUMP)  ; LAB_00579ff0
    CMP ESI,0x12c                       ; 00579f0a
    JGE 0x0057a02a                      ; 00579f10
        ;   XREF to: 0057a02a (CONDITIONAL_JUMP)  ; LAB_0057a02a
    MOV ESI,0x5ed1b5                    ; 00579f16
    LEA EDI,[ESP + 0x1010]              ; 00579f1b
    MOV dword ptr [ESP + 0x1114],EBX    ; 00579f22
    PUSH EDI                            ; 00579f29
    MOV AL,byte ptr [ESI]               ; 00579f2a
        ;   Label: LAB_00579f2a
    MOV byte ptr [EDI],AL               ; 00579f2c
    CMP AL,0x0                          ; 00579f2e
    JZ 0x00579f42                       ; 00579f30
        ;   XREF to: 00579f42 (CONDITIONAL_JUMP)  ; LAB_00579f42
    MOV AL,byte ptr [ESI + 0x1]         ; 00579f32
    ADD ESI,0x2                         ; 00579f35
    MOV byte ptr [EDI + 0x1],AL         ; 00579f38
    ADD EDI,0x2                         ; 00579f3b
    CMP AL,0x0                          ; 00579f3e
    JNZ 0x00579f2a                      ; 00579f40
        ;   XREF to: 00579f2a (CONDITIONAL_JUMP)  ; LAB_00579f2a
    POP EDI                             ; 00579f42
        ;   Label: LAB_00579f42
    XOR EBX,EBX                         ; 00579f43
    LEA EAX,[ESP + 0x1010]              ; 00579f45
        ;   Label: LAB_00579f45
    PUSH EAX                            ; 00579f4c
    PUSH EBP                            ; 00579f4d
    PUSH 0x800                          ; 00579f4e
    LEA EAX,[ESP + 0x81c]               ; 00579f53
    PUSH EAX                            ; 00579f5a
    LEA EAX,[ESP + 0x10]                ; 00579f5b
    PUSH EAX                            ; 00579f5f
    CALL support_trisock.cpp_FUN_00579dc0 ; 00579f60
        ;   XREF to: 00579dc0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00579dc0()
    ADD ESP,0x14                        ; 00579f65
    TEST EAX,EAX                        ; 00579f68
    JZ 0x00579e8d                       ; 00579f6a
        ;   XREF to: 00579e8d (CONDITIONAL_JUMP)  ; LAB_00579e8d
    CMP BL,byte ptr [ESP + 0x810]       ; 00579f70
    JNZ 0x0057a064                      ; 00579f77
        ;   XREF to: 0057a064 (CONDITIONAL_JUMP)  ; LAB_0057a064
    CMP dword ptr [ESP + 0x1114],0x0    ; 00579f7d
    JL 0x0057a0a5                       ; 00579f85
        ;   XREF to: 0057a0a5 (CONDITIONAL_JUMP)  ; LAB_0057a0a5
    XOR EBX,EBX                         ; 00579f8b
        ;   Label: LAB_00579f8b
    XOR EDI,EDI                         ; 00579f8d
    MOV EAX,dword ptr [ESP + 0x1114]    ; 00579f8f
        ;   Label: LAB_00579f8f
    CMP EDI,EAX                         ; 00579f96
    JG 0x00579f9e                       ; 00579f98
        ;   XREF to: 00579f9e (CONDITIONAL_JUMP)  ; LAB_00579f9e
    CMP EBX,EAX                         ; 00579f9a
    JGE 0x00579fc7                      ; 00579f9c
        ;   XREF to: 00579fc7 (CONDITIONAL_JUMP)  ; LAB_00579fc7
    LEA EAX,[ESP + 0x1010]              ; 00579f9e
        ;   Label: LAB_00579f9e
    PUSH EAX                            ; 00579fa5
    PUSH EBP                            ; 00579fa6
    LEA EAX,[ESP + 0x8]                 ; 00579fa7
    PUSH EAX                            ; 00579fab
    CALL support_trisock.cpp_FUN_00579cf0 ; 00579fac
        ;   XREF to: 00579cf0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00579cf0()
    ADD ESP,0xc                         ; 00579fb1
    MOV EDX,EAX                         ; 00579fb4
    TEST EAX,EAX                        ; 00579fb6
    JGE 0x0057a0b1                      ; 00579fb8
        ;   XREF to: 0057a0b1 (CONDITIONAL_JUMP)  ; LAB_0057a0b1
    CMP EAX,-0x2                        ; 00579fbe
    JNZ 0x0057a057                      ; 00579fc1
        ;   XREF to: 0057a057 (CONDITIONAL_JUMP)  ; LAB_0057a057
    MOV EAX,0x1                         ; 00579fc7
        ;   Label: LAB_00579fc7
    ADD ESP,0x1118                      ; 00579fcc
    POP EBP                             ; 00579fd2
    POP EDI                             ; 00579fd3
    POP ESI                             ; 00579fd4
    POP EBX                             ; 00579fd5
    RET                                 ; 00579fd6
    PUSH 0x5ed16f                       ; 00579fd7
        ;   Label: LAB_00579fd7
    PUSH 0x1                            ; 00579fdc
    CALL EBP                            ; 00579fde
    ADD ESP,0x8                         ; 00579fe0
    XOR EAX,EAX                         ; 00579fe3
    ADD ESP,0x1118                      ; 00579fe5
    POP EBP                             ; 00579feb
    POP EDI                             ; 00579fec
    POP ESI                             ; 00579fed
    POP EBX                             ; 00579fee
    RET                                 ; 00579fef
    LEA EAX,[ESP + 0x1010]              ; 00579ff0
        ;   Label: LAB_00579ff0
    PUSH EAX                            ; 00579ff7
    PUSH ESI                            ; 00579ff8
    PUSH 0x5ed196                       ; 00579ff9
    LEA EAX,[ESP + 0x81c]               ; 00579ffe
    PUSH EAX                            ; 0057a005
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057a006
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 0057a00b
    LEA EAX,[ESP + 0x810]               ; 0057a00e
    PUSH EAX                            ; 0057a015
    PUSH 0x1                            ; 0057a016
    CALL EBP                            ; 0057a018
    ADD ESP,0x8                         ; 0057a01a
    XOR EAX,EAX                         ; 0057a01d
    ADD ESP,0x1118                      ; 0057a01f
    POP EBP                             ; 0057a025
    POP EDI                             ; 0057a026
    POP ESI                             ; 0057a027
    POP EBX                             ; 0057a028
    RET                                 ; 0057a029
    LEA EAX,[ESP + 0x1010]              ; 0057a02a
        ;   Label: LAB_0057a02a
    PUSH EAX                            ; 0057a031
    PUSH ESI                            ; 0057a032
    PUSH 0x5ed19d                       ; 0057a033
    LEA EAX,[ESP + 0x81c]               ; 0057a038
    PUSH EAX                            ; 0057a03f
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057a040
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 0057a045
    LEA EAX,[ESP + 0x810]               ; 0057a048
    PUSH EAX                            ; 0057a04f
    PUSH 0x1                            ; 0057a050
    CALL EBP                            ; 0057a052
    ADD ESP,0x8                         ; 0057a054
    XOR EAX,EAX                         ; 0057a057
        ;   Label: LAB_0057a057
    ADD ESP,0x1118                      ; 0057a059
    POP EBP                             ; 0057a05f
    POP EDI                             ; 0057a060
    POP ESI                             ; 0057a061
    POP EBX                             ; 0057a062
    RET                                 ; 0057a063
    PUSH 0xf                            ; 0057a064
        ;   Label: LAB_0057a064
    PUSH 0x5ed1c8                       ; 0057a066
    LEA EAX,[ESP + 0x818]               ; 0057a06b
    PUSH EAX                            ; 0057a072
    CALL crt_string.c__strnicmp_FUN_005b8da0 ; 0057a073
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005b8da0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0057a078
    TEST EAX,EAX                        ; 0057a07b
    JNZ 0x00579f45                      ; 0057a07d
        ;   XREF to: 00579f45 (CONDITIONAL_JUMP)  ; LAB_00579f45
    LEA EAX,[ESP + 0x1114]              ; 0057a083
    PUSH EAX                            ; 0057a08a
    PUSH 0x5ed1d8                       ; 0057a08b
    LEA EAX,[ESP + 0x827]               ; 0057a090
    PUSH EAX                            ; 0057a097
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0057a098
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 0057a09d
    JMP 0x00579f45                      ; 0057a0a0
        ;   XREF to: 00579f45 (UNCONDITIONAL_JUMP)  ; LAB_00579f45
    MOV dword ptr [ESP],0x1             ; 0057a0a5
        ;   Label: LAB_0057a0a5
    JMP 0x00579f8b                      ; 0057a0ac
        ;   XREF to: 00579f8b (UNCONDITIONAL_JUMP)  ; LAB_00579f8b
    MOV EAX,dword ptr [ESP + 0x1130]    ; 0057a0b1
        ;   Label: LAB_0057a0b1
    MOV EAX,dword ptr [EAX]             ; 0057a0b8
    AND EDX,0xff                        ; 0057a0ba
    PUSH EDX                            ; 0057a0c0
    MOV ECX,dword ptr [ESP + 0x1134]    ; 0057a0c1
    PUSH ECX                            ; 0057a0c8
    CALL dword ptr [EAX + 0x4]          ; 0057a0c9
    ADD ESP,0x8                         ; 0057a0cc
    CMP EAX,-0x1                        ; 0057a0cf
    JZ 0x00579fc7                       ; 0057a0d2
        ;   XREF to: 00579fc7 (CONDITIONAL_JUMP)  ; LAB_00579fc7
    TEST EAX,EAX                        ; 0057a0d8
    JL 0x0057a057                       ; 0057a0da
        ;   XREF to: 0057a057 (CONDITIONAL_JUMP)  ; LAB_0057a057
    INC EBX                             ; 0057a0e0
    JMP 0x00579f8f                      ; 0057a0e1
        ;   XREF to: 00579f8f (UNCONDITIONAL_JUMP)  ; LAB_00579f8f

