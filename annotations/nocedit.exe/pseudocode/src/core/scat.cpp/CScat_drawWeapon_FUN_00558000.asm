; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_drawWeapon_FUN_00558000(CScat *this_ptr,int drawn)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00558000
        ;   Label: core_scat.cpp_CScat_drawWeapon_FUN_00558000
    MOV EAX,dword ptr [ESP + 0x8]       ; 00558004
    MOV dword ptr [EDX + 0x1fbd4],EAX   ; 00558008
    RET                                 ; 0055800e

