; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a92dc(void)
;
;
; XREF[3]:
;   FUN_005ad0f2 at 005ad132
;   FUN_005b0611 at 005b0e5c
;   FUN_005b083d at 005b0873
;
; Called Functions:
;   FUN_005a92c0
;
; *****************************************************************************

section .text

    PUSH 0xe                            ; 005a92dc
        ;   Label: FUN_005a92dc
    CALL FUN_005a92c0                   ; 005a92de
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a92c0()
    ADD ESP,0x4                         ; 005a92e3
    RET                                 ; 005a92e6

