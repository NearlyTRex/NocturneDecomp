; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, float delay)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; CVector3f *      Stack[0x10]:4   position
; float            Stack[0x14]:4   delay
; Local Variables:
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[3]:
;   core_actor.cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0 at 00408fba
;   core_fire.cpp_CFireEffect_FUN_004c76a0 at 004c79b3
;   core_fire.cpp_CFireEffect_createStake_FUN_004c7bb0 at 004c7cb3
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxDelay_FUN_005a8b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b3ae0
        ;   Label: core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b3ae1
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005b3ae5 | void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
    FLD float ptr [ESP + 0x18]          ; 005b3aea
    SUB ESP,0x8                         ; 005b3aee
    FSTP double ptr [ESP]               ; 005b3af1
    CALL sound_sndmain.cpp_setNextSfxDelay_FUN_005a8b40 ; 005b3af4 | void sound_sndmain.cpp_setNextSfxDelay_FUN_005a8b40(double delay_seconds)
        ;   XREF to: 005a8b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b3af9
    PUSH 0x0                            ; 005b3afc
    PUSH 0x0                            ; 005b3afe
    PUSH dword ptr [EBX + 0x8]          ; 005b3b00
    PUSH dword ptr [EBX + 0x4]          ; 005b3b03
    MOV EDX,dword ptr [ESP + 0x20]      ; 005b3b06
    PUSH dword ptr [EBX]                ; 005b3b0a
    PUSH EDX                            ; 005b3b0c
    MOV ECX,dword ptr [ESP + 0x24]      ; 005b3b0d
    PUSH ECX                            ; 005b3b11
    CALL core_sound.cpp_playSfxInternal_FUN_005b1fd0 ; 005b3b12 | uint core_sound.cpp_playSfxInternal_FUN_005b1fd0(void * user_data, char * sound_name, float x, float y, ...)
        ;   XREF to: 005b1fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 005b3b17
    MOV EBX,EAX                         ; 005b3b1a
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b3b1c | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    MOV EAX,EBX                         ; 005b3b21
    POP EBX                             ; 005b3b23
    RET                                 ; 005b3b24

