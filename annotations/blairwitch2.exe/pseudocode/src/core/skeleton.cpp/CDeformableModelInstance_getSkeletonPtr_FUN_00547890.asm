; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * __cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[90]:
;   core_baron.cpp_CBaron_setup_FUN_0040f780 at 0040f796
;   core_basicene.cpp_CBasicEnemy_setup_FUN_0059e6a0 at 0059e6bf
;   core_batcreat.cpp_CBatCreature_setup_FUN_004116f0 at 00411710
;   core_batman.cpp_CBatman_process_FUN_00412f40 at 00413268
;   core_batman.cpp_CBatman_setup_FUN_00412be0 at 00412c00
;   core_boneguy.cpp_CBoneGuy_setup_FUN_004184c0 at 004184d7
;   core_bride.cpp_CBride_setup_FUN_0041d9c0 at 0041d9da
;   core_charactr.cpp_CCharacter_applyGesture_FUN_004291f0 at 00429223
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429420 at 00429455
;   core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70 at 00426f02
;   ... and 80 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00547890
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
    PUSH EDX                            ; 00547894
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00547895
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054789a
    PUSH EAX                            ; 0054789d
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0 ; 0054789e
        ;   XREF to: 005415d0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005478a3
    RET                                 ; 005478a6

