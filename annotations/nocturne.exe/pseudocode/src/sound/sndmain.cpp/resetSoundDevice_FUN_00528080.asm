; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_00528080(void)
;
;
; XREF[8]:
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90 at 004a6f6a
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1ff6
;   core_sound.cpp_CSound_reset_FUN_0052e9c0 at 0052e9c0
;   core_sound.cpp_CSound_shutdown_FUN_0052df90 at 0052dfd4
;   sound_sndmain.cpp_FUN_00527e10 at 00527e24
;   sound_sndmain.cpp_closeSoundDevice_FUN_005285b0 at 005285b2
;   sound_sndmain.cpp_enableSoundSystem_FUN_00527e40 at 00527e6e
;   sound_sndmain.cpp_setSoundEnabled_FUN_00526cb0 at 00526cbb
;
; Referenced Globals:
;   undefined4 DAT_02dc8318
;   undefined4 DAT_02dc831c
;
; Called Functions:
;   sound_sndmain.cpp_freeMixBuffers_FUN_005230d0
;   sound_sndmain.cpp_killAllSfx_FUN_005272b0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_killAllSfx_FUN_005272b0 ; 00528080
        ;   XREF to: 005272b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killAllSfx_FUN_005272b0()
        ;   Label: sound_sndmain.cpp_resetSoundDevice_FUN_00528080
    MOV EDX,dword ptr [0x02dc8318]      ; 00528085 | DAT_02dc8318
    TEST EDX,EDX                        ; 0052808b
    JZ 0x0052809f                       ; 0052808d
        ;   XREF to: 0052809f (CONDITIONAL_JUMP)  ; LAB_0052809f
    MOV EAX,EDX                         ; 0052808f
    PUSH EAX                            ; 00528091
    MOV EDX,dword ptr [EDX]             ; 00528092
    CALL dword ptr [EDX + 0x8]          ; 00528094
    ADD ESP,0x4                         ; 00528097
    TEST EAX,EAX                        ; 0052809a
    JNZ 0x0052809f                      ; 0052809c
        ;   XREF to: 0052809f (CONDITIONAL_JUMP)  ; LAB_0052809f
    RET                                 ; 0052809e
    XOR ECX,ECX                         ; 0052809f
        ;   Label: LAB_0052809f
    MOV dword ptr [0x02dc831c],ECX      ; 005280a1 | DAT_02dc831c
    CALL sound_sndmain.cpp_freeMixBuffers_FUN_005230d0 ; 005280a7
        ;   XREF to: 005230d0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_freeMixBuffers_FUN_005230d0()
    MOV EAX,0x1                         ; 005280ac
    RET                                 ; 005280b1

