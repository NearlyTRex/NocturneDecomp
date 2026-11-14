; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_colonel_cpp_CColonel_drawWeapon_FUN_004452f0(CColonel *this_ptr,int drawn)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004452f0
        ;   Label: core_colonel.cpp_CColonel_drawWeapon_FUN_004452f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004452f4
    MOV dword ptr [EDX + 0x1ffac],EAX   ; 004452f8
    RET                                 ; 004452fe

