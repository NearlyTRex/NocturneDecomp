; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_CHaystack_drawGun_FUN_004f1ca0(CHaystack *this_ptr,int drawn)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f1ca0
        ;   Label: core_haystack.cpp_CHaystack_drawGun_FUN_004f1ca0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f1ca4
    MOV dword ptr [EDX + 0x1fbd4],EAX   ; 004f1ca8
    RET                                 ; 004f1cae

