; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_vehicle_cpp_CVehicle_playTrackedSound_FUN_0054f7a0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_vehicle.cpp_CVehicle_process_FUN_0054eae0 at 0054eefe
;
; Referenced Globals:
;   undefined4 DAT_005bed68
;
; Called Functions:
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90
;   sound_sndmain.cpp_popSfxOptions_FUN_005263c0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00526340
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0
;   sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00526090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f7a0
        ;   Label: core_vehicle.cpp_CVehicle_playTrackedSound_FUN_0054f7a0
    PUSH ESI                            ; 0054f7a1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0054f7a2
    LEA EBX,[ESI + 0x20]                ; 0054f7a6
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 0054f7a9
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
    PUSH EBX                            ; 0054f7ae
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0 ; 0054f7af
        ;   XREF to: 00525fc0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0()
    ADD ESP,0x4                         ; 0054f7b4
    LEA EAX,[ESI + 0x1058]              ; 0054f7b7
    PUSH EAX                            ; 0054f7bd
    CALL sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00526090 ; 0054f7be
        ;   XREF to: 00526090 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00526090()
    ADD ESP,0x4                         ; 0054f7c3
    PUSH EBX                            ; 0054f7c6
    MOV EDX,dword ptr [ESP + 0x14]      ; 0054f7c7
    PUSH EDX                            ; 0054f7cb
    PUSH ESI                            ; 0054f7cc
    MOV ECX,dword ptr [0x005bed68]      ; 0054f7cd | DAT_005bed68
    PUSH ECX                            ; 0054f7d3
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90 ; 0054f7d4
        ;   XREF to: 0052ea90 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90()
    ADD ESP,0x10                        ; 0054f7d9
    MOV EBX,EAX                         ; 0054f7dc
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 0054f7de
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    MOV EAX,EBX                         ; 0054f7e3
    POP ESI                             ; 0054f7e5
    POP EBX                             ; 0054f7e6
    RET                                 ; 0054f7e7

