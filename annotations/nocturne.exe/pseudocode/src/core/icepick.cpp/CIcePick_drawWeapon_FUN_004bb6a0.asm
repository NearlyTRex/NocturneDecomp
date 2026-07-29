; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_drawWeapon_FUN_004bb6a0(CIcePick *this_ptr,int drawn)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004bb6a0
        ;   Label: core_icepick.cpp_CIcePick_drawWeapon_FUN_004bb6a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004bb6a4
    MOV dword ptr [EDX + 0x1fa3c],EAX   ; 004bb6a8
    RET                                 ; 004bb6ae

