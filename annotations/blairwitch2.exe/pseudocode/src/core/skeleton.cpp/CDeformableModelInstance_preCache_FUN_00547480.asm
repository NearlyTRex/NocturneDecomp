; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[36]:
;   core_armour.cpp_CArmour_setup_FUN_0040eee0 at 0040eef7
;   core_basicene.cpp_CBasicEnemy_setup_FUN_0059e6a0 at 0059e6ad
;   core_batcreat.cpp_CBatCreature_setup_FUN_004116f0 at 00411707
;   core_batman.cpp_CBatman_setup_FUN_00412be0 at 00412bf7
;   core_beast.cpp_CBeast_setup_FUN_00414a60 at 00414a6a
;   core_biggs.cpp_CBiggs_setup_FUN_00414dd0 at 00414de7
;   core_boneguy.cpp_CBoneGuy_setup_FUN_004184c0 at 004184ce
;   core_bride.cpp_CBride_setup_FUN_0041d9c0 at 0041d9d1
;   core_charactr.cpp_CCharacter_setCharacterModel_FUN_0042b440 at 0042b479
;   core_charactr.cpp_CCharacter_setup_FUN_00422930 at 004229be
;   ... and 26 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0
;   core_skeleton.cpp_FUN_00548e80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00547480
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
    ADD EAX,0x2260                      ; 00547484
    PUSH EAX                            ; 00547489
    CALL core_skeleton.cpp_FUN_00548e80 ; 0054748a
        ;   XREF to: 00548e80 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00548e80()
    ADD ESP,0x4                         ; 0054748f
    PUSH EAX                            ; 00547492
    MOV EDX,dword ptr [ESP + 0x8]       ; 00547493
    PUSH EDX                            ; 00547497
    CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0 ; 00547498
        ;   XREF to: 005474b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
    ADD ESP,0x8                         ; 0054749d
    RET                                 ; 005474a0

