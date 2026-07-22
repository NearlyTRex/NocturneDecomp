; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_0052eb50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5 )
;
; Local Variables:
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[1]:
;   core_actor.cpp_FUN_0040a350 at 0040a36a
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_0052d120
;   sound_sndmain.cpp_popSfxOptions_FUN_005263c0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00526340
;   sound_sndmain.cpp_setNextSfxDelay_FUN_00526210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052eb50
        ;   Label: core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0052eb50
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 0052eb51
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
    FLD float ptr [ESP + 0x18]          ; 0052eb56
    SUB ESP,0x8                         ; 0052eb5a
    FSTP double ptr [ESP]               ; 0052eb5d
    CALL sound_sndmain.cpp_setNextSfxDelay_FUN_00526210 ; 0052eb60
        ;   XREF to: 00526210 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setNextSfxDelay_FUN_00526210()
    ADD ESP,0x8                         ; 0052eb65
    PUSH 0x0                            ; 0052eb68
    MOV EDX,dword ptr [ESP + 0x18]      ; 0052eb6a
    PUSH EDX                            ; 0052eb6e
    PUSH 0x0                            ; 0052eb6f
    PUSH 0x0                            ; 0052eb71
    MOV ECX,dword ptr [ESP + 0x20]      ; 0052eb73
    PUSH 0x0                            ; 0052eb77
    PUSH ECX                            ; 0052eb79
    MOV EBX,dword ptr [ESP + 0x24]      ; 0052eb7a
    PUSH EBX                            ; 0052eb7e
    CALL core_sound.cpp_playSfxInternal_FUN_0052d120 ; 0052eb7f
        ;   XREF to: 0052d120 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_playSfxInternal_FUN_0052d120()
    ADD ESP,0x1c                        ; 0052eb84
    MOV EBX,EAX                         ; 0052eb87
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 0052eb89
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    MOV EAX,EBX                         ; 0052eb8e
    POP EBX                             ; 0052eb90
    RET                                 ; 0052eb91

