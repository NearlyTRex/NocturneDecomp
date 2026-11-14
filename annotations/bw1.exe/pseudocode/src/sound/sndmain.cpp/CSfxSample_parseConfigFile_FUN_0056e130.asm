; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_0056e130(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x498]:8  local_498
; undefined4       Stack[-0x488]:4  local_488
; undefined        Stack[-0x484]:1  local_484
; undefined1       Stack[-0x483]:1  local_483
; undefined1       Stack[-0x482]:1  local_482
; undefined1       Stack[-0x481]:1  local_481
; undefined        Stack[-0x358]:1  local_358
; undefined        Stack[-0x258]:1  local_258
; undefined        Stack[-0x158]:1  local_158
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   sound_sndmain.cpp_getSampleInfo_FUN_00574410 at 00574569
;   sound_sndmain.cpp_getSfxSample_FUN_0056e830 at 0056e9d9
;   sound_sndmain.cpp_startSfx_FUN_00572d20 at 00573237
;
; Referenced Globals:
;   undefined4 DAT_005f2c52
;   undefined4 DAT_005f2c55
;   TerminatedCString s_sound_005f2c59
;   undefined4 DAT_005f2c5f
;   TerminatedCString s_sound_005f2c63
;   TerminatedCString s_refDist_f_005f2c69
;   TerminatedCString s_sound_sndmain_cpp_005f2c75
;   TerminatedCString s_Reference_distance_speci_005f2c8a
;   TerminatedCString s_sound_sndmain_cpp_005f2ccf
;   TerminatedCString s_Reference_volume_distanc_005f2ce4
;   TerminatedCString s_minDist_f_005f2d1d
;   TerminatedCString s_sound_sndmain_cpp_005f2d29
;   TerminatedCString s_Minimum_distance_specifi_005f2d3e
;   TerminatedCString s_sound_sndmain_cpp_005f2d81
;   TerminatedCString s_Reference_volume_distanc_005f2d96
;   ... and 24 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_sscanf_FUN_005c2cac
;   crt_string.c__stricmp_FUN_005c04e0
;   crt_string.c_memmove_FUN_005c25d0
;   crt_string.c_strstr_FUN_005c2dc0
;   engine_dosio.cpp_getFileSize_FUN_00478fb0
;   engine_dosio.cpp_makePath_FUN_004795b0
;   engine_dosio.cpp_splitPath_FUN_00479580
;   support_trstream.cpp_CInStream_readLine_FUN_005a07a0
;   support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0
;   support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e130
        ;   Label: sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_0056e130
    PUSH ESI                            ; 0056e131
    PUSH EDI                            ; 0056e132
    PUSH EBP                            ; 0056e133
    MOV EBP,ESP                         ; 0056e134
    SUB ESP,0x478                       ; 0056e136
    AND ESP,0xfffffff8                  ; 0056e13c
    FLD float ptr [0x00623308]          ; 0056e13f | DAT_00623308
    FLD float ptr [0x00605b08]          ; 0056e145 | DAT_00605b08
    FMUL ST1                            ; 0056e14b
    FLD float ptr [0x02c745e0]          ; 0056e14d | DAT_02c745e0
    FMUL ST2                            ; 0056e153
    FLD float ptr [0x00605b0c]          ; 0056e155 | DAT_00605b0c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e15b
    FMULP ST3                           ; 0056e15e
    MOV dword ptr [EAX + 0x124],0x1     ; 0056e160
    MOV ECX,dword ptr [EBP + 0x14]      ; 0056e16a
    FXCH                                ; 0056e16d
    FSTP float ptr [EAX + 0x114]        ; 0056e16f
    FSTP float ptr [EAX + 0x118]        ; 0056e175
    FSTP float ptr [EAX + 0x11c]        ; 0056e17b
    MOV EAX,dword ptr [EAX + 0x110]     ; 0056e181
    PUSH 0x0                            ; 0056e187
    MOV dword ptr [ECX + 0x128],EAX     ; 0056e189
    LEA EAX,[ESP + 0x334]               ; 0056e18f
    PUSH EAX                            ; 0056e196
    PUSH 0x0                            ; 0056e197
    PUSH 0x0                            ; 0056e199
    PUSH ECX                            ; 0056e19b
    MOV dword ptr [ECX + 0x13c],0xffffffff ; 0056e19c
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 0056e1a6
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0056e1ab
    PUSH 0x5f2c55                       ; 0056e1ae | DAT_005f2c55
    LEA EAX,[ESP + 0x334]               ; 0056e1b3
    PUSH EAX                            ; 0056e1ba
    PUSH 0x0                            ; 0056e1bb
    PUSH 0x0                            ; 0056e1bd
    LEA EAX,[ESP + 0x240]               ; 0056e1bf
    PUSH EAX                            ; 0056e1c6
    CALL engine_dosio.cpp_makePath_FUN_004795b0 ; 0056e1c7
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_004795b0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0056e1cc
    LEA EAX,[ESP + 0x230]               ; 0056e1cf
    PUSH EAX                            ; 0056e1d6
    PUSH 0x5f2c59                       ; 0056e1d7 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 0056e1dc
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0056e1e1
    TEST EAX,EAX                        ; 0056e1e4
    JLE 0x0056e20e                      ; 0056e1e6
        ;   XREF to: 0056e20e (CONDITIONAL_JUMP)  ; LAB_0056e20e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e1e8
    MOV dword ptr [EAX + 0x124],0x1     ; 0056e1eb
    MOV ECX,dword ptr [EBP + 0x14]      ; 0056e1f5
    MOV EAX,dword ptr [EAX + 0x110]     ; 0056e1f8
    MOV dword ptr [ECX + 0x13c],0x0     ; 0056e1fe
    MOV dword ptr [ECX + 0x128],EAX     ; 0056e208
    PUSH 0x5f2c5f                       ; 0056e20e | DAT_005f2c5f
        ;   Label: LAB_0056e20e
    LEA EAX,[ESP + 0x334]               ; 0056e213
    PUSH EAX                            ; 0056e21a
    PUSH 0x0                            ; 0056e21b
    PUSH 0x0                            ; 0056e21d
    LEA EAX,[ESP + 0x140]               ; 0056e21f
    PUSH EAX                            ; 0056e226
    CALL engine_dosio.cpp_makePath_FUN_004795b0 ; 0056e227
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_004795b0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0056e22c
    LEA EAX,[ESP + 0x430]               ; 0056e22f
    PUSH EAX                            ; 0056e236
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0 ; 0056e237
        ;   XREF to: 005a08d0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0056e23c
    PUSH 0x1                            ; 0056e23f
    LEA EAX,[ESP + 0x134]               ; 0056e241
    PUSH EAX                            ; 0056e248
    PUSH 0x5f2c63                       ; 0056e249 | = "sound"
    LEA EAX,[ESP + 0x43c]               ; 0056e24e
    PUSH EAX                            ; 0056e255
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0 ; 0056e256
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(CInStreamFile * this_ptr, char * directory, char * filename, int binary_mode)
    ADD ESP,0x10                        ; 0056e25b
    TEST EAX,EAX                        ; 0056e25e
    JZ 0x0056e30e                       ; 0056e260
        ;   XREF to: 0056e30e (CONDITIONAL_JUMP)  ; LAB_0056e30e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e266
    ADD EAX,0x11c                       ; 0056e269
    MOV dword ptr [ESP + 0x468],EAX     ; 0056e26e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e275
    XOR ECX,ECX                         ; 0056e278
    ADD EAX,0x118                       ; 0056e27a
    MOV dword ptr [ESP + 0x470],ECX     ; 0056e27f
    MOV dword ptr [ESP + 0x460],EAX     ; 0056e286
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e28d
    MOV dword ptr [ESP + 0x46c],ECX     ; 0056e290
    ADD EAX,0x114                       ; 0056e297
    MOV dword ptr [ESP + 0x474],ECX     ; 0056e29c
    MOV dword ptr [ESP + 0x464],EAX     ; 0056e2a3
    PUSH 0x12c                          ; 0056e2aa
        ;   Label: LAB_0056e2aa
    LEA EAX,[ESP + 0x8]                 ; 0056e2af
    PUSH EAX                            ; 0056e2b3
    LEA EAX,[ESP + 0x438]               ; 0056e2b4
    PUSH EAX                            ; 0056e2bb
    CALL support_trstream.cpp_CInStream_readLine_FUN_005a07a0 ; 0056e2bc
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_readLine_FUN_005a07a0(CInStream * this_ptr, char * buffer, int size)
    ADD ESP,0xc                         ; 0056e2c1
    TEST EAX,EAX                        ; 0056e2c4
    JGE 0x0056e311                      ; 0056e2c6
        ;   XREF to: 0056e311 (CONDITIONAL_JUMP)  ; LAB_0056e311
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e2c8
    MOV EDI,dword ptr [EAX + 0x124]     ; 0056e2cb
    XOR ESI,ESI                         ; 0056e2d1
    TEST EDI,EDI                        ; 0056e2d3
    JLE 0x0056e2f5                      ; 0056e2d5
        ;   XREF to: 0056e2f5 (CONDITIONAL_JUMP)  ; LAB_0056e2f5
    CMP dword ptr [EAX + 0x128],0x0     ; 0056e2d7
        ;   Label: LAB_0056e2d7
    JL 0x0056e7d7                       ; 0056e2de
        ;   XREF to: 0056e7d7 (CONDITIONAL_JUMP)  ; LAB_0056e7d7
    MOV ECX,dword ptr [EBP + 0x14]      ; 0056e2e4
        ;   Label: LAB_0056e2e4
    INC ESI                             ; 0056e2e7
    MOV EDX,dword ptr [ECX + 0x124]     ; 0056e2e8
    ADD EAX,0x4                         ; 0056e2ee
    CMP ESI,EDX                         ; 0056e2f1
    JL 0x0056e2d7                       ; 0056e2f3
        ;   XREF to: 0056e2d7 (CONDITIONAL_JUMP)  ; LAB_0056e2d7
    PUSH 0x0                            ; 0056e2f5
        ;   Label: LAB_0056e2f5
    LEA EAX,[ESP + 0x434]               ; 0056e2f7
        ;   Label: LAB_0056e2f7
    PUSH EAX                            ; 0056e2fe
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50 ; 0056e2ff
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056e304
    MOV ESP,EBP                         ; 0056e307
    POP EBP                             ; 0056e309
    POP EDI                             ; 0056e30a
    POP ESI                             ; 0056e30b
    POP EBX                             ; 0056e30c
    RET                                 ; 0056e30d
    PUSH EAX                            ; 0056e30e
        ;   Label: LAB_0056e30e
    JMP 0x0056e2f7                      ; 0056e30f
        ;   XREF to: 0056e2f7 (UNCONDITIONAL_JUMP)  ; LAB_0056e2f7
    PUSH 0x5f2c52                       ; 0056e311 | DAT_005f2c52
        ;   Label: LAB_0056e311
    MOV EAX,dword ptr [ESP + 0x478]     ; 0056e316
    LEA EBX,[ESP + 0x8]                 ; 0056e31d
    INC EAX                             ; 0056e321
    PUSH EBX                            ; 0056e322
    MOV dword ptr [ESP + 0x47c],EAX     ; 0056e323
    CALL crt_string.c_strstr_FUN_005c2dc0 ; 0056e32a
        ;   XREF to: 005c2dc0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005c2dc0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 0056e32f
    TEST EAX,EAX                        ; 0056e332
    JZ 0x0056e339                       ; 0056e334
        ;   XREF to: 0056e339 (CONDITIONAL_JUMP)  ; LAB_0056e339
    MOV byte ptr [EAX],0x0              ; 0056e336
    MOV ESI,EBX                         ; 0056e339
        ;   Label: LAB_0056e339
    XOR DL,DL                           ; 0056e33b
    MOV AL,byte ptr [ESI]               ; 0056e33d
        ;   Label: LAB_0056e33d
    CMP AL,DL                           ; 0056e33f
    JZ 0x0056e355                       ; 0056e341
        ;   XREF to: 0056e355 (CONDITIONAL_JUMP)  ; LAB_0056e355
    CMP AL,0x0                          ; 0056e343
    JZ 0x0056e353                       ; 0056e345
        ;   XREF to: 0056e353 (CONDITIONAL_JUMP)  ; LAB_0056e353
    INC ESI                             ; 0056e347
    MOV AL,byte ptr [ESI]               ; 0056e348
    CMP AL,DL                           ; 0056e34a
    JZ 0x0056e355                       ; 0056e34c
        ;   XREF to: 0056e355 (CONDITIONAL_JUMP)  ; LAB_0056e355
    INC ESI                             ; 0056e34e
    CMP AL,0x0                          ; 0056e34f
    JNZ 0x0056e33d                      ; 0056e351
        ;   XREF to: 0056e33d (CONDITIONAL_JUMP)  ; LAB_0056e33d
    SUB ESI,ESI                         ; 0056e353
        ;   Label: LAB_0056e353
    MOV EAX,ESI                         ; 0056e355
        ;   Label: LAB_0056e355
    CMP ESI,EBX                         ; 0056e357
    JBE 0x0056e36f                      ; 0056e359
        ;   XREF to: 0056e36f (CONDITIONAL_JUMP)  ; LAB_0056e36f
    MOV CL,byte ptr [EAX + -0x1]        ; 0056e35b
        ;   Label: LAB_0056e35b
    INC CL                              ; 0056e35e
    AND ECX,0xff                        ; 0056e360
    TEST byte ptr [ECX + 0x626114],0x2  ; 0056e366 | DAT_00626114
    JNZ 0x0056e3a0                      ; 0056e36d
        ;   XREF to: 0056e3a0 (CONDITIONAL_JUMP)  ; LAB_0056e3a0
    LEA ESI,[EBX + 0x1]                 ; 0056e36f
        ;   Label: LAB_0056e36f
    MOV byte ptr [EAX],0x0              ; 0056e372
    MOV AL,byte ptr [EBX]               ; 0056e375
        ;   Label: LAB_0056e375
    INC AL                              ; 0056e377
    AND EAX,0xff                        ; 0056e379
    TEST byte ptr [EAX + 0x626114],0x2  ; 0056e37e | DAT_00626114
    JZ 0x0056e3a7                       ; 0056e385
        ;   XREF to: 0056e3a7 (CONDITIONAL_JUMP)  ; LAB_0056e3a7
    MOV EDI,EBX                         ; 0056e387
    SUB ECX,ECX                         ; 0056e389
    DEC ECX                             ; 0056e38b
    XOR EAX,EAX                         ; 0056e38c
    SCASB.REPNE ES:EDI                  ; 0056e38e
    NOT ECX                             ; 0056e390
    DEC ECX                             ; 0056e392
    PUSH ECX                            ; 0056e393
    PUSH ESI                            ; 0056e394
    PUSH EBX                            ; 0056e395
    CALL crt_string.c_memmove_FUN_005c25d0 ; 0056e396
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0056e39b
    JMP 0x0056e375                      ; 0056e39e
        ;   XREF to: 0056e375 (UNCONDITIONAL_JUMP)  ; LAB_0056e375
    DEC EAX                             ; 0056e3a0
        ;   Label: LAB_0056e3a0
    CMP EAX,EBX                         ; 0056e3a1
    JA 0x0056e35b                       ; 0056e3a3
        ;   XREF to: 0056e35b (CONDITIONAL_JUMP)  ; LAB_0056e35b
    JMP 0x0056e36f                      ; 0056e3a5
        ;   XREF to: 0056e36f (UNCONDITIONAL_JUMP)  ; LAB_0056e36f
    CMP byte ptr [ESP + 0x4],0x0        ; 0056e3a7
        ;   Label: LAB_0056e3a7
    JZ 0x0056e2aa                       ; 0056e3ac
        ;   XREF to: 0056e2aa (CONDITIONAL_JUMP)  ; LAB_0056e2aa
    MOV EBX,dword ptr [ESP + 0x464]     ; 0056e3b2
    PUSH EBX                            ; 0056e3b9
    PUSH 0x5f2c69                       ; 0056e3ba | = "refDist =%f"
    LEA EAX,[ESP + 0xc]                 ; 0056e3bf
    PUSH EAX                            ; 0056e3c3
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0056e3c4
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 0056e3c9
    CMP EAX,0x1                         ; 0056e3cc
    JNZ 0x0056e4a2                      ; 0056e3cf
        ;   XREF to: 0056e4a2 (CONDITIONAL_JUMP)  ; LAB_0056e4a2
    MOV EDI,dword ptr [ESP + 0x46c]     ; 0056e3d5
    TEST EDI,EDI                        ; 0056e3dc
    JNZ 0x0056e46a                      ; 0056e3de
        ;   XREF to: 0056e46a (CONDITIONAL_JUMP)  ; LAB_0056e46a
    MOV EAX,dword ptr [ESP + 0x474]     ; 0056e3e4
        ;   Label: LAB_0056e3e4
    MOV dword ptr [ESP + 0x46c],EAX     ; 0056e3eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e3f2
    CMP dword ptr [EAX + 0x114],0x3dcccccd ; 0056e3f5
    JGE 0x0056e442                      ; 0056e3ff
        ;   XREF to: 0056e442 (CONDITIONAL_JUMP)  ; LAB_0056e442
    MOV EDX,dword ptr [ESP + 0x474]     ; 0056e401
    MOV EAX,0x2e7                       ; 0056e408
    PUSH EDX                            ; 0056e40d
    MOV [0x01d1d404],EAX                ; 0056e40e | DAT_01d1d404
    LEA EAX,[ESP + 0x134]               ; 0056e413
    PUSH EAX                            ; 0056e41a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e41b
    SUB ESP,0x8                         ; 0056e41e
    FLD float ptr [EAX + 0x114]         ; 0056e421
    FSTP double ptr [ESP]               ; 0056e427
    MOV EDI,0x5f2ccf                    ; 0056e42a | = "..\\sound\\sndmain.cpp"
    PUSH 0x5f2ce4                       ; 0056e42f | = "Reference volume distance %g is too s..."
    MOV dword ptr [0x01d1d400],EDI      ; 0056e434 | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 0056e43a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x14                        ; 0056e43f
    CMP dword ptr [ESP + 0x470],0x0     ; 0056e442
        ;   Label: LAB_0056e442
    JNZ 0x0056e2aa                      ; 0056e44a
        ;   XREF to: 0056e2aa (CONDITIONAL_JUMP)  ; LAB_0056e2aa
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e450
    FLD float ptr [EAX + 0x114]         ; 0056e453
    FDIV float ptr [0x00605b04]         ; 0056e459 | DAT_00605b04
    FSTP float ptr [EAX + 0x118]        ; 0056e45f
    JMP 0x0056e2aa                      ; 0056e465
        ;   XREF to: 0056e2aa (UNCONDITIONAL_JUMP)  ; LAB_0056e2aa
    MOV ECX,dword ptr [ESP + 0x474]     ; 0056e46a
        ;   Label: LAB_0056e46a
    PUSH ECX                            ; 0056e471
    MOV EAX,0x5f2c75                    ; 0056e472 | = "..\\sound\\sndmain.cpp"
    PUSH EDI                            ; 0056e477
    MOV [0x01d1d400],EAX                ; 0056e478 | DAT_01d1d400
    LEA EAX,[ESP + 0x138]               ; 0056e47d
    PUSH EAX                            ; 0056e484
    MOV EDX,0x2e5                       ; 0056e485
    PUSH 0x5f2c8a                       ; 0056e48a | = "Reference distance specified in %s on..."
    MOV dword ptr [0x01d1d404],EDX      ; 0056e48f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056e495
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x10                        ; 0056e49a
    JMP 0x0056e3e4                      ; 0056e49d
        ;   XREF to: 0056e3e4 (UNCONDITIONAL_JUMP)  ; LAB_0056e3e4
    MOV ESI,dword ptr [ESP + 0x460]     ; 0056e4a2
        ;   Label: LAB_0056e4a2
    PUSH ESI                            ; 0056e4a9
    PUSH 0x5f2d1d                       ; 0056e4aa | = "minDist =%f"
    LEA EAX,[ESP + 0xc]                 ; 0056e4af
    PUSH EAX                            ; 0056e4b3
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0056e4b4
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 0056e4b9
    CMP EAX,0x1                         ; 0056e4bc
    JNZ 0x0056e56c                      ; 0056e4bf
        ;   XREF to: 0056e56c (CONDITIONAL_JUMP)  ; LAB_0056e56c
    MOV ECX,dword ptr [ESP + 0x470]     ; 0056e4c5
    TEST ECX,ECX                        ; 0056e4cc
    JZ 0x0056e504                       ; 0056e4ce
        ;   XREF to: 0056e504 (CONDITIONAL_JUMP)  ; LAB_0056e504
    MOV EDI,dword ptr [ESP + 0x474]     ; 0056e4d0
    PUSH EDI                            ; 0056e4d7
    PUSH ECX                            ; 0056e4d8
    LEA EAX,[ESP + 0x138]               ; 0056e4d9
    PUSH EAX                            ; 0056e4e0
    MOV EBX,0x5f2d29                    ; 0056e4e1 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x2ed                       ; 0056e4e6
    PUSH 0x5f2d3e                       ; 0056e4eb | = "Minimum distance specified in %s on l..."
    MOV dword ptr [0x01d1d400],EBX      ; 0056e4f0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0056e4f6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056e4fc
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x10                        ; 0056e501
    MOV EAX,dword ptr [ESP + 0x474]     ; 0056e504
        ;   Label: LAB_0056e504
    MOV dword ptr [ESP + 0x470],EAX     ; 0056e50b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e512
    CMP dword ptr [EAX + 0x118],0x3dcccccd ; 0056e515
    JGE 0x0056e2aa                      ; 0056e51f
        ;   XREF to: 0056e2aa (CONDITIONAL_JUMP)  ; LAB_0056e2aa
    MOV ESI,dword ptr [ESP + 0x474]     ; 0056e525
    PUSH ESI                            ; 0056e52c
    LEA EAX,[ESP + 0x134]               ; 0056e52d
    PUSH EAX                            ; 0056e534
    MOV ECX,0x5f2d81                    ; 0056e535 | = "..\\sound\\sndmain.cpp"
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e53a
    SUB ESP,0x8                         ; 0056e53d
    FLD float ptr [EAX + 0x118]         ; 0056e540
    FSTP double ptr [ESP]               ; 0056e546
    MOV EBX,0x2ef                       ; 0056e549
    PUSH 0x5f2d96                       ; 0056e54e | = "Reference volume distance %g is too s..."
    MOV dword ptr [0x01d1d400],ECX      ; 0056e553 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0056e559 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056e55f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x14                        ; 0056e564
    JMP 0x0056e2aa                      ; 0056e567
        ;   XREF to: 0056e2aa (UNCONDITIONAL_JUMP)  ; LAB_0056e2aa
    MOV EDI,dword ptr [ESP + 0x468]     ; 0056e56c
        ;   Label: LAB_0056e56c
    PUSH EDI                            ; 0056e573
    PUSH 0x5f2dcf                       ; 0056e574 | = "maxDist =%f"
    LEA EAX,[ESP + 0xc]                 ; 0056e579
    PUSH EAX                            ; 0056e57d
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0056e57e
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 0056e583
    CMP EAX,0x1                         ; 0056e586
    JZ 0x0056e2aa                       ; 0056e589
        ;   XREF to: 0056e2aa (CONDITIONAL_JUMP)  ; LAB_0056e2aa
    MOV EAX,ESP                         ; 0056e58f
    PUSH EAX                            ; 0056e591
    PUSH 0x5f2ddb                       ; 0056e592 | = "maxVol =%f"
    LEA EAX,[ESP + 0xc]                 ; 0056e597
    PUSH EAX                            ; 0056e59b
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0056e59c
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 0056e5a1
    CMP EAX,0x1                         ; 0056e5a4
    JNZ 0x0056e69e                      ; 0056e5a7
        ;   XREF to: 0056e69e (CONDITIONAL_JUMP)  ; LAB_0056e69e
    CMP dword ptr [ESP + 0x46c],0x0     ; 0056e5ad
    JZ 0x0056e625                       ; 0056e5b5
        ;   XREF to: 0056e625 (CONDITIONAL_JUMP)  ; LAB_0056e625
    MOV EDI,dword ptr [ESP + 0x470]     ; 0056e5b7
        ;   Label: LAB_0056e5b7
    TEST EDI,EDI                        ; 0056e5be
    JZ 0x0056e5f5                       ; 0056e5c0
        ;   XREF to: 0056e5f5 (CONDITIONAL_JUMP)  ; LAB_0056e5f5
    MOV ECX,dword ptr [ESP + 0x474]     ; 0056e5c2
    PUSH ECX                            ; 0056e5c9
    MOV EAX,0x5f2e46                    ; 0056e5ca | = "..\\sound\\sndmain.cpp"
    PUSH EDI                            ; 0056e5cf
    MOV [0x01d1d400],EAX                ; 0056e5d0 | DAT_01d1d400
    LEA EAX,[ESP + 0x138]               ; 0056e5d5
    PUSH EAX                            ; 0056e5dc
    MOV EDX,0x2fa                       ; 0056e5dd
    PUSH 0x5f2e5b                       ; 0056e5e2 | = "Minimum distance specified in %s on l..."
    MOV dword ptr [0x01d1d404],EDX      ; 0056e5e7 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056e5ed
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x10                        ; 0056e5f2
    MOV EAX,dword ptr [ESP + 0x474]     ; 0056e5f5
        ;   Label: LAB_0056e5f5
    MOV ESI,dword ptr [ESP]             ; 0056e5fc
    MOV dword ptr [ESP + 0x470],EAX     ; 0056e5ff
    CMP ESI,0x3a83126f                  ; 0056e606
    JL 0x0056e65d                       ; 0056e60c
        ;   XREF to: 0056e65d (CONDITIONAL_JUMP)  ; LAB_0056e65d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e60e
        ;   Label: LAB_0056e60e
    FLD float ptr [EAX + 0x114]         ; 0056e611
    FDIV float ptr [ESP]                ; 0056e617
    FSTP float ptr [EAX + 0x118]        ; 0056e61a
    JMP 0x0056e2aa                      ; 0056e620
        ;   XREF to: 0056e2aa (UNCONDITIONAL_JUMP)  ; LAB_0056e2aa
    MOV ESI,dword ptr [ESP + 0x474]     ; 0056e625
        ;   Label: LAB_0056e625
    PUSH ESI                            ; 0056e62c
    LEA EAX,[ESP + 0x134]               ; 0056e62d
    PUSH EAX                            ; 0056e634
    MOV ECX,0x5f2de6                    ; 0056e635 | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x2f9                       ; 0056e63a
    PUSH 0x5f2dfb                       ; 0056e63f | = "%s specified maxVol on line %d withou..."
    MOV dword ptr [0x01d1d400],ECX      ; 0056e644 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0056e64a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056e650
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 0056e655
    JMP 0x0056e5b7                      ; 0056e658
        ;   XREF to: 0056e5b7 (UNCONDITIONAL_JUMP)  ; LAB_0056e5b7
    MOV EDX,dword ptr [ESP + 0x474]     ; 0056e65d
        ;   Label: LAB_0056e65d
    MOV EAX,0x2fc                       ; 0056e664
    PUSH EDX                            ; 0056e669
    MOV [0x01d1d404],EAX                ; 0056e66a | DAT_01d1d404
    LEA EAX,[ESP + 0x134]               ; 0056e66f
    PUSH EAX                            ; 0056e676
    FLD float ptr [ESP + 0x8]           ; 0056e677
    SUB ESP,0x8                         ; 0056e67b
    FSTP double ptr [ESP]               ; 0056e67e
    MOV EDI,0x5f2e9e                    ; 0056e681 | = "..\\sound\\sndmain.cpp"
    PUSH 0x5f2eb3                       ; 0056e686 | = "maxVol %g is too small in %s line %d!"
    MOV dword ptr [0x01d1d400],EDI      ; 0056e68b | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 0056e691
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x14                        ; 0056e696
    JMP 0x0056e60e                      ; 0056e699
        ;   XREF to: 0056e60e (UNCONDITIONAL_JUMP)  ; LAB_0056e60e
    LEA EAX,[ESP + 0x45c]               ; 0056e69e
        ;   Label: LAB_0056e69e
    PUSH EAX                            ; 0056e6a5
    PUSH 0x5f2ed9                       ; 0056e6a6 | = "length =%d"
    LEA EAX,[ESP + 0xc]                 ; 0056e6ab
    PUSH EAX                            ; 0056e6af
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0056e6b0
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 0056e6b5
    CMP EAX,0x1                         ; 0056e6b8
    JNZ 0x0056e75a                      ; 0056e6bb
        ;   XREF to: 0056e75a (CONDITIONAL_JUMP)  ; LAB_0056e75a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e6c1
    CMP dword ptr [EAX + 0x110],0x0     ; 0056e6c4
    JL 0x0056e704                       ; 0056e6cb
        ;   XREF to: 0056e704 (CONDITIONAL_JUMP)  ; LAB_0056e704
    MOV EAX,dword ptr [ESP + 0x474]     ; 0056e6cd
    PUSH EAX                            ; 0056e6d4
    LEA EAX,[ESP + 0x134]               ; 0056e6d5
    PUSH EAX                            ; 0056e6dc
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056e6dd
    PUSH EDX                            ; 0056e6e0
    MOV ESI,0x5f2ee4                    ; 0056e6e1 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x303                       ; 0056e6e6
    PUSH 0x5f2ef9                       ; 0056e6eb | = "Length for %s already known, then spe..."
    MOV dword ptr [0x01d1d400],ESI      ; 0056e6f0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0056e6f6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056e6fc
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x10                        ; 0056e701
    MOV ECX,dword ptr [ESP + 0x45c]     ; 0056e704
        ;   Label: LAB_0056e704
    TEST ECX,ECX                        ; 0056e70b
    JLE 0x0056e724                      ; 0056e70d
        ;   XREF to: 0056e724 (CONDITIONAL_JUMP)  ; LAB_0056e724
    MOV ECX,dword ptr [EBP + 0x14]      ; 0056e70f
        ;   Label: LAB_0056e70f
    MOV EAX,dword ptr [ESP + 0x45c]     ; 0056e712
    MOV dword ptr [ECX + 0x110],EAX     ; 0056e719
    JMP 0x0056e2aa                      ; 0056e71f
        ;   XREF to: 0056e2aa (UNCONDITIONAL_JUMP)  ; LAB_0056e2aa
    MOV EDI,dword ptr [ESP + 0x474]     ; 0056e724
        ;   Label: LAB_0056e724
    PUSH EDI                            ; 0056e72b
    LEA EAX,[ESP + 0x134]               ; 0056e72c
    PUSH EAX                            ; 0056e733
    PUSH ECX                            ; 0056e734
    MOV EBX,0x5f2f39                    ; 0056e735 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x304                       ; 0056e73a
    PUSH 0x5f2f4e                       ; 0056e73f | = "Invalid length %d in %s line %d"
    MOV dword ptr [0x01d1d400],EBX      ; 0056e744 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0056e74a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056e750
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x10                        ; 0056e755
    JMP 0x0056e70f                      ; 0056e758
        ;   XREF to: 0056e70f (UNCONDITIONAL_JUMP)  ; LAB_0056e70f
    PUSH 0x5f2f6e                       ; 0056e75a | DAT_005f2f6e
        ;   Label: LAB_0056e75a
    LEA EAX,[ESP + 0x8]                 ; 0056e75f
    PUSH EAX                            ; 0056e763
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0056e764
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0056e769
    TEST EAX,EAX                        ; 0056e76c
    JNZ 0x0056e79b                      ; 0056e76e
        ;   XREF to: 0056e79b (CONDITIONAL_JUMP)  ; LAB_0056e79b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e770
    MOV dword ptr [EAX + 0x124],0x1     ; 0056e773
    MOV ECX,dword ptr [EBP + 0x14]      ; 0056e77d
    MOV EAX,dword ptr [EAX + 0x110]     ; 0056e780
    MOV dword ptr [ECX + 0x13c],0x0     ; 0056e786
    MOV dword ptr [ECX + 0x128],EAX     ; 0056e790
    JMP 0x0056e2aa                      ; 0056e796
        ;   XREF to: 0056e2aa (UNCONDITIONAL_JUMP)  ; LAB_0056e2aa
    MOV dword ptr [0x01d1d400],0x5f2f73 ; 0056e79b | DAT_01d1d400 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0056e79b
    LEA EAX,[ESP + 0x4]                 ; 0056e7a5
    PUSH EAX                            ; 0056e7a9
    MOV ECX,dword ptr [ESP + 0x478]     ; 0056e7aa
    PUSH ECX                            ; 0056e7b1
    LEA EAX,[ESP + 0x138]               ; 0056e7b2
    PUSH EAX                            ; 0056e7b9
    MOV EDX,0x311                       ; 0056e7ba
    PUSH 0x5f2f88                       ; 0056e7bf | = "Error parsing %s line %d: %s"
    MOV dword ptr [0x01d1d404],EDX      ; 0056e7c4 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056e7ca
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x10                        ; 0056e7cf
    JMP 0x0056e2aa                      ; 0056e7d2
        ;   XREF to: 0056e2aa (UNCONDITIONAL_JUMP)  ; LAB_0056e2aa
    MOV ECX,dword ptr [EBP + 0x14]      ; 0056e7d7
        ;   Label: LAB_0056e7d7
    MOV ECX,dword ptr [ECX + 0x110]     ; 0056e7da
    MOV dword ptr [EAX + 0x128],ECX     ; 0056e7e0
    JMP 0x0056e2e4                      ; 0056e7e6
        ;   XREF to: 0056e2e4 (UNCONDITIONAL_JUMP)  ; LAB_0056e2e4

