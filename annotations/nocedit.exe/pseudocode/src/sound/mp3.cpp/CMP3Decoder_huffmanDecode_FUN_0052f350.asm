; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_0052f350(CMP3Decoder * this_ptr, SHuffmanTable * huffman_table, int * x_out, int * y_out, int * v_out, int * w_out)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; SHuffmanTable *  Stack[0x8]:4   huffman_table
; int *            Stack[0xc]:4   x_out
; int *            Stack[0x10]:4   y_out
; int *            Stack[0x14]:4   v_out
; int *            Stack[0x18]:4   w_out
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680 at 00531804
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0063adf1
;   TerminatedCString s_Illegal_Huffman_code_in__0063ae02
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   char[256] g_CurrentMp3Filename
;   undefined4 g_HuffmanTables[0].table_size
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052f350
        ;   Label: sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
    PUSH ESI                            ; 0052f351
    PUSH EDI                            ; 0052f352
    PUSH EBP                            ; 0052f353
    SUB ESP,0x4                         ; 0052f354
    MOV EBP,dword ptr [ESP + 0x18]      ; 0052f357
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0052f35b
    MOV EDX,0x1                         ; 0052f35f
    MOV EDI,0x80000000                  ; 0052f364
    LEA EAX,[ESI + 0x20]                ; 0052f369
    XOR EBX,EBX                         ; 0052f36c
    MOV dword ptr [ESP],EDX             ; 0052f36e
    TEST EAX,EAX                        ; 0052f371
    JZ 0x0052f48b                       ; 0052f373
        ;   XREF to: 0052f48b (CONDITIONAL_JUMP)  ; LAB_0052f48b
    MOV ECX,dword ptr [ESI + 0x824]     ; 0052f379
    TEST ECX,ECX                        ; 0052f37f
    JZ 0x0052f498                       ; 0052f381
        ;   XREF to: 0052f498 (CONDITIONAL_JUMP)  ; LAB_0052f498
    LEA EAX,[EBX + EBX*0x1]             ; 0052f387
        ;   Label: LAB_0052f387
    ADD EAX,ESI                         ; 0052f38a
    CMP byte ptr [EAX + 0x20],0x0       ; 0052f38c
    JNZ 0x0052f4ae                      ; 0052f390
        ;   XREF to: 0052f4ae (CONDITIONAL_JUMP)  ; LAB_0052f4ae
    XOR EBX,EBX                         ; 0052f396
    MOV BL,byte ptr [EAX + 0x21]        ; 0052f398
    MOV EDI,dword ptr [ESP + 0x20]      ; 0052f39b
    SAR EBX,0x4                         ; 0052f39f
    MOV dword ptr [EDI],EBX             ; 0052f3a2
    MOV AL,byte ptr [EAX + 0x21]        ; 0052f3a4
    AND AL,0xf                          ; 0052f3a7
    MOV EBX,dword ptr [ESP + 0x24]      ; 0052f3a9
    AND EAX,0xff                        ; 0052f3ad
    MOV dword ptr [EBX],EAX             ; 0052f3b2
    XOR EBX,EBX                         ; 0052f3b4
    MOV dword ptr [ESP],EBX             ; 0052f3b6
    MOV DH,byte ptr [ESI]               ; 0052f3b9
        ;   Label: LAB_0052f3b9
    CMP DH,0x33                         ; 0052f3bb
    JNZ 0x0052f536                      ; 0052f3be
        ;   XREF to: 0052f536 (CONDITIONAL_JUMP)  ; LAB_0052f536
    MOV BL,byte ptr [ESI + 0x1]         ; 0052f3c4
    CMP BL,0x32                         ; 0052f3c7
    JNZ 0x0052f52e                      ; 0052f3ca
        ;   XREF to: 0052f52e (CONDITIONAL_JUMP)  ; LAB_0052f52e
    MOV EAX,dword ptr [ESP + 0x24]      ; 0052f3d0
        ;   Label: LAB_0052f3d0
    MOV EAX,dword ptr [EAX]             ; 0052f3d4
    SAR EAX,0x3                         ; 0052f3d6
    MOV EBX,dword ptr [ESP + 0x28]      ; 0052f3d9
    AND EAX,0x1                         ; 0052f3dd
    MOV dword ptr [EBX],EAX             ; 0052f3e0
    MOV EAX,dword ptr [ESP + 0x24]      ; 0052f3e2
    MOV EAX,dword ptr [EAX]             ; 0052f3e6
    SAR EAX,0x2                         ; 0052f3e8
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0052f3eb
    AND EAX,0x1                         ; 0052f3ef
    MOV dword ptr [EBX],EAX             ; 0052f3f2
    MOV EAX,dword ptr [ESP + 0x24]      ; 0052f3f4
    MOV EAX,dword ptr [EAX]             ; 0052f3f8
    SAR EAX,0x1                         ; 0052f3fa
    MOV EBX,dword ptr [ESP + 0x20]      ; 0052f3fc
    AND EAX,0x1                         ; 0052f400
    MOV dword ptr [EBX],EAX             ; 0052f403
    MOV EAX,dword ptr [ESP + 0x24]      ; 0052f405
    AND dword ptr [EAX],0x1             ; 0052f409
    MOV EAX,dword ptr [ESP + 0x28]      ; 0052f40c
    CMP dword ptr [EAX],0x0             ; 0052f410
    JZ 0x0052f429                       ; 0052f413
        ;   XREF to: 0052f429 (CONDITIONAL_JUMP)  ; LAB_0052f429
    PUSH EBP                            ; 0052f415
    CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250 ; 0052f416
        ;   XREF to: 0052f250 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0052f41b
    CMP EAX,0x1                         ; 0052f41e
    JNZ 0x0052f429                      ; 0052f421
        ;   XREF to: 0052f429 (CONDITIONAL_JUMP)  ; LAB_0052f429
    MOV EAX,dword ptr [ESP + 0x28]      ; 0052f423
    NEG dword ptr [EAX]                 ; 0052f427
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0052f429
        ;   Label: LAB_0052f429
    CMP dword ptr [EAX],0x0             ; 0052f42d
    JZ 0x0052f446                       ; 0052f430
        ;   XREF to: 0052f446 (CONDITIONAL_JUMP)  ; LAB_0052f446
    PUSH EBP                            ; 0052f432
    CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250 ; 0052f433
        ;   XREF to: 0052f250 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0052f438
    CMP EAX,0x1                         ; 0052f43b
    JNZ 0x0052f446                      ; 0052f43e
        ;   XREF to: 0052f446 (CONDITIONAL_JUMP)  ; LAB_0052f446
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0052f440
    NEG dword ptr [EAX]                 ; 0052f444
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052f446
        ;   Label: LAB_0052f446
    CMP dword ptr [EAX],0x0             ; 0052f44a
    JZ 0x0052f463                       ; 0052f44d
        ;   XREF to: 0052f463 (CONDITIONAL_JUMP)  ; LAB_0052f463
    PUSH EBP                            ; 0052f44f
    CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250 ; 0052f450
        ;   XREF to: 0052f250 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0052f455
    CMP EAX,0x1                         ; 0052f458
    JNZ 0x0052f463                      ; 0052f45b
        ;   XREF to: 0052f463 (CONDITIONAL_JUMP)  ; LAB_0052f463
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052f45d
    NEG dword ptr [EAX]                 ; 0052f461
    MOV EAX,dword ptr [ESP + 0x24]      ; 0052f463
        ;   Label: LAB_0052f463
    CMP dword ptr [EAX],0x0             ; 0052f467
    JZ 0x0052f480                       ; 0052f46a
        ;   XREF to: 0052f480 (CONDITIONAL_JUMP)  ; LAB_0052f480
    PUSH EBP                            ; 0052f46c
    CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250 ; 0052f46d
        ;   XREF to: 0052f250 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0052f472
    CMP EAX,0x1                         ; 0052f475
    JNZ 0x0052f480                      ; 0052f478
        ;   XREF to: 0052f480 (CONDITIONAL_JUMP)  ; LAB_0052f480
    MOV EAX,dword ptr [ESP + 0x24]      ; 0052f47a
    NEG dword ptr [EAX]                 ; 0052f47e
    MOV EAX,dword ptr [ESP]             ; 0052f480
        ;   Label: LAB_0052f480
    ADD ESP,0x4                         ; 0052f483
    POP EBP                             ; 0052f486
    POP EDI                             ; 0052f487
    POP ESI                             ; 0052f488
    POP EBX                             ; 0052f489
    RET                                 ; 0052f48a
    MOV EAX,0x2                         ; 0052f48b
        ;   Label: LAB_0052f48b
    ADD ESP,0x4                         ; 0052f490
    POP EBP                             ; 0052f493
    POP EDI                             ; 0052f494
    POP ESI                             ; 0052f495
    POP EBX                             ; 0052f496
    RET                                 ; 0052f497
    MOV EAX,dword ptr [ESP + 0x24]      ; 0052f498
        ;   Label: LAB_0052f498
    MOV dword ptr [EAX],EBX             ; 0052f49c
    MOV EAX,EBX                         ; 0052f49e
    MOV EBX,dword ptr [ESP + 0x20]      ; 0052f4a0
    MOV dword ptr [EBX],ECX             ; 0052f4a4
    ADD ESP,0x4                         ; 0052f4a6
    POP EBP                             ; 0052f4a9
    POP EDI                             ; 0052f4aa
    POP ESI                             ; 0052f4ab
    POP EBX                             ; 0052f4ac
    RET                                 ; 0052f4ad
    PUSH EBP                            ; 0052f4ae
        ;   Label: LAB_0052f4ae
    CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250 ; 0052f4af
        ;   XREF to: 0052f250 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0052f4b4
    TEST EAX,EAX                        ; 0052f4b7
    JZ 0x0052f51a                       ; 0052f4b9
        ;   XREF to: 0052f51a (CONDITIONAL_JUMP)  ; LAB_0052f51a
    MOV AL,byte ptr [ESI + EBX*0x2 + 0x21] ; 0052f4bb
        ;   Label: LAB_0052f4bb
    AND EAX,0xff                        ; 0052f4bf
    ADD EBX,EAX                         ; 0052f4c4
    CMP EAX,0xfa                        ; 0052f4c6
    JGE 0x0052f4bb                      ; 0052f4cb
        ;   XREF to: 0052f4bb (CONDITIONAL_JUMP)  ; LAB_0052f4bb
    SHR EDI,0x1                         ; 0052f4cd
        ;   Label: LAB_0052f4cd
    TEST EDI,EDI                        ; 0052f4cf
    JNZ 0x0052f387                      ; 0052f4d1
        ;   XREF to: 0052f387 (CONDITIONAL_JUMP)  ; LAB_0052f387
    CMP EBX,dword ptr [0x02f68aac]      ; 0052f4d7 | g_HuffmanTables[0].table_size
    JC 0x0052f387                       ; 0052f4dd
        ;   XREF to: 0052f387 (CONDITIONAL_JUMP)  ; LAB_0052f387
    CMP dword ptr [ESP],0x0             ; 0052f4e3
    JZ 0x0052f3b9                       ; 0052f4e7
        ;   XREF to: 0052f3b9 (CONDITIONAL_JUMP)  ; LAB_0052f3b9
    PUSH 0x2f68188                      ; 0052f4ed | g_CurrentMp3Filename
    MOV ECX,0x63adf1                    ; 0052f4f2 | = "..\\sound\\mp3.cpp"
    MOV EBX,0x321                       ; 0052f4f7
    PUSH 0x63ae02                       ; 0052f4fc | = "Illegal Huffman code in data.  File: %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 0052f501 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0052f507 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052f50d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0052f512
    JMP 0x0052f3b9                      ; 0052f515
        ;   XREF to: 0052f3b9 (UNCONDITIONAL_JUMP)  ; LAB_0052f3b9
    MOV AL,byte ptr [ESI + EBX*0x2 + 0x20] ; 0052f51a
        ;   Label: LAB_0052f51a
    AND EAX,0xff                        ; 0052f51e
    ADD EBX,EAX                         ; 0052f523
    CMP EAX,0xfa                        ; 0052f525
    JGE 0x0052f51a                      ; 0052f52a
        ;   XREF to: 0052f51a (CONDITIONAL_JUMP)  ; LAB_0052f51a
    JMP 0x0052f4cd                      ; 0052f52c
        ;   XREF to: 0052f4cd (UNCONDITIONAL_JUMP)  ; LAB_0052f4cd
    CMP BL,DH                           ; 0052f52e
        ;   Label: LAB_0052f52e
    JZ 0x0052f3d0                       ; 0052f530
        ;   XREF to: 0052f3d0 (CONDITIONAL_JUMP)  ; LAB_0052f3d0
    MOV EDI,dword ptr [ESI + 0xc]       ; 0052f536
        ;   Label: LAB_0052f536
    TEST EDI,EDI                        ; 0052f539
    JZ 0x0052f559                       ; 0052f53b
        ;   XREF to: 0052f559 (CONDITIONAL_JUMP)  ; LAB_0052f559
    MOV EAX,dword ptr [ESI + 0x4]       ; 0052f53d
    MOV EBX,dword ptr [ESP + 0x20]      ; 0052f540
    DEC EAX                             ; 0052f544
    CMP EAX,dword ptr [EBX]             ; 0052f545
    JNZ 0x0052f559                      ; 0052f547
        ;   XREF to: 0052f559 (CONDITIONAL_JUMP)  ; LAB_0052f559
    PUSH EDI                            ; 0052f549
    PUSH EBP                            ; 0052f54a
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170 ; 0052f54b
        ;   XREF to: 0052f170 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170(CMP3Decoder * this_ptr, uint num_bits)
    MOV EDI,dword ptr [EBX]             ; 0052f550
    ADD EDI,EAX                         ; 0052f552
    ADD ESP,0x8                         ; 0052f554
    MOV dword ptr [EBX],EDI             ; 0052f557
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052f559
        ;   Label: LAB_0052f559
    CMP dword ptr [EAX],0x0             ; 0052f55d
    JZ 0x0052f576                       ; 0052f560
        ;   XREF to: 0052f576 (CONDITIONAL_JUMP)  ; LAB_0052f576
    PUSH EBP                            ; 0052f562
    CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250 ; 0052f563
        ;   XREF to: 0052f250 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0052f568
    CMP EAX,0x1                         ; 0052f56b
    JNZ 0x0052f576                      ; 0052f56e
        ;   XREF to: 0052f576 (CONDITIONAL_JUMP)  ; LAB_0052f576
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052f570
    NEG dword ptr [EAX]                 ; 0052f574
    CMP dword ptr [ESI + 0xc],0x0       ; 0052f576
        ;   Label: LAB_0052f576
    JZ 0x0052f463                       ; 0052f57a
        ;   XREF to: 0052f463 (CONDITIONAL_JUMP)  ; LAB_0052f463
    MOV EAX,dword ptr [ESI + 0x8]       ; 0052f580
    MOV EBX,dword ptr [ESP + 0x24]      ; 0052f583
    DEC EAX                             ; 0052f587
    CMP EAX,dword ptr [EBX]             ; 0052f588
    JNZ 0x0052f463                      ; 0052f58a
        ;   XREF to: 0052f463 (CONDITIONAL_JUMP)  ; LAB_0052f463
    MOV EAX,dword ptr [ESI + 0xc]       ; 0052f590
    PUSH EAX                            ; 0052f593
    PUSH EBP                            ; 0052f594
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170 ; 0052f595
        ;   XREF to: 0052f170 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170(CMP3Decoder * this_ptr, uint num_bits)
    MOV EDX,dword ptr [EBX]             ; 0052f59a
    ADD EDX,EAX                         ; 0052f59c
    ADD ESP,0x8                         ; 0052f59e
    MOV dword ptr [EBX],EDX             ; 0052f5a1
    JMP 0x0052f463                      ; 0052f5a3
        ;   XREF to: 0052f463 (UNCONDITIONAL_JUMP)  ; LAB_0052f463

