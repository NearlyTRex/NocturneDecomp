; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * unkafter_alphabit_cpp_FUN_00415bc0(undefined4 *param_1)
;
;
; XREF[2]:
;   unkafter_alphabit.cpp_CAudioRecPuzzle_dtor_FUN_00415df0 at 00415e24
;   unkafter_superopt.cpp_CChemPuzzle_dtor_FUN_00417630 at 00417664
;
; Referenced Globals:
;   undefined1* PTR_unkafter_alphabit.cpp_FUN_00415bc0_005fc944 = 00415bc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00415bc0
        ;   Label: unkafter_alphabit.cpp_FUN_00415bc0
    MOV dword ptr [EAX],0x5fc944        ; 00415bc4 | PTR_unkafter_alphabit.cpp_FUN_00415bc0_005fc944
    LEA EAX,[EAX]                       ; 00415bca

