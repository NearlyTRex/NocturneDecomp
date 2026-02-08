; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_weapon_cpp_CWeapon_onPickup_FUN_005ee650(CWeapon *this_ptr,CDemonActor *owner)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   owner
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onPickup_FUN_0040a010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005ee650
        ;   Label: core_weapon.cpp_CWeapon_onPickup_FUN_005ee650
    PUSH EDX                            ; 005ee654
    MOV ECX,dword ptr [ESP + 0x8]       ; 005ee655
    PUSH ECX                            ; 005ee659
    CALL core_actor.cpp_CDemonActor_onPickup_FUN_0040a010 ; 005ee65a
        ;   XREF to: 0040a010 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onPickup_FUN_0040a010(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 005ee65f
    RET                                 ; 005ee662

