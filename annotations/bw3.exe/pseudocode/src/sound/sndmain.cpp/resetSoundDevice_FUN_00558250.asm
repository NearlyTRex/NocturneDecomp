; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_00558250(void)
;
;
; XREF[7]:
;   core_menu.cpp_FUN_004e94f0 at 004ea141
;   core_sound.cpp_CSound_reset_FUN_00560930 at 00560930
;   core_sound.cpp_CSound_shutdown_FUN_0055fee0 at 0055ff24
;   sound_sndmain.cpp_closeSoundDevice_FUN_005587e0 at 005587e2
;   sound_sndmain.cpp_enableSoundSystem_FUN_00558050 at 0055807e
;   sound_sndmain.cpp_setSoundMuted_FUN_00556760 at 0055676b
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_00558010 at 00558024
;
; Referenced Globals:
;   undefined4 DAT_02cf3280
;   undefined4 DAT_02cf3284
;
; Called Functions:
;   sound_sndmain.cpp_freeMixBuffers_FUN_00552b30
;   sound_sndmain.cpp_killAllSfx_FUN_00556c60
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_killAllSfx_FUN_00556c60 ; 00558250
        ;   XREF to: 00556c60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_killAllSfx_FUN_00556c60()
        ;   Label: sound_sndmain.cpp_resetSoundDevice_FUN_00558250
    MOV EDX,dword ptr [0x02cf3280]      ; 00558255 | DAT_02cf3280
    TEST EDX,EDX                        ; 0055825b
    JZ 0x0055826f                       ; 0055825d
        ;   XREF to: 0055826f (CONDITIONAL_JUMP)  ; LAB_0055826f
    MOV EAX,EDX                         ; 0055825f
    PUSH EAX                            ; 00558261
    MOV EDX,dword ptr [EDX]             ; 00558262
    CALL dword ptr [EDX + 0x8]          ; 00558264
    ADD ESP,0x4                         ; 00558267
    TEST EAX,EAX                        ; 0055826a
    JNZ 0x0055826f                      ; 0055826c
        ;   XREF to: 0055826f (CONDITIONAL_JUMP)  ; LAB_0055826f
    RET                                 ; 0055826e
    XOR ECX,ECX                         ; 0055826f
        ;   Label: LAB_0055826f
    MOV dword ptr [0x02cf3284],ECX      ; 00558271 | DAT_02cf3284
    CALL sound_sndmain.cpp_freeMixBuffers_FUN_00552b30 ; 00558277
        ;   XREF to: 00552b30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_freeMixBuffers_FUN_00552b30()
    MOV EAX,0x1                         ; 0055827c
        ;   Label: LAB_0055827c
    RET                                 ; 00558281

