; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_convertMp3ToSfxMetadata_FUN_005acf20(char *mp3_filename)
;
; Parameters:
; char *           Stack[0x4]:4   mp3_filename
; Local Variables:
; short[512]       Stack[-0x85c]:1024  local_85c
; char[300]        Stack[-0x45c]:300  local_45c
; char[260]        Stack[-0x330]:260  local_330
; char[256]        Stack[-0x22c]:256  local_22c
; char[256]        Stack[-0x12c]:256  local_12c
; CStrList         Stack[-0x2c]:16  local_2c
; int              Stack[-0x1c]:4  local_1c
; _FILE *          Stack[-0x18]:4  local_18
; char[4]          Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 at 004bd8c7
;
; Referenced Globals:
;   TerminatedCString s_anon_0064f583
;   TerminatedCString s_sound_sndmain_cpp_006510af
;   TerminatedCString s_Can_t_open_s_006510c4
;   TerminatedCString s_sound_sndmain_cpp_006510d2
;   TerminatedCString s_rb_006510e7
;   TerminatedCString s_sound_sndmain_cpp_006510ea
;   TerminatedCString s_Can_t_open_s_006510ff
;   TerminatedCString s_sound_sndmain_cpp_0065110d
;   TerminatedCString s_sound_sndmain_cpp_00651122
;   TerminatedCString s_Out_of_memory_00651137
;   TerminatedCString s_sound_sndmain_cpp_00651146
;   TerminatedCString s_sfx_0065115b
;   TerminatedCString s_sound_sndmain_cpp_0065115f
;   TerminatedCString s_rt_00651174
;   TerminatedCString s_length_00651177
;   ... and 15 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_file.c_makepath_FUN_005febfc
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_string.c__strnicmp_FUN_005ff070
;   crt_string.c_memmove_FUN_005fe5e0
;   crt_string.c_splitpath_FUN_005ff178
;   crt_string.c_strstr_FUN_005fedd0
;   engine_dosio.c_getFileSize_FUN_00481880
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
;   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005acf20
        ;   Label: sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20
    PUSH ESI                            ; 005acf21
    PUSH EDI                            ; 005acf22
    PUSH EBP                            ; 005acf23
    SUB ESP,0x84c                       ; 005acf24
    MOV EBP,dword ptr [ESP + 0x860]     ; 005acf2a
    PUSH EBP                            ; 005acf31
    PUSH 0x0                            ; 005acf32
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 005acf34
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 005acf39
    MOV EDI,EAX                         ; 005acf3c
    TEST EAX,EAX                        ; 005acf3e
    JLE 0x005ad1f0                      ; 005acf40
        ;   XREF to: 005ad1f0 (CONDITIONAL_JUMP)  ; LAB_005ad1f0
    PUSH 0x176e                         ; 005acf46
        ;   Label: LAB_005acf46
    PUSH 0x6510d2                       ; 005acf4b | = "..\\sound\\sndmain.cpp"
    PUSH 0x6510e7                       ; 005acf50 | = "rb"
    PUSH 0x0                            ; 005acf55
    PUSH EBP                            ; 005acf57
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005acf58
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 005acf5d
    MOV EBX,EAX                         ; 005acf60
    TEST EAX,EAX                        ; 005acf62
    JNZ 0x005acf89                      ; 005acf64
        ;   XREF to: 005acf89 (CONDITIONAL_JUMP)  ; LAB_005acf89
    PUSH EBP                            ; 005acf66
    MOV ESI,0x6510ea                    ; 005acf67 | = "..\\sound\\sndmain.cpp"
    MOV EAX,0x176f                      ; 005acf6c
    PUSH 0x6510ff                       ; 005acf71 | = "Can't open %s"
    MOV dword ptr [0x02f0ca48],ESI      ; 005acf76 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005acf7c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005acf81
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005acf86
    PUSH 0x1773                         ; 005acf89
        ;   Label: LAB_005acf89
    PUSH 0x65110d                       ; 005acf8e | = "..\\sound\\sndmain.cpp"
    PUSH 0x8630                         ; 005acf93
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 005acf98
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005acf9d
    TEST EAX,EAX                        ; 005acfa0
    JZ 0x005acfad                       ; 005acfa2
        ;   XREF to: 005acfad (CONDITIONAL_JUMP)  ; LAB_005acfad
    PUSH EAX                            ; 005acfa4
    CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0 ; 005acfa5
        ;   XREF to: 005344f0 (UNCONDITIONAL_CALL)  ; CMP3Decoder * sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 005acfaa
    MOV ESI,EAX                         ; 005acfad
        ;   Label: LAB_005acfad
    TEST EAX,EAX                        ; 005acfaf
    JZ 0x005ad219                       ; 005acfb1
        ;   XREF to: 005ad219 (CONDITIONAL_JUMP)  ; LAB_005ad219
    PUSH EDI                            ; 005acfb7
        ;   Label: LAB_005acfb7
    PUSH EBX                            ; 005acfb8
    PUSH ESI                            ; 005acfb9
    CALL sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630 ; 005acfba
        ;   XREF to: 00534630 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630(CMP3Decoder * this_ptr, _FILE * file_handle, int file_size)
    MOV EAX,0x200                       ; 005acfbf
    MOV ECX,dword ptr [ESI + 0x104]     ; 005acfc4
    XOR EDX,EDX                         ; 005acfca
    DIV ECX                             ; 005acfcc
    XOR EBX,EBX                         ; 005acfce
    ADD ESP,0xc                         ; 005acfd0
    MOV dword ptr [ESP + 0x840],EBX     ; 005acfd3
    MOV EBX,EAX                         ; 005acfda
    PUSH EBX                            ; 005acfdc
        ;   Label: LAB_005acfdc
    LEA EAX,[ESP + 0x4]                 ; 005acfdd
    PUSH EAX                            ; 005acfe1
    PUSH ESI                            ; 005acfe2
    CALL sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60 ; 005acfe3
        ;   XREF to: 00534a60 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60(CMP3Decoder * this_ptr, short * output_buffer, int samples_requested)
    ADD ESP,0xc                         ; 005acfe8
    ADD dword ptr [ESP + 0x840],EAX     ; 005acfeb
    CMP EAX,EBX                         ; 005acff2
    JZ 0x005acfdc                       ; 005acff4
        ;   XREF to: 005acfdc (CONDITIONAL_JUMP)  ; LAB_005acfdc
    PUSH 0x0                            ; 005acff6
    MOV EAX,0x651146                    ; 005acff8 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x1784                      ; 005acffd
    PUSH ESI                            ; 005ad002
    MOV [0x0067d20c],EAX                ; 005ad003 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDX      ; 005ad008 | g_CurrentDebugLine
    CALL sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530 ; 005ad00e
        ;   XREF to: 00534530 (UNCONDITIONAL_CALL)  ; CMP3Decoder * sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530(CMP3Decoder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005ad013
    PUSH EAX                            ; 005ad016
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 005ad017
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005ad01c
    PUSH 0x0                            ; 005ad01f
    LEA EAX,[ESP + 0x634]               ; 005ad021
    PUSH EAX                            ; 005ad028
    LEA EAX,[ESP + 0x738]               ; 005ad029
    PUSH EAX                            ; 005ad030
    LEA EAX,[ESP + 0x854]               ; 005ad031
    PUSH EAX                            ; 005ad038
    PUSH EBP                            ; 005ad039
    CALL crt_string.c_splitpath_FUN_005ff178 ; 005ad03a
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 005ad03f
    PUSH 0x65115b                       ; 005ad042 | = "sfx"
    LEA EAX,[ESP + 0x634]               ; 005ad047
    PUSH EAX                            ; 005ad04e
    LEA EAX,[ESP + 0x738]               ; 005ad04f
    PUSH EAX                            ; 005ad056
    LEA EAX,[ESP + 0x854]               ; 005ad057
    PUSH EAX                            ; 005ad05e
    LEA EAX,[ESP + 0x53c]               ; 005ad05f
    PUSH EAX                            ; 005ad066
    CALL crt_file.c_makepath_FUN_005febfc ; 005ad067
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005ad06c
    PUSH 0x1791                         ; 005ad06f
    PUSH 0x65115f                       ; 005ad074 | = "..\\sound\\sndmain.cpp"
    PUSH 0x651174                       ; 005ad079 | = "rt"
    PUSH 0x0                            ; 005ad07e
    LEA EAX,[ESP + 0x53c]               ; 005ad080
    PUSH EAX                            ; 005ad087
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005ad088
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 005ad08d
    MOV EBX,EAX                         ; 005ad090
    MOV dword ptr [ESP + 0x844],EAX     ; 005ad092
    LEA EAX,[ESP + 0x830]               ; 005ad099
    PUSH EAX                            ; 005ad0a0
    MOV EBP,0xffffffff                  ; 005ad0a1
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 005ad0a6
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 005ad0ab
    TEST EBX,EBX                        ; 005ad0ae
    JZ 0x005ad0f1                       ; 005ad0b0
        ;   XREF to: 005ad0f1 (CONDITIONAL_JUMP)  ; LAB_005ad0f1
    MOV ECX,dword ptr [ESP + 0x844]     ; 005ad0b2
        ;   Label: LAB_005ad0b2
    PUSH ECX                            ; 005ad0b9
    PUSH 0x12c                          ; 005ad0ba
    LEA EAX,[ESP + 0x408]               ; 005ad0bf
    PUSH EAX                            ; 005ad0c6
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005ad0c7
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005ad0cc
    TEST EAX,EAX                        ; 005ad0cf
    JNZ 0x005ad241                      ; 005ad0d1
        ;   XREF to: 005ad241 (CONDITIONAL_JUMP)  ; LAB_005ad241
    PUSH 0x17a2                         ; 005ad0d7
    PUSH 0x6511bc                       ; 005ad0dc | = "..\\sound\\sndmain.cpp"
    MOV EBX,dword ptr [ESP + 0x84c]     ; 005ad0e1
    PUSH EBX                            ; 005ad0e8
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005ad0e9
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005ad0ee
    MOV EAX,dword ptr [ESP + 0x840]     ; 005ad0f1
        ;   Label: LAB_005ad0f1
    PUSH EAX                            ; 005ad0f8
    PUSH 0x6511d1                       ; 005ad0f9 | = "length = %d"
    LEA EAX,[ESP + 0x408]               ; 005ad0fe
    PUSH EAX                            ; 005ad105
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005ad106
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005ad10b
    TEST EBP,EBP                        ; 005ad10e
    JL 0x005ad385                       ; 005ad110
        ;   XREF to: 005ad385 (CONDITIONAL_JUMP)  ; LAB_005ad385
    LEA EAX,[ESP + 0x400]               ; 005ad116
    PUSH EAX                            ; 005ad11d
    PUSH EBP                            ; 005ad11e
    LEA EAX,[ESP + 0x838]               ; 005ad11f
    PUSH EAX                            ; 005ad126
    CALL shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120 ; 005ad127
        ;   XREF to: 004a3120 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120(CStrList * this_ptr, int index, char * new_string)
    ADD ESP,0xc                         ; 005ad12c
    PUSH 0x17ac                         ; 005ad12f
        ;   Label: LAB_005ad12f
    PUSH 0x6511dd                       ; 005ad134 | = "..\\sound\\sndmain.cpp"
    PUSH 0x6511f2                       ; 005ad139 | = "wt"
    PUSH 0x0                            ; 005ad13e
    LEA EAX,[ESP + 0x53c]               ; 005ad140
    PUSH EAX                            ; 005ad147
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005ad148
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 005ad14d
    MOV ESI,EAX                         ; 005ad150
    TEST EAX,EAX                        ; 005ad152
    JNZ 0x005ad181                      ; 005ad154
        ;   XREF to: 005ad181 (CONDITIONAL_JUMP)  ; LAB_005ad181
    LEA EAX,[ESP + 0x52c]               ; 005ad156
    PUSH EAX                            ; 005ad15d
    MOV EDX,0x6511f5                    ; 005ad15e | = "..\\sound\\sndmain.cpp"
    MOV ECX,0x17ad                      ; 005ad163
    PUSH 0x65120a                       ; 005ad168 | = "Can't create %s"
    MOV dword ptr [0x02f0ca48],EDX      ; 005ad16d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005ad173 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ad179
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005ad17e
    MOV EDI,dword ptr [ESP + 0x830]     ; 005ad181
        ;   Label: LAB_005ad181
    XOR EBX,EBX                         ; 005ad188
    TEST EDI,EDI                        ; 005ad18a
    JLE 0x005ad1c0                      ; 005ad18c
        ;   XREF to: 005ad1c0 (CONDITIONAL_JUMP)  ; LAB_005ad1c0
    PUSH EBX                            ; 005ad18e
        ;   Label: LAB_005ad18e
    LEA EAX,[ESP + 0x834]               ; 005ad18f
    PUSH EAX                            ; 005ad196
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 005ad197
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 005ad19c
    PUSH EAX                            ; 005ad19f
    PUSH 0x65121a                       ; 005ad1a0 | = "%s\n"
    PUSH ESI                            ; 005ad1a5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005ad1a6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005ad1ab
    INC EBX                             ; 005ad1ae
    CMP EBX,dword ptr [ESP + 0x830]     ; 005ad1af
    JL 0x005ad18e                       ; 005ad1b6
        ;   XREF to: 005ad18e (CONDITIONAL_JUMP)  ; LAB_005ad18e
    LEA EAX,[EAX]                       ; 005ad1b8
    MOV EDX,EDX                         ; 005ad1be | = "..\\sound\\sndmain.cpp"
    PUSH 0x17b1                         ; 005ad1c0
        ;   Label: LAB_005ad1c0
    PUSH 0x65121e                       ; 005ad1c5 | = "..\\sound\\sndmain.cpp"
    PUSH ESI                            ; 005ad1ca
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005ad1cb
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005ad1d0
    PUSH 0x0                            ; 005ad1d3
    LEA EAX,[ESP + 0x834]               ; 005ad1d5
    PUSH EAX                            ; 005ad1dc
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 005ad1dd
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005ad1e2
    ADD ESP,0x84c                       ; 005ad1e5
    POP EBP                             ; 005ad1eb
    POP EDI                             ; 005ad1ec
    POP ESI                             ; 005ad1ed
    POP EBX                             ; 005ad1ee
    RET                                 ; 005ad1ef
    PUSH EBP                            ; 005ad1f0
        ;   Label: LAB_005ad1f0
    MOV EDX,0x6510af                    ; 005ad1f1 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0x176c                      ; 005ad1f6
    PUSH 0x6510c4                       ; 005ad1fb | = "Can't open %s"
    MOV dword ptr [0x02f0ca48],EDX      ; 005ad200 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005ad206 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ad20c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005ad211
    JMP 0x005acf46                      ; 005ad214
        ;   XREF to: 005acf46 (UNCONDITIONAL_JUMP)  ; LAB_005acf46
    MOV EDX,0x651122                    ; 005ad219 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005ad219
    MOV ECX,0x1774                      ; 005ad21e
    PUSH 0x651137                       ; 005ad223 | = "Out of memory!"
    MOV dword ptr [0x02f0ca48],EDX      ; 005ad228 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005ad22e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ad234
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ad239
    JMP 0x005acfb7                      ; 005ad23c
        ;   XREF to: 005acfb7 (UNCONDITIONAL_JUMP)  ; LAB_005acfb7
    MOV DL,0xa                          ; 005ad241
        ;   Label: LAB_005ad241
    LEA ESI,[ESP + 0x400]               ; 005ad243
    MOV AL,byte ptr [ESI]               ; 005ad24a
        ;   Label: LAB_005ad24a
    CMP AL,DL                           ; 005ad24c
    JZ 0x005ad262                       ; 005ad24e
        ;   XREF to: 005ad262 (CONDITIONAL_JUMP)  ; LAB_005ad262
    CMP AL,0x0                          ; 005ad250
    JZ 0x005ad260                       ; 005ad252
        ;   XREF to: 005ad260 (CONDITIONAL_JUMP)  ; LAB_005ad260
    INC ESI                             ; 005ad254
    MOV AL,byte ptr [ESI]               ; 005ad255
    CMP AL,DL                           ; 005ad257
    JZ 0x005ad262                       ; 005ad259
        ;   XREF to: 005ad262 (CONDITIONAL_JUMP)  ; LAB_005ad262
    INC ESI                             ; 005ad25b
    CMP AL,0x0                          ; 005ad25c
    JNZ 0x005ad24a                      ; 005ad25e
        ;   XREF to: 005ad24a (CONDITIONAL_JUMP)  ; LAB_005ad24a
    SUB ESI,ESI                         ; 005ad260
        ;   Label: LAB_005ad260
    TEST ESI,ESI                        ; 005ad262
        ;   Label: LAB_005ad262
    JZ 0x005ad288                       ; 005ad264
        ;   XREF to: 005ad288 (CONDITIONAL_JUMP)  ; LAB_005ad288
    LEA ESI,[ESP + 0x400]               ; 005ad266
    MOV AL,byte ptr [ESI]               ; 005ad26d
        ;   Label: LAB_005ad26d
    CMP AL,DL                           ; 005ad26f
    JZ 0x005ad285                       ; 005ad271
        ;   XREF to: 005ad285 (CONDITIONAL_JUMP)  ; LAB_005ad285
    CMP AL,0x0                          ; 005ad273
    JZ 0x005ad283                       ; 005ad275
        ;   XREF to: 005ad283 (CONDITIONAL_JUMP)  ; LAB_005ad283
    INC ESI                             ; 005ad277
    MOV AL,byte ptr [ESI]               ; 005ad278
    CMP AL,DL                           ; 005ad27a
    JZ 0x005ad285                       ; 005ad27c
        ;   XREF to: 005ad285 (CONDITIONAL_JUMP)  ; LAB_005ad285
    INC ESI                             ; 005ad27e
    CMP AL,0x0                          ; 005ad27f
    JNZ 0x005ad26d                      ; 005ad281
        ;   XREF to: 005ad26d (CONDITIONAL_JUMP)  ; LAB_005ad26d
    SUB ESI,ESI                         ; 005ad283
        ;   Label: LAB_005ad283
    MOV byte ptr [ESI],0x0              ; 005ad285
        ;   Label: LAB_005ad285
    LEA EAX,[ESP + 0x400]               ; 005ad288
        ;   Label: LAB_005ad288
    PUSH EAX                            ; 005ad28f
    LEA EAX,[ESP + 0x834]               ; 005ad290
    PUSH EAX                            ; 005ad297
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005ad298
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005ad29d
    PUSH 0x64f583                       ; 005ad2a0 | = "//"
    LEA EBX,[ESP + 0x404]               ; 005ad2a5
    PUSH EBX                            ; 005ad2ac
    CALL crt_string.c_strstr_FUN_005fedd0 ; 005ad2ad
        ;   XREF to: 005fedd0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005fedd0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 005ad2b2
    TEST EAX,EAX                        ; 005ad2b5
    JZ 0x005ad2bc                       ; 005ad2b7
        ;   XREF to: 005ad2bc (CONDITIONAL_JUMP)  ; LAB_005ad2bc
    MOV byte ptr [EAX],0x0              ; 005ad2b9
    MOV ESI,EBX                         ; 005ad2bc
        ;   Label: LAB_005ad2bc
    XOR DL,DL                           ; 005ad2be
    MOV AL,byte ptr [ESI]               ; 005ad2c0
        ;   Label: LAB_005ad2c0
    CMP AL,DL                           ; 005ad2c2
    JZ 0x005ad2d8                       ; 005ad2c4
        ;   XREF to: 005ad2d8 (CONDITIONAL_JUMP)  ; LAB_005ad2d8
    CMP AL,0x0                          ; 005ad2c6
    JZ 0x005ad2d6                       ; 005ad2c8
        ;   XREF to: 005ad2d6 (CONDITIONAL_JUMP)  ; LAB_005ad2d6
    INC ESI                             ; 005ad2ca
    MOV AL,byte ptr [ESI]               ; 005ad2cb
    CMP AL,DL                           ; 005ad2cd
    JZ 0x005ad2d8                       ; 005ad2cf
        ;   XREF to: 005ad2d8 (CONDITIONAL_JUMP)  ; LAB_005ad2d8
    INC ESI                             ; 005ad2d1
    CMP AL,0x0                          ; 005ad2d2
    JNZ 0x005ad2c0                      ; 005ad2d4
        ;   XREF to: 005ad2c0 (CONDITIONAL_JUMP)  ; LAB_005ad2c0
    SUB ESI,ESI                         ; 005ad2d6
        ;   Label: LAB_005ad2d6
    MOV EAX,ESI                         ; 005ad2d8
        ;   Label: LAB_005ad2d8
    CMP ESI,EBX                         ; 005ad2da
    JBE 0x005ad2f2                      ; 005ad2dc
        ;   XREF to: 005ad2f2 (CONDITIONAL_JUMP)  ; LAB_005ad2f2
    MOV CL,byte ptr [EAX + -0x1]        ; 005ad2de
        ;   Label: LAB_005ad2de
    INC CL                              ; 005ad2e1
    AND ECX,0xff                        ; 005ad2e3
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 005ad2e9 | g_CharacterClassificationTable
    JNZ 0x005ad323                      ; 005ad2f0
        ;   XREF to: 005ad323 (CONDITIONAL_JUMP)  ; LAB_005ad323
    LEA ESI,[EBX + 0x1]                 ; 005ad2f2
        ;   Label: LAB_005ad2f2
    MOV byte ptr [EAX],0x0              ; 005ad2f5
    MOV AL,byte ptr [EBX]               ; 005ad2f8
        ;   Label: LAB_005ad2f8
    INC AL                              ; 005ad2fa
    AND EAX,0xff                        ; 005ad2fc
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 005ad301 | g_CharacterClassificationTable
    JZ 0x005ad32a                       ; 005ad308
        ;   XREF to: 005ad32a (CONDITIONAL_JUMP)  ; LAB_005ad32a
    MOV EDI,EBX                         ; 005ad30a
    SUB ECX,ECX                         ; 005ad30c
    DEC ECX                             ; 005ad30e
    XOR EAX,EAX                         ; 005ad30f
    SCASB.REPNE ES:EDI                  ; 005ad311
    NOT ECX                             ; 005ad313
    DEC ECX                             ; 005ad315
    PUSH ECX                            ; 005ad316
    PUSH ESI                            ; 005ad317
    PUSH EBX                            ; 005ad318
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005ad319
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005ad31e
    JMP 0x005ad2f8                      ; 005ad321
        ;   XREF to: 005ad2f8 (UNCONDITIONAL_JUMP)  ; LAB_005ad2f8
    DEC EAX                             ; 005ad323
        ;   Label: LAB_005ad323
    CMP EAX,EBX                         ; 005ad324
    JA 0x005ad2de                       ; 005ad326
        ;   XREF to: 005ad2de (CONDITIONAL_JUMP)  ; LAB_005ad2de
    JMP 0x005ad2f2                      ; 005ad328
        ;   XREF to: 005ad2f2 (UNCONDITIONAL_JUMP)  ; LAB_005ad2f2
    PUSH 0x5                            ; 005ad32a
        ;   Label: LAB_005ad32a
    PUSH 0x651177                       ; 005ad32c | = "length"
    LEA EAX,[ESP + 0x408]               ; 005ad331
    PUSH EAX                            ; 005ad338
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 005ad339
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005ad33e
    TEST EAX,EAX                        ; 005ad341
    JNZ 0x005ad0b2                      ; 005ad343
        ;   XREF to: 005ad0b2 (CONDITIONAL_JUMP)  ; LAB_005ad0b2
    TEST EBP,EBP                        ; 005ad349
    JL 0x005ad378                       ; 005ad34b
        ;   XREF to: 005ad378 (CONDITIONAL_JUMP)  ; LAB_005ad378
    LEA EAX,[ESP + 0x52c]               ; 005ad34d
    PUSH EAX                            ; 005ad354
    MOV ESI,0x65117e                    ; 005ad355 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x179d                      ; 005ad35a
    PUSH 0x651193                       ; 005ad35f | = "Multiple 'length' statements found in %s"
    MOV dword ptr [0x02f0ca48],ESI      ; 005ad364 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005ad36a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ad370
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005ad375
    MOV EBP,dword ptr [ESP + 0x830]     ; 005ad378
        ;   Label: LAB_005ad378
    DEC EBP                             ; 005ad37f
    JMP 0x005ad0b2                      ; 005ad380
        ;   XREF to: 005ad0b2 (UNCONDITIONAL_JUMP)  ; LAB_005ad0b2
    LEA EAX,[ESP + 0x400]               ; 005ad385
        ;   Label: LAB_005ad385
    PUSH EAX                            ; 005ad38c
    LEA EAX,[ESP + 0x834]               ; 005ad38d
    PUSH EAX                            ; 005ad394
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005ad395
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005ad39a
    JMP 0x005ad12f                      ; 005ad39d
        ;   XREF to: 005ad12f (UNCONDITIONAL_JUMP)  ; LAB_005ad12f

