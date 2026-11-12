; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_0046b4b0(undefined4 param_1,float param_2)
;
;
; XREF[11]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_renderReel_FUN_0059bb60 at 0059bc9d
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040 at 0043c1af
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0 at 0043b9e9
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020 at 0044a0ca
;   core_inv.cpp_CInventory_renderItemModel_FUN_004dbd80 at 004dbfcd
;   core_level.cpp_CLevelLoader_update_FUN_004e1600 at 004e16fa
;   core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004f9950 at 004f9972
;   core_moon.cpp_CMoon_render_FUN_00502510 at 005025ab
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0 at 00534304
;   core_set.cpp_FUN_0052fad0 at 0052fe12
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_005d15a3
;   undefined4 DAT_005d15ab
;   undefined4 DAT_006141e4
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 0046b4b0
        ;   Label: engine_drender.cpp_FUN_0046b4b0
    FDIVR double ptr [0x005d15a3]       ; 0046b4b4 | DAT_005d15a3
    FMUL double ptr [0x005d15ab]        ; 0046b4ba | DAT_005d15ab
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b4c0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x006141e4]        ; 0046b4c5 | DAT_006141e4
    RET                                 ; 0046b4cb

