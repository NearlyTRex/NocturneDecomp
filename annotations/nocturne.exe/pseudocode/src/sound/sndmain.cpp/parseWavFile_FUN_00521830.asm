; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_parseWavFile_FUN_00521830(_FILE *file_handle,int *file_offset_ptr,CSfxSample *sfx_sample)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
; int *            Stack[0x8]:4   file_offset_ptr
; CSfxSample *     Stack[0xc]:4   sfx_sample
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined1       Stack[-0x87]:1  local_87
; undefined1       Stack[-0x86]:1  local_86
; undefined1       Stack[-0x85]:1  local_85
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
; undefined1       Stack[-0x17]:1  local_17
; undefined1       Stack[-0x16]:1  local_16
; undefined1       Stack[-0x15]:1  local_15
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   sound_sndmain.cpp_getSampleInfo_FUN_005279e0 at 00527b03
;   sound_sndmain.cpp_getSfxSample_FUN_00522480 at 00522648
;   sound_sndmain.cpp_loadStreamingSoundFile_FUN_005229f0 at 00522c6f
;   sound_sndmain.cpp_startSfx_FUN_005265a0 at 00526b72
;
; Referenced Globals:
;   TerminatedCString s_RIFF_ID_not_found_at_off_00592132
;   TerminatedCString s_WAV_file_is_invalid_s_0059215a
;   TerminatedCString s_WAVE_ID_not_found_at_off_00592173
;   TerminatedCString s_data_chunk_preceeds_fmt_0059219b
;   TerminatedCString s_Required_fmt_chunk_not_f_005921bd
;   TerminatedCString s_File_contains_invalid_fm_005921dc
;   TerminatedCString s_Invalid_fmt_chunk_tag_04_005921fe
;   TerminatedCString s_Invalid_number_of_channe_00592245
;   TerminatedCString s_Invalid_bytes_sec_value_00592276
;   TerminatedCString s_No_data_chunk_found_0059229a
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_fseek_FUN_0056582c
;   crt_stdio.c_sprintf_FUN_00563c90
;   sound_sndmain.cpp_logSoundError_FUN_00529980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521830
        ;   Label: sound_sndmain.cpp_parseWavFile_FUN_00521830
    PUSH ESI                            ; 00521831
    PUSH EDI                            ; 00521832
    PUSH EBP                            ; 00521833
    SUB ESP,0x78                        ; 00521834
    MOV ESI,dword ptr [ESP + 0x8c]      ; 00521837
    MOV EDI,dword ptr [ESP + 0x90]      ; 0052183e
    PUSH 0x0                            ; 00521845
    MOV EDX,dword ptr [EDI]             ; 00521847
    PUSH EDX                            ; 00521849
    PUSH ESI                            ; 0052184a
    CALL crt_stdio.c_fseek_FUN_0056582c ; 0052184b
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_0056582c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 00521850
    TEST EAX,EAX                        ; 00521853
    JZ 0x0052186e                       ; 00521855
        ;   XREF to: 0052186e (CONDITIONAL_JUMP)  ; LAB_0052186e
    TEST ESI,ESI                        ; 00521857
        ;   Label: LAB_00521857
    JZ 0x00521864                       ; 00521859
        ;   XREF to: 00521864 (CONDITIONAL_JUMP)  ; LAB_00521864
    PUSH ESI                            ; 0052185b
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0052185c
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 00521861
    XOR EAX,EAX                         ; 00521864
        ;   Label: LAB_00521864
    ADD ESP,0x78                        ; 00521866
    POP EBP                             ; 00521869
    POP EDI                             ; 0052186a
    POP ESI                             ; 0052186b
    POP EBX                             ; 0052186c
    RET                                 ; 0052186d
    PUSH ESI                            ; 0052186e
        ;   Label: LAB_0052186e
    PUSH 0x1                            ; 0052186f
    PUSH 0x8                            ; 00521871
    LEA EAX,[ESP + 0x7c]                ; 00521873
    PUSH EAX                            ; 00521877
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00521878
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0052187d
    CMP EAX,0x1                         ; 00521880
    JNZ 0x00521857                      ; 00521883
        ;   XREF to: 00521857 (CONDITIONAL_JUMP)  ; LAB_00521857
    CMP byte ptr [ESP + 0x70],0x52      ; 00521885
    JZ 0x005218a1                       ; 0052188a
        ;   XREF to: 005218a1 (CONDITIONAL_JUMP)  ; LAB_005218a1
    MOV EAX,0x592132                    ; 0052188c | = "\"RIFF\" ID not found at offset 00000..."
        ;   Label: LAB_0052188c
    PUSH EAX                            ; 00521891 | = "\"RIFF\" ID not found at offset 00000..."
    PUSH 0x59215a                       ; 00521892 | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_00529980 ; 00521897
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_00529980(char * format)
    ADD ESP,0x8                         ; 0052189c
    JMP 0x00521857                      ; 0052189f
        ;   XREF to: 00521857 (UNCONDITIONAL_JUMP)  ; LAB_00521857
    CMP byte ptr [ESP + 0x71],0x49      ; 005218a1
        ;   Label: LAB_005218a1
    JNZ 0x0052188c                      ; 005218a6
        ;   XREF to: 0052188c (CONDITIONAL_JUMP)  ; LAB_0052188c
    MOV DH,byte ptr [ESP + 0x72]        ; 005218a8
    CMP DH,0x46                         ; 005218ac
    JNZ 0x0052188c                      ; 005218af
        ;   XREF to: 0052188c (CONDITIONAL_JUMP)  ; LAB_0052188c
    CMP DH,byte ptr [ESP + 0x73]        ; 005218b1
    JNZ 0x0052188c                      ; 005218b5
        ;   XREF to: 0052188c (CONDITIONAL_JUMP)  ; LAB_0052188c
    PUSH ESI                            ; 005218b7
    PUSH 0x1                            ; 005218b8
    PUSH 0x4                            ; 005218ba
    LEA EAX,[ESP + 0xc]                 ; 005218bc
    MOV EBP,dword ptr [ESP + 0x80]      ; 005218c0
    PUSH EAX                            ; 005218c7
    ADD EBP,0x8                         ; 005218c8
    CALL crt_stdio.c_fread_FUN_005636d0 ; 005218cb
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 005218d0
    CMP EAX,0x1                         ; 005218d3
    JNZ 0x00521857                      ; 005218d6
        ;   XREF to: 00521857 (CONDITIONAL_JUMP)  ; LAB_00521857
    CMP byte ptr [ESP],0x57             ; 005218dc
    JZ 0x005218fa                       ; 005218e0
        ;   XREF to: 005218fa (CONDITIONAL_JUMP)  ; LAB_005218fa
    MOV EAX,0x592173                    ; 005218e2 | = "\"WAVE\" ID not found at offset 00000..."
        ;   Label: LAB_005218e2
    PUSH EAX                            ; 005218e7 | = "\"WAVE\" ID not found at offset 00000..."
    PUSH 0x59215a                       ; 005218e8 | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_00529980 ; 005218ed
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_00529980(char * format)
    ADD ESP,0x8                         ; 005218f2
    JMP 0x00521857                      ; 005218f5
        ;   XREF to: 00521857 (UNCONDITIONAL_JUMP)  ; LAB_00521857
    CMP byte ptr [ESP + 0x1],0x41       ; 005218fa
        ;   Label: LAB_005218fa
    JNZ 0x005218e2                      ; 005218ff
        ;   XREF to: 005218e2 (CONDITIONAL_JUMP)  ; LAB_005218e2
    CMP byte ptr [ESP + 0x2],0x56       ; 00521901
    JNZ 0x005218e2                      ; 00521906
        ;   XREF to: 005218e2 (CONDITIONAL_JUMP)  ; LAB_005218e2
    CMP byte ptr [ESP + 0x3],0x45       ; 00521908
    JNZ 0x005218e2                      ; 0052190d
        ;   XREF to: 005218e2 (CONDITIONAL_JUMP)  ; LAB_005218e2
    MOV EBX,0xc                         ; 0052190f
    MOV EAX,dword ptr [EDI]             ; 00521914
        ;   Label: LAB_00521914
    PUSH 0x0                            ; 00521916
    ADD EAX,EBX                         ; 00521918
    PUSH EAX                            ; 0052191a
    PUSH ESI                            ; 0052191b
    CALL crt_stdio.c_fseek_FUN_0056582c ; 0052191c
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_0056582c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 00521921
    TEST EAX,EAX                        ; 00521924
    JNZ 0x00521857                      ; 00521926
        ;   XREF to: 00521857 (CONDITIONAL_JUMP)  ; LAB_00521857
    PUSH ESI                            ; 0052192c
    PUSH 0x1                            ; 0052192d
    PUSH 0x8                            ; 0052192f
    LEA EAX,[ESP + 0x7c]                ; 00521931
    PUSH EAX                            ; 00521935
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00521936
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0052193b
    CMP EAX,0x1                         ; 0052193e
    JNZ 0x00521857                      ; 00521941
        ;   XREF to: 00521857 (CONDITIONAL_JUMP)  ; LAB_00521857
    MOV EAX,dword ptr [ESP + 0x74]      ; 00521947
    ADD EAX,0x8                         ; 0052194b
    ADD EBX,EAX                         ; 0052194e
    CMP byte ptr [ESP + 0x70],0x64      ; 00521950
    JNZ 0x00521985                      ; 00521955
        ;   XREF to: 00521985 (CONDITIONAL_JUMP)  ; LAB_00521985
    MOV DL,byte ptr [ESP + 0x71]        ; 00521957
    CMP DL,0x61                         ; 0052195b
    JNZ 0x00521985                      ; 0052195e
        ;   XREF to: 00521985 (CONDITIONAL_JUMP)  ; LAB_00521985
    CMP byte ptr [ESP + 0x72],0x74      ; 00521960
    JNZ 0x00521985                      ; 00521965
        ;   XREF to: 00521985 (CONDITIONAL_JUMP)  ; LAB_00521985
    CMP DL,byte ptr [ESP + 0x73]        ; 00521967
    JNZ 0x00521985                      ; 0052196b
        ;   XREF to: 00521985 (CONDITIONAL_JUMP)  ; LAB_00521985
    MOV EAX,0x59219b                    ; 0052196d | = "\"data\" chunk preceeds \"fmt\" chunk"
    PUSH EAX                            ; 00521972 | = "\"data\" chunk preceeds \"fmt\" chunk"
    PUSH 0x59215a                       ; 00521973 | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_00529980 ; 00521978
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_00529980(char * format)
    ADD ESP,0x8                         ; 0052197d
    JMP 0x00521857                      ; 00521980
        ;   XREF to: 00521857 (UNCONDITIONAL_JUMP)  ; LAB_00521857
    CMP byte ptr [ESP + 0x70],0x66      ; 00521985
        ;   Label: LAB_00521985
    JNZ 0x005219b9                      ; 0052198a
        ;   XREF to: 005219b9 (CONDITIONAL_JUMP)  ; LAB_005219b9
    CMP byte ptr [ESP + 0x71],0x6d      ; 0052198c
    JNZ 0x005219b9                      ; 00521991
        ;   XREF to: 005219b9 (CONDITIONAL_JUMP)  ; LAB_005219b9
    CMP byte ptr [ESP + 0x72],0x74      ; 00521993
    JNZ 0x005219b9                      ; 00521998
        ;   XREF to: 005219b9 (CONDITIONAL_JUMP)  ; LAB_005219b9
    CMP dword ptr [ESP + 0x74],0xa      ; 0052199a
    JNC 0x005219d9                      ; 0052199f
        ;   XREF to: 005219d9 (CONDITIONAL_JUMP)  ; LAB_005219d9
    MOV EAX,0x5921dc                    ; 005219a1 | = "File contains invalid \"fmt\" chunk"
    PUSH EAX                            ; 005219a6 | = "File contains invalid \"fmt\" chunk"
    PUSH 0x59215a                       ; 005219a7 | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_00529980 ; 005219ac
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_00529980(char * format)
    ADD ESP,0x8                         ; 005219b1
    JMP 0x00521857                      ; 005219b4
        ;   XREF to: 00521857 (UNCONDITIONAL_JUMP)  ; LAB_00521857
    CMP EBX,EBP                         ; 005219b9
        ;   Label: LAB_005219b9
    JLE 0x00521914                      ; 005219bb
        ;   XREF to: 00521914 (CONDITIONAL_JUMP)  ; LAB_00521914
    MOV EAX,0x5921bd                    ; 005219c1 | = "Required \"fmt\" chunk not found"
    PUSH EAX                            ; 005219c6 | = "Required \"fmt\" chunk not found"
    PUSH 0x59215a                       ; 005219c7 | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_00529980 ; 005219cc
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_00529980(char * format)
    ADD ESP,0x8                         ; 005219d1
    JMP 0x00521857                      ; 005219d4
        ;   XREF to: 00521857 (UNCONDITIONAL_JUMP)  ; LAB_00521857
    PUSH ESI                            ; 005219d9
        ;   Label: LAB_005219d9
    PUSH 0x1                            ; 005219da
    PUSH 0xa                            ; 005219dc
    LEA EAX,[ESP + 0x70]                ; 005219de
    PUSH EAX                            ; 005219e2
    CALL crt_stdio.c_fread_FUN_005636d0 ; 005219e3
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 005219e8
    CMP EAX,0x1                         ; 005219eb
    JNZ 0x00521857                      ; 005219ee
        ;   XREF to: 00521857 (CONDITIONAL_JUMP)  ; LAB_00521857
    MOV EDX,dword ptr [ESP + 0x64]      ; 005219f4
    CMP DX,0x1                          ; 005219f8
    JNZ 0x00521ab7                      ; 005219fc
        ;   XREF to: 00521ab7 (CONDITIONAL_JUMP)  ; LAB_00521ab7
    XOR EAX,EAX                         ; 00521a02
    MOV AX,word ptr [ESP + 0x66]        ; 00521a04
    CMP EAX,0x1                         ; 00521a09
    JL 0x00521ae6                       ; 00521a0c
        ;   XREF to: 00521ae6 (CONDITIONAL_JUMP)  ; LAB_00521ae6
    CMP EAX,0x2                         ; 00521a12
    JG 0x00521ae6                       ; 00521a15
        ;   XREF to: 00521ae6 (CONDITIONAL_JUMP)  ; LAB_00521ae6
    IMUL EAX,dword ptr [ESP + 0x68]     ; 00521a1b
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00521a20
    CMP AX,DX                           ; 00521a24
    JNZ 0x00521b17                      ; 00521a27
        ;   XREF to: 00521b17 (CONDITIONAL_JUMP)  ; LAB_00521b17
    MOV EAX,dword ptr [ESP + 0x94]      ; 00521a2d
    MOV dword ptr [EAX + 0x104],0x8     ; 00521a34
    MOV EAX,dword ptr [EDI]             ; 00521a3e
        ;   Label: LAB_00521a3e
    PUSH 0x0                            ; 00521a40
    ADD EAX,EBX                         ; 00521a42
    PUSH EAX                            ; 00521a44
    PUSH ESI                            ; 00521a45
    CALL crt_stdio.c_fseek_FUN_0056582c ; 00521a46
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_0056582c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 00521a4b
    TEST EAX,EAX                        ; 00521a4e
    JNZ 0x00521857                      ; 00521a50
        ;   XREF to: 00521857 (CONDITIONAL_JUMP)  ; LAB_00521857
    PUSH ESI                            ; 00521a56
    PUSH 0x1                            ; 00521a57
    PUSH 0x8                            ; 00521a59
    LEA EAX,[ESP + 0x7c]                ; 00521a5b
    PUSH EAX                            ; 00521a5f
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00521a60
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00521a65
    CMP EAX,0x1                         ; 00521a68
    JNZ 0x00521857                      ; 00521a6b
        ;   XREF to: 00521857 (CONDITIONAL_JUMP)  ; LAB_00521857
    MOV DL,byte ptr [ESP + 0x70]        ; 00521a71
    ADD EBX,0x8                         ; 00521a75
    CMP DL,0x64                         ; 00521a78
    JNZ 0x00521a97                      ; 00521a7b
        ;   XREF to: 00521a97 (CONDITIONAL_JUMP)  ; LAB_00521a97
    MOV DH,byte ptr [ESP + 0x71]        ; 00521a7d
    CMP DH,0x61                         ; 00521a81
    JNZ 0x00521a97                      ; 00521a84
        ;   XREF to: 00521a97 (CONDITIONAL_JUMP)  ; LAB_00521a97
    CMP byte ptr [ESP + 0x72],0x74      ; 00521a86
    JNZ 0x00521a97                      ; 00521a8b
        ;   XREF to: 00521a97 (CONDITIONAL_JUMP)  ; LAB_00521a97
    CMP DH,byte ptr [ESP + 0x73]        ; 00521a8d
    JZ 0x00521b64                       ; 00521a91
        ;   XREF to: 00521b64 (CONDITIONAL_JUMP)  ; LAB_00521b64
    ADD EBX,dword ptr [ESP + 0x74]      ; 00521a97
        ;   Label: LAB_00521a97
    CMP EBX,EBP                         ; 00521a9b
    JLE 0x00521a3e                      ; 00521a9d
        ;   XREF to: 00521a3e (CONDITIONAL_JUMP)  ; LAB_00521a3e
    MOV EAX,0x59229a                    ; 00521a9f | = "No \"data\" chunk found"
    PUSH EAX                            ; 00521aa4 | = "No \"data\" chunk found"
    PUSH 0x59215a                       ; 00521aa5 | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_00529980 ; 00521aaa
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_00529980(char * format)
    ADD ESP,0x8                         ; 00521aaf
    JMP 0x00521857                      ; 00521ab2
        ;   XREF to: 00521857 (UNCONDITIONAL_JUMP)  ; LAB_00521857
    XOR EAX,EAX                         ; 00521ab7
        ;   Label: LAB_00521ab7
    MOV AX,DX                           ; 00521ab9
    PUSH EAX                            ; 00521abc
    PUSH 0x5921fe                       ; 00521abd | = "Invalid \"fmt\" chunk tag: %04X  (Mus..."
    LEA EAX,[ESP + 0x8]                 ; 00521ac2
    PUSH EAX                            ; 00521ac6
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00521ac7
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    LEA EAX,[ESP + 0xc]                 ; 00521acc
    ADD ESP,0xc                         ; 00521ad0
    PUSH EAX                            ; 00521ad3
    PUSH 0x59215a                       ; 00521ad4 | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_00529980 ; 00521ad9
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_00529980(char * format)
    ADD ESP,0x8                         ; 00521ade
    JMP 0x00521857                      ; 00521ae1
        ;   XREF to: 00521857 (UNCONDITIONAL_JUMP)  ; LAB_00521857
    XOR EAX,EAX                         ; 00521ae6
        ;   Label: LAB_00521ae6
    MOV AX,word ptr [ESP + 0x66]        ; 00521ae8
    PUSH EAX                            ; 00521aed
    PUSH 0x592245                       ; 00521aee | = "Invalid number of channels: %u  (must..."
    LEA EAX,[ESP + 0x8]                 ; 00521af3
    PUSH EAX                            ; 00521af7
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00521af8
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    LEA EAX,[ESP + 0xc]                 ; 00521afd
    ADD ESP,0xc                         ; 00521b01
    PUSH EAX                            ; 00521b04
    PUSH 0x59215a                       ; 00521b05 | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_00529980 ; 00521b0a
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_00529980(char * format)
    ADD ESP,0x8                         ; 00521b0f
    JMP 0x00521857                      ; 00521b12
        ;   XREF to: 00521857 (UNCONDITIONAL_JUMP)  ; LAB_00521857
    ADD EAX,EAX                         ; 00521b17
        ;   Label: LAB_00521b17
    CMP AX,DX                           ; 00521b19
    JNZ 0x00521b34                      ; 00521b1c
        ;   XREF to: 00521b34 (CONDITIONAL_JUMP)  ; LAB_00521b34
    MOV EAX,dword ptr [ESP + 0x94]      ; 00521b1e
    MOV dword ptr [EAX + 0x104],0x10    ; 00521b25
    JMP 0x00521a3e                      ; 00521b2f
        ;   XREF to: 00521a3e (UNCONDITIONAL_JUMP)  ; LAB_00521a3e
    XOR EAX,EAX                         ; 00521b34
        ;   Label: LAB_00521b34
    MOV AX,DX                           ; 00521b36
    PUSH EAX                            ; 00521b39
    PUSH EAX                            ; 00521b3a
    PUSH 0x592276                       ; 00521b3b | = "Invalid bytes/sec value: %u (%04Xh)"
    LEA EAX,[ESP + 0xc]                 ; 00521b40
    PUSH EAX                            ; 00521b44
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00521b45
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    LEA EAX,[ESP + 0x10]                ; 00521b4a
    ADD ESP,0x10                        ; 00521b4e
    PUSH EAX                            ; 00521b51
    PUSH 0x59215a                       ; 00521b52 | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_00529980 ; 00521b57
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_00529980(char * format)
    ADD ESP,0x8                         ; 00521b5c
    JMP 0x00521857                      ; 00521b5f
        ;   XREF to: 00521857 (UNCONDITIONAL_JUMP)  ; LAB_00521857
    MOV EDX,dword ptr [EDI]             ; 00521b64
        ;   Label: LAB_00521b64
    ADD EDX,EBX                         ; 00521b66
    XOR EAX,EAX                         ; 00521b68
    MOV dword ptr [EDI],EDX             ; 00521b6a
    MOV EDX,dword ptr [ESP + 0x94]      ; 00521b6c
    MOV AX,word ptr [ESP + 0x66]        ; 00521b73
    XOR EBX,EBX                         ; 00521b78
    MOV dword ptr [EDX + 0x108],EAX     ; 00521b7a
    MOV BX,AX                           ; 00521b80
    MOV EAX,dword ptr [ESP + 0x74]      ; 00521b83
    XOR EDX,EDX                         ; 00521b87
    DIV EBX                             ; 00521b89
    MOV EDX,dword ptr [ESP + 0x94]      ; 00521b8b
    MOV EBX,EAX                         ; 00521b92
    MOV EDX,dword ptr [EDX + 0x104]     ; 00521b94
    MOV EAX,dword ptr [ESP + 0x94]      ; 00521b9a
    SAR EDX,0x1f                        ; 00521ba1
    MOV EAX,dword ptr [EAX + 0x104]     ; 00521ba4
    SHL EDX,0x3                         ; 00521baa
    SBB EAX,EDX                         ; 00521bad
    SAR EAX,0x3                         ; 00521baf
    MOV ESI,EAX                         ; 00521bb2
    XOR EDX,EDX                         ; 00521bb4
    MOV EAX,EBX                         ; 00521bb6
    DIV ESI                             ; 00521bb8
    MOV EDX,dword ptr [ESP + 0x94]      ; 00521bba
    MOV dword ptr [EDX + 0x110],EAX     ; 00521bc1
    XOR EAX,EAX                         ; 00521bc7
    MOV AX,word ptr [ESP + 0x68]        ; 00521bc9
    MOV dword ptr [EDX + 0x10c],EAX     ; 00521bce
    MOV EAX,0x1                         ; 00521bd4
    ADD ESP,0x78                        ; 00521bd9
    POP EBP                             ; 00521bdc
    POP EDI                             ; 00521bdd
    POP ESI                             ; 00521bde
    POP EBX                             ; 00521bdf
    RET                                 ; 00521be0

