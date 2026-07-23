; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_CSfxSample_pollStream_FUN_00523ea0(float param_1,float param_2)
;
; Local Variables:
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
;   sound_sndmain.cpp_pollAllStreams_FUN_005298f0 at 0052993e
;   sound_sndmain.cpp_startSfx_FUN_005265a0 at 005267ff
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00592902
;   TerminatedCString s_generateSilence_invalid_00592917
;   TerminatedCString s_sound_sndmain_cpp_00592b2d
;   TerminatedCString s_SfxSlot_kill_must_be_loc_00592b42
;   TerminatedCString s_sound_sndmain_cpp_00592b62
;   TerminatedCString s_SfxSample_pollStream_my_00592b77
;   TerminatedCString s_SfxSample_pollStream_no_00592bac
;   TerminatedCString s_SfxSample_pollStream_err_00592bd6
;   TerminatedCString s_sound_sndmain_cpp_00592c14
;   TerminatedCString s_nextLoadSampleDest_d_all_00592c29
;   TerminatedCString s_Error_locking_s_while_st_00592c53
;   TerminatedCString s_sound_sndmain_cpp_00592c75
;   TerminatedCString s_Can_t_stream_unless_we_h_00592c8a
;   TerminatedCString s_Error_reading_s_while_st_00592cc4
;   TerminatedCString s_Error_locking_s_while_st_00592ce6
;   ... and 10 more
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   crt_memory.c_memset_FUN_00563cc0
;   crt_stdio.c_fread_FUN_005636d0
;   FUN_004c8440
;   FUN_005257e0
;   FUN_00529980
;   sound_mp3.cpp_CMP3Decoder_read_FUN_004e82d0
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60
;   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
;   sound_sndmain.cpp_CSfxSample_lock_FUN_00523ba0
;   sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0
;   sound_sndmain.cpp_CSfxSample_seek_FUN_00523d10
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523ea0
        ;   Label: sound_sndmain.cpp_CSfxSample_pollStream_FUN_00523ea0
    PUSH ESI                            ; 00523ea1
    PUSH EDI                            ; 00523ea2
    PUSH EBP                            ; 00523ea3
    SUB ESP,0x24                        ; 00523ea4
    MOV EBX,dword ptr [ESP + 0x38]      ; 00523ea7
    CMP dword ptr [0x02dc84bc],0x0      ; 00523eab | DAT_02dc84bc
    JLE 0x0052411a                      ; 00523eb2
        ;   XREF to: 0052411a (CONDITIONAL_JUMP)  ; LAB_0052411a
    MOV EDI,dword ptr [EBX + 0x134]     ; 00523eb8
        ;   Label: LAB_00523eb8
    TEST EDI,EDI                        ; 00523ebe
    JL 0x00524142                       ; 00523ec0
        ;   XREF to: 00524142 (CONDITIONAL_JUMP)  ; LAB_00524142
    LEA EAX,[EDI*0x8 + 0x0]             ; 00523ec6
    ADD EAX,EDI                         ; 00523ecd
    MOV ECX,0x2dbd374                   ; 00523ecf
    SHL EAX,0x5                         ; 00523ed4
    ADD ECX,EAX                         ; 00523ed7
    MOV EBP,dword ptr [ECX + 0x70]      ; 00523ed9 | DAT_02dbd3e4
    MOV dword ptr [ESP + 0x10],ECX      ; 00523edc
    TEST EBP,EBP                        ; 00523ee0
    JNZ 0x0052414f                      ; 00523ee2
        ;   XREF to: 0052414f (CONDITIONAL_JUMP)  ; LAB_0052414f
    MOV ECX,0x592b62                    ; 00523ee8 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00523ee8
    MOV ESI,0x7cb                       ; 00523eed
    PUSH 0x592b77                       ; 00523ef2 | = "SfxSample::pollStream - my sfx isn't ..."
    MOV dword ptr [0x01cc4800],ECX      ; 00523ef7 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00523efd | DAT_01cc4804
    CALL FUN_004c8440                   ; 00523f03
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00523f08
    CMP dword ptr [0x02dc8318],0x0      ; 00523f0b | DAT_02dc8318
        ;   Label: LAB_00523f0b
    JZ 0x0052415d                       ; 00523f12
        ;   XREF to: 0052415d (CONDITIONAL_JUMP)  ; LAB_0052415d
    MOV EAX,dword ptr [ESP + 0x10]      ; 00523f18
    CMP dword ptr [EAX + 0x6c],0x0      ; 00523f1c
    JZ 0x00523f40                       ; 00523f20
        ;   XREF to: 00523f40 (CONDITIONAL_JUMP)  ; LAB_00523f40
    PUSH EAX                            ; 00523f22
    CALL FUN_005257e0                   ; 00523f23
        ;   XREF to: 005257e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005257e0()
    ADD ESP,0x4                         ; 00523f28
    TEST EAX,EAX                        ; 00523f2b
    JZ 0x0052416c                       ; 00523f2d
        ;   XREF to: 0052416c (CONDITIONAL_JUMP)  ; LAB_0052416c
    CMP dword ptr [EBX + 0x124],0x0     ; 00523f33
    JZ 0x0052417e                       ; 00523f3a
        ;   XREF to: 0052417e (CONDITIONAL_JUMP)  ; LAB_0052417e
    FILD dword ptr [EBX + 0x10c]        ; 00523f40
        ;   Label: LAB_00523f40
    FMUL float ptr [ESP + 0x3c]         ; 00523f46
    MOV ESI,dword ptr [EBX + 0x138]     ; 00523f4a
    CALL crt_math.c_round_FUN_00563a30  ; 00523f50
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x4]         ; 00523f55
    CMP ESI,dword ptr [ESP + 0x4]       ; 00523f59
    JGE 0x00523f63                      ; 00523f5d
        ;   XREF to: 00523f63 (CONDITIONAL_JUMP)  ; LAB_00523f63
    MOV dword ptr [ESP + 0x4],ESI       ; 00523f5f
    MOV EAX,dword ptr [ESP + 0x10]      ; 00523f63
        ;   Label: LAB_00523f63
    FILD dword ptr [EBX + 0x140]        ; 00523f67
    FSUB double ptr [EAX + 0x118]       ; 00523f6d
    CALL crt_math.c_round_FUN_00563a30  ; 00523f73
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x8]         ; 00523f78
    MOV EDI,dword ptr [ESP + 0x8]       ; 00523f7c
    TEST EDI,EDI                        ; 00523f80
    JL 0x005241a6                       ; 00523f82
        ;   XREF to: 005241a6 (CONDITIONAL_JUMP)  ; LAB_005241a6
    MOV EAX,dword ptr [ESP + 0x8]       ; 00523f88
        ;   Label: LAB_00523f88
    CMP EAX,dword ptr [ESP + 0x4]       ; 00523f8c
    JGE 0x00524142                      ; 00523f90
        ;   XREF to: 00524142 (CONDITIONAL_JUMP)  ; LAB_00524142
    MOV ECX,0x5f5e0ff                   ; 00523f96
    MOV ESI,dword ptr [EBX + 0x130]     ; 00523f9b
    MOV dword ptr [ESP + 0xc],ECX       ; 00523fa1
    TEST ESI,ESI                        ; 00523fa5
    JZ 0x00523fc4                       ; 00523fa7
        ;   XREF to: 00523fc4 (CONDITIONAL_JUMP)  ; LAB_00523fc4
    PUSH EBX                            ; 00523fa9
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40 ; 00523faa
        ;   XREF to: 00525c40 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40()
    MOV ECX,EAX                         ; 00523faf
    MOV EAX,0x3c00                      ; 00523fb1
    MOV EDX,EAX                         ; 00523fb6
    SAR EDX,0x1f                        ; 00523fb8
    IDIV ECX                            ; 00523fbb
    ADD ESP,0x4                         ; 00523fbd
    MOV dword ptr [ESP + 0xc],EAX       ; 00523fc0
    FILD dword ptr [EBX + 0x10c]        ; 00523fc4
        ;   Label: LAB_00523fc4
    MOV EAX,dword ptr [EBX + 0x138]     ; 00523fca
    FMUL float ptr [ESP + 0x40]         ; 00523fd0
    DEC EAX                             ; 00523fd4
    CALL crt_math.c_round_FUN_00563a30  ; 00523fd5
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP]               ; 00523fda
    CMP EAX,dword ptr [ESP]             ; 00523fdd
    JGE 0x00523fe5                      ; 00523fe0
        ;   XREF to: 00523fe5 (CONDITIONAL_JUMP)  ; LAB_00523fe5
    MOV dword ptr [ESP],EAX             ; 00523fe2
    MOV EAX,dword ptr [ESP]             ; 00523fe5
        ;   Label: LAB_00523fe5
    MOV EBP,dword ptr [ESP + 0x8]       ; 00523fe8
    SUB EAX,EBP                         ; 00523fec
    MOV dword ptr [ESP + 0x1c],EAX      ; 00523fee
    TEST EAX,EAX                        ; 00523ff2
    JLE 0x00524327                      ; 00523ff4
        ;   XREF to: 00524327 (CONDITIONAL_JUMP)  ; LAB_00524327
    MOV ECX,dword ptr [EBX + 0x140]     ; 00523ffa
        ;   Label: LAB_00523ffa
    TEST ECX,ECX                        ; 00524000
    JL 0x0052400c                       ; 00524002
        ;   XREF to: 0052400c (CONDITIONAL_JUMP)  ; LAB_0052400c
    CMP ECX,dword ptr [EBX + 0x138]     ; 00524004
    JL 0x0052403d                       ; 0052400a
        ;   XREF to: 0052403d (CONDITIONAL_JUMP)  ; LAB_0052403d
    MOV EAX,dword ptr [EBX + 0x138]     ; 0052400c
        ;   Label: LAB_0052400c
    PUSH EAX                            ; 00524012
    MOV EDX,dword ptr [EBX + 0x140]     ; 00524013
    PUSH EDX                            ; 00524019
    MOV EDI,0x592c14                    ; 0052401a | = "..\\sound\\sndmain.cpp"
    MOV EBP,0x81a                       ; 0052401f
    PUSH 0x592c29                       ; 00524024 | = "nextLoadSampleDest = %d, allocLength ..."
    MOV dword ptr [0x01cc4800],EDI      ; 00524029 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 0052402f | DAT_01cc4804
    CALL FUN_004c8440                   ; 00524035
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 0052403a
    MOV ECX,dword ptr [EBX + 0x140]     ; 0052403d
        ;   Label: LAB_0052403d
    MOV EBP,dword ptr [EBX + 0x138]     ; 00524043
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00524049
    SUB EBP,ECX                         ; 0052404d
    CMP EBP,ESI                         ; 0052404f
    JLE 0x00524055                      ; 00524051
        ;   XREF to: 00524055 (CONDITIONAL_JUMP)  ; LAB_00524055
    MOV EBP,ESI                         ; 00524053
    MOV EDI,dword ptr [ESP + 0xc]       ; 00524055
        ;   Label: LAB_00524055
    CMP EBP,EDI                         ; 00524059
    JLE 0x0052405f                      ; 0052405b
        ;   XREF to: 0052405f (CONDITIONAL_JUMP)  ; LAB_0052405f
    MOV EBP,EDI                         ; 0052405d
    XOR EAX,EAX                         ; 0052405f
        ;   Label: LAB_0052405f
    MOV EDX,dword ptr [EBX + 0x110]     ; 00524061
    MOV dword ptr [ESP + 0x14],EAX      ; 00524067
    TEST EDX,EDX                        ; 0052406b
    JL 0x005240b3                       ; 0052406d
        ;   XREF to: 005240b3 (CONDITIONAL_JUMP)  ; LAB_005240b3
    CMP EDX,dword ptr [EBX + 0x13c]     ; 0052406f
    JG 0x005241d2                       ; 00524075
        ;   XREF to: 005241d2 (CONDITIONAL_JUMP)  ; LAB_005241d2
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052407b
    MOV EAX,dword ptr [EAX + 0x74]      ; 0052407f
    CMP dword ptr [EAX + 0x124],0x0     ; 00524082
    JZ 0x005241b8                       ; 00524089
        ;   XREF to: 005241b8 (CONDITIONAL_JUMP)  ; LAB_005241b8
    MOV EDX,dword ptr [EAX + 0x138]     ; 0052408f
    CMP EDX,dword ptr [EAX + 0x110]     ; 00524095
    JZ 0x005241b8                       ; 0052409b
        ;   XREF to: 005241b8 (CONDITIONAL_JUMP)  ; LAB_005241b8
    MOV EDI,dword ptr [EBX + 0x140]     ; 005240a1
    PUSH EDI                            ; 005240a7
    PUSH 0x0                            ; 005240a8
    PUSH EAX                            ; 005240aa
    CALL sound_sndmain.cpp_CSfxSample_seek_FUN_00523d10 ; 005240ab
        ;   XREF to: 00523d10 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_seek_FUN_00523d10()
    ADD ESP,0xc                         ; 005240b0
    MOV ESI,0x2db1118                   ; 005240b3
        ;   Label: LAB_005240b3
    MOV EDI,0x1                         ; 005240b8
    XOR EAX,EAX                         ; 005240bd
    MOV EDX,dword ptr [EBX + 0x130]     ; 005240bf
    MOV dword ptr [ESP + 0x18],EAX      ; 005240c5
    TEST EDX,EDX                        ; 005240c9
    JNZ 0x005241ef                      ; 005240cb
        ;   XREF to: 005241ef (CONDITIONAL_JUMP)  ; LAB_005241ef
    PUSH EBP                            ; 005240d1
    MOV ECX,dword ptr [EBX + 0x140]     ; 005240d2
    PUSH ECX                            ; 005240d8
    PUSH EBX                            ; 005240d9
    CALL sound_sndmain.cpp_CSfxSample_lock_FUN_00523ba0 ; 005240da
        ;   XREF to: 00523ba0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_lock_FUN_00523ba0()
    ADD ESP,0xc                         ; 005240df
    MOV ESI,EAX                         ; 005240e2
    TEST EAX,EAX                        ; 005240e4
    JNZ 0x005241e9                      ; 005240e6
        ;   XREF to: 005241e9 (CONDITIONAL_JUMP)  ; LAB_005241e9
    PUSH EBX                            ; 005240ec
    PUSH 0x592c53                       ; 005240ed | = "Error locking %s while streaming\n"
    CALL FUN_00529980                   ; 005240f2
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
        ;   Label: LAB_005240f2
    ADD ESP,0x8                         ; 005240f7
    MOV ECX,dword ptr [ESP + 0x10]      ; 005240fa
        ;   Label: LAB_005240fa
    PUSH ECX                            ; 005240fe
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570 ; 005240ff
        ;   XREF to: 00525570 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570()
    ADD ESP,0x4                         ; 00524104
    PUSH EBX                            ; 00524107
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60 ; 00524108
        ;   XREF to: 00523a60 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60()
    ADD ESP,0x4                         ; 0052410d
    XOR EAX,EAX                         ; 00524110
    ADD ESP,0x24                        ; 00524112
    POP EBP                             ; 00524115
    POP EDI                             ; 00524116
    POP ESI                             ; 00524117
    POP EBX                             ; 00524118
    RET                                 ; 00524119
    MOV ECX,0x592b2d                    ; 0052411a | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0052411a
    MOV ESI,0x7be                       ; 0052411f
    PUSH 0x592b42                       ; 00524124 | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01cc4800],ECX      ; 00524129 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0052412f | DAT_01cc4804
    CALL FUN_004c8440                   ; 00524135
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0052413a
    JMP 0x00523eb8                      ; 0052413d
        ;   XREF to: 00523eb8 (UNCONDITIONAL_JUMP)  ; LAB_00523eb8
    MOV EAX,0x1                         ; 00524142
        ;   Label: LAB_00524142
    ADD ESP,0x24                        ; 00524147
    POP EBP                             ; 0052414a
    POP EDI                             ; 0052414b
    POP ESI                             ; 0052414c
    POP EBX                             ; 0052414d
    RET                                 ; 0052414e
    CMP EBX,dword ptr [ECX + 0x74]      ; 0052414f
        ;   Label: LAB_0052414f
    JNZ 0x00523ee8                      ; 00524152
        ;   XREF to: 00523ee8 (CONDITIONAL_JUMP)  ; LAB_00523ee8
    JMP 0x00523f0b                      ; 00524158
        ;   XREF to: 00523f0b (UNCONDITIONAL_JUMP)  ; LAB_00523f0b
    PUSH 0x592bac                       ; 0052415d | = "SfxSample::pollStream - no sound devi..."
        ;   Label: LAB_0052415d
    CALL FUN_00529980                   ; 00524162
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 00524167
    JMP 0x005240fa                      ; 0052416a
        ;   XREF to: 005240fa (UNCONDITIONAL_JUMP)  ; LAB_005240fa
    PUSH 0x592bd6                       ; 0052416c | = "SfxSample::pollStream - error querryi..."
        ;   Label: LAB_0052416c
    CALL FUN_00529980                   ; 00524171
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 00524176
    JMP 0x005240fa                      ; 00524179
        ;   XREF to: 005240fa (UNCONDITIONAL_JUMP)  ; LAB_005240fa
    CMP dword ptr [EBX + 0x110],0x0     ; 0052417e
        ;   Label: LAB_0052417e
    JL 0x00523f40                       ; 00524185
        ;   XREF to: 00523f40 (CONDITIONAL_JUMP)  ; LAB_00523f40
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052418b
    FILD dword ptr [EBX + 0x110]        ; 0052418f
    FCOMP double ptr [EAX + 0x60]       ; 00524195
    FNSTSW AX                           ; 00524198
    SAHF                                ; 0052419a
    JBE 0x005240fa                      ; 0052419b
        ;   XREF to: 005240fa (CONDITIONAL_JUMP)  ; LAB_005240fa
    JMP 0x00523f40                      ; 005241a1
        ;   XREF to: 00523f40 (UNCONDITIONAL_JUMP)  ; LAB_00523f40
    MOV EAX,dword ptr [EBX + 0x138]     ; 005241a6
        ;   Label: LAB_005241a6
    LEA EBP,[EDI + EAX*0x1]             ; 005241ac
    MOV dword ptr [ESP + 0x8],EBP       ; 005241af
    JMP 0x00523f88                      ; 005241b3
        ;   XREF to: 00523f88 (UNCONDITIONAL_JUMP)  ; LAB_00523f88
    CMP dword ptr [EBX + 0x130],0x0     ; 005241b8
        ;   Label: LAB_005241b8
    JZ 0x00524327                       ; 005241bf
        ;   XREF to: 00524327 (CONDITIONAL_JUMP)  ; LAB_00524327
    MOV dword ptr [ESP + 0x14],0x1      ; 005241c5
    JMP 0x005240b3                      ; 005241cd
        ;   XREF to: 005240b3 (UNCONDITIONAL_JUMP)  ; LAB_005240b3
    MOV EAX,EDX                         ; 005241d2
        ;   Label: LAB_005241d2
    SUB EAX,dword ptr [EBX + 0x13c]     ; 005241d4
    CMP EBP,EAX                         ; 005241da
    JLE 0x005240b3                      ; 005241dc
        ;   XREF to: 005240b3 (CONDITIONAL_JUMP)  ; LAB_005240b3
    MOV EBP,EAX                         ; 005241e2
    JMP 0x005240b3                      ; 005241e4
        ;   XREF to: 005240b3 (UNCONDITIONAL_JUMP)  ; LAB_005240b3
    MOV dword ptr [ESP + 0x18],EDI      ; 005241e9
        ;   Label: LAB_005241e9
    XOR EDI,EDI                         ; 005241ed
    CMP dword ptr [ESP + 0x14],0x0      ; 005241ef
        ;   Label: LAB_005241ef
    JZ 0x00524367                       ; 005241f4
        ;   XREF to: 00524367 (CONDITIONAL_JUMP)  ; LAB_00524367
    MOV EAX,dword ptr [ESP + 0x10]      ; 005241fa
    MOV EAX,dword ptr [EAX + 0x74]      ; 005241fe
    MOV ECX,dword ptr [EAX + 0x108]     ; 00524201
    IMUL ECX,EBP                        ; 00524207
    MOV EAX,dword ptr [EAX + 0x104]     ; 0052420a
    CMP EAX,0x8                         ; 00524210
    JNC 0x0052435b                      ; 00524213
        ;   XREF to: 0052435b (CONDITIONAL_JUMP)  ; LAB_0052435b
    MOV EDX,0x592902                    ; 00524219 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00524219
    MOV ECX,0x5c4                       ; 0052421e
    PUSH 0x592917                       ; 00524223 | = "generateSilence - invalid bit depth!"
    MOV dword ptr [0x01cc4800],EDX      ; 00524228 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0052422e | DAT_01cc4804
    CALL FUN_004c8440                   ; 00524234
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00524239
    MOV dword ptr [ESP + 0x20],EBP      ; 0052423c
        ;   Label: LAB_0052423c
    TEST EDI,EDI                        ; 00524240
        ;   Label: LAB_00524240
    JZ 0x005243ff                       ; 00524242
        ;   XREF to: 005243ff (CONDITIONAL_JUMP)  ; LAB_005243ff
    MOV ESI,dword ptr [ESP + 0x20]      ; 00524248
    TEST ESI,ESI                        ; 0052424c
    JLE 0x005243ff                      ; 0052424e
        ;   XREF to: 005243ff (CONDITIONAL_JUMP)  ; LAB_005243ff
    PUSH ESI                            ; 00524254
    MOV EDX,dword ptr [EBX + 0x140]     ; 00524255
    PUSH EDX                            ; 0052425b
    PUSH EBX                            ; 0052425c
    CALL sound_sndmain.cpp_CSfxSample_lock_FUN_00523ba0 ; 0052425d
        ;   XREF to: 00523ba0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_lock_FUN_00523ba0()
    MOV EDI,EAX                         ; 00524262
    ADD ESP,0xc                         ; 00524264
    TEST EAX,EAX                        ; 00524267
    JZ 0x005243f4                       ; 00524269
        ;   XREF to: 005243f4 (CONDITIONAL_JUMP)  ; LAB_005243f4
    PUSH EBX                            ; 0052426f
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40 ; 00524270
        ;   XREF to: 00525c40 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40()
    MOV ECX,ESI                         ; 00524275
    IMUL ECX,EAX                        ; 00524277
    ADD ESP,0x4                         ; 0052427a
    MOV ESI,0x2db1118                   ; 0052427d
    PUSH EDI                            ; 00524282
    MOV EAX,ECX                         ; 00524283
    SHR ECX,0x2                         ; 00524285
    MOVSD.REP ES:EDI,ESI                ; 00524288 | DAT_02db1118 | DAT_02db111c
    MOV CL,AL                           ; 0052428a
    AND CL,0x3                          ; 0052428c
    MOVSB.REP ES:EDI,ESI                ; 0052428f | DAT_02db111c | DAT_02db111d
    POP EDI                             ; 00524291
    PUSH EBX                            ; 00524292
        ;   Label: LAB_00524292
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0 ; 00524293
        ;   XREF to: 00523cb0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0()
    ADD ESP,0x4                         ; 00524298
    MOV ECX,dword ptr [ESP + 0x20]      ; 0052429b
        ;   Label: LAB_0052429b
    CMP EBP,ECX                         ; 0052429f
    JGE 0x005242c8                      ; 005242a1
        ;   XREF to: 005242c8 (CONDITIONAL_JUMP)  ; LAB_005242c8
    PUSH EBP                            ; 005242a3
    PUSH ECX                            ; 005242a4
    MOV ESI,0x592d08                    ; 005242a5 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x893                       ; 005242aa
    PUSH 0x592d1d                       ; 005242af | = "MP3 decoded more than batch: r = %d, ..."
    MOV dword ptr [0x01cc4800],ESI      ; 005242b4 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 005242ba | DAT_01cc4804
    CALL FUN_004c8440                   ; 005242c0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 005242c5
    MOV EDX,dword ptr [ESP + 0x20]      ; 005242c8
        ;   Label: LAB_005242c8
    CMP EBP,EDX                         ; 005242cc
    JZ 0x005242de                       ; 005242ce
        ;   XREF to: 005242de (CONDITIONAL_JUMP)  ; LAB_005242de
    MOV EAX,dword ptr [EBX + 0x13c]     ; 005242d0
    ADD EAX,EDX                         ; 005242d6
    MOV dword ptr [EBX + 0x110],EAX     ; 005242d8
    MOV EAX,dword ptr [ESP + 0x20]      ; 005242de
        ;   Label: LAB_005242de
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005242e2
    MOV EDI,dword ptr [EBX + 0x13c]     ; 005242e6
    MOV EBP,dword ptr [EBX + 0x140]     ; 005242ec
    MOV EDX,dword ptr [EBX + 0x138]     ; 005242f2
    ADD EDI,EAX                         ; 005242f8
    SUB ESI,EAX                         ; 005242fa
    ADD EBP,EAX                         ; 005242fc
    MOV dword ptr [EBX + 0x13c],EDI     ; 005242fe
    MOV dword ptr [ESP + 0x1c],ESI      ; 00524304
    MOV dword ptr [EBX + 0x140],EBP     ; 00524308
    CMP EBP,EDX                         ; 0052430e
    JL 0x0052431c                       ; 00524310
        ;   XREF to: 0052431c (CONDITIONAL_JUMP)  ; LAB_0052431c
    MOV dword ptr [EBX + 0x140],0x0     ; 00524312
    CMP dword ptr [ESP + 0x1c],0x0      ; 0052431c
        ;   Label: LAB_0052431c
    JG 0x00523ffa                       ; 00524321
        ;   XREF to: 00523ffa (CONDITIONAL_JUMP)  ; LAB_00523ffa
    MOV EAX,0x1                         ; 00524327
        ;   Label: LAB_00524327
    ADD ESP,0x24                        ; 0052432c
    POP EBP                             ; 0052432f
    POP EDI                             ; 00524330
    POP ESI                             ; 00524331
    POP EBX                             ; 00524332
    RET                                 ; 00524333
    PUSH ECX                            ; 00524334
        ;   Label: LAB_00524334
    PUSH 0x80                           ; 00524335
    PUSH ESI                            ; 0052433a
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0052433b
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 00524340
    JMP 0x0052423c                      ; 00524343
        ;   XREF to: 0052423c (UNCONDITIONAL_JUMP)  ; LAB_0052423c
    ADD ECX,ECX                         ; 00524348
        ;   Label: LAB_00524348
    PUSH ECX                            ; 0052434a
    PUSH 0x0                            ; 0052434b
    PUSH ESI                            ; 0052434d
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0052434e
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 00524353
    JMP 0x0052423c                      ; 00524356
        ;   XREF to: 0052423c (UNCONDITIONAL_JUMP)  ; LAB_0052423c
    JBE 0x00524334                      ; 0052435b
        ;   XREF to: 00524334 (CONDITIONAL_JUMP)  ; LAB_00524334
        ;   Label: LAB_0052435b
    CMP EAX,0x10                        ; 0052435d
    JZ 0x00524348                       ; 00524360
        ;   XREF to: 00524348 (CONDITIONAL_JUMP)  ; LAB_00524348
    JMP 0x00524219                      ; 00524362
        ;   XREF to: 00524219 (UNCONDITIONAL_JUMP)  ; LAB_00524219
    MOV EDX,dword ptr [EBX + 0x144]     ; 00524367
        ;   Label: LAB_00524367
    TEST EDX,EDX                        ; 0052436d
    JNZ 0x005243e0                      ; 0052436f
        ;   XREF to: 005243e0 (CONDITIONAL_JUMP)  ; LAB_005243e0
    CMP dword ptr [EBX + 0x14c],0x0     ; 00524371
    JNZ 0x0052439d                      ; 00524378
        ;   XREF to: 0052439d (CONDITIONAL_JUMP)  ; LAB_0052439d
    MOV EDX,0x592c75                    ; 0052437a | = "..\\sound\\sndmain.cpp"
    MOV ECX,0x86c                       ; 0052437f
    PUSH 0x592c8a                       ; 00524384 | = "Can't stream unless we have mp3 decod..."
    MOV dword ptr [0x01cc4800],EDX      ; 00524389 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0052438f | DAT_01cc4804
    CALL FUN_004c8440                   ; 00524395
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0052439a
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0052439d
        ;   Label: LAB_0052439d
    PUSH EAX                            ; 005243a3
    PUSH EBP                            ; 005243a4
    PUSH EBX                            ; 005243a5
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40 ; 005243a6
        ;   XREF to: 00525c40 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40()
    ADD ESP,0x4                         ; 005243ab
    PUSH EAX                            ; 005243ae
    PUSH ESI                            ; 005243af
    CALL crt_stdio.c_fread_FUN_005636d0 ; 005243b0
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 005243b5
    MOV dword ptr [ESP + 0x20],EAX      ; 005243b8
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005243bc
    TEST byte ptr [EAX + 0xc],0x20      ; 005243c2
    JZ 0x00524240                       ; 005243c6
        ;   XREF to: 00524240 (CONDITIONAL_JUMP)  ; LAB_00524240
    PUSH EBX                            ; 005243cc
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0 ; 005243cd
        ;   XREF to: 00523cb0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0()
    ADD ESP,0x4                         ; 005243d2
    PUSH EBX                            ; 005243d5
    PUSH 0x592cc4                       ; 005243d6 | = "Error reading %s while streaming\n"
    JMP 0x005240f2                      ; 005243db
        ;   XREF to: 005240f2 (UNCONDITIONAL_JUMP)  ; LAB_005240f2
    PUSH EBP                            ; 005243e0
        ;   Label: LAB_005243e0
    PUSH ESI                            ; 005243e1
    PUSH EDX                            ; 005243e2
    CALL sound_mp3.cpp_CMP3Decoder_read_FUN_004e82d0 ; 005243e3
        ;   XREF to: 004e82d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_read_FUN_004e82d0()
    ADD ESP,0xc                         ; 005243e8
    MOV dword ptr [ESP + 0x20],EAX      ; 005243eb
    JMP 0x00524240                      ; 005243ef
        ;   XREF to: 00524240 (UNCONDITIONAL_JUMP)  ; LAB_00524240
    PUSH EBX                            ; 005243f4
        ;   Label: LAB_005243f4
    PUSH 0x592ce6                       ; 005243f5 | = "Error locking %s while streaming\n"
    JMP 0x005240f2                      ; 005243fa
        ;   XREF to: 005240f2 (UNCONDITIONAL_JUMP)  ; LAB_005240f2
    CMP dword ptr [ESP + 0x18],0x0      ; 005243ff
        ;   Label: LAB_005243ff
    JNZ 0x00524292                      ; 00524404
        ;   XREF to: 00524292 (CONDITIONAL_JUMP)  ; LAB_00524292
    JMP 0x0052429b                      ; 0052440a
        ;   XREF to: 0052429b (UNCONDITIONAL_JUMP)  ; LAB_0052429b

