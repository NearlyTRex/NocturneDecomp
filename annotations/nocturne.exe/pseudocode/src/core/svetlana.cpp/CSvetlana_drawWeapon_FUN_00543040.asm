; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_svetlana_cpp_CSvetlana_drawWeapon_FUN_00543040(CSvetlana *this_ptr,int drawn)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00543040
        ;   Label: core_svetlana.cpp_CSvetlana_drawWeapon_FUN_00543040
    MOV EAX,dword ptr [ESP + 0x8]       ; 00543044
    MOV dword ptr [EDX + 0x1fa3c],EAX   ; 00543048
    RET                                 ; 0054304e

