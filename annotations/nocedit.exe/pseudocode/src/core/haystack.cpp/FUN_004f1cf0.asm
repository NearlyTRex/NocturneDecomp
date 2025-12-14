; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_haystack.cpp_FUN_004f1cf0()
;
;
; Called Functions:
;   core_hero.cpp_CHero_FUN_004f3fa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f1cf0
        ;   Label: core_haystack.cpp_FUN_004f1cf0
    PUSH EDX                            ; 004f1cf4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f1cf5
    PUSH ECX                            ; 004f1cf9
    CALL core_hero.cpp_CHero_FUN_004f3fa0 ; 004f1cfa
        ;   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f3fa0(CHero * this_ptr)
    ADD ESP,0x8                         ; 004f1cff
    RET                                 ; 004f1d02

