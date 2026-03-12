; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_loadImage_FUN_0044f3e0(CDemonCamera *this_ptr,char *filename)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; char[80]         Stack[-0x144]:80  local_144
; char[80]         Stack[-0xf4]:80  local_f4
; int              Stack[-0xa4]:4  local_a4
; char[3]          Stack[-0xa0]:3  local_a0
; uint             Stack[-0x9c]:4  local_9c
; int              Stack[-0x98]:4  local_98
; int              Stack[-0x94]:4  local_94
; uint *           Stack[-0x90]:4  local_90
; int              Stack[-0x8c]:4  local_8c
; uint *           Stack[-0x88]:4  local_88
; uint             Stack[-0x84]:4  local_84
; int              Stack[-0x80]:4  local_80
; int              Stack[-0x7c]:4  local_7c
; uint             Stack[-0x78]:4  local_78
; uint             Stack[-0x74]:4  local_74
; uint             Stack[-0x70]:4  local_70
; uint             Stack[-0x6c]:4  local_6c
; uint             Stack[-0x68]:4  local_68
; int              Stack[-0x64]:4  local_64
; int              Stack[-0x60]:4  local_60
; int              Stack[-0x5c]:4  local_5c
; int              Stack[-0x58]:4  local_58
; int              Stack[-0x54]:4  local_54
; int              Stack[-0x50]:4  local_50
; int              Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  iStack_1c
; int              Stack[-0x18]:4  iStack_18
; _FILE *          Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b43b
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_0061a12a
;   undefined4 s_ore\\dcamera.cpp_0061a12e
;   TerminatedCString s_CDemonCamera_loadImage_n_0061a13e
;   TerminatedCString s_ACT_0061a165
;   undefined4 DAT_0061a166
;   undefined4 DAT_0061a167
;   undefined4 DAT_0061a168
;   TerminatedCString s_rb_0061a16a
;   string s_backdrop_0061a16d
;   TerminatedCString s_rb_0061a176
;   TerminatedCString s_art_0061a179
;   TerminatedCString s_core_dcamera_cpp_0061a17d
;   TerminatedCString s_core_dcamera_cpp_0061a191
;   TerminatedCString s_CDemonCamera_loadImage_n_0061a1a5
;   TerminatedCString s_fog_0061a1c6
;   ... and 76 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fseek_FUN_005ffacc
;   crt_string.c__strcmp_FUN_005fef20
;   crt_watcom.c__memset_FUN_004b19d0
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_getFileSize_FUN_00481880
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0048dc30
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0
;   support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044f3e0
        ;   Label: core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0
    PUSH ESI                            ; 0044f3e1
    PUSH EDI                            ; 0044f3e2
    PUSH EBP                            ; 0044f3e3
    SUB ESP,0x134                       ; 0044f3e4
    MOV ESI,dword ptr [ESP + 0x14c]     ; 0044f3ea
    MOV EDI,ESP                         ; 0044f3f1
    MOV DL,0x2e                         ; 0044f3f3
    PUSH EDI                            ; 0044f3f5
    MOV AL,byte ptr [ESI]               ; 0044f3f6
        ;   Label: LAB_0044f3f6
    MOV byte ptr [EDI],AL               ; 0044f3f8
    CMP AL,0x0                          ; 0044f3fa
    JZ 0x0044f40e                       ; 0044f3fc
        ;   XREF to: 0044f40e (CONDITIONAL_JUMP)  ; LAB_0044f40e
    MOV AL,byte ptr [ESI + 0x1]         ; 0044f3fe
    ADD ESI,0x2                         ; 0044f401
    MOV byte ptr [EDI + 0x1],AL         ; 0044f404
    ADD EDI,0x2                         ; 0044f407
    CMP AL,0x0                          ; 0044f40a
    JNZ 0x0044f3f6                      ; 0044f40c
        ;   XREF to: 0044f3f6 (CONDITIONAL_JUMP)  ; LAB_0044f3f6
    POP EDI                             ; 0044f40e
        ;   Label: LAB_0044f40e
    MOV ESI,ESP                         ; 0044f40f
    MOV AL,byte ptr [ESI]               ; 0044f411
        ;   Label: LAB_0044f411
    CMP AL,DL                           ; 0044f413
    JZ 0x0044f429                       ; 0044f415
        ;   XREF to: 0044f429 (CONDITIONAL_JUMP)  ; LAB_0044f429
    CMP AL,0x0                          ; 0044f417
    JZ 0x0044f427                       ; 0044f419
        ;   XREF to: 0044f427 (CONDITIONAL_JUMP)  ; LAB_0044f427
    INC ESI                             ; 0044f41b
    MOV AL,byte ptr [ESI]               ; 0044f41c
    CMP AL,DL                           ; 0044f41e
    JZ 0x0044f429                       ; 0044f420
        ;   XREF to: 0044f429 (CONDITIONAL_JUMP)  ; LAB_0044f429
    INC ESI                             ; 0044f422
    CMP AL,0x0                          ; 0044f423
    JNZ 0x0044f411                      ; 0044f425
        ;   XREF to: 0044f411 (CONDITIONAL_JUMP)  ; LAB_0044f411
    SUB ESI,ESI                         ; 0044f427
        ;   Label: LAB_0044f427
    MOV EDI,ESI                         ; 0044f429
        ;   Label: LAB_0044f429
    TEST ESI,ESI                        ; 0044f42b
    JNZ 0x0044f452                      ; 0044f42d
        ;   XREF to: 0044f452 (CONDITIONAL_JUMP)  ; LAB_0044f452
    MOV EDX,0x61a12a                    ; 0044f42f | = "..\\core\\dcamera.cpp"
    MOV ECX,0x98e                       ; 0044f434
    PUSH 0x61a13e                       ; 0044f439 | = "CDemonCamera::loadImage - no extention"
    MOV dword ptr [0x02f0ca48],EDX      ; 0044f43e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0044f444 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0044f44a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0044f44f
    MOV ESI,0x61a165                    ; 0044f452 | = ".ACT"
        ;   Label: LAB_0044f452
    PUSH EDI                            ; 0044f457
    MOV AL,byte ptr [ESI]               ; 0044f458 | = ".ACT" | DAT_0061a167
        ;   Label: LAB_0044f458
    MOV byte ptr [EDI],AL               ; 0044f45a
    CMP AL,0x0                          ; 0044f45c
    JZ 0x0044f470                       ; 0044f45e
        ;   XREF to: 0044f470 (CONDITIONAL_JUMP)  ; LAB_0044f470
    MOV AL,byte ptr [ESI + 0x1]         ; 0044f460 | DAT_0061a166 | DAT_0061a168
    ADD ESI,0x2                         ; 0044f463
    MOV byte ptr [EDI + 0x1],AL         ; 0044f466
    ADD EDI,0x2                         ; 0044f469
    CMP AL,0x0                          ; 0044f46c
    JNZ 0x0044f458                      ; 0044f46e
        ;   XREF to: 0044f458 (CONDITIONAL_JUMP)  ; LAB_0044f458
    POP EDI                             ; 0044f470
        ;   Label: LAB_0044f470
    PUSH 0x61a16a                       ; 0044f471 | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 0044f476
    PUSH EAX                            ; 0044f47a
    PUSH 0x61a16d                       ; 0044f47b | = "backdrop"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0044f480
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0044f485
    MOV EBX,EAX                         ; 0044f488
    TEST EAX,EAX                        ; 0044f48a
    JZ 0x0044fbcc                       ; 0044f48c
        ;   XREF to: 0044fbcc (CONDITIONAL_JUMP)  ; LAB_0044fbcc
    PUSH EBX                            ; 0044f492
        ;   Label: LAB_0044f492
    PUSH 0x3                            ; 0044f493
    PUSH 0x100                          ; 0044f495
    PUSH 0xc196f8                       ; 0044f49a | g_CameraImagePaletteData
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0044f49f
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0044f4a4
    PUSH 0x99b                          ; 0044f4a7
    PUSH 0x61a17d                       ; 0044f4ac | = "..\\core\\dcamera.cpp"
    PUSH EBX                            ; 0044f4b1
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0044f4b2
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0044f4b7
    LEA EDI,[ESP + 0x50]                ; 0044f4ba
    MOV ESI,dword ptr [ESP + 0x14c]     ; 0044f4be
    MOV DL,0x2e                         ; 0044f4c5 | s_ore\dcamera.cpp_0061a12e
    PUSH EDI                            ; 0044f4c7
    MOV AL,byte ptr [ESI]               ; 0044f4c8
        ;   Label: LAB_0044f4c8
    MOV byte ptr [EDI],AL               ; 0044f4ca
    CMP AL,0x0                          ; 0044f4cc
    JZ 0x0044f4e0                       ; 0044f4ce
        ;   XREF to: 0044f4e0 (CONDITIONAL_JUMP)  ; LAB_0044f4e0
    MOV AL,byte ptr [ESI + 0x1]         ; 0044f4d0
    ADD ESI,0x2                         ; 0044f4d3
    MOV byte ptr [EDI + 0x1],AL         ; 0044f4d6
    ADD EDI,0x2                         ; 0044f4d9
    CMP AL,0x0                          ; 0044f4dc
    JNZ 0x0044f4c8                      ; 0044f4de
        ;   XREF to: 0044f4c8 (CONDITIONAL_JUMP)  ; LAB_0044f4c8
    POP EDI                             ; 0044f4e0
        ;   Label: LAB_0044f4e0
    LEA ESI,[ESP + 0x50]                ; 0044f4e1
    MOV AL,byte ptr [ESI]               ; 0044f4e5
        ;   Label: LAB_0044f4e5
    CMP AL,DL                           ; 0044f4e7
    JZ 0x0044f4fd                       ; 0044f4e9
        ;   XREF to: 0044f4fd (CONDITIONAL_JUMP)  ; LAB_0044f4fd
    CMP AL,0x0                          ; 0044f4eb
    JZ 0x0044f4fb                       ; 0044f4ed
        ;   XREF to: 0044f4fb (CONDITIONAL_JUMP)  ; LAB_0044f4fb
    INC ESI                             ; 0044f4ef
    MOV AL,byte ptr [ESI]               ; 0044f4f0
    CMP AL,DL                           ; 0044f4f2
    JZ 0x0044f4fd                       ; 0044f4f4
        ;   XREF to: 0044f4fd (CONDITIONAL_JUMP)  ; LAB_0044f4fd
    INC ESI                             ; 0044f4f6
    CMP AL,0x0                          ; 0044f4f7
    JNZ 0x0044f4e5                      ; 0044f4f9
        ;   XREF to: 0044f4e5 (CONDITIONAL_JUMP)  ; LAB_0044f4e5
    SUB ESI,ESI                         ; 0044f4fb
        ;   Label: LAB_0044f4fb
    MOV EDI,ESI                         ; 0044f4fd
        ;   Label: LAB_0044f4fd
    TEST ESI,ESI                        ; 0044f4ff
    JNZ 0x0044f526                      ; 0044f501
        ;   XREF to: 0044f526 (CONDITIONAL_JUMP)  ; LAB_0044f526
    MOV EBX,0x61a191                    ; 0044f503 | = "..\\core\\dcamera.cpp"
    MOV ESI,0x9a1                       ; 0044f508
    PUSH 0x61a1a5                       ; 0044f50d | = "CDemonCamera::loadImage - no ext"
    MOV dword ptr [0x02f0ca48],EBX      ; 0044f512 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0044f518 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0044f51e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0044f523
    MOV ESI,0x61a1c6                    ; 0044f526 | = ".fog"
        ;   Label: LAB_0044f526
    PUSH EDI                            ; 0044f52b
    MOV AL,byte ptr [ESI]               ; 0044f52c | = ".fog" | DAT_0061a1c8
        ;   Label: LAB_0044f52c
    MOV byte ptr [EDI],AL               ; 0044f52e
    CMP AL,0x0                          ; 0044f530
    JZ 0x0044f544                       ; 0044f532
        ;   XREF to: 0044f544 (CONDITIONAL_JUMP)  ; LAB_0044f544
    MOV AL,byte ptr [ESI + 0x1]         ; 0044f534 | DAT_0061a1c7 | DAT_0061a1c9
    ADD ESI,0x2                         ; 0044f537
    MOV byte ptr [EDI + 0x1],AL         ; 0044f53a
    ADD EDI,0x2                         ; 0044f53d
    CMP AL,0x0                          ; 0044f540
    JNZ 0x0044f52c                      ; 0044f542
        ;   XREF to: 0044f52c (CONDITIONAL_JUMP)  ; LAB_0044f52c
    POP EDI                             ; 0044f544
        ;   Label: LAB_0044f544
    PUSH 0x61a1cb                       ; 0044f545 | = "rb"
    LEA EAX,[ESP + 0x54]                ; 0044f54a
    PUSH EAX                            ; 0044f54e
    PUSH 0x61a1ce                       ; 0044f54f | = "backdrop"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0044f554
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0044f559
    MOV dword ptr [ESP + 0x130],EAX     ; 0044f55c
    TEST EAX,EAX                        ; 0044f563
    JZ 0x0044f878                       ; 0044f565
        ;   XREF to: 0044f878 (CONDITIONAL_JUMP)  ; LAB_0044f878
    PUSH EAX                            ; 0044f56b
    PUSH 0x1                            ; 0044f56c
    PUSH 0x1000                         ; 0044f56e
    PUSH 0x1519384                      ; 0044f573 | g_CameraFogGrid
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0044f578
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    MOV EDI,dword ptr [0x0151a3a0]      ; 0044f57d | g_CameraFogGrid.density_multiplier
    ADD ESP,0x10                        ; 0044f583
    TEST EDI,EDI                        ; 0044f586
    JZ 0x0044fc63                       ; 0044f588
        ;   XREF to: 0044fc63 (CONDITIONAL_JUMP)  ; LAB_0044fc63
    MOV EBP,0x10                        ; 0044f58e
    MOV EAX,[0x0151a390]                ; 0044f593 | g_CameraFogGrid.scroll_vector.x
    MOV EDX,dword ptr [0x0151a394]      ; 0044f598 | g_CameraFogGrid.scroll_vector.y
    MOV ECX,dword ptr [0x0151a398]      ; 0044f59e | g_CameraFogGrid.scroll_vector.z
    OR EAX,EDX                          ; 0044f5a4
    MOV dword ptr [0x01519380],EBP      ; 0044f5a6 | g_ImageBytesPerPixel
    OR EAX,ECX                          ; 0044f5ac
    JNZ 0x0044f5ba                      ; 0044f5ae
        ;   XREF to: 0044f5ba (CONDITIONAL_JUMP)  ; LAB_0044f5ba
    MOV dword ptr [0x01519380],0x1      ; 0044f5b0 | g_ImageBytesPerPixel
    MOV ESI,dword ptr [ESP + 0x130]     ; 0044f5ba
        ;   Label: LAB_0044f5ba
    PUSH ESI                            ; 0044f5c1
    PUSH 0x1                            ; 0044f5c2
    PUSH 0x3                            ; 0044f5c4
    LEA EAX,[ESP + 0xb0]                ; 0044f5c6
    PUSH EAX                            ; 0044f5cd
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0044f5ce
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0044f5d3
    XOR AH,AH                           ; 0044f5d6
    PUSH 0x61a1d7                       ; 0044f5d8 | = "LZW"
    MOV byte ptr [ESP + 0xab],AH        ; 0044f5dd
    LEA EAX,[ESP + 0xa8]                ; 0044f5e4
    PUSH EAX                            ; 0044f5eb
    CALL crt_string.c__strcmp_FUN_005fef20 ; 0044f5ec
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0044f5f1
    TEST EAX,EAX                        ; 0044f5f4
    JNZ 0x0044fbee                      ; 0044f5f6
        ;   XREF to: 0044fbee (CONDITIONAL_JUMP)  ; LAB_0044fbee
    LEA EAX,[ESP + 0x50]                ; 0044f5fc
        ;   Label: LAB_0044f5fc
    PUSH EAX                            ; 0044f600
    PUSH 0x61a1df                       ; 0044f601 | = "backdrop"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 0044f606
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 0044f60b
    SUB EAX,0x1003                      ; 0044f60e
    MOV dword ptr [ESP + 0xa8],EAX      ; 0044f613
    CMP EAX,0x1                         ; 0044f61a
    JGE 0x0044f647                      ; 0044f61d
        ;   XREF to: 0044f647 (CONDITIONAL_JUMP)  ; LAB_0044f647
    LEA EAX,[ESP + 0x50]                ; 0044f61f
    PUSH EAX                            ; 0044f623
    MOV ECX,0x61a1e8                    ; 0044f624 | = "..\\core\\dcamera.cpp"
    MOV EBX,0x9c1                       ; 0044f629
    PUSH 0x61a1fc                       ; 0044f62e | = "Hell froze loading %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 0044f633 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0044f639 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0044f63f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0044f644
    CMP dword ptr [ESP + 0xa8],0x7a120  ; 0044f647
        ;   Label: LAB_0044f647
    JBE 0x0044f67c                      ; 0044f652
        ;   XREF to: 0044f67c (CONDITIONAL_JUMP)  ; LAB_0044f67c
    LEA EAX,[ESP + 0x50]                ; 0044f654
    PUSH EAX                            ; 0044f658
    MOV EDI,0x61a212                    ; 0044f659 | = "..\\core\\dcamera.cpp"
    MOV EBP,0x9c7                       ; 0044f65e
    PUSH 0x61a226                       ; 0044f663 | = "%s too big to fit in decompress buffer"
    MOV dword ptr [0x02f0ca48],EDI      ; 0044f668 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0044f66e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0044f674
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0044f679
    MOV EAX,dword ptr [ESP + 0x130]     ; 0044f67c
        ;   Label: LAB_0044f67c
    PUSH EAX                            ; 0044f683
    PUSH 0x1                            ; 0044f684
    MOV EDX,dword ptr [ESP + 0xb0]      ; 0044f686
    PUSH EDX                            ; 0044f68d
    PUSH 0x888e50                       ; 0044f68e | g_CameraLoadImageReadBuffer
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0044f693
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0044f698
    PUSH 0x13d9728                      ; 0044f69b | g_CLZWDecompressInstance
    CALL support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0 ; 0044f6a0
        ;   XREF to: 0043f4d0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0(CLZWDecompress * this_ptr)
    MOV EDX,dword ptr [0x01519380]      ; 0044f6a5 | g_ImageBytesPerPixel
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044f6ab
    ADD EAX,EDX                         ; 0044f6b2
    SHL EAX,0xa                         ; 0044f6b4
    MOV EDX,EAX                         ; 0044f6b7
    SHL EAX,0x4                         ; 0044f6b9
    ADD ESP,0x4                         ; 0044f6bc
    SUB EAX,EDX                         ; 0044f6bf
    PUSH 0x1                            ; 0044f6c1
    MOV dword ptr [ESP + 0xb0],EAX      ; 0044f6c3
    LEA EAX,[ESP + 0xb0]                ; 0044f6ca
    PUSH EAX                            ; 0044f6d1
    PUSH 0x13ed378                      ; 0044f6d2 | g_CameraImageDecompressBuffer
    LEA EAX,[ESP + 0xb4]                ; 0044f6d7
    PUSH EAX                            ; 0044f6de
    PUSH 0x888e50                       ; 0044f6df | g_CameraLoadImageReadBuffer
    PUSH 0x13d9728                      ; 0044f6e4 | g_CLZWDecompressInstance
    CALL support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0 ; 0044f6e9
        ;   XREF to: 0043f5d0 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0(CLZWDecompress * this_ptr, char * input, int * input_length, char * output, ...)
    ADD ESP,0x18                        ; 0044f6ee
    TEST EAX,EAX                        ; 0044f6f1
    JZ 0x0044fc36                       ; 0044f6f3
        ;   XREF to: 0044fc36 (CONDITIONAL_JUMP)  ; LAB_0044fc36
    XOR ESI,ESI                         ; 0044f6f9
        ;   Label: LAB_0044f6f9
    MOV EDI,dword ptr [0x01519380]      ; 0044f6fb | g_ImageBytesPerPixel
    MOV dword ptr [ESP + 0xa0],ESI      ; 0044f701
    TEST EDI,EDI                        ; 0044f708
    JLE 0x0044f85e                      ; 0044f70a
        ;   XREF to: 0044f85e (CONDITIONAL_JUMP)  ; LAB_0044f85e
    MOV EBP,0xfffed400                  ; 0044f710
    XOR EDI,EDI                         ; 0044f715
    MOV ESI,0x12c00                     ; 0044f717
    MOV dword ptr [ESP + 0x110],EDI     ; 0044f71c
    MOV dword ptr [ESP + 0x114],EBP     ; 0044f723
    MOV dword ptr [ESP + 0x10c],ESI     ; 0044f72a
    MOV EAX,dword ptr [ESP + 0x110]     ; 0044f731
        ;   Label: LAB_0044f731
    MOV dword ptr [ESP + 0xfc],EAX      ; 0044f738
    MOV EAX,dword ptr [ESP + 0x114]     ; 0044f73f
    MOV dword ptr [ESP + 0x100],EAX     ; 0044f746
    MOV EAX,dword ptr [ESP + 0x110]     ; 0044f74d
    MOV dword ptr [ESP + 0x104],EAX     ; 0044f754
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0044f75b
    MOV dword ptr [ESP + 0x108],EAX     ; 0044f762
    MOV ECX,dword ptr [ESP + 0x104]     ; 0044f769
        ;   Label: LAB_0044f769
    MOV EDI,dword ptr [ESP + 0x100]     ; 0044f770
    MOV EBP,dword ptr [ESP + 0xfc]      ; 0044f777
    XOR EDX,EDX                         ; 0044f77e
    XOR EBX,EBX                         ; 0044f780
    LEA EAX,[EDX + EBP*0x1]             ; 0044f782
        ;   Label: LAB_0044f782
    MOV EAX,dword ptr [EAX + 0x13ed375] ; 0044f785 | DAT_013ed375 | DAT_013ed376
    SAR EAX,0x18                        ; 0044f78b
    ADD EAX,EBX                         ; 0044f78e
    MOV ESI,dword ptr [ESP + 0xa0]      ; 0044f790
    MOV EBX,EAX                         ; 0044f797
    SHL EAX,0x2                         ; 0044f799
    TEST ESI,ESI                        ; 0044f79c
    JLE 0x0044f7ac                      ; 0044f79e
        ;   XREF to: 0044f7ac (CONDITIONAL_JUMP)  ; LAB_0044f7ac
    LEA ESI,[EDI + EDX*0x1]             ; 0044f7a0
    MOVZX ESI,byte ptr [ESI + 0x13ed378] ; 0044f7a3 | g_CameraPlaneWorkBuffer | DAT_013da779 | DAT_013da8b8
    ADD EAX,ESI                         ; 0044f7aa
    INC ECX                             ; 0044f7ac
        ;   Label: LAB_0044f7ac
    INC EDX                             ; 0044f7ad
    MOV byte ptr [ECX + 0x13ed377],AL   ; 0044f7ae | DAT_013ed377 | g_CameraImageDecompressBuffer | DAT_013ed379
    CMP EDX,0x140                       ; 0044f7b4
    JL 0x0044f782                       ; 0044f7ba
        ;   XREF to: 0044f782 (CONDITIONAL_JUMP)  ; LAB_0044f782
    MOV EBP,dword ptr [ESP + 0x100]     ; 0044f7bc
    MOV EAX,dword ptr [ESP + 0x104]     ; 0044f7c3
    MOV EDI,dword ptr [ESP + 0xfc]      ; 0044f7ca
    MOV EDX,dword ptr [ESP + 0x108]     ; 0044f7d1
    ADD EBP,0x140                       ; 0044f7d8
    ADD EAX,0x140                       ; 0044f7de
    ADD EDI,0x140                       ; 0044f7e3
    MOV dword ptr [ESP + 0x100],EBP     ; 0044f7e9
    MOV dword ptr [ESP + 0x104],EAX     ; 0044f7f0
    MOV dword ptr [ESP + 0xfc],EDI      ; 0044f7f7
    CMP EAX,EDX                         ; 0044f7fe
    JNZ 0x0044f769                      ; 0044f800
        ;   XREF to: 0044f769 (CONDITIONAL_JUMP)  ; LAB_0044f769
    MOV EBP,dword ptr [ESP + 0x10c]     ; 0044f806
    MOV EAX,dword ptr [ESP + 0x110]     ; 0044f80d
    MOV EDX,dword ptr [ESP + 0x114]     ; 0044f814
    MOV ECX,dword ptr [ESP + 0xa0]      ; 0044f81b
    MOV EBX,dword ptr [0x01519380]      ; 0044f822 | g_ImageBytesPerPixel
    ADD EBP,0x12c00                     ; 0044f828
    ADD EAX,0x12c00                     ; 0044f82e
    ADD EDX,0x12c00                     ; 0044f833
    INC ECX                             ; 0044f839
    MOV dword ptr [ESP + 0x10c],EBP     ; 0044f83a
    MOV dword ptr [ESP + 0x110],EAX     ; 0044f841
    MOV dword ptr [ESP + 0x114],EDX     ; 0044f848
    MOV dword ptr [ESP + 0xa0],ECX      ; 0044f84f
    CMP ECX,EBX                         ; 0044f856
    JL 0x0044f731                       ; 0044f858
        ;   XREF to: 0044f731 (CONDITIONAL_JUMP)  ; LAB_0044f731
    PUSH 0xa09                          ; 0044f85e
        ;   Label: LAB_0044f85e
    PUSH 0x61a278                       ; 0044f863 | = "..\\core\\dcamera.cpp"
    MOV ECX,dword ptr [ESP + 0x138]     ; 0044f868
    PUSH ECX                            ; 0044f86f
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0044f870
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0044f875
    PUSH 0x61a28c                       ; 0044f878 | = "rb"
        ;   Label: LAB_0044f878
    MOV EBX,dword ptr [ESP + 0x150]     ; 0044f87d
    PUSH EBX                            ; 0044f884
    PUSH 0x61a28f                       ; 0044f885 | = "backdrop"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0044f88a
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0044f88f
    MOV EBP,EAX                         ; 0044f892
    TEST EAX,EAX                        ; 0044f894
    JZ 0x0044fc7b                       ; 0044f896
        ;   XREF to: 0044fc7b (CONDITIONAL_JUMP)  ; LAB_0044fc7b
    XOR EDX,EDX                         ; 0044f89c
        ;   Label: LAB_0044f89c
    XOR EAX,EAX                         ; 0044f89e
    MOV ECX,dword ptr [0x0067939c]      ; 0044f8a0 | g_BitsPerPixel
        ;   Label: LAB_0044f8a0
    MOVZX ESI,byte ptr [EAX + 0xc196fa] ; 0044f8a6 | DAT_00c196fa | DAT_00c196fd
    XOR EBX,EBX                         ; 0044f8ad
    MOVZX EDI,byte ptr [EAX + 0xc196f8] ; 0044f8af | g_CameraImagePaletteData | DAT_00c196fb
    MOV BL,byte ptr [EAX + 0xc196f9]    ; 0044f8b6 | DAT_00c196f9 | DAT_00c196fc
    CMP ECX,0x20                        ; 0044f8bc
    JNZ 0x0044fc9d                      ; 0044f8bf
        ;   XREF to: 0044fc9d (CONDITIONAL_JUMP)  ; LAB_0044fc9d
    MOV CL,byte ptr [0x02d01f24]        ; 0044f8c5 | g_RedBitPosition
    SHL EDI,CL                          ; 0044f8cb
    MOV CL,byte ptr [0x02d01f30]        ; 0044f8cd | g_GreenBitPosition
    SHL EBX,CL                          ; 0044f8d3
    MOV CL,byte ptr [0x02d01f3c]        ; 0044f8d5 | g_BlueBitPosition
    SHL ESI,CL                          ; 0044f8db
    OR EBX,EDI                          ; 0044f8dd
    MOV ECX,ESI                         ; 0044f8df
    OR ECX,EBX                          ; 0044f8e1
    ADD EDX,0x4                         ; 0044f8e3
        ;   Label: LAB_0044f8e3
    ADD EAX,0x3                         ; 0044f8e6
    MOV dword ptr [EDX + 0xc199f8],ECX  ; 0044f8e9 | g_CameraConvertedPalette | DAT_00c19a00
    CMP EDX,0x400                       ; 0044f8ef
    JNZ 0x0044f8a0                      ; 0044f8f5
        ;   XREF to: 0044f8a0 (CONDITIONAL_JUMP)  ; LAB_0044f8a0
    PUSH EBP                            ; 0044f8f7
    PUSH 0x1e0                          ; 0044f8f8
    PUSH 0x280                          ; 0044f8fd
    PUSH 0x151bfa8                      ; 0044f902 | g_CameraIndexedImageData
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0044f907
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0044f90c
    PUSH 0xa20                          ; 0044f90f
    PUSH 0x61a29f                       ; 0044f914 | = "..\\core\\dcamera.cpp"
    PUSH EBP                            ; 0044f919
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0044f91a
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0044f91f
    MOV EAX,dword ptr [ESP + 0x148]     ; 0044f922
    MOV EBX,dword ptr [EAX + 0x148]     ; 0044f929
    CMP EBX,0xf0                        ; 0044f92f
    JNZ 0x0044fcae                      ; 0044f935
        ;   XREF to: 0044fcae (CONDITIONAL_JUMP)  ; LAB_0044fcae
    XOR ECX,ECX                         ; 0044f93b
    MOV dword ptr [ESP + 0x124],ECX     ; 0044f93d
    MOV EBP,0x151bfa8                   ; 0044f944 | g_CameraIndexedImageData
    MOV EDI,dword ptr [ESP + 0x148]     ; 0044f949
        ;   Label: LAB_0044f949
    MOV EAX,dword ptr [ESP + 0x124]     ; 0044f950
    XOR EBX,EBX                         ; 0044f957
    MOV ECX,dword ptr [ESP + 0x124]     ; 0044f959
    MOV dword ptr [ESP + 0xb0],EBX      ; 0044f960
    MOV EDI,dword ptr [EDI + 0x158]     ; 0044f967
    ADD EAX,EBP                         ; 0044f96d
    ADD EDI,ECX                         ; 0044f96f
    ADD EDI,0x4                         ; 0044f971
        ;   Label: LAB_0044f971
    MOVZX ESI,byte ptr [EAX + 0x1]      ; 0044f974 | DAT_0151bfa9 | DAT_0151bfab | DAT_0151c4a9
    ADD EAX,0x2                         ; 0044f978
    XOR EDX,EDX                         ; 0044f97b
    XOR EBX,EBX                         ; 0044f97d
    XOR ECX,ECX                         ; 0044f97f
    MOV ESI,dword ptr [ESI*0x4 + 0xc199fc] ; 0044f981 | g_CameraConvertedPalette
    MOV DL,byte ptr [EAX + -0x2]        ; 0044f988 | g_CameraIndexedImageData | DAT_0151bfaa | DAT_0151c4a8
    MOV BL,byte ptr [EAX + 0x27e]       ; 0044f98b | DAT_0151c228 | DAT_0151c22a | DAT_0151c728
    MOV CL,byte ptr [EAX + 0x27f]       ; 0044f991 | DAT_0151c229 | DAT_0151c22b
    AND ESI,0xfcfcfc                    ; 0044f997 | DAT_00fcfcfc
    MOV EDX,dword ptr [EDX*0x4 + 0xc199fc] ; 0044f99d | g_CameraConvertedPalette
    MOV EBX,dword ptr [EBX*0x4 + 0xc199fc] ; 0044f9a4 | g_CameraConvertedPalette
    MOV ECX,dword ptr [ECX*0x4 + 0xc199fc] ; 0044f9ab | g_CameraConvertedPalette
    AND EDX,0xfcfcfc                    ; 0044f9b2 | DAT_00fcfcfc
    SHR ESI,0x2                         ; 0044f9b8
    AND EBX,0xfcfcfc                    ; 0044f9bb | DAT_00fcfcfc
    AND ECX,0xfcfcfc                    ; 0044f9c1 | DAT_00fcfcfc
    SHR EDX,0x2                         ; 0044f9c7
    SHR EBX,0x2                         ; 0044f9ca
    SHR ECX,0x2                         ; 0044f9cd
    ADD EDX,ESI                         ; 0044f9d0
    MOV ESI,dword ptr [ESP + 0xb0]      ; 0044f9d2
    ADD EDX,EBX                         ; 0044f9d9
    INC ESI                             ; 0044f9db
    ADD EDX,ECX                         ; 0044f9dc
    MOV dword ptr [ESP + 0xb0],ESI      ; 0044f9de
    MOV dword ptr [EDI + -0x4],EDX      ; 0044f9e5
    CMP ESI,0x140                       ; 0044f9e8
    JL 0x0044f971                       ; 0044f9ee
        ;   XREF to: 0044f971 (CONDITIONAL_JUMP)  ; LAB_0044f971
    MOV ECX,dword ptr [ESP + 0x124]     ; 0044f9f0
    ADD ECX,0x500                       ; 0044f9f7
    MOV dword ptr [ESP + 0x124],ECX     ; 0044f9fd
    CMP ECX,0x4b000                     ; 0044fa04
    JNZ 0x0044f949                      ; 0044fa0a
        ;   XREF to: 0044f949 (CONDITIONAL_JUMP)  ; LAB_0044f949
    XOR EDI,EDI                         ; 0044fa10
        ;   Label: LAB_0044fa10
    XOR EBP,EBP                         ; 0044fa12
    MOV EDX,EDI                         ; 0044fa14
        ;   Label: LAB_0044fa14
    MOV EAX,EDI                         ; 0044fa16
    SAR EDX,0x1f                        ; 0044fa18
    SHL EDX,0x8                         ; 0044fa1b
    SBB EAX,EDX                         ; 0044fa1e
    SAR EAX,0x8                         ; 0044fa20
    MOV EBX,EBP                         ; 0044fa23
    XOR ECX,ECX                         ; 0044fa25
    IMUL ESI,EAX,0x280                  ; 0044fa27
    MOV EDX,ECX                         ; 0044fa2d
        ;   Label: LAB_0044fa2d
    MOV EAX,ECX                         ; 0044fa2f
    SAR EDX,0x1f                        ; 0044fa31
    SHL EDX,0x8                         ; 0044fa34
    SBB EAX,EDX                         ; 0044fa37
    SAR EAX,0x8                         ; 0044fa39
    INC EBX                             ; 0044fa3c
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x151bfa8] ; 0044fa3d | g_CameraIndexedImageData
    ADD ECX,0x280                       ; 0044fa44
    MOV byte ptr [EBX + 0x1566fa7],AL   ; 0044fa4a | g_CameraTextureWorkBuffer | DAT_01566fa8+1
    CMP ECX,0x28000                     ; 0044fa50
    JNZ 0x0044fa2d                      ; 0044fa56
        ;   XREF to: 0044fa2d (CONDITIONAL_JUMP)  ; LAB_0044fa2d
    ADD EBP,0x100                       ; 0044fa58
    ADD EDI,0x1e0                       ; 0044fa5e
    CMP EBP,0x10000                     ; 0044fa64
    JNZ 0x0044fa14                      ; 0044fa6a
        ;   XREF to: 0044fa14 (CONDITIONAL_JUMP)  ; LAB_0044fa14
    PUSH 0x66ed50                       ; 0044fa6c | g_CameraBackdropTexture
    MOV ESI,dword ptr [0x006703ec]      ; 0044fa71 | g_CDemonRendererPtr2
    PUSH ESI                            ; 0044fa77 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0044fa78
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV ESI,0x1566fa8                   ; 0044fa7d | g_CameraTextureWorkBuffer
    ADD ESP,0x8                         ; 0044fa82
    MOV EDI,dword ptr [0x02d03e80]      ; 0044fa85 | g_CurrentTextureData
    MOV ECX,EBP                         ; 0044fa8b
    PUSH EDI                            ; 0044fa8d
    MOV EAX,ECX                         ; 0044fa8e
    SHR ECX,0x2                         ; 0044fa90
    MOVSD.REP ES:EDI,ESI                ; 0044fa93 | g_CameraTextureWorkBuffer | DAT_01566fac
    MOV CL,AL                           ; 0044fa95
    AND CL,0x3                          ; 0044fa97
    MOVSB.REP ES:EDI,ESI                ; 0044fa9a | g_CameraTextureWorkBuffer | DAT_01566fac | DAT_01566fad
    POP EDI                             ; 0044fa9c
    MOV ECX,0x300                       ; 0044fa9d
    MOV ESI,0xc196f8                    ; 0044faa2 | g_CameraImagePaletteData
    MOV EDI,dword ptr [0x02d01920]      ; 0044faa7 | g_CurrentPalette
    PUSH EDI                            ; 0044faad
    MOV EAX,ECX                         ; 0044faae
    SHR ECX,0x2                         ; 0044fab0
    MOVSD.REP ES:EDI,ESI                ; 0044fab3 | g_CameraImagePaletteData | DAT_00c196fc
    MOV CL,AL                           ; 0044fab5
    AND CL,0x3                          ; 0044fab7
    MOVSB.REP ES:EDI,ESI                ; 0044faba | g_CameraImagePaletteData | DAT_00c196fc | DAT_00c196fd
    POP EDI                             ; 0044fabc
    PUSH 0xc196f8                       ; 0044fabd | g_CameraImagePaletteData
    PUSH 0x66ed50                       ; 0044fac2 | g_CameraBackdropTexture
    MOV EDI,dword ptr [0x006703ec]      ; 0044fac7 | g_CDemonRendererPtr2
    PUSH EDI                            ; 0044facd | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0048dc30 ; 0044face
        ;   XREF to: 0048dc30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0048dc30(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture, SRGBColorPalette * palette)
    ADD ESP,0xc                         ; 0044fad3
    PUSH 0x12d40                        ; 0044fad6
    MOV ECX,0xbbb9b8                    ; 0044fadb | g_CoronaBlurWorkBuffer
    XOR EDX,EDX                         ; 0044fae0
    CALL crt_watcom.c__memset_FUN_004b19d0 ; 0044fae2
        ;   XREF to: 004b19d0 (UNCONDITIONAL_CALL)  ; void crt_watcom.c__memset_FUN_004b19d0(void * dest, int fill_byte, uint size)
    CMP dword ptr [0x00679398],0x180    ; 0044fae7 | g_WindowHeight
    JNZ 0x0044fbc1                      ; 0044faf1
        ;   XREF to: 0044fbc1 (CONDITIONAL_JUMP)  ; LAB_0044fbc1
    XOR EAX,EAX                         ; 0044faf7
    MOV dword ptr [ESP + 0x12c],EAX     ; 0044faf9
    MOV dword ptr [ESP + 0x128],EAX     ; 0044fb00
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0044fb07
        ;   Label: LAB_0044fb07
    MOV EDX,EAX                         ; 0044fb0e
    MOV ECX,0xc0                        ; 0044fb10
    SAR EDX,0x1f                        ; 0044fb15
    IDIV ECX                            ; 0044fb18
    IMUL EBP,EAX,0x140                  ; 0044fb1a
    XOR EDI,EDI                         ; 0044fb20
    MOV EAX,dword ptr [ESP + 0x128]     ; 0044fb22
    XOR ESI,ESI                         ; 0044fb29
    MOV dword ptr [ESP + 0xf8],EAX      ; 0044fb2b
    MOV EDX,ESI                         ; 0044fb32
        ;   Label: LAB_0044fb32
    MOV EAX,ESI                         ; 0044fb34
    SAR EDX,0x1f                        ; 0044fb36
    SHL EDX,0x8                         ; 0044fb39
    SBB EAX,EDX                         ; 0044fb3c
    SAR EAX,0x8                         ; 0044fb3e
    MOV ECX,dword ptr [0x01519380]      ; 0044fb41 | g_ImageBytesPerPixel
    MOV EBX,EAX                         ; 0044fb47
    XOR EAX,EAX                         ; 0044fb49
    TEST ECX,ECX                        ; 0044fb4b
    JLE 0x0044fb7e                      ; 0044fb4d
        ;   XREF to: 0044fb7e (CONDITIONAL_JUMP)  ; LAB_0044fb7e
    MOV EDX,dword ptr [ESP + 0xf8]      ; 0044fb4f
    LEA ECX,[EBX + EBP*0x1]             ; 0044fb56
    ADD EDX,EDI                         ; 0044fb59
    ADD EDX,0x12c00                     ; 0044fb5b
        ;   Label: LAB_0044fb5b
    MOV BL,byte ptr [ECX + 0x13ed378]   ; 0044fb61 | g_CameraImageDecompressBuffer | DAT_013fff78
    INC EAX                             ; 0044fb67
    MOV byte ptr [EDX + 0x13da778],BL   ; 0044fb68 | g_CameraPlaneWorkBuffer | g_CameraImageDecompressBuffer | DAT_013fff78
    MOV EBX,dword ptr [0x01519380]      ; 0044fb6e | g_ImageBytesPerPixel
    ADD ECX,0x12c00                     ; 0044fb74
    CMP EAX,EBX                         ; 0044fb7a
    JL 0x0044fb5b                       ; 0044fb7c
        ;   XREF to: 0044fb5b (CONDITIONAL_JUMP)  ; LAB_0044fb5b
    INC EDI                             ; 0044fb7e
        ;   Label: LAB_0044fb7e
    ADD ESI,0x140                       ; 0044fb7f
    CMP EDI,0x100                       ; 0044fb85
    JL 0x0044fb32                       ; 0044fb8b
        ;   XREF to: 0044fb32 (CONDITIONAL_JUMP)  ; LAB_0044fb32
    MOV EDI,dword ptr [ESP + 0x12c]     ; 0044fb8d
    MOV ESI,dword ptr [ESP + 0x128]     ; 0044fb94
    ADD EDI,0xf0                        ; 0044fb9b
    ADD ESI,0x140                       ; 0044fba1
    MOV dword ptr [ESP + 0x12c],EDI     ; 0044fba7
    MOV dword ptr [ESP + 0x128],ESI     ; 0044fbae
    CMP EDI,0xb400                      ; 0044fbb5
    JNZ 0x0044fb07                      ; 0044fbbb
        ;   XREF to: 0044fb07 (CONDITIONAL_JUMP)  ; LAB_0044fb07
    ADD ESP,0x134                       ; 0044fbc1
        ;   Label: LAB_0044fbc1
    POP EBP                             ; 0044fbc7
    POP EDI                             ; 0044fbc8
    POP ESI                             ; 0044fbc9
    POP EBX                             ; 0044fbca
    RET                                 ; 0044fbcb
    PUSH 0x61a176                       ; 0044fbcc | = "rb"
        ;   Label: LAB_0044fbcc
    LEA EAX,[ESP + 0x4]                 ; 0044fbd1
    PUSH EAX                            ; 0044fbd5
    PUSH 0x61a179                       ; 0044fbd6 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0044fbdb
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0044fbe0
    MOV EBX,EAX                         ; 0044fbe3
    TEST EAX,EAX                        ; 0044fbe5
    JZ 0x0044fbc1                       ; 0044fbe7
        ;   XREF to: 0044fbc1 (CONDITIONAL_JUMP)  ; LAB_0044fbc1
    JMP 0x0044f492                      ; 0044fbe9
        ;   XREF to: 0044f492 (UNCONDITIONAL_JUMP)  ; LAB_0044f492
    PUSH 0x61a1db                       ; 0044fbee | = "EFD"
        ;   Label: LAB_0044fbee
    LEA EAX,[ESP + 0xa8]                ; 0044fbf3
    PUSH EAX                            ; 0044fbfa
    CALL crt_string.c__strcmp_FUN_005fef20 ; 0044fbfb
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0044fc00
    TEST EAX,EAX                        ; 0044fc03
    JZ 0x0044f5fc                       ; 0044fc05
        ;   XREF to: 0044f5fc (CONDITIONAL_JUMP)  ; LAB_0044f5fc
    PUSH 0x1                            ; 0044fc0b
    PUSH -0x3                           ; 0044fc0d
    PUSH ESI                            ; 0044fc0f
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 0044fc10
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0044fc15
    PUSH ESI                            ; 0044fc18
    MOV EAX,[0x01519380]                ; 0044fc19 | g_ImageBytesPerPixel
    PUSH EAX                            ; 0044fc1e
    PUSH 0x12c00                        ; 0044fc1f
    PUSH 0x13ed378                      ; 0044fc24 | g_CameraImageDecompressBuffer
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0044fc29
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0044fc2e
    JMP 0x0044f85e                      ; 0044fc31
        ;   XREF to: 0044f85e (UNCONDITIONAL_JUMP)  ; LAB_0044f85e
    LEA EAX,[ESP + 0x50]                ; 0044fc36
        ;   Label: LAB_0044fc36
    PUSH EAX                            ; 0044fc3a
    MOV ECX,0x61a24d                    ; 0044fc3b | = "..\\core\\dcamera.cpp"
    MOV EBX,0x9d0                       ; 0044fc40
    PUSH 0x61a261                       ; 0044fc45 | = "Error decompressing %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 0044fc4a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0044fc50 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0044fc56
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0044fc5b
    JMP 0x0044f6f9                      ; 0044fc5e
        ;   XREF to: 0044f6f9 (UNCONDITIONAL_JUMP)  ; LAB_0044f6f9
    PUSH 0x12c000                       ; 0044fc63
        ;   Label: LAB_0044fc63
    PUSH EDI                            ; 0044fc68
    PUSH 0x13ed378                      ; 0044fc69 | g_CameraImageDecompressBuffer
    CALL crt_memory.c_memset_FUN_005fde40 ; 0044fc6e
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0044fc73
    JMP 0x0044f85e                      ; 0044fc76
        ;   XREF to: 0044f85e (UNCONDITIONAL_JUMP)  ; LAB_0044f85e
    PUSH 0x61a298                       ; 0044fc7b | = "rb"
        ;   Label: LAB_0044fc7b
    PUSH EBX                            ; 0044fc80
    PUSH 0x61a29b                       ; 0044fc81 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0044fc86
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0044fc8b
    MOV EBP,EAX                         ; 0044fc8e
    TEST EAX,EAX                        ; 0044fc90
    JZ 0x0044fbc1                       ; 0044fc92
        ;   XREF to: 0044fbc1 (CONDITIONAL_JUMP)  ; LAB_0044fbc1
    JMP 0x0044f89c                      ; 0044fc98
        ;   XREF to: 0044f89c (UNCONDITIONAL_JUMP)  ; LAB_0044f89c
    MOV ECX,EBX                         ; 0044fc9d
        ;   Label: LAB_0044fc9d
    SHL EDI,0x10                        ; 0044fc9f
    SHL ECX,0x8                         ; 0044fca2
    OR ECX,EDI                          ; 0044fca5
    OR ECX,ESI                          ; 0044fca7
    JMP 0x0044f8e3                      ; 0044fca9
        ;   XREF to: 0044f8e3 (UNCONDITIONAL_JUMP)  ; LAB_0044f8e3
    CMP EBX,0x1e0                       ; 0044fcae
        ;   Label: LAB_0044fcae
    JNZ 0x0044fcea                      ; 0044fcb4
        ;   XREF to: 0044fcea (CONDITIONAL_JUMP)  ; LAB_0044fcea
    MOV ECX,dword ptr [ESP + 0x148]     ; 0044fcb6
    MOV EAX,0x151bfa8                   ; 0044fcbd | g_CameraIndexedImageData
    XOR EDX,EDX                         ; 0044fcc2
    MOV ECX,dword ptr [ECX + 0x158]     ; 0044fcc4
    XOR EBX,EBX                         ; 0044fcca
        ;   Label: LAB_0044fcca
    MOV BL,byte ptr [EAX]               ; 0044fccc | g_CameraIndexedImageData | DAT_0151bfa9
    INC EAX                             ; 0044fcce
    ADD ECX,0x4                         ; 0044fccf
    MOV EBX,dword ptr [EBX*0x4 + 0xc199fc] ; 0044fcd2 | g_CameraConvertedPalette
    INC EDX                             ; 0044fcd9
    MOV dword ptr [ECX + -0x4],EBX      ; 0044fcda
    CMP EDX,0x4b000                     ; 0044fcdd
    JL 0x0044fcca                       ; 0044fce3
        ;   XREF to: 0044fcca (CONDITIONAL_JUMP)  ; LAB_0044fcca
    JMP 0x0044fa10                      ; 0044fce5
        ;   XREF to: 0044fa10 (UNCONDITIONAL_JUMP)  ; LAB_0044fa10
    JLE 0x0044fde2                      ; 0044fcea
        ;   XREF to: 0044fde2 (CONDITIONAL_JUMP)  ; LAB_0044fde2
        ;   Label: LAB_0044fcea
    MOV EAX,dword ptr [EAX + 0x158]     ; 0044fcf0
    MOV dword ptr [ESP + 0xb4],EAX      ; 0044fcf6
    MOV EAX,dword ptr [ESP + 0x148]     ; 0044fcfd
    XOR EBP,EBP                         ; 0044fd04
    MOV EDX,dword ptr [EAX + 0x148]     ; 0044fd06
    MOV dword ptr [ESP + 0xb8],EBP      ; 0044fd0c
    TEST EDX,EDX                        ; 0044fd13
    JLE 0x0044fa10                      ; 0044fd15
        ;   XREF to: 0044fa10 (CONDITIONAL_JUMP)  ; LAB_0044fa10
    MOV dword ptr [ESP + 0x120],EBP     ; 0044fd1b
    MOV EAX,dword ptr [ESP + 0x148]     ; 0044fd22
        ;   Label: LAB_0044fd22
    MOV EDI,dword ptr [EAX + 0x144]     ; 0044fd29
    XOR ESI,ESI                         ; 0044fd2f
    TEST EDI,EDI                        ; 0044fd31
    JLE 0x0044fda5                      ; 0044fd33
        ;   XREF to: 0044fda5 (CONDITIONAL_JUMP)  ; LAB_0044fda5
    MOV EBX,dword ptr [ESP + 0x120]     ; 0044fd35
    XOR ECX,ECX                         ; 0044fd3c
    MOV EDI,dword ptr [ESP + 0x148]     ; 0044fd3e
        ;   Label: LAB_0044fd3e
    MOV EDX,EBX                         ; 0044fd45
    MOV EAX,EBX                         ; 0044fd47
    SAR EDX,0x1f                        ; 0044fd49
    IDIV dword ptr [EDI + 0x148]        ; 0044fd4c
    IMUL EDI,EAX,0x280                  ; 0044fd52
    MOV EDX,ECX                         ; 0044fd58
    MOV EBP,dword ptr [ESP + 0x148]     ; 0044fd5a
    SAR EDX,0x1f                        ; 0044fd61
    MOV EAX,ECX                         ; 0044fd64
    IDIV dword ptr [EBP + 0x144]        ; 0044fd66
    ADD EAX,EDI                         ; 0044fd6c
    ADD EAX,0x151bfa8                   ; 0044fd6e | g_CameraIndexedImageData
    MOV AL,byte ptr [EAX]               ; 0044fd73 | g_CameraIndexedImageData
    AND EAX,0xff                        ; 0044fd75
    MOV EDX,dword ptr [ESP + 0xb4]      ; 0044fd7a
    MOV EAX,dword ptr [EAX*0x4 + 0xc199fc] ; 0044fd81 | g_CameraConvertedPalette
    ADD ECX,0x280                       ; 0044fd88
    MOV dword ptr [EDX],EAX             ; 0044fd8e
    LEA EAX,[EDX + 0x4]                 ; 0044fd90
    INC ESI                             ; 0044fd93
    MOV EDX,dword ptr [EBP + 0x144]     ; 0044fd94
    MOV dword ptr [ESP + 0xb4],EAX      ; 0044fd9a
    CMP ESI,EDX                         ; 0044fda1
    JL 0x0044fd3e                       ; 0044fda3
        ;   XREF to: 0044fd3e (CONDITIONAL_JUMP)  ; LAB_0044fd3e
    MOV EBP,dword ptr [ESP + 0x120]     ; 0044fda5
        ;   Label: LAB_0044fda5
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0044fdac
    MOV EDX,dword ptr [ESP + 0x148]     ; 0044fdb3
    ADD EBP,0x1e0                       ; 0044fdba
    INC EAX                             ; 0044fdc0
    MOV ECX,dword ptr [EDX + 0x148]     ; 0044fdc1
    MOV dword ptr [ESP + 0x120],EBP     ; 0044fdc7
    MOV dword ptr [ESP + 0xb8],EAX      ; 0044fdce
    CMP EAX,ECX                         ; 0044fdd5
    JGE 0x0044fa10                      ; 0044fdd7
        ;   XREF to: 0044fa10 (CONDITIONAL_JUMP)  ; LAB_0044fa10
    JMP 0x0044fd22                      ; 0044fddd
        ;   XREF to: 0044fd22 (UNCONDITIONAL_JUMP)  ; LAB_0044fd22
    MOV EAX,dword ptr [EAX + 0x158]     ; 0044fde2
        ;   Label: LAB_0044fde2
    MOV dword ptr [ESP + 0xbc],EAX      ; 0044fde8
    MOV EAX,0x9600000                   ; 0044fdef
    MOV ECX,dword ptr [ESP + 0x148]     ; 0044fdf4
    MOV EDX,EAX                         ; 0044fdfb
    MOV EBP,dword ptr [ECX + 0x144]     ; 0044fdfd
    SAR EDX,0x1f                        ; 0044fe03
    IDIV EBP                            ; 0044fe06
    MOV EDX,EAX                         ; 0044fe08
    MOV EBX,dword ptr [ECX + 0x148]     ; 0044fe0a
    SAR EDX,0x1f                        ; 0044fe10
    IDIV EBX                            ; 0044fe13
    XOR ESI,ESI                         ; 0044fe15
    MOV dword ptr [ESP + 0xc8],ESI      ; 0044fe17
    MOV dword ptr [ESP + 0xc0],EAX      ; 0044fe1e
    TEST EBX,EBX                        ; 0044fe25
    JLE 0x0044fa10                      ; 0044fe27
        ;   XREF to: 0044fa10 (CONDITIONAL_JUMP)  ; LAB_0044fa10
    MOV dword ptr [ESP + 0x11c],ESI     ; 0044fe2d
    XOR EAX,EAX                         ; 0044fe34
        ;   Label: LAB_0044fe34
    MOV dword ptr [ESP + 0xc4],EAX      ; 0044fe36
    MOV EAX,dword ptr [ESP + 0x148]     ; 0044fe3d
    CMP dword ptr [EAX + 0x144],0x0     ; 0044fe44
    JLE 0x00450299                      ; 0044fe4b
        ;   XREF to: 00450299 (CONDITIONAL_JUMP)  ; LAB_00450299
    XOR EBP,EBP                         ; 0044fe51
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0044fe53
    MOV dword ptr [ESP + 0x118],EBP     ; 0044fe5a
    MOV dword ptr [ESP + 0xe0],EAX      ; 0044fe61
    MOV EAX,dword ptr [ESP + 0x118]     ; 0044fe68
        ;   Label: LAB_0044fe68
    MOV ECX,dword ptr [ESP + 0x148]     ; 0044fe6f
    MOV EDX,EAX                         ; 0044fe76
    MOV EBX,dword ptr [ECX + 0x144]     ; 0044fe78
    SAR EDX,0x1f                        ; 0044fe7e
    IDIV EBX                            ; 0044fe81
    MOV EBX,EAX                         ; 0044fe83
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0044fe85
    MOV EDX,EAX                         ; 0044fe8c
    MOV ESI,dword ptr [ECX + 0x148]     ; 0044fe8e
    SAR EDX,0x1f                        ; 0044fe94
    IDIV ESI                            ; 0044fe97
    MOV ECX,EAX                         ; 0044fe99
    MOV EAX,0x27d80                     ; 0044fe9b
    MOV ESI,dword ptr [ESP + 0x148]     ; 0044fea0
    MOV EDX,EAX                         ; 0044fea7
    MOV EDI,dword ptr [ESI + 0x144]     ; 0044fea9
    SAR EDX,0x1f                        ; 0044feaf
    IDIV EDI                            ; 0044feb2
    ADD EAX,EBX                         ; 0044feb4
    MOV dword ptr [ESP + 0xd8],EAX      ; 0044feb6
    MOV EAX,0x1de20                     ; 0044febd
    MOV EDX,EAX                         ; 0044fec2
    MOV EBP,dword ptr [ESI + 0x148]     ; 0044fec4
    SAR EDX,0x1f                        ; 0044feca
    IDIV EBP                            ; 0044fecd
    MOV EBP,ECX                         ; 0044fecf
    SAR EBP,0x8                         ; 0044fed1
    IMUL EBP,EBP,0x280                  ; 0044fed4
    ADD EAX,ECX                         ; 0044feda
    MOV dword ptr [ESP + 0xdc],EAX      ; 0044fedc
    MOV EAX,EBX                         ; 0044fee3
    SAR EAX,0x8                         ; 0044fee5
    MOV dword ptr [ESP + 0xe4],EAX      ; 0044fee8
    ADD EAX,EBP                         ; 0044feef
    ADD EAX,0x151bfa8                   ; 0044fef1 | g_CameraIndexedImageData
    MOV AL,byte ptr [EAX]               ; 0044fef6 | g_CameraIndexedImageData
    AND EAX,0xff                        ; 0044fef8
    MOV EAX,dword ptr [EAX*0x4 + 0xc199fc] ; 0044fefd | g_CameraConvertedPalette
    MOV EDX,EAX                         ; 0044ff04
    MOV EDI,0xff                        ; 0044ff06
    AND EDX,0xff                        ; 0044ff0b
    AND ECX,0xff                        ; 0044ff11
    MOV dword ptr [ESP + 0xcc],EDX      ; 0044ff17
    SUB EDI,ECX                         ; 0044ff1e
    MOV ECX,dword ptr [ESP + 0xcc]      ; 0044ff20
    IMUL ECX,EDI                        ; 0044ff27
    MOV EDX,EAX                         ; 0044ff2a
    SHR EDX,0x8                         ; 0044ff2c
    AND EDX,0xff                        ; 0044ff2f
    MOV dword ptr [ESP + 0xd0],EDX      ; 0044ff35
    MOV ESI,dword ptr [ESP + 0xd0]      ; 0044ff3c
    IMUL ESI,EDI                        ; 0044ff43
    SHR EAX,0x10                        ; 0044ff46
    AND EAX,0xff                        ; 0044ff49
    MOV dword ptr [ESP + 0xd4],EAX      ; 0044ff4e
    MOV EDX,EBX                         ; 0044ff55
    MOV EBX,dword ptr [ESP + 0xd4]      ; 0044ff57
    IMUL EBX,EDI                        ; 0044ff5e
    MOV EAX,0xff                        ; 0044ff61
    AND EDX,0xff                        ; 0044ff66
    SUB EAX,EDX                         ; 0044ff6c
    MOV EDX,EAX                         ; 0044ff6e
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0044ff70
    IMUL EAX,EDX                        ; 0044ff77
    ADD ECX,EAX                         ; 0044ff7a
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0044ff7c
    IMUL EAX,EDX                        ; 0044ff83
    ADD ESI,EAX                         ; 0044ff86
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0044ff88
    IMUL EAX,EDX                        ; 0044ff8f
    ADD EBX,EAX                         ; 0044ff92
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0044ff94
    SAR EAX,0x8                         ; 0044ff9b
    ADD EBP,EAX                         ; 0044ff9e
    ADD EBP,0x151bfa8                   ; 0044ffa0 | g_CameraIndexedImageData
    MOVZX EBP,byte ptr [EBP]            ; 0044ffa6 | g_CameraIndexedImageData
    MOV dword ptr [ESP + 0xe8],EAX      ; 0044ffaa
    MOV EAX,dword ptr [EBP*0x4 + 0xc199fc] ; 0044ffb1 | g_CameraConvertedPalette
    MOV EBP,EAX                         ; 0044ffb8
    AND EBP,0xff                        ; 0044ffba
    MOV dword ptr [ESP + 0xcc],EBP      ; 0044ffc0
    MOV EBP,EAX                         ; 0044ffc7
    SHR EAX,0x10                        ; 0044ffc9
    AND EAX,0xff                        ; 0044ffcc
    MOV dword ptr [ESP + 0xd4],EAX      ; 0044ffd1
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0044ffd8
    IMUL EAX,EDI                        ; 0044ffdf
    SHR EBP,0x8                         ; 0044ffe2
    AND EBP,0xff                        ; 0044ffe5
    MOV dword ptr [ESP + 0xd0],EBP      ; 0044ffeb
    MOV EBP,dword ptr [ESP + 0xd8]      ; 0044fff2
    AND EBP,0xff                        ; 0044fff9
    MOV dword ptr [ESP + 0xec],EAX      ; 0044ffff
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00450006
    IMUL EAX,EBP                        ; 0045000d
    ADD EAX,dword ptr [ESP + 0xec]      ; 00450010
    ADD ECX,EAX                         ; 00450017
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00450019
    IMUL EAX,EDI                        ; 00450020
    MOV dword ptr [ESP + 0xec],EAX      ; 00450023
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0045002a
    IMUL EAX,EBP                        ; 00450031
    ADD EAX,dword ptr [ESP + 0xec]      ; 00450034
    ADD ESI,EAX                         ; 0045003b
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0045003d
    IMUL EDI,EAX                        ; 00450044
    IMUL EAX,EBP                        ; 00450047
    ADD EDI,EAX                         ; 0045004a
    ADD EBX,EDI                         ; 0045004c
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0045004e
    SAR EAX,0x8                         ; 00450055
    IMUL EAX,EAX,0x280                  ; 00450058
    MOV EDI,dword ptr [ESP + 0xe4]      ; 0045005e
    MOV dword ptr [ESP + 0xec],EAX      ; 00450065
    ADD EAX,EDI                         ; 0045006c
    ADD EAX,0x151bfa8                   ; 0045006e | g_CameraIndexedImageData
    MOV AL,byte ptr [EAX]               ; 00450073 | g_CameraIndexedImageData
    AND EAX,0xff                        ; 00450075
    MOV EAX,dword ptr [EAX*0x4 + 0xc199fc] ; 0045007a | g_CameraConvertedPalette
    MOV EDI,EAX                         ; 00450081
    AND EDI,0xff                        ; 00450083
    MOV dword ptr [ESP + 0xcc],EDI      ; 00450089
    MOV EDI,EAX                         ; 00450090
    SHR EAX,0x10                        ; 00450092
    AND EAX,0xff                        ; 00450095
    MOV dword ptr [ESP + 0xd4],EAX      ; 0045009a
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004500a1
    IMUL EAX,EDX                        ; 004500a8
    SHR EDI,0x8                         ; 004500ab
    AND EDI,0xff                        ; 004500ae
    MOV dword ptr [ESP + 0xd0],EDI      ; 004500b4
    MOV EDI,dword ptr [ESP + 0xdc]      ; 004500bb
    AND EDI,0xff                        ; 004500c2
    MOV dword ptr [ESP + 0xf4],EAX      ; 004500c8
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004500cf
    IMUL EAX,EDI                        ; 004500d6
    MOV dword ptr [ESP + 0xf0],EAX      ; 004500d9
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004500e0
    ADD EAX,dword ptr [ESP + 0xf0]      ; 004500e7
    ADD ECX,EAX                         ; 004500ee
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004500f0
    IMUL EAX,EDX                        ; 004500f7
    MOV dword ptr [ESP + 0xf0],EAX      ; 004500fa
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00450101
    IMUL EAX,EDI                        ; 00450108
    MOV dword ptr [ESP + 0xf4],EAX      ; 0045010b
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00450112
    ADD EAX,dword ptr [ESP + 0xf4]      ; 00450119
    ADD ESI,EAX                         ; 00450120
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00450122
    IMUL EAX,EDX                        ; 00450129
    MOV dword ptr [ESP + 0xf4],EAX      ; 0045012c
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00450133
    IMUL EAX,EDI                        ; 0045013a
    ADD EAX,dword ptr [ESP + 0xf4]      ; 0045013d
    MOV EDX,dword ptr [ESP + 0xe8]      ; 00450144
    ADD EBX,EAX                         ; 0045014b
    MOV EAX,dword ptr [ESP + 0xec]      ; 0045014d
    ADD EAX,EDX                         ; 00450154
    ADD EAX,0x151bfa8                   ; 00450156 | g_CameraIndexedImageData
    MOV AL,byte ptr [EAX]               ; 0045015b | g_CameraIndexedImageData
    AND EAX,0xff                        ; 0045015d
    MOV EAX,dword ptr [EAX*0x4 + 0xc199fc] ; 00450162 | g_CameraConvertedPalette
    MOV EDX,EAX                         ; 00450169
    AND EDX,0xff                        ; 0045016b
    MOV dword ptr [ESP + 0xcc],EDX      ; 00450171
    MOV EDX,EAX                         ; 00450178
    SHR EAX,0x10                        ; 0045017a
    AND EAX,0xff                        ; 0045017d
    MOV dword ptr [ESP + 0xd4],EAX      ; 00450182
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00450189
    IMUL EAX,EBP                        ; 00450190
    MOV dword ptr [ESP + 0xf4],EAX      ; 00450193
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0045019a
    IMUL EAX,EDI                        ; 004501a1
    SHR EDX,0x8                         ; 004501a4
    AND EDX,0xff                        ; 004501a7
    MOV dword ptr [ESP + 0xd0],EDX      ; 004501ad
    ADD EAX,dword ptr [ESP + 0xf4]      ; 004501b4
    ADD ECX,EAX                         ; 004501bb
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004501bd
    IMUL EAX,EBP                        ; 004501c4
    MOV dword ptr [ESP + 0xf4],EAX      ; 004501c7
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004501ce
    IMUL EAX,EDI                        ; 004501d5
    ADD EAX,dword ptr [ESP + 0xf4]      ; 004501d8
    ADD ESI,EAX                         ; 004501df
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004501e1
    IMUL EBP,EAX                        ; 004501e8
    IMUL EAX,EDI                        ; 004501eb
    ADD EAX,EBP                         ; 004501ee
    XOR EDX,EDX                         ; 004501f0
    ADD EBX,EAX                         ; 004501f2
    MOV EAX,ECX                         ; 004501f4
    MOV ECX,dword ptr [ESP + 0xc0]      ; 004501f6
    DIV ECX                             ; 004501fd
    MOV ECX,EAX                         ; 004501ff
    XOR EDX,EDX                         ; 00450201
    MOV EAX,ESI                         ; 00450203
    DIV dword ptr [ESP + 0xc0]          ; 00450205
    MOV EDI,dword ptr [ESP + 0xc0]      ; 0045020c
    MOV ESI,EAX                         ; 00450213
    XOR EDX,EDX                         ; 00450215
    MOV EAX,EBX                         ; 00450217
    DIV EDI                             ; 00450219
    MOV EBX,EAX                         ; 0045021b
    CMP ECX,0xff                        ; 0045021d
    JBE 0x0045022a                      ; 00450223
        ;   XREF to: 0045022a (CONDITIONAL_JUMP)  ; LAB_0045022a
    MOV ECX,0xff                        ; 00450225
    CMP ESI,0xff                        ; 0045022a
        ;   Label: LAB_0045022a
    JBE 0x00450237                      ; 00450230
        ;   XREF to: 00450237 (CONDITIONAL_JUMP)  ; LAB_00450237
    MOV ESI,0xff                        ; 00450232
    CMP EBX,0xff                        ; 00450237
        ;   Label: LAB_00450237
    JBE 0x00450244                      ; 0045023d
        ;   XREF to: 00450244 (CONDITIONAL_JUMP)  ; LAB_00450244
    MOV EBX,0xff                        ; 0045023f
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00450244
        ;   Label: LAB_00450244
    MOV EDX,dword ptr [ESP + 0x148]     ; 0045024b
    SHL ESI,0x8                         ; 00450252
    SHL EBX,0x10                        ; 00450255
    OR ECX,ESI                          ; 00450258
    MOV ESI,dword ptr [ESP + 0xc4]      ; 0045025a
    OR ECX,EBX                          ; 00450261
    MOV EBX,dword ptr [ESP + 0x118]     ; 00450263
    INC ESI                             ; 0045026a
    MOV dword ptr [EAX],ECX             ; 0045026b | DAT_00ffffff
    LEA ECX,[EAX + 0x4]                 ; 0045026d
    ADD EBX,0x28000                     ; 00450270
    MOV dword ptr [ESP + 0xc4],ESI      ; 00450276
    MOV EDI,dword ptr [EDX + 0x144]     ; 0045027d
    MOV dword ptr [ESP + 0xbc],ECX      ; 00450283
    MOV dword ptr [ESP + 0x118],EBX     ; 0045028a
    CMP ESI,EDI                         ; 00450291
    JL 0x0044fe68                       ; 00450293
        ;   XREF to: 0044fe68 (CONDITIONAL_JUMP)  ; LAB_0044fe68
    MOV EBX,dword ptr [ESP + 0x11c]     ; 00450299
        ;   Label: LAB_00450299
    MOV ESI,dword ptr [ESP + 0xc8]      ; 004502a0
    MOV EDX,dword ptr [ESP + 0x148]     ; 004502a7
    ADD EBX,0x1e000                     ; 004502ae
    INC ESI                             ; 004502b4
    MOV EDI,dword ptr [EDX + 0x148]     ; 004502b5
    MOV dword ptr [ESP + 0x11c],EBX     ; 004502bb
    MOV dword ptr [ESP + 0xc8],ESI      ; 004502c2
    CMP ESI,EDI                         ; 004502c9
    JGE 0x0044fa10                      ; 004502cb
        ;   XREF to: 0044fa10 (CONDITIONAL_JUMP)  ; LAB_0044fa10
    JMP 0x0044fe34                      ; 004502d1
        ;   XREF to: 0044fe34 (UNCONDITIONAL_JUMP)  ; LAB_0044fe34

