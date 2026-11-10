; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c4f10(void)
;
;
; XREF[3]:
;   crt_unknown.c_FUN_005c4ff8 at 005c506a
;   crt_unknown.c_FUN_005c517c at 005c517c
;   crt_unknown.c_processSignal_FUN_005c50b8 at 005c5115
;
; Called Functions:
;   crt_unknown.c_FUN_005c4e44
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4f10
        ;   Label: crt_unknown.c_FUN_005c4f10
    PUSH 0x4                            ; 005c4f11
    CALL crt_unknown.c_FUN_005c4e44     ; 005c4f13
        ;   XREF to: 005c4e44 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4e44()
    ADD ESP,0x4                         ; 005c4f18
    PUSH 0x7                            ; 005c4f1b
    MOV EBX,EAX                         ; 005c4f1d
    CALL crt_unknown.c_FUN_005c4e44     ; 005c4f1f
        ;   XREF to: 005c4e44 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4e44()
    ADD ESP,0x4                         ; 005c4f24
    CMP EBX,0x2                         ; 005c4f27
    JZ 0x005c4f31                       ; 005c4f2a
        ;   XREF to: 005c4f31 (CONDITIONAL_JUMP)  ; LAB_005c4f31
    CMP EBX,0x3                         ; 005c4f2c
    JNZ 0x005c4f3b                      ; 005c4f2f
        ;   XREF to: 005c4f3b (CONDITIONAL_JUMP)  ; LAB_005c4f3b
    CMP EAX,0x2                         ; 005c4f31
        ;   Label: LAB_005c4f31
    JZ 0x005c4f42                       ; 005c4f34
        ;   XREF to: 005c4f42 (CONDITIONAL_JUMP)  ; LAB_005c4f42
    CMP EAX,0x3                         ; 005c4f36
    JZ 0x005c4f42                       ; 005c4f39
        ;   XREF to: 005c4f42 (CONDITIONAL_JUMP)  ; LAB_005c4f42
    MOV EAX,0x1                         ; 005c4f3b
        ;   Label: LAB_005c4f3b
    POP EBX                             ; 005c4f40
    RET                                 ; 005c4f41
    XOR EAX,EAX                         ; 005c4f42
        ;   Label: LAB_005c4f42
    POP EBX                             ; 005c4f44
    RET                                 ; 005c4f45

