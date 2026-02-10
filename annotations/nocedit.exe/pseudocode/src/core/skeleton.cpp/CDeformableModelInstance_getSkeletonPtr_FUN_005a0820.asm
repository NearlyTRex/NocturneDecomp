; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSkeleton * __cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 (CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[76]:
;   core_baron.cpp_CBaron_setup_FUN_00412cb0 at 00412cc6
;   core_batcreat.cpp_CBatCreature_setup_FUN_00415150 at 00415170
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416b57
;   core_batman.cpp_CBatman_setup_FUN_00416510 at 00416530
;   core_boneguy.cpp_CBoneGuy_setup_FUN_0041bd90 at 0041bda7
;   core_bride.cpp_CBride_setup_FUN_00423810 at 0042382a
;   core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0 at 0042b642
;   core_charactr.cpp_CCharacter_processFire_FUN_0042a830 at 0042a846
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 at 0042ecc9
;   core_charactr.cpp_CCharacter_processSmoking_FUN_0042ea40 at 0042eac6
;   ... and 66 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a0820
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
    PUSH EDX                            ; 005a0824
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a0825
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a082a
    PUSH EAX                            ; 005a082d
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810 ; 005a082e
        ;   XREF to: 0059a810 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005a0833
    RET                                 ; 005a0836

