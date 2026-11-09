; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_0054b940(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02641920
;   CSfxSample[64] g_SfxSamples
;
; *****************************************************************************

section .text

    SBB AH,byte ptr [EDX + EAX*0x1 + 0x75] ; 0054b940
        ;   Label: sound_sndmain.cpp_FUN_0054b940
    ROL dword ptr [0x02641924],0x1      ; 0054b944 | g_SfxSamples
    MOV dword ptr [0x02641920],EDX      ; 0054b94a | DAT_02641920
    POP EBP                             ; 0054b950
    POP EDI                             ; 0054b951
    POP ESI                             ; 0054b952
    POP EBX                             ; 0054b953
    RET                                 ; 0054b954

