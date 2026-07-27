; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_mp3_cpp_FUN_004e5200(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)
;
; Local Variables:
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
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 at 004e90c8
;
; Referenced Globals:
;   TerminatedCString s_d_0058b77c
;   TerminatedCString s_u_0058b77f
;   TerminatedCString s_sound_mp3_cpp_0058b782
;   TerminatedCString s_wrong_table_number_u_Fil_0058b793
;   TerminatedCString s_sound_mp3_cpp_0058b7b4
;   TerminatedCString s_wrong_table_u_reference_0058b7c5
;   TerminatedCString s_sound_mp3_cpp_0058b7e9
;   TerminatedCString s_MP3_Huffman_tree_overflo_0058b7fa
;   TerminatedCString s_sound_mp3_cpp_0058b81f
;   TerminatedCString s_huffman_decodertable_err_0058b830
;   TerminatedCString s_sound_mp3_cpp_0058b862
;   TerminatedCString s_decoder_table_read_error_0058b873
;   undefined4 DAT_005bc0fc
;   undefined4 DAT_005bc100
;   undefined4 DAT_005bdba0
;   ... and 9 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdio.c_sscanf_FUN_00566b5c
;   sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0
;   sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0
;   sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_004e2e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5200
        ;   Label: sound_mp3.cpp_FUN_004e5200
    PUSH ESI                            ; 004e5201
    PUSH EDI                            ; 004e5202
    PUSH EBP                            ; 004e5203
    SUB ESP,0x38                        ; 004e5204
    MOV ECX,dword ptr [ESP + 0x64]      ; 004e5207
    MOV ECX,dword ptr [ECX]             ; 004e520b
    MOV EDX,dword ptr [ECX]             ; 004e520d
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e520f
    SUB EAX,EDX                         ; 004e5216
    MOV EDX,dword ptr [ECX + 0x10]      ; 004e5218
    ADD EDX,EAX                         ; 004e521b
    MOV dword ptr [ESP + 0x14],EDX      ; 004e521d
    MOV EDX,dword ptr [0x01cd6320]      ; 004e5221 | DAT_01cd6320
    TEST EDX,EDX                        ; 004e5227
    JZ 0x004e5460                       ; 004e5229
        ;   XREF to: 004e5460 (CONDITIONAL_JUMP)  ; LAB_004e5460
    MOV EDX,dword ptr [ESP + 0x58]      ; 004e522f
        ;   Label: LAB_004e522f
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e5233
    ADD EAX,EDX                         ; 004e523a
    MOV ECX,dword ptr [ESP + 0x54]      ; 004e523c
    SHL EAX,0x5                         ; 004e5240
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004e5243
    ADD ECX,EAX                         ; 004e5247
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e5249
    ADD EAX,EDX                         ; 004e5250
    SHL EAX,0x3                         ; 004e5252
    ADD EAX,ECX                         ; 004e5255
    CMP dword ptr [EAX + 0x28],0x0      ; 004e5257
    JZ 0x004e56c4                       ; 004e525b
        ;   XREF to: 004e56c4 (CONDITIONAL_JUMP)  ; LAB_004e56c4
    CMP dword ptr [EAX + 0x2c],0x2      ; 004e5261
    JNZ 0x004e56c4                      ; 004e5265
        ;   XREF to: 004e56c4 (CONDITIONAL_JUMP)  ; LAB_004e56c4
    MOV EBX,0x24                        ; 004e526b
    MOV EBP,0x240                       ; 004e5270
    MOV dword ptr [ESP + 0x28],EBX      ; 004e5275
    MOV EDX,dword ptr [ESP + 0x58]      ; 004e5279
        ;   Label: LAB_004e5279
    MOV EBX,dword ptr [ESP + 0x54]      ; 004e527d
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004e5281
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e5285
    PUSH ESI                            ; 004e528c
    ADD EAX,EDX                         ; 004e528d
    XOR ESI,ESI                         ; 004e528f
    MOV EDX,dword ptr [ESP + 0x60]      ; 004e5291
    SHL EAX,0x5                         ; 004e5295
    LEA EDI,[EDX*0x8 + 0x0]             ; 004e5298
    ADD EBX,EAX                         ; 004e529f
    ADD EDI,EDX                         ; 004e52a1
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0 ; 004e52a3
        ;   XREF to: 004e2ce0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0()
    ADD ESP,0x4                         ; 004e52a8
    SHL EDI,0x3                         ; 004e52ab
    MOV dword ptr [ESP + 0x24],EBX      ; 004e52ae
    MOV dword ptr [ESP + 0x18],EDI      ; 004e52b2
    MOV EBX,0x1                         ; 004e52b6
    MOV EDI,dword ptr [ESP + 0x24]      ; 004e52bb
        ;   Label: LAB_004e52bb
    ADD EDI,dword ptr [ESP + 0x18]      ; 004e52bf
    MOV EAX,dword ptr [EDI + 0x1c]      ; 004e52c3
    ADD EAX,EAX                         ; 004e52c6
    CMP ESI,EAX                         ; 004e52c8
    JC 0x004e5720                       ; 004e52ca
        ;   XREF to: 004e5720 (CONDITIONAL_JUMP)  ; LAB_004e5720
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004e52d0
    PUSH EDX                            ; 004e52d4
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0 ; 004e52d5
        ;   XREF to: 004e2ce0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0()
    MOV EDX,dword ptr [EDI + 0x5c]      ; 004e52da
    ADD EDX,0x20                        ; 004e52dd
    MOV EAX,EDX                         ; 004e52e0
    SHL EAX,0x6                         ; 004e52e2
    ADD EAX,EDX                         ; 004e52e5
    SHL EAX,0x2                         ; 004e52e7
    ADD EAX,EDX                         ; 004e52ea
    MOV EDX,0x1cd8c28                   ; 004e52ec
    SHL EAX,0x3                         ; 004e52f1
    ADD ESP,0x4                         ; 004e52f4
    ADD EDX,EAX                         ; 004e52f7
    MOV dword ptr [ESP + 0x20],EDX      ; 004e52f9
    MOV EDX,dword ptr [ESP + 0x58]      ; 004e52fd
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e5301
    ADD EAX,EDX                         ; 004e5308
    MOV ECX,dword ptr [ESP + 0x54]      ; 004e530a
    SHL EAX,0x5                         ; 004e530e
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004e5311
    ADD ECX,EAX                         ; 004e5315
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e5317
    ADD EAX,EDX                         ; 004e531e
    LEA EDI,[ESI + 0x3]                 ; 004e5320
    SHL EAX,0x3                         ; 004e5323
    LEA EBP,[ESI + 0x2]                 ; 004e5326
    ADD ECX,EAX                         ; 004e5329
    LEA EBX,[ESI + 0x1]                 ; 004e532b
    MOV dword ptr [ESP + 0x1c],ECX      ; 004e532e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e5332
        ;   Label: LAB_004e5332
    MOV EAX,dword ptr [ESP + 0x60]      ; 004e5336
    MOV ECX,dword ptr [EDX + 0x18]      ; 004e533a
    ADD EAX,ECX                         ; 004e533d
    MOV dword ptr [ESP + 0x34],EAX      ; 004e533f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004e5343
    PUSH EAX                            ; 004e5347
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0 ; 004e5348
        ;   XREF to: 004e2ce0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0()
    ADD ESP,0x4                         ; 004e534d
    CMP EAX,dword ptr [ESP + 0x34]      ; 004e5350
    JNC 0x004e57cc                      ; 004e5354
        ;   XREF to: 004e57cc (CONDITIONAL_JUMP)  ; LAB_004e57cc
    CMP ESI,0x240                       ; 004e535a
    JGE 0x004e57cc                      ; 004e5360
        ;   XREF to: 004e57cc (CONDITIONAL_JUMP)  ; LAB_004e57cc
    LEA EAX,[ESP + 0xc]                 ; 004e5366
    PUSH EAX                            ; 004e536a
    LEA EAX,[ESP + 0xc]                 ; 004e536b
    PUSH EAX                            ; 004e536f
    LEA EAX,[ESP + 0xc]                 ; 004e5370
    PUSH EAX                            ; 004e5374
    LEA EAX,[ESP + 0xc]                 ; 004e5375
    PUSH EAX                            ; 004e5379
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e537a
    PUSH EAX                            ; 004e537e
    MOV EDX,dword ptr [ESP + 0x60]      ; 004e537f
    PUSH EDX                            ; 004e5383
    CALL sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0 ; 004e5384
        ;   XREF to: 004e2ed0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0()
    MOV ECX,0x12                        ; 004e5389
    MOV EDX,ESI                         ; 004e538e
    MOV EAX,ESI                         ; 004e5390
    SAR EDX,0x1f                        ; 004e5392
    IDIV ECX                            ; 004e5395
    IMUL EAX,EAX,0x48                   ; 004e5397
    ADD ESP,0x18                        ; 004e539a
    MOV dword ptr [ESP + 0x34],0x12     ; 004e539d
    MOV EDX,ESI                         ; 004e53a5
    MOV ECX,dword ptr [ESP + 0x50]      ; 004e53a7
    SAR EDX,0x1f                        ; 004e53ab
    ADD ECX,EAX                         ; 004e53ae
    MOV EAX,ESI                         ; 004e53b0
    IDIV dword ptr [ESP + 0x34]         ; 004e53b2
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e53b6
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 004e53ba
    MOV ECX,0x12                        ; 004e53bd
    MOV EDX,EBX                         ; 004e53c2
    MOV EAX,EBX                         ; 004e53c4
    SAR EDX,0x1f                        ; 004e53c6
    IDIV ECX                            ; 004e53c9
    IMUL EAX,EAX,0x48                   ; 004e53cb
    MOV dword ptr [ESP + 0x34],0x12     ; 004e53ce
    MOV EDX,EBX                         ; 004e53d6
    MOV ECX,dword ptr [ESP + 0x50]      ; 004e53d8
    SAR EDX,0x1f                        ; 004e53dc
    ADD ECX,EAX                         ; 004e53df
    MOV EAX,EBX                         ; 004e53e1
    IDIV dword ptr [ESP + 0x34]         ; 004e53e3
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e53e7
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 004e53eb
    MOV ECX,0x12                        ; 004e53ee
    MOV EDX,EBP                         ; 004e53f3
    MOV EAX,EBP                         ; 004e53f5
    SAR EDX,0x1f                        ; 004e53f7
    IDIV ECX                            ; 004e53fa
    IMUL EAX,EAX,0x48                   ; 004e53fc
    MOV dword ptr [ESP + 0x34],0x12     ; 004e53ff
    MOV EDX,EBP                         ; 004e5407
    MOV ECX,dword ptr [ESP + 0x50]      ; 004e5409
    SAR EDX,0x1f                        ; 004e540d
    ADD ECX,EAX                         ; 004e5410
    MOV EAX,EBP                         ; 004e5412
    IDIV dword ptr [ESP + 0x34]         ; 004e5414
    MOV EAX,dword ptr [ESP]             ; 004e5418
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 004e541b
    MOV ECX,0x12                        ; 004e541e
    MOV EDX,EDI                         ; 004e5423
    MOV EAX,EDI                         ; 004e5425
    SAR EDX,0x1f                        ; 004e5427
    IDIV ECX                            ; 004e542a
    IMUL EAX,EAX,0x48                   ; 004e542c
    MOV dword ptr [ESP + 0x34],0x12     ; 004e542f
    MOV EDX,EDI                         ; 004e5437
    MOV ECX,dword ptr [ESP + 0x50]      ; 004e5439
    SAR EDX,0x1f                        ; 004e543d
    ADD ECX,EAX                         ; 004e5440
    MOV EAX,EDI                         ; 004e5442
    IDIV dword ptr [ESP + 0x34]         ; 004e5444
    ADD ESI,0x4                         ; 004e5448
    ADD EBX,0x4                         ; 004e544b
    ADD EBP,0x4                         ; 004e544e
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e5451
    ADD EDI,0x4                         ; 004e5455
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 004e5458
    JMP 0x004e5332                      ; 004e545b
        ;   XREF to: 004e5332 (UNCONDITIONAL_JUMP)  ; LAB_004e5332
    MOV ECX,0x1cd8c28                   ; 004e5460
        ;   Label: LAB_004e5460
    MOV dword ptr [ESP + 0x30],EDX      ; 004e5465
    XOR EBX,EBX                         ; 004e5469
    XOR EBP,EBP                         ; 004e546b
    MOV dword ptr [ESP + 0x2c],ECX      ; 004e546d
    PUSH EBP                            ; 004e5471
        ;   Label: LAB_004e5471
    PUSH 0x58b77c                       ; 004e5472 | = "%d"
    MOV EDI,dword ptr [ESP + 0x34]      ; 004e5477
    PUSH EDI                            ; 004e547b
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004e547c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004e5481
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e5484
    MOV EAX,dword ptr [EAX + 0x5bdba0]  ; 004e5488 | DAT_005bdba0
    MOV dword ptr [EBX + 0x1cd944c],EAX ; 004e548e | DAT_01cd944c
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e5494
    MOV EAX,dword ptr [EAX + 0x5bdba4]  ; 004e5498 | DAT_005bdba4
    MOV dword ptr [EBX + 0x1cd8c2c],EAX ; 004e549e
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e54a4
    MOV EAX,dword ptr [EAX + 0x5bdba8]  ; 004e54a8 | DAT_005bdba8
    MOV dword ptr [EBX + 0x1cd8c30],EAX ; 004e54ae
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e54b4
    MOV EAX,dword ptr [EAX + 0x5bdbac]  ; 004e54b8 | DAT_005bdbac
    MOV dword ptr [EBX + 0x1cd8c34],EAX ; 004e54be
    MOV EAX,0x1                         ; 004e54c4
    MOV CL,byte ptr [EBX + 0x1cd8c34]   ; 004e54c9
    SHL EAX,CL                          ; 004e54cf
    DEC EAX                             ; 004e54d1
    MOV dword ptr [EBX + 0x1cd8c38],EAX ; 004e54d2
    LEA EAX,[ESP + 0x10]                ; 004e54d8
    PUSH EAX                            ; 004e54dc
    PUSH 0x58b77f                       ; 004e54dd | = "%u"
    PUSH EDI                            ; 004e54e2
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 004e54e3
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0xc                         ; 004e54e8
    CMP EBP,dword ptr [ESP + 0x10]      ; 004e54eb
    JZ 0x004e551a                       ; 004e54ef
        ;   XREF to: 004e551a (CONDITIONAL_JUMP)  ; LAB_004e551a
    PUSH 0x1cd8b28                      ; 004e54f1
    PUSH EBP                            ; 004e54f6
    MOV ECX,0x58b782                    ; 004e54f7 | = "..\\sound\\mp3.cpp"
    MOV ESI,0xd6b                       ; 004e54fc
    PUSH 0x58b793                       ; 004e5501 | = "wrong table number %u.  File: %s"
    MOV dword ptr [0x01cc4800],ECX      ; 004e5506 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004e550c | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e5512
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 004e5517
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e551a
        ;   Label: LAB_004e551a
    MOV EAX,dword ptr [EAX + 0x5bdbb0]  ; 004e551e | DAT_005bdbb0
    TEST EAX,EAX                        ; 004e5524
    JL 0x004e561d                       ; 004e5526
        ;   XREF to: 004e561d (CONDITIONAL_JUMP)  ; LAB_004e561d
    MOV dword ptr [EBX + 0x1cd8c3c],EAX ; 004e552c
    IMUL EDX,EAX,0x828                  ; 004e5532
    MOV ESI,0x1cd8c28                   ; 004e5538
    MOV EDI,0x1cd8c28                   ; 004e553d
    MOV ECX,0x802                       ; 004e5542
    ADD EDI,EBX                         ; 004e5547
    ADD ESI,EDX                         ; 004e5549
    ADD EDI,0x20                        ; 004e554b
    ADD ESI,0x20                        ; 004e554e
    PUSH EDI                            ; 004e5551
    MOV EAX,ECX                         ; 004e5552
    SHR ECX,0x2                         ; 004e5554
    MOVSD.REP ES:EDI,ESI                ; 004e5557
    MOV CL,AL                           ; 004e5559
    AND CL,0x3                          ; 004e555b
    MOVSB.REP ES:EDI,ESI                ; 004e555e
    POP EDI                             ; 004e5560
    MOV EAX,dword ptr [EDX + 0x1cd944c] ; 004e5561 | DAT_01cd944c
    MOV dword ptr [EBX + 0x1cd944c],EAX ; 004e5567 | DAT_01cd944c
    MOV EAX,dword ptr [EBX + 0x1cd8c2c] ; 004e556d
    CMP EAX,dword ptr [EDX + 0x1cd8c2c] ; 004e5573
    JZ 0x004e5609                       ; 004e5579
        ;   XREF to: 004e5609 (CONDITIONAL_JUMP)  ; LAB_004e5609
    PUSH 0x1cd8b28                      ; 004e557f
        ;   Label: LAB_004e557f
    PUSH EBP                            ; 004e5584
    MOV EDI,0x58b7b4                    ; 004e5585 | = "..\\sound\\mp3.cpp"
    MOV EAX,0xd76                       ; 004e558a
    PUSH 0x58b7c5                       ; 004e558f | = "wrong table %u reference.  File: %s"
    MOV dword ptr [0x01cc4800],EDI      ; 004e5594 | PTR_01cc4800
        ;   Label: LAB_004e5594
    MOV [0x01cc4804],EAX                ; 004e559a | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e559f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 004e55a4
    MOV ESI,dword ptr [ESP + 0x30]      ; 004e55a7
        ;   Label: LAB_004e55a7
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004e55ab
    ADD EBX,0x828                       ; 004e55af
    INC EBP                             ; 004e55b5
    ADD ESI,0x18                        ; 004e55b6
    ADD ECX,0x828                       ; 004e55b9
    MOV dword ptr [ESP + 0x30],ESI      ; 004e55bf
    MOV dword ptr [ESP + 0x2c],ECX      ; 004e55c3
    CMP EBP,0x22                        ; 004e55c7
    JL 0x004e5471                       ; 004e55ca
        ;   XREF to: 004e5471 (CONDITIONAL_JUMP)  ; LAB_004e5471
    JZ 0x004e55fa                       ; 004e55d0
        ;   XREF to: 004e55fa (CONDITIONAL_JUMP)  ; LAB_004e55fa
    PUSH 0x1cd8b28                      ; 004e55d2
    MOV EDI,0x58b862                    ; 004e55d7 | = "..\\sound\\mp3.cpp"
    MOV EBP,0xda1                       ; 004e55dc
    PUSH 0x58b873                       ; 004e55e1 | = "decoder table read error.  File: %s"
    MOV dword ptr [0x01cc4800],EDI      ; 004e55e6 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004e55ec | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e55f2
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004e55f7
    MOV dword ptr [0x01cd6320],0x1      ; 004e55fa | DAT_01cd6320
        ;   Label: LAB_004e55fa
    JMP 0x004e522f                      ; 004e5604
        ;   XREF to: 004e522f (UNCONDITIONAL_JUMP)  ; LAB_004e522f
    MOV ESI,dword ptr [EDX + 0x1cd8c30] ; 004e5609
        ;   Label: LAB_004e5609
    CMP ESI,dword ptr [EBX + 0x1cd8c30] ; 004e560f
    JNZ 0x004e557f                      ; 004e5615
        ;   XREF to: 004e557f (CONDITIONAL_JUMP)  ; LAB_004e557f
    JMP 0x004e55a7                      ; 004e561b
        ;   XREF to: 004e55a7 (UNCONDITIONAL_JUMP)  ; LAB_004e55a7
    CMP EAX,-0x1                        ; 004e561d
        ;   Label: LAB_004e561d
    JNZ 0x004e56aa                      ; 004e5620
        ;   XREF to: 004e56aa (CONDITIONAL_JUMP)  ; LAB_004e56aa
    MOV ECX,dword ptr [EBX + 0x1cd944c] ; 004e5626 | DAT_01cd944c
    MOV dword ptr [EBX + 0x1cd8c3c],EAX ; 004e562c
    CMP ECX,0x401                       ; 004e5632
    JC 0x004e5662                       ; 004e5638
        ;   XREF to: 004e5662 (CONDITIONAL_JUMP)  ; LAB_004e5662
    PUSH 0x1cd8b28                      ; 004e563a
    MOV ESI,0x58b7e9                    ; 004e563f | = "..\\sound\\mp3.cpp"
    MOV EDI,0xd7e                       ; 004e5644
    PUSH 0x58b7fa                       ; 004e5649 | = "MP3 Huffman tree overflow!  File: %s"
    MOV dword ptr [0x01cc4800],ESI      ; 004e564e | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004e5654 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e565a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004e565f
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e5662
        ;   Label: LAB_004e5662
    MOV EDI,EBX                         ; 004e5666
    MOV ECX,EBX                         ; 004e5668
    MOV EDX,dword ptr [EBX + 0x1cd944c] ; 004e566a | DAT_01cd944c
    XOR ESI,ESI                         ; 004e5670
    MOV EAX,dword ptr [EAX + 0x5bdbb4]  ; 004e5672 | DAT_005bdbb4
    TEST EDX,EDX                        ; 004e5678
    JBE 0x004e55a7                      ; 004e567a
        ;   XREF to: 004e55a7 (CONDITIONAL_JUMP)  ; LAB_004e55a7
    MOV EDX,EAX                         ; 004e5680
        ;   Label: LAB_004e5680
    MOV DL,byte ptr [EDX]               ; 004e5682
    INC EAX                             ; 004e5684
    MOV byte ptr [ECX + 0x1cd8c48],DL   ; 004e5685
    MOV EDX,EAX                         ; 004e568b
    ADD ECX,0x2                         ; 004e568d
    MOV DL,byte ptr [EDX]               ; 004e5690
    MOV byte ptr [ECX + 0x1cd8c47],DL   ; 004e5692
    INC ESI                             ; 004e5698
    MOV EDX,dword ptr [EDI + 0x1cd944c] ; 004e5699 | DAT_01cd944c
    INC EAX                             ; 004e569f
    CMP ESI,EDX                         ; 004e56a0
    JNC 0x004e55a7                      ; 004e56a2
        ;   XREF to: 004e55a7 (CONDITIONAL_JUMP)  ; LAB_004e55a7
    JMP 0x004e5680                      ; 004e56a8
        ;   XREF to: 004e5680 (UNCONDITIONAL_JUMP)  ; LAB_004e5680
    PUSH 0x1cd8b28                      ; 004e56aa
        ;   Label: LAB_004e56aa
    PUSH EBP                            ; 004e56af
    MOV EDI,0x58b81f                    ; 004e56b0 | = "..\\sound\\mp3.cpp"
    MOV EAX,0xd8d                       ; 004e56b5
    PUSH 0x58b830                       ; 004e56ba | = "huffman decodertable error at table %..."
    JMP 0x004e5594                      ; 004e56bf
        ;   XREF to: 004e5594 (UNCONDITIONAL_JUMP)  ; LAB_004e5594
    MOV EDX,dword ptr [ESP + 0x58]      ; 004e56c4
        ;   Label: LAB_004e56c4
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e56c8
    ADD EAX,EDX                         ; 004e56cf
    MOV ECX,dword ptr [ESP + 0x54]      ; 004e56d1
    SHL EAX,0x5                         ; 004e56d5
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004e56d8
    ADD ECX,EAX                         ; 004e56dc
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e56de
    ADD EAX,EDX                         ; 004e56e5
    SHL EAX,0x3                         ; 004e56e7
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e56ea
    ADD ECX,EAX                         ; 004e56ee
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e56f0
    ADD EAX,EDX                         ; 004e56f7
    SHL EAX,0x2                         ; 004e56f9
    ADD EAX,EDX                         ; 004e56fc
    MOV EBX,dword ptr [ECX + 0x4c]      ; 004e56fe
    SHL EAX,0x2                         ; 004e5701
    MOV EDX,dword ptr [EAX + EBX*0x4 + 0x5bc0fc] ; 004e5704 | DAT_005bc0fc
    MOV dword ptr [ESP + 0x28],EDX      ; 004e570b
    MOV EDX,dword ptr [ECX + 0x50]      ; 004e570f
    ADD EDX,EBX                         ; 004e5712
    MOV EBP,dword ptr [EAX + EDX*0x4 + 0x5bc100] ; 004e5714 | DAT_005bc100
    JMP 0x004e5279                      ; 004e571b
        ;   XREF to: 004e5279 (UNCONDITIONAL_JUMP)  ; LAB_004e5279
    CMP ESI,dword ptr [ESP + 0x28]      ; 004e5720
        ;   Label: LAB_004e5720
    JGE 0x004e5734                      ; 004e5724
        ;   XREF to: 004e5734 (CONDITIONAL_JUMP)  ; LAB_004e5734
    IMUL EAX,dword ptr [EDI + 0x34],0x828 ; 004e5726
    ADD EAX,0x1cd8c28                   ; 004e572d
    JMP 0x004e5752                      ; 004e5732
        ;   XREF to: 004e5752 (UNCONDITIONAL_JUMP)  ; LAB_004e5752
    CMP ESI,EBP                         ; 004e5734
        ;   Label: LAB_004e5734
    JGE 0x004e5746                      ; 004e5736
        ;   XREF to: 004e5746 (CONDITIONAL_JUMP)  ; LAB_004e5746
    IMUL EAX,dword ptr [EDI + 0x38],0x828 ; 004e5738
    ADD EAX,0x1cd8c28                   ; 004e573f
    JMP 0x004e5752                      ; 004e5744
        ;   XREF to: 004e5752 (UNCONDITIONAL_JUMP)  ; LAB_004e5752
    IMUL EAX,dword ptr [EDI + 0x3c],0x828 ; 004e5746
        ;   Label: LAB_004e5746
    ADD EAX,0x1cd8c28                   ; 004e574d
    LEA EDX,[ESP + 0xc]                 ; 004e5752
        ;   Label: LAB_004e5752
    PUSH EDX                            ; 004e5756
    LEA EDX,[ESP + 0xc]                 ; 004e5757
    PUSH EDX                            ; 004e575b
    LEA EDX,[ESP + 0xc]                 ; 004e575c
    PUSH EDX                            ; 004e5760
    LEA EDX,[ESP + 0xc]                 ; 004e5761
    PUSH EDX                            ; 004e5765
    PUSH EAX                            ; 004e5766
    MOV ECX,dword ptr [ESP + 0x60]      ; 004e5767
    PUSH ECX                            ; 004e576b
    CALL sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0 ; 004e576c
        ;   XREF to: 004e2ed0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0()
    MOV ECX,0x12                        ; 004e5771
    MOV EDX,ESI                         ; 004e5776
    MOV EAX,ESI                         ; 004e5778
    SAR EDX,0x1f                        ; 004e577a
    IDIV ECX                            ; 004e577d
    IMUL EAX,EAX,0x48                   ; 004e577f
    MOV EDI,0x12                        ; 004e5782
    ADD ESP,0x18                        ; 004e5787
    MOV EDX,ESI                         ; 004e578a
    MOV ECX,dword ptr [ESP + 0x50]      ; 004e578c
    SAR EDX,0x1f                        ; 004e5790
    ADD ECX,EAX                         ; 004e5793
    MOV EAX,ESI                         ; 004e5795
    IDIV EDI                            ; 004e5797
    MOV EAX,dword ptr [ESP]             ; 004e5799
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 004e579c
    MOV EDX,EBX                         ; 004e579f
    MOV EAX,EBX                         ; 004e57a1
    SAR EDX,0x1f                        ; 004e57a3
    IDIV EDI                            ; 004e57a6
    IMUL EAX,EAX,0x48                   ; 004e57a8
    MOV EDX,EBX                         ; 004e57ab
    MOV ECX,dword ptr [ESP + 0x50]      ; 004e57ad
    SAR EDX,0x1f                        ; 004e57b1
    ADD ECX,EAX                         ; 004e57b4
    MOV EAX,EBX                         ; 004e57b6
    IDIV EDI                            ; 004e57b8
    ADD ESI,0x2                         ; 004e57ba
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e57bd
    ADD EBX,0x2                         ; 004e57c1
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 004e57c4
    JMP 0x004e52bb                      ; 004e57c7
        ;   XREF to: 004e52bb (UNCONDITIONAL_JUMP)  ; LAB_004e52bb
    MOV EDX,dword ptr [ESP + 0x58]      ; 004e57cc
        ;   Label: LAB_004e57cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e57d0
    ADD EAX,EDX                         ; 004e57d7
    MOV EBX,dword ptr [ESP + 0x54]      ; 004e57d9
    SHL EAX,0x5                         ; 004e57dd
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004e57e0
    ADD EBX,EAX                         ; 004e57e4
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e57e6
    ADD EAX,EDX                         ; 004e57ed
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004e57ef
    SHL EAX,0x3                         ; 004e57f3
    PUSH ECX                            ; 004e57f6
    ADD EBX,EAX                         ; 004e57f7
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0 ; 004e57f9
        ;   XREF to: 004e2ce0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0()
    ADD ESP,0x4                         ; 004e57fe
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004e5801
    PUSH EAX                            ; 004e5805
    MOV EBP,dword ptr [EBX + 0x18]      ; 004e5806
    MOV EDI,dword ptr [ESP + 0x64]      ; 004e5809
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0 ; 004e580d
        ;   XREF to: 004e2ce0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0()
    ADD EDI,EBP                         ; 004e5812
    ADD ESP,0x4                         ; 004e5814
    CMP EAX,EDI                         ; 004e5817
    JBE 0x004e5844                      ; 004e5819
        ;   XREF to: 004e5844 (CONDITIONAL_JUMP)  ; LAB_004e5844
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004e581b
    PUSH EDX                            ; 004e581f
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0 ; 004e5820
        ;   XREF to: 004e2ce0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0()
    ADD ESP,0x4                         ; 004e5825
    MOV ECX,dword ptr [ESP + 0x60]      ; 004e5828
    MOV EDI,dword ptr [EBX + 0x18]      ; 004e582c
    SUB EAX,ECX                         ; 004e582f
    SUB EAX,EDI                         ; 004e5831
    PUSH EAX                            ; 004e5833
    MOV EBP,dword ptr [ESP + 0x50]      ; 004e5834
    PUSH EBP                            ; 004e5838
    SUB ESI,0x4                         ; 004e5839
    CALL sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_004e2e40 ; 004e583c
        ;   XREF to: 004e2e40 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_004e2e40()
    ADD ESP,0x8                         ; 004e5841
    MOV EDX,dword ptr [ESP + 0x58]      ; 004e5844
        ;   Label: LAB_004e5844
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e5848
    ADD EAX,EDX                         ; 004e584f
    MOV ECX,dword ptr [ESP + 0x54]      ; 004e5851
    SHL EAX,0x5                         ; 004e5855
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004e5858
    ADD ECX,EAX                         ; 004e585c
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e585e
    ADD EAX,EDX                         ; 004e5865
    MOV EDX,dword ptr [ECX + EAX*0x8 + 0x18] ; 004e5867
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004e586b
    MOV EBX,dword ptr [ESP + 0x60]      ; 004e586f
    PUSH ECX                            ; 004e5873
    ADD EBX,EDX                         ; 004e5874
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0 ; 004e5876
        ;   XREF to: 004e2ce0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0()
    ADD ESP,0x4                         ; 004e587b
    CMP EAX,EBX                         ; 004e587e
    JL 0x004e58b4                       ; 004e5880
        ;   XREF to: 004e58b4 (CONDITIONAL_JUMP)  ; LAB_004e58b4
    MOV EBX,0x12                        ; 004e5882
        ;   Label: LAB_004e5882
    CMP ESI,0x240                       ; 004e5887
        ;   Label: LAB_004e5887
    JGE 0x004e58c6                      ; 004e588d
        ;   XREF to: 004e58c6 (CONDITIONAL_JUMP)  ; LAB_004e58c6
    MOV EDX,ESI                         ; 004e588f
    MOV EAX,ESI                         ; 004e5891
    SAR EDX,0x1f                        ; 004e5893
    IDIV EBX                            ; 004e5896
    IMUL EAX,EAX,0x48                   ; 004e5898
    MOV EDX,ESI                         ; 004e589b
    MOV ECX,dword ptr [ESP + 0x50]      ; 004e589d
    SAR EDX,0x1f                        ; 004e58a1
    ADD ECX,EAX                         ; 004e58a4
    MOV EAX,ESI                         ; 004e58a6
    IDIV EBX                            ; 004e58a8
    INC ESI                             ; 004e58aa
    MOV dword ptr [ECX + EDX*0x4],0x0   ; 004e58ab
    JMP 0x004e5887                      ; 004e58b2
        ;   XREF to: 004e5887 (UNCONDITIONAL_JUMP)  ; LAB_004e5887
    SUB EBX,EAX                         ; 004e58b4
        ;   Label: LAB_004e58b4
    PUSH EBX                            ; 004e58b6
    MOV EBX,dword ptr [ESP + 0x50]      ; 004e58b7
    PUSH EBX                            ; 004e58bb
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0 ; 004e58bc
        ;   XREF to: 004e2cf0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0()
    ADD ESP,0x8                         ; 004e58c1
    JMP 0x004e5882                      ; 004e58c4
        ;   XREF to: 004e5882 (UNCONDITIONAL_JUMP)  ; LAB_004e5882
    ADD ESP,0x38                        ; 004e58c6
        ;   Label: LAB_004e58c6
    POP EBP                             ; 004e58c9
    POP EDI                             ; 004e58ca
    POP ESI                             ; 004e58cb
    POP EBX                             ; 004e58cc
    RET                                 ; 004e58cd

