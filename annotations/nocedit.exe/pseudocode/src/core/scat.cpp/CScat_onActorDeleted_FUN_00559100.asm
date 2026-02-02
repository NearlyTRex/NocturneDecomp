; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_scat_cpp_CScat_onActorDeleted_FUN_00559100(CScat *this_ptr,CDemonActor *deleted_actor)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   deleted_actor
;
; Called Functions:
;   core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00559100
        ;   Label: core_scat.cpp_CScat_onActorDeleted_FUN_00559100
    PUSH EDX                            ; 00559104
    MOV ECX,dword ptr [ESP + 0x8]       ; 00559105
    PUSH ECX                            ; 00559109
    CALL core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0 ; 0055910a
        ;   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0(CCharacter * this_ptr, CDemonActor * deleted_actor)
    ADD ESP,0x8                         ; 0055910f
    RET                                 ; 00559112

