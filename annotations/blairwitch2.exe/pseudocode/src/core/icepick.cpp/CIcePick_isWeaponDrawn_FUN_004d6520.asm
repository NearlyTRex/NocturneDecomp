; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_icepick_cpp_CIcePick_isWeaponDrawn_FUN_004d6520(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d6520
        ;   Label: core_icepick.cpp_CIcePick_isWeaponDrawn_FUN_004d6520
    MOV EAX,dword ptr [EAX + 0x25640]   ; 004d6524
    RET                                 ; 004d652a

