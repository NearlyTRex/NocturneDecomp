; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(undefined4 param_1)
;
;
; XREF[74]:
;   FUN_00439da0 at 00439db6
;   FUN_004b3110 at 004b3126
;   FUN_004b6d80 at 004b71c2
;   FUN_004d4650 at 004d46a5
;   FUN_004d4ba0 at 004d4bb7
;   FUN_0051cf60 at 0051cf6c
;   FUN_0051d5e0 at 0051d5ed
;   FUN_0051d650 at 0051d683
;   FUN_0051f3f0 at 0051f4ba
;   FUN_00535450 at 0053546a
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
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020()
    ADD ESP,0x4                         ; 0051e0aa
    PUSH EAX                            ; 0051e0ad
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130 ; 0051e0ae
        ;   XREF to: 00518130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130()
    ADD ESP,0x4                         ; 0051e0b3
    RET                                 ; 0051e0b6

