; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_onPickup_FUN_0058a210(CWeapon *this_ptr,CDemonActor *owner)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   owner
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onPickup_FUN_00409ec0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0058a210
        ;   Label: core_weapon.cpp_CWeapon_onPickup_FUN_0058a210
    PUSH EDX                            ; 0058a214
    MOV ECX,dword ptr [ESP + 0x8]       ; 0058a215
    PUSH ECX                            ; 0058a219
    CALL core_actor.cpp_CDemonActor_onPickup_FUN_00409ec0 ; 0058a21a
        ;   XREF to: 00409ec0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onPickup_FUN_00409ec0(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 0058a21f
    RET                                 ; 0058a222

