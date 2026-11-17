; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getMixBufferCount_FUN_00558850(void)
;
;
; Referenced Globals:
;   int g_MixBufferCount
;
; *****************************************************************************

section .text

    MOV EAX,[0x02cf3338]                ; 00558850 | g_MixBufferCount
        ;   Label: sound_sndmain.cpp_getMixBufferCount_FUN_00558850
    RET                                 ; 00558855

