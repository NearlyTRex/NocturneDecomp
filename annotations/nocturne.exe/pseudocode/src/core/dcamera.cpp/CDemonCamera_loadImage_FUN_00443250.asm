; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_loadImage_FUN_00443250(CDemonCamera *this_ptr,char *filename)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined1       Stack[-0x144]:1  local_144
; undefined1       Stack[-0x143]:1  local_143
; undefined        Stack[-0xf4]:1  local_f4
; undefined1       Stack[-0xf3]:1  local_f3
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined1       Stack[-0x9d]:1  local_9d
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508bb2
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_0057b81b
;   TerminatedCString s_CDemonCamera_loadImage_n_0057b82f
;   TerminatedCString s_ACT_0057b856
;   undefined4 s_ACT_0057b856+1
;   undefined4 s_ACT_0057b856+2
;   undefined4 s_ACT_0057b856+3
;   TerminatedCString s_rb_0057b85b
;   TerminatedCString s_backdrop_0057b85e
;   TerminatedCString s_rb_0057b867
;   TerminatedCString s_art_0057b86a
;   TerminatedCString s_core_dcamera_cpp_0057b86e
;   TerminatedCString s_CDemonCamera_loadImage_n_0057b882
;   TerminatedCString s_fog_0057b8a3
;   undefined4 s_fog_0057b8a3+1
;   undefined4 s_fog_0057b8a3+2
;   ... and 46 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_memset_FUN_00563cc0
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_fseek_FUN_0056582c
;   crt_string.c__strcmp_FUN_005649c0
;   crt_watcom.c__memset_FUN_00481980
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_updateTexture_FUN_00461f60
;   support_codec.cpp_CLZWDecompress_init_FUN_00439a30
;   support_codec.cpp_CLZWDecompress_processBuffer_FUN_00439b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443250
        ;   Label: core_dcamera.cpp_CDemonCamera_loadImage_FUN_00443250
    PUSH ESI                            ; 00443251
    PUSH EDI                            ; 00443252
    PUSH EBP                            ; 00443253
    SUB ESP,0x134                       ; 00443254
    MOV ESI,dword ptr [ESP + 0x14c]     ; 0044325a
    MOV EDI,ESP                         ; 00443261
    MOV DL,0x2e                         ; 00443263
    PUSH EDI                            ; 00443265
    MOV AL,byte ptr [ESI]               ; 00443266
        ;   Label: LAB_00443266
    MOV byte ptr [EDI],AL               ; 00443268
    CMP AL,0x0                          ; 0044326a
    JZ 0x0044327e                       ; 0044326c
        ;   XREF to: 0044327e (CONDITIONAL_JUMP)  ; LAB_0044327e
    MOV AL,byte ptr [ESI + 0x1]         ; 0044326e
    ADD ESI,0x2                         ; 00443271
    MOV byte ptr [EDI + 0x1],AL         ; 00443274
    ADD EDI,0x2                         ; 00443277
    CMP AL,0x0                          ; 0044327a
    JNZ 0x00443266                      ; 0044327c
        ;   XREF to: 00443266 (CONDITIONAL_JUMP)  ; LAB_00443266
    POP EDI                             ; 0044327e
        ;   Label: LAB_0044327e
    MOV ESI,ESP                         ; 0044327f
    MOV AL,byte ptr [ESI]               ; 00443281
        ;   Label: LAB_00443281
    CMP AL,DL                           ; 00443283
    JZ 0x00443299                       ; 00443285
        ;   XREF to: 00443299 (CONDITIONAL_JUMP)  ; LAB_00443299
    CMP AL,0x0                          ; 00443287
    JZ 0x00443297                       ; 00443289
        ;   XREF to: 00443297 (CONDITIONAL_JUMP)  ; LAB_00443297
    INC ESI                             ; 0044328b
    MOV AL,byte ptr [ESI]               ; 0044328c
    CMP AL,DL                           ; 0044328e
    JZ 0x00443299                       ; 00443290
        ;   XREF to: 00443299 (CONDITIONAL_JUMP)  ; LAB_00443299
    INC ESI                             ; 00443292
    CMP AL,0x0                          ; 00443293
    JNZ 0x00443281                      ; 00443295
        ;   XREF to: 00443281 (CONDITIONAL_JUMP)  ; LAB_00443281
    SUB ESI,ESI                         ; 00443297
        ;   Label: LAB_00443297
    MOV EDI,ESI                         ; 00443299
        ;   Label: LAB_00443299
    TEST ESI,ESI                        ; 0044329b
    JNZ 0x004432c2                      ; 0044329d
        ;   XREF to: 004432c2 (CONDITIONAL_JUMP)  ; LAB_004432c2
    MOV EDX,0x57b81b                    ; 0044329f | = "..\\core\\dcamera.cpp"
    MOV ECX,0x982                       ; 004432a4
    PUSH 0x57b82f                       ; 004432a9 | = "CDemonCamera::loadImage - no extention"
    MOV dword ptr [0x01cc4800],EDX      ; 004432ae | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004432b4 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004432ba
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004432bf
    MOV ESI,0x57b856                    ; 004432c2 | = ".ACT"
        ;   Label: LAB_004432c2
    PUSH EDI                            ; 004432c7
    MOV AL,byte ptr [ESI]               ; 004432c8 | = ".ACT" | s_ACT_0057b856+2
        ;   Label: LAB_004432c8
    MOV byte ptr [EDI],AL               ; 004432ca
    CMP AL,0x0                          ; 004432cc
    JZ 0x004432e0                       ; 004432ce
        ;   XREF to: 004432e0 (CONDITIONAL_JUMP)  ; LAB_004432e0
    MOV AL,byte ptr [ESI + 0x1]         ; 004432d0 | s_ACT_0057b856+1 | s_ACT_0057b856+3
    ADD ESI,0x2                         ; 004432d3
    MOV byte ptr [EDI + 0x1],AL         ; 004432d6
    ADD EDI,0x2                         ; 004432d9
    CMP AL,0x0                          ; 004432dc
    JNZ 0x004432c8                      ; 004432de
        ;   XREF to: 004432c8 (CONDITIONAL_JUMP)  ; LAB_004432c8
    POP EDI                             ; 004432e0
        ;   Label: LAB_004432e0
    PUSH 0x57b85b                       ; 004432e1 | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 004432e6
    PUSH EAX                            ; 004432ea
    PUSH 0x57b85e                       ; 004432eb | = "backdrop"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004432f0
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004432f5
    MOV EBX,EAX                         ; 004432f8
    TEST EAX,EAX                        ; 004432fa
    JZ 0x00443a2c                       ; 004432fc
        ;   XREF to: 00443a2c (CONDITIONAL_JUMP)  ; LAB_00443a2c
    PUSH EBX                            ; 00443302
        ;   Label: LAB_00443302
    PUSH 0x3                            ; 00443303
    PUSH 0x100                          ; 00443305
    PUSH 0xb0daf8                       ; 0044330a | DAT_00b0daf8
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0044330f
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00443314
    PUSH EBX                            ; 00443317
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00443318
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 0044331d
    LEA EDI,[ESP + 0x50]                ; 00443320
    MOV ESI,dword ptr [ESP + 0x14c]     ; 00443324
    MOV DL,0x2e                         ; 0044332b
    PUSH EDI                            ; 0044332d
    MOV AL,byte ptr [ESI]               ; 0044332e
        ;   Label: LAB_0044332e
    MOV byte ptr [EDI],AL               ; 00443330
    CMP AL,0x0                          ; 00443332
    JZ 0x00443346                       ; 00443334
        ;   XREF to: 00443346 (CONDITIONAL_JUMP)  ; LAB_00443346
    MOV AL,byte ptr [ESI + 0x1]         ; 00443336
    ADD ESI,0x2                         ; 00443339
    MOV byte ptr [EDI + 0x1],AL         ; 0044333c
    ADD EDI,0x2                         ; 0044333f
    CMP AL,0x0                          ; 00443342
    JNZ 0x0044332e                      ; 00443344
        ;   XREF to: 0044332e (CONDITIONAL_JUMP)  ; LAB_0044332e
    POP EDI                             ; 00443346
        ;   Label: LAB_00443346
    LEA ESI,[ESP + 0x50]                ; 00443347
    MOV AL,byte ptr [ESI]               ; 0044334b
        ;   Label: LAB_0044334b
    CMP AL,DL                           ; 0044334d
    JZ 0x00443363                       ; 0044334f
        ;   XREF to: 00443363 (CONDITIONAL_JUMP)  ; LAB_00443363
    CMP AL,0x0                          ; 00443351
    JZ 0x00443361                       ; 00443353
        ;   XREF to: 00443361 (CONDITIONAL_JUMP)  ; LAB_00443361
    INC ESI                             ; 00443355
    MOV AL,byte ptr [ESI]               ; 00443356
    CMP AL,DL                           ; 00443358
    JZ 0x00443363                       ; 0044335a
        ;   XREF to: 00443363 (CONDITIONAL_JUMP)  ; LAB_00443363
    INC ESI                             ; 0044335c
    CMP AL,0x0                          ; 0044335d
    JNZ 0x0044334b                      ; 0044335f
        ;   XREF to: 0044334b (CONDITIONAL_JUMP)  ; LAB_0044334b
    SUB ESI,ESI                         ; 00443361
        ;   Label: LAB_00443361
    MOV EDI,ESI                         ; 00443363
        ;   Label: LAB_00443363
    TEST ESI,ESI                        ; 00443365
    JNZ 0x0044338c                      ; 00443367
        ;   XREF to: 0044338c (CONDITIONAL_JUMP)  ; LAB_0044338c
    MOV EBX,0x57b86e                    ; 00443369 | = "..\\core\\dcamera.cpp"
    MOV ESI,0x995                       ; 0044336e
    PUSH 0x57b882                       ; 00443373 | = "CDemonCamera::loadImage - no ext"
    MOV dword ptr [0x01cc4800],EBX      ; 00443378 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0044337e | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00443384
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00443389
    MOV ESI,0x57b8a3                    ; 0044338c | = ".fog"
        ;   Label: LAB_0044338c
    PUSH EDI                            ; 00443391
    MOV AL,byte ptr [ESI]               ; 00443392 | = ".fog" | s_fog_0057b8a3+2
        ;   Label: LAB_00443392
    MOV byte ptr [EDI],AL               ; 00443394
    CMP AL,0x0                          ; 00443396
    JZ 0x004433aa                       ; 00443398
        ;   XREF to: 004433aa (CONDITIONAL_JUMP)  ; LAB_004433aa
    MOV AL,byte ptr [ESI + 0x1]         ; 0044339a | s_fog_0057b8a3+1 | s_fog_0057b8a3+3
    ADD ESI,0x2                         ; 0044339d
    MOV byte ptr [EDI + 0x1],AL         ; 004433a0
    ADD EDI,0x2                         ; 004433a3
    CMP AL,0x0                          ; 004433a6
    JNZ 0x00443392                      ; 004433a8
        ;   XREF to: 00443392 (CONDITIONAL_JUMP)  ; LAB_00443392
    POP EDI                             ; 004433aa
        ;   Label: LAB_004433aa
    PUSH 0x57b8a8                       ; 004433ab | = "rb"
    LEA EAX,[ESP + 0x54]                ; 004433b0
    PUSH EAX                            ; 004433b4
    PUSH 0x57b8ab                       ; 004433b5 | = "backdrop"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004433ba
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004433bf
    MOV dword ptr [ESP + 0x130],EAX     ; 004433c2
    TEST EAX,EAX                        ; 004433c9
    JZ 0x004436d4                       ; 004433cb
        ;   XREF to: 004436d4 (CONDITIONAL_JUMP)  ; LAB_004436d4
    PUSH EAX                            ; 004433d1
    PUSH 0x1                            ; 004433d2
    PUSH 0x1000                         ; 004433d4
    PUSH 0x140d784                      ; 004433d9
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004433de
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    MOV EDI,dword ptr [0x0140e7a0]      ; 004433e3 | DAT_0140e7a0
    ADD ESP,0x10                        ; 004433e9
    TEST EDI,EDI                        ; 004433ec
    JZ 0x00443ac3                       ; 004433ee
        ;   XREF to: 00443ac3 (CONDITIONAL_JUMP)  ; LAB_00443ac3
    MOV EBP,0x10                        ; 004433f4
    MOV EAX,[0x0140e790]                ; 004433f9 | DAT_0140e790
    MOV EDX,dword ptr [0x0140e794]      ; 004433fe | DAT_0140e794
    MOV ECX,dword ptr [0x0140e798]      ; 00443404 | DAT_0140e798
    OR EAX,EDX                          ; 0044340a
    MOV dword ptr [0x0140d780],EBP      ; 0044340c | DAT_0140d780
    OR EAX,ECX                          ; 00443412
    JNZ 0x00443420                      ; 00443414
        ;   XREF to: 00443420 (CONDITIONAL_JUMP)  ; LAB_00443420
    MOV dword ptr [0x0140d780],0x1      ; 00443416 | DAT_0140d780
    MOV ESI,dword ptr [ESP + 0x130]     ; 00443420
        ;   Label: LAB_00443420
    PUSH ESI                            ; 00443427
    PUSH 0x1                            ; 00443428
    PUSH 0x3                            ; 0044342a
    LEA EAX,[ESP + 0xb0]                ; 0044342c
    PUSH EAX                            ; 00443433
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00443434
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00443439
    XOR AH,AH                           ; 0044343c
    PUSH 0x57b8b4                       ; 0044343e | = "LZW"
    MOV byte ptr [ESP + 0xab],AH        ; 00443443
    LEA EAX,[ESP + 0xa8]                ; 0044344a
    PUSH EAX                            ; 00443451
    CALL crt_string.c__strcmp_FUN_005649c0 ; 00443452
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00443457
    TEST EAX,EAX                        ; 0044345a
    JNZ 0x00443a4e                      ; 0044345c
        ;   XREF to: 00443a4e (CONDITIONAL_JUMP)  ; LAB_00443a4e
    LEA EAX,[ESP + 0x50]                ; 00443462
        ;   Label: LAB_00443462
    PUSH EAX                            ; 00443466
    PUSH 0x57b8bc                       ; 00443467 | = "backdrop"
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 0044346c
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00443471
    SUB EAX,0x1003                      ; 00443474
    MOV dword ptr [ESP + 0xa8],EAX      ; 00443479
    CMP EAX,0x1                         ; 00443480
    JGE 0x004434ad                      ; 00443483
        ;   XREF to: 004434ad (CONDITIONAL_JUMP)  ; LAB_004434ad
    LEA EAX,[ESP + 0x50]                ; 00443485
    PUSH EAX                            ; 00443489
    MOV ECX,0x57b8c5                    ; 0044348a | = "..\\core\\dcamera.cpp"
    MOV EBX,0x9b5                       ; 0044348f
    PUSH 0x57b8d9                       ; 00443494 | = "Hell froze loading %s"
    MOV dword ptr [0x01cc4800],ECX      ; 00443499 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0044349f | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004434a5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004434aa
    CMP dword ptr [ESP + 0xa8],0x7a120  ; 004434ad
        ;   Label: LAB_004434ad
    JBE 0x004434e2                      ; 004434b8
        ;   XREF to: 004434e2 (CONDITIONAL_JUMP)  ; LAB_004434e2
    LEA EAX,[ESP + 0x50]                ; 004434ba
    PUSH EAX                            ; 004434be
    MOV EDI,0x57b8ef                    ; 004434bf | = "..\\core\\dcamera.cpp"
    MOV EBP,0x9bb                       ; 004434c4
    PUSH 0x57b903                       ; 004434c9 | = "%s too big to fit in decompress buffer"
    MOV dword ptr [0x01cc4800],EDI      ; 004434ce | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004434d4 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004434da
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004434df
    MOV EAX,dword ptr [ESP + 0x130]     ; 004434e2
        ;   Label: LAB_004434e2
    PUSH EAX                            ; 004434e9
    PUSH 0x1                            ; 004434ea
    MOV EDX,dword ptr [ESP + 0xb0]      ; 004434ec
    PUSH EDX                            ; 004434f3
    PUSH 0x77d250                       ; 004434f4 | DAT_0077d250
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004434f9
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004434fe
    PUSH 0x12cdb28                      ; 00443501
    CALL support_codec.cpp_CLZWDecompress_init_FUN_00439a30 ; 00443506
        ;   XREF to: 00439a30 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDecompress_init_FUN_00439a30(CLZWDecompress * this_ptr)
    MOV EDX,dword ptr [0x0140d780]      ; 0044350b | DAT_0140d780
    LEA EAX,[EDX*0x4 + 0x0]             ; 00443511
    ADD EAX,EDX                         ; 00443518
    SHL EAX,0xa                         ; 0044351a
    MOV EDX,EAX                         ; 0044351d
    SHL EAX,0x4                         ; 0044351f
    ADD ESP,0x4                         ; 00443522
    SUB EAX,EDX                         ; 00443525
    PUSH 0x1                            ; 00443527
    MOV dword ptr [ESP + 0xb0],EAX      ; 00443529
    LEA EAX,[ESP + 0xb0]                ; 00443530
    PUSH EAX                            ; 00443537
    PUSH 0x12e1778                      ; 00443538
    LEA EAX,[ESP + 0xb4]                ; 0044353d
    PUSH EAX                            ; 00443544
    PUSH 0x77d250                       ; 00443545 | DAT_0077d250
    PUSH 0x12cdb28                      ; 0044354a
    CALL support_codec.cpp_CLZWDecompress_processBuffer_FUN_00439b30 ; 0044354f
        ;   XREF to: 00439b30 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDecompress_processBuffer_FUN_00439b30(CLZWDecompress * this_ptr, char * input, int * input_length, char * output, ...)
    ADD ESP,0x18                        ; 00443554
    TEST EAX,EAX                        ; 00443557
    JZ 0x00443a96                       ; 00443559
        ;   XREF to: 00443a96 (CONDITIONAL_JUMP)  ; LAB_00443a96
    XOR ESI,ESI                         ; 0044355f
        ;   Label: LAB_0044355f
    MOV EDI,dword ptr [0x0140d780]      ; 00443561 | DAT_0140d780
    MOV dword ptr [ESP + 0xa0],ESI      ; 00443567
    TEST EDI,EDI                        ; 0044356e
    JLE 0x004436c4                      ; 00443570
        ;   XREF to: 004436c4 (CONDITIONAL_JUMP)  ; LAB_004436c4
    MOV EBP,0xfffed400                  ; 00443576
    XOR EDI,EDI                         ; 0044357b
    MOV ESI,0x12c00                     ; 0044357d
    MOV dword ptr [ESP + 0x110],EDI     ; 00443582
    MOV dword ptr [ESP + 0x114],EBP     ; 00443589
    MOV dword ptr [ESP + 0x10c],ESI     ; 00443590
    MOV EAX,dword ptr [ESP + 0x110]     ; 00443597
        ;   Label: LAB_00443597
    MOV dword ptr [ESP + 0xfc],EAX      ; 0044359e
    MOV EAX,dword ptr [ESP + 0x114]     ; 004435a5
    MOV dword ptr [ESP + 0x100],EAX     ; 004435ac
    MOV EAX,dword ptr [ESP + 0x110]     ; 004435b3
    MOV dword ptr [ESP + 0x104],EAX     ; 004435ba
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004435c1
    MOV dword ptr [ESP + 0x108],EAX     ; 004435c8
    MOV ECX,dword ptr [ESP + 0x104]     ; 004435cf
        ;   Label: LAB_004435cf
    MOV EDI,dword ptr [ESP + 0x100]     ; 004435d6
    MOV EBP,dword ptr [ESP + 0xfc]      ; 004435dd
    XOR EDX,EDX                         ; 004435e4
    XOR EBX,EBX                         ; 004435e6
    LEA EAX,[EDX + EBP*0x1]             ; 004435e8
        ;   Label: LAB_004435e8
    MOV EAX,dword ptr [EAX + 0x12e1775] ; 004435eb
    SAR EAX,0x18                        ; 004435f1
    ADD EAX,EBX                         ; 004435f4
    MOV ESI,dword ptr [ESP + 0xa0]      ; 004435f6
    MOV EBX,EAX                         ; 004435fd
    SHL EAX,0x2                         ; 004435ff
    TEST ESI,ESI                        ; 00443602
    JLE 0x00443612                      ; 00443604
        ;   XREF to: 00443612 (CONDITIONAL_JUMP)  ; LAB_00443612
    LEA ESI,[EDI + EDX*0x1]             ; 00443606
    MOVZX ESI,byte ptr [ESI + 0x12e1778] ; 00443609 | DAT_012ceb78 | DAT_012ceb79 | DAT_012cecb8
    ADD EAX,ESI                         ; 00443610
    INC ECX                             ; 00443612
        ;   Label: LAB_00443612
    INC EDX                             ; 00443613
    MOV byte ptr [ECX + 0x12e1777],AL   ; 00443614 | DAT_012e18b8
    CMP EDX,0x140                       ; 0044361a
    JL 0x004435e8                       ; 00443620
        ;   XREF to: 004435e8 (CONDITIONAL_JUMP)  ; LAB_004435e8
    MOV EBP,dword ptr [ESP + 0x100]     ; 00443622
    MOV EAX,dword ptr [ESP + 0x104]     ; 00443629
    MOV EDI,dword ptr [ESP + 0xfc]      ; 00443630
    MOV EDX,dword ptr [ESP + 0x108]     ; 00443637
    ADD EBP,0x140                       ; 0044363e
    ADD EAX,0x140                       ; 00443644
    ADD EDI,0x140                       ; 00443649
    MOV dword ptr [ESP + 0x100],EBP     ; 0044364f
    MOV dword ptr [ESP + 0x104],EAX     ; 00443656
    MOV dword ptr [ESP + 0xfc],EDI      ; 0044365d
    CMP EAX,EDX                         ; 00443664
    JNZ 0x004435cf                      ; 00443666
        ;   XREF to: 004435cf (CONDITIONAL_JUMP)  ; LAB_004435cf
    MOV EBP,dword ptr [ESP + 0x10c]     ; 0044366c
    MOV EAX,dword ptr [ESP + 0x110]     ; 00443673
    MOV EDX,dword ptr [ESP + 0x114]     ; 0044367a
    MOV ECX,dword ptr [ESP + 0xa0]      ; 00443681
    MOV EBX,dword ptr [0x0140d780]      ; 00443688 | DAT_0140d780
    ADD EBP,0x12c00                     ; 0044368e
    ADD EAX,0x12c00                     ; 00443694
    ADD EDX,0x12c00                     ; 00443699
    INC ECX                             ; 0044369f
    MOV dword ptr [ESP + 0x10c],EBP     ; 004436a0
    MOV dword ptr [ESP + 0x110],EAX     ; 004436a7
    MOV dword ptr [ESP + 0x114],EDX     ; 004436ae
    MOV dword ptr [ESP + 0xa0],ECX      ; 004436b5
    CMP ECX,EBX                         ; 004436bc
    JL 0x00443597                       ; 004436be
        ;   XREF to: 00443597 (CONDITIONAL_JUMP)  ; LAB_00443597
    MOV ECX,dword ptr [ESP + 0x130]     ; 004436c4
        ;   Label: LAB_004436c4
    PUSH ECX                            ; 004436cb
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004436cc
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004436d1
    PUSH 0x57b955                       ; 004436d4 | = "rb"
        ;   Label: LAB_004436d4
    MOV EBX,dword ptr [ESP + 0x150]     ; 004436d9
    PUSH EBX                            ; 004436e0
    PUSH 0x57b958                       ; 004436e1 | = "backdrop"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004436e6
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004436eb
    MOV EBP,EAX                         ; 004436ee
    TEST EAX,EAX                        ; 004436f0
    JZ 0x00443adb                       ; 004436f2
        ;   XREF to: 00443adb (CONDITIONAL_JUMP)  ; LAB_00443adb
    XOR EDX,EDX                         ; 004436f8
        ;   Label: LAB_004436f8
    XOR EAX,EAX                         ; 004436fa
    MOV ECX,dword ptr [0x005b7624]      ; 004436fc | DAT_005b7624
        ;   Label: LAB_004436fc
    MOVZX ESI,byte ptr [EAX + 0xb0dafa] ; 00443702
    XOR EBX,EBX                         ; 00443709
    MOVZX EDI,byte ptr [EAX + 0xb0daf8] ; 0044370b | DAT_00b0daf8
    MOV BL,byte ptr [EAX + 0xb0daf9]    ; 00443712
    CMP ECX,0x20                        ; 00443718
    JNZ 0x00443afd                      ; 0044371b
        ;   XREF to: 00443afd (CONDITIONAL_JUMP)  ; LAB_00443afd
    MOV CL,byte ptr [0x01c00624]        ; 00443721 | DAT_01c00624
    SHL EDI,CL                          ; 00443727
    MOV CL,byte ptr [0x01c00630]        ; 00443729 | DAT_01c00630
    SHL EBX,CL                          ; 0044372f
    MOV CL,byte ptr [0x01c0063c]        ; 00443731 | DAT_01c0063c
    SHL ESI,CL                          ; 00443737
    OR EBX,EDI                          ; 00443739
    MOV ECX,ESI                         ; 0044373b
    OR ECX,EBX                          ; 0044373d
    ADD EDX,0x4                         ; 0044373f
        ;   Label: LAB_0044373f
    ADD EAX,0x3                         ; 00443742
    MOV dword ptr [EDX + 0xb0ddf8],ECX  ; 00443745
    CMP EDX,0x400                       ; 0044374b
    JNZ 0x004436fc                      ; 00443751
        ;   XREF to: 004436fc (CONDITIONAL_JUMP)  ; LAB_004436fc
    PUSH EBP                            ; 00443753
    PUSH 0x1e0                          ; 00443754
    PUSH 0x280                          ; 00443759
    PUSH 0x1410290                      ; 0044375e
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00443763
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00443768
    PUSH EBP                            ; 0044376b
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0044376c
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 00443771
    MOV EAX,dword ptr [ESP + 0x148]     ; 00443774
    MOV EBX,dword ptr [EAX + 0x140]     ; 0044377b
    CMP EBX,0xf0                        ; 00443781
    JNZ 0x00443b0e                      ; 00443787
        ;   XREF to: 00443b0e (CONDITIONAL_JUMP)  ; LAB_00443b0e
    XOR ECX,ECX                         ; 0044378d
    MOV dword ptr [ESP + 0x124],ECX     ; 0044378f
    MOV EBP,0x1410290                   ; 00443796
    MOV EDI,dword ptr [ESP + 0x148]     ; 0044379b
        ;   Label: LAB_0044379b
    MOV EAX,dword ptr [ESP + 0x124]     ; 004437a2
    XOR EBX,EBX                         ; 004437a9
    MOV ECX,dword ptr [ESP + 0x124]     ; 004437ab
    MOV dword ptr [ESP + 0xb0],EBX      ; 004437b2
    MOV EDI,dword ptr [EDI + 0x158]     ; 004437b9
    ADD EAX,EBP                         ; 004437bf
    ADD EDI,ECX                         ; 004437c1
    ADD EDI,0x4                         ; 004437c3
        ;   Label: LAB_004437c3
    MOVZX ESI,byte ptr [EAX + 0x1]      ; 004437c6
    ADD EAX,0x2                         ; 004437ca
    XOR EDX,EDX                         ; 004437cd
    XOR EBX,EBX                         ; 004437cf
    XOR ECX,ECX                         ; 004437d1
    MOV ESI,dword ptr [ESI*0x4 + 0xb0ddfc] ; 004437d3
    MOV DL,byte ptr [EAX + -0x2]        ; 004437da
    MOV BL,byte ptr [EAX + 0x27e]       ; 004437dd
    MOV CL,byte ptr [EAX + 0x27f]       ; 004437e3
    AND ESI,0xfcfcfc                    ; 004437e9
    MOV EDX,dword ptr [EDX*0x4 + 0xb0ddfc] ; 004437ef
    MOV EBX,dword ptr [EBX*0x4 + 0xb0ddfc] ; 004437f6
    MOV ECX,dword ptr [ECX*0x4 + 0xb0ddfc] ; 004437fd
    AND EDX,0xfcfcfc                    ; 00443804
    SHR ESI,0x2                         ; 0044380a
    AND EBX,0xfcfcfc                    ; 0044380d
    AND ECX,0xfcfcfc                    ; 00443813
    SHR EDX,0x2                         ; 00443819
    SHR EBX,0x2                         ; 0044381c
    SHR ECX,0x2                         ; 0044381f
    ADD EDX,ESI                         ; 00443822
    MOV ESI,dword ptr [ESP + 0xb0]      ; 00443824
    ADD EDX,EBX                         ; 0044382b
    INC ESI                             ; 0044382d
    ADD EDX,ECX                         ; 0044382e
    MOV dword ptr [ESP + 0xb0],ESI      ; 00443830
    MOV dword ptr [EDI + -0x4],EDX      ; 00443837
    CMP ESI,0x140                       ; 0044383a
    JL 0x004437c3                       ; 00443840
        ;   XREF to: 004437c3 (CONDITIONAL_JUMP)  ; LAB_004437c3
    MOV ECX,dword ptr [ESP + 0x124]     ; 00443842
    ADD ECX,0x500                       ; 00443849
    MOV dword ptr [ESP + 0x124],ECX     ; 0044384f
    CMP ECX,0x4b000                     ; 00443856
    JNZ 0x0044379b                      ; 0044385c
        ;   XREF to: 0044379b (CONDITIONAL_JUMP)  ; LAB_0044379b
    LEA EAX,[EAX]                       ; 00443862
    LEA EDX,[EDX]                       ; 00443868
    MOV EAX,EAX                         ; 0044386e
    XOR EDI,EDI                         ; 00443870
        ;   Label: LAB_00443870
    XOR EBP,EBP                         ; 00443872
    MOV EDX,EDI                         ; 00443874
        ;   Label: LAB_00443874
    MOV EAX,EDI                         ; 00443876
    SAR EDX,0x1f                        ; 00443878
    SHL EDX,0x8                         ; 0044387b
    SBB EAX,EDX                         ; 0044387e
    SAR EAX,0x8                         ; 00443880
    MOV EBX,EBP                         ; 00443883
    XOR ECX,ECX                         ; 00443885
    IMUL ESI,EAX,0x280                  ; 00443887
    MOV EDX,ECX                         ; 0044388d
        ;   Label: LAB_0044388d
    MOV EAX,ECX                         ; 0044388f
    SAR EDX,0x1f                        ; 00443891
    SHL EDX,0x8                         ; 00443894
    SBB EAX,EDX                         ; 00443897
    SAR EAX,0x8                         ; 00443899
    INC EBX                             ; 0044389c
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x1410290] ; 0044389d
    ADD ECX,0x280                       ; 004438a4
    MOV byte ptr [EBX + 0x145b28f],AL   ; 004438aa
    CMP ECX,0x28000                     ; 004438b0
    JNZ 0x0044388d                      ; 004438b6
        ;   XREF to: 0044388d (CONDITIONAL_JUMP)  ; LAB_0044388d
    ADD EBP,0x100                       ; 004438b8
    ADD EDI,0x1e0                       ; 004438be
    CMP EBP,0x10000                     ; 004438c4
    JNZ 0x00443874                      ; 004438ca
        ;   XREF to: 00443874 (CONDITIONAL_JUMP)  ; LAB_00443874
    PUSH 0x5ad49c                       ; 004438cc | DAT_005ad49c
    MOV ESI,dword ptr [0x005ae704]      ; 004438d1 | DAT_005ae704
    PUSH ESI                            ; 004438d7 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004438d8
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV ESI,0x145b290                   ; 004438dd
    ADD ESP,0x8                         ; 004438e2
    MOV EDI,dword ptr [0x01c02580]      ; 004438e5 | DAT_01c02580
    MOV ECX,EBP                         ; 004438eb
    PUSH EDI                            ; 004438ed
    MOV EAX,ECX                         ; 004438ee
    SHR ECX,0x2                         ; 004438f0
    MOVSD.REP ES:EDI,ESI                ; 004438f3 | DAT_0145b290 | DAT_0145b294
    MOV CL,AL                           ; 004438f5
    AND CL,0x3                          ; 004438f7
    MOVSB.REP ES:EDI,ESI                ; 004438fa | DAT_0145b294 | DAT_0145b295
    POP EDI                             ; 004438fc
    MOV ECX,0x300                       ; 004438fd
    MOV ESI,0xb0daf8                    ; 00443902
    MOV EDI,dword ptr [0x01c00020]      ; 00443907 | DAT_01c00020
    PUSH EDI                            ; 0044390d
    MOV EAX,ECX                         ; 0044390e
    SHR ECX,0x2                         ; 00443910
    MOVSD.REP ES:EDI,ESI                ; 00443913 | DAT_00b0daf8 | DAT_00b0dafc
    MOV CL,AL                           ; 00443915
    AND CL,0x3                          ; 00443917
    MOVSB.REP ES:EDI,ESI                ; 0044391a | DAT_00b0dafc | DAT_00b0dafd
    POP EDI                             ; 0044391c
    PUSH 0xb0daf8                       ; 0044391d | DAT_00b0daf8
    PUSH 0x5ad49c                       ; 00443922 | DAT_005ad49c
    MOV EDI,dword ptr [0x005ae704]      ; 00443927 | DAT_005ae704
    PUSH EDI                            ; 0044392d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_updateTexture_FUN_00461f60 ; 0044392e
        ;   XREF to: 00461f60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_updateTexture_FUN_00461f60(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture, SRGBColorPalette * palette)
    ADD ESP,0xc                         ; 00443933
    PUSH 0x12d40                        ; 00443936
    MOV ECX,0xaafdb8                    ; 0044393b
    XOR EDX,EDX                         ; 00443940
    CALL crt_watcom.c__memset_FUN_00481980 ; 00443942
        ;   XREF to: 00481980 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__memset_FUN_00481980()
    CMP dword ptr [0x005b7620],0x180    ; 00443947 | DAT_005b7620
    JNZ 0x00443a21                      ; 00443951
        ;   XREF to: 00443a21 (CONDITIONAL_JUMP)  ; LAB_00443a21
    XOR EAX,EAX                         ; 00443957
    MOV dword ptr [ESP + 0x12c],EAX     ; 00443959
    MOV dword ptr [ESP + 0x128],EAX     ; 00443960
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00443967
        ;   Label: LAB_00443967
    MOV EDX,EAX                         ; 0044396e
    MOV ECX,0xc0                        ; 00443970
    SAR EDX,0x1f                        ; 00443975
    IDIV ECX                            ; 00443978
    IMUL EBP,EAX,0x140                  ; 0044397a
    XOR EDI,EDI                         ; 00443980
    MOV EAX,dword ptr [ESP + 0x128]     ; 00443982
    XOR ESI,ESI                         ; 00443989
    MOV dword ptr [ESP + 0xf8],EAX      ; 0044398b
    MOV EDX,ESI                         ; 00443992
        ;   Label: LAB_00443992
    MOV EAX,ESI                         ; 00443994
    SAR EDX,0x1f                        ; 00443996
    SHL EDX,0x8                         ; 00443999
    SBB EAX,EDX                         ; 0044399c
    SAR EAX,0x8                         ; 0044399e
    MOV ECX,dword ptr [0x0140d780]      ; 004439a1 | DAT_0140d780
    MOV EBX,EAX                         ; 004439a7
    XOR EAX,EAX                         ; 004439a9
    TEST ECX,ECX                        ; 004439ab
    JLE 0x004439de                      ; 004439ad
        ;   XREF to: 004439de (CONDITIONAL_JUMP)  ; LAB_004439de
    MOV EDX,dword ptr [ESP + 0xf8]      ; 004439af
    LEA ECX,[EBX + EBP*0x1]             ; 004439b6
    ADD EDX,EDI                         ; 004439b9
    ADD EDX,0x12c00                     ; 004439bb
        ;   Label: LAB_004439bb
    MOV BL,byte ptr [ECX + 0x12e1778]   ; 004439c1
    INC EAX                             ; 004439c7
    MOV byte ptr [EDX + 0x12ceb78],BL   ; 004439c8
    MOV EBX,dword ptr [0x0140d780]      ; 004439ce | DAT_0140d780
    ADD ECX,0x12c00                     ; 004439d4
    CMP EAX,EBX                         ; 004439da
    JL 0x004439bb                       ; 004439dc
        ;   XREF to: 004439bb (CONDITIONAL_JUMP)  ; LAB_004439bb
    INC EDI                             ; 004439de
        ;   Label: LAB_004439de
    ADD ESI,0x140                       ; 004439df
    CMP EDI,0x100                       ; 004439e5
    JL 0x00443992                       ; 004439eb
        ;   XREF to: 00443992 (CONDITIONAL_JUMP)  ; LAB_00443992
    MOV EDI,dword ptr [ESP + 0x12c]     ; 004439ed
    MOV ESI,dword ptr [ESP + 0x128]     ; 004439f4
    ADD EDI,0xf0                        ; 004439fb
    ADD ESI,0x140                       ; 00443a01
    MOV dword ptr [ESP + 0x12c],EDI     ; 00443a07
    MOV dword ptr [ESP + 0x128],ESI     ; 00443a0e
    CMP EDI,0xb400                      ; 00443a15
    JNZ 0x00443967                      ; 00443a1b
        ;   XREF to: 00443967 (CONDITIONAL_JUMP)  ; LAB_00443967
    ADD ESP,0x134                       ; 00443a21
        ;   Label: LAB_00443a21
    POP EBP                             ; 00443a27
    POP EDI                             ; 00443a28
    POP ESI                             ; 00443a29
    POP EBX                             ; 00443a2a
    RET                                 ; 00443a2b
    PUSH 0x57b867                       ; 00443a2c | = "rb"
        ;   Label: LAB_00443a2c
    LEA EAX,[ESP + 0x4]                 ; 00443a31
    PUSH EAX                            ; 00443a35
    PUSH 0x57b86a                       ; 00443a36 | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00443a3b
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00443a40
    MOV EBX,EAX                         ; 00443a43
    TEST EAX,EAX                        ; 00443a45
    JZ 0x00443a21                       ; 00443a47
        ;   XREF to: 00443a21 (CONDITIONAL_JUMP)  ; LAB_00443a21
    JMP 0x00443302                      ; 00443a49
        ;   XREF to: 00443302 (UNCONDITIONAL_JUMP)  ; LAB_00443302
    PUSH 0x57b8b8                       ; 00443a4e | = "EFD"
        ;   Label: LAB_00443a4e
    LEA EAX,[ESP + 0xa8]                ; 00443a53
    PUSH EAX                            ; 00443a5a
    CALL crt_string.c__strcmp_FUN_005649c0 ; 00443a5b
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00443a60
    TEST EAX,EAX                        ; 00443a63
    JZ 0x00443462                       ; 00443a65
        ;   XREF to: 00443462 (CONDITIONAL_JUMP)  ; LAB_00443462
    PUSH 0x1                            ; 00443a6b
    PUSH -0x3                           ; 00443a6d
    PUSH ESI                            ; 00443a6f
    CALL crt_stdio.c_fseek_FUN_0056582c ; 00443a70
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_0056582c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 00443a75
    PUSH ESI                            ; 00443a78
    MOV EAX,[0x0140d780]                ; 00443a79 | DAT_0140d780
    PUSH EAX                            ; 00443a7e
    PUSH 0x12c00                        ; 00443a7f
    PUSH 0x12e1778                      ; 00443a84
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00443a89
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00443a8e
    JMP 0x004436c4                      ; 00443a91
        ;   XREF to: 004436c4 (UNCONDITIONAL_JUMP)  ; LAB_004436c4
    LEA EAX,[ESP + 0x50]                ; 00443a96
        ;   Label: LAB_00443a96
    PUSH EAX                            ; 00443a9a
    MOV ECX,0x57b92a                    ; 00443a9b | = "..\\core\\dcamera.cpp"
    MOV EBX,0x9c4                       ; 00443aa0
    PUSH 0x57b93e                       ; 00443aa5 | = "Error decompressing %s"
    MOV dword ptr [0x01cc4800],ECX      ; 00443aaa | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 00443ab0 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00443ab6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 00443abb
    JMP 0x0044355f                      ; 00443abe
        ;   XREF to: 0044355f (UNCONDITIONAL_JUMP)  ; LAB_0044355f
    PUSH 0x12c000                       ; 00443ac3
        ;   Label: LAB_00443ac3
    PUSH EDI                            ; 00443ac8
    PUSH 0x12e1778                      ; 00443ac9
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00443ace
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00443ad3
    JMP 0x004436c4                      ; 00443ad6
        ;   XREF to: 004436c4 (UNCONDITIONAL_JUMP)  ; LAB_004436c4
    PUSH 0x57b961                       ; 00443adb | = "rb"
        ;   Label: LAB_00443adb
    PUSH EBX                            ; 00443ae0
    PUSH 0x57b964                       ; 00443ae1 | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00443ae6
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00443aeb
    MOV EBP,EAX                         ; 00443aee
    TEST EAX,EAX                        ; 00443af0
    JZ 0x00443a21                       ; 00443af2
        ;   XREF to: 00443a21 (CONDITIONAL_JUMP)  ; LAB_00443a21
    JMP 0x004436f8                      ; 00443af8
        ;   XREF to: 004436f8 (UNCONDITIONAL_JUMP)  ; LAB_004436f8
    MOV ECX,EBX                         ; 00443afd
        ;   Label: LAB_00443afd
    SHL EDI,0x10                        ; 00443aff
    SHL ECX,0x8                         ; 00443b02
    OR ECX,EDI                          ; 00443b05
    OR ECX,ESI                          ; 00443b07
    JMP 0x0044373f                      ; 00443b09
        ;   XREF to: 0044373f (UNCONDITIONAL_JUMP)  ; LAB_0044373f
    CMP EBX,0x1e0                       ; 00443b0e
        ;   Label: LAB_00443b0e
    JNZ 0x00443b4a                      ; 00443b14
        ;   XREF to: 00443b4a (CONDITIONAL_JUMP)  ; LAB_00443b4a
    MOV ECX,dword ptr [ESP + 0x148]     ; 00443b16
    MOV EAX,0x1410290                   ; 00443b1d
    XOR EDX,EDX                         ; 00443b22
    MOV ECX,dword ptr [ECX + 0x158]     ; 00443b24
    XOR EBX,EBX                         ; 00443b2a
        ;   Label: LAB_00443b2a
    MOV BL,byte ptr [EAX]               ; 00443b2c | DAT_01410290 | DAT_01410291
    INC EAX                             ; 00443b2e
    ADD ECX,0x4                         ; 00443b2f
    MOV EBX,dword ptr [EBX*0x4 + 0xb0ddfc] ; 00443b32
    INC EDX                             ; 00443b39
    MOV dword ptr [ECX + -0x4],EBX      ; 00443b3a
    CMP EDX,0x4b000                     ; 00443b3d
    JL 0x00443b2a                       ; 00443b43
        ;   XREF to: 00443b2a (CONDITIONAL_JUMP)  ; LAB_00443b2a
    JMP 0x00443870                      ; 00443b45
        ;   XREF to: 00443870 (UNCONDITIONAL_JUMP)  ; LAB_00443870
    JLE 0x00443c42                      ; 00443b4a
        ;   XREF to: 00443c42 (CONDITIONAL_JUMP)  ; LAB_00443c42
        ;   Label: LAB_00443b4a
    MOV EAX,dword ptr [EAX + 0x158]     ; 00443b50
    MOV dword ptr [ESP + 0xb4],EAX      ; 00443b56
    MOV EAX,dword ptr [ESP + 0x148]     ; 00443b5d
    XOR EBP,EBP                         ; 00443b64
    MOV EDX,dword ptr [EAX + 0x140]     ; 00443b66
    MOV dword ptr [ESP + 0xb8],EBP      ; 00443b6c
    TEST EDX,EDX                        ; 00443b73
    JLE 0x00443870                      ; 00443b75
        ;   XREF to: 00443870 (CONDITIONAL_JUMP)  ; LAB_00443870
    MOV dword ptr [ESP + 0x120],EBP     ; 00443b7b
    MOV EAX,dword ptr [ESP + 0x148]     ; 00443b82
        ;   Label: LAB_00443b82
    MOV EDI,dword ptr [EAX + 0x13c]     ; 00443b89
    XOR ESI,ESI                         ; 00443b8f
    TEST EDI,EDI                        ; 00443b91
    JLE 0x00443c05                      ; 00443b93
        ;   XREF to: 00443c05 (CONDITIONAL_JUMP)  ; LAB_00443c05
    MOV EBX,dword ptr [ESP + 0x120]     ; 00443b95
    XOR ECX,ECX                         ; 00443b9c
    MOV EDI,dword ptr [ESP + 0x148]     ; 00443b9e
        ;   Label: LAB_00443b9e
    MOV EDX,EBX                         ; 00443ba5
    MOV EAX,EBX                         ; 00443ba7
    SAR EDX,0x1f                        ; 00443ba9
    IDIV dword ptr [EDI + 0x140]        ; 00443bac
    IMUL EDI,EAX,0x280                  ; 00443bb2
    MOV EDX,ECX                         ; 00443bb8
    MOV EBP,dword ptr [ESP + 0x148]     ; 00443bba
    SAR EDX,0x1f                        ; 00443bc1
    MOV EAX,ECX                         ; 00443bc4
    IDIV dword ptr [EBP + 0x13c]        ; 00443bc6
    ADD EAX,EDI                         ; 00443bcc
    ADD EAX,0x1410290                   ; 00443bce
    MOV AL,byte ptr [EAX]               ; 00443bd3 | DAT_01410290
    AND EAX,0xff                        ; 00443bd5
    MOV EDX,dword ptr [ESP + 0xb4]      ; 00443bda
    MOV EAX,dword ptr [EAX*0x4 + 0xb0ddfc] ; 00443be1
    ADD ECX,0x280                       ; 00443be8
    MOV dword ptr [EDX],EAX             ; 00443bee
    LEA EAX,[EDX + 0x4]                 ; 00443bf0
    INC ESI                             ; 00443bf3
    MOV EDX,dword ptr [EBP + 0x13c]     ; 00443bf4
    MOV dword ptr [ESP + 0xb4],EAX      ; 00443bfa
    CMP ESI,EDX                         ; 00443c01
    JL 0x00443b9e                       ; 00443c03
        ;   XREF to: 00443b9e (CONDITIONAL_JUMP)  ; LAB_00443b9e
    MOV EBP,dword ptr [ESP + 0x120]     ; 00443c05
        ;   Label: LAB_00443c05
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00443c0c
    MOV EDX,dword ptr [ESP + 0x148]     ; 00443c13
    ADD EBP,0x1e0                       ; 00443c1a
    INC EAX                             ; 00443c20
    MOV ECX,dword ptr [EDX + 0x140]     ; 00443c21
    MOV dword ptr [ESP + 0x120],EBP     ; 00443c27
    MOV dword ptr [ESP + 0xb8],EAX      ; 00443c2e
    CMP EAX,ECX                         ; 00443c35
    JGE 0x00443870                      ; 00443c37
        ;   XREF to: 00443870 (CONDITIONAL_JUMP)  ; LAB_00443870
    JMP 0x00443b82                      ; 00443c3d
        ;   XREF to: 00443b82 (UNCONDITIONAL_JUMP)  ; LAB_00443b82
    MOV EAX,dword ptr [EAX + 0x158]     ; 00443c42
        ;   Label: LAB_00443c42
    MOV dword ptr [ESP + 0xbc],EAX      ; 00443c48
    MOV EAX,0x9600000                   ; 00443c4f
    MOV ECX,dword ptr [ESP + 0x148]     ; 00443c54
    MOV EDX,EAX                         ; 00443c5b
    MOV EBP,dword ptr [ECX + 0x13c]     ; 00443c5d
    SAR EDX,0x1f                        ; 00443c63
    IDIV EBP                            ; 00443c66
    MOV EDX,EAX                         ; 00443c68
    MOV EBX,dword ptr [ECX + 0x140]     ; 00443c6a
    SAR EDX,0x1f                        ; 00443c70
    IDIV EBX                            ; 00443c73
    XOR ESI,ESI                         ; 00443c75
    MOV dword ptr [ESP + 0xc8],ESI      ; 00443c77
    MOV dword ptr [ESP + 0xc0],EAX      ; 00443c7e
    TEST EBX,EBX                        ; 00443c85
    JLE 0x00443870                      ; 00443c87
        ;   XREF to: 00443870 (CONDITIONAL_JUMP)  ; LAB_00443870
    MOV dword ptr [ESP + 0x11c],ESI     ; 00443c8d
    XOR EAX,EAX                         ; 00443c94
        ;   Label: LAB_00443c94
    MOV dword ptr [ESP + 0xc4],EAX      ; 00443c96
    MOV EAX,dword ptr [ESP + 0x148]     ; 00443c9d
    CMP dword ptr [EAX + 0x13c],0x0     ; 00443ca4
    JLE 0x004440f9                      ; 00443cab
        ;   XREF to: 004440f9 (CONDITIONAL_JUMP)  ; LAB_004440f9
    XOR EBP,EBP                         ; 00443cb1
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00443cb3
    MOV dword ptr [ESP + 0x118],EBP     ; 00443cba
    MOV dword ptr [ESP + 0xe0],EAX      ; 00443cc1
    MOV EAX,dword ptr [ESP + 0x118]     ; 00443cc8
        ;   Label: LAB_00443cc8
    MOV ECX,dword ptr [ESP + 0x148]     ; 00443ccf
    MOV EDX,EAX                         ; 00443cd6
    MOV EBX,dword ptr [ECX + 0x13c]     ; 00443cd8
    SAR EDX,0x1f                        ; 00443cde
    IDIV EBX                            ; 00443ce1
    MOV EBX,EAX                         ; 00443ce3
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00443ce5
    MOV EDX,EAX                         ; 00443cec
    MOV ESI,dword ptr [ECX + 0x140]     ; 00443cee
    SAR EDX,0x1f                        ; 00443cf4
    IDIV ESI                            ; 00443cf7
    MOV ECX,EAX                         ; 00443cf9
    MOV EAX,0x27d80                     ; 00443cfb
    MOV ESI,dword ptr [ESP + 0x148]     ; 00443d00
    MOV EDX,EAX                         ; 00443d07
    MOV EDI,dword ptr [ESI + 0x13c]     ; 00443d09
    SAR EDX,0x1f                        ; 00443d0f
    IDIV EDI                            ; 00443d12
    ADD EAX,EBX                         ; 00443d14
    MOV dword ptr [ESP + 0xd8],EAX      ; 00443d16
    MOV EAX,0x1de20                     ; 00443d1d
    MOV EDX,EAX                         ; 00443d22
    MOV EBP,dword ptr [ESI + 0x140]     ; 00443d24
    SAR EDX,0x1f                        ; 00443d2a
    IDIV EBP                            ; 00443d2d
    MOV EBP,ECX                         ; 00443d2f
    SAR EBP,0x8                         ; 00443d31
    IMUL EBP,EBP,0x280                  ; 00443d34
    ADD EAX,ECX                         ; 00443d3a
    MOV dword ptr [ESP + 0xdc],EAX      ; 00443d3c
    MOV EAX,EBX                         ; 00443d43
    SAR EAX,0x8                         ; 00443d45
    MOV dword ptr [ESP + 0xe4],EAX      ; 00443d48
    ADD EAX,EBP                         ; 00443d4f
    ADD EAX,0x1410290                   ; 00443d51
    MOV AL,byte ptr [EAX]               ; 00443d56 | DAT_01410290
    AND EAX,0xff                        ; 00443d58
    MOV EAX,dword ptr [EAX*0x4 + 0xb0ddfc] ; 00443d5d
    MOV EDX,EAX                         ; 00443d64
    MOV EDI,0xff                        ; 00443d66
    AND EDX,0xff                        ; 00443d6b
    AND ECX,0xff                        ; 00443d71
    MOV dword ptr [ESP + 0xcc],EDX      ; 00443d77
    SUB EDI,ECX                         ; 00443d7e
    MOV ECX,dword ptr [ESP + 0xcc]      ; 00443d80
    IMUL ECX,EDI                        ; 00443d87
    MOV EDX,EAX                         ; 00443d8a
    SHR EDX,0x8                         ; 00443d8c
    AND EDX,0xff                        ; 00443d8f
    MOV dword ptr [ESP + 0xd0],EDX      ; 00443d95
    MOV ESI,dword ptr [ESP + 0xd0]      ; 00443d9c
    IMUL ESI,EDI                        ; 00443da3
    SHR EAX,0x10                        ; 00443da6
    AND EAX,0xff                        ; 00443da9
    MOV dword ptr [ESP + 0xd4],EAX      ; 00443dae
    MOV EDX,EBX                         ; 00443db5
    MOV EBX,dword ptr [ESP + 0xd4]      ; 00443db7
    IMUL EBX,EDI                        ; 00443dbe
    MOV EAX,0xff                        ; 00443dc1
    AND EDX,0xff                        ; 00443dc6
    SUB EAX,EDX                         ; 00443dcc
    MOV EDX,EAX                         ; 00443dce
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00443dd0
    IMUL EAX,EDX                        ; 00443dd7
    ADD ECX,EAX                         ; 00443dda
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00443ddc
    IMUL EAX,EDX                        ; 00443de3
    ADD ESI,EAX                         ; 00443de6
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00443de8
    IMUL EAX,EDX                        ; 00443def
    ADD EBX,EAX                         ; 00443df2
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00443df4
    SAR EAX,0x8                         ; 00443dfb
    ADD EBP,EAX                         ; 00443dfe
    ADD EBP,0x1410290                   ; 00443e00
    MOVZX EBP,byte ptr [EBP]            ; 00443e06 | DAT_01410290
    MOV dword ptr [ESP + 0xe8],EAX      ; 00443e0a
    MOV EAX,dword ptr [EBP*0x4 + 0xb0ddfc] ; 00443e11
    MOV EBP,EAX                         ; 00443e18
    AND EBP,0xff                        ; 00443e1a
    MOV dword ptr [ESP + 0xcc],EBP      ; 00443e20
    MOV EBP,EAX                         ; 00443e27
    SHR EAX,0x10                        ; 00443e29
    AND EAX,0xff                        ; 00443e2c
    MOV dword ptr [ESP + 0xd4],EAX      ; 00443e31
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00443e38
    IMUL EAX,EDI                        ; 00443e3f
    SHR EBP,0x8                         ; 00443e42
    AND EBP,0xff                        ; 00443e45
    MOV dword ptr [ESP + 0xd0],EBP      ; 00443e4b
    MOV EBP,dword ptr [ESP + 0xd8]      ; 00443e52
    AND EBP,0xff                        ; 00443e59
    MOV dword ptr [ESP + 0xec],EAX      ; 00443e5f
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00443e66
    IMUL EAX,EBP                        ; 00443e6d
    ADD EAX,dword ptr [ESP + 0xec]      ; 00443e70
    ADD ECX,EAX                         ; 00443e77
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00443e79
    IMUL EAX,EDI                        ; 00443e80
    MOV dword ptr [ESP + 0xec],EAX      ; 00443e83
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00443e8a
    IMUL EAX,EBP                        ; 00443e91
    ADD EAX,dword ptr [ESP + 0xec]      ; 00443e94
    ADD ESI,EAX                         ; 00443e9b
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00443e9d
    IMUL EDI,EAX                        ; 00443ea4
    IMUL EAX,EBP                        ; 00443ea7
    ADD EDI,EAX                         ; 00443eaa
    ADD EBX,EDI                         ; 00443eac
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00443eae
    SAR EAX,0x8                         ; 00443eb5
    IMUL EAX,EAX,0x280                  ; 00443eb8
    MOV EDI,dword ptr [ESP + 0xe4]      ; 00443ebe
    MOV dword ptr [ESP + 0xec],EAX      ; 00443ec5
    ADD EAX,EDI                         ; 00443ecc
    ADD EAX,0x1410290                   ; 00443ece
    MOV AL,byte ptr [EAX]               ; 00443ed3 | DAT_01410290
    AND EAX,0xff                        ; 00443ed5
    MOV EAX,dword ptr [EAX*0x4 + 0xb0ddfc] ; 00443eda
    MOV EDI,EAX                         ; 00443ee1
    AND EDI,0xff                        ; 00443ee3
    MOV dword ptr [ESP + 0xcc],EDI      ; 00443ee9
    MOV EDI,EAX                         ; 00443ef0
    SHR EAX,0x10                        ; 00443ef2
    AND EAX,0xff                        ; 00443ef5
    MOV dword ptr [ESP + 0xd4],EAX      ; 00443efa
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00443f01
    IMUL EAX,EDX                        ; 00443f08
    SHR EDI,0x8                         ; 00443f0b
    AND EDI,0xff                        ; 00443f0e
    MOV dword ptr [ESP + 0xd0],EDI      ; 00443f14
    MOV EDI,dword ptr [ESP + 0xdc]      ; 00443f1b
    AND EDI,0xff                        ; 00443f22
    MOV dword ptr [ESP + 0xf4],EAX      ; 00443f28
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00443f2f
    IMUL EAX,EDI                        ; 00443f36
    MOV dword ptr [ESP + 0xf0],EAX      ; 00443f39
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00443f40
    ADD EAX,dword ptr [ESP + 0xf0]      ; 00443f47
    ADD ECX,EAX                         ; 00443f4e
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00443f50
    IMUL EAX,EDX                        ; 00443f57
    MOV dword ptr [ESP + 0xf0],EAX      ; 00443f5a
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00443f61
    IMUL EAX,EDI                        ; 00443f68
    MOV dword ptr [ESP + 0xf4],EAX      ; 00443f6b
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00443f72
    ADD EAX,dword ptr [ESP + 0xf4]      ; 00443f79
    ADD ESI,EAX                         ; 00443f80
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00443f82
    IMUL EAX,EDX                        ; 00443f89
    MOV dword ptr [ESP + 0xf4],EAX      ; 00443f8c
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00443f93
    IMUL EAX,EDI                        ; 00443f9a
    ADD EAX,dword ptr [ESP + 0xf4]      ; 00443f9d
    MOV EDX,dword ptr [ESP + 0xe8]      ; 00443fa4
    ADD EBX,EAX                         ; 00443fab
    MOV EAX,dword ptr [ESP + 0xec]      ; 00443fad
    ADD EAX,EDX                         ; 00443fb4
    ADD EAX,0x1410290                   ; 00443fb6
    MOV AL,byte ptr [EAX]               ; 00443fbb | DAT_01410290
    AND EAX,0xff                        ; 00443fbd
    MOV EAX,dword ptr [EAX*0x4 + 0xb0ddfc] ; 00443fc2
    MOV EDX,EAX                         ; 00443fc9
    AND EDX,0xff                        ; 00443fcb
    MOV dword ptr [ESP + 0xcc],EDX      ; 00443fd1
    MOV EDX,EAX                         ; 00443fd8
    SHR EAX,0x10                        ; 00443fda
    AND EAX,0xff                        ; 00443fdd
    MOV dword ptr [ESP + 0xd4],EAX      ; 00443fe2
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00443fe9
    IMUL EAX,EBP                        ; 00443ff0
    MOV dword ptr [ESP + 0xf4],EAX      ; 00443ff3
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00443ffa
    IMUL EAX,EDI                        ; 00444001
    SHR EDX,0x8                         ; 00444004
    AND EDX,0xff                        ; 00444007
    MOV dword ptr [ESP + 0xd0],EDX      ; 0044400d
    ADD EAX,dword ptr [ESP + 0xf4]      ; 00444014
    ADD ECX,EAX                         ; 0044401b
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0044401d
    IMUL EAX,EBP                        ; 00444024
    MOV dword ptr [ESP + 0xf4],EAX      ; 00444027
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0044402e
    IMUL EAX,EDI                        ; 00444035
    ADD EAX,dword ptr [ESP + 0xf4]      ; 00444038
    ADD ESI,EAX                         ; 0044403f
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00444041
    IMUL EBP,EAX                        ; 00444048
    IMUL EAX,EDI                        ; 0044404b
    ADD EAX,EBP                         ; 0044404e
    XOR EDX,EDX                         ; 00444050
    ADD EBX,EAX                         ; 00444052
    MOV EAX,ECX                         ; 00444054
    MOV ECX,dword ptr [ESP + 0xc0]      ; 00444056
    DIV ECX                             ; 0044405d
    MOV ECX,EAX                         ; 0044405f
    XOR EDX,EDX                         ; 00444061
    MOV EAX,ESI                         ; 00444063
    DIV dword ptr [ESP + 0xc0]          ; 00444065
    MOV EDI,dword ptr [ESP + 0xc0]      ; 0044406c
    MOV ESI,EAX                         ; 00444073
    XOR EDX,EDX                         ; 00444075
    MOV EAX,EBX                         ; 00444077
    DIV EDI                             ; 00444079
    MOV EBX,EAX                         ; 0044407b
    CMP ECX,0xff                        ; 0044407d
    JBE 0x0044408a                      ; 00444083
        ;   XREF to: 0044408a (CONDITIONAL_JUMP)  ; LAB_0044408a
    MOV ECX,0xff                        ; 00444085
    CMP ESI,0xff                        ; 0044408a
        ;   Label: LAB_0044408a
    JBE 0x00444097                      ; 00444090
        ;   XREF to: 00444097 (CONDITIONAL_JUMP)  ; LAB_00444097
    MOV ESI,0xff                        ; 00444092
    CMP EBX,0xff                        ; 00444097
        ;   Label: LAB_00444097
    JBE 0x004440a4                      ; 0044409d
        ;   XREF to: 004440a4 (CONDITIONAL_JUMP)  ; LAB_004440a4
    MOV EBX,0xff                        ; 0044409f
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004440a4
        ;   Label: LAB_004440a4
    MOV EDX,dword ptr [ESP + 0x148]     ; 004440ab
    SHL ESI,0x8                         ; 004440b2
    SHL EBX,0x10                        ; 004440b5
    OR ECX,ESI                          ; 004440b8
    MOV ESI,dword ptr [ESP + 0xc4]      ; 004440ba
    OR ECX,EBX                          ; 004440c1
    MOV EBX,dword ptr [ESP + 0x118]     ; 004440c3
    INC ESI                             ; 004440ca
    MOV dword ptr [EAX],ECX             ; 004440cb
    LEA ECX,[EAX + 0x4]                 ; 004440cd
    ADD EBX,0x28000                     ; 004440d0
    MOV dword ptr [ESP + 0xc4],ESI      ; 004440d6
    MOV EDI,dword ptr [EDX + 0x13c]     ; 004440dd
    MOV dword ptr [ESP + 0xbc],ECX      ; 004440e3
    MOV dword ptr [ESP + 0x118],EBX     ; 004440ea
    CMP ESI,EDI                         ; 004440f1
    JL 0x00443cc8                       ; 004440f3
        ;   XREF to: 00443cc8 (CONDITIONAL_JUMP)  ; LAB_00443cc8
    MOV EBX,dword ptr [ESP + 0x11c]     ; 004440f9
        ;   Label: LAB_004440f9
    MOV ESI,dword ptr [ESP + 0xc8]      ; 00444100
    MOV EDX,dword ptr [ESP + 0x148]     ; 00444107
    ADD EBX,0x1e000                     ; 0044410e
    INC ESI                             ; 00444114
    MOV EDI,dword ptr [EDX + 0x140]     ; 00444115
    MOV dword ptr [ESP + 0x11c],EBX     ; 0044411b
    MOV dword ptr [ESP + 0xc8],ESI      ; 00444122
    CMP ESI,EDI                         ; 00444129
    JGE 0x00443870                      ; 0044412b
        ;   XREF to: 00443870 (CONDITIONAL_JUMP)  ; LAB_00443870
    JMP 0x00443c94                      ; 00444131
        ;   XREF to: 00443c94 (UNCONDITIONAL_JUMP)  ; LAB_00443c94

