; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046d090(undefined4 param_1,float param_2)
;
;
; XREF[11]:
;   FUN_00412c50 at 00412d8d
;   FUN_00448ff0 at 004491e9
;   FUN_00449840 at 004499af
;   FUN_0045c530 at 0045c5da
;   FUN_004dbe70 at 004dc0ee
;   FUN_004f4070 at 004f4092
;   FUN_004f9670 at 004f9710
;   FUN_005365c0 at 00536902
;   FUN_0053af20 at 0053af44
;   FUN_0053f940 at 00540345
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_005bc533
;   undefined4 DAT_005bc53b
;   undefined4 DAT_005fba44
;
; Called Functions:
;   FUN_005a3120
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 0046d090
        ;   Label: FUN_0046d090
    FDIVR double ptr [0x005bc533]       ; 0046d094 | DAT_005bc533
    FMUL double ptr [0x005bc53b]        ; 0046d09a | DAT_005bc53b
    CALL FUN_005a3120                   ; 0046d0a0
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [0x005fba44]        ; 0046d0a5 | DAT_005fba44
    RET                                 ; 0046d0ab

