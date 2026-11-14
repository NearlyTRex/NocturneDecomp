; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_vehicle_cpp_CVehicle_playTrackedSound_FUN_00584d90(CVehicle *this_ptr,char *sound_name)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
;
; XREF[1]:
;   core_vehicle.cpp_CVehicle_process_FUN_00583f20 at 00584413
;
; Referenced Globals:
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_0055ae80
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170
;   sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00550210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584d90
        ;   Label: core_vehicle.cpp_CVehicle_playTrackedSound_FUN_00584d90
    PUSH ESI                            ; 00584d91
    MOV ESI,dword ptr [ESP + 0xc]       ; 00584d92
    LEA EBX,[ESI + 0x20]                ; 00584d96
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 00584d99
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    PUSH EBX                            ; 00584d9e
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170 ; 00584d9f
        ;   XREF to: 00550170 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 00584da4
    LEA EAX,[ESI + 0x11bc]              ; 00584da7
    PUSH EAX                            ; 00584dad
    CALL sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00550210 ; 00584dae
        ;   XREF to: 00550210 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00550210(CVector3f * velocity_source_ptr)
    ADD ESP,0x4                         ; 00584db3
    PUSH EBX                            ; 00584db6
    MOV EDX,dword ptr [ESP + 0x14]      ; 00584db7
    PUSH EDX                            ; 00584dbb
    PUSH ESI                            ; 00584dbc
    MOV ECX,dword ptr [0x0061c068]      ; 00584dbd | DAT_0061c068
    PUSH ECX                            ; 00584dc3
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0055ae80 ; 00584dc4
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_0055ae80(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 00584dc9
    MOV EBX,EAX                         ; 00584dcc
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 00584dce
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    MOV EAX,EBX                         ; 00584dd3
    POP ESI                             ; 00584dd5
    POP EBX                             ; 00584dd6
    RET                                 ; 00584dd7

