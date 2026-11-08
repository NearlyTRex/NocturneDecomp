; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a6970(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1d05544                      ; 005a6970
        ;   Label: FUN_005a6970
    PUSH 0x1                            ; 005a6975
    PUSH 0x61ebac                       ; 005a6977
    PUSH 0x5a69c0                       ; 005a697c
    PUSH 0x5f06d5                       ; 005a6981
    PUSH 0x26686fc                      ; 005a6986
    CALL FUN_0040c450                   ; 005a698b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 005a6990
    PUSH 0x1d05544                      ; 005a6993
    PUSH 0x1                            ; 005a6998
    PUSH 0x61ebb0                       ; 005a699a
    PUSH 0x5a7950                       ; 005a699f
    PUSH 0x5f06dc                       ; 005a69a4
    PUSH 0x2668738                      ; 005a69a9
    CALL FUN_0040c450                   ; 005a69ae
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 005a69b3
    RET                                 ; 005a69b6

