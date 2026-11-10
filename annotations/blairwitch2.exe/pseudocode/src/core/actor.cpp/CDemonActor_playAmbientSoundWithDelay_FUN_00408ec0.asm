; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_CDemonActor_playAmbientSoundWithDelay_FUN_00408ec0(CDemonActor *this_ptr,char *sound_name,float delay)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
; float            Stack[0xc]:4   delay
;
; Referenced Globals:
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0055af30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408ec0
        ;   Label: core_actor.cpp_CDemonActor_playAmbientSoundWithDelay_FUN_00408ec0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408ec1
    LEA EAX,[EDX + 0x20]                ; 00408ec5
    PUSH dword ptr [ESP + 0x10]         ; 00408ec8
    PUSH EAX                            ; 00408ecc
    MOV ECX,dword ptr [ESP + 0x14]      ; 00408ecd
    PUSH ECX                            ; 00408ed1
    PUSH EDX                            ; 00408ed2
    MOV EBX,dword ptr [0x0061c068]      ; 00408ed3 | DAT_0061c068
    PUSH EBX                            ; 00408ed9
    CALL core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0055af30 ; 00408eda
        ;   XREF to: 0055af30 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0055af30(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker, ...)
    ADD ESP,0x14                        ; 00408edf
    POP EBX                             ; 00408ee2
    LEA EAX,[EAX]                       ; 00408ee3
    LEA EDX,[EDX]                       ; 00408ee9
    NOP                                 ; 00408eef

