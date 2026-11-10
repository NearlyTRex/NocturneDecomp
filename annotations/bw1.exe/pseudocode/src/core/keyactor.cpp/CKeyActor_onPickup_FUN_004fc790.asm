; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_keyactor_cpp_CKeyActor_onPickup_FUN_004fc790(CKeyActor *this_ptr,CDemonActor *owner)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   owner
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onPickup_FUN_00409d10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004fc790
        ;   Label: core_keyactor.cpp_CKeyActor_onPickup_FUN_004fc790
    PUSH EDX                            ; 004fc794
    MOV ECX,dword ptr [ESP + 0x8]       ; 004fc795
    PUSH ECX                            ; 004fc799
    CALL core_actor.cpp_CDemonActor_onPickup_FUN_00409d10 ; 004fc79a
        ;   XREF to: 00409d10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onPickup_FUN_00409d10(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 004fc79f
    RET                                 ; 004fc7a2

