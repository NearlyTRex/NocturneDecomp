; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_0057d980(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker,float delay)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; CVector3f *      Stack[0x10]:4   position_tracker
; float            Stack[0x14]:4   delay
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_playAmbientSoundWithDelay_FUN_00408c90 at 00408caa
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_0057bef0
;   sound_sndmain.cpp_FUN_005729d0
;   sound_sndmain.cpp_popSfxOptions_FUN_00572b40
;   sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d980
        ;   Label: core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0057d980
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 0057d981
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
    PUSH dword ptr [ESP + 0x18]         ; 0057d986
    CALL sound_sndmain.cpp_FUN_005729d0 ; 0057d98a
        ;   XREF to: 005729d0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005729d0()
    ADD ESP,0x4                         ; 0057d98f
    PUSH 0x0                            ; 0057d992
    MOV EDX,dword ptr [ESP + 0x18]      ; 0057d994
    PUSH EDX                            ; 0057d998
    PUSH 0x0                            ; 0057d999
    PUSH 0x0                            ; 0057d99b
    MOV ECX,dword ptr [ESP + 0x20]      ; 0057d99d
    PUSH 0x0                            ; 0057d9a1
    PUSH ECX                            ; 0057d9a3
    MOV EBX,dword ptr [ESP + 0x24]      ; 0057d9a4
    PUSH EBX                            ; 0057d9a8
    CALL core_sound.cpp_playSfxInternal_FUN_0057bef0 ; 0057d9a9
        ;   XREF to: 0057bef0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_playSfxInternal_FUN_0057bef0(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 0057d9ae
    MOV EBX,EAX                         ; 0057d9b1
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 0057d9b3
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    MOV EAX,EBX                         ; 0057d9b8
    POP EBX                             ; 0057d9ba
    RET                                 ; 0057d9bb

