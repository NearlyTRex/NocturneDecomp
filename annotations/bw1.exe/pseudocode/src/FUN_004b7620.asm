; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b7620(int param_1)
;
;
; Called Functions:
;   FUN_0041dab0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b7620
        ;   Label: FUN_004b7620
    PUSH 0x0                            ; 004b7624
    ADD EAX,0x180                       ; 004b7626
    PUSH EAX                            ; 004b762b
    CALL FUN_0041dab0                   ; 004b762c
        ;   XREF to: 0041dab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041dab0()
    ADD ESP,0x8                         ; 004b7631
    SUB EAX,0x180                       ; 004b7634
    RET                                 ; 004b7639

