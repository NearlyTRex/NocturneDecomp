; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0(CDemonActor *this_ptr,char *sound_name,float volume)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
; float            Stack[0xc]:4   volume
;
; Referenced Globals:
;   CSound* g_CSoundPtr = 03f6af64
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_005b3b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408fd0
        ;   Label: core_actor.cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408fd1
    LEA EAX,[EDX + 0x20]                ; 00408fd5
    PUSH dword ptr [ESP + 0x10]         ; 00408fd8
    PUSH EAX                            ; 00408fdc
    MOV ECX,dword ptr [ESP + 0x14]      ; 00408fdd
    PUSH ECX                            ; 00408fe1
    PUSH EDX                            ; 00408fe2
    MOV EBX,dword ptr [0x00681ef8]      ; 00408fe3 | g_CSoundInstance | g_CSoundPtr
    PUSH EBX                            ; 00408fe9 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_005b3b30 ; 00408fea
        ;   XREF to: 005b3b30 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_005b3b30(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker, ...)
    ADD ESP,0x14                        ; 00408fef
    POP EBX                             ; 00408ff2
    RET                                 ; 00408ff3

