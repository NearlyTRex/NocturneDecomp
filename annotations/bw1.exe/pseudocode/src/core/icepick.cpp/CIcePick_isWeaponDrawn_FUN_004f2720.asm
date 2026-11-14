; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_icepick_cpp_CIcePick_isWeaponDrawn_FUN_004f2720(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f2720
        ;   Label: core_icepick.cpp_CIcePick_isWeaponDrawn_FUN_004f2720
    MOV EAX,dword ptr [EAX + 0x1ffac]   ; 004f2724
    RET                                 ; 004f272a

