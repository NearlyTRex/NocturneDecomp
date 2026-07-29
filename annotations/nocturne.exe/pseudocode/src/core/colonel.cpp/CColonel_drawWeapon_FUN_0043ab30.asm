; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_colonel_cpp_CColonel_drawWeapon_FUN_0043ab30(CColonel *this_ptr,int drawn)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043ab30
        ;   Label: core_colonel.cpp_CColonel_drawWeapon_FUN_0043ab30
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043ab34
    MOV dword ptr [EDX + 0x1fa3c],EAX   ; 0043ab38
    RET                                 ; 0043ab3e

