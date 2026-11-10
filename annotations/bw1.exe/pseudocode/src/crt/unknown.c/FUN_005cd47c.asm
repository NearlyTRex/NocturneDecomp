; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cd47c(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005cd0f0
;   crt_unknown.c_FUN_005cd210
;   crt_unknown.c_FUN_005cd274
;
; *****************************************************************************

section .text

    CALL crt_unknown.c_FUN_005cd210     ; 005cd47c
        ;   XREF to: 005cd210 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd210()
        ;   Label: crt_unknown.c_FUN_005cd47c
    TEST EAX,EAX                        ; 005cd481
    JZ 0x005cd4a2                       ; 005cd483
        ;   XREF to: 005cd4a2 (CONDITIONAL_JUMP)  ; LAB_005cd4a2
    CALL crt_unknown.c_FUN_005cd274     ; 005cd485
        ;   XREF to: 005cd274 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd274()
    PUSH 0x2                            ; 005cd48a
    PUSH 0x4                            ; 005cd48c
    CALL crt_unknown.c_FUN_005cd0f0     ; 005cd48e
        ;   XREF to: 005cd0f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd0f0()
    ADD ESP,0x8                         ; 005cd493
    PUSH 0x2                            ; 005cd496
    PUSH 0x7                            ; 005cd498
    CALL crt_unknown.c_FUN_005cd0f0     ; 005cd49a
        ;   XREF to: 005cd0f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd0f0()
    ADD ESP,0x8                         ; 005cd49f
    RET                                 ; 005cd4a2
        ;   Label: LAB_005cd4a2

