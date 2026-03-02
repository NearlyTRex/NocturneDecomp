; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_icepick_cpp_CIcePick_isWeaponDrawn_FUN_004f9760(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f9760
        ;   Label: core_icepick.cpp_CIcePick_isWeaponDrawn_FUN_004f9760
    MOV EAX,dword ptr [EAX + 0x1fbd4]   ; 004f9764
    RET                                 ; 004f976a

