; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_00553960(CSfxSample *param_1,float param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   sound_sndmain.cpp_FUN_00556240 at 00556472
;   sound_sndmain.cpp_pollAllStreams_FUN_0055a1b0 at 0055a1fe
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d2b3e
;   TerminatedCString s_generateSilence_invalid_005d2b53
;   TerminatedCString s_sound_sndmain_cpp_005d2d95
;   TerminatedCString s_SfxSlot_pollStream_must_005d2daa
;   TerminatedCString s_sound_sndmain_cpp_005d2dd0
;   TerminatedCString s_SfxSample_pollStream_my_005d2de5
;   TerminatedCString s_SfxSample_pollStream_no_005d2e1a
;   TerminatedCString s_sound_sndmain_cpp_005d2e44
;   TerminatedCString s_SfxSample_pollStream_can_005d2e59
;   TerminatedCString s_SfxSample_pollStream_err_005d2ea2
;   TerminatedCString s_sound_sndmain_cpp_005d2ee0
;   TerminatedCString s_nextLoadSampleDest_d_all_005d2ef5
;   TerminatedCString s_Error_locking_s_while_st_005d2f1f
;   TerminatedCString s_sound_sndmain_cpp_005d2f41
;   TerminatedCString s_Can_t_stream_unless_we_h_005d2f56
;   ... and 12 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_math.c_round_FUN_005a3120
;   crt_memory.c_memset_FUN_005a28f0
;   sound_mp3.cpp_CMP3Decoder_read_FUN_00502a80
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520
;   sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00553760
;   sound_sndmain.cpp_CSfxSample_seek_FUN_005537c0
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270
;   sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005554a0
;   sound_sndmain.cpp_FUN_00553660
;   sound_sndmain.cpp_FUN_005558e0
;   sound_sndmain.cpp_FUN_00555900
;   sound_sndmain.cpp_FUN_00555b80
;   sound_sndmain.cpp_FUN_0055a560
;   support_trstream.cpp_CInStreamFile_isOpen_FUN_00573d60
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553960
        ;   Label: sound_sndmain.cpp_FUN_00553960
    PUSH ESI                            ; 00553961
    PUSH EDI                            ; 00553962
    PUSH EBP                            ; 00553963
    SUB ESP,0x28                        ; 00553964
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00553967
    CMP dword ptr [0x02cf341c],0x0      ; 0055396b | DAT_02cf341c
    JLE 0x00553c33                      ; 00553972
        ;   XREF to: 00553c33 (CONDITIONAL_JUMP)  ; LAB_00553c33
    MOV ESI,dword ptr [EBP + 0x160]     ; 00553978
        ;   Label: LAB_00553978
    TEST ESI,ESI                        ; 0055397e
    JL 0x00553c5b                       ; 00553980
        ;   XREF to: 00553c5b (CONDITIONAL_JUMP)  ; LAB_00553c5b
    LEA EAX,[ESI*0x8 + 0x0]             ; 00553986
    ADD EAX,ESI                         ; 0055398d
    SHL EAX,0x3                         ; 0055398f
    SUB EAX,ESI                         ; 00553992
    MOV EDX,0x2ce721c                   ; 00553994
    SHL EAX,0x2                         ; 00553999
    ADD EDX,EAX                         ; 0055399c
    MOV EDI,dword ptr [EDX + 0x64]      ; 0055399e | DAT_02ce7280
    MOV dword ptr [ESP + 0x24],EDX      ; 005539a1
    TEST EDI,EDI                        ; 005539a5
    JNZ 0x00553c68                      ; 005539a7
        ;   XREF to: 00553c68 (CONDITIONAL_JUMP)  ; LAB_00553c68
    MOV ECX,0x5d2dd0                    ; 005539ad | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005539ad
    MOV EBX,0x91a                       ; 005539b2
    PUSH 0x5d2de5                       ; 005539b7 | = "SfxSample::pollStream - my sfx isn't ..."
    MOV dword ptr [0x01d71de0],ECX      ; 005539bc | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 005539c2 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005539c8
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005539cd
    CMP dword ptr [0x02cf3280],0x0      ; 005539d0 | DAT_02cf3280
        ;   Label: LAB_005539d0
    JZ 0x00553c76                       ; 005539d7
        ;   XREF to: 00553c76 (CONDITIONAL_JUMP)  ; LAB_00553c76
    CMP dword ptr [EBP + 0x124],0x1     ; 005539dd
    JZ 0x00553a09                       ; 005539e4
        ;   XREF to: 00553a09 (CONDITIONAL_JUMP)  ; LAB_00553a09
    PUSH EBP                            ; 005539e6
    MOV EAX,0x5d2e44                    ; 005539e7 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x92b                       ; 005539ec
    PUSH 0x5d2e59                       ; 005539f1 | = "SfxSample::pollStream - cannot stream..."
    MOV [0x01d71de0],EAX                ; 005539f6 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 005539fb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00553a01
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00553a06
    MOV EAX,dword ptr [ESP + 0x24]      ; 00553a09
        ;   Label: LAB_00553a09
    CMP dword ptr [EAX + 0x60],0x0      ; 00553a0d
    JZ 0x00553a50                       ; 00553a11
        ;   XREF to: 00553a50 (CONDITIONAL_JUMP)  ; LAB_00553a50
    PUSH EAX                            ; 00553a13
    CALL sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005554a0 ; 00553a14
        ;   XREF to: 005554a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005554a0(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00553a19
    TEST EAX,EAX                        ; 00553a1c
    JZ 0x00553c85                       ; 00553a1e
        ;   XREF to: 00553c85 (CONDITIONAL_JUMP)  ; LAB_00553c85
    PUSH EBP                            ; 00553a24
    CALL sound_sndmain.cpp_FUN_00555b80 ; 00553a25
        ;   XREF to: 00555b80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00555b80(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00553a2a
    TEST EAX,EAX                        ; 00553a2d
    JNZ 0x00553a50                      ; 00553a2f
        ;   XREF to: 00553a50 (CONDITIONAL_JUMP)  ; LAB_00553a50
    CMP dword ptr [EBP + 0x110],0x0     ; 00553a31
    JL 0x00553a50                       ; 00553a38
        ;   XREF to: 00553a50 (CONDITIONAL_JUMP)  ; LAB_00553a50
    MOV EAX,dword ptr [ESP + 0x24]      ; 00553a3a
    FILD dword ptr [EBP + 0x110]        ; 00553a3e
    FCOMP double ptr [EAX + 0x50]       ; 00553a44
    FNSTSW AX                           ; 00553a47
    SAHF                                ; 00553a49
    JBE 0x00553c13                      ; 00553a4a
        ;   XREF to: 00553c13 (CONDITIONAL_JUMP)  ; LAB_00553c13
    FILD dword ptr [EBP + 0x10c]        ; 00553a50
        ;   Label: LAB_00553a50
    FMUL float ptr [ESP + 0x40]         ; 00553a56
    MOV EDI,dword ptr [EBP + 0x164]     ; 00553a5a
    CALL crt_math.c_round_FUN_005a3120  ; 00553a60
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP]               ; 00553a65
    CMP EDI,dword ptr [ESP]             ; 00553a68
    JGE 0x00553a70                      ; 00553a6b
        ;   XREF to: 00553a70 (CONDITIONAL_JUMP)  ; LAB_00553a70
    MOV dword ptr [ESP],EDI             ; 00553a6d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00553a70
        ;   Label: LAB_00553a70
    FILD dword ptr [EBP + 0x170]        ; 00553a74
    FSUB double ptr [EAX + 0x10c]       ; 00553a7a
    CALL crt_math.c_round_FUN_005a3120  ; 00553a80
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x8]         ; 00553a85
    CMP dword ptr [ESP + 0x8],0x0       ; 00553a89
    JL 0x00553c97                       ; 00553a8e
        ;   XREF to: 00553c97 (CONDITIONAL_JUMP)  ; LAB_00553c97
    MOV EAX,dword ptr [ESP + 0x8]       ; 00553a94
        ;   Label: LAB_00553a94
    CMP EAX,dword ptr [ESP]             ; 00553a98
    JGE 0x00553c5b                      ; 00553a9b
        ;   XREF to: 00553c5b (CONDITIONAL_JUMP)  ; LAB_00553c5b
    MOV EBX,0x5f5e0ff                   ; 00553aa1
    MOV ESI,dword ptr [EBP + 0x158]     ; 00553aa6
    MOV dword ptr [ESP + 0xc],EBX       ; 00553aac
    TEST ESI,ESI                        ; 00553ab0
    JZ 0x00553ac6                       ; 00553ab2
        ;   XREF to: 00553ac6 (CONDITIONAL_JUMP)  ; LAB_00553ac6
    PUSH 0x3c00                         ; 00553ab4
    PUSH EBP                            ; 00553ab9
    CALL sound_sndmain.cpp_FUN_005558e0 ; 00553aba
        ;   XREF to: 005558e0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005558e0()
    ADD ESP,0x8                         ; 00553abf
    MOV dword ptr [ESP + 0xc],EAX       ; 00553ac2
    FILD dword ptr [EBP + 0x10c]        ; 00553ac6
        ;   Label: LAB_00553ac6
    MOV EAX,dword ptr [EBP + 0x164]     ; 00553acc
    FMUL float ptr [ESP + 0x44]         ; 00553ad2
    DEC EAX                             ; 00553ad6
    CALL crt_math.c_round_FUN_005a3120  ; 00553ad7
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x4]         ; 00553adc
    CMP EAX,dword ptr [ESP + 0x4]       ; 00553ae0
    JGE 0x00553aea                      ; 00553ae4
        ;   XREF to: 00553aea (CONDITIONAL_JUMP)  ; LAB_00553aea
    MOV dword ptr [ESP + 0x4],EAX       ; 00553ae6
    MOV EAX,dword ptr [ESP + 0x4]       ; 00553aea
        ;   Label: LAB_00553aea
    MOV EDX,dword ptr [ESP + 0x8]       ; 00553aee
    SUB EAX,EDX                         ; 00553af2
    MOV dword ptr [ESP + 0x1c],EAX      ; 00553af4
    TEST EAX,EAX                        ; 00553af8
    JLE 0x00553e22                      ; 00553afa
        ;   XREF to: 00553e22 (CONDITIONAL_JUMP)  ; LAB_00553e22
    LEA EAX,[EBP + 0x17c]               ; 00553b00
    MOV dword ptr [ESP + 0x10],EAX      ; 00553b06
    MOV ESI,dword ptr [EBP + 0x170]     ; 00553b0a
        ;   Label: LAB_00553b0a
    TEST ESI,ESI                        ; 00553b10
    JL 0x00553b1c                       ; 00553b12
        ;   XREF to: 00553b1c (CONDITIONAL_JUMP)  ; LAB_00553b1c
    CMP ESI,dword ptr [EBP + 0x164]     ; 00553b14
    JL 0x00553b4c                       ; 00553b1a
        ;   XREF to: 00553b4c (CONDITIONAL_JUMP)  ; LAB_00553b4c
    MOV ECX,dword ptr [EBP + 0x164]     ; 00553b1c
        ;   Label: LAB_00553b1c
    PUSH ECX                            ; 00553b22
    MOV EBX,dword ptr [EBP + 0x170]     ; 00553b23
    PUSH EBX                            ; 00553b29
    MOV EAX,0x5d2ee0                    ; 00553b2a | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x970                       ; 00553b2f
    PUSH 0x5d2ef5                       ; 00553b34 | = "nextLoadSampleDest = %d, allocLength ..."
    MOV [0x01d71de0],EAX                ; 00553b39 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00553b3e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00553b44
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 00553b49
    MOV ESI,dword ptr [EBP + 0x170]     ; 00553b4c
        ;   Label: LAB_00553b4c
    MOV EBX,dword ptr [EBP + 0x164]     ; 00553b52
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00553b58
    SUB EBX,ESI                         ; 00553b5c
    CMP EBX,EDI                         ; 00553b5e
    JLE 0x00553b64                      ; 00553b60
        ;   XREF to: 00553b64 (CONDITIONAL_JUMP)  ; LAB_00553b64
    MOV EBX,EDI                         ; 00553b62
    MOV EAX,dword ptr [ESP + 0xc]       ; 00553b64
        ;   Label: LAB_00553b64
    CMP EBX,EAX                         ; 00553b68
    JLE 0x00553b6e                      ; 00553b6a
        ;   XREF to: 00553b6e (CONDITIONAL_JUMP)  ; LAB_00553b6e
    MOV EBX,EAX                         ; 00553b6c
    MOV EDX,dword ptr [EBP + 0x110]     ; 00553b6e
        ;   Label: LAB_00553b6e
    XOR EDI,EDI                         ; 00553b74
    TEST EDX,EDX                        ; 00553b76
    JL 0x00553bc8                       ; 00553b78
        ;   XREF to: 00553bc8 (CONDITIONAL_JUMP)  ; LAB_00553bc8
    CMP EDX,dword ptr [EBP + 0x16c]     ; 00553b7a
    JG 0x00553cc3                       ; 00553b80
        ;   XREF to: 00553cc3 (CONDITIONAL_JUMP)  ; LAB_00553cc3
    MOV EAX,dword ptr [ESP + 0x24]      ; 00553b86
    MOV EDX,dword ptr [EAX + 0x68]      ; 00553b8a
    PUSH EDX                            ; 00553b8d
    CALL sound_sndmain.cpp_FUN_00555b80 ; 00553b8e
        ;   XREF to: 00555b80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00555b80(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00553b93
    TEST EAX,EAX                        ; 00553b96
    JZ 0x00553cac                       ; 00553b98
        ;   XREF to: 00553cac (CONDITIONAL_JUMP)  ; LAB_00553cac
    MOV EAX,dword ptr [ESP + 0x24]      ; 00553b9e
    MOV EAX,dword ptr [EAX + 0x68]      ; 00553ba2
    MOV EDX,dword ptr [EAX + 0x110]     ; 00553ba5
    CMP EDX,dword ptr [EAX + 0x164]     ; 00553bab
    JZ 0x00553cac                       ; 00553bb1
        ;   XREF to: 00553cac (CONDITIONAL_JUMP)  ; LAB_00553cac
    MOV EDX,dword ptr [EBP + 0x170]     ; 00553bb7
    PUSH EDX                            ; 00553bbd
    PUSH EDI                            ; 00553bbe
    PUSH EAX                            ; 00553bbf
    CALL sound_sndmain.cpp_CSfxSample_seek_FUN_005537c0 ; 00553bc0
        ;   XREF to: 005537c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_seek_FUN_005537c0(CSfxSample * this_ptr, int playback_position, int dest_buffer_offset)
    ADD ESP,0xc                         ; 00553bc5
    MOV ECX,0x1                         ; 00553bc8
        ;   Label: LAB_00553bc8
    MOV ESI,0x2cdafb8                   ; 00553bcd
    XOR EAX,EAX                         ; 00553bd2
    MOV EDX,dword ptr [EBP + 0x158]     ; 00553bd4
    MOV dword ptr [ESP + 0x18],EAX      ; 00553bda
    MOV dword ptr [ESP + 0x14],ECX      ; 00553bde
    TEST EDX,EDX                        ; 00553be2
    JNZ 0x00553ce9                      ; 00553be4
        ;   XREF to: 00553ce9 (CONDITIONAL_JUMP)  ; LAB_00553ce9
    PUSH EBX                            ; 00553bea
    MOV ECX,dword ptr [EBP + 0x170]     ; 00553beb
    PUSH ECX                            ; 00553bf1
    PUSH EBP                            ; 00553bf2
    CALL sound_sndmain.cpp_FUN_00553660 ; 00553bf3
        ;   XREF to: 00553660 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00553660()
    ADD ESP,0xc                         ; 00553bf8
    MOV ESI,EAX                         ; 00553bfb
    TEST EAX,EAX                        ; 00553bfd
    JNZ 0x00553cda                      ; 00553bff
        ;   XREF to: 00553cda (CONDITIONAL_JUMP)  ; LAB_00553cda
    PUSH EBP                            ; 00553c05
    PUSH 0x5d2f1f                       ; 00553c06 | = "Error locking %s while streaming\n"
    CALL sound_sndmain.cpp_FUN_0055a560 ; 00553c0b
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
        ;   Label: LAB_00553c0b
    ADD ESP,0x8                         ; 00553c10
    MOV ECX,dword ptr [ESP + 0x24]      ; 00553c13
        ;   Label: LAB_00553c13
    PUSH ECX                            ; 00553c17
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270 ; 00553c18
        ;   XREF to: 00555270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00553c1d
    PUSH EBP                            ; 00553c20
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520 ; 00553c21
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00553c26
    XOR EAX,EAX                         ; 00553c29
    ADD ESP,0x28                        ; 00553c2b
    POP EBP                             ; 00553c2e
    POP EDI                             ; 00553c2f
    POP ESI                             ; 00553c30
    POP EBX                             ; 00553c31
    RET                                 ; 00553c32
    MOV ECX,0x5d2d95                    ; 00553c33 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00553c33
    MOV EBX,0x90c                       ; 00553c38
    PUSH 0x5d2daa                       ; 00553c3d | = "SfxSlot::pollStream - must be locked!"
    MOV dword ptr [0x01d71de0],ECX      ; 00553c42 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00553c48 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00553c4e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00553c53
    JMP 0x00553978                      ; 00553c56
        ;   XREF to: 00553978 (UNCONDITIONAL_JUMP)  ; LAB_00553978
    MOV EAX,0x1                         ; 00553c5b
        ;   Label: LAB_00553c5b
    ADD ESP,0x28                        ; 00553c60
    POP EBP                             ; 00553c63
    POP EDI                             ; 00553c64
    POP ESI                             ; 00553c65
    POP EBX                             ; 00553c66
    RET                                 ; 00553c67
    CMP EBP,dword ptr [EDX + 0x68]      ; 00553c68
        ;   Label: LAB_00553c68
    JNZ 0x005539ad                      ; 00553c6b
        ;   XREF to: 005539ad (CONDITIONAL_JUMP)  ; LAB_005539ad
    JMP 0x005539d0                      ; 00553c71
        ;   XREF to: 005539d0 (UNCONDITIONAL_JUMP)  ; LAB_005539d0
    PUSH 0x5d2e1a                       ; 00553c76 | = "SfxSample::pollStream - no sound devi..."
        ;   Label: LAB_00553c76
    CALL sound_sndmain.cpp_FUN_0055a560 ; 00553c7b
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 00553c80
    JMP 0x00553c13                      ; 00553c83
        ;   XREF to: 00553c13 (UNCONDITIONAL_JUMP)  ; LAB_00553c13
    PUSH 0x5d2ea2                       ; 00553c85 | = "SfxSample::pollStream - error querryi..."
        ;   Label: LAB_00553c85
    CALL sound_sndmain.cpp_FUN_0055a560 ; 00553c8a
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 00553c8f
    JMP 0x00553c13                      ; 00553c92
        ;   XREF to: 00553c13 (UNCONDITIONAL_JUMP)  ; LAB_00553c13
    MOV EDX,dword ptr [ESP + 0x8]       ; 00553c97
        ;   Label: LAB_00553c97
    MOV EAX,dword ptr [EBP + 0x164]     ; 00553c9b
    ADD EDX,EAX                         ; 00553ca1
    MOV dword ptr [ESP + 0x8],EDX       ; 00553ca3
    JMP 0x00553a94                      ; 00553ca7
        ;   XREF to: 00553a94 (UNCONDITIONAL_JUMP)  ; LAB_00553a94
    CMP dword ptr [EBP + 0x158],0x0     ; 00553cac
        ;   Label: LAB_00553cac
    JZ 0x00553e22                       ; 00553cb3
        ;   XREF to: 00553e22 (CONDITIONAL_JUMP)  ; LAB_00553e22
    MOV EDI,0x1                         ; 00553cb9
    JMP 0x00553bc8                      ; 00553cbe
        ;   XREF to: 00553bc8 (UNCONDITIONAL_JUMP)  ; LAB_00553bc8
    MOV EAX,EDX                         ; 00553cc3
        ;   Label: LAB_00553cc3
    SUB EAX,dword ptr [EBP + 0x16c]     ; 00553cc5
    CMP EBX,EAX                         ; 00553ccb
    JLE 0x00553bc8                      ; 00553ccd
        ;   XREF to: 00553bc8 (CONDITIONAL_JUMP)  ; LAB_00553bc8
    MOV EBX,EAX                         ; 00553cd3
    JMP 0x00553bc8                      ; 00553cd5
        ;   XREF to: 00553bc8 (UNCONDITIONAL_JUMP)  ; LAB_00553bc8
    XOR EDX,EDX                         ; 00553cda
        ;   Label: LAB_00553cda
    MOV EAX,0x1                         ; 00553cdc
    MOV dword ptr [ESP + 0x14],EDX      ; 00553ce1
    MOV dword ptr [ESP + 0x18],EAX      ; 00553ce5
    TEST EDI,EDI                        ; 00553ce9
        ;   Label: LAB_00553ce9
    JZ 0x00553e62                       ; 00553ceb
        ;   XREF to: 00553e62 (CONDITIONAL_JUMP)  ; LAB_00553e62
    MOV EAX,dword ptr [ESP + 0x24]      ; 00553cf1
    MOV EAX,dword ptr [EAX + 0x68]      ; 00553cf5
    MOV EDX,dword ptr [EAX + 0x108]     ; 00553cf8
    IMUL EDX,EBX                        ; 00553cfe
    MOV EAX,dword ptr [EAX + 0x104]     ; 00553d01
    CMP EAX,0x8                         ; 00553d07
    JNC 0x00553e56                      ; 00553d0a
        ;   XREF to: 00553e56 (CONDITIONAL_JUMP)  ; LAB_00553e56
    MOV EDI,0x5d2b3e                    ; 00553d10 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00553d10
    MOV EAX,0x68b                       ; 00553d15
    PUSH 0x5d2b53                       ; 00553d1a | = "generateSilence - invalid bit depth!"
    MOV dword ptr [0x01d71de0],EDI      ; 00553d1f | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00553d25 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00553d2a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00553d2f
    MOV dword ptr [ESP + 0x20],EBX      ; 00553d32
        ;   Label: LAB_00553d32
    CMP dword ptr [ESP + 0x14],0x0      ; 00553d36
        ;   Label: LAB_00553d36
    JZ 0x00553f2e                       ; 00553d3b
        ;   XREF to: 00553f2e (CONDITIONAL_JUMP)  ; LAB_00553f2e
    MOV ECX,dword ptr [ESP + 0x20]      ; 00553d41
    TEST ECX,ECX                        ; 00553d45
    JLE 0x00553f2e                      ; 00553d47
        ;   XREF to: 00553f2e (CONDITIONAL_JUMP)  ; LAB_00553f2e
    PUSH ECX                            ; 00553d4d
    MOV EAX,dword ptr [EBP + 0x170]     ; 00553d4e
    PUSH EAX                            ; 00553d54
    PUSH EBP                            ; 00553d55
    CALL sound_sndmain.cpp_FUN_00553660 ; 00553d56
        ;   XREF to: 00553660 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00553660()
    MOV EDI,EAX                         ; 00553d5b
    ADD ESP,0xc                         ; 00553d5d
    TEST EAX,EAX                        ; 00553d60
    JZ 0x00553f23                       ; 00553d62
        ;   XREF to: 00553f23 (CONDITIONAL_JUMP)  ; LAB_00553f23
    MOV EDX,dword ptr [ESP + 0x20]      ; 00553d68
    PUSH EDX                            ; 00553d6c
    PUSH EBP                            ; 00553d6d
    CALL sound_sndmain.cpp_FUN_00555900 ; 00553d6e
        ;   XREF to: 00555900 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00555900()
    ADD ESP,0x8                         ; 00553d73
    MOV ESI,0x2cdafb8                   ; 00553d76
    MOV ECX,EAX                         ; 00553d7b
    PUSH EDI                            ; 00553d7d
    MOV EAX,ECX                         ; 00553d7e
    SHR ECX,0x2                         ; 00553d80
    MOVSD.REP ES:EDI,ESI                ; 00553d83 | DAT_02cdafb8 | DAT_02cdafbc
    MOV CL,AL                           ; 00553d85
    AND CL,0x3                          ; 00553d87
    MOVSB.REP ES:EDI,ESI                ; 00553d8a | DAT_02cdafbc | DAT_02cdafbd
    POP EDI                             ; 00553d8c
    PUSH EBP                            ; 00553d8d
        ;   Label: LAB_00553d8d
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00553760 ; 00553d8e
        ;   XREF to: 00553760 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00553760(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00553d93
    MOV ECX,dword ptr [ESP + 0x20]      ; 00553d96
        ;   Label: LAB_00553d96
    CMP EBX,ECX                         ; 00553d9a
    JGE 0x00553dc3                      ; 00553d9c
        ;   XREF to: 00553dc3 (CONDITIONAL_JUMP)  ; LAB_00553dc3
    PUSH EBX                            ; 00553d9e
    PUSH ECX                            ; 00553d9f
    MOV ESI,0x5d2fd4                    ; 00553da0 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x9f5                       ; 00553da5
    PUSH 0x5d2fe9                       ; 00553daa | = "MP3 decoded more than batch: r = %d, ..."
    MOV dword ptr [0x01d71de0],ESI      ; 00553daf | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00553db5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00553dbb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 00553dc0
    MOV EDX,dword ptr [ESP + 0x20]      ; 00553dc3
        ;   Label: LAB_00553dc3
    CMP EBX,EDX                         ; 00553dc7
    JZ 0x00553dd9                       ; 00553dc9
        ;   XREF to: 00553dd9 (CONDITIONAL_JUMP)  ; LAB_00553dd9
    MOV EAX,dword ptr [EBP + 0x16c]     ; 00553dcb
    ADD EAX,EDX                         ; 00553dd1
    MOV dword ptr [EBP + 0x110],EAX     ; 00553dd3
    MOV EAX,dword ptr [ESP + 0x20]      ; 00553dd9
        ;   Label: LAB_00553dd9
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00553ddd
    MOV ESI,dword ptr [EBP + 0x16c]     ; 00553de1
    MOV EDI,dword ptr [EBP + 0x170]     ; 00553de7
    MOV EDX,dword ptr [EBP + 0x164]     ; 00553ded
    ADD ESI,EAX                         ; 00553df3
    SUB EBX,EAX                         ; 00553df5
    ADD EDI,EAX                         ; 00553df7
    MOV dword ptr [EBP + 0x16c],ESI     ; 00553df9
    MOV dword ptr [ESP + 0x1c],EBX      ; 00553dff
    MOV dword ptr [EBP + 0x170],EDI     ; 00553e03
    CMP EDI,EDX                         ; 00553e09
    JL 0x00553e17                       ; 00553e0b
        ;   XREF to: 00553e17 (CONDITIONAL_JUMP)  ; LAB_00553e17
    MOV dword ptr [EBP + 0x170],0x0     ; 00553e0d
    CMP dword ptr [ESP + 0x1c],0x0      ; 00553e17
        ;   Label: LAB_00553e17
    JG 0x00553b0a                       ; 00553e1c
        ;   XREF to: 00553b0a (CONDITIONAL_JUMP)  ; LAB_00553b0a
    MOV EAX,0x1                         ; 00553e22
        ;   Label: LAB_00553e22
    ADD ESP,0x28                        ; 00553e27
    POP EBP                             ; 00553e2a
    POP EDI                             ; 00553e2b
    POP ESI                             ; 00553e2c
    POP EBX                             ; 00553e2d
    RET                                 ; 00553e2e
    PUSH EDX                            ; 00553e2f
        ;   Label: LAB_00553e2f
    PUSH 0x80                           ; 00553e30
    PUSH ESI                            ; 00553e35 | DAT_02cdafb8
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00553e36
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00553e3b
    JMP 0x00553d32                      ; 00553e3e
        ;   XREF to: 00553d32 (UNCONDITIONAL_JUMP)  ; LAB_00553d32
    ADD EDX,EDX                         ; 00553e43
        ;   Label: LAB_00553e43
    PUSH EDX                            ; 00553e45
    PUSH 0x0                            ; 00553e46
    PUSH ESI                            ; 00553e48 | DAT_02cdafb8
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00553e49
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00553e4e
    JMP 0x00553d32                      ; 00553e51
        ;   XREF to: 00553d32 (UNCONDITIONAL_JUMP)  ; LAB_00553d32
    JBE 0x00553e2f                      ; 00553e56
        ;   XREF to: 00553e2f (CONDITIONAL_JUMP)  ; LAB_00553e2f
        ;   Label: LAB_00553e56
    CMP EAX,0x10                        ; 00553e58
    JZ 0x00553e43                       ; 00553e5b
        ;   XREF to: 00553e43 (CONDITIONAL_JUMP)  ; LAB_00553e43
    JMP 0x00553d10                      ; 00553e5d
        ;   XREF to: 00553d10 (UNCONDITIONAL_JUMP)  ; LAB_00553d10
    MOV ECX,dword ptr [EBP + 0x174]     ; 00553e62
        ;   Label: LAB_00553e62
    TEST ECX,ECX                        ; 00553e68
    JNZ 0x00553f0f                      ; 00553e6a
        ;   XREF to: 00553f0f (CONDITIONAL_JUMP)  ; LAB_00553f0f
    MOV EDI,dword ptr [ESP + 0x10]      ; 00553e70
    PUSH EDI                            ; 00553e74
    CALL support_trstream.cpp_CInStreamFile_isOpen_FUN_00573d60 ; 00553e75
        ;   XREF to: 00573d60 (UNCONDITIONAL_CALL)  ; bool support_trstream.cpp_CInStreamFile_isOpen_FUN_00573d60(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00553e7a
    TEST EAX,EAX                        ; 00553e7d
    JZ 0x00553ed7                       ; 00553e7f
        ;   XREF to: 00553ed7 (CONDITIONAL_JUMP)  ; LAB_00553ed7
    PUSH EBX                            ; 00553e81
        ;   Label: LAB_00553e81
    PUSH EBP                            ; 00553e82
    CALL sound_sndmain.cpp_FUN_00555900 ; 00553e83
        ;   XREF to: 00555900 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00555900()
    ADD ESP,0x8                         ; 00553e88
    PUSH EAX                            ; 00553e8b
    PUSH ESI                            ; 00553e8c
    MOV ECX,dword ptr [ESP + 0x18]      ; 00553e8d
    PUSH ECX                            ; 00553e91
    MOV EDI,EAX                         ; 00553e92
    CALL support_trstream.cpp_CInStreamFile_read_FUN_00573c00 ; 00553e94
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_00573c00(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 00553e99
    CMP EAX,EDI                         ; 00553e9c
    JNZ 0x00553efb                      ; 00553e9e
        ;   XREF to: 00553efb (CONDITIONAL_JUMP)  ; LAB_00553efb
    MOV EAX,dword ptr [ESP + 0x24]      ; 00553ea0
    MOV EAX,dword ptr [EAX + 0x68]      ; 00553ea4
    MOV ESI,dword ptr [EAX + 0x104]     ; 00553ea7
    MOV dword ptr [ESP + 0x20],EBX      ; 00553ead
    CMP ESI,0x10                        ; 00553eb1
    JNZ 0x00553d36                      ; 00553eb4
        ;   XREF to: 00553d36 (CONDITIONAL_JUMP)  ; LAB_00553d36
    XOR EAX,EAX                         ; 00553eba
    MOV EDX,dword ptr [ESP + 0x24]      ; 00553ebc
        ;   Label: LAB_00553ebc
    MOV EDX,dword ptr [EDX + 0x68]      ; 00553ec0
    MOV EDX,dword ptr [EDX + 0x108]     ; 00553ec3
    IMUL EDX,EBX                        ; 00553ec9
    CMP EAX,EDX                         ; 00553ecc
    JGE 0x00553d36                      ; 00553ece
        ;   XREF to: 00553d36 (CONDITIONAL_JUMP)  ; LAB_00553d36
    INC EAX                             ; 00553ed4
    JMP 0x00553ebc                      ; 00553ed5
        ;   XREF to: 00553ebc (UNCONDITIONAL_JUMP)  ; LAB_00553ebc
    MOV EAX,0x5d2f41                    ; 00553ed7 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00553ed7
    MOV EDX,0x9c2                       ; 00553edc
    PUSH 0x5d2f56                       ; 00553ee1 | = "Can't stream unless we have mp3 decod..."
    MOV [0x01d71de0],EAX                ; 00553ee6 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00553eeb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00553ef1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00553ef6
    JMP 0x00553e81                      ; 00553ef9
        ;   XREF to: 00553e81 (UNCONDITIONAL_JUMP)  ; LAB_00553e81
    PUSH EBP                            ; 00553efb
        ;   Label: LAB_00553efb
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00553760 ; 00553efc
        ;   XREF to: 00553760 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00553760(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00553f01
    PUSH EBP                            ; 00553f04
    PUSH 0x5d2f90                       ; 00553f05 | = "Error reading %s while streaming\n"
    JMP 0x00553c0b                      ; 00553f0a
        ;   XREF to: 00553c0b (UNCONDITIONAL_JUMP)  ; LAB_00553c0b
    PUSH EBX                            ; 00553f0f
        ;   Label: LAB_00553f0f
    PUSH ESI                            ; 00553f10
    PUSH ECX                            ; 00553f11
    CALL sound_mp3.cpp_CMP3Decoder_read_FUN_00502a80 ; 00553f12
        ;   XREF to: 00502a80 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_read_FUN_00502a80(CMP3Decoder * this_ptr, short * output_buffer, int samples_requested)
    ADD ESP,0xc                         ; 00553f17
    MOV dword ptr [ESP + 0x20],EAX      ; 00553f1a
    JMP 0x00553d36                      ; 00553f1e
        ;   XREF to: 00553d36 (UNCONDITIONAL_JUMP)  ; LAB_00553d36
    PUSH EBP                            ; 00553f23
        ;   Label: LAB_00553f23
    PUSH 0x5d2fb2                       ; 00553f24 | = "Error locking %s while streaming\n"
    JMP 0x00553c0b                      ; 00553f29
        ;   XREF to: 00553c0b (UNCONDITIONAL_JUMP)  ; LAB_00553c0b
    CMP dword ptr [ESP + 0x18],0x0      ; 00553f2e
        ;   Label: LAB_00553f2e
    JNZ 0x00553d8d                      ; 00553f33
        ;   XREF to: 00553d8d (CONDITIONAL_JUMP)  ; LAB_00553d8d
    JMP 0x00553d96                      ; 00553f39
        ;   XREF to: 00553d96 (UNCONDITIONAL_JUMP)  ; LAB_00553d96

