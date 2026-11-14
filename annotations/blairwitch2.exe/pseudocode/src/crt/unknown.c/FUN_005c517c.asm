; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c517c(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c4df0
;   crt_unknown.c_FUN_005c4f10
;   crt_unknown.c_FUN_005c4f74
;
; *****************************************************************************

section .text

    CALL crt_unknown.c_FUN_005c4f10     ; 005c517c
        ;   XREF to: 005c4f10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4f10()
        ;   Label: crt_unknown.c_FUN_005c517c
    TEST EAX,EAX                        ; 005c5181
    JZ 0x005c51a2                       ; 005c5183
        ;   XREF to: 005c51a2 (CONDITIONAL_JUMP)  ; LAB_005c51a2
    CALL crt_unknown.c_FUN_005c4f74     ; 005c5185
        ;   XREF to: 005c4f74 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4f74()
    PUSH 0x2                            ; 005c518a
    PUSH 0x4                            ; 005c518c
    CALL crt_unknown.c_FUN_005c4df0     ; 005c518e
        ;   XREF to: 005c4df0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4df0()
    ADD ESP,0x8                         ; 005c5193
    PUSH 0x2                            ; 005c5196
    PUSH 0x7                            ; 005c5198
    CALL crt_unknown.c_FUN_005c4df0     ; 005c519a
        ;   XREF to: 005c4df0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4df0()
    ADD ESP,0x8                         ; 005c519f
    RET                                 ; 005c51a2
        ;   Label: LAB_005c51a2

