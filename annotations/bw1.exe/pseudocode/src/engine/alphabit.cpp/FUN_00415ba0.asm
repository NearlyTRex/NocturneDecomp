; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_alphabit_cpp_FUN_00415ba0(undefined4 *param_1)
;
;
; XREF[2]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_ctor_FUN_00415d90 at 00415d95
;   core_bmppuzzl.cpp_CChemPuzzle_ctor_FUN_004175f0 at 004175f5
;
; Referenced Globals:
;   undefined4 DAT_007c394c
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x007c394c]      ; 00415ba0 | DAT_007c394c
        ;   Label: engine_alphabit.cpp_FUN_00415ba0
    MOV EAX,dword ptr [ESP + 0x4]       ; 00415ba6
    INC ECX                             ; 00415baa
    MOV dword ptr [EAX],0x5fc944        ; 00415bab
    MOV dword ptr [0x007c394c],ECX      ; 00415bb1 | DAT_007c394c
    MOV dword ptr [ECX*0x4 + 0x7c394c],EAX ; 00415bb7
    RET                                 ; 00415bbe

