; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[66]:
;   core_ammo.cpp_CAmmo_renderOpaque_FUN_0040ec30 at 0040ec3a
;   core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_0040f2b0 at 0040f2bd
;   core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_0040ff80 at 0040ff95
;   core_baron.cpp_CBaron_renderTransparent_FUN_004110f0 at 004111e8
;   core_bat.cpp_CBat_renderOpaque_FUN_00411e30 at 00411e3a
;   core_batman.cpp_CBatman_renderOpaque_FUN_00414340 at 004143a8
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_00415760 at 0041577d
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00416300 at 0041635e
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004161a0 at 004161e9
;   core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00416430 at 00416476
;   ... and 56 more
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00409f20
        ;   Label: core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
    ADD EAX,0x20                        ; 00409f24
    PUSH EAX                            ; 00409f27
    MOV EDX,dword ptr [0x005ae704]      ; 00409f28 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00409f2e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00409f2f
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00409f34
    MOV EAX,dword ptr [ESP + 0x4]       ; 00409f37
    PUSH 0x0                            ; 00409f3b
    ADD EAX,0x30                        ; 00409f3d
    PUSH EAX                            ; 00409f40
    MOV ECX,dword ptr [0x005ae704]      ; 00409f41 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00409f47 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00409f48
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 00409f4d
    RET                                 ; 00409f50

