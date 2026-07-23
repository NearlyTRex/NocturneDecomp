; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_00523d10(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x1c]:8  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_00523ea0 at 005240ab
;   sound_sndmain.cpp_CSfxSlot_seek_FUN_00525a80 at 00525b46
;   sound_sndmain.cpp_startSfx_FUN_005265a0 at 00526adc
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00592a41
;   TerminatedCString s_SfxSample_seek_s_isn_t_s_00592a56
;   TerminatedCString s_sound_sndmain_cpp_00592a7d
;   TerminatedCString s_SfxSample_seek_invalid_d_00592a92
;   TerminatedCString s_sound_sndmain_cpp_00592ab4
;   TerminatedCString s_Error_seeking_s_to_d_00592ac9
;   TerminatedCString s_sound_sndmain_cpp_00592ae0
;   TerminatedCString s_SfxSample_seek_no_MP3_an_00592af5
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   crt_stdio.c_fseek_FUN_0056582c
;   FUN_004c8440
;   sound_mp3.cpp_CMP3Decoder_seek_FUN_004e8410
;   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
;   sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523d10
        ;   Label: sound_sndmain.cpp_CSfxSample_seek_FUN_00523d10
    PUSH ESI                            ; 00523d11
    PUSH EDI                            ; 00523d12
    PUSH EBP                            ; 00523d13
    SUB ESP,0xc                         ; 00523d14
    MOV EBX,dword ptr [ESP + 0x20]      ; 00523d17
    MOV ESI,dword ptr [ESP + 0x28]      ; 00523d1b
    CMP dword ptr [EBX + 0x134],0x0     ; 00523d1f
    JL 0x00523deb                       ; 00523d26
        ;   XREF to: 00523deb (CONDITIONAL_JUMP)  ; LAB_00523deb
    MOV EAX,dword ptr [ESP + 0x24]      ; 00523d2c
        ;   Label: LAB_00523d2c
    MOV dword ptr [ESP + 0x8],EAX       ; 00523d30
    PUSH 0x0                            ; 00523d34
    FILD dword ptr [ESP + 0xc]          ; 00523d36
    SUB ESP,0x8                         ; 00523d3a
    FSTP double ptr [ESP]               ; 00523d3d
    PUSH EBX                            ; 00523d40
    CALL sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0 ; 00523d41
        ;   XREF to: 00525de0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0()
    MOV dword ptr [ESP + 0x10],EAX      ; 00523d46
    MOV dword ptr [ESP + 0x14],EDX      ; 00523d4a
    FLD double ptr [ESP + 0x10]         ; 00523d4e
    CALL crt_math.c_round_FUN_00563a30  ; 00523d52
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBX + 0x13c]       ; 00523d57
    MOV EBP,dword ptr [EBX + 0x13c]     ; 00523d5d
    ADD ESP,0x10                        ; 00523d63
    TEST EBP,EBP                        ; 00523d66
    JL 0x00523e14                       ; 00523d68
        ;   XREF to: 00523e14 (CONDITIONAL_JUMP)  ; LAB_00523e14
    TEST ESI,ESI                        ; 00523d6e
        ;   Label: LAB_00523d6e
    JL 0x00523d7a                       ; 00523d70
        ;   XREF to: 00523d7a (CONDITIONAL_JUMP)  ; LAB_00523d7a
    CMP ESI,dword ptr [EBX + 0x138]     ; 00523d72
    JL 0x00523d9d                       ; 00523d78
        ;   XREF to: 00523d9d (CONDITIONAL_JUMP)  ; LAB_00523d9d
    MOV EDX,0x592a7d                    ; 00523d7a | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00523d7a
    MOV ECX,0x79c                       ; 00523d7f
    PUSH 0x592a92                       ; 00523d84 | = "SfxSample::seek - invalid destPtr"
    MOV dword ptr [0x01cc4800],EDX      ; 00523d89 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00523d8f | DAT_01cc4804
    CALL FUN_004c8440                   ; 00523d95
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00523d9a
    MOV dword ptr [EBX + 0x140],ESI     ; 00523d9d
        ;   Label: LAB_00523d9d
    MOV ESI,dword ptr [EBX + 0x144]     ; 00523da3
    TEST ESI,ESI                        ; 00523da9
    JNZ 0x00523e23                      ; 00523dab
        ;   XREF to: 00523e23 (CONDITIONAL_JUMP)  ; LAB_00523e23
    CMP dword ptr [EBX + 0x14c],0x0     ; 00523dad
    JZ 0x00523e69                       ; 00523db4
        ;   XREF to: 00523e69 (CONDITIONAL_JUMP)  ; LAB_00523e69
    PUSH ESI                            ; 00523dba
    PUSH EBX                            ; 00523dbb
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40 ; 00523dbc
        ;   XREF to: 00525c40 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40()
    IMUL EAX,dword ptr [EBX + 0x13c]    ; 00523dc1
    MOV ECX,dword ptr [EBX + 0x148]     ; 00523dc8
    ADD ESP,0x4                         ; 00523dce
    ADD EAX,ECX                         ; 00523dd1
    PUSH EAX                            ; 00523dd3
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00523dd4
    PUSH ESI                            ; 00523dda
    CALL crt_stdio.c_fseek_FUN_0056582c ; 00523ddb
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_0056582c()
    ADD ESP,0xc                         ; 00523de0
    ADD ESP,0xc                         ; 00523de3
        ;   Label: LAB_00523de3
    POP EBP                             ; 00523de6
    POP EDI                             ; 00523de7
    POP ESI                             ; 00523de8
    POP EBX                             ; 00523de9
    RET                                 ; 00523dea
    PUSH EBX                            ; 00523deb
        ;   Label: LAB_00523deb
    MOV ECX,0x592a41                    ; 00523dec | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x791                       ; 00523df1
    PUSH 0x592a56                       ; 00523df6 | = "SfxSample::seek - '%s' isn't streamed!"
    MOV dword ptr [0x01cc4800],ECX      ; 00523dfb | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00523e01 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00523e07
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00523e0c
    JMP 0x00523d2c                      ; 00523e0f
        ;   XREF to: 00523d2c (UNCONDITIONAL_JUMP)  ; LAB_00523d2c
    MOV dword ptr [EBX + 0x13c],0x0     ; 00523e14
        ;   Label: LAB_00523e14
    JMP 0x00523d6e                      ; 00523e1e
        ;   XREF to: 00523d6e (UNCONDITIONAL_JUMP)  ; LAB_00523d6e
    MOV EDI,dword ptr [EBX + 0x13c]     ; 00523e23
        ;   Label: LAB_00523e23
    PUSH EDI                            ; 00523e29
    PUSH ESI                            ; 00523e2a
    CALL sound_mp3.cpp_CMP3Decoder_seek_FUN_004e8410 ; 00523e2b
        ;   XREF to: 004e8410 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_seek_FUN_004e8410()
    ADD ESP,0x8                         ; 00523e30
    TEST EAX,EAX                        ; 00523e33
    JNZ 0x00523de3                      ; 00523e35
        ;   XREF to: 00523de3 (CONDITIONAL_JUMP)  ; LAB_00523de3
    MOV ECX,dword ptr [EBX + 0x13c]     ; 00523e37
    PUSH ECX                            ; 00523e3d
    PUSH EBX                            ; 00523e3e
    MOV EAX,0x592ab4                    ; 00523e3f | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x7a5                       ; 00523e44
    PUSH 0x592ac9                       ; 00523e49 | = "Error seeking %s to %d"
    MOV [0x01cc4800],EAX                ; 00523e4e | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00523e53 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00523e59
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 00523e5e
    ADD ESP,0xc                         ; 00523e61
    POP EBP                             ; 00523e64
    POP EDI                             ; 00523e65
    POP ESI                             ; 00523e66
    POP EBX                             ; 00523e67
    RET                                 ; 00523e68
    PUSH EBX                            ; 00523e69
        ;   Label: LAB_00523e69
    MOV EBP,0x592ae0                    ; 00523e6a | = "..\\sound\\sndmain.cpp"
    MOV EAX,0x7b0                       ; 00523e6f
    PUSH 0x592af5                       ; 00523e74 | = "SfxSample::seek - no MP3 and no wavFi..."
    MOV dword ptr [0x01cc4800],EBP      ; 00523e79 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 00523e7f | DAT_01cc4804
    CALL FUN_004c8440                   ; 00523e84
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00523e89
    ADD ESP,0xc                         ; 00523e8c
    POP EBP                             ; 00523e8f
    POP EDI                             ; 00523e90
    POP ESI                             ; 00523e91
    POP EBX                             ; 00523e92
    RET                                 ; 00523e93

