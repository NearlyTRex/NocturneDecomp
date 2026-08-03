; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tommygun_cpp_CTommyGun_setWeaponState_FUN_00546740(CTommyGun *this_ptr,int weapon_state)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   weapon_state
;
; Called Functions:
;   core_weapon.cpp_CWeapon_setWeaponState_FUN_00554560
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546740
        ;   Label: core_tommygun.cpp_CTommyGun_setWeaponState_FUN_00546740
    MOV EAX,dword ptr [ESP + 0x8]       ; 00546741
    MOV EDX,dword ptr [EAX + 0x574]     ; 00546745
    PUSH EDX                            ; 0054674b
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 0054674c
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 00546751
    MOV ECX,dword ptr [ESP + 0xc]       ; 00546754
    PUSH ECX                            ; 00546758
    MOV EBX,dword ptr [ESP + 0xc]       ; 00546759
    PUSH EBX                            ; 0054675d
    CALL core_weapon.cpp_CWeapon_setWeaponState_FUN_00554560 ; 0054675e
        ;   XREF to: 00554560 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setWeaponState_FUN_00554560(CWeapon * this_ptr, int weapon_state)
    ADD ESP,0x8                         ; 00546763
    POP EBX                             ; 00546766
    RET                                 ; 00546767

