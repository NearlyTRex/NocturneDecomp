; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_005a65a0 (CSfxSample *this_ptr,int playback_position,int dest_buffer_offset)
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
; XREF[4]:
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730 at 005a698f
;   sound_sndmain.cpp_CSfxSlot_seek_FUN_005a8390 at 005a8456
;   sound_sndmain.cpp_loadStreamingSoundFile_FUN_005a5200 at 005a53f3
;   sound_sndmain.cpp_startSfx_FUN_005a8e90 at 005a93d1
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0064fdfe
;   TerminatedCString s_SfxSample_seek_s_isn_t_s_0064fe13
;   TerminatedCString s_sound_sndmain_cpp_0064fe3a
;   TerminatedCString s_SfxSample_seek_invalid_d_0064fe4f
;   TerminatedCString s_sound_sndmain_cpp_0064fe71
;   TerminatedCString s_Error_seeking_s_to_d_0064fe86
;   TerminatedCString s_sound_sndmain_cpp_0064fe9d
;   TerminatedCString s_SfxSample_seek_no_MP3_an_0064feb2
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_fseek_FUN_005ffacc
;   sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0
;   sound_sndmain.cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0
;   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a65a0
        ;   Label: sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0
    PUSH ESI                            ; 005a65a1
    PUSH EDI                            ; 005a65a2
    PUSH EBP                            ; 005a65a3
    SUB ESP,0xc                         ; 005a65a4
    MOV EBX,dword ptr [ESP + 0x20]      ; 005a65a7
    MOV ESI,dword ptr [ESP + 0x28]      ; 005a65ab
    CMP dword ptr [EBX + 0x15c],0x0     ; 005a65af
    JL 0x005a667b                       ; 005a65b6
        ;   XREF to: 005a667b (CONDITIONAL_JUMP)  ; LAB_005a667b
    MOV EAX,dword ptr [ESP + 0x24]      ; 005a65bc
        ;   Label: LAB_005a65bc
    MOV dword ptr [ESP + 0x8],EAX       ; 005a65c0
    PUSH 0x0                            ; 005a65c4
    FILD dword ptr [ESP + 0xc]          ; 005a65c6
    SUB ESP,0x8                         ; 005a65ca
    FSTP double ptr [ESP]               ; 005a65cd
    PUSH EBX                            ; 005a65d0
    CALL sound_sndmain.cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0 ; 005a65d1
        ;   XREF to: 005a86f0 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
    MOV dword ptr [ESP + 0x10],EAX      ; 005a65d6
    MOV dword ptr [ESP + 0x14],EDX      ; 005a65da
    FLD double ptr [ESP + 0x10]         ; 005a65de
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a65e2
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBX + 0x164]       ; 005a65e7
    MOV EBP,dword ptr [EBX + 0x164]     ; 005a65ed
    ADD ESP,0x10                        ; 005a65f3
    TEST EBP,EBP                        ; 005a65f6
    JL 0x005a66a4                       ; 005a65f8
        ;   XREF to: 005a66a4 (CONDITIONAL_JUMP)  ; LAB_005a66a4
    TEST ESI,ESI                        ; 005a65fe
        ;   Label: LAB_005a65fe
    JL 0x005a660a                       ; 005a6600
        ;   XREF to: 005a660a (CONDITIONAL_JUMP)  ; LAB_005a660a
    CMP ESI,dword ptr [EBX + 0x160]     ; 005a6602
    JL 0x005a662d                       ; 005a6608
        ;   XREF to: 005a662d (CONDITIONAL_JUMP)  ; LAB_005a662d
    MOV EDX,0x64fe3a                    ; 005a660a | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a660a
    MOV ECX,0x7a2                       ; 005a660f
    PUSH 0x64fe4f                       ; 005a6614 | = "SfxSample::seek - invalid destPtr"
    MOV dword ptr [0x02f0ca48],EDX      ; 005a6619 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005a661f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a6625
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a662a
    MOV dword ptr [EBX + 0x168],ESI     ; 005a662d
        ;   Label: LAB_005a662d
    MOV ESI,dword ptr [EBX + 0x16c]     ; 005a6633
    TEST ESI,ESI                        ; 005a6639
    JNZ 0x005a66b3                      ; 005a663b
        ;   XREF to: 005a66b3 (CONDITIONAL_JUMP)  ; LAB_005a66b3
    CMP dword ptr [EBX + 0x174],0x0     ; 005a663d
    JZ 0x005a66f9                       ; 005a6644
        ;   XREF to: 005a66f9 (CONDITIONAL_JUMP)  ; LAB_005a66f9
    PUSH ESI                            ; 005a664a
    PUSH EBX                            ; 005a664b
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550 ; 005a664c
        ;   XREF to: 005a8550 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample * this_ptr)
    IMUL EAX,dword ptr [EBX + 0x164]    ; 005a6651
    MOV ECX,dword ptr [EBX + 0x170]     ; 005a6658
    ADD ESP,0x4                         ; 005a665e
    ADD EAX,ECX                         ; 005a6661
    PUSH EAX                            ; 005a6663
    MOV ESI,dword ptr [EBX + 0x174]     ; 005a6664
    PUSH ESI                            ; 005a666a
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 005a666b
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 005a6670
    ADD ESP,0xc                         ; 005a6673
        ;   Label: LAB_005a6673
    POP EBP                             ; 005a6676
    POP EDI                             ; 005a6677
    POP ESI                             ; 005a6678
    POP EBX                             ; 005a6679
    RET                                 ; 005a667a
    PUSH EBX                            ; 005a667b
        ;   Label: LAB_005a667b
    MOV ECX,0x64fdfe                    ; 005a667c | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x797                       ; 005a6681
    PUSH 0x64fe13                       ; 005a6686 | = "SfxSample::seek - '%s' isn't streamed!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005a668b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005a6691 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a6697
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005a669c
    JMP 0x005a65bc                      ; 005a669f
        ;   XREF to: 005a65bc (UNCONDITIONAL_JUMP)  ; LAB_005a65bc
    MOV dword ptr [EBX + 0x164],0x0     ; 005a66a4
        ;   Label: LAB_005a66a4
    JMP 0x005a65fe                      ; 005a66ae
        ;   XREF to: 005a65fe (UNCONDITIONAL_JUMP)  ; LAB_005a65fe
    MOV EDI,dword ptr [EBX + 0x164]     ; 005a66b3
        ;   Label: LAB_005a66b3
    PUSH EDI                            ; 005a66b9
    PUSH ESI                            ; 005a66ba
    CALL sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0 ; 005a66bb
        ;   XREF to: 00534ba0 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0(CMP3Decoder * this_ptr, int sample_offset)
    ADD ESP,0x8                         ; 005a66c0
    TEST EAX,EAX                        ; 005a66c3
    JNZ 0x005a6673                      ; 005a66c5
        ;   XREF to: 005a6673 (CONDITIONAL_JUMP)  ; LAB_005a6673
    MOV ECX,dword ptr [EBX + 0x164]     ; 005a66c7
    PUSH ECX                            ; 005a66cd
    PUSH EBX                            ; 005a66ce
    MOV EAX,0x64fe71                    ; 005a66cf | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x7ab                       ; 005a66d4
    PUSH 0x64fe86                       ; 005a66d9 | = "Error seeking %s to %d"
    MOV [0x02f0ca48],EAX                ; 005a66de | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005a66e3 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a66e9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 005a66ee
    ADD ESP,0xc                         ; 005a66f1
    POP EBP                             ; 005a66f4
    POP EDI                             ; 005a66f5
    POP ESI                             ; 005a66f6
    POP EBX                             ; 005a66f7
    RET                                 ; 005a66f8
    PUSH EBX                            ; 005a66f9
        ;   Label: LAB_005a66f9
    MOV EBP,0x64fe9d                    ; 005a66fa | = "..\\sound\\sndmain.cpp"
    MOV EAX,0x7b6                       ; 005a66ff
    PUSH 0x64feb2                       ; 005a6704 | = "SfxSample::seek - no MP3 and no wavFi..."
    MOV dword ptr [0x02f0ca48],EBP      ; 005a6709 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005a670f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a6714
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005a6719
    ADD ESP,0xc                         ; 005a671c
    POP EBP                             ; 005a671f
    POP EDI                             ; 005a6720
    POP ESI                             ; 005a6721
    POP EBX                             ; 005a6722
    RET                                 ; 005a6723

