; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_drawWeapon_FUN_0051fca0(CScat *this_ptr,int drawn)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051fca0
        ;   Label: core_scat.cpp_CScat_drawWeapon_FUN_0051fca0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051fca4
    MOV dword ptr [EDX + 0x25640],EAX   ; 0051fca8
    RET                                 ; 0051fcae

