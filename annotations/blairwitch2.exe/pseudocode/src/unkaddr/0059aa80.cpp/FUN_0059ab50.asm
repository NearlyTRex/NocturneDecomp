; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * unkaddr_0059aa80_cpp_FUN_0059ab50(undefined4 *param_1)
;
;
; XREF[2]:
;   unkafter_superopt.cpp_CAudioRecPuzzle_dtor_FUN_0059bec0 at 0059beee
;   unkafter_superopt.cpp_CExamplePuzzle_dtor_FUN_0059bf70 at 0059bf7f
;
; Referenced Globals:
;   undefined1* PTR_unkaddr_0059aa80.cpp_FUN_0059ab50_005fe4f4 = 0059ab50
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059ab50
        ;   Label: unkaddr_0059aa80.cpp_FUN_0059ab50
    MOV dword ptr [EAX],0x5fe4f4        ; 0059ab54 | PTR_unkaddr_0059aa80.cpp_FUN_0059ab50_005fe4f4
    LEA EAX,[EAX]                       ; 0059ab5a

