; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_haystack_cpp_CHaystack_onActorDeleted_FUN_004f1cb0 (CHaystack *this_ptr,CDemonActor *deleted_actor)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   deleted_actor
;
; Called Functions:
;   core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f1cb0
        ;   Label: core_haystack.cpp_CHaystack_onActorDeleted_FUN_004f1cb0
    PUSH EDX                            ; 004f1cb4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f1cb5
    PUSH ECX                            ; 004f1cb9
    CALL core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0 ; 004f1cba
        ;   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0(CCharacter * this_ptr, CDemonActor * deleted_actor)
    ADD ESP,0x8                         ; 004f1cbf
    RET                                 ; 004f1cc2

