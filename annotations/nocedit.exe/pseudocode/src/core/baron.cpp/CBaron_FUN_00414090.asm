; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_baron_cpp_CBaron_FUN_00414090(CBaron *this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00414090
        ;   Label: core_baron.cpp_CBaron_FUN_00414090
    MOV EAX,dword ptr [ESP + 0x8]       ; 00414094
    MOV dword ptr [EDX + 0xb7e0],EAX    ; 00414098
    RET                                 ; 0041409e

