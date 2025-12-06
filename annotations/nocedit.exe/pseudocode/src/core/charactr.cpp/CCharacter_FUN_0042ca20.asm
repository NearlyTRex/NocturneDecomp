; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_charactr.cpp_CCharacter_FUN_0042ca20(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042ca20
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042ca20
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042ca24
    MOV dword ptr [EDX + 0x25ac],EAX    ; 0042ca28
    RET                                 ; 0042ca2e

