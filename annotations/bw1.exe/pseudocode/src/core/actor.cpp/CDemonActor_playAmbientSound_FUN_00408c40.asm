; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408c40(CDemonActor *this_ptr,char *sound_name)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
;
; Referenced Globals:
;   undefined4 DAT_006236b8
;
; Called Functions:
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408c40
        ;   Label: core_actor.cpp_CDemonActor_playAmbientSound_FUN_00408c40
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408c41
    LEA EAX,[EDX + 0x20]                ; 00408c45
    PUSH EAX                            ; 00408c48
    MOV ECX,dword ptr [ESP + 0x10]      ; 00408c49
    PUSH ECX                            ; 00408c4d
    PUSH EDX                            ; 00408c4e
    MOV EBX,dword ptr [0x006236b8]      ; 00408c4f | DAT_006236b8
    PUSH EBX                            ; 00408c55
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0 ; 00408c56
        ;   XREF to: 0057d8d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 00408c5b
    POP EBX                             ; 00408c5e
    RET                                 ; 00408c5f

