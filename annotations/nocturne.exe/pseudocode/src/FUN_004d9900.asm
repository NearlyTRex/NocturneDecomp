; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d9900(void)
;
;
; XREF[1]:
;   FUN_004d7fe0 at 004d84d2
;
; Called Functions:
;   FUN_00454460
;   FUN_0051f650
;   FUN_0051f730
;   FUN_005459f0
;
; *****************************************************************************

section .text

    CALL FUN_005459f0                   ; 004d9900
        ;   XREF to: 005459f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005459f0()
        ;   Label: FUN_004d9900
    CALL FUN_00454460                   ; 004d9905
        ;   XREF to: 00454460 (UNCONDITIONAL_CALL)  ; undefined FUN_00454460()
    CALL FUN_0051f650                   ; 004d990a
        ;   XREF to: 0051f650 (UNCONDITIONAL_CALL)  ; undefined FUN_0051f650()
    JMP 0x0051f730                      ; 004d990f
        ;   XREF to: 0051f730 (UNCONDITIONAL_CALL)

