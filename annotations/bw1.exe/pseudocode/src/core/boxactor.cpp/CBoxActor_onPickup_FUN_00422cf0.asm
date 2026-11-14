; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_onPickup_FUN_00422cf0(CBoxActor *this_ptr,CDemonActor *owner)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   owner
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onPickup_FUN_00409d10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00422cf0
        ;   Label: core_boxactor.cpp_CBoxActor_onPickup_FUN_00422cf0
    PUSH EDX                            ; 00422cf4
    MOV ECX,dword ptr [ESP + 0x8]       ; 00422cf5
    PUSH ECX                            ; 00422cf9
    CALL core_actor.cpp_CDemonActor_onPickup_FUN_00409d10 ; 00422cfa
        ;   XREF to: 00409d10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onPickup_FUN_00409d10(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 00422cff
    RET                                 ; 00422d02

