; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_unlockSound_FUN_00528890(void)
;
;
; XREF[22]:
;   FUN_005278e0 at 00527905
;   FUN_005464a0 at 005466e4
;   sound_sndmain.cpp_enableSfxChannel_FUN_00527410 at 0052747d
;   sound_sndmain.cpp_enableSoundSystem_FUN_00527e40 at 0052805d
;   sound_sndmain.cpp_freeAllSamples_FUN_00527c30 at 00527c5a
;   sound_sndmain.cpp_getSampleInfo_FUN_005279e0 at 00527a0f
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00526d10 at 00526d78
;   sound_sndmain.cpp_getSfxSampleInfo_FUN_00526cd0 at 00526cf4
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 at 0052352e
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230 at 0052824b
;   ... and 12 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00593979
;   TerminatedCString s_unlockSound_sound_was_no_0059398e
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02dc84b8
;   undefined4 DAT_02dc84bc
;
; Called Functions:
;   FUN_004c8440
;   wincore_winrun.cpp_releaseMutex_FUN_00559c30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00528890
        ;   Label: sound_sndmain.cpp_unlockSound_FUN_00528890
    PUSH EDI                            ; 00528891
    CMP dword ptr [0x02dc84bc],0x1      ; 00528892 | DAT_02dc84bc
    JL 0x005288ba                       ; 00528899
        ;   XREF to: 005288ba (CONDITIONAL_JUMP)  ; LAB_005288ba
    MOV EDI,dword ptr [0x02dc84bc]      ; 0052889b | DAT_02dc84bc
        ;   Label: LAB_0052889b
    MOV ESI,dword ptr [0x02dc84b8]      ; 005288a1 | DAT_02dc84b8
    DEC EDI                             ; 005288a7
    PUSH ESI                            ; 005288a8
    MOV dword ptr [0x02dc84bc],EDI      ; 005288a9 | DAT_02dc84bc
    CALL wincore_winrun.cpp_releaseMutex_FUN_00559c30 ; 005288af
        ;   XREF to: 00559c30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_releaseMutex_FUN_00559c30()
    ADD ESP,0x4                         ; 005288b4
    POP EDI                             ; 005288b7
    POP ESI                             ; 005288b8
    RET                                 ; 005288b9
    PUSH EBX                            ; 005288ba
        ;   Label: LAB_005288ba
    MOV ECX,0x593979                    ; 005288bb | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x130d                      ; 005288c0
    PUSH 0x59398e                       ; 005288c5 | = "unlockSound - sound was not locked!"
    MOV dword ptr [0x01cc4800],ECX      ; 005288ca | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 005288d0 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005288d6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005288db
    POP EBX                             ; 005288de
    JMP 0x0052889b                      ; 005288df
        ;   XREF to: 0052889b (UNCONDITIONAL_JUMP)  ; LAB_0052889b

