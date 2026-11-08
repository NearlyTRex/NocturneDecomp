; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0057fa20(int param_1)
;
;
; Called Functions:
;   FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057fa20
        ;   Label: FUN_0057fa20
    MOV EDX,dword ptr [EAX + 0x70]      ; 0057fa24
    CMP EDX,0x2                         ; 0057fa27
    JNZ 0x0057fa3b                      ; 0057fa2a
        ;   XREF to: 0057fa3b (CONDITIONAL_JUMP)  ; LAB_0057fa3b
    MOV EAX,EDX                         ; 0057fa2c
    RET                                 ; 0057fa2e
    MOV EAX,0x1                         ; 0057fa2f
        ;   Label: LAB_0057fa2f
    RET                                 ; 0057fa34
    MOV EAX,0x2                         ; 0057fa35
        ;   Label: LAB_0057fa35
    RET                                 ; 0057fa3a
    ADD EAX,0x158                       ; 0057fa3b
        ;   Label: LAB_0057fa3b
    PUSH EAX                            ; 0057fa40
    CALL FUN_004fc070                   ; 0057fa41
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0057fa46
    ADD ESP,0x4                         ; 0057fa49
    CMP EAX,0xc                         ; 0057fa4c
    JC 0x0057fa58                       ; 0057fa4f
        ;   XREF to: 0057fa58 (CONDITIONAL_JUMP)  ; LAB_0057fa58
    JBE 0x0057fa2f                      ; 0057fa51
        ;   XREF to: 0057fa2f (CONDITIONAL_JUMP)  ; LAB_0057fa2f
    CMP EAX,0xd                         ; 0057fa53
    JZ 0x0057fa35                       ; 0057fa56
        ;   XREF to: 0057fa35 (CONDITIONAL_JUMP)  ; LAB_0057fa35
    XOR EAX,EAX                         ; 0057fa58
        ;   Label: LAB_0057fa58
    RET                                 ; 0057fa5a

