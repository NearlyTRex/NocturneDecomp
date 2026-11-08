; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00420100(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_0041d790
;   FUN_0041f1e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420100
        ;   Label: FUN_00420100
    SUB ESP,0xc                         ; 00420101
    MOV EBX,dword ptr [ESP + 0x14]      ; 00420104
    PUSH EBX                            ; 00420108
    MOV dword ptr [EBX + 0x318],0x0     ; 00420109
    CALL FUN_0041f1e0                   ; 00420113
        ;   XREF to: 0041f1e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041f1e0()
    ADD ESP,0x4                         ; 00420118
    MOV EDX,dword ptr [ESP + 0x18]      ; 0042011b
    TEST EDX,EDX                        ; 0042011f
    JNZ 0x00420128                      ; 00420121
        ;   XREF to: 00420128 (CONDITIONAL_JUMP)  ; LAB_00420128
    ADD ESP,0xc                         ; 00420123
    POP EBX                             ; 00420126
    RET                                 ; 00420127
    PUSH EDI                            ; 00420128
        ;   Label: LAB_00420128
    LEA EAX,[ESP + 0x4]                 ; 00420129
    PUSH EAX                            ; 0042012d
    MOV EDI,0x4116cbe4                  ; 0042012e
    XOR ECX,ECX                         ; 00420133
    PUSH EDX                            ; 00420135
    LEA EAX,[EBX + 0x394]               ; 00420136
    MOV dword ptr [ESP + 0x14],ECX      ; 0042013c
    PUSH EAX                            ; 00420140
    MOV dword ptr [ESP + 0x14],ECX      ; 00420141
    MOV dword ptr [ESP + 0x10],EDI      ; 00420145
    CALL FUN_0041d790                   ; 00420149
        ;   XREF to: 0041d790 (UNCONDITIONAL_CALL)  ; undefined FUN_0041d790()
    ADD ESP,0xc                         ; 0042014e
    POP EDI                             ; 00420151
    ADD ESP,0xc                         ; 00420152
    POP EBX                             ; 00420155
    RET                                 ; 00420156

