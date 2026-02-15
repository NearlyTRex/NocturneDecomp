; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getMixBufferCount_FUN_005ab6d0(void)
;
;
; XREF[1]:
;   sound_sndmain.cpp_analyzeFrequencyBand_FUN_005ac400 at 005ac450
;
; Referenced Globals:
;   int g_MixBufferCount
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f69320]                ; 005ab6d0 | g_MixBufferCount
        ;   Label: sound_sndmain.cpp_getMixBufferCount_FUN_005ab6d0
    RET                                 ; 005ab6d5

