; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_onActorDeleted_FUN_004f9780(CIcePick *this_ptr,CDemonActor *deleted_actor)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   deleted_actor
;
; Called Functions:
;   core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f9780
        ;   Label: core_icepick.cpp_CIcePick_onActorDeleted_FUN_004f9780
    PUSH EDX                            ; 004f9784
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f9785
    PUSH ECX                            ; 004f9789
    CALL core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0 ; 004f978a
        ;   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0(CCharacter * this_ptr, CDemonActor * deleted_actor)
    ADD ESP,0x8                         ; 004f978f
    RET                                 ; 004f9792

