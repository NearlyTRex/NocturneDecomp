; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0(int enable)
;
; Parameters:
; int              Stack[0x4]:4   enable
;
; XREF[4]:
;   core_game.cpp_SaveRelated_FUN_004dcee0 at 004dd030
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 005126de
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 0051322d
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005ac131
;
; Referenced Globals:
;   int g_SoundEnabled
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a96c0
        ;   Label: sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0
    MOV [0x03f69274],EAX                ; 005a96c4 | g_SoundEnabled
    TEST EAX,EAX                        ; 005a96c9
    JNZ 0x005ab130                      ; 005a96cb
        ;   XREF to: 005ab130 (CONDITIONAL_JUMP)
    RET                                 ; 005a96d1

