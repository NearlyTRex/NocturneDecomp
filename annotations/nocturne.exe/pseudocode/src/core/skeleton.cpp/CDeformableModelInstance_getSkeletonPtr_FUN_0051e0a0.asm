; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * __cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[74]:
;   core_baron.cpp_CBaron_setup_FUN_004102c0 at 004102d6
;   core_batcreat.cpp_CBatCreature_setup_FUN_00412160 at 00412180
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413ae7
;   core_batman.cpp_CBatman_setup_FUN_004134a0 at 004134c0
;   core_boneguy.cpp_CBoneGuy_setup_FUN_00418800 at 00418817
;   core_bride.cpp_CBride_setup_FUN_0041fc20 at 0041fc3a
;   core_charactr.cpp_CCharacter_FUN_00427730 at 004277c2
;   core_charactr.cpp_CCharacter_processFire_FUN_004269b0 at 004269c6
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 at 0042ae0a
;   core_charactr.cpp_CCharacter_processSmoking_FUN_0042abd0 at 0042ac56
;   ... and 64 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051e0a0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
    PUSH EDX                            ; 0051e0a4
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051e0a5
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051e0aa
    PUSH EAX                            ; 0051e0ad
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130 ; 0051e0ae
        ;   XREF to: 00518130 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0051e0b3
    RET                                 ; 0051e0b6

