; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_vehicle_cpp_CVehicle_playTrackedSound_FUN_005a89c0(CVehicle *this_ptr,char *sound_name)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
;
; XREF[1]:
;   core_vehicle.cpp_CVehicle_process_FUN_005a7b50 at 005a8043
;
; Referenced Globals:
;   undefined4 DAT_006236b8
;
; Called Functions:
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0
;   sound_sndmain.cpp_FUN_005727e0
;   sound_sndmain.cpp_FUN_00572880
;   sound_sndmain.cpp_popSfxOptions_FUN_00572b40
;   sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a89c0
        ;   Label: core_vehicle.cpp_CVehicle_playTrackedSound_FUN_005a89c0
    PUSH ESI                            ; 005a89c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a89c2
    LEA EBX,[ESI + 0x20]                ; 005a89c6
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 005a89c9
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
    PUSH EBX                            ; 005a89ce
    CALL sound_sndmain.cpp_FUN_005727e0 ; 005a89cf
        ;   XREF to: 005727e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005727e0(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 005a89d4
    LEA EAX,[ESI + 0x1060]              ; 005a89d7
    PUSH EAX                            ; 005a89dd
    CALL sound_sndmain.cpp_FUN_00572880 ; 005a89de
        ;   XREF to: 00572880 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572880(CVector3f * velocity_source_ptr)
    ADD ESP,0x4                         ; 005a89e3
    PUSH EBX                            ; 005a89e6
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a89e7
    PUSH EDX                            ; 005a89eb
    PUSH ESI                            ; 005a89ec
    MOV ECX,dword ptr [0x006236b8]      ; 005a89ed | DAT_006236b8
    PUSH ECX                            ; 005a89f3
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0 ; 005a89f4
        ;   XREF to: 0057d8d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 005a89f9
    MOV EBX,EAX                         ; 005a89fc
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 005a89fe
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    MOV EAX,EBX                         ; 005a8a03
    POP ESI                             ; 005a8a05
    POP EBX                             ; 005a8a06
    RET                                 ; 005a8a07

