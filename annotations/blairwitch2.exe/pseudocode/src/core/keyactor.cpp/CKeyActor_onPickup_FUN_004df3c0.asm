; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_keyactor_cpp_CKeyActor_onPickup_FUN_004df3c0(CKeyActor *this_ptr,CDemonActor *owner)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   owner
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onPickup_FUN_00409ec0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004df3c0
        ;   Label: core_keyactor.cpp_CKeyActor_onPickup_FUN_004df3c0
    PUSH EDX                            ; 004df3c4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004df3c5
    PUSH ECX                            ; 004df3c9
    CALL core_actor.cpp_CDemonActor_onPickup_FUN_00409ec0 ; 004df3ca
        ;   XREF to: 00409ec0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onPickup_FUN_00409ec0(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 004df3cf
    RET                                 ; 004df3d2

