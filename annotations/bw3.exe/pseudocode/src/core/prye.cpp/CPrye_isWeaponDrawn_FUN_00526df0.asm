; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_prye_cpp_CPrye_isWeaponDrawn_FUN_00526df0(CPrye *this_ptr)
;
; Parameters:
; CPrye *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00526df0
        ;   Label: core_prye.cpp_CPrye_isWeaponDrawn_FUN_00526df0
    MOV EAX,dword ptr [EAX + 0x20bcc]   ; 00526df4
    RET                                 ; 00526dfa

