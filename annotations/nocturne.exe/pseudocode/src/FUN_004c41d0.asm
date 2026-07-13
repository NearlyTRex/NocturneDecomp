; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c41d0(void)
;
;
; XREF[2]:
;   FUN_00474ea0 at 00475109
;   FUN_004a0550 at 004a0613
;
; Called Functions:
;   FUN_00558b00
;   FUN_00565e20
;
; *****************************************************************************

section .text

    CALL FUN_00558b00                   ; 004c41d0
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00558b00()
        ;   Label: FUN_004c41d0
    AND EAX,0xff                        ; 004c41d5
    PUSH EAX                            ; 004c41da
    CALL FUN_00565e20                   ; 004c41db
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00565e20()
    ADD ESP,0x4                         ; 004c41e0
    RET                                 ; 004c41e3

