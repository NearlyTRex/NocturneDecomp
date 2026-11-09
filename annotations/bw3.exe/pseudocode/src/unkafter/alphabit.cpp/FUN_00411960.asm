; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_alphabit_cpp_FUN_00411960(undefined4 *param_1)
;
;
; XREF[2]:
;   unkafter_alphabit.cpp_CAudioRecPuzzle_ctor_FUN_00411b50 at 00411b55
;   unkafter_superopt.cpp_CChemPuzzle_ctor_FUN_00413200 at 00413205
;
; Referenced Globals:
;   undefined4 DAT_007dff88
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x007dff88]      ; 00411960 | DAT_007dff88
        ;   Label: unkafter_alphabit.cpp_FUN_00411960
    MOV EAX,dword ptr [ESP + 0x4]       ; 00411966
    INC ECX                             ; 0041196a
    MOV dword ptr [EAX],0x5dbe54        ; 0041196b
    MOV dword ptr [0x007dff88],ECX      ; 00411971 | DAT_007dff88
    MOV dword ptr [ECX*0x4 + 0x7dff88],EAX ; 00411977
    RET                                 ; 0041197e

