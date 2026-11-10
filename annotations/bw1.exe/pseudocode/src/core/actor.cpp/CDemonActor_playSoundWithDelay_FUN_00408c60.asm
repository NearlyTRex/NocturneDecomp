; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_CDemonActor_playSoundWithDelay_FUN_00408c60(CDemonActor *this_ptr,char *sound_name,float delay)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
; float            Stack[0xc]:4   delay
;
; Referenced Globals:
;   undefined4 DAT_006236b8
;
; Called Functions:
;   core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0057d940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408c60
        ;   Label: core_actor.cpp_CDemonActor_playSoundWithDelay_FUN_00408c60
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408c61
    LEA EAX,[EDX + 0x20]                ; 00408c65
    PUSH dword ptr [ESP + 0x10]         ; 00408c68
    PUSH EAX                            ; 00408c6c
    MOV ECX,dword ptr [ESP + 0x14]      ; 00408c6d
    PUSH ECX                            ; 00408c71
    PUSH EDX                            ; 00408c72
    MOV EBX,dword ptr [0x006236b8]      ; 00408c73 | DAT_006236b8
    PUSH EBX                            ; 00408c79
    CALL core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0057d940 ; 00408c7a
        ;   XREF to: 0057d940 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0057d940(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 00408c7f
    POP EBX                             ; 00408c82
    RET                                 ; 00408c83

