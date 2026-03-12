; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_CSfxSample_pollStream_FUN_005a6730(CSfxSample *this_ptr,float time_window,float update_interval)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   time_window
; float            Stack[0xc]:4   update_interval
; Local Variables:
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; SIZE_T           Stack[-0x28]:4  local_28
; SIZE_T           Stack[-0x14]:4  local_14
;
; XREF[2]:
;   sound_sndmain.cpp_pollAllStreams_FUN_005ace90 at 005acede
;   sound_sndmain.cpp_startSfx_FUN_005a8e90 at 005a90ea
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0064fc6b
;   TerminatedCString s_generateSilence_invalid__0064fc80
;   TerminatedCString s_sound_sndmain_cpp_0064feea
;   TerminatedCString s_SfxSlot_pollStream_must__0064feff
;   TerminatedCString s_sound_sndmain_cpp_0064ff25
;   TerminatedCString s_SfxSample_pollStream_my__0064ff3a
;   TerminatedCString s_SfxSample_pollStream_no__0064ff6f
;   TerminatedCString s_sound_sndmain_cpp_0064ff99
;   TerminatedCString s_SfxSample_pollStream_can_0064ffae
;   TerminatedCString s_SfxSample_pollStream_err_0064fff7
;   TerminatedCString s_sound_sndmain_cpp_00650035
;   TerminatedCString s_nextLoadSampleDest_d_all_0065004a
;   TerminatedCString s_Error_locking_s_while_st_00650074
;   TerminatedCString s_sound_sndmain_cpp_00650096
;   TerminatedCString s_Can_t_stream_unless_we_h_006500ab
;   ... and 17 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c_fread_FUN_005fd990
;   sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
;   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
;   sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0
;   sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430
;   sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540
;   sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
;   sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6730
        ;   Label: sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730
    PUSH ESI                            ; 005a6731
    PUSH EDI                            ; 005a6732
    PUSH EBP                            ; 005a6733
    SUB ESP,0x24                        ; 005a6734
    MOV EBX,dword ptr [ESP + 0x38]      ; 005a6737
    CMP dword ptr [0x03f6940c],0x0      ; 005a673b | g_SoundLockCount
    JLE 0x005a6a02                      ; 005a6742
        ;   XREF to: 005a6a02 (CONDITIONAL_JUMP)  ; LAB_005a6a02
    MOV EDI,dword ptr [EBX + 0x15c]     ; 005a6748
        ;   Label: LAB_005a6748
    TEST EDI,EDI                        ; 005a674e
    JL 0x005a6a2a                       ; 005a6750
        ;   XREF to: 005a6a2a (CONDITIONAL_JUMP)  ; LAB_005a6a2a
    LEA EAX,[EDI*0x8 + 0x0]             ; 005a6756
    ADD EAX,EDI                         ; 005a675d
    SHL EAX,0x2                         ; 005a675f
    ADD EAX,EDI                         ; 005a6762
    MOV ECX,0x3f5daa4                   ; 005a6764 | g_SfxSlots
    SHL EAX,0x3                         ; 005a6769
    ADD ECX,EAX                         ; 005a676c
    MOV EBP,dword ptr [ECX + 0x74]      ; 005a676e | g_SfxSlots[0].field7_0x74
    MOV dword ptr [ESP + 0x18],ECX      ; 005a6771
    TEST EBP,EBP                        ; 005a6775
    JNZ 0x005a6a37                      ; 005a6777
        ;   XREF to: 005a6a37 (CONDITIONAL_JUMP)  ; LAB_005a6a37
    MOV ECX,0x64ff25                    ; 005a677d | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a677d
    MOV ESI,0x7d1                       ; 005a6782
    PUSH 0x64ff3a                       ; 005a6787 | = "SfxSample::pollStream - my sfx isn't ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005a678c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005a6792 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a6798
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a679d
    CMP dword ptr [0x03f69268],0x0      ; 005a67a0 | g_CSoundDevicePtr
        ;   Label: LAB_005a67a0
    JZ 0x005a6a45                       ; 005a67a7
        ;   XREF to: 005a6a45 (CONDITIONAL_JUMP)  ; LAB_005a6a45
    CMP dword ptr [EBX + 0x124],0x1     ; 005a67ad
    JZ 0x005a67d9                       ; 005a67b4
        ;   XREF to: 005a67d9 (CONDITIONAL_JUMP)  ; LAB_005a67d9
    PUSH EBX                            ; 005a67b6
    MOV EAX,0x64ff99                    ; 005a67b7 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x7e2                       ; 005a67bc
    PUSH 0x64ffae                       ; 005a67c1 | = "SfxSample::pollStream - cannot stream..."
    MOV [0x02f0ca48],EAX                ; 005a67c6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005a67cb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a67d1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005a67d6
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a67d9
        ;   Label: LAB_005a67d9
    CMP dword ptr [EAX + 0x70],0x0      ; 005a67dd | DAT_03f5db14
    JZ 0x005a6820                       ; 005a67e1
        ;   XREF to: 005a6820 (CONDITIONAL_JUMP)  ; LAB_005a6820
    PUSH EAX                            ; 005a67e3
    CALL sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0 ; 005a67e4
        ;   XREF to: 005a80e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 005a67e9
    TEST EAX,EAX                        ; 005a67ec
    JZ 0x005a6a54                       ; 005a67ee
        ;   XREF to: 005a6a54 (CONDITIONAL_JUMP)  ; LAB_005a6a54
    PUSH EBX                            ; 005a67f4
    CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0 ; 005a67f5
        ;   XREF to: 005a87d0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a67fa
    TEST EAX,EAX                        ; 005a67fd
    JNZ 0x005a6820                      ; 005a67ff
        ;   XREF to: 005a6820 (CONDITIONAL_JUMP)  ; LAB_005a6820
    CMP dword ptr [EBX + 0x110],0x0     ; 005a6801
    JL 0x005a6820                       ; 005a6808
        ;   XREF to: 005a6820 (CONDITIONAL_JUMP)  ; LAB_005a6820
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a680a
    FILD dword ptr [EBX + 0x110]        ; 005a680e
    FCOMP double ptr [EAX + 0x60]       ; 005a6814 | g_SfxSlots[0].field_20[76]
    FNSTSW AX                           ; 005a6817
    SAHF                                ; 005a6819
    JBE 0x005a69e2                      ; 005a681a
        ;   XREF to: 005a69e2 (CONDITIONAL_JUMP)  ; LAB_005a69e2
    FILD dword ptr [EBX + 0x10c]        ; 005a6820
        ;   Label: LAB_005a6820
    FMUL float ptr [ESP + 0x3c]         ; 005a6826
    MOV EBP,dword ptr [EBX + 0x160]     ; 005a682a
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a6830
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x4]         ; 005a6835
    CMP EBP,dword ptr [ESP + 0x4]       ; 005a6839
    JGE 0x005a6843                      ; 005a683d
        ;   XREF to: 005a6843 (CONDITIONAL_JUMP)  ; LAB_005a6843
    MOV dword ptr [ESP + 0x4],EBP       ; 005a683f
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a6843
        ;   Label: LAB_005a6843
    FILD dword ptr [EBX + 0x168]        ; 005a6847
    FSUB double ptr [EAX + 0x11c]       ; 005a684d | g_SfxSlots[0].field_284[0]
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a6853
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 005a6858
    CMP dword ptr [ESP + 0x8],0x0       ; 005a685c
    JL 0x005a6a66                       ; 005a6861
        ;   XREF to: 005a6a66 (CONDITIONAL_JUMP)  ; LAB_005a6a66
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a6867
        ;   Label: LAB_005a6867
    CMP EAX,dword ptr [ESP + 0x4]       ; 005a686b
    JGE 0x005a6a2a                      ; 005a686f
        ;   XREF to: 005a6a2a (CONDITIONAL_JUMP)  ; LAB_005a6a2a
    MOV ESI,0x5f5e0ff                   ; 005a6875
    MOV EDI,dword ptr [EBX + 0x158]     ; 005a687a
    MOV dword ptr [ESP + 0xc],ESI       ; 005a6880
    TEST EDI,EDI                        ; 005a6884
    JZ 0x005a68a3                       ; 005a6886
        ;   XREF to: 005a68a3 (CONDITIONAL_JUMP)  ; LAB_005a68a3
    PUSH EBX                            ; 005a6888
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550 ; 005a6889
        ;   XREF to: 005a8550 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample * this_ptr)
    MOV ECX,EAX                         ; 005a688e
    MOV EAX,0x3c00                      ; 005a6890
    MOV EDX,EAX                         ; 005a6895
    SAR EDX,0x1f                        ; 005a6897
    IDIV ECX                            ; 005a689a
    ADD ESP,0x4                         ; 005a689c
    MOV dword ptr [ESP + 0xc],EAX       ; 005a689f
    FILD dword ptr [EBX + 0x10c]        ; 005a68a3
        ;   Label: LAB_005a68a3
    MOV EAX,dword ptr [EBX + 0x160]     ; 005a68a9
    FMUL float ptr [ESP + 0x40]         ; 005a68af
    DEC EAX                             ; 005a68b3
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a68b4
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 005a68b9
    CMP EAX,dword ptr [ESP]             ; 005a68bc
    JGE 0x005a68c4                      ; 005a68bf
        ;   XREF to: 005a68c4 (CONDITIONAL_JUMP)  ; LAB_005a68c4
    MOV dword ptr [ESP],EAX             ; 005a68c1
    MOV EAX,dword ptr [ESP]             ; 005a68c4
        ;   Label: LAB_005a68c4
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a68c7
    SUB EAX,EDX                         ; 005a68cb
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a68cd
    TEST EAX,EAX                        ; 005a68d1
    JLE 0x005a6bf2                      ; 005a68d3
        ;   XREF to: 005a6bf2 (CONDITIONAL_JUMP)  ; LAB_005a6bf2
    MOV EDI,dword ptr [EBX + 0x168]     ; 005a68d9
        ;   Label: LAB_005a68d9
    TEST EDI,EDI                        ; 005a68df
    JL 0x005a68eb                       ; 005a68e1
        ;   XREF to: 005a68eb (CONDITIONAL_JUMP)  ; LAB_005a68eb
    CMP EDI,dword ptr [EBX + 0x160]     ; 005a68e3
    JL 0x005a691b                       ; 005a68e9
        ;   XREF to: 005a691b (CONDITIONAL_JUMP)  ; LAB_005a691b
    MOV ECX,dword ptr [EBX + 0x160]     ; 005a68eb
        ;   Label: LAB_005a68eb
    PUSH ECX                            ; 005a68f1
    MOV ESI,dword ptr [EBX + 0x168]     ; 005a68f2
    PUSH ESI                            ; 005a68f8
    MOV EAX,0x650035                    ; 005a68f9 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x827                       ; 005a68fe
    PUSH 0x65004a                       ; 005a6903 | = "nextLoadSampleDest = %d, allocLength ..."
    MOV [0x02f0ca48],EAX                ; 005a6908 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005a690d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a6913
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 005a6918
    MOV EDI,dword ptr [EBX + 0x168]     ; 005a691b
        ;   Label: LAB_005a691b
    MOV EBP,dword ptr [EBX + 0x160]     ; 005a6921
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a6927
    SUB EBP,EDI                         ; 005a692b
    CMP EBP,EAX                         ; 005a692d
    JLE 0x005a6933                      ; 005a692f
        ;   XREF to: 005a6933 (CONDITIONAL_JUMP)  ; LAB_005a6933
    MOV EBP,EAX                         ; 005a6931
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a6933
        ;   Label: LAB_005a6933
    CMP EBP,EDX                         ; 005a6937
    JLE 0x005a693d                      ; 005a6939
        ;   XREF to: 005a693d (CONDITIONAL_JUMP)  ; LAB_005a693d
    MOV EBP,EDX                         ; 005a693b
    MOV ECX,dword ptr [EBX + 0x110]     ; 005a693d
        ;   Label: LAB_005a693d
    XOR EDI,EDI                         ; 005a6943
    TEST ECX,ECX                        ; 005a6945
    JL 0x005a6997                       ; 005a6947
        ;   XREF to: 005a6997 (CONDITIONAL_JUMP)  ; LAB_005a6997
    CMP ECX,dword ptr [EBX + 0x164]     ; 005a6949
    JG 0x005a6a92                       ; 005a694f
        ;   XREF to: 005a6a92 (CONDITIONAL_JUMP)  ; LAB_005a6a92
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a6955
    MOV ECX,dword ptr [EAX + 0x78]      ; 005a6959 | DAT_03f5db1c
    PUSH ECX                            ; 005a695c
    CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0 ; 005a695d
        ;   XREF to: 005a87d0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a6962
    TEST EAX,EAX                        ; 005a6965
    JZ 0x005a6a7b                       ; 005a6967
        ;   XREF to: 005a6a7b (CONDITIONAL_JUMP)  ; LAB_005a6a7b
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a696d
    MOV EAX,dword ptr [EAX + 0x78]      ; 005a6971 | DAT_03f5db1c
    MOV ECX,dword ptr [EAX + 0x110]     ; 005a6974
    CMP ECX,dword ptr [EAX + 0x160]     ; 005a697a
    JZ 0x005a6a7b                       ; 005a6980
        ;   XREF to: 005a6a7b (CONDITIONAL_JUMP)  ; LAB_005a6a7b
    MOV EDX,dword ptr [EBX + 0x168]     ; 005a6986
    PUSH EDX                            ; 005a698c
    PUSH EDI                            ; 005a698d
    PUSH EAX                            ; 005a698e
    CALL sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0 ; 005a698f
        ;   XREF to: 005a65a0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0(CSfxSample * this_ptr, int playback_position, int dest_buffer_offset)
    ADD ESP,0xc                         ; 005a6994
    MOV ECX,0x1                         ; 005a6997
        ;   Label: LAB_005a6997
    MOV ESI,0x3f51648                   ; 005a699c | g_SfxStreamReadBuffer
    XOR EAX,EAX                         ; 005a69a1
    MOV EDX,dword ptr [EBX + 0x158]     ; 005a69a3
    MOV dword ptr [ESP + 0x14],EAX      ; 005a69a9
    MOV dword ptr [ESP + 0x10],ECX      ; 005a69ad
    TEST EDX,EDX                        ; 005a69b1
    JNZ 0x005a6ab8                      ; 005a69b3
        ;   XREF to: 005a6ab8 (CONDITIONAL_JUMP)  ; LAB_005a6ab8
    PUSH EBP                            ; 005a69b9
    MOV ECX,dword ptr [EBX + 0x168]     ; 005a69ba
    PUSH ECX                            ; 005a69c0
    PUSH EBX                            ; 005a69c1
    CALL sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430 ; 005a69c2
        ;   XREF to: 005a6430 (UNCONDITIONAL_CALL)  ; void * sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430(CSfxSample * this_ptr, int lock_offset, int lock_length)
    ADD ESP,0xc                         ; 005a69c7
    MOV ESI,EAX                         ; 005a69ca
    TEST EAX,EAX                        ; 005a69cc
    JNZ 0x005a6aa9                      ; 005a69ce
        ;   XREF to: 005a6aa9 (CONDITIONAL_JUMP)  ; LAB_005a6aa9
    PUSH EBX                            ; 005a69d4
    PUSH 0x650074                       ; 005a69d5 | = "Error locking %s while streaming\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a69da
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
        ;   Label: LAB_005a69da
    ADD ESP,0x8                         ; 005a69df
    MOV EBP,dword ptr [ESP + 0x18]      ; 005a69e2
        ;   Label: LAB_005a69e2
    PUSH EBP                            ; 005a69e6
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60 ; 005a69e7
        ;   XREF to: 005a7e60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot * slot)
    ADD ESP,0x4                         ; 005a69ec
    PUSH EBX                            ; 005a69ef
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 ; 005a69f0
        ;   XREF to: 005a62c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a69f5
    XOR EAX,EAX                         ; 005a69f8
    ADD ESP,0x24                        ; 005a69fa
    POP EBP                             ; 005a69fd
    POP EDI                             ; 005a69fe
    POP ESI                             ; 005a69ff
    POP EBX                             ; 005a6a00
    RET                                 ; 005a6a01
    MOV ECX,0x64feea                    ; 005a6a02 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a6a02
    MOV ESI,0x7c4                       ; 005a6a07
    PUSH 0x64feff                       ; 005a6a0c | = "SfxSlot::pollStream - must be locked!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005a6a11 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005a6a17 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a6a1d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a6a22
    JMP 0x005a6748                      ; 005a6a25
        ;   XREF to: 005a6748 (UNCONDITIONAL_JUMP)  ; LAB_005a6748
    MOV EAX,0x1                         ; 005a6a2a
        ;   Label: LAB_005a6a2a
    ADD ESP,0x24                        ; 005a6a2f
    POP EBP                             ; 005a6a32
    POP EDI                             ; 005a6a33
    POP ESI                             ; 005a6a34
    POP EBX                             ; 005a6a35
    RET                                 ; 005a6a36
    CMP EBX,dword ptr [ECX + 0x78]      ; 005a6a37 | DAT_03f5db1c
        ;   Label: LAB_005a6a37
    JNZ 0x005a677d                      ; 005a6a3a
        ;   XREF to: 005a677d (CONDITIONAL_JUMP)  ; LAB_005a677d
    JMP 0x005a67a0                      ; 005a6a40
        ;   XREF to: 005a67a0 (UNCONDITIONAL_JUMP)  ; LAB_005a67a0
    PUSH 0x64ff6f                       ; 005a6a45 | = "SfxSample::pollStream - no sound devi..."
        ;   Label: LAB_005a6a45
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a6a4a
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005a6a4f
    JMP 0x005a69e2                      ; 005a6a52
        ;   XREF to: 005a69e2 (UNCONDITIONAL_JUMP)  ; LAB_005a69e2
    PUSH 0x64fff7                       ; 005a6a54 | = "SfxSample::pollStream - error querryi..."
        ;   Label: LAB_005a6a54
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a6a59
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005a6a5e
    JMP 0x005a69e2                      ; 005a6a61
        ;   XREF to: 005a69e2 (UNCONDITIONAL_JUMP)  ; LAB_005a69e2
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a6a66
        ;   Label: LAB_005a6a66
    MOV EAX,dword ptr [EBX + 0x160]     ; 005a6a6a
    ADD EDX,EAX                         ; 005a6a70
    MOV dword ptr [ESP + 0x8],EDX       ; 005a6a72
    JMP 0x005a6867                      ; 005a6a76
        ;   XREF to: 005a6867 (UNCONDITIONAL_JUMP)  ; LAB_005a6867
    CMP dword ptr [EBX + 0x158],0x0     ; 005a6a7b
        ;   Label: LAB_005a6a7b
    JZ 0x005a6bf2                       ; 005a6a82
        ;   XREF to: 005a6bf2 (CONDITIONAL_JUMP)  ; LAB_005a6bf2
    MOV EDI,0x1                         ; 005a6a88
    JMP 0x005a6997                      ; 005a6a8d
        ;   XREF to: 005a6997 (UNCONDITIONAL_JUMP)  ; LAB_005a6997
    MOV EAX,ECX                         ; 005a6a92
        ;   Label: LAB_005a6a92
    SUB EAX,dword ptr [EBX + 0x164]     ; 005a6a94
    CMP EBP,EAX                         ; 005a6a9a
    JLE 0x005a6997                      ; 005a6a9c
        ;   XREF to: 005a6997 (CONDITIONAL_JUMP)  ; LAB_005a6997
    MOV EBP,EAX                         ; 005a6aa2
    JMP 0x005a6997                      ; 005a6aa4
        ;   XREF to: 005a6997 (UNCONDITIONAL_JUMP)  ; LAB_005a6997
    XOR EDX,EDX                         ; 005a6aa9
        ;   Label: LAB_005a6aa9
    MOV EAX,0x1                         ; 005a6aab
    MOV dword ptr [ESP + 0x10],EDX      ; 005a6ab0
    MOV dword ptr [ESP + 0x14],EAX      ; 005a6ab4
    TEST EDI,EDI                        ; 005a6ab8
        ;   Label: LAB_005a6ab8
    JZ 0x005a6c32                       ; 005a6aba
        ;   XREF to: 005a6c32 (CONDITIONAL_JUMP)  ; LAB_005a6c32
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a6ac0
    MOV EAX,dword ptr [EAX + 0x78]      ; 005a6ac4 | DAT_03f5db1c
    MOV ECX,dword ptr [EAX + 0x108]     ; 005a6ac7
    IMUL ECX,EBP                        ; 005a6acd
    MOV EAX,dword ptr [EAX + 0x104]     ; 005a6ad0
    CMP EAX,0x8                         ; 005a6ad6
    JNC 0x005a6c26                      ; 005a6ad9
        ;   XREF to: 005a6c26 (CONDITIONAL_JUMP)  ; LAB_005a6c26
    MOV ESI,0x64fc6b                    ; 005a6adf | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a6adf
    MOV EDI,0x5ca                       ; 005a6ae4
    PUSH 0x64fc80                       ; 005a6ae9 | = "generateSilence - invalid bit depth!"
    MOV dword ptr [0x02f0ca48],ESI      ; 005a6aee | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005a6af4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a6afa
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a6aff
    MOV dword ptr [ESP + 0x20],EBP      ; 005a6b02
        ;   Label: LAB_005a6b02
    CMP dword ptr [ESP + 0x10],0x0      ; 005a6b06
        ;   Label: LAB_005a6b06
    JZ 0x005a6cc9                       ; 005a6b0b
        ;   XREF to: 005a6cc9 (CONDITIONAL_JUMP)  ; LAB_005a6cc9
    MOV EDX,dword ptr [ESP + 0x20]      ; 005a6b11
    TEST EDX,EDX                        ; 005a6b15
    JLE 0x005a6cc9                      ; 005a6b17
        ;   XREF to: 005a6cc9 (CONDITIONAL_JUMP)  ; LAB_005a6cc9
    PUSH EDX                            ; 005a6b1d
    MOV EDI,dword ptr [EBX + 0x168]     ; 005a6b1e
    PUSH EDI                            ; 005a6b24
    PUSH EBX                            ; 005a6b25
    CALL sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430 ; 005a6b26
        ;   XREF to: 005a6430 (UNCONDITIONAL_CALL)  ; void * sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430(CSfxSample * this_ptr, int lock_offset, int lock_length)
    MOV EDI,EAX                         ; 005a6b2b
    ADD ESP,0xc                         ; 005a6b2d
    TEST EAX,EAX                        ; 005a6b30
    JZ 0x005a6cbe                       ; 005a6b32
        ;   XREF to: 005a6cbe (CONDITIONAL_JUMP)  ; LAB_005a6cbe
    PUSH EBX                            ; 005a6b38
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550 ; 005a6b39
        ;   XREF to: 005a8550 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a6b3e
    MOV ECX,dword ptr [ESP + 0x20]      ; 005a6b41
    IMUL ECX,EAX                        ; 005a6b45
    MOV ESI,0x3f51648                   ; 005a6b48 | g_SfxStreamReadBuffer
    PUSH EDI                            ; 005a6b4d
    MOV EAX,ECX                         ; 005a6b4e
    SHR ECX,0x2                         ; 005a6b50
    MOVSD.REP ES:EDI,ESI                ; 005a6b53 | g_SfxStreamReadBuffer | DAT_03f5164c
    MOV CL,AL                           ; 005a6b55
    AND CL,0x3                          ; 005a6b57
    MOVSB.REP ES:EDI,ESI                ; 005a6b5a | g_SfxStreamReadBuffer | DAT_03f5164c | DAT_03f5164d
    POP EDI                             ; 005a6b5c
    PUSH EBX                            ; 005a6b5d
        ;   Label: LAB_005a6b5d
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540 ; 005a6b5e
        ;   XREF to: 005a6540 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(CSfxSample * sample)
    ADD ESP,0x4                         ; 005a6b63
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a6b66
        ;   Label: LAB_005a6b66
    CMP EBP,EAX                         ; 005a6b6a
    JGE 0x005a6b93                      ; 005a6b6c
        ;   XREF to: 005a6b93 (CONDITIONAL_JUMP)  ; LAB_005a6b93
    PUSH EBP                            ; 005a6b6e
    PUSH EAX                            ; 005a6b6f
    MOV EDX,0x650129                    ; 005a6b70 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0x8a0                       ; 005a6b75
    PUSH 0x65013e                       ; 005a6b7a | = "MP3 decoded more than batch: r = %d, ..."
    MOV dword ptr [0x02f0ca48],EDX      ; 005a6b7f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005a6b85 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a6b8b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 005a6b90
    MOV EDI,dword ptr [ESP + 0x20]      ; 005a6b93
        ;   Label: LAB_005a6b93
    CMP EBP,EDI                         ; 005a6b97
    JZ 0x005a6ba9                       ; 005a6b99
        ;   XREF to: 005a6ba9 (CONDITIONAL_JUMP)  ; LAB_005a6ba9
    MOV EAX,dword ptr [EBX + 0x164]     ; 005a6b9b
    ADD EAX,EDI                         ; 005a6ba1
    MOV dword ptr [EBX + 0x110],EAX     ; 005a6ba3
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a6ba9
        ;   Label: LAB_005a6ba9
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005a6bad
    MOV ECX,dword ptr [EBX + 0x164]     ; 005a6bb1
    MOV ESI,dword ptr [EBX + 0x168]     ; 005a6bb7
    MOV EDI,dword ptr [EBX + 0x160]     ; 005a6bbd
    ADD ECX,EAX                         ; 005a6bc3
    SUB EDX,EAX                         ; 005a6bc5
    ADD ESI,EAX                         ; 005a6bc7
    MOV dword ptr [EBX + 0x164],ECX     ; 005a6bc9
    MOV dword ptr [ESP + 0x1c],EDX      ; 005a6bcf
    MOV dword ptr [EBX + 0x168],ESI     ; 005a6bd3
    CMP ESI,EDI                         ; 005a6bd9
    JL 0x005a6be7                       ; 005a6bdb
        ;   XREF to: 005a6be7 (CONDITIONAL_JUMP)  ; LAB_005a6be7
    MOV dword ptr [EBX + 0x168],0x0     ; 005a6bdd
    CMP dword ptr [ESP + 0x1c],0x0      ; 005a6be7
        ;   Label: LAB_005a6be7
    JG 0x005a68d9                       ; 005a6bec
        ;   XREF to: 005a68d9 (CONDITIONAL_JUMP)  ; LAB_005a68d9
    MOV EAX,0x1                         ; 005a6bf2
        ;   Label: LAB_005a6bf2
    ADD ESP,0x24                        ; 005a6bf7
    POP EBP                             ; 005a6bfa
    POP EDI                             ; 005a6bfb
    POP ESI                             ; 005a6bfc
    POP EBX                             ; 005a6bfd
    RET                                 ; 005a6bfe
    PUSH ECX                            ; 005a6bff
        ;   Label: LAB_005a6bff
    PUSH 0x80                           ; 005a6c00
    PUSH ESI                            ; 005a6c05 | g_SfxStreamReadBuffer
    CALL crt_memory.c_memset_FUN_005fde40 ; 005a6c06
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005a6c0b
    JMP 0x005a6b02                      ; 005a6c0e
        ;   XREF to: 005a6b02 (UNCONDITIONAL_JUMP)  ; LAB_005a6b02
    ADD ECX,ECX                         ; 005a6c13
        ;   Label: LAB_005a6c13
    PUSH ECX                            ; 005a6c15
    PUSH 0x0                            ; 005a6c16
    PUSH ESI                            ; 005a6c18 | g_SfxStreamReadBuffer
    CALL crt_memory.c_memset_FUN_005fde40 ; 005a6c19
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005a6c1e
    JMP 0x005a6b02                      ; 005a6c21
        ;   XREF to: 005a6b02 (UNCONDITIONAL_JUMP)  ; LAB_005a6b02
    JBE 0x005a6bff                      ; 005a6c26
        ;   XREF to: 005a6bff (CONDITIONAL_JUMP)  ; LAB_005a6bff
        ;   Label: LAB_005a6c26
    CMP EAX,0x10                        ; 005a6c28
    JZ 0x005a6c13                       ; 005a6c2b
        ;   XREF to: 005a6c13 (CONDITIONAL_JUMP)  ; LAB_005a6c13
    JMP 0x005a6adf                      ; 005a6c2d
        ;   XREF to: 005a6adf (UNCONDITIONAL_JUMP)  ; LAB_005a6adf
    MOV ECX,dword ptr [EBX + 0x16c]     ; 005a6c32
        ;   Label: LAB_005a6c32
    TEST ECX,ECX                        ; 005a6c38
    JNZ 0x005a6caa                      ; 005a6c3a
        ;   XREF to: 005a6caa (CONDITIONAL_JUMP)  ; LAB_005a6caa
    CMP dword ptr [EBX + 0x174],0x0     ; 005a6c3c
    JNZ 0x005a6c67                      ; 005a6c43
        ;   XREF to: 005a6c67 (CONDITIONAL_JUMP)  ; LAB_005a6c67
    MOV EAX,0x650096                    ; 005a6c45 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x879                       ; 005a6c4a
    PUSH 0x6500ab                       ; 005a6c4f | = "Can't stream unless we have mp3 decod..."
    MOV [0x02f0ca48],EAX                ; 005a6c54 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005a6c59 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a6c5f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a6c64
    MOV ECX,dword ptr [EBX + 0x174]     ; 005a6c67
        ;   Label: LAB_005a6c67
    PUSH ECX                            ; 005a6c6d
    PUSH EBP                            ; 005a6c6e
    PUSH EBX                            ; 005a6c6f
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550 ; 005a6c70
        ;   XREF to: 005a8550 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a6c75
    PUSH EAX                            ; 005a6c78
    PUSH ESI                            ; 005a6c79
    CALL crt_stdio.c_fread_FUN_005fd990 ; 005a6c7a
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 005a6c7f
    MOV dword ptr [ESP + 0x20],EAX      ; 005a6c82
    MOV EAX,dword ptr [EBX + 0x174]     ; 005a6c86
    TEST byte ptr [EAX + 0xc],0x20      ; 005a6c8c
    JZ 0x005a6b06                       ; 005a6c90
        ;   XREF to: 005a6b06 (CONDITIONAL_JUMP)  ; LAB_005a6b06
    PUSH EBX                            ; 005a6c96
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540 ; 005a6c97
        ;   XREF to: 005a6540 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(CSfxSample * sample)
    ADD ESP,0x4                         ; 005a6c9c
    PUSH EBX                            ; 005a6c9f
    PUSH 0x6500e5                       ; 005a6ca0 | = "Error reading %s while streaming\n"
    JMP 0x005a69da                      ; 005a6ca5
        ;   XREF to: 005a69da (UNCONDITIONAL_JUMP)  ; LAB_005a69da
    PUSH EBP                            ; 005a6caa
        ;   Label: LAB_005a6caa
    PUSH ESI                            ; 005a6cab
    PUSH ECX                            ; 005a6cac
    CALL sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60 ; 005a6cad
        ;   XREF to: 00534a60 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60(CMP3Decoder * this_ptr, short * output_buffer, int samples_requested)
    ADD ESP,0xc                         ; 005a6cb2
    MOV dword ptr [ESP + 0x20],EAX      ; 005a6cb5
    JMP 0x005a6b06                      ; 005a6cb9
        ;   XREF to: 005a6b06 (UNCONDITIONAL_JUMP)  ; LAB_005a6b06
    PUSH EBX                            ; 005a6cbe
        ;   Label: LAB_005a6cbe
    PUSH 0x650107                       ; 005a6cbf | = "Error locking %s while streaming\n"
    JMP 0x005a69da                      ; 005a6cc4
        ;   XREF to: 005a69da (UNCONDITIONAL_JUMP)  ; LAB_005a69da
    CMP dword ptr [ESP + 0x14],0x0      ; 005a6cc9
        ;   Label: LAB_005a6cc9
    JNZ 0x005a6b5d                      ; 005a6cce
        ;   XREF to: 005a6b5d (CONDITIONAL_JUMP)  ; LAB_005a6b5d
    JMP 0x005a6b66                      ; 005a6cd4
        ;   XREF to: 005a6b66 (UNCONDITIONAL_JUMP)  ; LAB_005a6b66

