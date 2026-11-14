; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_CHaystack_drawWeapon_FUN_004ea270(CHaystack *this_ptr,int drawn)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ea270
        ;   Label: core_haystack.cpp_CHaystack_drawWeapon_FUN_004ea270
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ea274
    MOV dword ptr [EDX + 0x1ffac],EAX   ; 004ea278
    RET                                 ; 004ea27e

