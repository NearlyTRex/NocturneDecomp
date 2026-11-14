; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_drawWeapon_FUN_00541dd0(CScat *this_ptr,int drawn)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00541dd0
        ;   Label: core_scat.cpp_CScat_drawWeapon_FUN_00541dd0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00541dd4
    MOV dword ptr [EDX + 0x1ffac],EAX   ; 00541dd8
    RET                                 ; 00541dde

