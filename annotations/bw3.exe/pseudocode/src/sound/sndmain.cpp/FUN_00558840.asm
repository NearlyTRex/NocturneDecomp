; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_FUN_00558840(void)
;
;
; XREF[2]:
;   core_menu.cpp_FUN_004e94f0 at 004e9595
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00557f60 at 00557ff0
;
; Referenced Globals:
;   undefined4 DAT_0060423c
;
; *****************************************************************************

section .text

    MOV EAX,[0x0060423c]                ; 00558840 | DAT_0060423c
        ;   Label: sound_sndmain.cpp_FUN_00558840
    RET                                 ; 00558845

