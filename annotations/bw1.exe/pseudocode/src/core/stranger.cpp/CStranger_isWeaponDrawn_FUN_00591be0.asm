; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_CStranger_isWeaponDrawn_FUN_00591be0(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00591be0
        ;   Label: core_stranger.cpp_CStranger_isWeaponDrawn_FUN_00591be0
    MOV EAX,dword ptr [EAX + 0x1ffac]   ; 00591be4
    RET                                 ; 00591bea

