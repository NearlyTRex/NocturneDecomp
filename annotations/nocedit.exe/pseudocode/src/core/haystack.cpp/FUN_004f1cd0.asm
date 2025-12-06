; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_haystack.cpp_FUN_004f1cd0()
;
;
; Called Functions:
;   core_hero.cpp_CHero_FUN_004f3f20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f1cd0
        ;   Label: core_haystack.cpp_FUN_004f1cd0
    PUSH EDX                            ; 004f1cd4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f1cd5
    PUSH ECX                            ; 004f1cd9
    CALL core_hero.cpp_CHero_FUN_004f3f20 ; 004f1cda | void core_hero.cpp_CHero_FUN_004f3f20(CHero * this_ptr)
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f1cdf
    RET                                 ; 004f1ce2

