; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_005526b0(void)
;
;
; XREF[8]:
;   core_game.cpp_CGame_rollCredits_FUN_004be430 at 004be523
;   core_menu.cpp_FUN_004ed260 at 004edfbc
;   core_sound.cpp_CSound_shutdown_FUN_0055a360 at 0055a3a4
;   core_sound.cpp_FUN_0055adb0 at 0055adb0
;   sound_sndmain.cpp_FUN_005524b0 at 005524de
;   sound_sndmain.cpp_closeSoundDevice_FUN_00552c40 at 00552c42
;   sound_sndmain.cpp_setSoundMuted_FUN_00550bd0 at 00550bdb
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_00552470 at 00552484
;
; Referenced Globals:
;   undefined4 DAT_02648e80
;   undefined4 DAT_02648e84
;
; Called Functions:
;   sound_sndmain.cpp_FUN_0054cfc0
;   sound_sndmain.cpp_FUN_005510d0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_FUN_005510d0 ; 005526b0
        ;   XREF to: 005510d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005510d0()
        ;   Label: sound_sndmain.cpp_resetSoundDevice_FUN_005526b0
    MOV EDX,dword ptr [0x02648e80]      ; 005526b5 | DAT_02648e80
    TEST EDX,EDX                        ; 005526bb
    JZ 0x005526cf                       ; 005526bd
        ;   XREF to: 005526cf (CONDITIONAL_JUMP)  ; LAB_005526cf
    MOV EAX,EDX                         ; 005526bf
    PUSH EAX                            ; 005526c1
    MOV EDX,dword ptr [EDX]             ; 005526c2
    CALL dword ptr [EDX + 0x8]          ; 005526c4
    ADD ESP,0x4                         ; 005526c7
    TEST EAX,EAX                        ; 005526ca
    JNZ 0x005526cf                      ; 005526cc
        ;   XREF to: 005526cf (CONDITIONAL_JUMP)  ; LAB_005526cf
    RET                                 ; 005526ce
    XOR ECX,ECX                         ; 005526cf
        ;   Label: LAB_005526cf
    MOV dword ptr [0x02648e84],ECX      ; 005526d1 | DAT_02648e84
    CALL sound_sndmain.cpp_FUN_0054cfc0 ; 005526d7
        ;   XREF to: 0054cfc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_0054cfc0()
    MOV EAX,0x1                         ; 005526dc
    RET                                 ; 005526e1

