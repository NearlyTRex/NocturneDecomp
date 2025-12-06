; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_scat.cpp_FUN_00559140()
;
;
; Called Functions:
;   core_hero.cpp_CHero_FUN_004f3fa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00559140
        ;   Label: core_scat.cpp_FUN_00559140
    PUSH EDX                            ; 00559144
    MOV ECX,dword ptr [ESP + 0x8]       ; 00559145
    PUSH ECX                            ; 00559149
    CALL core_hero.cpp_CHero_FUN_004f3fa0 ; 0055914a | void core_hero.cpp_CHero_FUN_004f3fa0(CHero * this_ptr)
        ;   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0055914f
    RET                                 ; 00559152

