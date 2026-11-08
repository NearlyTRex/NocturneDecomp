; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 FUN_004dfe90(void)
;
;
; XREF[2]:
;   FUN_0047b1f0 at 0047b49a
;   FUN_0047d270 at 0047d576
;
; Called Functions:
;   FUN_0058ead0
;
; *****************************************************************************

section .text

    CALL FUN_0058ead0                   ; 004dfe90
        ;   XREF to: 0058ead0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058ead0()
        ;   Label: FUN_004dfe90
    AND EAX,0xff                        ; 004dfe95
    RET                                 ; 004dfe9a

