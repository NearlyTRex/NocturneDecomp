; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammo_cpp_CAmmo_setWeaponAmmo_FUN_0040ef60(CAmmo *this_ptr,int ammo_count)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ammo_count
;
; XREF[1]:
;   core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040f1a0 at 0040f240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040ef60
        ;   Label: core_ammo.cpp_CAmmo_setWeaponAmmo_FUN_0040ef60
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040ef64
    MOV dword ptr [EDX + 0x30c],EAX     ; 0040ef68
    RET                                 ; 0040ef6e

