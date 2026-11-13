; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_0054dc50(CSfxSample *this_ptr,int playback_position,int dest_buffer_offset)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   playback_position
; int              Stack[0xc]:4   dest_buffer_offset
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x1c]:8  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   sound_sndmain.cpp_CSfxSlot_seek_FUN_0054fbe0 at 0054fca6
;   sound_sndmain.cpp_FUN_0054c7f0 at 0054ca0d
;   sound_sndmain.cpp_FUN_0054ddf0 at 0054e050
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e81c5
;   TerminatedCString s_SfxSample_seek_s_isn_t_s_005e81da
;   TerminatedCString s_sound_sndmain_cpp_005e8201
;   TerminatedCString s_SfxSample_seek_invalid_d_005e8216
;   TerminatedCString s_sound_sndmain_cpp_005e8238
;   TerminatedCString s_Error_seeking_s_to_d_005e824d
;   TerminatedCString s_sound_sndmain_cpp_005e8264
;   TerminatedCString s_SfxSample_seek_no_MP3_an_005e8279
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_math.c_round_FUN_005b7ff0
;   sound_mp3.cpp_CMP3Decoder_seek_FUN_0050a0e0
;   sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_0054ff30
;   sound_sndmain.cpp_FUN_0054fd90
;   support_trstream.cpp_CInStreamFile_isOpen_FUN_0057d130
;   support_trstream.cpp_CInStreamFile_seek_FUN_0057d0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054dc50
        ;   Label: sound_sndmain.cpp_CSfxSample_seek_FUN_0054dc50
    PUSH ESI                            ; 0054dc51
    PUSH EDI                            ; 0054dc52
    PUSH EBP                            ; 0054dc53
    SUB ESP,0xc                         ; 0054dc54
    MOV EBX,dword ptr [ESP + 0x20]      ; 0054dc57
    MOV ESI,dword ptr [ESP + 0x28]      ; 0054dc5b
    CMP dword ptr [EBX + 0x160],0x0     ; 0054dc5f
    JL 0x0054dd0d                       ; 0054dc66
        ;   XREF to: 0054dd0d (CONDITIONAL_JUMP)  ; LAB_0054dd0d
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054dc6c
        ;   Label: LAB_0054dc6c
    MOV dword ptr [ESP + 0x8],EAX       ; 0054dc70
    PUSH 0x0                            ; 0054dc74
    FILD dword ptr [ESP + 0xc]          ; 0054dc76
    SUB ESP,0x8                         ; 0054dc7a
    FSTP double ptr [ESP]               ; 0054dc7d
    PUSH EBX                            ; 0054dc80
    CALL sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_0054ff30 ; 0054dc81
        ;   XREF to: 0054ff30 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_0054ff30(CSfxSample * this_ptr, double position, uint input_type)
    MOV dword ptr [ESP + 0x10],EAX      ; 0054dc86
    MOV dword ptr [ESP + 0x14],EDX      ; 0054dc8a
    FLD double ptr [ESP + 0x10]         ; 0054dc8e
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054dc92
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EBX + 0x16c]       ; 0054dc97
    MOV EBP,dword ptr [EBX + 0x16c]     ; 0054dc9d
    ADD ESP,0x10                        ; 0054dca3
    TEST EBP,EBP                        ; 0054dca6
    JL 0x0054dd36                       ; 0054dca8
        ;   XREF to: 0054dd36 (CONDITIONAL_JUMP)  ; LAB_0054dd36
    TEST ESI,ESI                        ; 0054dcae
        ;   Label: LAB_0054dcae
    JL 0x0054dcba                       ; 0054dcb0
        ;   XREF to: 0054dcba (CONDITIONAL_JUMP)  ; LAB_0054dcba
    CMP ESI,dword ptr [EBX + 0x164]     ; 0054dcb2
    JL 0x0054dcdd                       ; 0054dcb8
        ;   XREF to: 0054dcdd (CONDITIONAL_JUMP)  ; LAB_0054dcdd
    MOV EDX,0x5e8201                    ; 0054dcba | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054dcba
    MOV ECX,0x8e9                       ; 0054dcbf
    PUSH 0x5e8216                       ; 0054dcc4 | = "SfxSample::seek - invalid destPtr"
    MOV dword ptr [0x01d046a0],EDX      ; 0054dcc9 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0054dccf | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054dcd5
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054dcda
    MOV dword ptr [EBX + 0x170],ESI     ; 0054dcdd
        ;   Label: LAB_0054dcdd
    MOV ESI,dword ptr [EBX + 0x174]     ; 0054dce3
    TEST ESI,ESI                        ; 0054dce9
    JZ 0x0054dd78                       ; 0054dceb
        ;   XREF to: 0054dd78 (CONDITIONAL_JUMP)  ; LAB_0054dd78
    MOV ECX,dword ptr [EBX + 0x16c]     ; 0054dcf1
    PUSH ECX                            ; 0054dcf7
    PUSH ESI                            ; 0054dcf8
    CALL sound_mp3.cpp_CMP3Decoder_seek_FUN_0050a0e0 ; 0054dcf9
        ;   XREF to: 0050a0e0 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_seek_FUN_0050a0e0(CMP3Decoder * this_ptr, int sample_offset)
    ADD ESP,0x8                         ; 0054dcfe
    TEST EAX,EAX                        ; 0054dd01
    JZ 0x0054dd45                       ; 0054dd03
        ;   XREF to: 0054dd45 (CONDITIONAL_JUMP)  ; LAB_0054dd45
    ADD ESP,0xc                         ; 0054dd05
    POP EBP                             ; 0054dd08
    POP EDI                             ; 0054dd09
    POP ESI                             ; 0054dd0a
    POP EBX                             ; 0054dd0b
    RET                                 ; 0054dd0c
    PUSH EBX                            ; 0054dd0d
        ;   Label: LAB_0054dd0d
    MOV ECX,0x5e81c5                    ; 0054dd0e | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x8de                       ; 0054dd13
    PUSH 0x5e81da                       ; 0054dd18 | = "SfxSample::seek - '%s' isn't streamed!"
    MOV dword ptr [0x01d046a0],ECX      ; 0054dd1d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0054dd23 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054dd29
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0054dd2e
    JMP 0x0054dc6c                      ; 0054dd31
        ;   XREF to: 0054dc6c (UNCONDITIONAL_JUMP)  ; LAB_0054dc6c
    MOV dword ptr [EBX + 0x16c],0x0     ; 0054dd36
        ;   Label: LAB_0054dd36
    JMP 0x0054dcae                      ; 0054dd40
        ;   XREF to: 0054dcae (UNCONDITIONAL_JUMP)  ; LAB_0054dcae
    MOV EAX,dword ptr [EBX + 0x16c]     ; 0054dd45
        ;   Label: LAB_0054dd45
    PUSH EAX                            ; 0054dd4b
    PUSH EBX                            ; 0054dd4c
    MOV EDI,0x5e8238                    ; 0054dd4d | = "..\\sound\\sndmain.cpp"
    MOV EBP,0x8f2                       ; 0054dd52
    PUSH 0x5e824d                       ; 0054dd57 | = "Error seeking %s to %d"
    MOV dword ptr [0x01d046a0],EDI      ; 0054dd5c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0054dd62 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054dd68
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 0054dd6d
    ADD ESP,0xc                         ; 0054dd70
    POP EBP                             ; 0054dd73
    POP EDI                             ; 0054dd74
    POP ESI                             ; 0054dd75
    POP EBX                             ; 0054dd76
    RET                                 ; 0054dd77
    LEA ESI,[EBX + 0x17c]               ; 0054dd78
        ;   Label: LAB_0054dd78
    PUSH ESI                            ; 0054dd7e
    CALL support_trstream.cpp_CInStreamFile_isOpen_FUN_0057d130 ; 0054dd7f
        ;   XREF to: 0057d130 (UNCONDITIONAL_CALL)  ; bool support_trstream.cpp_CInStreamFile_isOpen_FUN_0057d130(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0054dd84
    TEST EAX,EAX                        ; 0054dd87
    JZ 0x0054ddb7                       ; 0054dd89
        ;   XREF to: 0054ddb7 (CONDITIONAL_JUMP)  ; LAB_0054ddb7
    PUSH 0x0                            ; 0054dd8b
    MOV EAX,dword ptr [EBX + 0x16c]     ; 0054dd8d
    PUSH EAX                            ; 0054dd93
    PUSH EBX                            ; 0054dd94
    CALL sound_sndmain.cpp_FUN_0054fd90 ; 0054dd95
        ;   XREF to: 0054fd90 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054fd90()
    MOV EDX,dword ptr [EBX + 0x178]     ; 0054dd9a
    ADD ESP,0x8                         ; 0054dda0
    ADD EAX,EDX                         ; 0054dda3
    PUSH EAX                            ; 0054dda5
    PUSH ESI                            ; 0054dda6
    CALL support_trstream.cpp_CInStreamFile_seek_FUN_0057d0c0 ; 0054dda7
        ;   XREF to: 0057d0c0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_seek_FUN_0057d0c0(CInStreamFile * this_ptr, int offset, int origin)
    ADD ESP,0xc                         ; 0054ddac
    ADD ESP,0xc                         ; 0054ddaf
    POP EBP                             ; 0054ddb2
    POP EDI                             ; 0054ddb3
    POP ESI                             ; 0054ddb4
    POP EBX                             ; 0054ddb5
    RET                                 ; 0054ddb6
    PUSH EBX                            ; 0054ddb7
        ;   Label: LAB_0054ddb7
    MOV EDI,0x5e8264                    ; 0054ddb8 | = "..\\sound\\sndmain.cpp"
    MOV EBP,0x8fd                       ; 0054ddbd
    PUSH 0x5e8279                       ; 0054ddc2 | = "SfxSample::seek - no MP3 and no wavFi..."
    MOV dword ptr [0x01d046a0],EDI      ; 0054ddc7 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0054ddcd | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054ddd3
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0054ddd8
    ADD ESP,0xc                         ; 0054dddb
    POP EBP                             ; 0054ddde
    POP EDI                             ; 0054dddf
    POP ESI                             ; 0054dde0
    POP EBX                             ; 0054dde1
    RET                                 ; 0054dde2

