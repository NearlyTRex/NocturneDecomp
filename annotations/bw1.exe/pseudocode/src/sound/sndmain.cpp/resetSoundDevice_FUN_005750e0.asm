; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_005750e0(void)
;
;
; XREF[8]:
;   core_game.cpp_CGame_rollCredits_FUN_004d8e50 at 004d8f2a
;   core_menu.cpp_FUN_0050ba70 at 0050c7ab
;   core_sound.cpp_CSound_shutdown_FUN_0057cdb0 at 0057cdf4
;   core_sound.cpp_FUN_0057d800 at 0057d800
;   sound_sndmain.cpp_closeSoundDevice_FUN_00575670 at 00575672
;   sound_sndmain.cpp_enableSoundSystem_FUN_00574ee0 at 00574f0e
;   sound_sndmain.cpp_setSoundMuted_FUN_00573600 at 0057360b
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_00574ea0 at 00574eb4
;
; Referenced Globals:
;   undefined4 DAT_02c80650
;   undefined4 DAT_02c80654
;
; Called Functions:
;   sound_sndmain.cpp_FUN_0056f630
;   sound_sndmain.cpp_FUN_00573b00
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_FUN_00573b00 ; 005750e0
        ;   XREF to: 00573b00 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00573b00()
        ;   Label: sound_sndmain.cpp_resetSoundDevice_FUN_005750e0
    MOV EDX,dword ptr [0x02c80650]      ; 005750e5 | DAT_02c80650
    TEST EDX,EDX                        ; 005750eb
    JZ 0x005750ff                       ; 005750ed
        ;   XREF to: 005750ff (CONDITIONAL_JUMP)  ; LAB_005750ff
    MOV EAX,EDX                         ; 005750ef
    PUSH EAX                            ; 005750f1
    MOV EDX,dword ptr [EDX]             ; 005750f2
    CALL dword ptr [EDX + 0x8]          ; 005750f4
    ADD ESP,0x4                         ; 005750f7
    TEST EAX,EAX                        ; 005750fa
    JNZ 0x005750ff                      ; 005750fc
        ;   XREF to: 005750ff (CONDITIONAL_JUMP)  ; LAB_005750ff
    RET                                 ; 005750fe
    XOR ECX,ECX                         ; 005750ff
        ;   Label: LAB_005750ff
    MOV dword ptr [0x02c80654],ECX      ; 00575101 | DAT_02c80654
    CALL sound_sndmain.cpp_FUN_0056f630 ; 00575107
        ;   XREF to: 0056f630 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_0056f630()
    MOV EAX,0x1                         ; 0057510c
        ;   Label: LAB_0057510c
    RET                                 ; 00575111

