; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * core_ground_cpp_FUN_004e6eee(char *param_1,char *param_2,char *param_3,char *param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004e6eee
        ;   Label: core_ground.cpp_FUN_004e6eee
    PUSH EBX                            ; 004e6ef0
    PUSH ESI                            ; 004e6ef1
    PUSH EDI                            ; 004e6ef2
    PUSH EBP                            ; 004e6ef3
    SUB ESP,0x50                        ; 004e6ef4
    MOV ESI,dword ptr [ESP + 0x68]      ; 004e6ef7
    MOV EDI,ESP                         ; 004e6efb
    MOV DL,0x2e                         ; 004e6efd
    PUSH EDI                            ; 004e6eff
    MOV AL,byte ptr [ESI]               ; 004e6f00
        ;   Label: LAB_004e6f00
    MOV byte ptr [EDI],AL               ; 004e6f02
    CMP AL,0x0                          ; 004e6f04
    JZ 0x004e6f18                       ; 004e6f06
        ;   XREF to: 004e6f18 (CONDITIONAL_JUMP)  ; LAB_004e6f18
    MOV AL,byte ptr [ESI + 0x1]         ; 004e6f08
    ADD ESI,0x2                         ; 004e6f0b
    MOV byte ptr [EDI + 0x1],AL         ; 004e6f0e
    ADD EDI,0x2                         ; 004e6f11
    CMP AL,0x0                          ; 004e6f14
    JNZ 0x004e6f00                      ; 004e6f16
        ;   XREF to: 004e6f00 (CONDITIONAL_JUMP)  ; LAB_004e6f00
    POP EDI                             ; 004e6f18
        ;   Label: LAB_004e6f18
    MOV ESI,ESP                         ; 004e6f19
    MOV AL,byte ptr [ESI]               ; 004e6f1b
        ;   Label: LAB_004e6f1b
    CMP AL,DL                           ; 004e6f1d
    JZ 0x004e6f33                       ; 004e6f1f
        ;   XREF to: 004e6f33 (CONDITIONAL_JUMP)  ; LAB_004e6f33
    CMP AL,0x0                          ; 004e6f21
    JZ 0x004e6f31                       ; 004e6f23
        ;   XREF to: 004e6f31 (CONDITIONAL_JUMP)  ; LAB_004e6f31
    INC ESI                             ; 004e6f25
    MOV AL,byte ptr [ESI]               ; 004e6f26
    CMP AL,DL                           ; 004e6f28
    JZ 0x004e6f33                       ; 004e6f2a
        ;   XREF to: 004e6f33 (CONDITIONAL_JUMP)  ; LAB_004e6f33
    INC ESI                             ; 004e6f2c
    CMP AL,0x0                          ; 004e6f2d
    JNZ 0x004e6f1b                      ; 004e6f2f
        ;   XREF to: 004e6f1b (CONDITIONAL_JUMP)  ; LAB_004e6f1b
    SUB ESI,ESI                         ; 004e6f31
        ;   Label: LAB_004e6f31
    MOV EDI,ESI                         ; 004e6f33
        ;   Label: LAB_004e6f33
    TEST ESI,ESI                        ; 004e6f35
    JNZ 0x004e6f5c                      ; 004e6f37
        ;   XREF to: 004e6f5c (CONDITIONAL_JUMP)  ; LAB_004e6f5c
    MOV EDX,0x5e41f2                    ; 004e6f39
    MOV ECX,0x40                        ; 004e6f3e
    PUSH 0x5e4205                       ; 004e6f43
    MOV dword ptr [0x01d1d400],EDX      ; 004e6f48 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004e6f4e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004e6f54
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004e6f59
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004e6f5c
        ;   Label: LAB_004e6f5c
    INC EDI                             ; 004e6f60
    MOV EBX,dword ptr [ESP + 0x70]      ; 004e6f61
    PUSH EDI                            ; 004e6f65
    MOV AL,byte ptr [ESI]               ; 004e6f66
        ;   Label: LAB_004e6f66
    MOV byte ptr [EDI],AL               ; 004e6f68
    CMP AL,0x0                          ; 004e6f6a
    JZ 0x004e6f7e                       ; 004e6f6c
        ;   XREF to: 004e6f7e (CONDITIONAL_JUMP)  ; LAB_004e6f7e
    MOV AL,byte ptr [ESI + 0x1]         ; 004e6f6e
    ADD ESI,0x2                         ; 004e6f71
    MOV byte ptr [EDI + 0x1],AL         ; 004e6f74
    ADD EDI,0x2                         ; 004e6f77
    CMP AL,0x0                          ; 004e6f7a
    JNZ 0x004e6f66                      ; 004e6f7c
        ;   XREF to: 004e6f66 (CONDITIONAL_JUMP)  ; LAB_004e6f66
    POP EDI                             ; 004e6f7e
        ;   Label: LAB_004e6f7e
    PUSH EBX                            ; 004e6f7f
    LEA EAX,[ESP + 0x4]                 ; 004e6f80
    PUSH EAX                            ; 004e6f84
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004e6f85
    PUSH ESI                            ; 004e6f89
    CALL engine_dosio.cpp_FUN_00479180  ; 004e6f8a
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004e6f8f
    MOV ESI,EAX                         ; 004e6f92
    TEST EAX,EAX                        ; 004e6f94
    JZ 0x004e6fa2                       ; 004e6f96
        ;   XREF to: 004e6fa2 (CONDITIONAL_JUMP)  ; LAB_004e6fa2
    MOV EAX,ESI                         ; 004e6f98
    ADD ESP,0x50                        ; 004e6f9a
    POP EBP                             ; 004e6f9d
    POP EDI                             ; 004e6f9e
    POP ESI                             ; 004e6f9f
    POP EBX                             ; 004e6fa0
    RET                                 ; 004e6fa1
    MOV EDI,0x5e421c                    ; 004e6fa2
        ;   Label: LAB_004e6fa2
    MOV EBP,0x44                        ; 004e6fa7
    PUSH 0x5e422f                       ; 004e6fac
    MOV dword ptr [0x01d1d400],EDI      ; 004e6fb1 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 004e6fb7 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004e6fbd
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004e6fc2
    MOV EAX,ESI                         ; 004e6fc5
    ADD ESP,0x50                        ; 004e6fc7
    POP EBP                             ; 004e6fca
    POP EDI                             ; 004e6fcb
    POP ESI                             ; 004e6fcc
    POP EBX                             ; 004e6fcd
    RET                                 ; 004e6fce

