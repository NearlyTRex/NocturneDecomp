; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_main_c_FUN_004e4e20(void)
;
;
; XREF[1]:
;   wincore_winrun.cpp_winMain_FUN_0058f310 at 0058f597
;
; Referenced Globals:
;   undefined4 DAT_00618170
;   CNetGame* g_CNetGamePtr = 01d34cb0
;   CMouse* g_CMousePtr = 01d6519c
;   CDemonPod* g_CDemonPodPtr = 01e614b0
;   undefined4 DAT_0061c068
;   CNetGame g_CNetGameInstance
;
; Called Functions:
;   core_dfont.cpp_FUN_00448640
;   core_dmodel.cpp_freeAllModels_FUN_0044fc50
;   core_inivar.cpp_writeIniData_FUN_004d94d0
;   core_mission.cpp_CDemonMission_clearMission_FUN_004fb440
;   core_netgame.cpp_CNetGame_shutdown_FUN_0050b3f0
;   core_skeleton.cpp_FUN_00548f80
;   core_skeleton.cpp_FUN_00549090
;   engine_2d.c_cleanupGraphicsSystem_FUN_00401120
;   engine_3d.c_freeTextureCache_FUN_004037f0
;   engine_ncursfx.cpp_CMouse_reset_FUN_00510190
;   engine_pod.cpp_CPod_cleanup_FUN_0051b370
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_0055a160
;   unkaddr_0059aa80.cpp_FUN_0059abb0
;   unkafter_marquee.cpp_FUN_004e86a0
;   wincore_winrun.cpp_doNothing2_FUN_00590040
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4e20
        ;   Label: core_main.c_FUN_004e4e20
    PUSH ESI                            ; 004e4e21
    PUSH EDI                            ; 004e4e22
    CALL unkaddr_0059aa80.cpp_FUN_0059abb0 ; 004e4e23
        ;   XREF to: 0059abb0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059aa80.cpp_FUN_0059abb0()
    MOV EDX,dword ptr [0x0061b120]      ; 004e4e28 | g_CNetGamePtr
    PUSH EDX                            ; 004e4e2e | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_shutdown_FUN_0050b3f0 ; 004e4e2f
        ;   XREF to: 0050b3f0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_shutdown_FUN_0050b3f0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004e4e34
    MOV ECX,dword ptr [0x0061b2a0]      ; 004e4e37 | g_CMousePtr
    PUSH ECX                            ; 004e4e3d
    CALL engine_ncursfx.cpp_CMouse_reset_FUN_00510190 ; 004e4e3e
        ;   XREF to: 00510190 (UNCONDITIONAL_CALL)  ; void engine_ncursfx.cpp_CMouse_reset_FUN_00510190(CMouse * this_ptr)
    ADD ESP,0x4                         ; 004e4e43
    MOV EBX,dword ptr [0x00618170]      ; 004e4e46 | DAT_00618170
    PUSH EBX                            ; 004e4e4c
    CALL core_mission.cpp_CDemonMission_clearMission_FUN_004fb440 ; 004e4e4d
        ;   XREF to: 004fb440 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_clearMission_FUN_004fb440(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004e4e52
    MOV ESI,dword ptr [0x0061c068]      ; 004e4e55 | DAT_0061c068
    PUSH ESI                            ; 004e4e5b
    CALL sound_sndmain.cpp_shutdownSoundSystem_FUN_0055a160 ; 004e4e5c
        ;   XREF to: 0055a160 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_shutdownSoundSystem_FUN_0055a160()
    ADD ESP,0x4                         ; 004e4e61
    CALL core_dmodel.cpp_freeAllModels_FUN_0044fc50 ; 004e4e64
        ;   XREF to: 0044fc50 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_freeAllModels_FUN_0044fc50()
    CALL core_skeleton.cpp_FUN_00548f80 ; 004e4e69
        ;   XREF to: 00548f80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00548f80()
    CALL core_skeleton.cpp_FUN_00549090 ; 004e4e6e
        ;   XREF to: 00549090 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00549090()
    CALL unkafter_marquee.cpp_FUN_004e86a0 ; 004e4e73
        ;   XREF to: 004e86a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_marquee.cpp_FUN_004e86a0()
    CALL wincore_winrun.cpp_endPeriod_FUN_0058e9d0 ; 004e4e78
        ;   XREF to: 0058e9d0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_endPeriod_FUN_0058e9d0()
    CALL engine_2d.c_cleanupGraphicsSystem_FUN_00401120 ; 004e4e7d
        ;   XREF to: 00401120 (UNCONDITIONAL_CALL)  ; void engine_2d.c_cleanupGraphicsSystem_FUN_00401120()
    CALL engine_3d.c_freeTextureCache_FUN_004037f0 ; 004e4e82
        ;   XREF to: 004037f0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_freeTextureCache_FUN_004037f0()
    CALL core_dfont.cpp_FUN_00448640    ; 004e4e87
        ;   XREF to: 00448640 (UNCONDITIONAL_CALL)  ; void core_dfont.cpp_FUN_00448640()
    CALL wincore_winrun.cpp_doNothing2_FUN_00590040 ; 004e4e8c
        ;   XREF to: 00590040 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_doNothing2_FUN_00590040()
    MOV EDI,dword ptr [0x0061b40c]      ; 004e4e91 | g_CDemonPodPtr
    PUSH EDI                            ; 004e4e97
    CALL engine_pod.cpp_CPod_cleanup_FUN_0051b370 ; 004e4e98
        ;   XREF to: 0051b370 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_cleanup_FUN_0051b370(CPod * this_ptr)
    ADD ESP,0x4                         ; 004e4e9d
    CALL core_inivar.cpp_writeIniData_FUN_004d94d0 ; 004e4ea0
        ;   XREF to: 004d94d0 (UNCONDITIONAL_CALL)  ; void core_inivar.cpp_writeIniData_FUN_004d94d0()
    POP EDI                             ; 004e4ea5
    POP ESI                             ; 004e4ea6
    POP EBX                             ; 004e4ea7
    RET                                 ; 004e4ea8

