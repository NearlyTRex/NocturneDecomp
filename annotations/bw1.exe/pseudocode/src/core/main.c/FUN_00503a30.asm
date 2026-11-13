; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_main_c_FUN_00503a30(void)
;
;
; XREF[1]:
;   wincore_winrun.cpp_winMain_FUN_005b2e00 at 005b3057
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;   CNetGame* g_CNetGamePtr = 01d51c20
;   CMouse* g_CMousePtr = 01d81104
;   CDemonPod* g_CDemonPodPtr = 01e7d420
;   undefined4 DAT_006236b8
;   undefined4 DAT_01d2c900
;
; Called Functions:
;   core_bmppuzzl.cpp_resetAllPuzzles_FUN_00415c20
;   core_dfont.cpp_FUN_0045e7a0
;   core_dmodel.cpp_freeAllModels_FUN_00468830
;   core_inivar.cpp_writeIniData_FUN_004f5760
;   core_marquee.cpp_FUN_00507340
;   core_mission.cpp_CDemonMission_clearMission_FUN_0051a3a0
;   core_netgame.cpp_CNetGame_shutdown_FUN_0052c5d0
;   core_skeleton.cpp_FUN_0056b610
;   core_skeleton.cpp_FUN_0056b740
;   core_sound.cpp_shutdownSoundSystem_FUN_0057cb90
;   engine_2d.c_cleanupGraphicsSystem_FUN_00401120
;   engine_3d.c_freeTextureCache_FUN_004037a0
;   engine_ncursfx.cpp_CMouse_reset_FUN_005313a0
;   engine_pod.cpp_CPod_cleanup_FUN_0053c8f0
;   wincore_winrun.cpp_doNothing2_FUN_005b3b10
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503a30
        ;   Label: core_main.c_FUN_00503a30
    PUSH ESI                            ; 00503a31
    PUSH EDI                            ; 00503a32
    CALL core_bmppuzzl.cpp_resetAllPuzzles_FUN_00415c20 ; 00503a33
        ;   XREF to: 00415c20 (UNCONDITIONAL_CALL)  ; void core_bmppuzzl.cpp_resetAllPuzzles_FUN_00415c20()
    MOV EDX,dword ptr [0x00622580]      ; 00503a38 | g_CNetGamePtr
    PUSH EDX                            ; 00503a3e
    CALL core_netgame.cpp_CNetGame_shutdown_FUN_0052c5d0 ; 00503a3f
        ;   XREF to: 0052c5d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_shutdown_FUN_0052c5d0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 00503a44
    MOV ECX,dword ptr [0x00622700]      ; 00503a47 | g_CMousePtr
    PUSH ECX                            ; 00503a4d
    CALL engine_ncursfx.cpp_CMouse_reset_FUN_005313a0 ; 00503a4e
        ;   XREF to: 005313a0 (UNCONDITIONAL_CALL)  ; void engine_ncursfx.cpp_CMouse_reset_FUN_005313a0(CMouse * this_ptr)
    ADD ESP,0x4                         ; 00503a53
    MOV EBX,dword ptr [0x0061f650]      ; 00503a56 | DAT_0061f650
    PUSH EBX                            ; 00503a5c | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_clearMission_FUN_0051a3a0 ; 00503a5d
        ;   XREF to: 0051a3a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_clearMission_FUN_0051a3a0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00503a62
    MOV ESI,dword ptr [0x006236b8]      ; 00503a65 | DAT_006236b8
    PUSH ESI                            ; 00503a6b
    CALL core_sound.cpp_shutdownSoundSystem_FUN_0057cb90 ; 00503a6c
        ;   XREF to: 0057cb90 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_shutdownSoundSystem_FUN_0057cb90()
    ADD ESP,0x4                         ; 00503a71
    CALL core_dmodel.cpp_freeAllModels_FUN_00468830 ; 00503a74
        ;   XREF to: 00468830 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_freeAllModels_FUN_00468830()
    CALL core_skeleton.cpp_FUN_0056b610 ; 00503a79
        ;   XREF to: 0056b610 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0056b610()
    CALL core_skeleton.cpp_FUN_0056b740 ; 00503a7e
        ;   XREF to: 0056b740 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0056b740()
    CALL core_marquee.cpp_FUN_00507340  ; 00503a83
        ;   XREF to: 00507340 (UNCONDITIONAL_CALL)  ; undefined core_marquee.cpp_FUN_00507340()
    CALL wincore_winrun.cpp_endPeriod_FUN_005b2410 ; 00503a88
        ;   XREF to: 005b2410 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_endPeriod_FUN_005b2410()
    CALL engine_2d.c_cleanupGraphicsSystem_FUN_00401120 ; 00503a8d
        ;   XREF to: 00401120 (UNCONDITIONAL_CALL)  ; void engine_2d.c_cleanupGraphicsSystem_FUN_00401120()
    CALL engine_3d.c_freeTextureCache_FUN_004037a0 ; 00503a92
        ;   XREF to: 004037a0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_freeTextureCache_FUN_004037a0()
    CALL core_dfont.cpp_FUN_0045e7a0    ; 00503a97
        ;   XREF to: 0045e7a0 (UNCONDITIONAL_CALL)  ; void core_dfont.cpp_FUN_0045e7a0()
    CALL wincore_winrun.cpp_doNothing2_FUN_005b3b10 ; 00503a9c
        ;   XREF to: 005b3b10 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_doNothing2_FUN_005b3b10()
    MOV EDI,dword ptr [0x00622a6c]      ; 00503aa1 | g_CDemonPodPtr
    PUSH EDI                            ; 00503aa7
    CALL engine_pod.cpp_CPod_cleanup_FUN_0053c8f0 ; 00503aa8
        ;   XREF to: 0053c8f0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_cleanup_FUN_0053c8f0(CPod * this_ptr)
    ADD ESP,0x4                         ; 00503aad
    CALL core_inivar.cpp_writeIniData_FUN_004f5760 ; 00503ab0
        ;   XREF to: 004f5760 (UNCONDITIONAL_CALL)  ; void core_inivar.cpp_writeIniData_FUN_004f5760()
    POP EDI                             ; 00503ab5
    POP ESI                             ; 00503ab6
    POP EBX                             ; 00503ab7
    RET                                 ; 00503ab8

