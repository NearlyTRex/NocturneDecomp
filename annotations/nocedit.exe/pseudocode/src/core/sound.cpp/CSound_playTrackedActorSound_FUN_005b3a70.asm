; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; CVector3f *      Stack[0x10]:4   position_tracker
;
; XREF[6]:
;   core_actor.cpp_CDemonActor_playAmbientSound_FUN_00408f80 at 00408f96
;   core_chain.cpp_FUN_004300d0 at 00430853
;   core_pendulum.cpp_FUN_00549b90 at 0054a0a2
;   core_sound.cpp_CSound_process_FUN_005b2fd0 at 005b3762
;   core_sound.cpp_processTrainSounds_FUN_005b2770 at 005b2bc9
;   core_vehicle.cpp_FUN_005e8b50 at 005e8b84
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b3a70
        ;   Label: core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70
    PUSH 0x0                            ; 005b3a71
    MOV EDX,dword ptr [ESP + 0x18]      ; 005b3a73
    PUSH EDX                            ; 005b3a77
    PUSH 0x0                            ; 005b3a78
    PUSH 0x0                            ; 005b3a7a
    MOV ECX,dword ptr [ESP + 0x20]      ; 005b3a7c
    PUSH 0x0                            ; 005b3a80
    PUSH ECX                            ; 005b3a82
    MOV EBX,dword ptr [ESP + 0x24]      ; 005b3a83
    PUSH EBX                            ; 005b3a87
    CALL core_sound.cpp_playSfxInternal_FUN_005b1fd0 ; 005b3a88 | uint core_sound.cpp_playSfxInternal_FUN_005b1fd0(void * user_data, char * sound_name, float x, float y, ...)
        ;   XREF to: 005b1fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 005b3a8d
    POP EBX                             ; 005b3a90
    RET                                 ; 005b3a91

