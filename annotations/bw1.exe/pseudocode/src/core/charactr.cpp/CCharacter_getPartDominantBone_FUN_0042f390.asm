; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042f390(CCharacter *this_ptr,int part_index)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_00565760
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0042f390
        ;   Label: core_charactr.cpp_CCharacter_getPartDominantBone_FUN_0042f390
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042f394
    PUSH EDX                            ; 0042f398
    ADD EAX,0x158                       ; 0042f399
    PUSH EAX                            ; 0042f39e
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0042f39f
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042f3a4
    PUSH EAX                            ; 0042f3a7
    CALL core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_00565760 ; 0042f3a8
        ;   XREF to: 00565760 (UNCONDITIONAL_CALL)  ; SPart * core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_00565760(CDeformableModel * this_ptr, int part_index)
    ADD ESP,0x8                         ; 0042f3ad
    MOV EAX,dword ptr [EAX + 0x5c]      ; 0042f3b0
    RET                                 ; 0042f3b3

