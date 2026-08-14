; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_scat_cpp_CScat_isWeaponDrawn_FUN_004fcd20(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fcd20
        ;   Label: core_scat.cpp_CScat_isWeaponDrawn_FUN_004fcd20
    MOV EAX,dword ptr [EAX + 0x1fa3c]   ; 004fcd24
    RET                                 ; 004fcd2a

