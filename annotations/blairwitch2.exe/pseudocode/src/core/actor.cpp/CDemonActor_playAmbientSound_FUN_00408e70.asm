; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408e70(CDemonActor *this_ptr,char *sound_name)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
;
; Referenced Globals:
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_0055ae80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408e70
        ;   Label: core_actor.cpp_CDemonActor_playAmbientSound_FUN_00408e70
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408e71
    LEA EAX,[EDX + 0x20]                ; 00408e75
    PUSH EAX                            ; 00408e78
    MOV ECX,dword ptr [ESP + 0x10]      ; 00408e79
    PUSH ECX                            ; 00408e7d
    PUSH EDX                            ; 00408e7e
    MOV EBX,dword ptr [0x0061c068]      ; 00408e7f | DAT_0061c068
    PUSH EBX                            ; 00408e85
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0055ae80 ; 00408e86
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_0055ae80(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 00408e8b
    POP EBX                             ; 00408e8e
    RET                                 ; 00408e8f

