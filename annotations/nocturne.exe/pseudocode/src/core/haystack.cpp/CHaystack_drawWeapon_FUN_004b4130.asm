; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_CHaystack_drawWeapon_FUN_004b4130(CHaystack *this_ptr,int drawn)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b4130
        ;   Label: core_haystack.cpp_CHaystack_drawWeapon_FUN_004b4130
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b4134
    MOV dword ptr [EDX + 0x1fa3c],EAX   ; 004b4138
    RET                                 ; 004b413e

