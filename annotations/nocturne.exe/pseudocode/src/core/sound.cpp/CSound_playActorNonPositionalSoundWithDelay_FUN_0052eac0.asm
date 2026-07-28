; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0052eac0(void)
;
; Local Variables:
; undefined8       Stack[-0xc]:8  local_c
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_0052d120
;   sound_sndmain.cpp_popSfxOptions_FUN_005263c0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00526340
;   sound_sndmain.cpp_setNextSfxDelay_FUN_00526210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052eac0
        ;   Label: core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0052eac0
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 0052eac1
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
    FLD float ptr [ESP + 0x14]          ; 0052eac6
    SUB ESP,0x8                         ; 0052eaca
    FSTP double ptr [ESP]               ; 0052eacd
    CALL sound_sndmain.cpp_setNextSfxDelay_FUN_00526210 ; 0052ead0
        ;   XREF to: 00526210 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxDelay_FUN_00526210(double delay_seconds)
    ADD ESP,0x8                         ; 0052ead5
    PUSH 0x1                            ; 0052ead8
    PUSH 0x0                            ; 0052eada
    PUSH 0x0                            ; 0052eadc
    PUSH 0x0                            ; 0052eade
    MOV EDX,dword ptr [ESP + 0x20]      ; 0052eae0
    PUSH 0x0                            ; 0052eae4
    PUSH EDX                            ; 0052eae6
    MOV ECX,dword ptr [ESP + 0x24]      ; 0052eae7
    PUSH ECX                            ; 0052eaeb
    CALL core_sound.cpp_playSfxInternal_FUN_0052d120 ; 0052eaec
        ;   XREF to: 0052d120 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_playSfxInternal_FUN_0052d120(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 0052eaf1
    MOV EBX,EAX                         ; 0052eaf4
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 0052eaf6
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    MOV EAX,EBX                         ; 0052eafb
    POP EBX                             ; 0052eafd
    RET                                 ; 0052eafe

