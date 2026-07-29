; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_icepick_cpp_CIcePick_isWeaponDrawn_FUN_004bb690(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bb690
        ;   Label: core_icepick.cpp_CIcePick_isWeaponDrawn_FUN_004bb690
    MOV EAX,dword ptr [EAX + 0x1fa3c]   ; 004bb694
    RET                                 ; 004bb69a

