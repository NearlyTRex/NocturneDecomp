; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[74]:
;   core_actor.cpp_CDemonActor_renderBoundingBoxSolid_FUN_0040dec0 at 0040dee6
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 at 0040d952
;   core_ammo.cpp_CAmmo_renderOpaque_FUN_00410e80 at 00410e8a
;   core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_00411820 at 0041182d
;   core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_00412860 at 00412880
;   core_backgnd.cpp_CBackgroundActor_renderOpaque_FUN_004128d0 at 004128ec
;   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 at 00413bd8
;   core_barrier.cpp_CBarrier_renderTransparent_FUN_00414240 at 00414272
;   core_bat.cpp_CBat_renderOpaque_FUN_00414bf0 at 00414bfa
;   core_batman.cpp_CBatman_renderOpaque_FUN_004173b0 at 00417418
;   ... and 64 more
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00408b00
        ;   Label: core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
    ADD EAX,0x20                        ; 00408b04
    PUSH EAX                            ; 00408b07
    MOV EDX,dword ptr [0x006703ec]      ; 00408b08 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 00408b0e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00408b0f
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00408b14
    MOV EAX,dword ptr [ESP + 0x4]       ; 00408b17
    PUSH 0x0                            ; 00408b1b
    ADD EAX,0x30                        ; 00408b1d
    PUSH EAX                            ; 00408b20
    MOV ECX,dword ptr [0x006703ec]      ; 00408b21 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 00408b27 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00408b28
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 00408b2d
    RET                                 ; 00408b30

