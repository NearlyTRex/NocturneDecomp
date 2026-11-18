; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getMixBufferCount_FUN_00528620(void)
;
;
; XREF[1]:
;   sound_sndmain.cpp_analyzeFrequencyBand_FUN_00528e60 at 00528eb0
;
; Referenced Globals:
;   int g_MixBufferCount
;
; *****************************************************************************

section .text

    MOV EAX,[0x02dc83d0]                ; 00528620 | g_MixBufferCount
        ;   Label: sound_sndmain.cpp_getMixBufferCount_FUN_00528620
    RET                                 ; 00528625

