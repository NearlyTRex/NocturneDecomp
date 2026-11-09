; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * __cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[74]:
;   core_asgaya.cpp_FUN_005a0b00 at 005a0b16
;   core_baal.cpp_FUN_00596730 at 0059676e
;   core_boneguy.cpp_FUN_00417630 at 0041764a
;   core_carved.cpp_FUN_00425ab0 at 00425ac7
;   core_charactr.cpp_FUN_0042b0e0 at 0042b17e
;   core_charactr.cpp_FUN_0042cd70 at 0042ce17
;   core_charactr.cpp_FUN_0042e8c0 at 0042e8d9
;   core_charactr.cpp_FUN_0042f010 at 0042f05e
;   core_charactr.cpp_FUN_0042f6f0 at 0042f704
;   core_charactr.cpp_FUN_0042fbd0 at 0042fc6c
;   ... and 64 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_FUN_005487e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054eac0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
    PUSH EDX                            ; 0054eac4
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0054eac5
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054eaca
    PUSH EAX                            ; 0054eacd
    CALL core_skeleton.cpp_FUN_005487e0 ; 0054eace
        ;   XREF to: 005487e0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_FUN_005487e0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0054ead3
    RET                                 ; 0054ead6

