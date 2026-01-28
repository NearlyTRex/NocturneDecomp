; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_baron_cpp_CBaron_FUN_00413ff0(CBaron *this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042f8a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00413ff0
        ;   Label: core_baron.cpp_CBaron_FUN_00413ff0
    PUSH EDX                            ; 00413ff4
    MOV ECX,dword ptr [ESP + 0x8]       ; 00413ff5
    PUSH ECX                            ; 00413ff9
    CALL core_charactr.cpp_CCharacter_FUN_0042f8a0 ; 00413ffa
        ;   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042f8a0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00413fff
    RET                                 ; 00414002

