; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_0040a300(CDemonActor *param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005bed68
;
; Called Functions:
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a300
        ;   Label: core_actor.cpp_FUN_0040a300
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040a301
    LEA EAX,[EDX + 0x20]                ; 0040a305
    PUSH EAX                            ; 0040a308
    MOV ECX,dword ptr [ESP + 0x10]      ; 0040a309
    PUSH ECX                            ; 0040a30d
    PUSH EDX                            ; 0040a30e
    MOV EBX,dword ptr [0x005bed68]      ; 0040a30f | DAT_005bed68
    PUSH EBX                            ; 0040a315
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90 ; 0040a316
        ;   XREF to: 0052ea90 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 0040a31b
    POP EBX                             ; 0040a31e
    RET                                 ; 0040a31f

