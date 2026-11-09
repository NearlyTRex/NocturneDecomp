; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_onPickup_FUN_0057b800(CWeapon *this_ptr,CDemonActor *owner)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   owner
;
; Called Functions:
;   core_actor.cpp_FUN_00409d50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0057b800
        ;   Label: core_weapon.cpp_CWeapon_onPickup_FUN_0057b800
    PUSH EDX                            ; 0057b804
    MOV ECX,dword ptr [ESP + 0x8]       ; 0057b805
    PUSH ECX                            ; 0057b809
    CALL core_actor.cpp_FUN_00409d50    ; 0057b80a
        ;   XREF to: 00409d50 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00409d50(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 0057b80f
    RET                                 ; 0057b812

