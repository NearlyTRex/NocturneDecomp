; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_005b3aa0(CSound *this_ptr,CDemonActor *actor,char *sound_name,float delay)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; float            Stack[0x10]:4   delay
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxDelay_FUN_005a8b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b3aa0
        ;   Label: core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_005b3aa0
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005b3aa1
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    FLD float ptr [ESP + 0x14]          ; 005b3aa6
    SUB ESP,0x8                         ; 005b3aaa
    FSTP double ptr [ESP]               ; 005b3aad
    CALL sound_sndmain.cpp_setNextSfxDelay_FUN_005a8b40 ; 005b3ab0
        ;   XREF to: 005a8b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxDelay_FUN_005a8b40(double delay_seconds)
    ADD ESP,0x8                         ; 005b3ab5
    PUSH 0x1                            ; 005b3ab8
    PUSH 0x0                            ; 005b3aba
    PUSH 0x0                            ; 005b3abc
    PUSH 0x0                            ; 005b3abe
    MOV EDX,dword ptr [ESP + 0x20]      ; 005b3ac0
    PUSH 0x0                            ; 005b3ac4
    PUSH EDX                            ; 005b3ac6
    MOV ECX,dword ptr [ESP + 0x24]      ; 005b3ac7
    PUSH ECX                            ; 005b3acb
    CALL core_sound.cpp_playSfxInternal_FUN_005b1fd0 ; 005b3acc
        ;   XREF to: 005b1fd0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_playSfxInternal_FUN_005b1fd0(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 005b3ad1
    MOV EBX,EAX                         ; 005b3ad4
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005b3ad6
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    MOV EAX,EBX                         ; 005b3adb
    POP EBX                             ; 005b3add
    RET                                 ; 005b3ade

