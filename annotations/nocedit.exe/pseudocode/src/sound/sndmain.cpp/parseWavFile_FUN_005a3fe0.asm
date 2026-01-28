; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_parseWavFile_FUN_005a3fe0 (FILE *file_handle,long *file_offset_ptr,CSfxSample *sfx_sample)
;
; Parameters:
; FILE *           Stack[0x4]:4   file_handle
; long *           Stack[0x8]:4   file_offset_ptr
; CSfxSample *     Stack[0xc]:4   sfx_sample
; Local Variables:
; undefined1       Stack[-0x88]:1  local_88
; undefined1       Stack[-0x87]:1  local_87
; undefined1       Stack[-0x86]:1  local_86
; undefined1       Stack[-0x85]:1  local_85
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
; undefined1       Stack[-0x17]:1  local_17
; undefined1       Stack[-0x16]:1  local_16
; undefined1       Stack[-0x15]:1  local_15
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 at 005aa51d
;   sound_sndmain.cpp_getSfxSample_FUN_005a4c80 at 005a4e48
;   sound_sndmain.cpp_loadStreamingSoundFile_FUN_005a5200 at 005a5489
;   sound_sndmain.cpp_startSfx_FUN_005a8e90 at 005a9467
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0064f3bb
;   TerminatedCString s_RIFF_ID_not_found_at_off_0064f3d0
;   TerminatedCString s_WAV_file_is_invalid_s_0064f3f8
;   TerminatedCString s_WAVE_ID_not_found_at_off_0064f411
;   TerminatedCString s_data_chunk_preceeds_fmt__0064f439
;   TerminatedCString s_Required_fmt_chunk_not_f_0064f45b
;   TerminatedCString s_File_contains_invalid_fm_0064f47a
;   TerminatedCString s_Invalid_fmt_chunk_tag_04_0064f49c
;   TerminatedCString s_Invalid_number_of_channe_0064f4e3
;   TerminatedCString s_Invalid_bytes_sec_value__0064f514
;   TerminatedCString s_No_data_chunk_found_0064f538
;
; Called Functions:
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fseek_FUN_005ffacc
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3fe0
        ;   Label: sound_sndmain.cpp_parseWavFile_FUN_005a3fe0
    PUSH ESI                            ; 005a3fe1
    PUSH EDI                            ; 005a3fe2
    PUSH EBP                            ; 005a3fe3
    SUB ESP,0x78                        ; 005a3fe4
    MOV ESI,dword ptr [ESP + 0x8c]      ; 005a3fe7
    MOV EDI,dword ptr [ESP + 0x90]      ; 005a3fee
    PUSH 0x0                            ; 005a3ff5
    MOV EDX,dword ptr [EDI]             ; 005a3ff7
    PUSH EDX                            ; 005a3ff9
    PUSH ESI                            ; 005a3ffa
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 005a3ffb
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 005a4000
    TEST EAX,EAX                        ; 005a4003
    JZ 0x005a4028                       ; 005a4005
        ;   XREF to: 005a4028 (CONDITIONAL_JUMP)  ; LAB_005a4028
    TEST ESI,ESI                        ; 005a4007
        ;   Label: LAB_005a4007
    JZ 0x005a401e                       ; 005a4009
        ;   XREF to: 005a401e (CONDITIONAL_JUMP)  ; LAB_005a401e
    PUSH 0x181                          ; 005a400b
    PUSH 0x64f3bb                       ; 005a4010 | = "..\\sound\\sndmain.cpp"
    PUSH ESI                            ; 005a4015
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005a4016
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005a401b
    XOR EAX,EAX                         ; 005a401e
        ;   Label: LAB_005a401e
    ADD ESP,0x78                        ; 005a4020
    POP EBP                             ; 005a4023
    POP EDI                             ; 005a4024
    POP ESI                             ; 005a4025
    POP EBX                             ; 005a4026
    RET                                 ; 005a4027
    PUSH ESI                            ; 005a4028
        ;   Label: LAB_005a4028
    PUSH 0x1                            ; 005a4029
    PUSH 0x8                            ; 005a402b
    LEA EAX,[ESP + 0x7c]                ; 005a402d
    PUSH EAX                            ; 005a4031
    CALL crt_stdio.c_fread_FUN_005fd990 ; 005a4032
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 005a4037
    CMP EAX,0x1                         ; 005a403a
    JNZ 0x005a4007                      ; 005a403d
        ;   XREF to: 005a4007 (CONDITIONAL_JUMP)  ; LAB_005a4007
    CMP byte ptr [ESP + 0x70],0x52      ; 005a403f
    JZ 0x005a405b                       ; 005a4044
        ;   XREF to: 005a405b (CONDITIONAL_JUMP)  ; LAB_005a405b
    MOV EAX,0x64f3d0                    ; 005a4046 | = "\"RIFF\" ID not found at offset 00000..."
        ;   Label: LAB_005a4046
    PUSH EAX                            ; 005a404b | = "\"RIFF\" ID not found at offset 00000..."
    PUSH 0x64f3f8                       ; 005a404c | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a4051
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x8                         ; 005a4056
    JMP 0x005a4007                      ; 005a4059
        ;   XREF to: 005a4007 (UNCONDITIONAL_JUMP)  ; LAB_005a4007
    CMP byte ptr [ESP + 0x71],0x49      ; 005a405b
        ;   Label: LAB_005a405b
    JNZ 0x005a4046                      ; 005a4060
        ;   XREF to: 005a4046 (CONDITIONAL_JUMP)  ; LAB_005a4046
    MOV DH,byte ptr [ESP + 0x72]        ; 005a4062
    CMP DH,0x46                         ; 005a4066
    JNZ 0x005a4046                      ; 005a4069
        ;   XREF to: 005a4046 (CONDITIONAL_JUMP)  ; LAB_005a4046
    CMP DH,byte ptr [ESP + 0x73]        ; 005a406b
    JNZ 0x005a4046                      ; 005a406f
        ;   XREF to: 005a4046 (CONDITIONAL_JUMP)  ; LAB_005a4046
    PUSH ESI                            ; 005a4071
    PUSH 0x1                            ; 005a4072
    PUSH 0x4                            ; 005a4074
    LEA EAX,[ESP + 0xc]                 ; 005a4076
    MOV EBP,dword ptr [ESP + 0x80]      ; 005a407a
    PUSH EAX                            ; 005a4081
    ADD EBP,0x8                         ; 005a4082
    CALL crt_stdio.c_fread_FUN_005fd990 ; 005a4085
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 005a408a
    CMP EAX,0x1                         ; 005a408d
    JNZ 0x005a4007                      ; 005a4090
        ;   XREF to: 005a4007 (CONDITIONAL_JUMP)  ; LAB_005a4007
    CMP byte ptr [ESP],0x57             ; 005a4096
    JZ 0x005a40b4                       ; 005a409a
        ;   XREF to: 005a40b4 (CONDITIONAL_JUMP)  ; LAB_005a40b4
    MOV EAX,0x64f411                    ; 005a409c | = "\"WAVE\" ID not found at offset 00000..."
        ;   Label: LAB_005a409c
    PUSH EAX                            ; 005a40a1 | = "\"WAVE\" ID not found at offset 00000..."
    PUSH 0x64f3f8                       ; 005a40a2 | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a40a7
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x8                         ; 005a40ac
    JMP 0x005a4007                      ; 005a40af
        ;   XREF to: 005a4007 (UNCONDITIONAL_JUMP)  ; LAB_005a4007
    CMP byte ptr [ESP + 0x1],0x41       ; 005a40b4
        ;   Label: LAB_005a40b4
    JNZ 0x005a409c                      ; 005a40b9
        ;   XREF to: 005a409c (CONDITIONAL_JUMP)  ; LAB_005a409c
    CMP byte ptr [ESP + 0x2],0x56       ; 005a40bb
    JNZ 0x005a409c                      ; 005a40c0
        ;   XREF to: 005a409c (CONDITIONAL_JUMP)  ; LAB_005a409c
    CMP byte ptr [ESP + 0x3],0x45       ; 005a40c2
    JNZ 0x005a409c                      ; 005a40c7
        ;   XREF to: 005a409c (CONDITIONAL_JUMP)  ; LAB_005a409c
    MOV EBX,0xc                         ; 005a40c9
    MOV EAX,dword ptr [EDI]             ; 005a40ce
        ;   Label: LAB_005a40ce
    PUSH 0x0                            ; 005a40d0
    ADD EAX,EBX                         ; 005a40d2
    PUSH EAX                            ; 005a40d4
    PUSH ESI                            ; 005a40d5
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 005a40d6
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 005a40db
    TEST EAX,EAX                        ; 005a40de
    JNZ 0x005a4007                      ; 005a40e0
        ;   XREF to: 005a4007 (CONDITIONAL_JUMP)  ; LAB_005a4007
    PUSH ESI                            ; 005a40e6
    PUSH 0x1                            ; 005a40e7
    PUSH 0x8                            ; 005a40e9
    LEA EAX,[ESP + 0x7c]                ; 005a40eb
    PUSH EAX                            ; 005a40ef
    CALL crt_stdio.c_fread_FUN_005fd990 ; 005a40f0
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 005a40f5
    CMP EAX,0x1                         ; 005a40f8
    JNZ 0x005a4007                      ; 005a40fb
        ;   XREF to: 005a4007 (CONDITIONAL_JUMP)  ; LAB_005a4007
    MOV EAX,dword ptr [ESP + 0x74]      ; 005a4101
    ADD EAX,0x8                         ; 005a4105
    ADD EBX,EAX                         ; 005a4108
    CMP byte ptr [ESP + 0x70],0x64      ; 005a410a
    JNZ 0x005a413f                      ; 005a410f
        ;   XREF to: 005a413f (CONDITIONAL_JUMP)  ; LAB_005a413f
    MOV DL,byte ptr [ESP + 0x71]        ; 005a4111
    CMP DL,0x61                         ; 005a4115
    JNZ 0x005a413f                      ; 005a4118
        ;   XREF to: 005a413f (CONDITIONAL_JUMP)  ; LAB_005a413f
    CMP byte ptr [ESP + 0x72],0x74      ; 005a411a
    JNZ 0x005a413f                      ; 005a411f
        ;   XREF to: 005a413f (CONDITIONAL_JUMP)  ; LAB_005a413f
    CMP DL,byte ptr [ESP + 0x73]        ; 005a4121
    JNZ 0x005a413f                      ; 005a4125
        ;   XREF to: 005a413f (CONDITIONAL_JUMP)  ; LAB_005a413f
    MOV EAX,0x64f439                    ; 005a4127 | = "\"data\" chunk preceeds \"fmt\" chunk"
    PUSH EAX                            ; 005a412c | = "\"data\" chunk preceeds \"fmt\" chunk"
    PUSH 0x64f3f8                       ; 005a412d | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a4132
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x8                         ; 005a4137
    JMP 0x005a4007                      ; 005a413a
        ;   XREF to: 005a4007 (UNCONDITIONAL_JUMP)  ; LAB_005a4007
    CMP byte ptr [ESP + 0x70],0x66      ; 005a413f
        ;   Label: LAB_005a413f
    JNZ 0x005a4173                      ; 005a4144
        ;   XREF to: 005a4173 (CONDITIONAL_JUMP)  ; LAB_005a4173
    CMP byte ptr [ESP + 0x71],0x6d      ; 005a4146
    JNZ 0x005a4173                      ; 005a414b
        ;   XREF to: 005a4173 (CONDITIONAL_JUMP)  ; LAB_005a4173
    CMP byte ptr [ESP + 0x72],0x74      ; 005a414d
    JNZ 0x005a4173                      ; 005a4152
        ;   XREF to: 005a4173 (CONDITIONAL_JUMP)  ; LAB_005a4173
    CMP dword ptr [ESP + 0x74],0xa      ; 005a4154
    JNC 0x005a4193                      ; 005a4159
        ;   XREF to: 005a4193 (CONDITIONAL_JUMP)  ; LAB_005a4193
    MOV EAX,0x64f47a                    ; 005a415b | = "File contains invalid \"fmt\" chunk"
    PUSH EAX                            ; 005a4160 | = "File contains invalid \"fmt\" chunk"
    PUSH 0x64f3f8                       ; 005a4161 | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a4166
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x8                         ; 005a416b
    JMP 0x005a4007                      ; 005a416e
        ;   XREF to: 005a4007 (UNCONDITIONAL_JUMP)  ; LAB_005a4007
    CMP EBX,EBP                         ; 005a4173
        ;   Label: LAB_005a4173
    JLE 0x005a40ce                      ; 005a4175
        ;   XREF to: 005a40ce (CONDITIONAL_JUMP)  ; LAB_005a40ce
    MOV EAX,0x64f45b                    ; 005a417b | = "Required \"fmt\" chunk not found"
    PUSH EAX                            ; 005a4180 | = "Required \"fmt\" chunk not found"
    PUSH 0x64f3f8                       ; 005a4181 | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a4186
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x8                         ; 005a418b
    JMP 0x005a4007                      ; 005a418e
        ;   XREF to: 005a4007 (UNCONDITIONAL_JUMP)  ; LAB_005a4007
    PUSH ESI                            ; 005a4193
        ;   Label: LAB_005a4193
    PUSH 0x1                            ; 005a4194
    PUSH 0xa                            ; 005a4196
    LEA EAX,[ESP + 0x70]                ; 005a4198
    PUSH EAX                            ; 005a419c
    CALL crt_stdio.c_fread_FUN_005fd990 ; 005a419d
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 005a41a2
    CMP EAX,0x1                         ; 005a41a5
    JNZ 0x005a4007                      ; 005a41a8
        ;   XREF to: 005a4007 (CONDITIONAL_JUMP)  ; LAB_005a4007
    MOV EDX,dword ptr [ESP + 0x64]      ; 005a41ae
    CMP DX,0x1                          ; 005a41b2
    JNZ 0x005a4271                      ; 005a41b6
        ;   XREF to: 005a4271 (CONDITIONAL_JUMP)  ; LAB_005a4271
    XOR EAX,EAX                         ; 005a41bc
    MOV AX,word ptr [ESP + 0x66]        ; 005a41be
    CMP EAX,0x1                         ; 005a41c3
    JL 0x005a42a0                       ; 005a41c6
        ;   XREF to: 005a42a0 (CONDITIONAL_JUMP)  ; LAB_005a42a0
    CMP EAX,0x2                         ; 005a41cc
    JG 0x005a42a0                       ; 005a41cf
        ;   XREF to: 005a42a0 (CONDITIONAL_JUMP)  ; LAB_005a42a0
    IMUL EAX,dword ptr [ESP + 0x68]     ; 005a41d5
    MOV EDX,dword ptr [ESP + 0x6c]      ; 005a41da
    CMP AX,DX                           ; 005a41de
    JNZ 0x005a42d1                      ; 005a41e1
        ;   XREF to: 005a42d1 (CONDITIONAL_JUMP)  ; LAB_005a42d1
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a41e7
    MOV dword ptr [EAX + 0x104],0x8     ; 005a41ee
    MOV EAX,dword ptr [EDI]             ; 005a41f8
        ;   Label: LAB_005a41f8
    PUSH 0x0                            ; 005a41fa
    ADD EAX,EBX                         ; 005a41fc
    PUSH EAX                            ; 005a41fe
    PUSH ESI                            ; 005a41ff
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 005a4200
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 005a4205
    TEST EAX,EAX                        ; 005a4208
    JNZ 0x005a4007                      ; 005a420a
        ;   XREF to: 005a4007 (CONDITIONAL_JUMP)  ; LAB_005a4007
    PUSH ESI                            ; 005a4210
    PUSH 0x1                            ; 005a4211
    PUSH 0x8                            ; 005a4213
    LEA EAX,[ESP + 0x7c]                ; 005a4215
    PUSH EAX                            ; 005a4219
    CALL crt_stdio.c_fread_FUN_005fd990 ; 005a421a
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 005a421f
    CMP EAX,0x1                         ; 005a4222
    JNZ 0x005a4007                      ; 005a4225
        ;   XREF to: 005a4007 (CONDITIONAL_JUMP)  ; LAB_005a4007
    MOV DL,byte ptr [ESP + 0x70]        ; 005a422b
    ADD EBX,0x8                         ; 005a422f
    CMP DL,0x64                         ; 005a4232
    JNZ 0x005a4251                      ; 005a4235
        ;   XREF to: 005a4251 (CONDITIONAL_JUMP)  ; LAB_005a4251
    MOV DH,byte ptr [ESP + 0x71]        ; 005a4237
    CMP DH,0x61                         ; 005a423b
    JNZ 0x005a4251                      ; 005a423e
        ;   XREF to: 005a4251 (CONDITIONAL_JUMP)  ; LAB_005a4251
    CMP byte ptr [ESP + 0x72],0x74      ; 005a4240
    JNZ 0x005a4251                      ; 005a4245
        ;   XREF to: 005a4251 (CONDITIONAL_JUMP)  ; LAB_005a4251
    CMP DH,byte ptr [ESP + 0x73]        ; 005a4247
    JZ 0x005a431e                       ; 005a424b
        ;   XREF to: 005a431e (CONDITIONAL_JUMP)  ; LAB_005a431e
    ADD EBX,dword ptr [ESP + 0x74]      ; 005a4251
        ;   Label: LAB_005a4251
    CMP EBX,EBP                         ; 005a4255
    JLE 0x005a41f8                      ; 005a4257
        ;   XREF to: 005a41f8 (CONDITIONAL_JUMP)  ; LAB_005a41f8
    MOV EAX,0x64f538                    ; 005a4259 | = "No \"data\" chunk found"
    PUSH EAX                            ; 005a425e | = "No \"data\" chunk found"
    PUSH 0x64f3f8                       ; 005a425f | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a4264
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x8                         ; 005a4269
    JMP 0x005a4007                      ; 005a426c
        ;   XREF to: 005a4007 (UNCONDITIONAL_JUMP)  ; LAB_005a4007
    XOR EAX,EAX                         ; 005a4271
        ;   Label: LAB_005a4271
    MOV AX,DX                           ; 005a4273
    PUSH EAX                            ; 005a4276
    PUSH 0x64f49c                       ; 005a4277 | = "Invalid \"fmt\" chunk tag: %04X  (Mus..."
    LEA EAX,[ESP + 0x8]                 ; 005a427c
    PUSH EAX                            ; 005a4280
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005a4281
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    LEA EAX,[ESP + 0xc]                 ; 005a4286
    ADD ESP,0xc                         ; 005a428a
    PUSH EAX                            ; 005a428d
    PUSH 0x64f3f8                       ; 005a428e | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a4293
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x8                         ; 005a4298
    JMP 0x005a4007                      ; 005a429b
        ;   XREF to: 005a4007 (UNCONDITIONAL_JUMP)  ; LAB_005a4007
    XOR EAX,EAX                         ; 005a42a0
        ;   Label: LAB_005a42a0
    MOV AX,word ptr [ESP + 0x66]        ; 005a42a2
    PUSH EAX                            ; 005a42a7
    PUSH 0x64f4e3                       ; 005a42a8 | = "Invalid number of channels: %u  (must..."
    LEA EAX,[ESP + 0x8]                 ; 005a42ad
    PUSH EAX                            ; 005a42b1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005a42b2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    LEA EAX,[ESP + 0xc]                 ; 005a42b7
    ADD ESP,0xc                         ; 005a42bb
    PUSH EAX                            ; 005a42be
    PUSH 0x64f3f8                       ; 005a42bf | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a42c4
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x8                         ; 005a42c9
    JMP 0x005a4007                      ; 005a42cc
        ;   XREF to: 005a4007 (UNCONDITIONAL_JUMP)  ; LAB_005a4007
    ADD EAX,EAX                         ; 005a42d1
        ;   Label: LAB_005a42d1
    CMP AX,DX                           ; 005a42d3
    JNZ 0x005a42ee                      ; 005a42d6
        ;   XREF to: 005a42ee (CONDITIONAL_JUMP)  ; LAB_005a42ee
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a42d8
    MOV dword ptr [EAX + 0x104],0x10    ; 005a42df
    JMP 0x005a41f8                      ; 005a42e9
        ;   XREF to: 005a41f8 (UNCONDITIONAL_JUMP)  ; LAB_005a41f8
    XOR EAX,EAX                         ; 005a42ee
        ;   Label: LAB_005a42ee
    MOV AX,DX                           ; 005a42f0
    PUSH EAX                            ; 005a42f3
    PUSH EAX                            ; 005a42f4
    PUSH 0x64f514                       ; 005a42f5 | = "Invalid bytes/sec value: %u (%04Xh)"
    LEA EAX,[ESP + 0xc]                 ; 005a42fa
    PUSH EAX                            ; 005a42fe
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005a42ff
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    LEA EAX,[ESP + 0x10]                ; 005a4304
    ADD ESP,0x10                        ; 005a4308
    PUSH EAX                            ; 005a430b
    PUSH 0x64f3f8                       ; 005a430c | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a4311
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x8                         ; 005a4316
    JMP 0x005a4007                      ; 005a4319
        ;   XREF to: 005a4007 (UNCONDITIONAL_JUMP)  ; LAB_005a4007
    MOV EDX,dword ptr [EDI]             ; 005a431e
        ;   Label: LAB_005a431e
    ADD EDX,EBX                         ; 005a4320
    XOR EAX,EAX                         ; 005a4322
    MOV dword ptr [EDI],EDX             ; 005a4324
    MOV EDX,dword ptr [ESP + 0x94]      ; 005a4326
    MOV AX,word ptr [ESP + 0x66]        ; 005a432d
    XOR EBX,EBX                         ; 005a4332
    MOV dword ptr [EDX + 0x108],EAX     ; 005a4334
    MOV BX,AX                           ; 005a433a
    MOV EAX,dword ptr [ESP + 0x74]      ; 005a433d
    XOR EDX,EDX                         ; 005a4341
    DIV EBX                             ; 005a4343
    MOV EDX,dword ptr [ESP + 0x94]      ; 005a4345
    MOV EBX,EAX                         ; 005a434c
    MOV EDX,dword ptr [EDX + 0x104]     ; 005a434e
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a4354
    SAR EDX,0x1f                        ; 005a435b
    MOV EAX,dword ptr [EAX + 0x104]     ; 005a435e
    SHL EDX,0x3                         ; 005a4364
    SBB EAX,EDX                         ; 005a4367
    SAR EAX,0x3                         ; 005a4369
    MOV ESI,EAX                         ; 005a436c
    XOR EDX,EDX                         ; 005a436e
    MOV EAX,EBX                         ; 005a4370
    DIV ESI                             ; 005a4372
    MOV EDX,dword ptr [ESP + 0x94]      ; 005a4374
    MOV dword ptr [EDX + 0x110],EAX     ; 005a437b
    XOR EAX,EAX                         ; 005a4381
    MOV AX,word ptr [ESP + 0x68]        ; 005a4383
    MOV dword ptr [EDX + 0x10c],EAX     ; 005a4388
    MOV EAX,0x1                         ; 005a438e
    ADD ESP,0x78                        ; 005a4393
    POP EBP                             ; 005a4396
    POP EDI                             ; 005a4397
    POP ESI                             ; 005a4398
    POP EBX                             ; 005a4399
    RET                                 ; 005a439a

