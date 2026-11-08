; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f9430(void)
;
;
; Called Functions:
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH 0x5f22b0                       ; 004f9430
        ;   Label: FUN_004f9430
    PUSH 0x20                           ; 004f9435
    PUSH 0x1d17fc4                      ; 004f9437
    CALL FUN_005b7f5f                   ; 004f943c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 004f9441
    PUSH 0x5f22b0                       ; 004f9444
    PUSH 0x20                           ; 004f9449
    PUSH 0x1d18148                      ; 004f944b
    CALL FUN_005b7f5f                   ; 004f9450
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 004f9455
    RET                                 ; 004f9458

