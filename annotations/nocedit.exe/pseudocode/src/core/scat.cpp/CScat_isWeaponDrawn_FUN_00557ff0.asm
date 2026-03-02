; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_scat_cpp_CScat_isWeaponDrawn_FUN_00557ff0(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00557ff0
        ;   Label: core_scat.cpp_CScat_isWeaponDrawn_FUN_00557ff0
    MOV EAX,dword ptr [EAX + 0x1fbd4]   ; 00557ff4
    RET                                 ; 00557ffa

