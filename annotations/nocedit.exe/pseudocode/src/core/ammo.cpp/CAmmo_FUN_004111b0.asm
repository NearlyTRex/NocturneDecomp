; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_ammo_cpp_CAmmo_FUN_004111b0(void)
;
;
; XREF[1]:
;   core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700 at 004117aa
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004111b0
        ;   Label: core_ammo.cpp_CAmmo_FUN_004111b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004111b4
    MOV dword ptr [EDX + 0x314],EAX     ; 004111b8
    RET                                 ; 004111be

