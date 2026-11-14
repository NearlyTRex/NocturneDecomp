; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_drawWeapon_FUN_004f2730(CIcePick *this_ptr,int drawn)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f2730
        ;   Label: core_icepick.cpp_CIcePick_drawWeapon_FUN_004f2730
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f2734
    MOV dword ptr [EDX + 0x1ffac],EAX   ; 004f2738
    RET                                 ; 004f273e

