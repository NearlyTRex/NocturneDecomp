; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00441e80(undefined4 param_1,float param_2)
;
;
; XREF[6]:
;   FUN_004b90d0 at 004ba7af
;   FUN_0052d980 at 0052da4e
;   FUN_00534640 at 0053466d
;   FUN_0053ad20 at 0053ad95
;   FUN_0058a660 at 0058a8d7
;   FUN_0058aa30 at 0058acae
;
; Referenced Globals:
;   undefined4 DAT_005ce636
;
; Called Functions:
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 00441e80
        ;   Label: FUN_00441e80
    FMUL double ptr [0x005ce636]        ; 00441e84 | DAT_005ce636
    MOV EAX,dword ptr [ESP + 0x4]       ; 00441e8a
    CALL FUN_005b7ff0                   ; 00441e8e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [EAX + 0x11e8]      ; 00441e93
    RET                                 ; 00441e99

