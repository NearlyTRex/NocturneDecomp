; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_onPickup_FUN_005add60(CWeapon *this_ptr,CDemonActor *owner)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   owner
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onPickup_FUN_00409d10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005add60
        ;   Label: core_weapon.cpp_CWeapon_onPickup_FUN_005add60
    PUSH EDX                            ; 005add64
    MOV ECX,dword ptr [ESP + 0x8]       ; 005add65
    PUSH ECX                            ; 005add69
    CALL core_actor.cpp_CDemonActor_onPickup_FUN_00409d10 ; 005add6a
        ;   XREF to: 00409d10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onPickup_FUN_00409d10(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 005add6f
    RET                                 ; 005add72

