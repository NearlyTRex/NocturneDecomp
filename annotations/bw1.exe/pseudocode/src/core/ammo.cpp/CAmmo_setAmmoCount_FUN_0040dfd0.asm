; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammo_cpp_CAmmo_setAmmoCount_FUN_0040dfd0(CAmmo *this_ptr,int ammo_count)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ammo_count
;
; XREF[1]:
;   core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040e210 at 0040e2b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040dfd0
        ;   Label: core_ammo.cpp_CAmmo_setAmmoCount_FUN_0040dfd0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040dfd4
    MOV dword ptr [EDX + 0x314],EAX     ; 0040dfd8
    RET                                 ; 0040dfde

