; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_svetlana_cpp_CSvetlana_drawWeapon_FUN_00594670(CSvetlana *this_ptr,int drawn)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00594670
        ;   Label: core_svetlana.cpp_CSvetlana_drawWeapon_FUN_00594670
    MOV EAX,dword ptr [ESP + 0x8]       ; 00594674
    MOV dword ptr [EDX + 0x1ffac],EAX   ; 00594678
    RET                                 ; 0059467e

