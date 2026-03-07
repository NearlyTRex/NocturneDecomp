; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_setStaggerAmount_FUN_00414090(CCharacter *this_ptr,float amount)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   amount
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00414090
        ;   Label: core_baron.cpp_setStaggerAmount_FUN_00414090
    MOV EAX,dword ptr [ESP + 0x8]       ; 00414094
    MOV dword ptr [EDX + 0xb7e0],EAX    ; 00414098
    RET                                 ; 0041409e

