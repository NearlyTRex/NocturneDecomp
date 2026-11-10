; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_colonel_cpp_CColonel_drawWeapon_FUN_004365d0(CColonel *this_ptr,int drawn)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004365d0
        ;   Label: core_colonel.cpp_CColonel_drawWeapon_FUN_004365d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004365d4
    MOV dword ptr [EDX + 0x25640],EAX   ; 004365d8
    RET                                 ; 004365de

