; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay )
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; CVector3f *      Stack[0x10]:4   position
; float            Stack[0x14]:4   delay
;
; XREF[5]:
;   core_actor.cpp_CDemonActor_playSoundWithDelay_FUN_00408ca0 at 00408cba
;   core_blundrbs.cpp_CBlunderbus_fire_FUN_00410490 at 004115a3
;   core_fire.cpp_FUN_004a2090 at 004a23a6
;   core_fire.cpp_FUN_004a25f0 at 004a2727
;   core_flintlck.cpp_CFlintlock_fire_FUN_004ae850 at 004af0fd
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_0055f020
;   sound_sndmain.cpp_popSfxOptions_FUN_00556050
;   sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0
;   sound_sndmain.cpp_setNextSfxDelay_FUN_00555ee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560a70
        ;   Label: core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
    MOV EBX,dword ptr [ESP + 0x14]      ; 00560a71
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0 ; 00560a75
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0()
    PUSH dword ptr [ESP + 0x18]         ; 00560a7a
    CALL sound_sndmain.cpp_setNextSfxDelay_FUN_00555ee0 ; 00560a7e
        ;   XREF to: 00555ee0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxDelay_FUN_00555ee0(double delay_seconds)
    ADD ESP,0x4                         ; 00560a83
    PUSH 0x0                            ; 00560a86
    PUSH 0x0                            ; 00560a88
    PUSH dword ptr [EBX + 0x8]          ; 00560a8a
    PUSH dword ptr [EBX + 0x4]          ; 00560a8d
    MOV EDX,dword ptr [ESP + 0x20]      ; 00560a90
    PUSH dword ptr [EBX]                ; 00560a94
    PUSH EDX                            ; 00560a96
    MOV ECX,dword ptr [ESP + 0x24]      ; 00560a97
    PUSH ECX                            ; 00560a9b
    CALL core_sound.cpp_playSfxInternal_FUN_0055f020 ; 00560a9c
        ;   XREF to: 0055f020 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_playSfxInternal_FUN_0055f020(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 00560aa1
    MOV EBX,EAX                         ; 00560aa4
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00556050 ; 00560aa6
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00556050()
    MOV EAX,EBX                         ; 00560aab
    POP EBX                             ; 00560aad
    RET                                 ; 00560aae

