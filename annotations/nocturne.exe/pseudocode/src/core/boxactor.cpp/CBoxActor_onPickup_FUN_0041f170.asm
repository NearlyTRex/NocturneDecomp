; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_onPickup_FUN_0041f170(CBoxActor *this_ptr,CDemonActor *owner)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   owner
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onPickup_FUN_0040b1a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0041f170
        ;   Label: core_boxactor.cpp_CBoxActor_onPickup_FUN_0041f170
    PUSH EDX                            ; 0041f174
    MOV ECX,dword ptr [ESP + 0x8]       ; 0041f175
    PUSH ECX                            ; 0041f179
    CALL core_actor.cpp_CDemonActor_onPickup_FUN_0040b1a0 ; 0041f17a
        ;   XREF to: 0040b1a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onPickup_FUN_0040b1a0(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 0041f17f
    RET                                 ; 0041f182

