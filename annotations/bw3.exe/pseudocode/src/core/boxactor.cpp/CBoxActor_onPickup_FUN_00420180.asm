; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_onPickup_FUN_00420180(CBoxActor *this_ptr,CDemonActor *owner)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   owner
;
; Called Functions:
;   core_actor.cpp_FUN_00409d50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00420180
        ;   Label: core_boxactor.cpp_CBoxActor_onPickup_FUN_00420180
    PUSH EDX                            ; 00420184
    MOV ECX,dword ptr [ESP + 0x8]       ; 00420185
    PUSH ECX                            ; 00420189
    CALL core_actor.cpp_FUN_00409d50    ; 0042018a
        ;   XREF to: 00409d50 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00409d50(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 0042018f
    RET                                 ; 00420192

