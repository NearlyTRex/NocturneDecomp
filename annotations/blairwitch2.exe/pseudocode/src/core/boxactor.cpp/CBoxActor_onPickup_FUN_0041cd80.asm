; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_onPickup_FUN_0041cd80(CBoxActor *this_ptr,CDemonActor *owner)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   owner
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onPickup_FUN_00409ec0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0041cd80
        ;   Label: core_boxactor.cpp_CBoxActor_onPickup_FUN_0041cd80
    PUSH EDX                            ; 0041cd84
    MOV ECX,dword ptr [ESP + 0x8]       ; 0041cd85
    PUSH ECX                            ; 0041cd89
    CALL core_actor.cpp_CDemonActor_onPickup_FUN_00409ec0 ; 0041cd8a
        ;   XREF to: 00409ec0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onPickup_FUN_00409ec0(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 0041cd8f
    RET                                 ; 0041cd92

