; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_CHaystack_drawWeapon_FUN_004cd9b0(CHaystack *this_ptr,int drawn)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cd9b0
        ;   Label: core_haystack.cpp_CHaystack_drawWeapon_FUN_004cd9b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cd9b4
    MOV dword ptr [EDX + 0x25640],EAX   ; 004cd9b8
    RET                                 ; 004cd9be

