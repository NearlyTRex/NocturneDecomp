; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_CDemonActor_playSound_FUN_00408f60(CDemonActor *this_ptr,char *sound_name)
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
;   core_sound.cpp_CSound_playActorSound_FUN_005b3a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408f60
        ;   Label: core_actor.cpp_CDemonActor_playSound_FUN_00408f60
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408f61
    LEA EAX,[EDX + 0x20]                ; 00408f65
    PUSH EAX                            ; 00408f68
    MOV ECX,dword ptr [ESP + 0x10]      ; 00408f69
    PUSH ECX                            ; 00408f6d
    PUSH EDX                            ; 00408f6e
    MOV EBX,dword ptr [0x00681ef8]      ; 00408f6f | g_CSoundInstance | g_CSoundPtr
    PUSH EBX                            ; 00408f75 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 00408f76
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00408f7b
    POP EBX                             ; 00408f7e
    RET                                 ; 00408f7f

