; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_drawWeapon_FUN_004fcd30(CScat *this_ptr,int drawn)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004fcd30
        ;   Label: core_scat.cpp_CScat_drawWeapon_FUN_004fcd30
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fcd34
    MOV dword ptr [EDX + 0x1fa3c],EAX   ; 004fcd38
    RET                                 ; 004fcd3e

