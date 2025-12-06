; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0(CDemonActor * this_ptr, char * sound_name, float volume)
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
;   core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408fa0
        ;   Label: core_actor.cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408fa1
    LEA EAX,[EDX + 0x20]                ; 00408fa5
    PUSH dword ptr [ESP + 0x10]         ; 00408fa8
    PUSH EAX                            ; 00408fac
    MOV ECX,dword ptr [ESP + 0x14]      ; 00408fad
    PUSH ECX                            ; 00408fb1
    PUSH EDX                            ; 00408fb2
    MOV EBX,dword ptr [0x00681ef8]      ; 00408fb3 | CSound g_CSoundInstance | CSound * g_CSoundPtr
    PUSH EBX                            ; 00408fb9 | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0 ; 00408fba | uint core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
        ;   XREF to: 005b3ae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00408fbf
    POP EBX                             ; 00408fc2
    RET                                 ; 00408fc3

