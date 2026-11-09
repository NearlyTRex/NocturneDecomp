; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_00581c70(LPCSTR param_1)
;
;
; XREF[7]:
;   sound_sndmain.cpp_FUN_00551d20 at 005520f8
;   sound_sndmain.cpp_FUN_0055a560 at 0055a59f
;   support_trisock.cpp_FUN_00570adc at 00570c70
;   support_trisock.cpp_FUN_00571ea0 at 00571eab
;   support_trstream.cpp_FUN_00574e80 at 00574e93
;   support_trstream.cpp_FUN_00574eb0 at 00574f10
;   unkafter_trisock.cpp_FUN_00571f10 at 00571f1e
;
; Referenced Globals:
;   void* PTR_OutputDebugStringA_005b3608 = 001b40a0
;
; Called Functions:
;   OutputDebugStringA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00581c70
        ;   Label: wincore_winrun.cpp_FUN_00581c70
    PUSH EDX                            ; 00581c74
    CALL dword ptr CS:[0x5b3608]        ; 00581c75 | PTR_OutputDebugStringA_005b3608
    RET                                 ; 00581c7c

