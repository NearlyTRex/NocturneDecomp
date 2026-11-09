; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint core_actor_cpp_FUN_00408cd0(CDemonActor *param_1,char *param_2,float param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_006045f8
;
; Called Functions:
;   core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_00560ab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408cd0
        ;   Label: core_actor.cpp_FUN_00408cd0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408cd1
    LEA EAX,[EDX + 0x20]                ; 00408cd5
    PUSH dword ptr [ESP + 0x10]         ; 00408cd8
    PUSH EAX                            ; 00408cdc
    MOV ECX,dword ptr [ESP + 0x14]      ; 00408cdd
    PUSH ECX                            ; 00408ce1
    PUSH EDX                            ; 00408ce2
    MOV EBX,dword ptr [0x006045f8]      ; 00408ce3 | DAT_006045f8
    PUSH EBX                            ; 00408ce9
    CALL core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_00560ab0 ; 00408cea
        ;   XREF to: 00560ab0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_00560ab0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker, ...)
    ADD ESP,0x14                        ; 00408cef
    POP EBX                             ; 00408cf2
    LEA EAX,[EAX]                       ; 00408cf3
    LEA EDX,[EDX]                       ; 00408cf9
    NOP                                 ; 00408cff

