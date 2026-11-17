; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getCurrentSoundDevice_FUN_00552ca0(void)
;
;
; XREF[2]:
;   core_menu.cpp_configureSoundOptions_FUN_004ed260 at 004ed85b
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005523d0 at 00552444
;
; Referenced Globals:
;   int g_INT_0061bcac = -0x1
;
; *****************************************************************************

section .text

    MOV EAX,[0x0061bcac]                ; 00552ca0 | g_INT_0061bcac
        ;   Label: sound_sndmain.cpp_getCurrentSoundDevice_FUN_00552ca0
    RET                                 ; 00552ca5

