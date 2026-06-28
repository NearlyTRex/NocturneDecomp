; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(CDemonRenderer *this_ptr,float field_of_view)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   field_of_view
;
; XREF[12]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 at 0044c627
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 at 00472b2a
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047cd7d
;   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 at 004fefe8
;   core_level.cpp_CLevelLoader_update_FUN_00504160 at 005041f4
;   core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_00521480 at 005214a2
;   core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0 at 0052a2f1
;   core_moon.cpp_CMoon_render_FUN_00529ed0 at 00529f0b
;   core_set.cpp_CDemonSet_renderGogglesView_FUN_0056c990 at 0056ccc1
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0 at 00570b14
;   ... and 2 more
;
; Referenced Globals:
;   double g_ProjectionRenderDivisor = 18
;   double g_ProjectionRenderMultiplier = 65536
;   int g_ProjectionScale = 0x10000
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 0048c650
        ;   Label: engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
    FDIVR double ptr [0x00622035]       ; 0048c654 | g_ProjectionRenderDivisor
    FMUL double ptr [0x0062203d]        ; 0048c65a | g_ProjectionRenderMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c660
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [0x006793c0]        ; 0048c665 | g_ProjectionScale
    RET                                 ; 0048c66b

