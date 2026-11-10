; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getMixBufferCount_FUN_005756e0(void)
;
;
; XREF[1]:
;   sound_sndmain.cpp_analyzeFrequencyBand_FUN_00576590 at 005765e0
;
; Referenced Globals:
;   undefined4 DAT_02c80708
;
; *****************************************************************************

section .text

    MOV EAX,[0x02c80708]                ; 005756e0 | DAT_02c80708
        ;   Label: sound_sndmain.cpp_getMixBufferCount_FUN_005756e0
    RET                                 ; 005756e5

