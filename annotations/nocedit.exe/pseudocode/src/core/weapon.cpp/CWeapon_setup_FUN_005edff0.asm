; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_setup_FUN_005edff0(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_baron.cpp_CBaronWeapon_setup_FUN_00413da0 at 00413da5
;   core_turret.cpp_CTurret_setup_FUN_005e2240 at 005e225b
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005edff0
        ;   Label: core_weapon.cpp_CWeapon_setup_FUN_005edff0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005edff1
    PUSH EBX                            ; 005edff5
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005edff6
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

