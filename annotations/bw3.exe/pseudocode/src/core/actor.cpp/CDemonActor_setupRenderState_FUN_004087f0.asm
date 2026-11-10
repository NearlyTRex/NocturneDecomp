; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[67]:
;   core_ammo.cpp_CAmmo_renderOpaque_FUN_0040df20 at 0040df2b
;   core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_0040e810 at 0040e81d
;   core_asgaya.cpp_CAsgaya_renderOpaque_FUN_005a1760 at 005a177b
;   core_asgaya.cpp_CAsgaya_renderTransparent_FUN_005a17e0 at 005a187c
;   core_baal.cpp_CBaal_renderTransparent_FUN_00597970 at 005979ec
;   core_bat.cpp_CBat_renderOpaque_FUN_0040f200 at 0040f20b
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00414d40 at 00414dac
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_00414bd0 at 00414c19
;   core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00414e90 at 00414ed6
;   core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_00418f90 at 00418fad
;   ... and 57 more
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004087f0
        ;   Label: core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
    ADD EAX,0x20                        ; 004087f4
    PUSH EAX                            ; 004087f7
    MOV EDX,dword ptr [0x005f2afc]      ; 004087f8 | DAT_005f2afc
    PUSH EDX                            ; 004087fe | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 004087ff
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00408804
    MOV EAX,dword ptr [ESP + 0x4]       ; 00408807
    PUSH 0x0                            ; 0040880b
    ADD EAX,0x30                        ; 0040880d
    PUSH EAX                            ; 00408810
    MOV ECX,dword ptr [0x005f2afc]      ; 00408811 | DAT_005f2afc
    PUSH ECX                            ; 00408817 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 00408818
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0040881d
    RET                                 ; 00408820

