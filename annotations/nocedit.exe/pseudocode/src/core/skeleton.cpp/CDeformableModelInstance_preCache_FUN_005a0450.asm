; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[36]:
;   core_armour.cpp_CArmour_setup_FUN_00412240 at 00412257
;   core_batcreat.cpp_CBatCreature_setup_FUN_00415150 at 00415167
;   core_batman.cpp_CBatman_setup_FUN_00416510 at 00416527
;   core_beast.cpp_CBeast_setup_FUN_00418280 at 0041828a
;   core_biggs.cpp_CBiggs_setup_FUN_00418680 at 00418697
;   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 at 0041b2e8
;   core_boneguy.cpp_CBoneGuy_setup_FUN_0041bd90 at 0041bd9e
;   core_bride.cpp_CBride_setup_FUN_00423810 at 00423821
;   core_cloth.cpp_CCloth_showMenu_FUN_0043ddf0 at 0043dfaa
;   core_cow.cpp_CZombieCow_setup_FUN_004441b0 at 004441be
;   ... and 26 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
;   core_skeleton.cpp_getDeformableModel_FUN_005a1cf0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a0450
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
    ADD EAX,0x2260                      ; 005a0454
    PUSH EAX                            ; 005a0459
    CALL core_skeleton.cpp_getDeformableModel_FUN_005a1cf0 ; 005a045a
        ;   XREF to: 005a1cf0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_getDeformableModel_FUN_005a1cf0(char * model_filename)
    ADD ESP,0x4                         ; 005a045f
    PUSH EAX                            ; 005a0462
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a0463
    PUSH EDX                            ; 005a0467
    CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480 ; 005a0468
        ;   XREF to: 005a0480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
    ADD ESP,0x8                         ; 005a046d
    RET                                 ; 005a0470

