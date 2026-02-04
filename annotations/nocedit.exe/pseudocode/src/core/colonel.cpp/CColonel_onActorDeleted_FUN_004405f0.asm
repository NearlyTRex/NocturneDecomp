; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_colonel_cpp_CColonel_onActorDeleted_FUN_004405f0(CColonel *this_ptr,CDemonActor *deleted_actor)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   deleted_actor
;
; Called Functions:
;   core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004405f0
        ;   Label: core_colonel.cpp_CColonel_onActorDeleted_FUN_004405f0
    PUSH EDX                            ; 004405f4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004405f5
    PUSH ECX                            ; 004405f9
    CALL core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0 ; 004405fa
        ;   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0(CCharacter * this_ptr, CDemonActor * deleted_actor)
    ADD ESP,0x8                         ; 004405ff
    RET                                 ; 00440602

