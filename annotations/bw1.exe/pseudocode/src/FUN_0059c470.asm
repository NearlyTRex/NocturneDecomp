; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059c470(void)
;
;
; Called Functions:
;   FUN_0059c520
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 0059c470
        ;   Label: FUN_0059c470
    PUSH 0xff                           ; 0059c475
    PUSH 0xff                           ; 0059c47a
    PUSH 0xff                           ; 0059c47f
    PUSH 0x2c8ae48                      ; 0059c484
    CALL FUN_0059c520                   ; 0059c489
        ;   XREF to: 0059c520 (UNCONDITIONAL_CALL)  ; undefined FUN_0059c520()
    ADD ESP,0x14                        ; 0059c48e
    PUSH 0x0                            ; 0059c491
    PUSH 0x0                            ; 0059c493
    PUSH 0x0                            ; 0059c495
    PUSH 0x0                            ; 0059c497
    PUSH 0x2c8ae4c                      ; 0059c499
    CALL FUN_0059c520                   ; 0059c49e
        ;   XREF to: 0059c520 (UNCONDITIONAL_CALL)  ; undefined FUN_0059c520()
    ADD ESP,0x14                        ; 0059c4a3
    RET                                 ; 0059c4a6

