; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_icepick.cpp_FUN_004f97a0()
;
;
; Called Functions:
;   core_hero.cpp_CHero_FUN_004f3f20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f97a0
        ;   Label: core_icepick.cpp_FUN_004f97a0
    PUSH EDX                            ; 004f97a4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f97a5
    PUSH ECX                            ; 004f97a9
    CALL core_hero.cpp_CHero_FUN_004f3f20 ; 004f97aa | void core_hero.cpp_CHero_FUN_004f3f20(CHero * this_ptr)
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f97af
    RET                                 ; 004f97b2

