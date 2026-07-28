; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_0040a320(CDemonActor *param_1,char *param_2,float param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005bed68
;
; Called Functions:
;   core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a320
        ;   Label: core_actor.cpp_FUN_0040a320
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040a321
    LEA EAX,[EDX + 0x20]                ; 0040a325
    PUSH dword ptr [ESP + 0x10]         ; 0040a328
    PUSH EAX                            ; 0040a32c
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040a32d
    PUSH ECX                            ; 0040a331
    PUSH EDX                            ; 0040a332
    MOV EBX,dword ptr [0x005bed68]      ; 0040a333 | DAT_005bed68
    PUSH EBX                            ; 0040a339
    CALL core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00 ; 0040a33a
        ;   XREF to: 0052eb00 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 0040a33f
    POP EBX                             ; 0040a342
    RET                                 ; 0040a343

