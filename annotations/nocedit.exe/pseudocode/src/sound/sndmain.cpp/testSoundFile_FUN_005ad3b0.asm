; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * sound_sndmain.cpp_testSoundFile_FUN_005ad3b0(char * sample_name)
;
; Parameters:
; char *           Stack[0x4]:4   sample_name
; Local Variables:
; undefined1       Stack[-0x170]:1  local_170
; undefined1       Stack[-0x16f]:1  local_16f
; undefined4       Stack[-0x60]:4  local_60
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 at 005adb55
;
; Referenced Globals:
;   TerminatedCString s_Can_t_get_sample_info_fo_00651233
;   TerminatedCString s_Sample_s_has_unknown_or__00651250
;   TerminatedCString s_Error_playing_s_00651278
;   TerminatedCString s_Canceled_00651289
;   CKeys* g_CKeysPtr = 02dcd7d4
;   void* g_CKeysPtr
;   char[220] g_SoundTestErrorBuffer
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   sound_sndmain.cpp_CSfxSample_init_FUN_005a8480
;   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0
;   sound_sndmain.cpp_set3DListenerPos_FUN_005aa020
;   sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_005a8a80
;   sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0
;   sound_sndmain.cpp_startSfx_FUN_005a8e90
;   wincore_winrun.cpp_sleep_FUN_005f40e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad3b0
        ;   Label: sound_sndmain.cpp_testSoundFile_FUN_005ad3b0
    PUSH ESI                            ; 005ad3b1
    PUSH EDI                            ; 005ad3b2
    PUSH EBP                            ; 005ad3b3
    MOV EBP,ESP                         ; 005ad3b4
    SUB ESP,0x160                       ; 005ad3b6
    AND ESP,0xfffffff8                  ; 005ad3bc
    MOV EAX,ESP                         ; 005ad3bf
    PUSH EAX                            ; 005ad3c1
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_005a8480 ; 005ad3c2 | CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_005a8480(CSfxSample * this_ptr)
        ;   XREF to: 005a8480 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ad3c7
    MOV EDI,ESP                         ; 005ad3ca
    MOV ESI,dword ptr [EBP + 0x14]      ; 005ad3cc
    PUSH EDI                            ; 005ad3cf
    MOV AL,byte ptr [ESI]               ; 005ad3d0
        ;   Label: LAB_005ad3d0
    MOV byte ptr [EDI],AL               ; 005ad3d2
    CMP AL,0x0                          ; 005ad3d4
    JZ 0x005ad3e8                       ; 005ad3d6 | LAB_005ad3e8
        ;   XREF to: 005ad3e8 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005ad3d8
    ADD ESI,0x2                         ; 005ad3db
    MOV byte ptr [EDI + 0x1],AL         ; 005ad3de
    ADD EDI,0x2                         ; 005ad3e1
    CMP AL,0x0                          ; 005ad3e4
    JNZ 0x005ad3d0                      ; 005ad3e6 | LAB_005ad3d0
        ;   XREF to: 005ad3d0 (CONDITIONAL_JUMP)
    POP EDI                             ; 005ad3e8
        ;   Label: LAB_005ad3e8
    MOV EAX,ESP                         ; 005ad3e9
    PUSH EAX                            ; 005ad3eb
    CALL sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 ; 005ad3ec | int sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0(CSfxSample * out_sample)
        ;   XREF to: 005aa3f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ad3f1
    TEST EAX,EAX                        ; 005ad3f4
    JZ 0x005ad4e8                       ; 005ad3f6 | LAB_005ad4e8
        ;   XREF to: 005ad4e8 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x110],0x0     ; 005ad3fc
    JLE 0x005ad505                      ; 005ad404 | LAB_005ad505
        ;   XREF to: 005ad505 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005ad40a
    PUSH 0x0                            ; 005ad40c
    PUSH 0x0                            ; 005ad40e
    PUSH 0x0                            ; 005ad410
    PUSH 0x0                            ; 005ad412
    PUSH 0x0                            ; 005ad414
    CALL sound_sndmain.cpp_set3DListenerPos_FUN_005aa020 ; 005ad416 | void sound_sndmain.cpp_set3DListenerPos_FUN_005aa020(double pos_x, double pos_y, double pos_z)
        ;   XREF to: 005aa020 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005ad41b
    PUSH 0x3ff00000                     ; 005ad41e
    PUSH 0x0                            ; 005ad423
    PUSH 0x0                            ; 005ad425
    PUSH 0x0                            ; 005ad427
    PUSH 0x0                            ; 005ad429
    PUSH 0x0                            ; 005ad42b
    PUSH 0x0                            ; 005ad42d
    PUSH 0x0                            ; 005ad42f
    PUSH 0x3ff00000                     ; 005ad431
    PUSH 0x0                            ; 005ad436
    PUSH 0x0                            ; 005ad438
    PUSH 0x0                            ; 005ad43a
    PUSH 0x0                            ; 005ad43c
    PUSH 0x0                            ; 005ad43e
    PUSH 0x0                            ; 005ad440
    PUSH 0x0                            ; 005ad442
    PUSH 0x3ff00000                     ; 005ad444
    PUSH 0x0                            ; 005ad449
    CALL sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0 ; 005ad44b | void sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0(double front_x, double front_y, double front_z, double up_x, ...)
        ;   XREF to: 005aa0a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x48                        ; 005ad450
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005ad453 | void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
    PUSH 0x40340000                     ; 005ad458
    PUSH 0x0                            ; 005ad45d
    PUSH 0x0                            ; 005ad45f
    PUSH 0x0                            ; 005ad461
    PUSH 0x0                            ; 005ad463
    PUSH 0x0                            ; 005ad465
    CALL sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0 ; 005ad467 | void sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0(double pos_x, double pos_y, double pos_z)
        ;   XREF to: 005a88e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005ad46c
    PUSH 0x41200000                     ; 005ad46f
    CALL sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_005a8a80 ; 005ad474 | void sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_005a8a80(float base_frequency)
        ;   XREF to: 005a8a80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ad479
    MOV EBX,dword ptr [EBP + 0x14]      ; 005ad47c
    PUSH EBX                            ; 005ad47f
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005ad480 | uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ad485
    MOV ESI,EAX                         ; 005ad488
    MOV EBX,EAX                         ; 005ad48a
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005ad48c | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    TEST ESI,ESI                        ; 005ad491
    JZ 0x005ad522                       ; 005ad493 | LAB_005ad522
        ;   XREF to: 005ad522 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005ad499
    PUSH ESI                            ; 005ad49b
    CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720 ; 005ad49c | double sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720(uint sfx_handle, uint output_format)
        ;   XREF to: 005a9720 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x158],EAX     ; 005ad4a1
    MOV dword ptr [ESP + 0x15c],EDX     ; 005ad4a8
    FLD double ptr [ESP + 0x158]        ; 005ad4af
    ADD ESP,0x8                         ; 005ad4b6
    FLDZ                                ; 005ad4b9
    FXCH                                ; 005ad4bb
    FSTP float ptr [ESP + 0x158]        ; 005ad4bd
    FCOMP float ptr [ESP + 0x158]       ; 005ad4c4
    FNSTSW AX                           ; 005ad4cb
    SAHF                                ; 005ad4cd
    JA 0x005ad4df                       ; 005ad4ce | LAB_005ad4df
        ;   XREF to: 005ad4df (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005ad4d0
    PUSH EBX                            ; 005ad4d2
        ;   Label: LAB_005ad4d2
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005ad4d3 | int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ad4d8
    TEST EAX,EAX                        ; 005ad4db
    JNZ 0x005ad53f                      ; 005ad4dd | LAB_005ad53f
        ;   XREF to: 005ad53f (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005ad4df
        ;   Label: LAB_005ad4df
    MOV ESP,EBP                         ; 005ad4e1
        ;   Label: LAB_005ad4e1
    POP EBP                             ; 005ad4e3
    POP EDI                             ; 005ad4e4
    POP ESI                             ; 005ad4e5
    POP EBX                             ; 005ad4e6
    RET                                 ; 005ad4e7
    MOV EDX,dword ptr [EBP + 0x14]      ; 005ad4e8
        ;   Label: LAB_005ad4e8
    PUSH EDX                            ; 005ad4eb
    PUSH 0x651233                       ; 005ad4ec | = "Can't get sample info for %s" | s_Can_t_get_sample_info_fo_00651233 = Can't get sample info for %s
    PUSH 0x3f5d8a0                      ; 005ad4f1 | char[220] g_SoundTestErrorBuffer
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005ad4f6 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV EAX,0x3f5d8a0                   ; 005ad4fb | char[220] g_SoundTestErrorBuffer
    ADD ESP,0xc                         ; 005ad500
    JMP 0x005ad4e1                      ; 005ad503 | LAB_005ad4e1
        ;   XREF to: 005ad4e1 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x14]      ; 005ad505
        ;   Label: LAB_005ad505
    PUSH EDI                            ; 005ad508
    PUSH 0x651250                       ; 005ad509 | = "Sample %s has unknown or invalid length" | s_Sample_s_has_unknown_or__00651250 = Sample %s has unknown or invalid length
    PUSH 0x3f5d8a0                      ; 005ad50e | char[220] g_SoundTestErrorBuffer
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005ad513 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV EAX,0x3f5d8a0                   ; 005ad518 | char[220] g_SoundTestErrorBuffer
    ADD ESP,0xc                         ; 005ad51d
    JMP 0x005ad4e1                      ; 005ad520 | LAB_005ad4e1
        ;   XREF to: 005ad4e1 (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBP + 0x14]      ; 005ad522
        ;   Label: LAB_005ad522
    PUSH ESI                            ; 005ad525
    PUSH 0x651278                       ; 005ad526 | = "Error playing %s" | s_Error_playing_s_00651278 = Error playing %s
    PUSH 0x3f5d8a0                      ; 005ad52b | char[220] g_SoundTestErrorBuffer
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005ad530 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV EAX,0x3f5d8a0                   ; 005ad535 | char[220] g_SoundTestErrorBuffer
    ADD ESP,0xc                         ; 005ad53a
    JMP 0x005ad4e1                      ; 005ad53d | LAB_005ad4e1
        ;   XREF to: 005ad4e1 (UNCONDITIONAL_JUMP)
    PUSH 0x1                            ; 005ad53f
        ;   Label: LAB_005ad53f
    MOV EAX,[0x0067cf44]                ; 005ad541 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 005ad546 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005ad547 | void * g_CKeysPtr
    CALL dword ptr [EDX]                ; 005ad549
    ADD ESP,0x8                         ; 005ad54b
    TEST EAX,EAX                        ; 005ad54e
    JZ 0x005ad55e                       ; 005ad550 | LAB_005ad55e
        ;   XREF to: 005ad55e (CONDITIONAL_JUMP)
    MOV EAX,0x651289                    ; 005ad552 | = "Canceled" | s_Canceled_00651289 = Canceled
    MOV ESP,EBP                         ; 005ad557
    POP EBP                             ; 005ad559
    POP EDI                             ; 005ad55a
    POP ESI                             ; 005ad55b
    POP EBX                             ; 005ad55c
    RET                                 ; 005ad55d
    PUSH ESI                            ; 005ad55e
        ;   Label: LAB_005ad55e
    PUSH EBX                            ; 005ad55f
    CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720 ; 005ad560 | double sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720(uint sfx_handle, uint output_format)
        ;   XREF to: 005a9720 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x158],EAX     ; 005ad565
    MOV dword ptr [ESP + 0x15c],EDX     ; 005ad56c
    FLD double ptr [ESP + 0x158]        ; 005ad573
    ADD ESP,0x8                         ; 005ad57a
    FST float ptr [ESP + 0x15c]         ; 005ad57d
    FCOMP float ptr [ESP + 0x158]       ; 005ad584
    FNSTSW AX                           ; 005ad58b
    SAHF                                ; 005ad58d
    JC 0x005ad4df                       ; 005ad58e | LAB_005ad4df
        ;   XREF to: 005ad4df (CONDITIONAL_JUMP)
    PUSH 0x3fa99999                     ; 005ad594
    MOV EAX,dword ptr [ESP + 0x160]     ; 005ad599
    PUSH 0x9999999a                     ; 005ad5a0
    MOV dword ptr [ESP + 0x160],EAX     ; 005ad5a5
    CALL wincore_winrun.cpp_sleep_FUN_005f40e0 ; 005ad5ac | void wincore_winrun.cpp_sleep_FUN_005f40e0(double seconds)
        ;   XREF to: 005f40e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005ad5b1
    JMP 0x005ad4d2                      ; 005ad5b4 | LAB_005ad4d2
        ;   XREF to: 005ad4d2 (UNCONDITIONAL_JUMP)

