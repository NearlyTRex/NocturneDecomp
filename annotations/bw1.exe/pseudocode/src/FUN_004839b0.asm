; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004839b0(undefined4 param_1,float param_2)
;
;
; XREF[12]:
;   FUN_00416fa0 at 004170dd
;   FUN_0044ceb0 at 0044d0a9
;   FUN_0044d700 at 0044d86f
;   FUN_00462820 at 004628ca
;   FUN_004f90d0 at 004f931e
;   FUN_004fe9c0 at 004fea64
;   FUN_005188a0 at 005188c2
;   FUN_00521e40 at 00521ef6
;   FUN_00550da0 at 005510e2
;   FUN_00555590 at 005555b4
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_005db39c
;   undefined4 DAT_005db3a4
;   undefined4 DAT_0061b4c4
;
; Called Functions:
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 004839b0
        ;   Label: FUN_004839b0
    FDIVR double ptr [0x005db39c]       ; 004839b4 | DAT_005db39c
    FMUL double ptr [0x005db3a4]        ; 004839ba | DAT_005db3a4
    CALL FUN_005c03a0                   ; 004839c0
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [0x0061b4c4]        ; 004839c5 | DAT_0061b4c4
    RET                                 ; 004839cb

