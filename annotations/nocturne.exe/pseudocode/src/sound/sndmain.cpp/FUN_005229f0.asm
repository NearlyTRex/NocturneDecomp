; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * sound_sndmain_cpp_FUN_005229f0(int param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_mp3_00592787
;   TerminatedCString s_mp3_0059278b
;   TerminatedCString s_sound_00592790
;   TerminatedCString s_sound_sndmain_cpp_00592796
;   TerminatedCString s_Out_of_memory_005927ab
;   TerminatedCString s_rb_005927ba
;   TerminatedCString s_sound_005927bd
;   float FLOAT_005a2174 = 2
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_02dc1ed8
;   undefined4 DAT_02dc216c
;   undefined4 DAT_02dc2170
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_math.c_round_FUN_00563a30
;   crt_stdio.c_ftell_FUN_00566e70
;   crt_string.c__stricmp_FUN_00564520
;   crt_string.c_splitpath_FUN_00566498
;   crt_unknown.c_FUN_0056497c
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;   sound_mp3.cpp_CMP3Decoder_ctor_FUN_004e7d90
;   sound_mp3.cpp_CMP3Decoder_openFile_FUN_004e7df0
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60
;   sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10
;   sound_sndmain.cpp_CSfxSample_seek_FUN_00523d10
;   sound_sndmain.cpp_parseWavFile_FUN_00521830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005229f0
        ;   Label: sound_sndmain.cpp_FUN_005229f0
    PUSH ESI                            ; 005229f1
    PUSH EDI                            ; 005229f2
    PUSH EBP                            ; 005229f3
    SUB ESP,0x104                       ; 005229f4
    MOV EBX,dword ptr [0x02dc1ed8]      ; 005229fa | DAT_02dc1ed8
    MOV ESI,dword ptr [ESP + 0x11c]     ; 00522a00
    XOR EDX,EDX                         ; 00522a07
    XOR EBP,EBP                         ; 00522a09
    INC EBX                             ; 00522a0b
        ;   Label: LAB_00522a0b
    CMP EBX,0x40                        ; 00522a0c
    JL 0x00522a13                       ; 00522a0f
        ;   XREF to: 00522a13 (CONDITIONAL_JUMP)  ; LAB_00522a13
    MOV EBX,EBP                         ; 00522a11
    IMUL EAX,EBX,0x168                  ; 00522a13
        ;   Label: LAB_00522a13
    MOV ECX,dword ptr [EAX + 0x2dc2004] ; 00522a19 | DAT_02dc216c
    CMP EBP,ECX                         ; 00522a1f
    JZ 0x00522a56                       ; 00522a21
        ;   XREF to: 00522a56 (CONDITIONAL_JUMP)  ; LAB_00522a56
    INC EDX                             ; 00522a23
        ;   Label: LAB_00522a23
    CMP EDX,0x40                        ; 00522a24
    JL 0x00522a0b                       ; 00522a27
        ;   XREF to: 00522a0b (CONDITIONAL_JUMP)  ; LAB_00522a0b
    XOR EBP,EBP                         ; 00522a29
    MOV dword ptr [ESP + 0x100],EBP     ; 00522a2b
    MOV EBP,dword ptr [ESP + 0x100]     ; 00522a32
        ;   Label: LAB_00522a32
    MOV dword ptr [0x02dc1ed8],EBX      ; 00522a39 | DAT_02dc1ed8
    TEST EBP,EBP                        ; 00522a3f
    JNZ 0x00522a6e                      ; 00522a41
        ;   XREF to: 00522a6e (CONDITIONAL_JUMP)  ; LAB_00522a6e
    XOR EAX,EAX                         ; 00522a43
    MOV EBX,dword ptr [0x02dc1ed8]      ; 00522a45 | DAT_02dc1ed8
    ADD ESP,0x104                       ; 00522a4b
    POP EBP                             ; 00522a51
    POP EDI                             ; 00522a52
    POP ESI                             ; 00522a53
    POP EBX                             ; 00522a54
    RET                                 ; 00522a55
    CMP ECX,dword ptr [EAX + 0x2dc2008] ; 00522a56 | DAT_02dc2170
        ;   Label: LAB_00522a56
    JNZ 0x00522a23                      ; 00522a5c
        ;   XREF to: 00522a23 (CONDITIONAL_JUMP)  ; LAB_00522a23
    MOV EDX,0x2dc1edc                   ; 00522a5e
    ADD EDX,EAX                         ; 00522a63
    MOV dword ptr [ESP + 0x100],EDX     ; 00522a65
    JMP 0x00522a32                      ; 00522a6c
        ;   XREF to: 00522a32 (UNCONDITIONAL_JUMP)  ; LAB_00522a32
    MOV EAX,ESP                         ; 00522a6e
        ;   Label: LAB_00522a6e
    PUSH EAX                            ; 00522a70
    PUSH 0x0                            ; 00522a71
    PUSH 0x0                            ; 00522a73
    PUSH 0x0                            ; 00522a75
    PUSH ESI                            ; 00522a77
    CALL crt_string.c_splitpath_FUN_00566498 ; 00522a78
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_00566498(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 00522a7d
    PUSH 0x592787                       ; 00522a80 | = "mp3"
    LEA EAX,[ESP + 0x4]                 ; 00522a85
    PUSH EAX                            ; 00522a89
    CALL crt_string.c__stricmp_FUN_00564520 ; 00522a8a
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00522a8f
    TEST EAX,EAX                        ; 00522a92
    JNZ 0x00522bf4                      ; 00522a94
        ;   XREF to: 00522bf4 (CONDITIONAL_JUMP)  ; LAB_00522bf4
    PUSH ESI                            ; 00522a9a
        ;   Label: LAB_00522a9a
    PUSH 0x592790                       ; 00522a9b | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 00522aa0
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00522aa5
    TEST EAX,EAX                        ; 00522aa8
    JLE 0x00522ceb                      ; 00522aaa
        ;   XREF to: 00522ceb (CONDITIONAL_JUMP)  ; LAB_00522ceb
    PUSH 0x8630                         ; 00522ab0
    CALL crt_unknown.c_FUN_0056497c     ; 00522ab5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 00522aba
    TEST EAX,EAX                        ; 00522abd
    JZ 0x00522aca                       ; 00522abf
        ;   XREF to: 00522aca (CONDITIONAL_JUMP)  ; LAB_00522aca
    PUSH EAX                            ; 00522ac1
    CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_004e7d90 ; 00522ac2
        ;   XREF to: 004e7d90 (UNCONDITIONAL_CALL)  ; CMP3Decoder * sound_mp3.cpp_CMP3Decoder_ctor_FUN_004e7d90(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00522ac7
    MOV dword ptr [EBP + 0x144],EAX     ; 00522aca
        ;   Label: LAB_00522aca
    TEST EAX,EAX                        ; 00522ad0
    JNZ 0x00522af6                      ; 00522ad2
        ;   XREF to: 00522af6 (CONDITIONAL_JUMP)  ; LAB_00522af6
    MOV EDI,0x592796                    ; 00522ad4 | = "..\\sound\\sndmain.cpp"
    MOV EAX,0x3c8                       ; 00522ad9
    PUSH 0x5927ab                       ; 00522ade | = "Out of memory."
    MOV dword ptr [0x01cc4800],EDI      ; 00522ae3 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00522ae9 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00522aee
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00522af3
    PUSH ESI                            ; 00522af6
        ;   Label: LAB_00522af6
    MOV EDX,dword ptr [EBP + 0x144]     ; 00522af7
    PUSH EDX                            ; 00522afd
    CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_004e7df0 ; 00522afe
        ;   XREF to: 004e7df0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_openFile_FUN_004e7df0()
    ADD ESP,0x8                         ; 00522b03
    MOV EDI,EBP                         ; 00522b06
    PUSH EDI                            ; 00522b08
    MOV AL,byte ptr [ESI]               ; 00522b09
        ;   Label: LAB_00522b09
    MOV byte ptr [EDI],AL               ; 00522b0b
    CMP AL,0x0                          ; 00522b0d
    JZ 0x00522b21                       ; 00522b0f
        ;   XREF to: 00522b21 (CONDITIONAL_JUMP)  ; LAB_00522b21
    MOV AL,byte ptr [ESI + 0x1]         ; 00522b11
    ADD ESI,0x2                         ; 00522b14
    MOV byte ptr [EDI + 0x1],AL         ; 00522b17
    ADD EDI,0x2                         ; 00522b1a
    CMP AL,0x0                          ; 00522b1d
    JNZ 0x00522b09                      ; 00522b1f
        ;   XREF to: 00522b09 (CONDITIONAL_JUMP)  ; LAB_00522b09
    POP EDI                             ; 00522b21
        ;   Label: LAB_00522b21
    MOV dword ptr [EBP + 0x100],0x1     ; 00522b22
    MOV EAX,dword ptr [EBP + 0x144]     ; 00522b2c
    MOV dword ptr [EBP + 0x104],0x10    ; 00522b32
    MOV EAX,dword ptr [EAX + 0x104]     ; 00522b3c
    MOV dword ptr [EBP + 0x108],EAX     ; 00522b42
    MOV EAX,dword ptr [EBP + 0x144]     ; 00522b48
    MOV EAX,dword ptr [EAX + 0x100]     ; 00522b4e
    MOV dword ptr [EBP + 0x110],0xffffffff ; 00522b54
    PUSH EBP                            ; 00522b5e
    MOV dword ptr [EBP + 0x10c],EAX     ; 00522b5f
    CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10 ; 00522b65
        ;   XREF to: 00521e10 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10()
    MOV dword ptr [EBP + 0x128],0x0     ; 00522b6a
    MOV dword ptr [EBP + 0x12c],0x0     ; 00522b74
    FILD dword ptr [EBP + 0x10c]        ; 00522b7e
    MOV dword ptr [EBP + 0x130],0x0     ; 00522b84
    FMUL float ptr [0x005a2174]         ; 00522b8e | FLOAT_005a2174
    MOV dword ptr [EBP + 0x13c],0x0     ; 00522b94
    ADD ESP,0x4                         ; 00522b9e
    MOV dword ptr [EBP + 0x140],0x0     ; 00522ba1
    MOV EAX,dword ptr [ESP + 0x118]     ; 00522bab
    PUSH EBP                            ; 00522bb2
    CALL crt_math.c_round_FUN_00563a30  ; 00522bb3
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [EBP + 0x138]       ; 00522bb8
    MOV dword ptr [EBP + 0x134],EAX     ; 00522bbe
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910 ; 00522bc4
        ;   XREF to: 00523910 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00522bc9
    TEST EAX,EAX                        ; 00522bcc
    JZ 0x00522ceb                       ; 00522bce
        ;   XREF to: 00522ceb (CONDITIONAL_JUMP)  ; LAB_00522ceb
    PUSH 0x0                            ; 00522bd4
        ;   Label: LAB_00522bd4
    PUSH 0x0                            ; 00522bd6
    PUSH EBP                            ; 00522bd8
    CALL sound_sndmain.cpp_CSfxSample_seek_FUN_00523d10 ; 00522bd9
        ;   XREF to: 00523d10 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_seek_FUN_00523d10(CSfxSample * this_ptr, int playback_position, int dest_buffer_offset)
    ADD ESP,0xc                         ; 00522bde
    MOV EAX,EBP                         ; 00522be1
    MOV EBX,dword ptr [0x02dc1ed8]      ; 00522be3 | DAT_02dc1ed8
    ADD ESP,0x104                       ; 00522be9
    POP EBP                             ; 00522bef
    POP EDI                             ; 00522bf0
    POP ESI                             ; 00522bf1
    POP EBX                             ; 00522bf2
    RET                                 ; 00522bf3
    PUSH 0x59278b                       ; 00522bf4 | = ".mp3"
        ;   Label: LAB_00522bf4
    LEA EAX,[ESP + 0x4]                 ; 00522bf9
    PUSH EAX                            ; 00522bfd
    CALL crt_string.c__stricmp_FUN_00564520 ; 00522bfe
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00522c03
    TEST EAX,EAX                        ; 00522c06
    JZ 0x00522a9a                       ; 00522c08
        ;   XREF to: 00522a9a (CONDITIONAL_JUMP)  ; LAB_00522a9a
    PUSH 0x5927ba                       ; 00522c0e | = "rb"
    PUSH ESI                            ; 00522c13
    PUSH 0x5927bd                       ; 00522c14 | = "sound"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00522c19
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00522c1e
    MOV dword ptr [EBP + 0x14c],EAX     ; 00522c21
    TEST EAX,EAX                        ; 00522c27
    JZ 0x00522ceb                       ; 00522c29
        ;   XREF to: 00522ceb (CONDITIONAL_JUMP)  ; LAB_00522ceb
    MOV EDI,EBP                         ; 00522c2f
    PUSH EDI                            ; 00522c31
    MOV AL,byte ptr [ESI]               ; 00522c32
        ;   Label: LAB_00522c32
    MOV byte ptr [EDI],AL               ; 00522c34
    CMP AL,0x0                          ; 00522c36
    JZ 0x00522c4a                       ; 00522c38
        ;   XREF to: 00522c4a (CONDITIONAL_JUMP)  ; LAB_00522c4a
    MOV AL,byte ptr [ESI + 0x1]         ; 00522c3a
    ADD ESI,0x2                         ; 00522c3d
    MOV byte ptr [EDI + 0x1],AL         ; 00522c40
    ADD EDI,0x2                         ; 00522c43
    CMP AL,0x0                          ; 00522c46
    JNZ 0x00522c32                      ; 00522c48
        ;   XREF to: 00522c32 (CONDITIONAL_JUMP)  ; LAB_00522c32
    POP EDI                             ; 00522c4a
        ;   Label: LAB_00522c4a
    MOV ECX,dword ptr [EBP + 0x14c]     ; 00522c4b
    PUSH ECX                            ; 00522c51
    CALL crt_stdio.c_ftell_FUN_00566e70 ; 00522c52
        ;   XREF to: 00566e70 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00566e70(_FILE * file_handle)
    ADD ESP,0x4                         ; 00522c57
    PUSH EBP                            ; 00522c5a
    MOV dword ptr [EBP + 0x148],EAX     ; 00522c5b
    LEA EAX,[EBP + 0x148]               ; 00522c61
    PUSH EAX                            ; 00522c67
    MOV EDI,dword ptr [EBP + 0x14c]     ; 00522c68
    PUSH EDI                            ; 00522c6e
    CALL sound_sndmain.cpp_parseWavFile_FUN_00521830 ; 00522c6f
        ;   XREF to: 00521830 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_parseWavFile_FUN_00521830(_FILE * file_handle, int * file_offset_ptr, CSfxSample * sfx_sample)
    ADD ESP,0xc                         ; 00522c74
    TEST EAX,EAX                        ; 00522c77
    JZ 0x00522ceb                       ; 00522c79
        ;   XREF to: 00522ceb (CONDITIONAL_JUMP)  ; LAB_00522ceb
    PUSH EBP                            ; 00522c7b
    CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10 ; 00522c7c
        ;   XREF to: 00521e10 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10()
    MOV dword ptr [EBP + 0x128],0x0     ; 00522c81
    MOV dword ptr [EBP + 0x12c],0x0     ; 00522c8b
    FILD dword ptr [EBP + 0x10c]        ; 00522c95
    MOV dword ptr [EBP + 0x130],0x0     ; 00522c9b
    FMUL float ptr [0x005a2174]         ; 00522ca5 | FLOAT_005a2174
    MOV dword ptr [EBP + 0x13c],0x0     ; 00522cab
    ADD ESP,0x4                         ; 00522cb5
    MOV dword ptr [EBP + 0x140],0x0     ; 00522cb8
    MOV EAX,dword ptr [ESP + 0x118]     ; 00522cc2
    PUSH EBP                            ; 00522cc9
    CALL crt_math.c_round_FUN_00563a30  ; 00522cca
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [EBP + 0x138]       ; 00522ccf
    MOV dword ptr [EBP + 0x134],EAX     ; 00522cd5
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910 ; 00522cdb
        ;   XREF to: 00523910 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00522ce0
    TEST EAX,EAX                        ; 00522ce3
    JNZ 0x00522bd4                      ; 00522ce5
        ;   XREF to: 00522bd4 (CONDITIONAL_JUMP)  ; LAB_00522bd4
    PUSH EBP                            ; 00522ceb
        ;   Label: LAB_00522ceb
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60 ; 00522cec
        ;   XREF to: 00523a60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00522cf1
    XOR EAX,EAX                         ; 00522cf4
    MOV EBX,dword ptr [0x02dc1ed8]      ; 00522cf6 | DAT_02dc1ed8
    ADD ESP,0x104                       ; 00522cfc
    POP EBP                             ; 00522d02
    POP EDI                             ; 00522d03
    POP ESI                             ; 00522d04
    POP EBX                             ; 00522d05
    RET                                 ; 00522d06

