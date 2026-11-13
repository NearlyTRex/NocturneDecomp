; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_0054ddf0(CSfxSample *param_1,float param_2,float param_3)
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
;   sound_sndmain.cpp_FUN_005506b0 at 005508e2
;   sound_sndmain.cpp_pollAllStreams_FUN_00554610 at 0055465e
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e805a
;   TerminatedCString s_generateSilence_invalid_005e806f
;   TerminatedCString s_sound_sndmain_cpp_005e82b1
;   TerminatedCString s_SfxSlot_pollStream_must_005e82c6
;   TerminatedCString s_sound_sndmain_cpp_005e82ec
;   TerminatedCString s_SfxSample_pollStream_my_005e8301
;   TerminatedCString s_SfxSample_pollStream_no_005e8336
;   TerminatedCString s_sound_sndmain_cpp_005e8360
;   TerminatedCString s_SfxSample_pollStream_can_005e8375
;   TerminatedCString s_SfxSample_pollStream_err_005e83be
;   TerminatedCString s_sound_sndmain_cpp_005e83fc
;   TerminatedCString s_nextLoadSampleDest_d_all_005e8411
;   TerminatedCString s_Error_locking_s_while_st_005e843b
;   TerminatedCString s_sound_sndmain_cpp_005e845d
;   TerminatedCString s_Can_t_stream_unless_we_h_005e8472
;   ... and 12 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_math.c_round_FUN_005b7ff0
;   crt_memory.c_memset_FUN_005b77c0
;   sound_mp3.cpp_CMP3Decoder_read_FUN_00509fa0
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0
;   sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00550010
;   sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0
;   sound_sndmain.cpp_CSfxSample_seek_FUN_0054dc50
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700
;   sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_0054f930
;   sound_sndmain.cpp_FUN_0054daf0
;   sound_sndmain.cpp_FUN_0054fd70
;   sound_sndmain.cpp_FUN_0054fd90
;   sound_sndmain.cpp_FUN_005549c0
;   support_trstream.cpp_CInStreamFile_isOpen_FUN_0057d130
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ddf0
        ;   Label: sound_sndmain.cpp_FUN_0054ddf0
    PUSH ESI                            ; 0054ddf1
    PUSH EDI                            ; 0054ddf2
    PUSH EBP                            ; 0054ddf3
    SUB ESP,0x28                        ; 0054ddf4
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0054ddf7
    CMP dword ptr [0x0264901c],0x0      ; 0054ddfb | DAT_0264901c
    JLE 0x0054e0c3                      ; 0054de02
        ;   XREF to: 0054e0c3 (CONDITIONAL_JUMP)  ; LAB_0054e0c3
    MOV ESI,dword ptr [EBP + 0x160]     ; 0054de08
        ;   Label: LAB_0054de08
    TEST ESI,ESI                        ; 0054de0e
    JL 0x0054e0eb                       ; 0054de10
        ;   XREF to: 0054e0eb (CONDITIONAL_JUMP)  ; LAB_0054e0eb
    LEA EAX,[ESI*0x8 + 0x0]             ; 0054de16
    ADD EAX,ESI                         ; 0054de1d
    SHL EAX,0x3                         ; 0054de1f
    SUB EAX,ESI                         ; 0054de22
    MOV EDX,0x263cf1c                   ; 0054de24
    SHL EAX,0x2                         ; 0054de29
    ADD EDX,EAX                         ; 0054de2c
    MOV EDI,dword ptr [EDX + 0x64]      ; 0054de2e | DAT_0263cf80
    MOV dword ptr [ESP + 0x24],EDX      ; 0054de31
    TEST EDI,EDI                        ; 0054de35
    JNZ 0x0054e0f8                      ; 0054de37
        ;   XREF to: 0054e0f8 (CONDITIONAL_JUMP)  ; LAB_0054e0f8
    MOV ECX,0x5e82ec                    ; 0054de3d | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054de3d
    MOV EBX,0x918                       ; 0054de42
    PUSH 0x5e8301                       ; 0054de47 | = "SfxSample::pollStream - my sfx isn't ..."
    MOV dword ptr [0x01d046a0],ECX      ; 0054de4c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0054de52 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054de58
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054de5d
    CMP dword ptr [0x02648e80],0x0      ; 0054de60 | DAT_02648e80
        ;   Label: LAB_0054de60
    JZ 0x0054e106                       ; 0054de67
        ;   XREF to: 0054e106 (CONDITIONAL_JUMP)  ; LAB_0054e106
    CMP dword ptr [EBP + 0x124],0x1     ; 0054de6d
    JZ 0x0054de99                       ; 0054de74
        ;   XREF to: 0054de99 (CONDITIONAL_JUMP)  ; LAB_0054de99
    PUSH EBP                            ; 0054de76
    MOV EAX,0x5e8360                    ; 0054de77 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x929                       ; 0054de7c
    PUSH 0x5e8375                       ; 0054de81 | = "SfxSample::pollStream - cannot stream..."
    MOV [0x01d046a0],EAX                ; 0054de86 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0054de8b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054de91
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0054de96
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054de99
        ;   Label: LAB_0054de99
    CMP dword ptr [EAX + 0x60],0x0      ; 0054de9d
    JZ 0x0054dee0                       ; 0054dea1
        ;   XREF to: 0054dee0 (CONDITIONAL_JUMP)  ; LAB_0054dee0
    PUSH EAX                            ; 0054dea3
    CALL sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_0054f930 ; 0054dea4
        ;   XREF to: 0054f930 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_0054f930(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 0054dea9
    TEST EAX,EAX                        ; 0054deac
    JZ 0x0054e115                       ; 0054deae
        ;   XREF to: 0054e115 (CONDITIONAL_JUMP)  ; LAB_0054e115
    PUSH EBP                            ; 0054deb4
    CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00550010 ; 0054deb5
        ;   XREF to: 00550010 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00550010(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054deba
    TEST EAX,EAX                        ; 0054debd
    JNZ 0x0054dee0                      ; 0054debf
        ;   XREF to: 0054dee0 (CONDITIONAL_JUMP)  ; LAB_0054dee0
    CMP dword ptr [EBP + 0x110],0x0     ; 0054dec1
    JL 0x0054dee0                       ; 0054dec8
        ;   XREF to: 0054dee0 (CONDITIONAL_JUMP)  ; LAB_0054dee0
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054deca
    FILD dword ptr [EBP + 0x110]        ; 0054dece
    FCOMP double ptr [EAX + 0x50]       ; 0054ded4
    FNSTSW AX                           ; 0054ded7
    SAHF                                ; 0054ded9
    JBE 0x0054e0a3                      ; 0054deda
        ;   XREF to: 0054e0a3 (CONDITIONAL_JUMP)  ; LAB_0054e0a3
    FILD dword ptr [EBP + 0x10c]        ; 0054dee0
        ;   Label: LAB_0054dee0
    FMUL float ptr [ESP + 0x40]         ; 0054dee6
    MOV EDI,dword ptr [EBP + 0x164]     ; 0054deea
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054def0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 0054def5
    CMP EDI,dword ptr [ESP]             ; 0054def8
    JGE 0x0054df00                      ; 0054defb
        ;   XREF to: 0054df00 (CONDITIONAL_JUMP)  ; LAB_0054df00
    MOV dword ptr [ESP],EDI             ; 0054defd
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054df00
        ;   Label: LAB_0054df00
    FILD dword ptr [EBP + 0x170]        ; 0054df04
    FSUB double ptr [EAX + 0x10c]       ; 0054df0a
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054df10
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8]         ; 0054df15
    CMP dword ptr [ESP + 0x8],0x0       ; 0054df19
    JL 0x0054e127                       ; 0054df1e
        ;   XREF to: 0054e127 (CONDITIONAL_JUMP)  ; LAB_0054e127
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054df24
        ;   Label: LAB_0054df24
    CMP EAX,dword ptr [ESP]             ; 0054df28
    JGE 0x0054e0eb                      ; 0054df2b
        ;   XREF to: 0054e0eb (CONDITIONAL_JUMP)  ; LAB_0054e0eb
    MOV EBX,0x5f5e0ff                   ; 0054df31
    MOV ESI,dword ptr [EBP + 0x158]     ; 0054df36
    MOV dword ptr [ESP + 0xc],EBX       ; 0054df3c
    TEST ESI,ESI                        ; 0054df40
    JZ 0x0054df56                       ; 0054df42
        ;   XREF to: 0054df56 (CONDITIONAL_JUMP)  ; LAB_0054df56
    PUSH 0x3c00                         ; 0054df44
    PUSH EBP                            ; 0054df49
    CALL sound_sndmain.cpp_FUN_0054fd70 ; 0054df4a
        ;   XREF to: 0054fd70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054fd70()
    ADD ESP,0x8                         ; 0054df4f
    MOV dword ptr [ESP + 0xc],EAX       ; 0054df52
    FILD dword ptr [EBP + 0x10c]        ; 0054df56
        ;   Label: LAB_0054df56
    MOV EAX,dword ptr [EBP + 0x164]     ; 0054df5c
    FMUL float ptr [ESP + 0x44]         ; 0054df62
    DEC EAX                             ; 0054df66
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054df67
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x4]         ; 0054df6c
    CMP EAX,dword ptr [ESP + 0x4]       ; 0054df70
    JGE 0x0054df7a                      ; 0054df74
        ;   XREF to: 0054df7a (CONDITIONAL_JUMP)  ; LAB_0054df7a
    MOV dword ptr [ESP + 0x4],EAX       ; 0054df76
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054df7a
        ;   Label: LAB_0054df7a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054df7e
    SUB EAX,EDX                         ; 0054df82
    MOV dword ptr [ESP + 0x1c],EAX      ; 0054df84
    TEST EAX,EAX                        ; 0054df88
    JLE 0x0054e2b2                      ; 0054df8a
        ;   XREF to: 0054e2b2 (CONDITIONAL_JUMP)  ; LAB_0054e2b2
    LEA EAX,[EBP + 0x17c]               ; 0054df90
    MOV dword ptr [ESP + 0x10],EAX      ; 0054df96
    MOV ESI,dword ptr [EBP + 0x170]     ; 0054df9a
        ;   Label: LAB_0054df9a
    TEST ESI,ESI                        ; 0054dfa0
    JL 0x0054dfac                       ; 0054dfa2
        ;   XREF to: 0054dfac (CONDITIONAL_JUMP)  ; LAB_0054dfac
    CMP ESI,dword ptr [EBP + 0x164]     ; 0054dfa4
    JL 0x0054dfdc                       ; 0054dfaa
        ;   XREF to: 0054dfdc (CONDITIONAL_JUMP)  ; LAB_0054dfdc
    MOV ECX,dword ptr [EBP + 0x164]     ; 0054dfac
        ;   Label: LAB_0054dfac
    PUSH ECX                            ; 0054dfb2
    MOV EBX,dword ptr [EBP + 0x170]     ; 0054dfb3
    PUSH EBX                            ; 0054dfb9
    MOV EAX,0x5e83fc                    ; 0054dfba | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x96e                       ; 0054dfbf
    PUSH 0x5e8411                       ; 0054dfc4 | = "nextLoadSampleDest = %d, allocLength ..."
    MOV [0x01d046a0],EAX                ; 0054dfc9 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0054dfce | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054dfd4
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 0054dfd9
    MOV ESI,dword ptr [EBP + 0x170]     ; 0054dfdc
        ;   Label: LAB_0054dfdc
    MOV EBX,dword ptr [EBP + 0x164]     ; 0054dfe2
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0054dfe8
    SUB EBX,ESI                         ; 0054dfec
    CMP EBX,EDI                         ; 0054dfee
    JLE 0x0054dff4                      ; 0054dff0
        ;   XREF to: 0054dff4 (CONDITIONAL_JUMP)  ; LAB_0054dff4
    MOV EBX,EDI                         ; 0054dff2
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054dff4
        ;   Label: LAB_0054dff4
    CMP EBX,EAX                         ; 0054dff8
    JLE 0x0054dffe                      ; 0054dffa
        ;   XREF to: 0054dffe (CONDITIONAL_JUMP)  ; LAB_0054dffe
    MOV EBX,EAX                         ; 0054dffc
    MOV EDX,dword ptr [EBP + 0x110]     ; 0054dffe
        ;   Label: LAB_0054dffe
    XOR EDI,EDI                         ; 0054e004
    TEST EDX,EDX                        ; 0054e006
    JL 0x0054e058                       ; 0054e008
        ;   XREF to: 0054e058 (CONDITIONAL_JUMP)  ; LAB_0054e058
    CMP EDX,dword ptr [EBP + 0x16c]     ; 0054e00a
    JG 0x0054e153                       ; 0054e010
        ;   XREF to: 0054e153 (CONDITIONAL_JUMP)  ; LAB_0054e153
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054e016
    MOV EDX,dword ptr [EAX + 0x68]      ; 0054e01a
    PUSH EDX                            ; 0054e01d
    CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00550010 ; 0054e01e
        ;   XREF to: 00550010 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00550010(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054e023
    TEST EAX,EAX                        ; 0054e026
    JZ 0x0054e13c                       ; 0054e028
        ;   XREF to: 0054e13c (CONDITIONAL_JUMP)  ; LAB_0054e13c
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054e02e
    MOV EAX,dword ptr [EAX + 0x68]      ; 0054e032
    MOV EDX,dword ptr [EAX + 0x110]     ; 0054e035
    CMP EDX,dword ptr [EAX + 0x164]     ; 0054e03b
    JZ 0x0054e13c                       ; 0054e041
        ;   XREF to: 0054e13c (CONDITIONAL_JUMP)  ; LAB_0054e13c
    MOV EDX,dword ptr [EBP + 0x170]     ; 0054e047
    PUSH EDX                            ; 0054e04d
    PUSH EDI                            ; 0054e04e
    PUSH EAX                            ; 0054e04f
    CALL sound_sndmain.cpp_CSfxSample_seek_FUN_0054dc50 ; 0054e050
        ;   XREF to: 0054dc50 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_seek_FUN_0054dc50(CSfxSample * this_ptr, int playback_position, int dest_buffer_offset)
    ADD ESP,0xc                         ; 0054e055
    MOV ECX,0x1                         ; 0054e058
        ;   Label: LAB_0054e058
    MOV ESI,0x2630cb8                   ; 0054e05d
    XOR EAX,EAX                         ; 0054e062
    MOV EDX,dword ptr [EBP + 0x158]     ; 0054e064
    MOV dword ptr [ESP + 0x18],EAX      ; 0054e06a
    MOV dword ptr [ESP + 0x14],ECX      ; 0054e06e
    TEST EDX,EDX                        ; 0054e072
    JNZ 0x0054e179                      ; 0054e074
        ;   XREF to: 0054e179 (CONDITIONAL_JUMP)  ; LAB_0054e179
    PUSH EBX                            ; 0054e07a
    MOV ECX,dword ptr [EBP + 0x170]     ; 0054e07b
    PUSH ECX                            ; 0054e081
    PUSH EBP                            ; 0054e082
    CALL sound_sndmain.cpp_FUN_0054daf0 ; 0054e083
        ;   XREF to: 0054daf0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054daf0()
    ADD ESP,0xc                         ; 0054e088
    MOV ESI,EAX                         ; 0054e08b
    TEST EAX,EAX                        ; 0054e08d
    JNZ 0x0054e16a                      ; 0054e08f
        ;   XREF to: 0054e16a (CONDITIONAL_JUMP)  ; LAB_0054e16a
    PUSH EBP                            ; 0054e095
    PUSH 0x5e843b                       ; 0054e096 | = "Error locking %s while streaming\n"
    CALL sound_sndmain.cpp_FUN_005549c0 ; 0054e09b
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
        ;   Label: LAB_0054e09b
    ADD ESP,0x8                         ; 0054e0a0
    MOV ECX,dword ptr [ESP + 0x24]      ; 0054e0a3
        ;   Label: LAB_0054e0a3
    PUSH ECX                            ; 0054e0a7
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700 ; 0054e0a8
        ;   XREF to: 0054f700 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 0054e0ad
    PUSH EBP                            ; 0054e0b0
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0 ; 0054e0b1
        ;   XREF to: 0054d9b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054e0b6
    XOR EAX,EAX                         ; 0054e0b9
    ADD ESP,0x28                        ; 0054e0bb
    POP EBP                             ; 0054e0be
    POP EDI                             ; 0054e0bf
    POP ESI                             ; 0054e0c0
    POP EBX                             ; 0054e0c1
    RET                                 ; 0054e0c2
    MOV ECX,0x5e82b1                    ; 0054e0c3 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054e0c3
    MOV EBX,0x90a                       ; 0054e0c8
    PUSH 0x5e82c6                       ; 0054e0cd | = "SfxSlot::pollStream - must be locked!"
    MOV dword ptr [0x01d046a0],ECX      ; 0054e0d2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0054e0d8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054e0de
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054e0e3
    JMP 0x0054de08                      ; 0054e0e6
        ;   XREF to: 0054de08 (UNCONDITIONAL_JUMP)  ; LAB_0054de08
    MOV EAX,0x1                         ; 0054e0eb
        ;   Label: LAB_0054e0eb
    ADD ESP,0x28                        ; 0054e0f0
    POP EBP                             ; 0054e0f3
    POP EDI                             ; 0054e0f4
    POP ESI                             ; 0054e0f5
    POP EBX                             ; 0054e0f6
    RET                                 ; 0054e0f7
    CMP EBP,dword ptr [EDX + 0x68]      ; 0054e0f8
        ;   Label: LAB_0054e0f8
    JNZ 0x0054de3d                      ; 0054e0fb
        ;   XREF to: 0054de3d (CONDITIONAL_JUMP)  ; LAB_0054de3d
    JMP 0x0054de60                      ; 0054e101
        ;   XREF to: 0054de60 (UNCONDITIONAL_JUMP)  ; LAB_0054de60
    PUSH 0x5e8336                       ; 0054e106 | = "SfxSample::pollStream - no sound devi..."
        ;   Label: LAB_0054e106
    CALL sound_sndmain.cpp_FUN_005549c0 ; 0054e10b
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 0054e110
    JMP 0x0054e0a3                      ; 0054e113
        ;   XREF to: 0054e0a3 (UNCONDITIONAL_JUMP)  ; LAB_0054e0a3
    PUSH 0x5e83be                       ; 0054e115 | = "SfxSample::pollStream - error querryi..."
        ;   Label: LAB_0054e115
    CALL sound_sndmain.cpp_FUN_005549c0 ; 0054e11a
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 0054e11f
    JMP 0x0054e0a3                      ; 0054e122
        ;   XREF to: 0054e0a3 (UNCONDITIONAL_JUMP)  ; LAB_0054e0a3
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054e127
        ;   Label: LAB_0054e127
    MOV EAX,dword ptr [EBP + 0x164]     ; 0054e12b
    ADD EDX,EAX                         ; 0054e131
    MOV dword ptr [ESP + 0x8],EDX       ; 0054e133
    JMP 0x0054df24                      ; 0054e137
        ;   XREF to: 0054df24 (UNCONDITIONAL_JUMP)  ; LAB_0054df24
    CMP dword ptr [EBP + 0x158],0x0     ; 0054e13c
        ;   Label: LAB_0054e13c
    JZ 0x0054e2b2                       ; 0054e143
        ;   XREF to: 0054e2b2 (CONDITIONAL_JUMP)  ; LAB_0054e2b2
    MOV EDI,0x1                         ; 0054e149
    JMP 0x0054e058                      ; 0054e14e
        ;   XREF to: 0054e058 (UNCONDITIONAL_JUMP)  ; LAB_0054e058
    MOV EAX,EDX                         ; 0054e153
        ;   Label: LAB_0054e153
    SUB EAX,dword ptr [EBP + 0x16c]     ; 0054e155
    CMP EBX,EAX                         ; 0054e15b
    JLE 0x0054e058                      ; 0054e15d
        ;   XREF to: 0054e058 (CONDITIONAL_JUMP)  ; LAB_0054e058
    MOV EBX,EAX                         ; 0054e163
    JMP 0x0054e058                      ; 0054e165
        ;   XREF to: 0054e058 (UNCONDITIONAL_JUMP)  ; LAB_0054e058
    XOR EDX,EDX                         ; 0054e16a
        ;   Label: LAB_0054e16a
    MOV EAX,0x1                         ; 0054e16c
    MOV dword ptr [ESP + 0x14],EDX      ; 0054e171
    MOV dword ptr [ESP + 0x18],EAX      ; 0054e175
    TEST EDI,EDI                        ; 0054e179
        ;   Label: LAB_0054e179
    JZ 0x0054e2f2                       ; 0054e17b
        ;   XREF to: 0054e2f2 (CONDITIONAL_JUMP)  ; LAB_0054e2f2
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054e181
    MOV EAX,dword ptr [EAX + 0x68]      ; 0054e185
    MOV EDX,dword ptr [EAX + 0x108]     ; 0054e188
    IMUL EDX,EBX                        ; 0054e18e
    MOV EAX,dword ptr [EAX + 0x104]     ; 0054e191
    CMP EAX,0x8                         ; 0054e197
    JNC 0x0054e2e6                      ; 0054e19a
        ;   XREF to: 0054e2e6 (CONDITIONAL_JUMP)  ; LAB_0054e2e6
    MOV EDI,0x5e805a                    ; 0054e1a0 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054e1a0
    MOV EAX,0x689                       ; 0054e1a5
    PUSH 0x5e806f                       ; 0054e1aa | = "generateSilence - invalid bit depth!"
    MOV dword ptr [0x01d046a0],EDI      ; 0054e1af | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0054e1b5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054e1ba
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054e1bf
    MOV dword ptr [ESP + 0x20],EBX      ; 0054e1c2
        ;   Label: LAB_0054e1c2
    CMP dword ptr [ESP + 0x14],0x0      ; 0054e1c6
        ;   Label: LAB_0054e1c6
    JZ 0x0054e3be                       ; 0054e1cb
        ;   XREF to: 0054e3be (CONDITIONAL_JUMP)  ; LAB_0054e3be
    MOV ECX,dword ptr [ESP + 0x20]      ; 0054e1d1
    TEST ECX,ECX                        ; 0054e1d5
    JLE 0x0054e3be                      ; 0054e1d7
        ;   XREF to: 0054e3be (CONDITIONAL_JUMP)  ; LAB_0054e3be
    PUSH ECX                            ; 0054e1dd
    MOV EAX,dword ptr [EBP + 0x170]     ; 0054e1de
    PUSH EAX                            ; 0054e1e4
    PUSH EBP                            ; 0054e1e5
    CALL sound_sndmain.cpp_FUN_0054daf0 ; 0054e1e6
        ;   XREF to: 0054daf0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054daf0()
    MOV EDI,EAX                         ; 0054e1eb
    ADD ESP,0xc                         ; 0054e1ed
    TEST EAX,EAX                        ; 0054e1f0
    JZ 0x0054e3b3                       ; 0054e1f2
        ;   XREF to: 0054e3b3 (CONDITIONAL_JUMP)  ; LAB_0054e3b3
    MOV EDX,dword ptr [ESP + 0x20]      ; 0054e1f8
    PUSH EDX                            ; 0054e1fc
    PUSH EBP                            ; 0054e1fd
    CALL sound_sndmain.cpp_FUN_0054fd90 ; 0054e1fe
        ;   XREF to: 0054fd90 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054fd90()
    ADD ESP,0x8                         ; 0054e203
    MOV ESI,0x2630cb8                   ; 0054e206
    MOV ECX,EAX                         ; 0054e20b
    PUSH EDI                            ; 0054e20d
    MOV EAX,ECX                         ; 0054e20e
    SHR ECX,0x2                         ; 0054e210
    MOVSD.REP ES:EDI,ESI                ; 0054e213 | DAT_02630cb8 | DAT_02630cbc
    MOV CL,AL                           ; 0054e215
    AND CL,0x3                          ; 0054e217
    MOVSB.REP ES:EDI,ESI                ; 0054e21a | DAT_02630cbc | DAT_02630cbd
    POP EDI                             ; 0054e21c
    PUSH EBP                            ; 0054e21d
        ;   Label: LAB_0054e21d
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0 ; 0054e21e
        ;   XREF to: 0054dbf0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054e223
    MOV ECX,dword ptr [ESP + 0x20]      ; 0054e226
        ;   Label: LAB_0054e226
    CMP EBX,ECX                         ; 0054e22a
    JGE 0x0054e253                      ; 0054e22c
        ;   XREF to: 0054e253 (CONDITIONAL_JUMP)  ; LAB_0054e253
    PUSH EBX                            ; 0054e22e
    PUSH ECX                            ; 0054e22f
    MOV ESI,0x5e84f0                    ; 0054e230 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x9f3                       ; 0054e235
    PUSH 0x5e8505                       ; 0054e23a | = "MP3 decoded more than batch: r = %d, ..."
    MOV dword ptr [0x01d046a0],ESI      ; 0054e23f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0054e245 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054e24b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 0054e250
    MOV EDX,dword ptr [ESP + 0x20]      ; 0054e253
        ;   Label: LAB_0054e253
    CMP EBX,EDX                         ; 0054e257
    JZ 0x0054e269                       ; 0054e259
        ;   XREF to: 0054e269 (CONDITIONAL_JUMP)  ; LAB_0054e269
    MOV EAX,dword ptr [EBP + 0x16c]     ; 0054e25b
    ADD EAX,EDX                         ; 0054e261
    MOV dword ptr [EBP + 0x110],EAX     ; 0054e263
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054e269
        ;   Label: LAB_0054e269
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0054e26d
    MOV ESI,dword ptr [EBP + 0x16c]     ; 0054e271
    MOV EDI,dword ptr [EBP + 0x170]     ; 0054e277
    MOV EDX,dword ptr [EBP + 0x164]     ; 0054e27d
    ADD ESI,EAX                         ; 0054e283
    SUB EBX,EAX                         ; 0054e285
    ADD EDI,EAX                         ; 0054e287
    MOV dword ptr [EBP + 0x16c],ESI     ; 0054e289
    MOV dword ptr [ESP + 0x1c],EBX      ; 0054e28f
    MOV dword ptr [EBP + 0x170],EDI     ; 0054e293
    CMP EDI,EDX                         ; 0054e299
    JL 0x0054e2a7                       ; 0054e29b
        ;   XREF to: 0054e2a7 (CONDITIONAL_JUMP)  ; LAB_0054e2a7
    MOV dword ptr [EBP + 0x170],0x0     ; 0054e29d
    CMP dword ptr [ESP + 0x1c],0x0      ; 0054e2a7
        ;   Label: LAB_0054e2a7
    JG 0x0054df9a                       ; 0054e2ac
        ;   XREF to: 0054df9a (CONDITIONAL_JUMP)  ; LAB_0054df9a
    MOV EAX,0x1                         ; 0054e2b2
        ;   Label: LAB_0054e2b2
    ADD ESP,0x28                        ; 0054e2b7
    POP EBP                             ; 0054e2ba
    POP EDI                             ; 0054e2bb
    POP ESI                             ; 0054e2bc
    POP EBX                             ; 0054e2bd
    RET                                 ; 0054e2be
    PUSH EDX                            ; 0054e2bf
        ;   Label: LAB_0054e2bf
    PUSH 0x80                           ; 0054e2c0
    PUSH ESI                            ; 0054e2c5 | DAT_02630cb8
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0054e2c6
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0054e2cb
    JMP 0x0054e1c2                      ; 0054e2ce
        ;   XREF to: 0054e1c2 (UNCONDITIONAL_JUMP)  ; LAB_0054e1c2
    ADD EDX,EDX                         ; 0054e2d3
        ;   Label: LAB_0054e2d3
    PUSH EDX                            ; 0054e2d5
    PUSH 0x0                            ; 0054e2d6
    PUSH ESI                            ; 0054e2d8 | DAT_02630cb8
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0054e2d9
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0054e2de
    JMP 0x0054e1c2                      ; 0054e2e1
        ;   XREF to: 0054e1c2 (UNCONDITIONAL_JUMP)  ; LAB_0054e1c2
    JBE 0x0054e2bf                      ; 0054e2e6
        ;   XREF to: 0054e2bf (CONDITIONAL_JUMP)  ; LAB_0054e2bf
        ;   Label: LAB_0054e2e6
    CMP EAX,0x10                        ; 0054e2e8
    JZ 0x0054e2d3                       ; 0054e2eb
        ;   XREF to: 0054e2d3 (CONDITIONAL_JUMP)  ; LAB_0054e2d3
    JMP 0x0054e1a0                      ; 0054e2ed
        ;   XREF to: 0054e1a0 (UNCONDITIONAL_JUMP)  ; LAB_0054e1a0
    MOV ECX,dword ptr [EBP + 0x174]     ; 0054e2f2
        ;   Label: LAB_0054e2f2
    TEST ECX,ECX                        ; 0054e2f8
    JNZ 0x0054e39f                      ; 0054e2fa
        ;   XREF to: 0054e39f (CONDITIONAL_JUMP)  ; LAB_0054e39f
    MOV EDI,dword ptr [ESP + 0x10]      ; 0054e300
    PUSH EDI                            ; 0054e304
    CALL support_trstream.cpp_CInStreamFile_isOpen_FUN_0057d130 ; 0054e305
        ;   XREF to: 0057d130 (UNCONDITIONAL_CALL)  ; bool support_trstream.cpp_CInStreamFile_isOpen_FUN_0057d130(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0054e30a
    TEST EAX,EAX                        ; 0054e30d
    JZ 0x0054e367                       ; 0054e30f
        ;   XREF to: 0054e367 (CONDITIONAL_JUMP)  ; LAB_0054e367
    PUSH EBX                            ; 0054e311
        ;   Label: LAB_0054e311
    PUSH EBP                            ; 0054e312
    CALL sound_sndmain.cpp_FUN_0054fd90 ; 0054e313
        ;   XREF to: 0054fd90 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054fd90()
    ADD ESP,0x8                         ; 0054e318
    PUSH EAX                            ; 0054e31b
    PUSH ESI                            ; 0054e31c
    MOV ECX,dword ptr [ESP + 0x18]      ; 0054e31d
    PUSH ECX                            ; 0054e321
    MOV EDI,EAX                         ; 0054e322
    CALL support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0 ; 0054e324
        ;   XREF to: 0057cfe0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0(CInStreamFile * this_ptr, void * buffer, int count)
    ADD ESP,0xc                         ; 0054e329
    CMP EAX,EDI                         ; 0054e32c
    JNZ 0x0054e38b                      ; 0054e32e
        ;   XREF to: 0054e38b (CONDITIONAL_JUMP)  ; LAB_0054e38b
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054e330
    MOV EAX,dword ptr [EAX + 0x68]      ; 0054e334
    MOV ESI,dword ptr [EAX + 0x104]     ; 0054e337
    MOV dword ptr [ESP + 0x20],EBX      ; 0054e33d
    CMP ESI,0x10                        ; 0054e341
    JNZ 0x0054e1c6                      ; 0054e344
        ;   XREF to: 0054e1c6 (CONDITIONAL_JUMP)  ; LAB_0054e1c6
    XOR EAX,EAX                         ; 0054e34a
    MOV EDX,dword ptr [ESP + 0x24]      ; 0054e34c
        ;   Label: LAB_0054e34c
    MOV EDX,dword ptr [EDX + 0x68]      ; 0054e350
    MOV EDX,dword ptr [EDX + 0x108]     ; 0054e353
    IMUL EDX,EBX                        ; 0054e359
    CMP EAX,EDX                         ; 0054e35c
    JGE 0x0054e1c6                      ; 0054e35e
        ;   XREF to: 0054e1c6 (CONDITIONAL_JUMP)  ; LAB_0054e1c6
    INC EAX                             ; 0054e364
    JMP 0x0054e34c                      ; 0054e365
        ;   XREF to: 0054e34c (UNCONDITIONAL_JUMP)  ; LAB_0054e34c
    MOV EAX,0x5e845d                    ; 0054e367 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054e367
    MOV EDX,0x9c0                       ; 0054e36c
    PUSH 0x5e8472                       ; 0054e371 | = "Can't stream unless we have mp3 decod..."
    MOV [0x01d046a0],EAX                ; 0054e376 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0054e37b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054e381
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054e386
    JMP 0x0054e311                      ; 0054e389
        ;   XREF to: 0054e311 (UNCONDITIONAL_JUMP)  ; LAB_0054e311
    PUSH EBP                            ; 0054e38b
        ;   Label: LAB_0054e38b
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0 ; 0054e38c
        ;   XREF to: 0054dbf0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054e391
    PUSH EBP                            ; 0054e394
    PUSH 0x5e84ac                       ; 0054e395 | = "Error reading %s while streaming\n"
    JMP 0x0054e09b                      ; 0054e39a
        ;   XREF to: 0054e09b (UNCONDITIONAL_JUMP)  ; LAB_0054e09b
    PUSH EBX                            ; 0054e39f
        ;   Label: LAB_0054e39f
    PUSH ESI                            ; 0054e3a0
    PUSH ECX                            ; 0054e3a1
    CALL sound_mp3.cpp_CMP3Decoder_read_FUN_00509fa0 ; 0054e3a2
        ;   XREF to: 00509fa0 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_read_FUN_00509fa0(CMP3Decoder * this_ptr, short * output_buffer, int samples_requested)
    ADD ESP,0xc                         ; 0054e3a7
    MOV dword ptr [ESP + 0x20],EAX      ; 0054e3aa
    JMP 0x0054e1c6                      ; 0054e3ae
        ;   XREF to: 0054e1c6 (UNCONDITIONAL_JUMP)  ; LAB_0054e1c6
    PUSH EBP                            ; 0054e3b3
        ;   Label: LAB_0054e3b3
    PUSH 0x5e84ce                       ; 0054e3b4 | = "Error locking %s while streaming\n"
    JMP 0x0054e09b                      ; 0054e3b9
        ;   XREF to: 0054e09b (UNCONDITIONAL_JUMP)  ; LAB_0054e09b
    CMP dword ptr [ESP + 0x18],0x0      ; 0054e3be
        ;   Label: LAB_0054e3be
    JNZ 0x0054e21d                      ; 0054e3c3
        ;   XREF to: 0054e21d (CONDITIONAL_JUMP)  ; LAB_0054e21d
    JMP 0x0054e226                      ; 0054e3c9
        ;   XREF to: 0054e226 (UNCONDITIONAL_JUMP)  ; LAB_0054e226

