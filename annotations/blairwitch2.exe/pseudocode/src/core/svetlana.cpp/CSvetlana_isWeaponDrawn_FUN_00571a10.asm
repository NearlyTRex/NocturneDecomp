; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_svetlana_cpp_CSvetlana_isWeaponDrawn_FUN_00571a10(CSvetlana *this_ptr)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00571a10
        ;   Label: core_svetlana.cpp_CSvetlana_isWeaponDrawn_FUN_00571a10
    MOV EAX,dword ptr [EAX + 0x25640]   ; 00571a14
    RET                                 ; 00571a1a

