; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0055aef0(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay )
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; CVector3f *      Stack[0x10]:4   position
; float            Stack[0x14]:4   delay
;
; XREF[3]:
;   core_actor.cpp_CDemonActor_playSoundWithDelay_FUN_00408e90 at 00408eaa
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_0049cd50 at 0049d07f
;   core_fire.cpp_CFireEffect_createStake_FUN_0049d2c0 at 0049d3f7
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_005594c0
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_setNextSfxDelay_FUN_00550360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055aef0
        ;   Label: core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0055aef0
    MOV EBX,dword ptr [ESP + 0x14]      ; 0055aef1
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 0055aef5
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    PUSH dword ptr [ESP + 0x18]         ; 0055aefa
    CALL sound_sndmain.cpp_setNextSfxDelay_FUN_00550360 ; 0055aefe
        ;   XREF to: 00550360 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setNextSfxDelay_FUN_00550360()
    ADD ESP,0x4                         ; 0055af03
    PUSH 0x0                            ; 0055af06
    PUSH 0x0                            ; 0055af08
    PUSH dword ptr [EBX + 0x8]          ; 0055af0a
    PUSH dword ptr [EBX + 0x4]          ; 0055af0d
    MOV EDX,dword ptr [ESP + 0x20]      ; 0055af10
    PUSH dword ptr [EBX]                ; 0055af14
    PUSH EDX                            ; 0055af16
    MOV ECX,dword ptr [ESP + 0x24]      ; 0055af17
    PUSH ECX                            ; 0055af1b
    CALL core_sound.cpp_playSfxInternal_FUN_005594c0 ; 0055af1c
        ;   XREF to: 005594c0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_playSfxInternal_FUN_005594c0(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 0055af21
    MOV EBX,EAX                         ; 0055af24
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 0055af26
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    MOV EAX,EBX                         ; 0055af2b
    POP EBX                             ; 0055af2d
    RET                                 ; 0055af2e

