; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammo_cpp_CAmmo_setAmmoCount_FUN_004111b0(CAmmo *this_ptr,int ammo_count)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ammo_count
;
; XREF[1]:
;   core_ammobox.cpp_CAmmoBox_FUN_00411700 at 004117aa
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004111b0
        ;   Label: core_ammo.cpp_CAmmo_setAmmoCount_FUN_004111b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004111b4
    MOV dword ptr [EDX + 0x314],EAX     ; 004111b8
    RET                                 ; 004111be

