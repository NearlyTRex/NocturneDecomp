; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_icepick.cpp_FUN_004f97c0()
;
;
; Called Functions:
;   core_hero.cpp_CHero_FUN_004f3fa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f97c0
        ;   Label: core_icepick.cpp_FUN_004f97c0
    PUSH EDX                            ; 004f97c4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f97c5
    PUSH ECX                            ; 004f97c9
    CALL core_hero.cpp_CHero_FUN_004f3fa0 ; 004f97ca
        ;   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f3fa0(CHero * this_ptr)
    ADD ESP,0x8                         ; 004f97cf
    RET                                 ; 004f97d2

