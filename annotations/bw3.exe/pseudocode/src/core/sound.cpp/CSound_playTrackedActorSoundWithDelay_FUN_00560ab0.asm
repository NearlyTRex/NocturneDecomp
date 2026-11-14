; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_00560ab0(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker,float delay)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; CVector3f *      Stack[0x10]:4   position_tracker
; float            Stack[0x14]:4   delay
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_playAmbientSoundWithDelay_FUN_00408cd0 at 00408cea
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_0055f020
;   sound_sndmain.cpp_popSfxOptions_FUN_00556050
;   sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0
;   sound_sndmain.cpp_setNextSfxDelay_FUN_00555ee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560ab0
        ;   Label: core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_00560ab0
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0 ; 00560ab1
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0()
    PUSH dword ptr [ESP + 0x18]         ; 00560ab6
    CALL sound_sndmain.cpp_setNextSfxDelay_FUN_00555ee0 ; 00560aba
        ;   XREF to: 00555ee0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxDelay_FUN_00555ee0(double delay_seconds)
    ADD ESP,0x4                         ; 00560abf
    PUSH 0x0                            ; 00560ac2
    MOV EDX,dword ptr [ESP + 0x18]      ; 00560ac4
    PUSH EDX                            ; 00560ac8
    PUSH 0x0                            ; 00560ac9
    PUSH 0x0                            ; 00560acb
    MOV ECX,dword ptr [ESP + 0x20]      ; 00560acd
    PUSH 0x0                            ; 00560ad1
    PUSH ECX                            ; 00560ad3
    MOV EBX,dword ptr [ESP + 0x24]      ; 00560ad4
    PUSH EBX                            ; 00560ad8
    CALL core_sound.cpp_playSfxInternal_FUN_0055f020 ; 00560ad9
        ;   XREF to: 0055f020 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_playSfxInternal_FUN_0055f020(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 00560ade
    MOV EBX,EAX                         ; 00560ae1
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00556050 ; 00560ae3
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00556050()
    MOV EAX,EBX                         ; 00560ae8
    POP EBX                             ; 00560aea
    RET                                 ; 00560aeb

