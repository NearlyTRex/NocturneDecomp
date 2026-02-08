; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_svetlana_cpp_CSvetlana_FUN_005d9ee0(CSvetlana *this_ptr)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005d9ee0
        ;   Label: core_svetlana.cpp_CSvetlana_FUN_005d9ee0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d9ee4
    MOV dword ptr [EDX + 0x1fbd4],EAX   ; 005d9ee8
    RET                                 ; 005d9eee

