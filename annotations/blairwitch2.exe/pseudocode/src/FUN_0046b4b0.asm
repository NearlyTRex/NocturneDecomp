; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b4b0(undefined4 param_1,float param_2)
;
;
; XREF[10]:
;   FUN_0043b7f0 at 0043b9e9
;   FUN_0043c040 at 0043c1af
;   FUN_0044a020 at 0044a0ca
;   FUN_004dbd80 at 004dbfcd
;   FUN_004e1600 at 004e16fa
;   FUN_004f9950 at 004f9972
;   FUN_00502510 at 005025ab
;   FUN_0052fad0 at 0052fe12
;   FUN_005342e0 at 00534304
;   FUN_0059bb60 at 0059bc9d
;
; Referenced Globals:
;   undefined4 DAT_005d15a3
;   undefined4 DAT_005d15ab
;   undefined4 DAT_006141e4
;
; Called Functions:
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 0046b4b0
        ;   Label: FUN_0046b4b0
    FDIVR double ptr [0x005d15a3]       ; 0046b4b4 | DAT_005d15a3
    FMUL double ptr [0x005d15ab]        ; 0046b4ba | DAT_005d15ab
    CALL FUN_005b7ff0                   ; 0046b4c0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [0x006141e4]        ; 0046b4c5 | DAT_006141e4
    RET                                 ; 0046b4cb

