; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_FUN_0042cd50(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042cd50
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042cd50
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042cd54
    MOV dword ptr [EDX + 0x25b4],EAX    ; 0042cd58
    RET                                 ; 0042cd5e

