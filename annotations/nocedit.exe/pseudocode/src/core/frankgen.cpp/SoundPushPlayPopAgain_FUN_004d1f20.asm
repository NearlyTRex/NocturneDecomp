; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20()
;
;
; XREF[1]:
;   core_frankgen.cpp_PlaySounds_FUN_004d1a40 at 004d1d14
;
; Referenced Globals:
;   undefined4 DAT_02d7b7f0
;
; Called Functions:
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
;   sound_sndmain.cpp_startSfx_FUN_005a8e90
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 004d1f20
        ;   Label: core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
    FCOMP float ptr [0x02d7b7f0]        ; 004d1f24 | DAT_02d7b7f0
    FNSTSW AX                           ; 004d1f2a
    SAHF                                ; 004d1f2c
    JC 0x004d1f42                       ; 004d1f2d
        ;   XREF to: 004d1f42 (CONDITIONAL_JUMP)  ; LAB_004d1f42
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d1f2f
    FLD float ptr [ESP + 0x8]           ; 004d1f33
    FCOMP float ptr [EAX + 0x15c]       ; 004d1f37
    FNSTSW AX                           ; 004d1f3d
    SAHF                                ; 004d1f3f
    JC 0x004d1f43                       ; 004d1f40
        ;   XREF to: 004d1f43 (CONDITIONAL_JUMP)  ; LAB_004d1f43
    RET                                 ; 004d1f42
        ;   Label: LAB_004d1f42
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 004d1f43
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   Label: LAB_004d1f43
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d1f48
    ADD EAX,0x490                       ; 004d1f4c
    PUSH EAX                            ; 004d1f51
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940 ; 004d1f52
        ;   XREF to: 005a8940 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 004d1f57
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d1f5a
    PUSH EDX                            ; 004d1f5e
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 004d1f5f
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 004d1f64
    JMP 0x005a8cb0                      ; 004d1f67
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)

