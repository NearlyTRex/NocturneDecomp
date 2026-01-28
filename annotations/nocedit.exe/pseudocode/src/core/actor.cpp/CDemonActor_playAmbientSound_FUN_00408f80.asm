; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80(CDemonActor *this_ptr,char *sound_name)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
;
; Referenced Globals:
;   CSound* g_CSoundPtr = 03f6af64
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408f80
        ;   Label: core_actor.cpp_CDemonActor_playAmbientSound_FUN_00408f80
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408f81
    LEA EAX,[EDX + 0x20]                ; 00408f85
    PUSH EAX                            ; 00408f88
    MOV ECX,dword ptr [ESP + 0x10]      ; 00408f89
    PUSH ECX                            ; 00408f8d
    PUSH EDX                            ; 00408f8e
    MOV EBX,dword ptr [0x00681ef8]      ; 00408f8f | g_CSoundInstance | g_CSoundPtr
    PUSH EBX                            ; 00408f95 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70 ; 00408f96
        ;   XREF to: 005b3a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 00408f9b
    POP EBX                             ; 00408f9e
    RET                                 ; 00408f9f

