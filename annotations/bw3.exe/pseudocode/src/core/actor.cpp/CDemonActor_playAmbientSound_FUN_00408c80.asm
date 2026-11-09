; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408c80(CDemonActor *this_ptr,char *sound_name)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
;
; Referenced Globals:
;   undefined4 DAT_006045f8
;
; Called Functions:
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408c80
        ;   Label: core_actor.cpp_CDemonActor_playAmbientSound_FUN_00408c80
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408c81
    LEA EAX,[EDX + 0x20]                ; 00408c85
    PUSH EAX                            ; 00408c88
    MOV ECX,dword ptr [ESP + 0x10]      ; 00408c89
    PUSH ECX                            ; 00408c8d
    PUSH EDX                            ; 00408c8e
    MOV EBX,dword ptr [0x006045f8]      ; 00408c8f | DAT_006045f8
    PUSH EBX                            ; 00408c95
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00 ; 00408c96
        ;   XREF to: 00560a00 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 00408c9b
    POP EBX                             ; 00408c9e
    RET                                 ; 00408c9f

