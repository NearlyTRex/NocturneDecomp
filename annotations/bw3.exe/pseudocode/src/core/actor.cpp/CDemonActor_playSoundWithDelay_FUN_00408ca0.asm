; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_CDemonActor_playSoundWithDelay_FUN_00408ca0(CDemonActor *this_ptr,char *sound_name,float delay)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
; float            Stack[0xc]:4   delay
;
; Referenced Globals:
;   undefined4 DAT_006045f8
;
; Called Functions:
;   core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408ca0
        ;   Label: core_actor.cpp_CDemonActor_playSoundWithDelay_FUN_00408ca0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408ca1
    LEA EAX,[EDX + 0x20]                ; 00408ca5
    PUSH dword ptr [ESP + 0x10]         ; 00408ca8
    PUSH EAX                            ; 00408cac
    MOV ECX,dword ptr [ESP + 0x14]      ; 00408cad
    PUSH ECX                            ; 00408cb1
    PUSH EDX                            ; 00408cb2
    MOV EBX,dword ptr [0x006045f8]      ; 00408cb3 | DAT_006045f8
    PUSH EBX                            ; 00408cb9
    CALL core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70 ; 00408cba
        ;   XREF to: 00560a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 00408cbf
    POP EBX                             ; 00408cc2
    RET                                 ; 00408cc3

