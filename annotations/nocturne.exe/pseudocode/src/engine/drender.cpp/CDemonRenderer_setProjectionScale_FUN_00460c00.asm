; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(undefined4 param_1,float param_2)
;
;
; XREF[11]:
;   FUN_005125a0 at 00512da8
;   FUN_00513720 at 005137c8
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290 at 004404ad
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470 at 0044e520
;   core_inv.cpp_CInventory_renderItemModel_FUN_004c0b40 at 004c0d81
;   core_level.cpp_CLevelLoader_update_FUN_004c59e0 at 004c5a74
;   core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004d6610 at 004d6632
;   core_moon.cpp_CMoon_renderJoystickCalibration_FUN_004df040 at 004df071
;   core_moon.cpp_CMoon_render_FUN_004dec50 at 004dec8b
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190 at 0050e1b4
;   ... and 1 more
;
; Referenced Globals:
;   double DOUBLE_0057dc45 = 18
;   double DOUBLE_0057dc4d = 65536
;   undefined4 DAT_005b7648
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 00460c00
        ;   Label: engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
    FDIVR double ptr [0x0057dc45]       ; 00460c04 | DOUBLE_0057dc45
    FMUL double ptr [0x0057dc4d]        ; 00460c0a | DOUBLE_0057dc4d
    CALL crt_math.c_round_FUN_00563a30  ; 00460c10
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [0x005b7648]        ; 00460c15 | DAT_005b7648
    RET                                 ; 00460c1b

