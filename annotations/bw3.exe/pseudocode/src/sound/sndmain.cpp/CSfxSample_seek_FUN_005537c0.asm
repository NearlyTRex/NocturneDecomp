; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_005537c0(CSfxSample *this_ptr,int playback_position,int dest_buffer_offset)
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
;   sound_sndmain.cpp_CSfxSlot_seek_FUN_00555750 at 00555816
;   sound_sndmain.cpp_FUN_00552350 at 0055256d
;   sound_sndmain.cpp_FUN_00553960 at 00553bc0
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d2ca9
;   TerminatedCString s_SfxSample_seek_s_isn_t_s_005d2cbe
;   TerminatedCString s_sound_sndmain_cpp_005d2ce5
;   TerminatedCString s_SfxSample_seek_invalid_d_005d2cfa
;   TerminatedCString s_sound_sndmain_cpp_005d2d1c
;   TerminatedCString s_Error_seeking_s_to_d_005d2d31
;   TerminatedCString s_sound_sndmain_cpp_005d2d48
;   TerminatedCString s_SfxSample_seek_no_MP3_an_005d2d5d
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_math.c_round_FUN_005a3120
;   sound_mp3.cpp_CMP3Decoder_seek_FUN_00502bc0
;   sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_00555aa0
;   sound_sndmain.cpp_FUN_00555900
;   unkafter_turret.cpp_CInStreamFile_isOpen_FUN_00573d60
;   unkafter_turret.cpp_CInStreamFile_seek_FUN_00573cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005537c0
        ;   Label: sound_sndmain.cpp_CSfxSample_seek_FUN_005537c0
    PUSH ESI                            ; 005537c1
    PUSH EDI                            ; 005537c2
    PUSH EBP                            ; 005537c3
    SUB ESP,0xc                         ; 005537c4
    MOV EBX,dword ptr [ESP + 0x20]      ; 005537c7
    MOV ESI,dword ptr [ESP + 0x28]      ; 005537cb
    CMP dword ptr [EBX + 0x160],0x0     ; 005537cf
    JL 0x0055387d                       ; 005537d6
        ;   XREF to: 0055387d (CONDITIONAL_JUMP)  ; LAB_0055387d
    MOV EAX,dword ptr [ESP + 0x24]      ; 005537dc
        ;   Label: LAB_005537dc
    MOV dword ptr [ESP + 0x8],EAX       ; 005537e0
    PUSH 0x0                            ; 005537e4
    FILD dword ptr [ESP + 0xc]          ; 005537e6
    SUB ESP,0x8                         ; 005537ea
    FSTP double ptr [ESP]               ; 005537ed
    PUSH EBX                            ; 005537f0
    CALL sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_00555aa0 ; 005537f1
        ;   XREF to: 00555aa0 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_00555aa0(CSfxSample * this_ptr, double position, uint input_type)
    MOV dword ptr [ESP + 0x10],EAX      ; 005537f6
    MOV dword ptr [ESP + 0x14],EDX      ; 005537fa
    FLD double ptr [ESP + 0x10]         ; 005537fe
    CALL crt_math.c_round_FUN_005a3120  ; 00553802
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBX + 0x16c]       ; 00553807
    MOV EBP,dword ptr [EBX + 0x16c]     ; 0055380d
    ADD ESP,0x10                        ; 00553813
    TEST EBP,EBP                        ; 00553816
    JL 0x005538a6                       ; 00553818
        ;   XREF to: 005538a6 (CONDITIONAL_JUMP)  ; LAB_005538a6
    TEST ESI,ESI                        ; 0055381e
        ;   Label: LAB_0055381e
    JL 0x0055382a                       ; 00553820
        ;   XREF to: 0055382a (CONDITIONAL_JUMP)  ; LAB_0055382a
    CMP ESI,dword ptr [EBX + 0x164]     ; 00553822
    JL 0x0055384d                       ; 00553828
        ;   XREF to: 0055384d (CONDITIONAL_JUMP)  ; LAB_0055384d
    MOV EDX,0x5d2ce5                    ; 0055382a | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0055382a
    MOV ECX,0x8eb                       ; 0055382f
    PUSH 0x5d2cfa                       ; 00553834 | = "SfxSample::seek - invalid destPtr"
    MOV dword ptr [0x01d71de0],EDX      ; 00553839 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0055383f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00553845
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0055384a
    MOV dword ptr [EBX + 0x170],ESI     ; 0055384d
        ;   Label: LAB_0055384d
    MOV ESI,dword ptr [EBX + 0x174]     ; 00553853
    TEST ESI,ESI                        ; 00553859
    JZ 0x005538e8                       ; 0055385b
        ;   XREF to: 005538e8 (CONDITIONAL_JUMP)  ; LAB_005538e8
    MOV ECX,dword ptr [EBX + 0x16c]     ; 00553861
    PUSH ECX                            ; 00553867
    PUSH ESI                            ; 00553868
    CALL sound_mp3.cpp_CMP3Decoder_seek_FUN_00502bc0 ; 00553869
        ;   XREF to: 00502bc0 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_seek_FUN_00502bc0(CMP3Decoder * this_ptr, int sample_offset)
    ADD ESP,0x8                         ; 0055386e
    TEST EAX,EAX                        ; 00553871
    JZ 0x005538b5                       ; 00553873
        ;   XREF to: 005538b5 (CONDITIONAL_JUMP)  ; LAB_005538b5
    ADD ESP,0xc                         ; 00553875
    POP EBP                             ; 00553878
    POP EDI                             ; 00553879
    POP ESI                             ; 0055387a
    POP EBX                             ; 0055387b
    RET                                 ; 0055387c
    PUSH EBX                            ; 0055387d
        ;   Label: LAB_0055387d
    MOV ECX,0x5d2ca9                    ; 0055387e | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x8e0                       ; 00553883
    PUSH 0x5d2cbe                       ; 00553888 | = "SfxSample::seek - '%s' isn't streamed!"
    MOV dword ptr [0x01d71de0],ECX      ; 0055388d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00553893 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00553899
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0055389e
    JMP 0x005537dc                      ; 005538a1
        ;   XREF to: 005537dc (UNCONDITIONAL_JUMP)  ; LAB_005537dc
    MOV dword ptr [EBX + 0x16c],0x0     ; 005538a6
        ;   Label: LAB_005538a6
    JMP 0x0055381e                      ; 005538b0
        ;   XREF to: 0055381e (UNCONDITIONAL_JUMP)  ; LAB_0055381e
    MOV EAX,dword ptr [EBX + 0x16c]     ; 005538b5
        ;   Label: LAB_005538b5
    PUSH EAX                            ; 005538bb
    PUSH EBX                            ; 005538bc
    MOV EDI,0x5d2d1c                    ; 005538bd | = "..\\sound\\sndmain.cpp"
    MOV EBP,0x8f4                       ; 005538c2
    PUSH 0x5d2d31                       ; 005538c7 | = "Error seeking %s to %d"
    MOV dword ptr [0x01d71de0],EDI      ; 005538cc | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 005538d2 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005538d8
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 005538dd
    ADD ESP,0xc                         ; 005538e0
    POP EBP                             ; 005538e3
    POP EDI                             ; 005538e4
    POP ESI                             ; 005538e5
    POP EBX                             ; 005538e6
    RET                                 ; 005538e7
    LEA ESI,[EBX + 0x17c]               ; 005538e8
        ;   Label: LAB_005538e8
    PUSH ESI                            ; 005538ee
    CALL unkafter_turret.cpp_CInStreamFile_isOpen_FUN_00573d60 ; 005538ef
        ;   XREF to: 00573d60 (UNCONDITIONAL_CALL)  ; bool unkafter_turret.cpp_CInStreamFile_isOpen_FUN_00573d60(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 005538f4
    TEST EAX,EAX                        ; 005538f7
    JZ 0x00553927                       ; 005538f9
        ;   XREF to: 00553927 (CONDITIONAL_JUMP)  ; LAB_00553927
    PUSH 0x0                            ; 005538fb
    MOV EAX,dword ptr [EBX + 0x16c]     ; 005538fd
    PUSH EAX                            ; 00553903
    PUSH EBX                            ; 00553904
    CALL sound_sndmain.cpp_FUN_00555900 ; 00553905
        ;   XREF to: 00555900 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00555900()
    MOV EDX,dword ptr [EBX + 0x178]     ; 0055390a
    ADD ESP,0x8                         ; 00553910
    ADD EAX,EDX                         ; 00553913
    PUSH EAX                            ; 00553915
    PUSH ESI                            ; 00553916
    CALL unkafter_turret.cpp_CInStreamFile_seek_FUN_00573cf0 ; 00553917
        ;   XREF to: 00573cf0 (UNCONDITIONAL_CALL)  ; undefined4 unkafter_turret.cpp_CInStreamFile_seek_FUN_00573cf0(CInStreamFile * this_ptr, int param_2, uint param_3)
    ADD ESP,0xc                         ; 0055391c
    ADD ESP,0xc                         ; 0055391f
    POP EBP                             ; 00553922
    POP EDI                             ; 00553923
    POP ESI                             ; 00553924
    POP EBX                             ; 00553925
    RET                                 ; 00553926
    PUSH EBX                            ; 00553927
        ;   Label: LAB_00553927
    MOV EDI,0x5d2d48                    ; 00553928 | = "..\\sound\\sndmain.cpp"
    MOV EBP,0x8ff                       ; 0055392d
    PUSH 0x5d2d5d                       ; 00553932 | = "SfxSample::seek - no MP3 and no wavFi..."
    MOV dword ptr [0x01d71de0],EDI      ; 00553937 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0055393d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00553943
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00553948
    ADD ESP,0xc                         ; 0055394b
    POP EBP                             ; 0055394e
    POP EDI                             ; 0055394f
    POP ESI                             ; 00553950
    POP EBX                             ; 00553951
    RET                                 ; 00553952

