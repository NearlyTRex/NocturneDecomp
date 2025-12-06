; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_vehicle.cpp_FUN_005e8b50()
;
;
; XREF[1]:
;   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 at 005e830d
;
; Referenced Globals:
;   CSound* g_CSoundPtr = 03f6af64
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
;   sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e8b50
        ;   Label: core_vehicle.cpp_FUN_005e8b50
    PUSH ESI                            ; 005e8b51
    MOV ESI,dword ptr [ESP + 0xc]       ; 005e8b52
    LEA EBX,[ESI + 0x20]                ; 005e8b56
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005e8b59 | void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 005e8b5e
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940 ; 005e8b5f | void sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(CVector3f * position_source_ptr)
        ;   XREF to: 005a8940 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e8b64
    LEA EAX,[ESI + 0x1060]              ; 005e8b67
    PUSH EAX                            ; 005e8b6d
    CALL sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a00 ; 005e8b6e | void sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a00(CVector3f * velocity_source_ptr)
        ;   XREF to: 005a8a00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e8b73
    PUSH EBX                            ; 005e8b76
    MOV EDX,dword ptr [ESP + 0x14]      ; 005e8b77
    PUSH EDX                            ; 005e8b7b
    PUSH ESI                            ; 005e8b7c
    MOV ECX,dword ptr [0x00681ef8]      ; 005e8b7d | CSound g_CSoundInstance | CSound * g_CSoundPtr
    PUSH ECX                            ; 005e8b83 | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70 ; 005e8b84 | uint core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
        ;   XREF to: 005b3a70 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005e8b89
    MOV EBX,EAX                         ; 005e8b8c
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005e8b8e | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    MOV EAX,EBX                         ; 005e8b93
    POP ESI                             ; 005e8b95
    POP EBX                             ; 005e8b96
    RET                                 ; 005e8b97

