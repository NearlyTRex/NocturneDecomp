; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSfxSample * sound_sndmain.cpp_loadStreamingSoundFile_FUN_005a5200(char * filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined        Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_mp3_0064fa62
;   TerminatedCString s_mp3_0064fa66
;   TerminatedCString s_sound_0064fa6b
;   TerminatedCString s_sound_sndmain_cpp_0064fa71
;   TerminatedCString s_sound_sndmain_cpp_0064fa86
;   TerminatedCString s_Out_of_memory_0064fa9b
;   TerminatedCString s_rb_0064faaa
;   TerminatedCString s_sound_0064faad
;   float FLOAT_00663164 = 2
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_LastSampleAccessIndex
;   CSfxSample[64] g_SfxSamples
;   undefined4 DAT_03f6297c
;   undefined4 DAT_03f629ac
;   ... and 2 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_ftell_FUN_00601560
;   crt_string.c_stricmp_FUN_005fe7f0
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_getFileSize_FUN_00481880
;   engine_dosio.c_splitPath_FUN_00481f20
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;   sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
;   sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
;   sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0
;   sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0
;   sound_sndmain.cpp_parseWavFile_FUN_005a3fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5200
        ;   Label: sound_sndmain.cpp_loadStreamingSoundFile_FUN_005a5200
    PUSH ESI                            ; 005a5201
    PUSH EDI                            ; 005a5202
    PUSH EBP                            ; 005a5203
    SUB ESP,0x104                       ; 005a5204
    MOV EBX,dword ptr [0x03f62828]      ; 005a520a | int g_LastSampleAccessIndex
    MOV ESI,dword ptr [ESP + 0x11c]     ; 005a5210
    XOR EDX,EDX                         ; 005a5217
    XOR EBP,EBP                         ; 005a5219
    INC EBX                             ; 005a521b
        ;   Label: LAB_005a521b
    CMP EBX,0x40                        ; 005a521c
    JL 0x005a5223                       ; 005a521f | LAB_005a5223
        ;   XREF to: 005a5223 (CONDITIONAL_JUMP)
    MOV EBX,EBP                         ; 005a5221
    IMUL EAX,EBX,0x180                  ; 005a5223
        ;   Label: LAB_005a5223
    MOV ECX,dword ptr [EAX + 0x3f6297c] ; 005a5229 | DAT_03f6297c
    CMP EBP,ECX                         ; 005a522f
    JZ 0x005a5266                       ; 005a5231 | LAB_005a5266
        ;   XREF to: 005a5266 (CONDITIONAL_JUMP)
    INC EDX                             ; 005a5233
        ;   Label: LAB_005a5233
    CMP EDX,0x40                        ; 005a5234
    JL 0x005a521b                       ; 005a5237 | LAB_005a521b
        ;   XREF to: 005a521b (CONDITIONAL_JUMP)
    XOR EBP,EBP                         ; 005a5239
    MOV dword ptr [ESP + 0x100],EBP     ; 005a523b
    MOV EBP,dword ptr [ESP + 0x100]     ; 005a5242
        ;   Label: LAB_005a5242
    MOV dword ptr [0x03f62828],EBX      ; 005a5249 | int g_LastSampleAccessIndex
    TEST EBP,EBP                        ; 005a524f
    JNZ 0x005a527e                      ; 005a5251 | LAB_005a527e
        ;   XREF to: 005a527e (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005a5253
    MOV EBX,dword ptr [0x03f62828]      ; 005a5255 | int g_LastSampleAccessIndex
    ADD ESP,0x104                       ; 005a525b
    POP EBP                             ; 005a5261
    POP EDI                             ; 005a5262
    POP ESI                             ; 005a5263
    POP EBX                             ; 005a5264
    RET                                 ; 005a5265
    CMP ECX,dword ptr [EAX + 0x3f62980] ; 005a5266 | DAT_03f62b00
        ;   Label: LAB_005a5266
    JNZ 0x005a5233                      ; 005a526c | LAB_005a5233
        ;   XREF to: 005a5233 (CONDITIONAL_JUMP)
    MOV EDX,0x3f6282c                   ; 005a526e | CSfxSample[64] g_SfxSamples
    ADD EDX,EAX                         ; 005a5273
    MOV dword ptr [ESP + 0x100],EDX     ; 005a5275 | DAT_03f629ac
    JMP 0x005a5242                      ; 005a527c | LAB_005a5242
        ;   XREF to: 005a5242 (UNCONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 005a527e
        ;   Label: LAB_005a527e
    PUSH EAX                            ; 005a5280
    PUSH 0x0                            ; 005a5281
    PUSH 0x0                            ; 005a5283
    PUSH 0x0                            ; 005a5285
    PUSH ESI                            ; 005a5287
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 005a5288 | void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005a528d
    PUSH 0x64fa62                       ; 005a5290 | = "mp3" | s_mp3_0064fa62 = mp3
    LEA EAX,[ESP + 0x4]                 ; 005a5295
    PUSH EAX                            ; 005a5299
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005a529a | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a529f
    TEST EAX,EAX                        ; 005a52a2
    JNZ 0x005a540e                      ; 005a52a4 | LAB_005a540e
        ;   XREF to: 005a540e (CONDITIONAL_JUMP)
    PUSH ESI                            ; 005a52aa
        ;   Label: LAB_005a52aa
    PUSH 0x64fa6b                       ; 005a52ab | = "sound" | s_sound_0064fa6b = sound
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 005a52b0 | int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a52b5
    TEST EAX,EAX                        ; 005a52b8
    JLE 0x005a5505                      ; 005a52ba | LAB_005a5505
        ;   XREF to: 005a5505 (CONDITIONAL_JUMP)
    PUSH 0x3c5                          ; 005a52c0
    PUSH 0x64fa71                       ; 005a52c5 | = "..\\sound\\sndmain.cpp" | s_sound_sndmain_cpp_0064fa71 = ..\sound\sndmain.cpp
    PUSH 0x8630                         ; 005a52ca
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005a52cf | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005a52d4
    TEST EAX,EAX                        ; 005a52d7
    JZ 0x005a52e4                       ; 005a52d9 | LAB_005a52e4
        ;   XREF to: 005a52e4 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 005a52db
    CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0 ; 005a52dc | CMP3Decoder * sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0(CMP3Decoder * this_ptr)
        ;   XREF to: 005344f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a52e1
    MOV dword ptr [EBP + 0x16c],EAX     ; 005a52e4
        ;   Label: LAB_005a52e4
    TEST EAX,EAX                        ; 005a52ea
    JNZ 0x005a5310                      ; 005a52ec | LAB_005a5310
        ;   XREF to: 005a5310 (CONDITIONAL_JUMP)
    MOV EDI,0x64fa86                    ; 005a52ee | = "..\\sound\\sndmain.cpp" | s_sound_sndmain_cpp_0064fa86 = ..\sound\sndmain.cpp
    MOV EAX,0x3c6                       ; 005a52f3
    PUSH 0x64fa9b                       ; 005a52f8 | = "Out of memory." | s_Out_of_memory_0064fa9b = Out of memory.
    MOV dword ptr [0x02f0ca48],EDI      ; 005a52fd | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005a5303 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a5308 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a530d
    PUSH ESI                            ; 005a5310
        ;   Label: LAB_005a5310
    MOV EDX,dword ptr [EBP + 0x16c]     ; 005a5311
    PUSH EDX                            ; 005a5317
    CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550 ; 005a5318 | void sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550(CMP3Decoder * this_ptr, char * filename)
        ;   XREF to: 00534550 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a531d
    MOV EDI,EBP                         ; 005a5320
    PUSH EDI                            ; 005a5322
    MOV AL,byte ptr [ESI]               ; 005a5323
        ;   Label: LAB_005a5323
    MOV byte ptr [EDI],AL               ; 005a5325
    CMP AL,0x0                          ; 005a5327
    JZ 0x005a533b                       ; 005a5329 | LAB_005a533b
        ;   XREF to: 005a533b (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005a532b
    ADD ESI,0x2                         ; 005a532e
    MOV byte ptr [EDI + 0x1],AL         ; 005a5331
    ADD EDI,0x2                         ; 005a5334
    CMP AL,0x0                          ; 005a5337
    JNZ 0x005a5323                      ; 005a5339 | LAB_005a5323
        ;   XREF to: 005a5323 (CONDITIONAL_JUMP)
    POP EDI                             ; 005a533b
        ;   Label: LAB_005a533b
    MOV dword ptr [EBP + 0x100],0x1     ; 005a533c
    MOV EAX,dword ptr [EBP + 0x16c]     ; 005a5346
    MOV dword ptr [EBP + 0x104],0x10    ; 005a534c
    MOV EAX,dword ptr [EAX + 0x104]     ; 005a5356
    MOV dword ptr [EBP + 0x108],EAX     ; 005a535c
    MOV EAX,dword ptr [EBP + 0x16c]     ; 005a5362
    MOV EAX,dword ptr [EAX + 0x100]     ; 005a5368
    MOV dword ptr [EBP + 0x110],0xffffffff ; 005a536e
    PUSH EBP                            ; 005a5378
    MOV dword ptr [EBP + 0x10c],EAX     ; 005a5379
    CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0 ; 005a537f | void sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0(CSfxSample * this_ptr)
        ;   XREF to: 005a45c0 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + 0x150],0x0     ; 005a5384
    MOV dword ptr [EBP + 0x154],0x0     ; 005a538e
    FILD dword ptr [EBP + 0x10c]        ; 005a5398
    MOV dword ptr [EBP + 0x158],0x0     ; 005a539e
    FMUL float ptr [0x00663164]         ; 005a53a8 | float FLOAT_00663164
    MOV dword ptr [EBP + 0x164],0x0     ; 005a53ae
    ADD ESP,0x4                         ; 005a53b8
    MOV dword ptr [EBP + 0x168],0x0     ; 005a53bb
    MOV EAX,dword ptr [ESP + 0x118]     ; 005a53c5
    PUSH EBP                            ; 005a53cc
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a53cd | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + 0x160]       ; 005a53d2
    MOV dword ptr [EBP + 0x15c],EAX     ; 005a53d8
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170 ; 005a53de | int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170(CSfxSample * this_ptr)
        ;   XREF to: 005a6170 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a53e3
    TEST EAX,EAX                        ; 005a53e6
    JZ 0x005a5505                       ; 005a53e8 | LAB_005a5505
        ;   XREF to: 005a5505 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005a53ee
        ;   Label: LAB_005a53ee
    PUSH 0x0                            ; 005a53f0
    PUSH EBP                            ; 005a53f2
    CALL sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0 ; 005a53f3 | void sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0(CSfxSample * this_ptr, int playback_position, int dest_buffer_offset)
        ;   XREF to: 005a65a0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005a53f8
    MOV EAX,EBP                         ; 005a53fb
    MOV EBX,dword ptr [0x03f62828]      ; 005a53fd | int g_LastSampleAccessIndex
    ADD ESP,0x104                       ; 005a5403
    POP EBP                             ; 005a5409
    POP EDI                             ; 005a540a
    POP ESI                             ; 005a540b
    POP EBX                             ; 005a540c
    RET                                 ; 005a540d
    PUSH 0x64fa66                       ; 005a540e | = ".mp3" | s_mp3_0064fa66 = .mp3
        ;   Label: LAB_005a540e
    LEA EAX,[ESP + 0x4]                 ; 005a5413
    PUSH EAX                            ; 005a5417
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005a5418 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a541d
    TEST EAX,EAX                        ; 005a5420
    JZ 0x005a52aa                       ; 005a5422 | LAB_005a52aa
        ;   XREF to: 005a52aa (CONDITIONAL_JUMP)
    PUSH 0x64faaa                       ; 005a5428 | = "rb" | s_rb_0064faaa = rb
    PUSH ESI                            ; 005a542d
    PUSH 0x64faad                       ; 005a542e | = "sound" | s_sound_0064faad = sound
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 005a5433 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005a5438
    MOV dword ptr [EBP + 0x174],EAX     ; 005a543b
    TEST EAX,EAX                        ; 005a5441
    JZ 0x005a5505                       ; 005a5443 | LAB_005a5505
        ;   XREF to: 005a5505 (CONDITIONAL_JUMP)
    MOV EDI,EBP                         ; 005a5449
    PUSH EDI                            ; 005a544b
    MOV AL,byte ptr [ESI]               ; 005a544c
        ;   Label: LAB_005a544c
    MOV byte ptr [EDI],AL               ; 005a544e
    CMP AL,0x0                          ; 005a5450
    JZ 0x005a5464                       ; 005a5452 | LAB_005a5464
        ;   XREF to: 005a5464 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005a5454
    ADD ESI,0x2                         ; 005a5457
    MOV byte ptr [EDI + 0x1],AL         ; 005a545a
    ADD EDI,0x2                         ; 005a545d
    CMP AL,0x0                          ; 005a5460
    JNZ 0x005a544c                      ; 005a5462 | LAB_005a544c
        ;   XREF to: 005a544c (CONDITIONAL_JUMP)
    POP EDI                             ; 005a5464
        ;   Label: LAB_005a5464
    MOV ECX,dword ptr [EBP + 0x174]     ; 005a5465
    PUSH ECX                            ; 005a546b
    CALL crt_stdio.c_ftell_FUN_00601560 ; 005a546c | long crt_stdio.c_ftell_FUN_00601560(FILE * file_handle)
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a5471
    PUSH EBP                            ; 005a5474
    MOV dword ptr [EBP + 0x170],EAX     ; 005a5475
    LEA EAX,[EBP + 0x170]               ; 005a547b
    PUSH EAX                            ; 005a5481
    MOV EDI,dword ptr [EBP + 0x174]     ; 005a5482
    PUSH EDI                            ; 005a5488
    CALL sound_sndmain.cpp_parseWavFile_FUN_005a3fe0 ; 005a5489 | int sound_sndmain.cpp_parseWavFile_FUN_005a3fe0(FILE * file_handle, long * file_offset_ptr, CSfxSample * sfx_sample)
        ;   XREF to: 005a3fe0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005a548e
    TEST EAX,EAX                        ; 005a5491
    JZ 0x005a5505                       ; 005a5493 | LAB_005a5505
        ;   XREF to: 005a5505 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 005a5495
    CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0 ; 005a5496 | void sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0(CSfxSample * this_ptr)
        ;   XREF to: 005a45c0 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + 0x150],0x0     ; 005a549b
    MOV dword ptr [EBP + 0x154],0x0     ; 005a54a5
    FILD dword ptr [EBP + 0x10c]        ; 005a54af
    MOV dword ptr [EBP + 0x158],0x0     ; 005a54b5
    FMUL float ptr [0x00663164]         ; 005a54bf | float FLOAT_00663164
    MOV dword ptr [EBP + 0x164],0x0     ; 005a54c5
    ADD ESP,0x4                         ; 005a54cf
    MOV dword ptr [EBP + 0x168],0x0     ; 005a54d2
    MOV EAX,dword ptr [ESP + 0x118]     ; 005a54dc
    PUSH EBP                            ; 005a54e3
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a54e4 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + 0x160]       ; 005a54e9
    MOV dword ptr [EBP + 0x15c],EAX     ; 005a54ef
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170 ; 005a54f5 | int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170(CSfxSample * this_ptr)
        ;   XREF to: 005a6170 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a54fa
    TEST EAX,EAX                        ; 005a54fd
    JNZ 0x005a53ee                      ; 005a54ff | LAB_005a53ee
        ;   XREF to: 005a53ee (CONDITIONAL_JUMP)
    PUSH EBP                            ; 005a5505
        ;   Label: LAB_005a5505
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 ; 005a5506 | void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0(CSfxSample * this_ptr)
        ;   XREF to: 005a62c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a550b
    XOR EAX,EAX                         ; 005a550e
    MOV EBX,dword ptr [0x03f62828]      ; 005a5510 | int g_LastSampleAccessIndex
    ADD ESP,0x104                       ; 005a5516
    POP EBP                             ; 005a551c
    POP EDI                             ; 005a551d
    POP ESI                             ; 005a551e
    POP EBX                             ; 005a551f
    RET                                 ; 005a5520

