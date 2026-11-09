; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_FUN_004839b0(undefined4 param_1,float param_2)
;
;
; XREF[13]:
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700 at 0044d86f
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0 at 0044d0a9
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00462820 at 004628ca
;   core_inv.cpp_FUN_004f90d0 at 004f931e
;   core_level.cpp_FUN_004fe9c0 at 004fea64
;   core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_005188a0 at 005188c2
;   core_moon.cpp_FUN_00521e40 at 00521ef6
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590 at 005555b4
;   core_set.cpp_FUN_00550da0 at 005510e2
;   core_setdir.cpp_FUN_00559f80 at 0055a985
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_005db39c
;   undefined4 DAT_005db3a4
;   undefined4 DAT_0061b4c4
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 004839b0
        ;   Label: engine_matrix.c_FUN_004839b0
    FDIVR double ptr [0x005db39c]       ; 004839b4 | DAT_005db39c
    FMUL double ptr [0x005db3a4]        ; 004839ba | DAT_005db3a4
    CALL crt_math.c_round_FUN_005c03a0  ; 004839c0
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [0x0061b4c4]        ; 004839c5 | DAT_0061b4c4
    RET                                 ; 004839cb

