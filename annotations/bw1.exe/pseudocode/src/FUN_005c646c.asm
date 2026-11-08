; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c646c(void)
;
;
; XREF[3]:
;   FUN_005ca282 at 005ca2c2
;   FUN_005cd881 at 005ce0cc
;   FUN_005cdaad at 005cdae3
;
; Called Functions:
;   FUN_005c6450
;
; *****************************************************************************

section .text

    PUSH 0xe                            ; 005c646c
        ;   Label: FUN_005c646c
    CALL FUN_005c6450                   ; 005c646e
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6450()
    ADD ESP,0x4                         ; 005c6473
    RET                                 ; 005c6476

