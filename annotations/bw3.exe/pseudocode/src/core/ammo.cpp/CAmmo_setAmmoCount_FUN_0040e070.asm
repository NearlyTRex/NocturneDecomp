; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammo_cpp_CAmmo_setAmmoCount_FUN_0040e070(CAmmo *this_ptr,int ammo_count)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ammo_count
;
; XREF[1]:
;   core_ammobox.cpp_FUN_0040e720 at 0040e7b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040e070
        ;   Label: core_ammo.cpp_CAmmo_setAmmoCount_FUN_0040e070
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040e074
    MOV dword ptr [EDX + 0x314],EAX     ; 0040e078
    RET                                 ; 0040e07e

