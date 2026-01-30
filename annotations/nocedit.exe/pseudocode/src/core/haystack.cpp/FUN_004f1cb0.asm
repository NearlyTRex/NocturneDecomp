; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_haystack_cpp_FUN_004f1cb0(void)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042f8a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f1cb0
        ;   Label: core_haystack.cpp_FUN_004f1cb0
    PUSH EDX                            ; 004f1cb4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f1cb5
    PUSH ECX                            ; 004f1cb9
    CALL core_charactr.cpp_CCharacter_FUN_0042f8a0 ; 004f1cba
        ;   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042f8a0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004f1cbf
    RET                                 ; 004f1cc2

