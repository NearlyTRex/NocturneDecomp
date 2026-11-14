; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_keyactor_cpp_CKeyActor_onPickup_FUN_004deab0(CKeyActor *this_ptr,CDemonActor *owner)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   owner
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onPickup_FUN_00409d50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004deab0
        ;   Label: core_keyactor.cpp_CKeyActor_onPickup_FUN_004deab0
    PUSH EDX                            ; 004deab4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004deab5
    PUSH ECX                            ; 004deab9
    CALL core_actor.cpp_CDemonActor_onPickup_FUN_00409d50 ; 004deaba
        ;   XREF to: 00409d50 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onPickup_FUN_00409d50(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 004deabf
    RET                                 ; 004deac2

