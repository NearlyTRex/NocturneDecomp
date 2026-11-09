; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * __cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[89]:
;   core_baron.cpp_FUN_0040f780 at 0040f796
;   core_batcreat.cpp_FUN_004116f0 at 00411710
;   core_batman.cpp_FUN_00412be0 at 00412c00
;   core_batman.cpp_FUN_00412f40 at 00413268
;   core_boneguy.cpp_FUN_004184c0 at 004184d7
;   core_bride.cpp_FUN_0041d9c0 at 0041d9da
;   core_charactr.cpp_CCharacter_applyGesture_FUN_004291f0 at 00429223
;   core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70 at 00426f02
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 at 0042aa3c
;   core_charactr.cpp_FUN_00422930 at 004229ce
;   ... and 79 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_FUN_005415d0
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
    CALL core_skeleton.cpp_FUN_005415d0 ; 0054789e
        ;   XREF to: 005415d0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_FUN_005415d0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005478a3
    RET                                 ; 005478a6

