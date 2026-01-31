; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_moloch_cpp_FUN_005299b0(void)
;
;
; Called Functions:
;   core_hero.cpp_CHero_writeDependencies_FUN_004f3fa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005299b0
        ;   Label: core_moloch.cpp_FUN_005299b0
    PUSH EDX                            ; 005299b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005299b5
    PUSH ECX                            ; 005299b9
    CALL core_hero.cpp_CHero_writeDependencies_FUN_004f3fa0 ; 005299ba
        ;   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_writeDependencies_FUN_004f3fa0(CHero * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005299bf
    RET                                 ; 005299c2

