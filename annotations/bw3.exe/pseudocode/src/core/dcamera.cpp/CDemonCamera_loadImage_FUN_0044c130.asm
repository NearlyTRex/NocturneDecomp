; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_loadImage_FUN_0044c130(CDemonCamera *this_ptr,char *filename)
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
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 00534f9f
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_005b9d96
;   TerminatedCString s_CDemonCamera_loadImage_n_005b9daa
;   undefined1 DAT_005b9dd1
;   undefined1 DAT_005b9dd2
;   undefined1 DAT_005b9dd3
;   undefined1 DAT_005b9dd4
;   undefined4 DAT_005b9dd6
;   TerminatedCString s_backdrop_005b9dd9
;   undefined4 DAT_005b9de2
;   undefined4 DAT_005b9de5
;   TerminatedCString s_core_dcamera_cpp_005b9de9
;   TerminatedCString s_CDemonCamera_loadImage_n_005b9dfd
;   undefined1 DAT_005b9e1e
;   undefined1 DAT_005b9e1f
;   undefined1 DAT_005b9e20
;   ... and 46 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_memset_FUN_005a28f0
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fread_FUN_005a3890
;   crt_stdio.c_fseek_FUN_005a457c
;   crt_string.c__strcmp_FUN_005a3d00
;   crt_watcom.c__memset_FUN_00495ec0
;   engine_dosio.cpp_FUN_004659c0
;   engine_dosio.cpp_getFileSize_FUN_004657f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0046e690
;   support_codec.cpp_CCodec_processBuffer_FUN_004409f0
;   support_codec.cpp_CLZWDecompress_init_FUN_00441350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c130
        ;   Label: core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044c130
    PUSH ESI                            ; 0044c131
    PUSH EDI                            ; 0044c132
    PUSH EBP                            ; 0044c133
    SUB ESP,0x134                       ; 0044c134
    MOV ESI,dword ptr [ESP + 0x14c]     ; 0044c13a
    MOV EDI,ESP                         ; 0044c141
    MOV DL,0x2e                         ; 0044c143
    PUSH EDI                            ; 0044c145
    MOV AL,byte ptr [ESI]               ; 0044c146
        ;   Label: LAB_0044c146
    MOV byte ptr [EDI],AL               ; 0044c148
    CMP AL,0x0                          ; 0044c14a
    JZ 0x0044c15e                       ; 0044c14c
        ;   XREF to: 0044c15e (CONDITIONAL_JUMP)  ; LAB_0044c15e
    MOV AL,byte ptr [ESI + 0x1]         ; 0044c14e
    ADD ESI,0x2                         ; 0044c151
    MOV byte ptr [EDI + 0x1],AL         ; 0044c154
    ADD EDI,0x2                         ; 0044c157
    CMP AL,0x0                          ; 0044c15a
    JNZ 0x0044c146                      ; 0044c15c
        ;   XREF to: 0044c146 (CONDITIONAL_JUMP)  ; LAB_0044c146
    POP EDI                             ; 0044c15e
        ;   Label: LAB_0044c15e
    MOV ESI,ESP                         ; 0044c15f
    MOV AL,byte ptr [ESI]               ; 0044c161
        ;   Label: LAB_0044c161
    CMP AL,DL                           ; 0044c163
    JZ 0x0044c179                       ; 0044c165
        ;   XREF to: 0044c179 (CONDITIONAL_JUMP)  ; LAB_0044c179
    CMP AL,0x0                          ; 0044c167
    JZ 0x0044c177                       ; 0044c169
        ;   XREF to: 0044c177 (CONDITIONAL_JUMP)  ; LAB_0044c177
    INC ESI                             ; 0044c16b
    MOV AL,byte ptr [ESI]               ; 0044c16c
    CMP AL,DL                           ; 0044c16e
    JZ 0x0044c179                       ; 0044c170
        ;   XREF to: 0044c179 (CONDITIONAL_JUMP)  ; LAB_0044c179
    INC ESI                             ; 0044c172
    CMP AL,0x0                          ; 0044c173
    JNZ 0x0044c161                      ; 0044c175
        ;   XREF to: 0044c161 (CONDITIONAL_JUMP)  ; LAB_0044c161
    SUB ESI,ESI                         ; 0044c177
        ;   Label: LAB_0044c177
    MOV EDI,ESI                         ; 0044c179
        ;   Label: LAB_0044c179
    TEST ESI,ESI                        ; 0044c17b
    JNZ 0x0044c1a2                      ; 0044c17d
        ;   XREF to: 0044c1a2 (CONDITIONAL_JUMP)  ; LAB_0044c1a2
    MOV EDX,0x5b9d96                    ; 0044c17f | = "..\\core\\dcamera.cpp"
    MOV ECX,0x9c1                       ; 0044c184
    PUSH 0x5b9daa                       ; 0044c189 | = "CDemonCamera::loadImage - no extention"
    MOV dword ptr [0x01d71de0],EDX      ; 0044c18e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0044c194 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0044c19a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0044c19f
    MOV ESI,0x5b9dd1                    ; 0044c1a2 | DAT_005b9dd1
        ;   Label: LAB_0044c1a2
    PUSH EDI                            ; 0044c1a7
    MOV AL,byte ptr [ESI]               ; 0044c1a8 | DAT_005b9dd1 | DAT_005b9dd3
        ;   Label: LAB_0044c1a8
    MOV byte ptr [EDI],AL               ; 0044c1aa
    CMP AL,0x0                          ; 0044c1ac
    JZ 0x0044c1c0                       ; 0044c1ae
        ;   XREF to: 0044c1c0 (CONDITIONAL_JUMP)  ; LAB_0044c1c0
    MOV AL,byte ptr [ESI + 0x1]         ; 0044c1b0 | DAT_005b9dd2 | DAT_005b9dd4
    ADD ESI,0x2                         ; 0044c1b3
    MOV byte ptr [EDI + 0x1],AL         ; 0044c1b6
    ADD EDI,0x2                         ; 0044c1b9
    CMP AL,0x0                          ; 0044c1bc
    JNZ 0x0044c1a8                      ; 0044c1be
        ;   XREF to: 0044c1a8 (CONDITIONAL_JUMP)  ; LAB_0044c1a8
    POP EDI                             ; 0044c1c0
        ;   Label: LAB_0044c1c0
    PUSH 0x5b9dd6                       ; 0044c1c1 | DAT_005b9dd6
    LEA EAX,[ESP + 0x4]                 ; 0044c1c6
    PUSH EAX                            ; 0044c1ca
    PUSH 0x5b9dd9                       ; 0044c1cb | = "backdrop"
    CALL engine_dosio.cpp_FUN_004659c0  ; 0044c1d0
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0044c1d5
    MOV EBX,EAX                         ; 0044c1d8
    TEST EAX,EAX                        ; 0044c1da
    JZ 0x0044c90c                       ; 0044c1dc
        ;   XREF to: 0044c90c (CONDITIONAL_JUMP)  ; LAB_0044c90c
    PUSH EBX                            ; 0044c1e2
        ;   Label: LAB_0044c1e2
    PUSH 0x3                            ; 0044c1e3
    PUSH 0x100                          ; 0044c1e5
    PUSH 0xb9da48                       ; 0044c1ea | DAT_00b9da48
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0044c1ef
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005a3890(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0044c1f4
    PUSH EBX                            ; 0044c1f7
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 0044c1f8
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 0044c1fd
    LEA EDI,[ESP + 0x50]                ; 0044c200
    MOV ESI,dword ptr [ESP + 0x14c]     ; 0044c204
    MOV DL,0x2e                         ; 0044c20b
    PUSH EDI                            ; 0044c20d
    MOV AL,byte ptr [ESI]               ; 0044c20e
        ;   Label: LAB_0044c20e
    MOV byte ptr [EDI],AL               ; 0044c210
    CMP AL,0x0                          ; 0044c212
    JZ 0x0044c226                       ; 0044c214
        ;   XREF to: 0044c226 (CONDITIONAL_JUMP)  ; LAB_0044c226
    MOV AL,byte ptr [ESI + 0x1]         ; 0044c216
    ADD ESI,0x2                         ; 0044c219
    MOV byte ptr [EDI + 0x1],AL         ; 0044c21c
    ADD EDI,0x2                         ; 0044c21f
    CMP AL,0x0                          ; 0044c222
    JNZ 0x0044c20e                      ; 0044c224
        ;   XREF to: 0044c20e (CONDITIONAL_JUMP)  ; LAB_0044c20e
    POP EDI                             ; 0044c226
        ;   Label: LAB_0044c226
    LEA ESI,[ESP + 0x50]                ; 0044c227
    MOV AL,byte ptr [ESI]               ; 0044c22b
        ;   Label: LAB_0044c22b
    CMP AL,DL                           ; 0044c22d
    JZ 0x0044c243                       ; 0044c22f
        ;   XREF to: 0044c243 (CONDITIONAL_JUMP)  ; LAB_0044c243
    CMP AL,0x0                          ; 0044c231
    JZ 0x0044c241                       ; 0044c233
        ;   XREF to: 0044c241 (CONDITIONAL_JUMP)  ; LAB_0044c241
    INC ESI                             ; 0044c235
    MOV AL,byte ptr [ESI]               ; 0044c236
    CMP AL,DL                           ; 0044c238
    JZ 0x0044c243                       ; 0044c23a
        ;   XREF to: 0044c243 (CONDITIONAL_JUMP)  ; LAB_0044c243
    INC ESI                             ; 0044c23c
    CMP AL,0x0                          ; 0044c23d
    JNZ 0x0044c22b                      ; 0044c23f
        ;   XREF to: 0044c22b (CONDITIONAL_JUMP)  ; LAB_0044c22b
    SUB ESI,ESI                         ; 0044c241
        ;   Label: LAB_0044c241
    MOV EDI,ESI                         ; 0044c243
        ;   Label: LAB_0044c243
    TEST ESI,ESI                        ; 0044c245
    JNZ 0x0044c26c                      ; 0044c247
        ;   XREF to: 0044c26c (CONDITIONAL_JUMP)  ; LAB_0044c26c
    MOV EBX,0x5b9de9                    ; 0044c249 | = "..\\core\\dcamera.cpp"
    MOV ESI,0x9d4                       ; 0044c24e
    PUSH 0x5b9dfd                       ; 0044c253 | = "CDemonCamera::loadImage - no ext"
    MOV dword ptr [0x01d71de0],EBX      ; 0044c258 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0044c25e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0044c264
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0044c269
    MOV ESI,0x5b9e1e                    ; 0044c26c | DAT_005b9e1e
        ;   Label: LAB_0044c26c
    PUSH EDI                            ; 0044c271
    MOV AL,byte ptr [ESI]               ; 0044c272 | DAT_005b9e1e | DAT_005b9e20
        ;   Label: LAB_0044c272
    MOV byte ptr [EDI],AL               ; 0044c274
    CMP AL,0x0                          ; 0044c276
    JZ 0x0044c28a                       ; 0044c278
        ;   XREF to: 0044c28a (CONDITIONAL_JUMP)  ; LAB_0044c28a
    MOV AL,byte ptr [ESI + 0x1]         ; 0044c27a | DAT_005b9e1f | DAT_005b9e21
    ADD ESI,0x2                         ; 0044c27d
    MOV byte ptr [EDI + 0x1],AL         ; 0044c280
    ADD EDI,0x2                         ; 0044c283
    CMP AL,0x0                          ; 0044c286
    JNZ 0x0044c272                      ; 0044c288
        ;   XREF to: 0044c272 (CONDITIONAL_JUMP)  ; LAB_0044c272
    POP EDI                             ; 0044c28a
        ;   Label: LAB_0044c28a
    PUSH 0x5b9e23                       ; 0044c28b | DAT_005b9e23
    LEA EAX,[ESP + 0x54]                ; 0044c290
    PUSH EAX                            ; 0044c294
    PUSH 0x5b9e26                       ; 0044c295 | = "backdrop"
    CALL engine_dosio.cpp_FUN_004659c0  ; 0044c29a
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0044c29f
    MOV dword ptr [ESP + 0x130],EAX     ; 0044c2a2
    TEST EAX,EAX                        ; 0044c2a9
    JZ 0x0044c5b4                       ; 0044c2ab
        ;   XREF to: 0044c5b4 (CONDITIONAL_JUMP)  ; LAB_0044c5b4
    PUSH EAX                            ; 0044c2b1
    PUSH 0x1                            ; 0044c2b2
    PUSH 0x1000                         ; 0044c2b4
    PUSH 0x149d6dc                      ; 0044c2b9
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0044c2be
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005a3890(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    MOV EDI,dword ptr [0x0149e6f8]      ; 0044c2c3 | DAT_0149e6f8
    ADD ESP,0x10                        ; 0044c2c9
    TEST EDI,EDI                        ; 0044c2cc
    JZ 0x0044c9a3                       ; 0044c2ce
        ;   XREF to: 0044c9a3 (CONDITIONAL_JUMP)  ; LAB_0044c9a3
    MOV EBP,0x10                        ; 0044c2d4
    MOV EAX,[0x0149e6e8]                ; 0044c2d9 | DAT_0149e6e8
    MOV EDX,dword ptr [0x0149e6ec]      ; 0044c2de | DAT_0149e6ec
    MOV ECX,dword ptr [0x0149e6f0]      ; 0044c2e4 | DAT_0149e6f0
    OR EAX,EDX                          ; 0044c2ea
    MOV dword ptr [0x0149d6d8],EBP      ; 0044c2ec | DAT_0149d6d8
    OR EAX,ECX                          ; 0044c2f2
    JNZ 0x0044c300                      ; 0044c2f4
        ;   XREF to: 0044c300 (CONDITIONAL_JUMP)  ; LAB_0044c300
    MOV dword ptr [0x0149d6d8],0x1      ; 0044c2f6 | DAT_0149d6d8
    MOV ESI,dword ptr [ESP + 0x130]     ; 0044c300
        ;   Label: LAB_0044c300
    PUSH ESI                            ; 0044c307
    PUSH 0x1                            ; 0044c308
    PUSH 0x3                            ; 0044c30a
    LEA EAX,[ESP + 0xb0]                ; 0044c30c
    PUSH EAX                            ; 0044c313
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0044c314
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005a3890(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0044c319
    XOR AH,AH                           ; 0044c31c
    PUSH 0x5b9e2f                       ; 0044c31e | DAT_005b9e2f
    MOV byte ptr [ESP + 0xab],AH        ; 0044c323
    LEA EAX,[ESP + 0xa8]                ; 0044c32a
    PUSH EAX                            ; 0044c331
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 0044c332
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0044c337
    TEST EAX,EAX                        ; 0044c33a
    JNZ 0x0044c92e                      ; 0044c33c
        ;   XREF to: 0044c92e (CONDITIONAL_JUMP)  ; LAB_0044c92e
    LEA EAX,[ESP + 0x50]                ; 0044c342
        ;   Label: LAB_0044c342
    PUSH EAX                            ; 0044c346
    PUSH 0x5b9e37                       ; 0044c347 | = "backdrop"
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 0044c34c
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0044c351
    SUB EAX,0x1003                      ; 0044c354
    MOV dword ptr [ESP + 0xa8],EAX      ; 0044c359
    CMP EAX,0x1                         ; 0044c360
    JGE 0x0044c38d                      ; 0044c363
        ;   XREF to: 0044c38d (CONDITIONAL_JUMP)  ; LAB_0044c38d
    LEA EAX,[ESP + 0x50]                ; 0044c365
    PUSH EAX                            ; 0044c369
    MOV ECX,0x5b9e40                    ; 0044c36a | = "..\\core\\dcamera.cpp"
    MOV EBX,0x9f4                       ; 0044c36f
    PUSH 0x5b9e54                       ; 0044c374 | = "Hell froze loading %s"
    MOV dword ptr [0x01d71de0],ECX      ; 0044c379 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0044c37f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0044c385
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0044c38a
    CMP dword ptr [ESP + 0xa8],0x7a120  ; 0044c38d
        ;   Label: LAB_0044c38d
    JBE 0x0044c3c2                      ; 0044c398
        ;   XREF to: 0044c3c2 (CONDITIONAL_JUMP)  ; LAB_0044c3c2
    LEA EAX,[ESP + 0x50]                ; 0044c39a
    PUSH EAX                            ; 0044c39e
    MOV EDI,0x5b9e6a                    ; 0044c39f | = "..\\core\\dcamera.cpp"
    MOV EBP,0x9fa                       ; 0044c3a4
    PUSH 0x5b9e7e                       ; 0044c3a9 | = "%s too big to fit in decompress buffer"
    MOV dword ptr [0x01d71de0],EDI      ; 0044c3ae | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0044c3b4 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0044c3ba
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0044c3bf
    MOV EAX,dword ptr [ESP + 0x130]     ; 0044c3c2
        ;   Label: LAB_0044c3c2
    PUSH EAX                            ; 0044c3c9
    PUSH 0x1                            ; 0044c3ca
    MOV EDX,dword ptr [ESP + 0xb0]      ; 0044c3cc
    PUSH EDX                            ; 0044c3d3
    PUSH 0x7fa464                       ; 0044c3d4 | DAT_007fa464
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0044c3d9
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005a3890(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0044c3de
    PUSH 0x135da78                      ; 0044c3e1
    CALL support_codec.cpp_CLZWDecompress_init_FUN_00441350 ; 0044c3e6
        ;   XREF to: 00441350 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDecompress_init_FUN_00441350(CLZWDecompress * this_ptr)
    MOV EDX,dword ptr [0x0149d6d8]      ; 0044c3eb | DAT_0149d6d8
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044c3f1
    ADD EAX,EDX                         ; 0044c3f8
    SHL EAX,0xa                         ; 0044c3fa
    MOV EDX,EAX                         ; 0044c3fd
    SHL EAX,0x4                         ; 0044c3ff
    ADD ESP,0x4                         ; 0044c402
    SUB EAX,EDX                         ; 0044c405
    PUSH 0x1                            ; 0044c407
    MOV dword ptr [ESP + 0xb0],EAX      ; 0044c409
    LEA EAX,[ESP + 0xb0]                ; 0044c410
    PUSH EAX                            ; 0044c417
    PUSH 0x13716d0                      ; 0044c418
    LEA EAX,[ESP + 0xb4]                ; 0044c41d
    PUSH EAX                            ; 0044c424
    PUSH 0x7fa464                       ; 0044c425 | DAT_007fa464
    PUSH 0x135da78                      ; 0044c42a
    CALL support_codec.cpp_CCodec_processBuffer_FUN_004409f0 ; 0044c42f
        ;   XREF to: 004409f0 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CCodec_processBuffer_FUN_004409f0(CCodec * this_ptr, char * input, int * input_length, char * output, ...)
    ADD ESP,0x18                        ; 0044c434
    TEST EAX,EAX                        ; 0044c437
    JZ 0x0044c976                       ; 0044c439
        ;   XREF to: 0044c976 (CONDITIONAL_JUMP)  ; LAB_0044c976
    XOR ESI,ESI                         ; 0044c43f
        ;   Label: LAB_0044c43f
    MOV EDI,dword ptr [0x0149d6d8]      ; 0044c441 | DAT_0149d6d8
    MOV dword ptr [ESP + 0xa0],ESI      ; 0044c447
    TEST EDI,EDI                        ; 0044c44e
    JLE 0x0044c5a4                      ; 0044c450
        ;   XREF to: 0044c5a4 (CONDITIONAL_JUMP)  ; LAB_0044c5a4
    MOV EBP,0xfffed400                  ; 0044c456
    XOR EDI,EDI                         ; 0044c45b
    MOV ESI,0x12c00                     ; 0044c45d
    MOV dword ptr [ESP + 0x110],EDI     ; 0044c462
    MOV dword ptr [ESP + 0x114],EBP     ; 0044c469
    MOV dword ptr [ESP + 0x10c],ESI     ; 0044c470
    MOV EAX,dword ptr [ESP + 0x110]     ; 0044c477
        ;   Label: LAB_0044c477
    MOV dword ptr [ESP + 0xfc],EAX      ; 0044c47e
    MOV EAX,dword ptr [ESP + 0x114]     ; 0044c485
    MOV dword ptr [ESP + 0x100],EAX     ; 0044c48c
    MOV EAX,dword ptr [ESP + 0x110]     ; 0044c493
    MOV dword ptr [ESP + 0x104],EAX     ; 0044c49a
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0044c4a1
    MOV dword ptr [ESP + 0x108],EAX     ; 0044c4a8
    MOV ECX,dword ptr [ESP + 0x104]     ; 0044c4af
        ;   Label: LAB_0044c4af
    MOV EDI,dword ptr [ESP + 0x100]     ; 0044c4b6
    MOV EBP,dword ptr [ESP + 0xfc]      ; 0044c4bd
    XOR EDX,EDX                         ; 0044c4c4
    XOR EBX,EBX                         ; 0044c4c6
    LEA EAX,[EDX + EBP*0x1]             ; 0044c4c8
        ;   Label: LAB_0044c4c8
    MOV EAX,dword ptr [EAX + 0x13716cd] ; 0044c4cb
    SAR EAX,0x18                        ; 0044c4d1
    ADD EAX,EBX                         ; 0044c4d4
    MOV ESI,dword ptr [ESP + 0xa0]      ; 0044c4d6
    MOV EBX,EAX                         ; 0044c4dd
    SHL EAX,0x2                         ; 0044c4df
    TEST ESI,ESI                        ; 0044c4e2
    JLE 0x0044c4f2                      ; 0044c4e4
        ;   XREF to: 0044c4f2 (CONDITIONAL_JUMP)  ; LAB_0044c4f2
    LEA ESI,[EDI + EDX*0x1]             ; 0044c4e6
    MOVZX ESI,byte ptr [ESI + 0x13716d0] ; 0044c4e9 | DAT_0135ead0 | DAT_0135ead1 | DAT_0135ec10
    ADD EAX,ESI                         ; 0044c4f0
    INC ECX                             ; 0044c4f2
        ;   Label: LAB_0044c4f2
    INC EDX                             ; 0044c4f3
    MOV byte ptr [ECX + 0x13716cf],AL   ; 0044c4f4 | DAT_01371810
    CMP EDX,0x140                       ; 0044c4fa
    JL 0x0044c4c8                       ; 0044c500
        ;   XREF to: 0044c4c8 (CONDITIONAL_JUMP)  ; LAB_0044c4c8
    MOV EBP,dword ptr [ESP + 0x100]     ; 0044c502
    MOV EAX,dword ptr [ESP + 0x104]     ; 0044c509
    MOV EDI,dword ptr [ESP + 0xfc]      ; 0044c510
    MOV EDX,dword ptr [ESP + 0x108]     ; 0044c517
    ADD EBP,0x140                       ; 0044c51e
    ADD EAX,0x140                       ; 0044c524
    ADD EDI,0x140                       ; 0044c529
    MOV dword ptr [ESP + 0x100],EBP     ; 0044c52f
    MOV dword ptr [ESP + 0x104],EAX     ; 0044c536
    MOV dword ptr [ESP + 0xfc],EDI      ; 0044c53d
    CMP EAX,EDX                         ; 0044c544
    JNZ 0x0044c4af                      ; 0044c546
        ;   XREF to: 0044c4af (CONDITIONAL_JUMP)  ; LAB_0044c4af
    MOV EBP,dword ptr [ESP + 0x10c]     ; 0044c54c
    MOV EAX,dword ptr [ESP + 0x110]     ; 0044c553
    MOV EDX,dword ptr [ESP + 0x114]     ; 0044c55a
    MOV ECX,dword ptr [ESP + 0xa0]      ; 0044c561
    MOV EBX,dword ptr [0x0149d6d8]      ; 0044c568 | DAT_0149d6d8
    ADD EBP,0x12c00                     ; 0044c56e
    ADD EAX,0x12c00                     ; 0044c574
    ADD EDX,0x12c00                     ; 0044c579
    INC ECX                             ; 0044c57f
    MOV dword ptr [ESP + 0x10c],EBP     ; 0044c580
    MOV dword ptr [ESP + 0x110],EAX     ; 0044c587
    MOV dword ptr [ESP + 0x114],EDX     ; 0044c58e
    MOV dword ptr [ESP + 0xa0],ECX      ; 0044c595
    CMP ECX,EBX                         ; 0044c59c
    JL 0x0044c477                       ; 0044c59e
        ;   XREF to: 0044c477 (CONDITIONAL_JUMP)  ; LAB_0044c477
    MOV ECX,dword ptr [ESP + 0x130]     ; 0044c5a4
        ;   Label: LAB_0044c5a4
    PUSH ECX                            ; 0044c5ab
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 0044c5ac
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 0044c5b1
    PUSH 0x5b9ed0                       ; 0044c5b4 | DAT_005b9ed0
        ;   Label: LAB_0044c5b4
    MOV EBX,dword ptr [ESP + 0x150]     ; 0044c5b9
    PUSH EBX                            ; 0044c5c0
    PUSH 0x5b9ed3                       ; 0044c5c1 | = "backdrop"
    CALL engine_dosio.cpp_FUN_004659c0  ; 0044c5c6
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0044c5cb
    MOV EBP,EAX                         ; 0044c5ce
    TEST EAX,EAX                        ; 0044c5d0
    JZ 0x0044c9bb                       ; 0044c5d2
        ;   XREF to: 0044c9bb (CONDITIONAL_JUMP)  ; LAB_0044c9bb
    XOR EDX,EDX                         ; 0044c5d8
        ;   Label: LAB_0044c5d8
    XOR EAX,EAX                         ; 0044c5da
    MOV ECX,dword ptr [0x005fba20]      ; 0044c5dc | DAT_005fba20
        ;   Label: LAB_0044c5dc
    MOVZX ESI,byte ptr [EAX + 0xb9da4a] ; 0044c5e2
    XOR EBX,EBX                         ; 0044c5e9
    MOVZX EDI,byte ptr [EAX + 0xb9da48] ; 0044c5eb | DAT_00b9da48
    MOV BL,byte ptr [EAX + 0xb9da49]    ; 0044c5f2
    CMP ECX,0x20                        ; 0044c5f8
    JNZ 0x0044c9dd                      ; 0044c5fb
        ;   XREF to: 0044c9dd (CONDITIONAL_JUMP)  ; LAB_0044c9dd
    MOV CL,byte ptr [0x01c6af74]        ; 0044c601 | DAT_01c6af74
    SHL EDI,CL                          ; 0044c607
    MOV CL,byte ptr [0x01c6af80]        ; 0044c609 | DAT_01c6af80
    SHL EBX,CL                          ; 0044c60f
    MOV CL,byte ptr [0x01c6af8c]        ; 0044c611 | DAT_01c6af8c
    SHL ESI,CL                          ; 0044c617
    OR EBX,EDI                          ; 0044c619
    MOV ECX,ESI                         ; 0044c61b
    OR ECX,EBX                          ; 0044c61d
    ADD EDX,0x4                         ; 0044c61f
        ;   Label: LAB_0044c61f
    ADD EAX,0x3                         ; 0044c622
    MOV dword ptr [EDX + 0xb9dd48],ECX  ; 0044c625
    CMP EDX,0x400                       ; 0044c62b
    JNZ 0x0044c5dc                      ; 0044c631
        ;   XREF to: 0044c5dc (CONDITIONAL_JUMP)  ; LAB_0044c5dc
    PUSH EBP                            ; 0044c633
    PUSH 0x1e0                          ; 0044c634
    PUSH 0x280                          ; 0044c639
    PUSH 0x14a0300                      ; 0044c63e
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0044c643
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005a3890(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0044c648
    PUSH EBP                            ; 0044c64b
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 0044c64c
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 0044c651
    MOV EAX,dword ptr [ESP + 0x148]     ; 0044c654
    MOV EBX,dword ptr [EAX + 0x148]     ; 0044c65b
    CMP EBX,0xf0                        ; 0044c661
    JNZ 0x0044c9ee                      ; 0044c667
        ;   XREF to: 0044c9ee (CONDITIONAL_JUMP)  ; LAB_0044c9ee
    XOR ECX,ECX                         ; 0044c66d
    MOV dword ptr [ESP + 0x124],ECX     ; 0044c66f
    MOV EBP,0x14a0300                   ; 0044c676
    MOV EDI,dword ptr [ESP + 0x148]     ; 0044c67b
        ;   Label: LAB_0044c67b
    MOV EAX,dword ptr [ESP + 0x124]     ; 0044c682
    XOR EBX,EBX                         ; 0044c689
    MOV ECX,dword ptr [ESP + 0x124]     ; 0044c68b
    MOV dword ptr [ESP + 0xb0],EBX      ; 0044c692
    MOV EDI,dword ptr [EDI + 0x158]     ; 0044c699
    ADD EAX,EBP                         ; 0044c69f
    ADD EDI,ECX                         ; 0044c6a1
    ADD EDI,0x4                         ; 0044c6a3
        ;   Label: LAB_0044c6a3
    MOVZX ESI,byte ptr [EAX + 0x1]      ; 0044c6a6
    ADD EAX,0x2                         ; 0044c6aa
    XOR EDX,EDX                         ; 0044c6ad
    XOR EBX,EBX                         ; 0044c6af
    XOR ECX,ECX                         ; 0044c6b1
    MOV ESI,dword ptr [ESI*0x4 + 0xb9dd4c] ; 0044c6b3
    MOV DL,byte ptr [EAX + -0x2]        ; 0044c6ba
    MOV BL,byte ptr [EAX + 0x27e]       ; 0044c6bd
    MOV CL,byte ptr [EAX + 0x27f]       ; 0044c6c3
    AND ESI,0xfcfcfc                    ; 0044c6c9
    MOV EDX,dword ptr [EDX*0x4 + 0xb9dd4c] ; 0044c6cf
    MOV EBX,dword ptr [EBX*0x4 + 0xb9dd4c] ; 0044c6d6
    MOV ECX,dword ptr [ECX*0x4 + 0xb9dd4c] ; 0044c6dd
    AND EDX,0xfcfcfc                    ; 0044c6e4
    SHR ESI,0x2                         ; 0044c6ea
    AND EBX,0xfcfcfc                    ; 0044c6ed
    AND ECX,0xfcfcfc                    ; 0044c6f3
    SHR EDX,0x2                         ; 0044c6f9
    SHR EBX,0x2                         ; 0044c6fc
    SHR ECX,0x2                         ; 0044c6ff
    ADD EDX,ESI                         ; 0044c702
    MOV ESI,dword ptr [ESP + 0xb0]      ; 0044c704
    ADD EDX,EBX                         ; 0044c70b
    INC ESI                             ; 0044c70d
    ADD EDX,ECX                         ; 0044c70e
    MOV dword ptr [ESP + 0xb0],ESI      ; 0044c710
    MOV dword ptr [EDI + -0x4],EDX      ; 0044c717
    CMP ESI,0x140                       ; 0044c71a
    JL 0x0044c6a3                       ; 0044c720
        ;   XREF to: 0044c6a3 (CONDITIONAL_JUMP)  ; LAB_0044c6a3
    MOV ECX,dword ptr [ESP + 0x124]     ; 0044c722
    ADD ECX,0x500                       ; 0044c729
    MOV dword ptr [ESP + 0x124],ECX     ; 0044c72f
    CMP ECX,0x4b000                     ; 0044c736
    JNZ 0x0044c67b                      ; 0044c73c
        ;   XREF to: 0044c67b (CONDITIONAL_JUMP)  ; LAB_0044c67b
    LEA EAX,[EAX]                       ; 0044c742
    LEA EDX,[EDX]                       ; 0044c748
    MOV EAX,EAX                         ; 0044c74e
    XOR EDI,EDI                         ; 0044c750
        ;   Label: LAB_0044c750
    XOR EBP,EBP                         ; 0044c752
    MOV EDX,EDI                         ; 0044c754
        ;   Label: LAB_0044c754
    MOV EAX,EDI                         ; 0044c756
    SAR EDX,0x1f                        ; 0044c758
    SHL EDX,0x8                         ; 0044c75b
    SBB EAX,EDX                         ; 0044c75e
    SAR EAX,0x8                         ; 0044c760
    MOV EBX,EBP                         ; 0044c763
    XOR ECX,ECX                         ; 0044c765
    IMUL ESI,EAX,0x280                  ; 0044c767
    MOV EDX,ECX                         ; 0044c76d
        ;   Label: LAB_0044c76d
    MOV EAX,ECX                         ; 0044c76f
    SAR EDX,0x1f                        ; 0044c771
    SHL EDX,0x8                         ; 0044c774
    SBB EAX,EDX                         ; 0044c777
    SAR EAX,0x8                         ; 0044c779
    INC EBX                             ; 0044c77c
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x14a0300] ; 0044c77d
    ADD ECX,0x280                       ; 0044c784
    MOV byte ptr [EBX + 0x14eb2ff],AL   ; 0044c78a
    CMP ECX,0x28000                     ; 0044c790
    JNZ 0x0044c76d                      ; 0044c796
        ;   XREF to: 0044c76d (CONDITIONAL_JUMP)  ; LAB_0044c76d
    ADD EBP,0x100                       ; 0044c798
    ADD EDI,0x1e0                       ; 0044c79e
    CMP EBP,0x10000                     ; 0044c7a4
    JNZ 0x0044c754                      ; 0044c7aa
        ;   XREF to: 0044c754 (CONDITIONAL_JUMP)  ; LAB_0044c754
    PUSH 0x5f1830                       ; 0044c7ac | DAT_005f1830
    MOV ESI,dword ptr [0x005f2afc]      ; 0044c7b1 | DAT_005f2afc
    PUSH ESI                            ; 0044c7b7 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0044c7b8
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV ESI,0x14eb300                   ; 0044c7bd
    ADD ESP,0x8                         ; 0044c7c2
    MOV EDI,dword ptr [0x01c6ced0]      ; 0044c7c5 | DAT_01c6ced0
    MOV ECX,EBP                         ; 0044c7cb
    PUSH EDI                            ; 0044c7cd
    MOV EAX,ECX                         ; 0044c7ce
    SHR ECX,0x2                         ; 0044c7d0
    MOVSD.REP ES:EDI,ESI                ; 0044c7d3 | DAT_014eb300 | DAT_014eb304
    MOV CL,AL                           ; 0044c7d5
    AND CL,0x3                          ; 0044c7d7
    MOVSB.REP ES:EDI,ESI                ; 0044c7da | DAT_014eb304 | DAT_014eb305
    POP EDI                             ; 0044c7dc
    MOV ECX,0x300                       ; 0044c7dd
    MOV ESI,0xb9da48                    ; 0044c7e2
    MOV EDI,dword ptr [0x01c6a970]      ; 0044c7e7 | DAT_01c6a970
    PUSH EDI                            ; 0044c7ed
    MOV EAX,ECX                         ; 0044c7ee
    SHR ECX,0x2                         ; 0044c7f0
    MOVSD.REP ES:EDI,ESI                ; 0044c7f3 | DAT_00b9da48 | DAT_00b9da4c
    MOV CL,AL                           ; 0044c7f5
    AND CL,0x3                          ; 0044c7f7
    MOVSB.REP ES:EDI,ESI                ; 0044c7fa | DAT_00b9da4c | DAT_00b9da4d
    POP EDI                             ; 0044c7fc
    PUSH 0xb9da48                       ; 0044c7fd | DAT_00b9da48
    PUSH 0x5f1830                       ; 0044c802 | DAT_005f1830
    MOV EDI,dword ptr [0x005f2afc]      ; 0044c807 | DAT_005f2afc
    PUSH EDI                            ; 0044c80d | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0046e690 ; 0044c80e
        ;   XREF to: 0046e690 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0046e690(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture, SRGBColorPalette * palette)
    ADD ESP,0xc                         ; 0044c813
    PUSH 0x12d40                        ; 0044c816
    MOV ECX,0xb3fd08                    ; 0044c81b
    XOR EDX,EDX                         ; 0044c820
    CALL crt_watcom.c__memset_FUN_00495ec0 ; 0044c822
        ;   XREF to: 00495ec0 (UNCONDITIONAL_CALL)  ; void crt_watcom.c__memset_FUN_00495ec0(void * dest, int fill_byte, uint size)
    CMP dword ptr [0x005fba1c],0x180    ; 0044c827 | DAT_005fba1c
    JNZ 0x0044c901                      ; 0044c831
        ;   XREF to: 0044c901 (CONDITIONAL_JUMP)  ; LAB_0044c901
    XOR EAX,EAX                         ; 0044c837
    MOV dword ptr [ESP + 0x12c],EAX     ; 0044c839
    MOV dword ptr [ESP + 0x128],EAX     ; 0044c840
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0044c847
        ;   Label: LAB_0044c847
    MOV EDX,EAX                         ; 0044c84e
    MOV ECX,0xc0                        ; 0044c850
    SAR EDX,0x1f                        ; 0044c855
    IDIV ECX                            ; 0044c858
    IMUL EBP,EAX,0x140                  ; 0044c85a
    XOR EDI,EDI                         ; 0044c860
    MOV EAX,dword ptr [ESP + 0x128]     ; 0044c862
    XOR ESI,ESI                         ; 0044c869
    MOV dword ptr [ESP + 0xf8],EAX      ; 0044c86b
    MOV EDX,ESI                         ; 0044c872
        ;   Label: LAB_0044c872
    MOV EAX,ESI                         ; 0044c874
    SAR EDX,0x1f                        ; 0044c876
    SHL EDX,0x8                         ; 0044c879
    SBB EAX,EDX                         ; 0044c87c
    SAR EAX,0x8                         ; 0044c87e
    MOV ECX,dword ptr [0x0149d6d8]      ; 0044c881 | DAT_0149d6d8
    MOV EBX,EAX                         ; 0044c887
    XOR EAX,EAX                         ; 0044c889
    TEST ECX,ECX                        ; 0044c88b
    JLE 0x0044c8be                      ; 0044c88d
        ;   XREF to: 0044c8be (CONDITIONAL_JUMP)  ; LAB_0044c8be
    MOV EDX,dword ptr [ESP + 0xf8]      ; 0044c88f
    LEA ECX,[EBX + EBP*0x1]             ; 0044c896
    ADD EDX,EDI                         ; 0044c899
    ADD EDX,0x12c00                     ; 0044c89b
        ;   Label: LAB_0044c89b
    MOV BL,byte ptr [ECX + 0x13716d0]   ; 0044c8a1
    INC EAX                             ; 0044c8a7
    MOV byte ptr [EDX + 0x135ead0],BL   ; 0044c8a8
    MOV EBX,dword ptr [0x0149d6d8]      ; 0044c8ae | DAT_0149d6d8
    ADD ECX,0x12c00                     ; 0044c8b4
    CMP EAX,EBX                         ; 0044c8ba
    JL 0x0044c89b                       ; 0044c8bc
        ;   XREF to: 0044c89b (CONDITIONAL_JUMP)  ; LAB_0044c89b
    INC EDI                             ; 0044c8be
        ;   Label: LAB_0044c8be
    ADD ESI,0x140                       ; 0044c8bf
    CMP EDI,0x100                       ; 0044c8c5
    JL 0x0044c872                       ; 0044c8cb
        ;   XREF to: 0044c872 (CONDITIONAL_JUMP)  ; LAB_0044c872
    MOV EDI,dword ptr [ESP + 0x12c]     ; 0044c8cd
    MOV ESI,dword ptr [ESP + 0x128]     ; 0044c8d4
    ADD EDI,0xf0                        ; 0044c8db
    ADD ESI,0x140                       ; 0044c8e1
    MOV dword ptr [ESP + 0x12c],EDI     ; 0044c8e7
    MOV dword ptr [ESP + 0x128],ESI     ; 0044c8ee
    CMP EDI,0xb400                      ; 0044c8f5
    JNZ 0x0044c847                      ; 0044c8fb
        ;   XREF to: 0044c847 (CONDITIONAL_JUMP)  ; LAB_0044c847
    ADD ESP,0x134                       ; 0044c901
        ;   Label: LAB_0044c901
    POP EBP                             ; 0044c907
    POP EDI                             ; 0044c908
    POP ESI                             ; 0044c909
    POP EBX                             ; 0044c90a
    RET                                 ; 0044c90b
    PUSH 0x5b9de2                       ; 0044c90c | DAT_005b9de2
        ;   Label: LAB_0044c90c
    LEA EAX,[ESP + 0x4]                 ; 0044c911
    PUSH EAX                            ; 0044c915
    PUSH 0x5b9de5                       ; 0044c916 | DAT_005b9de5
    CALL engine_dosio.cpp_FUN_004659c0  ; 0044c91b
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0044c920
    MOV EBX,EAX                         ; 0044c923
    TEST EAX,EAX                        ; 0044c925
    JZ 0x0044c901                       ; 0044c927
        ;   XREF to: 0044c901 (CONDITIONAL_JUMP)  ; LAB_0044c901
    JMP 0x0044c1e2                      ; 0044c929
        ;   XREF to: 0044c1e2 (UNCONDITIONAL_JUMP)  ; LAB_0044c1e2
    PUSH 0x5b9e33                       ; 0044c92e | DAT_005b9e33
        ;   Label: LAB_0044c92e
    LEA EAX,[ESP + 0xa8]                ; 0044c933
    PUSH EAX                            ; 0044c93a
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 0044c93b
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0044c940
    TEST EAX,EAX                        ; 0044c943
    JZ 0x0044c342                       ; 0044c945
        ;   XREF to: 0044c342 (CONDITIONAL_JUMP)  ; LAB_0044c342
    PUSH 0x1                            ; 0044c94b
    PUSH -0x3                           ; 0044c94d
    PUSH ESI                            ; 0044c94f
    CALL crt_stdio.c_fseek_FUN_005a457c ; 0044c950
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005a457c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0044c955
    PUSH ESI                            ; 0044c958
    MOV EAX,[0x0149d6d8]                ; 0044c959 | DAT_0149d6d8
    PUSH EAX                            ; 0044c95e
    PUSH 0x12c00                        ; 0044c95f
    PUSH 0x13716d0                      ; 0044c964
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0044c969
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005a3890(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0044c96e
    JMP 0x0044c5a4                      ; 0044c971
        ;   XREF to: 0044c5a4 (UNCONDITIONAL_JUMP)  ; LAB_0044c5a4
    LEA EAX,[ESP + 0x50]                ; 0044c976
        ;   Label: LAB_0044c976
    PUSH EAX                            ; 0044c97a
    MOV ECX,0x5b9ea5                    ; 0044c97b | = "..\\core\\dcamera.cpp"
    MOV EBX,0xa03                       ; 0044c980
    PUSH 0x5b9eb9                       ; 0044c985 | = "Error decompressing %s"
    MOV dword ptr [0x01d71de0],ECX      ; 0044c98a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0044c990 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0044c996
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0044c99b
    JMP 0x0044c43f                      ; 0044c99e
        ;   XREF to: 0044c43f (UNCONDITIONAL_JUMP)  ; LAB_0044c43f
    PUSH 0x12c000                       ; 0044c9a3
        ;   Label: LAB_0044c9a3
    PUSH EDI                            ; 0044c9a8
    PUSH 0x13716d0                      ; 0044c9a9
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0044c9ae
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0044c9b3
    JMP 0x0044c5a4                      ; 0044c9b6
        ;   XREF to: 0044c5a4 (UNCONDITIONAL_JUMP)  ; LAB_0044c5a4
    PUSH 0x5b9edc                       ; 0044c9bb | DAT_005b9edc
        ;   Label: LAB_0044c9bb
    PUSH EBX                            ; 0044c9c0
    PUSH 0x5b9edf                       ; 0044c9c1 | DAT_005b9edf
    CALL engine_dosio.cpp_FUN_004659c0  ; 0044c9c6
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0044c9cb
    MOV EBP,EAX                         ; 0044c9ce
    TEST EAX,EAX                        ; 0044c9d0
    JZ 0x0044c901                       ; 0044c9d2
        ;   XREF to: 0044c901 (CONDITIONAL_JUMP)  ; LAB_0044c901
    JMP 0x0044c5d8                      ; 0044c9d8
        ;   XREF to: 0044c5d8 (UNCONDITIONAL_JUMP)  ; LAB_0044c5d8
    MOV ECX,EBX                         ; 0044c9dd
        ;   Label: LAB_0044c9dd
    SHL EDI,0x10                        ; 0044c9df
    SHL ECX,0x8                         ; 0044c9e2
    OR ECX,EDI                          ; 0044c9e5
    OR ECX,ESI                          ; 0044c9e7
    JMP 0x0044c61f                      ; 0044c9e9
        ;   XREF to: 0044c61f (UNCONDITIONAL_JUMP)  ; LAB_0044c61f
    CMP EBX,0x1e0                       ; 0044c9ee
        ;   Label: LAB_0044c9ee
    JNZ 0x0044ca2a                      ; 0044c9f4
        ;   XREF to: 0044ca2a (CONDITIONAL_JUMP)  ; LAB_0044ca2a
    MOV ECX,dword ptr [ESP + 0x148]     ; 0044c9f6
    MOV EAX,0x14a0300                   ; 0044c9fd
    XOR EDX,EDX                         ; 0044ca02
    MOV ECX,dword ptr [ECX + 0x158]     ; 0044ca04
    XOR EBX,EBX                         ; 0044ca0a
        ;   Label: LAB_0044ca0a
    MOV BL,byte ptr [EAX]               ; 0044ca0c | DAT_014a0300 | DAT_014a0301
    INC EAX                             ; 0044ca0e
    ADD ECX,0x4                         ; 0044ca0f
    MOV EBX,dword ptr [EBX*0x4 + 0xb9dd4c] ; 0044ca12
    INC EDX                             ; 0044ca19
    MOV dword ptr [ECX + -0x4],EBX      ; 0044ca1a
    CMP EDX,0x4b000                     ; 0044ca1d
    JL 0x0044ca0a                       ; 0044ca23
        ;   XREF to: 0044ca0a (CONDITIONAL_JUMP)  ; LAB_0044ca0a
    JMP 0x0044c750                      ; 0044ca25
        ;   XREF to: 0044c750 (UNCONDITIONAL_JUMP)  ; LAB_0044c750
    JLE 0x0044cb22                      ; 0044ca2a
        ;   XREF to: 0044cb22 (CONDITIONAL_JUMP)  ; LAB_0044cb22
        ;   Label: LAB_0044ca2a
    MOV EAX,dword ptr [EAX + 0x158]     ; 0044ca30
    MOV dword ptr [ESP + 0xb4],EAX      ; 0044ca36
    MOV EAX,dword ptr [ESP + 0x148]     ; 0044ca3d
    XOR EBP,EBP                         ; 0044ca44
    MOV EDX,dword ptr [EAX + 0x148]     ; 0044ca46
    MOV dword ptr [ESP + 0xb8],EBP      ; 0044ca4c
    TEST EDX,EDX                        ; 0044ca53
    JLE 0x0044c750                      ; 0044ca55
        ;   XREF to: 0044c750 (CONDITIONAL_JUMP)  ; LAB_0044c750
    MOV dword ptr [ESP + 0x120],EBP     ; 0044ca5b
    MOV EAX,dword ptr [ESP + 0x148]     ; 0044ca62
        ;   Label: LAB_0044ca62
    MOV EDI,dword ptr [EAX + 0x144]     ; 0044ca69
    XOR ESI,ESI                         ; 0044ca6f
    TEST EDI,EDI                        ; 0044ca71
    JLE 0x0044cae5                      ; 0044ca73
        ;   XREF to: 0044cae5 (CONDITIONAL_JUMP)  ; LAB_0044cae5
    MOV EBX,dword ptr [ESP + 0x120]     ; 0044ca75
    XOR ECX,ECX                         ; 0044ca7c
    MOV EDI,dword ptr [ESP + 0x148]     ; 0044ca7e
        ;   Label: LAB_0044ca7e
    MOV EDX,EBX                         ; 0044ca85
    MOV EAX,EBX                         ; 0044ca87
    SAR EDX,0x1f                        ; 0044ca89
    IDIV dword ptr [EDI + 0x148]        ; 0044ca8c
    IMUL EDI,EAX,0x280                  ; 0044ca92
    MOV EDX,ECX                         ; 0044ca98
    MOV EBP,dword ptr [ESP + 0x148]     ; 0044ca9a
    SAR EDX,0x1f                        ; 0044caa1
    MOV EAX,ECX                         ; 0044caa4
    IDIV dword ptr [EBP + 0x144]        ; 0044caa6
    ADD EAX,EDI                         ; 0044caac
    ADD EAX,0x14a0300                   ; 0044caae
    MOV AL,byte ptr [EAX]               ; 0044cab3 | DAT_014a0300
    AND EAX,0xff                        ; 0044cab5
    MOV EDX,dword ptr [ESP + 0xb4]      ; 0044caba
    MOV EAX,dword ptr [EAX*0x4 + 0xb9dd4c] ; 0044cac1
    ADD ECX,0x280                       ; 0044cac8
    MOV dword ptr [EDX],EAX             ; 0044cace
    LEA EAX,[EDX + 0x4]                 ; 0044cad0
    INC ESI                             ; 0044cad3
    MOV EDX,dword ptr [EBP + 0x144]     ; 0044cad4
    MOV dword ptr [ESP + 0xb4],EAX      ; 0044cada
    CMP ESI,EDX                         ; 0044cae1
    JL 0x0044ca7e                       ; 0044cae3
        ;   XREF to: 0044ca7e (CONDITIONAL_JUMP)  ; LAB_0044ca7e
    MOV EBP,dword ptr [ESP + 0x120]     ; 0044cae5
        ;   Label: LAB_0044cae5
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0044caec
    MOV EDX,dword ptr [ESP + 0x148]     ; 0044caf3
    ADD EBP,0x1e0                       ; 0044cafa
    INC EAX                             ; 0044cb00
    MOV ECX,dword ptr [EDX + 0x148]     ; 0044cb01
    MOV dword ptr [ESP + 0x120],EBP     ; 0044cb07
    MOV dword ptr [ESP + 0xb8],EAX      ; 0044cb0e
    CMP EAX,ECX                         ; 0044cb15
    JGE 0x0044c750                      ; 0044cb17
        ;   XREF to: 0044c750 (CONDITIONAL_JUMP)  ; LAB_0044c750
    JMP 0x0044ca62                      ; 0044cb1d
        ;   XREF to: 0044ca62 (UNCONDITIONAL_JUMP)  ; LAB_0044ca62
    MOV EAX,dword ptr [EAX + 0x158]     ; 0044cb22
        ;   Label: LAB_0044cb22
    MOV dword ptr [ESP + 0xbc],EAX      ; 0044cb28
    MOV EAX,0x9600000                   ; 0044cb2f
    MOV ECX,dword ptr [ESP + 0x148]     ; 0044cb34
    MOV EDX,EAX                         ; 0044cb3b
    MOV EBP,dword ptr [ECX + 0x144]     ; 0044cb3d
    SAR EDX,0x1f                        ; 0044cb43
    IDIV EBP                            ; 0044cb46
    MOV EDX,EAX                         ; 0044cb48
    MOV EBX,dword ptr [ECX + 0x148]     ; 0044cb4a
    SAR EDX,0x1f                        ; 0044cb50
    IDIV EBX                            ; 0044cb53
    XOR ESI,ESI                         ; 0044cb55
    MOV dword ptr [ESP + 0xc8],ESI      ; 0044cb57
    MOV dword ptr [ESP + 0xc0],EAX      ; 0044cb5e
    TEST EBX,EBX                        ; 0044cb65
    JLE 0x0044c750                      ; 0044cb67
        ;   XREF to: 0044c750 (CONDITIONAL_JUMP)  ; LAB_0044c750
    MOV dword ptr [ESP + 0x11c],ESI     ; 0044cb6d
    XOR EAX,EAX                         ; 0044cb74
        ;   Label: LAB_0044cb74
    MOV dword ptr [ESP + 0xc4],EAX      ; 0044cb76
    MOV EAX,dword ptr [ESP + 0x148]     ; 0044cb7d
    CMP dword ptr [EAX + 0x144],0x0     ; 0044cb84
    JLE 0x0044cfd9                      ; 0044cb8b
        ;   XREF to: 0044cfd9 (CONDITIONAL_JUMP)  ; LAB_0044cfd9
    XOR EBP,EBP                         ; 0044cb91
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0044cb93
    MOV dword ptr [ESP + 0x118],EBP     ; 0044cb9a
    MOV dword ptr [ESP + 0xe0],EAX      ; 0044cba1
    MOV EAX,dword ptr [ESP + 0x118]     ; 0044cba8
        ;   Label: LAB_0044cba8
    MOV ECX,dword ptr [ESP + 0x148]     ; 0044cbaf
    MOV EDX,EAX                         ; 0044cbb6
    MOV EBX,dword ptr [ECX + 0x144]     ; 0044cbb8
    SAR EDX,0x1f                        ; 0044cbbe
    IDIV EBX                            ; 0044cbc1
    MOV EBX,EAX                         ; 0044cbc3
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0044cbc5
    MOV EDX,EAX                         ; 0044cbcc
    MOV ESI,dword ptr [ECX + 0x148]     ; 0044cbce
    SAR EDX,0x1f                        ; 0044cbd4
    IDIV ESI                            ; 0044cbd7
    MOV ECX,EAX                         ; 0044cbd9
    MOV EAX,0x27d80                     ; 0044cbdb
    MOV ESI,dword ptr [ESP + 0x148]     ; 0044cbe0
    MOV EDX,EAX                         ; 0044cbe7
    MOV EDI,dword ptr [ESI + 0x144]     ; 0044cbe9
    SAR EDX,0x1f                        ; 0044cbef
    IDIV EDI                            ; 0044cbf2
    ADD EAX,EBX                         ; 0044cbf4
    MOV dword ptr [ESP + 0xd8],EAX      ; 0044cbf6
    MOV EAX,0x1de20                     ; 0044cbfd
    MOV EDX,EAX                         ; 0044cc02
    MOV EBP,dword ptr [ESI + 0x148]     ; 0044cc04
    SAR EDX,0x1f                        ; 0044cc0a
    IDIV EBP                            ; 0044cc0d
    MOV EBP,ECX                         ; 0044cc0f
    SAR EBP,0x8                         ; 0044cc11
    IMUL EBP,EBP,0x280                  ; 0044cc14
    ADD EAX,ECX                         ; 0044cc1a
    MOV dword ptr [ESP + 0xdc],EAX      ; 0044cc1c
    MOV EAX,EBX                         ; 0044cc23
    SAR EAX,0x8                         ; 0044cc25
    MOV dword ptr [ESP + 0xe4],EAX      ; 0044cc28
    ADD EAX,EBP                         ; 0044cc2f
    ADD EAX,0x14a0300                   ; 0044cc31
    MOV AL,byte ptr [EAX]               ; 0044cc36 | DAT_014a0300
    AND EAX,0xff                        ; 0044cc38
    MOV EAX,dword ptr [EAX*0x4 + 0xb9dd4c] ; 0044cc3d
    MOV EDX,EAX                         ; 0044cc44
    MOV EDI,0xff                        ; 0044cc46
    AND EDX,0xff                        ; 0044cc4b
    AND ECX,0xff                        ; 0044cc51
    MOV dword ptr [ESP + 0xcc],EDX      ; 0044cc57
    SUB EDI,ECX                         ; 0044cc5e
    MOV ECX,dword ptr [ESP + 0xcc]      ; 0044cc60
    IMUL ECX,EDI                        ; 0044cc67
    MOV EDX,EAX                         ; 0044cc6a
    SHR EDX,0x8                         ; 0044cc6c
    AND EDX,0xff                        ; 0044cc6f
    MOV dword ptr [ESP + 0xd0],EDX      ; 0044cc75
    MOV ESI,dword ptr [ESP + 0xd0]      ; 0044cc7c
    IMUL ESI,EDI                        ; 0044cc83
    SHR EAX,0x10                        ; 0044cc86
    AND EAX,0xff                        ; 0044cc89
    MOV dword ptr [ESP + 0xd4],EAX      ; 0044cc8e
    MOV EDX,EBX                         ; 0044cc95
    MOV EBX,dword ptr [ESP + 0xd4]      ; 0044cc97
    IMUL EBX,EDI                        ; 0044cc9e
    MOV EAX,0xff                        ; 0044cca1
    AND EDX,0xff                        ; 0044cca6
    SUB EAX,EDX                         ; 0044ccac
    MOV EDX,EAX                         ; 0044ccae
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0044ccb0
    IMUL EAX,EDX                        ; 0044ccb7
    ADD ECX,EAX                         ; 0044ccba
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0044ccbc
    IMUL EAX,EDX                        ; 0044ccc3
    ADD ESI,EAX                         ; 0044ccc6
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0044ccc8
    IMUL EAX,EDX                        ; 0044cccf
    ADD EBX,EAX                         ; 0044ccd2
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0044ccd4
    SAR EAX,0x8                         ; 0044ccdb
    ADD EBP,EAX                         ; 0044ccde
    ADD EBP,0x14a0300                   ; 0044cce0
    MOVZX EBP,byte ptr [EBP]            ; 0044cce6 | DAT_014a0300
    MOV dword ptr [ESP + 0xe8],EAX      ; 0044ccea
    MOV EAX,dword ptr [EBP*0x4 + 0xb9dd4c] ; 0044ccf1
    MOV EBP,EAX                         ; 0044ccf8
    AND EBP,0xff                        ; 0044ccfa
    MOV dword ptr [ESP + 0xcc],EBP      ; 0044cd00
    MOV EBP,EAX                         ; 0044cd07
    SHR EAX,0x10                        ; 0044cd09
    AND EAX,0xff                        ; 0044cd0c
    MOV dword ptr [ESP + 0xd4],EAX      ; 0044cd11
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0044cd18
    IMUL EAX,EDI                        ; 0044cd1f
    SHR EBP,0x8                         ; 0044cd22
    AND EBP,0xff                        ; 0044cd25
    MOV dword ptr [ESP + 0xd0],EBP      ; 0044cd2b
    MOV EBP,dword ptr [ESP + 0xd8]      ; 0044cd32
    AND EBP,0xff                        ; 0044cd39
    MOV dword ptr [ESP + 0xec],EAX      ; 0044cd3f
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0044cd46
    IMUL EAX,EBP                        ; 0044cd4d
    ADD EAX,dword ptr [ESP + 0xec]      ; 0044cd50
    ADD ECX,EAX                         ; 0044cd57
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0044cd59
    IMUL EAX,EDI                        ; 0044cd60
    MOV dword ptr [ESP + 0xec],EAX      ; 0044cd63
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0044cd6a
    IMUL EAX,EBP                        ; 0044cd71
    ADD EAX,dword ptr [ESP + 0xec]      ; 0044cd74
    ADD ESI,EAX                         ; 0044cd7b
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0044cd7d
    IMUL EDI,EAX                        ; 0044cd84
    IMUL EAX,EBP                        ; 0044cd87
    ADD EDI,EAX                         ; 0044cd8a
    ADD EBX,EDI                         ; 0044cd8c
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0044cd8e
    SAR EAX,0x8                         ; 0044cd95
    IMUL EAX,EAX,0x280                  ; 0044cd98
    MOV EDI,dword ptr [ESP + 0xe4]      ; 0044cd9e
    MOV dword ptr [ESP + 0xec],EAX      ; 0044cda5
    ADD EAX,EDI                         ; 0044cdac
    ADD EAX,0x14a0300                   ; 0044cdae
    MOV AL,byte ptr [EAX]               ; 0044cdb3 | DAT_014a0300
    AND EAX,0xff                        ; 0044cdb5
    MOV EAX,dword ptr [EAX*0x4 + 0xb9dd4c] ; 0044cdba
    MOV EDI,EAX                         ; 0044cdc1
    AND EDI,0xff                        ; 0044cdc3
    MOV dword ptr [ESP + 0xcc],EDI      ; 0044cdc9
    MOV EDI,EAX                         ; 0044cdd0
    SHR EAX,0x10                        ; 0044cdd2
    AND EAX,0xff                        ; 0044cdd5
    MOV dword ptr [ESP + 0xd4],EAX      ; 0044cdda
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0044cde1
    IMUL EAX,EDX                        ; 0044cde8
    SHR EDI,0x8                         ; 0044cdeb
    AND EDI,0xff                        ; 0044cdee
    MOV dword ptr [ESP + 0xd0],EDI      ; 0044cdf4
    MOV EDI,dword ptr [ESP + 0xdc]      ; 0044cdfb
    AND EDI,0xff                        ; 0044ce02
    MOV dword ptr [ESP + 0xf4],EAX      ; 0044ce08
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0044ce0f
    IMUL EAX,EDI                        ; 0044ce16
    MOV dword ptr [ESP + 0xf0],EAX      ; 0044ce19
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0044ce20
    ADD EAX,dword ptr [ESP + 0xf0]      ; 0044ce27
    ADD ECX,EAX                         ; 0044ce2e
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0044ce30
    IMUL EAX,EDX                        ; 0044ce37
    MOV dword ptr [ESP + 0xf0],EAX      ; 0044ce3a
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0044ce41
    IMUL EAX,EDI                        ; 0044ce48
    MOV dword ptr [ESP + 0xf4],EAX      ; 0044ce4b
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0044ce52
    ADD EAX,dword ptr [ESP + 0xf4]      ; 0044ce59
    ADD ESI,EAX                         ; 0044ce60
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0044ce62
    IMUL EAX,EDX                        ; 0044ce69
    MOV dword ptr [ESP + 0xf4],EAX      ; 0044ce6c
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0044ce73
    IMUL EAX,EDI                        ; 0044ce7a
    ADD EAX,dword ptr [ESP + 0xf4]      ; 0044ce7d
    MOV EDX,dword ptr [ESP + 0xe8]      ; 0044ce84
    ADD EBX,EAX                         ; 0044ce8b
    MOV EAX,dword ptr [ESP + 0xec]      ; 0044ce8d
    ADD EAX,EDX                         ; 0044ce94
    ADD EAX,0x14a0300                   ; 0044ce96
    MOV AL,byte ptr [EAX]               ; 0044ce9b | DAT_014a0300
    AND EAX,0xff                        ; 0044ce9d
    MOV EAX,dword ptr [EAX*0x4 + 0xb9dd4c] ; 0044cea2
    MOV EDX,EAX                         ; 0044cea9
    AND EDX,0xff                        ; 0044ceab
    MOV dword ptr [ESP + 0xcc],EDX      ; 0044ceb1
    MOV EDX,EAX                         ; 0044ceb8
    SHR EAX,0x10                        ; 0044ceba
    AND EAX,0xff                        ; 0044cebd
    MOV dword ptr [ESP + 0xd4],EAX      ; 0044cec2
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0044cec9
    IMUL EAX,EBP                        ; 0044ced0
    MOV dword ptr [ESP + 0xf4],EAX      ; 0044ced3
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0044ceda
    IMUL EAX,EDI                        ; 0044cee1
    SHR EDX,0x8                         ; 0044cee4
    AND EDX,0xff                        ; 0044cee7
    MOV dword ptr [ESP + 0xd0],EDX      ; 0044ceed
    ADD EAX,dword ptr [ESP + 0xf4]      ; 0044cef4
    ADD ECX,EAX                         ; 0044cefb
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0044cefd
    IMUL EAX,EBP                        ; 0044cf04
    MOV dword ptr [ESP + 0xf4],EAX      ; 0044cf07
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0044cf0e
    IMUL EAX,EDI                        ; 0044cf15
    ADD EAX,dword ptr [ESP + 0xf4]      ; 0044cf18
    ADD ESI,EAX                         ; 0044cf1f
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0044cf21
    IMUL EBP,EAX                        ; 0044cf28
    IMUL EAX,EDI                        ; 0044cf2b
    ADD EAX,EBP                         ; 0044cf2e
    XOR EDX,EDX                         ; 0044cf30
    ADD EBX,EAX                         ; 0044cf32
    MOV EAX,ECX                         ; 0044cf34
    MOV ECX,dword ptr [ESP + 0xc0]      ; 0044cf36
    DIV ECX                             ; 0044cf3d
    MOV ECX,EAX                         ; 0044cf3f
    XOR EDX,EDX                         ; 0044cf41
    MOV EAX,ESI                         ; 0044cf43
    DIV dword ptr [ESP + 0xc0]          ; 0044cf45
    MOV EDI,dword ptr [ESP + 0xc0]      ; 0044cf4c
    MOV ESI,EAX                         ; 0044cf53
    XOR EDX,EDX                         ; 0044cf55
    MOV EAX,EBX                         ; 0044cf57
    DIV EDI                             ; 0044cf59
    MOV EBX,EAX                         ; 0044cf5b
    CMP ECX,0xff                        ; 0044cf5d
    JBE 0x0044cf6a                      ; 0044cf63
        ;   XREF to: 0044cf6a (CONDITIONAL_JUMP)  ; LAB_0044cf6a
    MOV ECX,0xff                        ; 0044cf65
    CMP ESI,0xff                        ; 0044cf6a
        ;   Label: LAB_0044cf6a
    JBE 0x0044cf77                      ; 0044cf70
        ;   XREF to: 0044cf77 (CONDITIONAL_JUMP)  ; LAB_0044cf77
    MOV ESI,0xff                        ; 0044cf72
    CMP EBX,0xff                        ; 0044cf77
        ;   Label: LAB_0044cf77
    JBE 0x0044cf84                      ; 0044cf7d
        ;   XREF to: 0044cf84 (CONDITIONAL_JUMP)  ; LAB_0044cf84
    MOV EBX,0xff                        ; 0044cf7f
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0044cf84
        ;   Label: LAB_0044cf84
    MOV EDX,dword ptr [ESP + 0x148]     ; 0044cf8b
    SHL ESI,0x8                         ; 0044cf92
    SHL EBX,0x10                        ; 0044cf95
    OR ECX,ESI                          ; 0044cf98
    MOV ESI,dword ptr [ESP + 0xc4]      ; 0044cf9a
    OR ECX,EBX                          ; 0044cfa1
    MOV EBX,dword ptr [ESP + 0x118]     ; 0044cfa3
    INC ESI                             ; 0044cfaa
    MOV dword ptr [EAX],ECX             ; 0044cfab
    LEA ECX,[EAX + 0x4]                 ; 0044cfad
    ADD EBX,0x28000                     ; 0044cfb0
    MOV dword ptr [ESP + 0xc4],ESI      ; 0044cfb6
    MOV EDI,dword ptr [EDX + 0x144]     ; 0044cfbd
    MOV dword ptr [ESP + 0xbc],ECX      ; 0044cfc3
    MOV dword ptr [ESP + 0x118],EBX     ; 0044cfca
    CMP ESI,EDI                         ; 0044cfd1
    JL 0x0044cba8                       ; 0044cfd3
        ;   XREF to: 0044cba8 (CONDITIONAL_JUMP)  ; LAB_0044cba8
    MOV EBX,dword ptr [ESP + 0x11c]     ; 0044cfd9
        ;   Label: LAB_0044cfd9
    MOV ESI,dword ptr [ESP + 0xc8]      ; 0044cfe0
    MOV EDX,dword ptr [ESP + 0x148]     ; 0044cfe7
    ADD EBX,0x1e000                     ; 0044cfee
    INC ESI                             ; 0044cff4
    MOV EDI,dword ptr [EDX + 0x148]     ; 0044cff5
    MOV dword ptr [ESP + 0x11c],EBX     ; 0044cffb
    MOV dword ptr [ESP + 0xc8],ESI      ; 0044d002
    CMP ESI,EDI                         ; 0044d009
    JGE 0x0044c750                      ; 0044d00b
        ;   XREF to: 0044c750 (CONDITIONAL_JUMP)  ; LAB_0044c750
    JMP 0x0044cb74                      ; 0044d011
        ;   XREF to: 0044cb74 (UNCONDITIONAL_JUMP)  ; LAB_0044cb74

