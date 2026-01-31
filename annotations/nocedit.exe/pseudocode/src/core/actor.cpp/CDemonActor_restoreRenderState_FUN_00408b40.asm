; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[71]:
;   core_actor.cpp_CDemonActor_FUN_0040dec0 at 0040e116
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 at 0040dea8
;   core_ammo.cpp_CAmmo_renderOpaque_FUN_00410e80 at 00410eb2
;   core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_00411820 at 00411856
;   core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_00412860 at 004128b9
;   core_backgnd.cpp_CBackgroundActor_renderOpaque_FUN_004128d0 at 00412929
;   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 at 00413c88
;   core_barrier.cpp_CBarrier_FUN_00414240 at 0041429a
;   core_bat.cpp_CBat_renderOpaque_FUN_00414bf0 at 00414c22
;   core_batman.cpp_CBatman_renderOpaque_FUN_004173b0 at 00417498
;   ... and 61 more
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x006703ec]      ; 00408b40 | g_CDemonRendererPtr2
        ;   Label: core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
    PUSH EDX                            ; 00408b46 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 00408b47
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()

