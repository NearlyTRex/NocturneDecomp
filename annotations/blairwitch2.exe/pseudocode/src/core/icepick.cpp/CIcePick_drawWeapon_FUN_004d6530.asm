; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_drawWeapon_FUN_004d6530(CIcePick *this_ptr,int drawn)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d6530
        ;   Label: core_icepick.cpp_CIcePick_drawWeapon_FUN_004d6530
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d6534
    MOV dword ptr [EDX + 0x25640],EAX   ; 004d6538
    RET                                 ; 004d653e

