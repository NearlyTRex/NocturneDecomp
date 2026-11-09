; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint core_actor_cpp_FUN_00408c90(CDemonActor *param_1,char *param_2,float param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_006236b8
;
; Called Functions:
;   core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0057d980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408c90
        ;   Label: core_actor.cpp_FUN_00408c90
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408c91
    LEA EAX,[EDX + 0x20]                ; 00408c95
    PUSH dword ptr [ESP + 0x10]         ; 00408c98
    PUSH EAX                            ; 00408c9c
    MOV ECX,dword ptr [ESP + 0x14]      ; 00408c9d
    PUSH ECX                            ; 00408ca1
    PUSH EDX                            ; 00408ca2
    MOV EBX,dword ptr [0x006236b8]      ; 00408ca3 | DAT_006236b8
    PUSH EBX                            ; 00408ca9
    CALL core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0057d980 ; 00408caa
        ;   XREF to: 0057d980 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0057d980(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker, ...)
    ADD ESP,0x14                        ; 00408caf
    POP EBX                             ; 00408cb2
    LEA EAX,[EAX]                       ; 00408cb3
    LEA EDX,[EDX]                       ; 00408cb9
    NOP                                 ; 00408cbf

