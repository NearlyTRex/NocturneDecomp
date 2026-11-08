; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00453540(undefined4 param_1,float param_2)
;
;
; XREF[6]:
;   FUN_004d27b0 at 004d49df
;   FUN_0054ec60 at 0054ed29
;   FUN_005558f0 at 0055591d
;   FUN_0055c5f0 at 0055c665
;   FUN_005ae190 at 005ae407
;   FUN_005ae580 at 005ae7fd
;
; Referenced Globals:
;   undefined4 DAT_005d78ff
;
; Called Functions:
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 00453540
        ;   Label: FUN_00453540
    FMUL double ptr [0x005d78ff]        ; 00453544 | DAT_005d78ff
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045354a
    CALL FUN_005c03a0                   ; 0045354e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [EAX + 0x11e8]      ; 00453553
    RET                                 ; 00453559

