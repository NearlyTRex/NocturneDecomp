; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_CDemonActor_playSound_FUN_0040a2e0(CDemonActor *param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005bed68
;
; Called Functions:
;   core_sound.cpp_CSound_playActorSound_FUN_0052ea60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a2e0
        ;   Label: core_actor.cpp_CDemonActor_playSound_FUN_0040a2e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040a2e1
    LEA EAX,[EDX + 0x20]                ; 0040a2e5
    PUSH EAX                            ; 0040a2e8
    MOV ECX,dword ptr [ESP + 0x10]      ; 0040a2e9
    PUSH ECX                            ; 0040a2ed
    PUSH EDX                            ; 0040a2ee
    MOV EBX,dword ptr [0x005bed68]      ; 0040a2ef | DAT_005bed68
    PUSH EBX                            ; 0040a2f5
    CALL core_sound.cpp_CSound_playActorSound_FUN_0052ea60 ; 0040a2f6
        ;   XREF to: 0052ea60 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0052ea60(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0040a2fb
    POP EBX                             ; 0040a2fe
    RET                                 ; 0040a2ff

