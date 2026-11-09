; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_FUN_0046d090(undefined4 param_1,float param_2)
;
;
; XREF[12]:
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00449840 at 004499af
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00448ff0 at 004491e9
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0045c530 at 0045c5da
;   core_inv.cpp_FUN_004dbe70 at 004dc0ee
;   core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004f4070 at 004f4092
;   core_moon.cpp_FUN_004f9670 at 004f9710
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20 at 0053af44
;   core_set.cpp_FUN_005365c0 at 00536902
;   core_setdir.cpp_FUN_0053f940 at 00540345
;   core_setdir.cpp_FUN_00540cf0 at 00540d98
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_005bc533
;   undefined4 DAT_005bc53b
;   undefined4 DAT_005fba44
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 0046d090
        ;   Label: engine_matrix.c_FUN_0046d090
    FDIVR double ptr [0x005bc533]       ; 0046d094 | DAT_005bc533
    FMUL double ptr [0x005bc53b]        ; 0046d09a | DAT_005bc53b
    CALL crt_math.c_round_FUN_005a3120  ; 0046d0a0
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x005fba44]        ; 0046d0a5 | DAT_005fba44
    RET                                 ; 0046d0ab

