; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_0055af30(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker,float delay)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; CVector3f *      Stack[0x10]:4   position_tracker
; float            Stack[0x14]:4   delay
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_playAmbientSoundWithDelay_FUN_00408ec0 at 00408eda
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_005594c0
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_setNextSfxDelay_FUN_00550360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055af30
        ;   Label: core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0055af30
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 0055af31
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    PUSH dword ptr [ESP + 0x18]         ; 0055af36
    CALL sound_sndmain.cpp_setNextSfxDelay_FUN_00550360 ; 0055af3a
        ;   XREF to: 00550360 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setNextSfxDelay_FUN_00550360()
    ADD ESP,0x4                         ; 0055af3f
    PUSH 0x0                            ; 0055af42
    MOV EDX,dword ptr [ESP + 0x18]      ; 0055af44
    PUSH EDX                            ; 0055af48
    PUSH 0x0                            ; 0055af49
    PUSH 0x0                            ; 0055af4b
    MOV ECX,dword ptr [ESP + 0x20]      ; 0055af4d
    PUSH 0x0                            ; 0055af51
    PUSH ECX                            ; 0055af53
    MOV EBX,dword ptr [ESP + 0x24]      ; 0055af54
    PUSH EBX                            ; 0055af58
    CALL core_sound.cpp_playSfxInternal_FUN_005594c0 ; 0055af59
        ;   XREF to: 005594c0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_playSfxInternal_FUN_005594c0(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 0055af5e
    MOV EBX,EAX                         ; 0055af61
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 0055af63
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    MOV EAX,EBX                         ; 0055af68
    POP EBX                             ; 0055af6a
    RET                                 ; 0055af6b

