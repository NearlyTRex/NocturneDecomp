; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * __cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[94]:
;   core_baron.cpp_CBaron_setup_FUN_0040f300 at 0040f316
;   core_batcreat.cpp_CBatCreature_setup_FUN_00411280 at 004112aa
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 00412f71
;   core_batman.cpp_CBatman_setup_FUN_00412840 at 0041286a
;   core_bird.cpp_CBird_setup_FUN_004152c0 at 004152d6
;   core_boneguy.cpp_CBoneGuy_setup_FUN_0041b940 at 0041b957
;   core_bride.cpp_CBride_setup_FUN_00423940 at 00423964
;   core_carved.cpp_CCarved_setup_FUN_004287e0 at 00428823
;   core_charactr.cpp_CCharacter_applyGesture_FUN_00432cb0 at 00432ce3
;   core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0 at 00430932
;   ... and 84 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00569f30
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
    PUSH EDX                            ; 00569f34
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 00569f35
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00569f3a
    PUSH EAX                            ; 00569f3d
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40 ; 00569f3e
        ;   XREF to: 00563c40 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 00569f43
    RET                                 ; 00569f46

