; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004df590(void)
;
;
; XREF[3]:
;   FUN_0047d230 at 0047d69e
;   FUN_00483550 at 00483674
;   FUN_004bb100 at 004bb1c3
;
; Called Functions:
;   FUN_00580790
;   FUN_005a4120
;
; *****************************************************************************

section .text

    CALL FUN_00580790                   ; 004df590
        ;   XREF to: 00580790 (UNCONDITIONAL_CALL)  ; undefined FUN_00580790()
        ;   Label: FUN_004df590
    AND EAX,0xff                        ; 004df595
    PUSH EAX                            ; 004df59a
    CALL FUN_005a4120                   ; 004df59b
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4120()
    ADD ESP,0x4                         ; 004df5a0
    RET                                 ; 004df5a3

