; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_005b3b30(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker, float delay)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; CVector3f *      Stack[0x10]:4   position_tracker
; float            Stack[0x14]:4   delay
; Local Variables:
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0 at 00408fea
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxDelay_FUN_005a8b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b3b30
        ;   Label: core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_005b3b30
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005b3b31
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    FLD float ptr [ESP + 0x18]          ; 005b3b36
    SUB ESP,0x8                         ; 005b3b3a
    FSTP double ptr [ESP]               ; 005b3b3d
    CALL sound_sndmain.cpp_setNextSfxDelay_FUN_005a8b40 ; 005b3b40
        ;   XREF to: 005a8b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxDelay_FUN_005a8b40(double delay_seconds)
    ADD ESP,0x8                         ; 005b3b45
    PUSH 0x0                            ; 005b3b48
    MOV EDX,dword ptr [ESP + 0x18]      ; 005b3b4a
    PUSH EDX                            ; 005b3b4e
    PUSH 0x0                            ; 005b3b4f
    PUSH 0x0                            ; 005b3b51
    MOV ECX,dword ptr [ESP + 0x20]      ; 005b3b53
    PUSH 0x0                            ; 005b3b57
    PUSH ECX                            ; 005b3b59
    MOV EBX,dword ptr [ESP + 0x24]      ; 005b3b5a
    PUSH EBX                            ; 005b3b5e
    CALL core_sound.cpp_playSfxInternal_FUN_005b1fd0 ; 005b3b5f
        ;   XREF to: 005b1fd0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_playSfxInternal_FUN_005b1fd0(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 005b3b64
    MOV EBX,EAX                         ; 005b3b67
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b3b69
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    MOV EAX,EBX                         ; 005b3b6e
    POP EBX                             ; 005b3b70
    RET                                 ; 005b3b71

