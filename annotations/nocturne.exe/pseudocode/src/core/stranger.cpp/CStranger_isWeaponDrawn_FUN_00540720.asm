; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_CStranger_isWeaponDrawn_FUN_00540720(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00540720
        ;   Label: core_stranger.cpp_CStranger_isWeaponDrawn_FUN_00540720
    MOV EAX,dword ptr [EAX + 0x1fa3c]   ; 00540724
    RET                                 ; 0054072a

