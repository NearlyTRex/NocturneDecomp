; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_svetlana_cpp_CSvetlana_drawWeapon_FUN_00571a20(CSvetlana *this_ptr,int drawn)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00571a20
        ;   Label: core_svetlana.cpp_CSvetlana_drawWeapon_FUN_00571a20
    MOV EAX,dword ptr [ESP + 0x8]       ; 00571a24
    MOV dword ptr [EDX + 0x25640],EAX   ; 00571a28
    RET                                 ; 00571a2e

