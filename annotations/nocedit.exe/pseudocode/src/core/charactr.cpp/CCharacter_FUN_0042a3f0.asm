; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_charactr.cpp_CCharacter_FUN_0042a3f0(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0042a3f0
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042a3f0
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042a3f4
    PUSH EDX                            ; 0042a3f8
    ADD EAX,0x158                       ; 0042a3f9
    PUSH EAX                            ; 0042a3fe
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0042a3ff
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042a404
    PUSH EAX                            ; 0042a407
    CALL core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220 ; 0042a408
        ;   XREF to: 0059c220 (UNCONDITIONAL_CALL)  ; SPart * core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220(CDeformableModel * this_ptr, int part_index)
    ADD ESP,0x8                         ; 0042a40d
    MOV EAX,dword ptr [EAX + 0x5c]      ; 0042a410
    RET                                 ; 0042a413

