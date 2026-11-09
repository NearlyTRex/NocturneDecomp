; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_main_c_FUN_004e4c70(void)
;
;
; XREF[1]:
;   wincore_winrun.cpp_FUN_00581080 at 005812d7
;
; Referenced Globals:
;   undefined4 DAT_00600530
;   CNetGame* g_CNetGamePtr = 01da62f0
;   CMouse* g_CMousePtr = 01dd67dc
;   CDemonPod* g_CDemonPodPtr = 01ed2af0
;   undefined4 DAT_006045f8
;   CNetGame g_CNetGameInstance
;
; Called Functions:
;   core_dfont.cpp_FUN_0045a8d0
;   core_dmodel.cpp_FUN_004624d0
;   core_inivar.cpp_FUN_004d95c0
;   core_mission.cpp_FUN_004f5b70
;   core_netgame.cpp_FUN_00503ed0
;   core_skeleton.cpp_FUN_005501a0
;   core_skeleton.cpp_FUN_005502d0
;   engine_2d.c_cleanupGraphicsSystem_FUN_00401120
;   engine_3d.c_freeTextureCache_FUN_004037a0
;   engine_ncursfx.cpp_FUN_00508c70
;   engine_pod.cpp_CPod_cleanup_FUN_00514650
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_0055fcc0
;   unkafter_alphabit.cpp_FUN_004119e0
;   unkafter_main.cpp_FUN_004e4d80
;   wincore_winrun.cpp_endPeriod_FUN_00580690
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4c70
        ;   Label: core_main.c_FUN_004e4c70
    PUSH ESI                            ; 004e4c71
    PUSH EDI                            ; 004e4c72
    CALL unkafter_alphabit.cpp_FUN_004119e0 ; 004e4c73
        ;   XREF to: 004119e0 (UNCONDITIONAL_CALL)  ; undefined unkafter_alphabit.cpp_FUN_004119e0()
    MOV EDX,dword ptr [0x00603450]      ; 004e4c78 | g_CNetGamePtr
    PUSH EDX                            ; 004e4c7e | g_CNetGameInstance
    CALL core_netgame.cpp_FUN_00503ed0  ; 004e4c7f
        ;   XREF to: 00503ed0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_FUN_00503ed0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004e4c84
    MOV ECX,dword ptr [0x006035d0]      ; 004e4c87 | g_CMousePtr
    PUSH ECX                            ; 004e4c8d
    CALL engine_ncursfx.cpp_FUN_00508c70 ; 004e4c8e
        ;   XREF to: 00508c70 (UNCONDITIONAL_CALL)  ; void engine_ncursfx.cpp_FUN_00508c70(CMouse * this_ptr)
    ADD ESP,0x4                         ; 004e4c93
    MOV EBX,dword ptr [0x00600530]      ; 004e4c96 | DAT_00600530
    PUSH EBX                            ; 004e4c9c
    CALL core_mission.cpp_FUN_004f5b70  ; 004e4c9d
        ;   XREF to: 004f5b70 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f5b70()
    ADD ESP,0x4                         ; 004e4ca2
    MOV ESI,dword ptr [0x006045f8]      ; 004e4ca5 | DAT_006045f8
    PUSH ESI                            ; 004e4cab
    CALL sound_sndmain.cpp_shutdownSoundSystem_FUN_0055fcc0 ; 004e4cac
        ;   XREF to: 0055fcc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_shutdownSoundSystem_FUN_0055fcc0()
    ADD ESP,0x4                         ; 004e4cb1
    CALL core_dmodel.cpp_FUN_004624d0   ; 004e4cb4
        ;   XREF to: 004624d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_FUN_004624d0()
    CALL core_skeleton.cpp_FUN_005501a0 ; 004e4cb9
        ;   XREF to: 005501a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_005501a0()
    CALL core_skeleton.cpp_FUN_005502d0 ; 004e4cbe
        ;   XREF to: 005502d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_005502d0()
    CALL unkafter_main.cpp_FUN_004e4d80 ; 004e4cc3
        ;   XREF to: 004e4d80 (UNCONDITIONAL_CALL)  ; undefined unkafter_main.cpp_FUN_004e4d80()
    CALL wincore_winrun.cpp_endPeriod_FUN_00580690 ; 004e4cc8
        ;   XREF to: 00580690 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_endPeriod_FUN_00580690()
    CALL engine_2d.c_cleanupGraphicsSystem_FUN_00401120 ; 004e4ccd
        ;   XREF to: 00401120 (UNCONDITIONAL_CALL)  ; void engine_2d.c_cleanupGraphicsSystem_FUN_00401120()
    CALL engine_3d.c_freeTextureCache_FUN_004037a0 ; 004e4cd2
        ;   XREF to: 004037a0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_freeTextureCache_FUN_004037a0()
    CALL core_dfont.cpp_FUN_0045a8d0    ; 004e4cd7
        ;   XREF to: 0045a8d0 (UNCONDITIONAL_CALL)  ; void core_dfont.cpp_FUN_0045a8d0()
    CALL wincore_winrun.cpp_FUN_00581cf0 ; 004e4cdc
        ;   XREF to: 00581cf0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_FUN_00581cf0()
    MOV EDI,dword ptr [0x0060395c]      ; 004e4ce1 | g_CDemonPodPtr
    PUSH EDI                            ; 004e4ce7
    CALL engine_pod.cpp_CPod_cleanup_FUN_00514650 ; 004e4ce8
        ;   XREF to: 00514650 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_cleanup_FUN_00514650(CPod * this_ptr)
    ADD ESP,0x4                         ; 004e4ced
    CALL core_inivar.cpp_FUN_004d95c0   ; 004e4cf0
        ;   XREF to: 004d95c0 (UNCONDITIONAL_CALL)  ; void core_inivar.cpp_FUN_004d95c0()
    POP EDI                             ; 004e4cf5
    POP ESI                             ; 004e4cf6
    POP EBX                             ; 004e4cf7
    RET                                 ; 004e4cf8

