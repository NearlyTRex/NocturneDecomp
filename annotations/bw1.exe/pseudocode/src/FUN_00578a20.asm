; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00578a20(undefined4 param_1,int param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578a20
        ;   Label: FUN_00578a20
    MOV EBX,dword ptr [ESP + 0xc]       ; 00578a21
    LEA EAX,[EBX*0x4 + 0x0]             ; 00578a25
    SUB EAX,EBX                         ; 00578a2c
    MOV EBX,0x2c81dc4                   ; 00578a2e
    SHL EAX,0x3                         ; 00578a33
    ADD EBX,EAX                         ; 00578a36
    MOV EDX,dword ptr [EBX]             ; 00578a38
    TEST EDX,EDX                        ; 00578a3a
    JNZ 0x00578a6b                      ; 00578a3c
        ;   XREF to: 00578a6b (CONDITIONAL_JUMP)  ; LAB_00578a6b
    MOV EBX,dword ptr [ESP + 0xc]       ; 00578a3e
        ;   Label: LAB_00578a3e
    LEA EAX,[EBX*0x4 + 0x0]             ; 00578a42
    SUB EAX,EBX                         ; 00578a49
    XOR ECX,ECX                         ; 00578a4b
    MOV dword ptr [EAX*0x8 + 0x2c81dcc],ECX ; 00578a4d
    MOV dword ptr [EAX*0x8 + 0x2c81dd0],ECX ; 00578a54
    MOV dword ptr [EAX*0x8 + 0x2c81dd4],ECX ; 00578a5b
    MOV dword ptr [EAX*0x8 + 0x2c81dd8],ECX ; 00578a62
    POP EBX                             ; 00578a69
    RET                                 ; 00578a6a
    MOV EAX,EDX                         ; 00578a6b
        ;   Label: LAB_00578a6b
    PUSH EAX                            ; 00578a6d
    MOV EDX,dword ptr [EDX]             ; 00578a6e
    CALL dword ptr [EDX + 0x8]          ; 00578a70
    MOV dword ptr [EBX],0x0             ; 00578a73
    JMP 0x00578a3e                      ; 00578a79
        ;   XREF to: 00578a3e (UNCONDITIONAL_JUMP)  ; LAB_00578a3e

