; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_bmppuzzl_cpp_FUN_00411980(undefined4 *param_1)
;
;
; XREF[2]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_dtor_FUN_00411bb0 at 00411be4
;   core_bmppuzzl.cpp_CChemPuzzle_dtor_FUN_00413240 at 00413274
;
; Referenced Globals:
;   undefined1* PTR_core_bmppuzzl.cpp_FUN_00411980_005dbe54 = 00411980
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00411980
        ;   Label: core_bmppuzzl.cpp_FUN_00411980
    MOV dword ptr [EAX],0x5dbe54        ; 00411984 | PTR_core_bmppuzzl.cpp_FUN_00411980_005dbe54
    LEA EAX,[EAX]                       ; 0041198a

