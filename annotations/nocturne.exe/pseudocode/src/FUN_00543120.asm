; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00543120(void)
;
;
; Called Functions:
;   FUN_00543150
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x1f578                        ; 00543120
        ;   Label: FUN_00543120
    CALL FUN_0056497c                   ; 00543125
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 0054312a
    TEST EAX,EAX                        ; 0054312d
    JNZ 0x00543132                      ; 0054312f
        ;   XREF to: 00543132 (CONDITIONAL_JUMP)  ; LAB_00543132
    RET                                 ; 00543131
    PUSH EAX                            ; 00543132
        ;   Label: LAB_00543132
    CALL FUN_00543150                   ; 00543133
        ;   XREF to: 00543150 (UNCONDITIONAL_CALL)  ; undefined FUN_00543150()
    ADD ESP,0x4                         ; 00543138
    RET                                 ; 0054313b

