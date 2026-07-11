; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00446740(undefined4 param_1,float param_2)
;
;
; XREF[6]:
;   FUN_004a0550 at 004a284a
;   FUN_005084c0 at 00508589
;   FUN_0050e4c0 at 0050e4f8
;   FUN_005148b0 at 0051491f
;   FUN_00554980 at 00554bec
;   FUN_00554d40 at 00554f8e
;
; Referenced Globals:
;   undefined4 DAT_0057b9eb
;
; Called Functions:
;   FUN_00563a30
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 00446740
        ;   Label: FUN_00446740
    FMUL double ptr [0x0057b9eb]        ; 00446744 | DAT_0057b9eb
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044674a
    CALL FUN_00563a30                   ; 0044674e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [EAX + 0x11e8]      ; 00446753
    RET                                 ; 00446759

