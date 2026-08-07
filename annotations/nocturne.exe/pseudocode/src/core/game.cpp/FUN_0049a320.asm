; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_0049a320(void)
;
;
; Referenced Globals:
;   TerminatedCString s_noc_05d_raw_00582386
;   TerminatedCString s_Movie_recording_active_m_00582392
;   TerminatedCString s_wb_005823b3
;   TerminatedCString s_movie_005823b6
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   undefined4 DAT_005b9364
;   undefined4 DAT_005b9368
;   CKeys* g_CKeys_PTR_005bac64 = 01cc30e4
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   undefined4 DAT_01c78ac8
;   undefined4 DAT_01c78acc
;   undefined4 DAT_01c78ad0
;   undefined4 DAT_01c78ad4
;   ... and 1 more
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fputc_FUN_00566cc0
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_2d.c_drawText_FUN_00402600
;   engine_dosio.cpp_getFile_FUN_00456a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a320
        ;   Label: core_game.cpp_FUN_0049a320
    PUSH ESI                            ; 0049a321
    PUSH EDI                            ; 0049a322
    PUSH EBP                            ; 0049a323
    SUB ESP,0x150                       ; 0049a324
    CMP dword ptr [0x01c78ac8],0x0      ; 0049a32a | DAT_01c78ac8
    JNZ 0x0049a33e                      ; 0049a331
        ;   XREF to: 0049a33e (CONDITIONAL_JUMP)  ; LAB_0049a33e
    ADD ESP,0x150                       ; 0049a333
        ;   Label: LAB_0049a333
    POP EBP                             ; 0049a339
    POP EDI                             ; 0049a33a
    POP ESI                             ; 0049a33b
    POP EBX                             ; 0049a33c
    RET                                 ; 0049a33d
    PUSH 0x1d                           ; 0049a33e
        ;   Label: LAB_0049a33e
    MOV EAX,[0x005bac64]                ; 0049a340 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049a345 | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0049a346 | g_CKeys_01cc30e4
    CALL dword ptr [EDX]                ; 0049a348
    ADD ESP,0x8                         ; 0049a34a
    TEST EAX,EAX                        ; 0049a34d
    JZ 0x0049a37b                       ; 0049a34f
        ;   XREF to: 0049a37b (CONDITIONAL_JUMP)  ; LAB_0049a37b
    PUSH 0x2f                           ; 0049a351
    MOV EAX,[0x005bac64]                ; 0049a353 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049a358 | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0049a359 | g_CKeys_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049a35b
    ADD ESP,0x8                         ; 0049a35e
    TEST EAX,EAX                        ; 0049a361
    JZ 0x0049a37b                       ; 0049a363
        ;   XREF to: 0049a37b (CONDITIONAL_JUMP)  ; LAB_0049a37b
    MOV ECX,dword ptr [0x01c78acc]      ; 0049a365 | DAT_01c78acc
    TEST ECX,ECX                        ; 0049a36b
    JZ 0x0049a61d                       ; 0049a36d
        ;   XREF to: 0049a61d (CONDITIONAL_JUMP)  ; LAB_0049a61d
    XOR EDI,EDI                         ; 0049a373
    MOV dword ptr [0x01c78acc],EDI      ; 0049a375 | DAT_01c78acc
    MOV EBP,dword ptr [0x01c78ad0]      ; 0049a37b | DAT_01c78ad0
        ;   Label: LAB_0049a37b
    TEST EBP,EBP                        ; 0049a381
    JLE 0x0049a391                      ; 0049a383
        ;   XREF to: 0049a391 (CONDITIONAL_JUMP)  ; LAB_0049a391
    CMP EBP,dword ptr [0x01c78ad4]      ; 0049a385 | DAT_01c78ad4
    JLE 0x0049a633                      ; 0049a38b
        ;   XREF to: 0049a633 (CONDITIONAL_JUMP)  ; LAB_0049a633
    CMP dword ptr [0x01c78acc],0x0      ; 0049a391 | DAT_01c78acc
        ;   Label: LAB_0049a391
    JZ 0x0049a333                       ; 0049a398
        ;   XREF to: 0049a333 (CONDITIONAL_JUMP)  ; LAB_0049a333
    MOV EBX,dword ptr [0x01c78ad4]      ; 0049a39a | DAT_01c78ad4
    PUSH EBX                            ; 0049a3a0
    PUSH 0x582386                       ; 0049a3a1 | = "noc%05d.raw"
    LEA EAX,[ESP + 0xd0]                ; 0049a3a6
    PUSH EAX                            ; 0049a3ad
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049a3ae
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 0049a3b3
    LEA EAX,[ESP + 0xc8]                ; 0049a3b6
    PUSH EAX                            ; 0049a3bd
    PUSH 0x582392                       ; 0049a3be | = "Movie recording active: movie\\%s"
    LEA EAX,[ESP + 0x8]                 ; 0049a3c3
    PUSH EAX                            ; 0049a3c7
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049a3c8
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 0049a3cd
    PUSH 0x5823b3                       ; 0049a3d0 | = "wb"
    LEA EAX,[ESP + 0xcc]                ; 0049a3d5
    PUSH EAX                            ; 0049a3dc
    PUSH 0x5823b6                       ; 0049a3dd | = "movie"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 0049a3e2
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0049a3e7
    MOV dword ptr [ESP + 0x134],EAX     ; 0049a3ea
    TEST EAX,EAX                        ; 0049a3f1
    JZ 0x0049a333                       ; 0049a3f3
        ;   XREF to: 0049a333 (CONDITIONAL_JUMP)  ; LAB_0049a333
    XOR ESI,ESI                         ; 0049a3f9
    MOV EDI,dword ptr [0x005b9368]      ; 0049a3fb | DAT_005b9368
    MOV dword ptr [ESP + 0x130],ESI     ; 0049a401
    TEST EDI,EDI                        ; 0049a408
    JLE 0x0049a5e4                      ; 0049a40a
        ;   XREF to: 0049a5e4 (CONDITIONAL_JUMP)  ; LAB_0049a5e4
    XOR ESI,ESI                         ; 0049a410
        ;   Label: LAB_0049a410
    MOV EDI,dword ptr [0x005b9364]      ; 0049a412 | DAT_005b9364
    MOV dword ptr [ESP + 0x138],ESI     ; 0049a418
    TEST EDI,EDI                        ; 0049a41f
    JLE 0x0049a5c7                      ; 0049a421
        ;   XREF to: 0049a5c7 (CONDITIONAL_JUMP)  ; LAB_0049a5c7
    MOV EAX,dword ptr [ESP + 0x130]     ; 0049a427
    INC EAX                             ; 0049a42e
    MOV dword ptr [ESP + 0x12c],EAX     ; 0049a42f
    MOV EDX,dword ptr [ESP + 0x138]     ; 0049a436
        ;   Label: LAB_0049a436
    MOV ESI,dword ptr [0x005b761c]      ; 0049a43d | g_WindowWidth
    IMUL EDX,ESI                        ; 0049a443
    MOV EDI,dword ptr [0x005b9364]      ; 0049a446 | DAT_005b9364
    MOV EAX,EDX                         ; 0049a44c
    SAR EDX,0x1f                        ; 0049a44e
    IDIV EDI                            ; 0049a451
    MOV EDX,dword ptr [ESP + 0x138]     ; 0049a453
    INC EDX                             ; 0049a45a
    IMUL EDX,ESI                        ; 0049a45b
    MOV dword ptr [ESP + 0x140],EAX     ; 0049a45e
    MOV EAX,EDX                         ; 0049a465
    SAR EDX,0x1f                        ; 0049a467
    IDIV EDI                            ; 0049a46a
    MOV EBX,dword ptr [0x005b7620]      ; 0049a46c | g_WindowHeight
    MOV EDX,dword ptr [ESP + 0x130]     ; 0049a472
    IMUL EDX,EBX                        ; 0049a479
    MOV ESI,dword ptr [0x005b9368]      ; 0049a47c | DAT_005b9368
    MOV dword ptr [ESP + 0x148],EAX     ; 0049a482
    MOV EAX,EDX                         ; 0049a489
    SAR EDX,0x1f                        ; 0049a48b
    IDIV ESI                            ; 0049a48e
    MOV EDX,dword ptr [ESP + 0x12c]     ; 0049a490
    IMUL EDX,EBX                        ; 0049a497
    MOV ECX,EAX                         ; 0049a49a
    MOV EAX,EDX                         ; 0049a49c
    SAR EDX,0x1f                        ; 0049a49e
    IDIV ESI                            ; 0049a4a1
    XOR EDI,EDI                         ; 0049a4a3
    XOR EBX,EBX                         ; 0049a4a5
    MOV EDX,EAX                         ; 0049a4a7
    XOR EAX,EAX                         ; 0049a4a9
    XOR ESI,ESI                         ; 0049a4ab
    MOV dword ptr [ESP + 0x14c],EAX     ; 0049a4ad
    CMP ECX,EDX                         ; 0049a4b4
    JGE 0x0049a55d                      ; 0049a4b6
        ;   XREF to: 0049a55d (CONDITIONAL_JUMP)  ; LAB_0049a55d
    LEA EAX,[ECX*0x4 + 0x0]             ; 0049a4bc
    SHL EDX,0x2                         ; 0049a4c3
    MOV dword ptr [ESP + 0x144],EAX     ; 0049a4c6
    MOV dword ptr [ESP + 0x13c],EDX     ; 0049a4cd
    MOV EBP,dword ptr [ESP + 0x148]     ; 0049a4d4
        ;   Label: LAB_0049a4d4
    MOV ECX,dword ptr [ESP + 0x140]     ; 0049a4db
    CMP ECX,EBP                         ; 0049a4e2
    JGE 0x0049a53d                      ; 0049a4e4
        ;   XREF to: 0049a53d (CONDITIONAL_JUMP)  ; LAB_0049a53d
    MOV EAX,dword ptr [ESP + 0x144]     ; 0049a4e6
    LEA EDX,[ECX*0x4 + 0x0]             ; 0049a4ed
    MOV EAX,dword ptr [EAX + 0x1bd2fa0] ; 0049a4f4 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EDX,EAX                         ; 0049a4fa
    MOV EAX,dword ptr [EDX]             ; 0049a4fc
        ;   Label: LAB_0049a4fc
    MOV EBP,EAX                         ; 0049a4fe
    SHR EBP,0x10                        ; 0049a500
    AND EBP,0xff                        ; 0049a503
    ADD EDX,0x4                         ; 0049a509
    ADD EBX,EBP                         ; 0049a50c
    MOV EBP,EAX                         ; 0049a50e
    INC ECX                             ; 0049a510
    SHR EBP,0x8                         ; 0049a511
    AND EAX,0xff                        ; 0049a514
    ADD EDI,EAX                         ; 0049a519
    AND EBP,0xff                        ; 0049a51b
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0049a521
    INC EAX                             ; 0049a528
    ADD ESI,EBP                         ; 0049a529
    MOV EBP,dword ptr [ESP + 0x148]     ; 0049a52b
    MOV dword ptr [ESP + 0x14c],EAX     ; 0049a532
    CMP ECX,EBP                         ; 0049a539
    JL 0x0049a4fc                       ; 0049a53b
        ;   XREF to: 0049a4fc (CONDITIONAL_JUMP)  ; LAB_0049a4fc
    MOV EDX,dword ptr [ESP + 0x144]     ; 0049a53d
        ;   Label: LAB_0049a53d
    ADD EDX,0x4                         ; 0049a544
    MOV ECX,dword ptr [ESP + 0x13c]     ; 0049a547
    MOV dword ptr [ESP + 0x144],EDX     ; 0049a54e
    CMP EDX,ECX                         ; 0049a555
    JL 0x0049a4d4                       ; 0049a557
        ;   XREF to: 0049a4d4 (CONDITIONAL_JUMP)  ; LAB_0049a4d4
    MOV EBP,dword ptr [ESP + 0x14c]     ; 0049a55d
        ;   Label: LAB_0049a55d
    MOV EDX,EBX                         ; 0049a564
    MOV EAX,EBX                         ; 0049a566
    SAR EDX,0x1f                        ; 0049a568
    IDIV EBP                            ; 0049a56b
    MOV EBX,EAX                         ; 0049a56d
    MOV EDX,ESI                         ; 0049a56f
    MOV EAX,ESI                         ; 0049a571
    SAR EDX,0x1f                        ; 0049a573
    IDIV EBP                            ; 0049a576
    MOV ESI,EAX                         ; 0049a578
    MOV EDX,EDI                         ; 0049a57a
    MOV EAX,EDI                         ; 0049a57c
    SAR EDX,0x1f                        ; 0049a57e
    IDIV EBP                            ; 0049a581
    MOV EBP,dword ptr [ESP + 0x134]     ; 0049a583
    PUSH EBP                            ; 0049a58a
    PUSH EBX                            ; 0049a58b
    MOV EDI,EAX                         ; 0049a58c
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 0049a58e
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_00566cc0(int character, _FILE * file)
    ADD ESP,0x8                         ; 0049a593
    PUSH EBP                            ; 0049a596
    PUSH ESI                            ; 0049a597
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 0049a598
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_00566cc0(int character, _FILE * file)
    ADD ESP,0x8                         ; 0049a59d
    PUSH EBP                            ; 0049a5a0
    PUSH EDI                            ; 0049a5a1
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 0049a5a2
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_00566cc0(int character, _FILE * file)
    ADD ESP,0x8                         ; 0049a5a7
    MOV ECX,dword ptr [ESP + 0x138]     ; 0049a5aa
    INC ECX                             ; 0049a5b1
    MOV EBX,dword ptr [0x005b9364]      ; 0049a5b2 | DAT_005b9364
    MOV dword ptr [ESP + 0x138],ECX     ; 0049a5b8
    CMP ECX,EBX                         ; 0049a5bf
    JL 0x0049a436                       ; 0049a5c1
        ;   XREF to: 0049a436 (CONDITIONAL_JUMP)  ; LAB_0049a436
    MOV EAX,dword ptr [ESP + 0x130]     ; 0049a5c7
        ;   Label: LAB_0049a5c7
    INC EAX                             ; 0049a5ce
    MOV EDX,dword ptr [0x005b9368]      ; 0049a5cf | DAT_005b9368
    MOV dword ptr [ESP + 0x130],EAX     ; 0049a5d5
    CMP EAX,EDX                         ; 0049a5dc
    JL 0x0049a410                       ; 0049a5de
        ;   XREF to: 0049a410 (CONDITIONAL_JUMP)  ; LAB_0049a410
    MOV ECX,dword ptr [ESP + 0x134]     ; 0049a5e4
        ;   Label: LAB_0049a5e4
    PUSH ECX                            ; 0049a5eb
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0049a5ec
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 0049a5f1
    PUSH 0x0                            ; 0049a5f4
    PUSH 0x0                            ; 0049a5f6
    LEA EAX,[ESP + 0x8]                 ; 0049a5f8
    PUSH EAX                            ; 0049a5fc
    CALL engine_2d.c_drawText_FUN_00402600 ; 0049a5fd
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    MOV EBX,dword ptr [0x01c78ad4]      ; 0049a602 | DAT_01c78ad4
    INC EBX                             ; 0049a608
    ADD ESP,0xc                         ; 0049a609
    MOV dword ptr [0x01c78ad4],EBX      ; 0049a60c | DAT_01c78ad4
    ADD ESP,0x150                       ; 0049a612
    POP EBP                             ; 0049a618
    POP EDI                             ; 0049a619
    POP ESI                             ; 0049a61a
    POP EBX                             ; 0049a61b
    RET                                 ; 0049a61c
    MOV ESI,0x1                         ; 0049a61d
        ;   Label: LAB_0049a61d
    MOV dword ptr [0x01c78ad4],ECX      ; 0049a622 | DAT_01c78ad4
    MOV dword ptr [0x01c78acc],ESI      ; 0049a628 | DAT_01c78acc
    JMP 0x0049a37b                      ; 0049a62e
        ;   XREF to: 0049a37b (UNCONDITIONAL_JUMP)  ; LAB_0049a37b
    XOR EBP,EBP                         ; 0049a633
        ;   Label: LAB_0049a633
    MOV dword ptr [0x01c78acc],EBP      ; 0049a635 | DAT_01c78acc
    ADD ESP,0x150                       ; 0049a63b
    POP EBP                             ; 0049a641
    POP EDI                             ; 0049a642
    POP ESI                             ; 0049a643
    POP EBX                             ; 0049a644
    RET                                 ; 0049a645

