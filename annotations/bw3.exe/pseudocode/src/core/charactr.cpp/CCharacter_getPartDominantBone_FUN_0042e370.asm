; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042e370(CCharacter *this_ptr,int part_index)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0054a2f0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0042e370
        ;   Label: core_charactr.cpp_CCharacter_getPartDominantBone_FUN_0042e370
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042e374
    PUSH EDX                            ; 0042e378
    ADD EAX,0x158                       ; 0042e379
    PUSH EAX                            ; 0042e37e
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0042e37f
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042e384
    PUSH EAX                            ; 0042e387
    CALL core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0054a2f0 ; 0042e388
        ;   XREF to: 0054a2f0 (UNCONDITIONAL_CALL)  ; SPart * core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0054a2f0(CDeformableModel * this_ptr, int part_index)
    ADD ESP,0x8                         ; 0042e38d
    MOV EAX,dword ptr [EAX + 0x5c]      ; 0042e390
    RET                                 ; 0042e393

