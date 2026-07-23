; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_004e4320(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)
;
; Local Variables:
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 at 004e8e7c
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0058b6e8
;   string s_Side_info_bad:_block_type_==_0_i_0058b6f9
;   string s_..\\sound\\mp3.cpp_0058b732
;   string s_Side_info_bad:_block_type_==_0_i_0058b743
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01cd8b28
;
; Called Functions:
;   FUN_004c8440
;   sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4320
        ;   Label: sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_004e4320
    PUSH ESI                            ; 004e4321
    PUSH EDI                            ; 004e4322
    PUSH EBP                            ; 004e4323
    SUB ESP,0x4c                        ; 004e4324
    MOV EBX,dword ptr [ESP + 0x64]      ; 004e4327
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004e432b
    MOV EDX,dword ptr [EAX + 0x10]      ; 004e432f
    MOV EAX,dword ptr [EAX]             ; 004e4332
    MOV dword ptr [ESP + 0x10],EDX      ; 004e4334
    CMP dword ptr [EAX],0x0             ; 004e4338
    JZ 0x004e4633                       ; 004e433b
        ;   XREF to: 004e4633 (CONDITIONAL_JUMP)  ; LAB_004e4633
    PUSH 0x9                            ; 004e4341
    PUSH EBX                            ; 004e4343
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e4344
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e4349
    MOV EDX,dword ptr [ESP + 0x68]      ; 004e434c
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e4350
    MOV dword ptr [EDX],EAX             ; 004e4354
    CMP ESI,0x1                         ; 004e4356
    JNZ 0x004e45bc                      ; 004e4359
        ;   XREF to: 004e45bc (CONDITIONAL_JUMP)  ; LAB_004e45bc
    PUSH 0x5                            ; 004e435f
    PUSH EBX                            ; 004e4361
        ;   Label: LAB_004e4361
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e4362
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e4367
    MOV EDX,dword ptr [ESP + 0x68]      ; 004e436a
    MOV dword ptr [EDX + 0x4],EAX       ; 004e436e
    MOV EDI,dword ptr [ESP + 0x10]      ; 004e4371
    XOR EBP,EBP                         ; 004e4375
    TEST EDI,EDI                        ; 004e4377
    JLE 0x004e43bb                      ; 004e4379
        ;   XREF to: 004e43bb (CONDITIONAL_JUMP)  ; LAB_004e43bb
    MOV EAX,dword ptr [ESP + 0x68]      ; 004e437b
    ADD EAX,0x10                        ; 004e437f
    MOV dword ptr [ESP],EAX             ; 004e4382
    IMUL EAX,EBP,0xa0                   ; 004e4385
        ;   Label: LAB_004e4385
    MOV ESI,dword ptr [ESP + 0x68]      ; 004e438b
    MOV EDI,dword ptr [ESP]             ; 004e438f
    ADD ESI,EAX                         ; 004e4392
    PUSH EBX                            ; 004e4394
        ;   Label: LAB_004e4394
    ADD ESI,0x4                         ; 004e4395
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0 ; 004e4398
        ;   XREF to: 004e29d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0()
    ADD ESP,0x4                         ; 004e439d
    MOV dword ptr [ESI + 0x4],EAX       ; 004e43a0
    CMP ESI,EDI                         ; 004e43a3
    JNZ 0x004e4394                      ; 004e43a5
        ;   XREF to: 004e4394 (CONDITIONAL_JUMP)  ; LAB_004e4394
    MOV EAX,dword ptr [ESP]             ; 004e43a7
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e43aa
    ADD EAX,0xa0                        ; 004e43ae
    INC EBP                             ; 004e43b3
    MOV dword ptr [ESP],EAX             ; 004e43b4
    CMP EBP,EDX                         ; 004e43b7
    JL 0x004e4385                       ; 004e43b9
        ;   XREF to: 004e4385 (CONDITIONAL_JUMP)  ; LAB_004e4385
    XOR ECX,ECX                         ; 004e43bb
        ;   Label: LAB_004e43bb
    MOV dword ptr [ESP + 0x4],ECX       ; 004e43bd
    XOR ESI,ESI                         ; 004e43c1
        ;   Label: LAB_004e43c1
    MOV EDI,dword ptr [ESP + 0x10]      ; 004e43c3
    MOV dword ptr [ESP + 0x28],ESI      ; 004e43c7
    TEST EDI,EDI                        ; 004e43cb
    JLE 0x004e459d                      ; 004e43cd
        ;   XREF to: 004e459d (CONDITIONAL_JUMP)  ; LAB_004e459d
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e43d3
    MOV EDX,dword ptr [ESP + 0x68]      ; 004e43d7
    MOV dword ptr [ESP + 0xc],EAX       ; 004e43db
    MOV dword ptr [ESP + 0x40],EAX      ; 004e43df
    MOV dword ptr [ESP + 0x44],EAX      ; 004e43e3
    ADD EAX,EDX                         ; 004e43e7
    MOV dword ptr [ESP + 0x38],EAX      ; 004e43e9
    MOV dword ptr [ESP + 0x18],EAX      ; 004e43ed
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e43f1
    MOV dword ptr [ESP + 0x30],EAX      ; 004e43f5
    PUSH 0xc                            ; 004e43f9
        ;   Label: LAB_004e43f9
    PUSH EBX                            ; 004e43fb
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e43fc
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e4401
    IMUL EBP,dword ptr [ESP + 0x28],0xa0 ; 004e4404
    PUSH 0x9                            ; 004e440c
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e440e
    PUSH EBX                            ; 004e4412
    MOV ESI,dword ptr [ESP + 0x70]      ; 004e4413
    MOV dword ptr [EDX + 0x18],EAX      ; 004e4417
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e441a
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e441f
    PUSH 0x8                            ; 004e4422
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e4424
    PUSH EBX                            ; 004e4428
    MOV dword ptr [EDX + 0x1c],EAX      ; 004e4429
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e442c
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e4431
    PUSH 0x4                            ; 004e4434
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e4436
    PUSH EBX                            ; 004e443a
    MOV dword ptr [EDX + 0x20],EAX      ; 004e443b
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e443e
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e4443
    MOV EDX,dword ptr [ESP + 0x38]      ; 004e4446
    PUSH EBX                            ; 004e444a
    MOV dword ptr [EDX + 0x24],EAX      ; 004e444b
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0 ; 004e444e
        ;   XREF to: 004e29d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0()
    ADD ESP,0x4                         ; 004e4453
    MOV EDX,dword ptr [ESP + 0x38]      ; 004e4456
    ADD EBP,ESI                         ; 004e445a
    MOV dword ptr [EDX + 0x28],EAX      ; 004e445c
    TEST EAX,EAX                        ; 004e445f
    JZ 0x004e45ea                       ; 004e4461
        ;   XREF to: 004e45ea (CONDITIONAL_JUMP)  ; LAB_004e45ea
    PUSH 0x2                            ; 004e4467
    PUSH EBX                            ; 004e4469
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e446a
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e446f
    MOV EDX,dword ptr [ESP + 0x38]      ; 004e4472
    PUSH EBX                            ; 004e4476
    MOV dword ptr [EDX + 0x2c],EAX      ; 004e4477
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0 ; 004e447a
        ;   XREF to: 004e29d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0()
    ADD ESP,0x4                         ; 004e447f
    MOV EDI,dword ptr [ESP + 0xc]       ; 004e4482
    MOV EDX,dword ptr [ESP + 0x38]      ; 004e4486
    ADD EDI,EBP                         ; 004e448a
    MOV dword ptr [EDX + 0x30],EAX      ; 004e448c
    MOV ESI,EDI                         ; 004e448f
    ADD EDI,0x8                         ; 004e4491
    PUSH 0x5                            ; 004e4494
        ;   Label: LAB_004e4494
    PUSH EBX                            ; 004e4496
    ADD ESI,0x4                         ; 004e4497
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e449a
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e449f
    MOV dword ptr [ESI + 0x30],EAX      ; 004e44a2
    CMP ESI,EDI                         ; 004e44a5
    JNZ 0x004e4494                      ; 004e44a7
        ;   XREF to: 004e4494 (CONDITIONAL_JUMP)  ; LAB_004e4494
    IMUL EBP,dword ptr [ESP + 0x28],0xa0 ; 004e44a9
    MOV EDX,dword ptr [ESP + 0x68]      ; 004e44b1
    XOR ESI,EDI                         ; 004e44b5
    ADD EBP,EDX                         ; 004e44b7
    PUSH 0x3                            ; 004e44b9
        ;   Label: LAB_004e44b9
    PUSH EBX                            ; 004e44bb
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e44bc
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e44c1
    MOV EDX,dword ptr [ESP + 0x44]      ; 004e44c4
    ADD EDX,EBP                         ; 004e44c8
    LEA EDI,[EDX + ESI*0x1]             ; 004e44ca
    ADD ESI,0x4                         ; 004e44cd
    MOV dword ptr [EDI + 0x40],EAX      ; 004e44d0
    CMP ESI,0xc                         ; 004e44d3
    JNZ 0x004e44b9                      ; 004e44d6
        ;   XREF to: 004e44b9 (CONDITIONAL_JUMP)  ; LAB_004e44b9
    MOV ECX,dword ptr [EDX + 0x2c]      ; 004e44d8
    TEST ECX,ECX                        ; 004e44db
    JNZ 0x004e45c3                      ; 004e44dd
        ;   XREF to: 004e45c3 (CONDITIONAL_JUMP)  ; LAB_004e45c3
    PUSH 0x1cd8b28                      ; 004e44e3 | DAT_01cd8b28
    MOV EBP,0x58b6e8                    ; 004e44e8 | = "..\\sound\\mp3.cpp"
    MOV EAX,0x65b                       ; 004e44ed
    PUSH 0x58b6f9                       ; 004e44f2 | = "Side info bad: block_type == 0 in spl..."
    MOV dword ptr [0x01cc4800],EBP      ; 004e44f7 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004e44fd | DAT_01cc4804
    CALL FUN_004c8440                   ; 004e4502
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 004e4507
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e450a
        ;   Label: LAB_004e450a
    MOV EDX,0x14                        ; 004e450e
    MOV ECX,dword ptr [EAX + 0x4c]      ; 004e4513
    MOV EAX,EDX                         ; 004e4516
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e4518
    SUB EAX,ECX                         ; 004e451c
    MOV dword ptr [EDX + 0x50],EAX      ; 004e451e
    PUSH EBX                            ; 004e4521
        ;   Label: LAB_004e4521
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0 ; 004e4522
        ;   XREF to: 004e29d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0()
    ADD ESP,0x4                         ; 004e4527
    MOV EDX,dword ptr [ESP + 0x30]      ; 004e452a
    PUSH EBX                            ; 004e452e
    MOV dword ptr [EDX + 0x54],EAX      ; 004e452f
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0 ; 004e4532
        ;   XREF to: 004e29d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0()
    ADD ESP,0x4                         ; 004e4537
    MOV EDX,dword ptr [ESP + 0x30]      ; 004e453a
    PUSH EBX                            ; 004e453e
    MOV dword ptr [EDX + 0x58],EAX      ; 004e453f
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0 ; 004e4542
        ;   XREF to: 004e29d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0()
    ADD ESP,0x4                         ; 004e4547
    MOV EDX,dword ptr [ESP + 0x30]      ; 004e454a
    MOV EBP,dword ptr [ESP + 0x38]      ; 004e454e
    MOV ECX,dword ptr [ESP + 0x30]      ; 004e4552
    MOV ESI,dword ptr [ESP + 0x28]      ; 004e4556
    MOV EDI,dword ptr [ESP + 0x10]      ; 004e455a
    ADD EBP,0xa0                        ; 004e455e
    ADD ECX,0xa0                        ; 004e4564
    INC ESI                             ; 004e456a
    MOV dword ptr [EDX + 0x5c],EAX      ; 004e456b
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e456e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e4572
    MOV dword ptr [ESP + 0x38],EBP      ; 004e4576
    MOV dword ptr [ESP + 0x30],ECX      ; 004e457a
    MOV dword ptr [ESP + 0x28],ESI      ; 004e457e
    ADD EAX,0xa0                        ; 004e4582
    ADD EDX,0xa0                        ; 004e4587
    MOV dword ptr [ESP + 0x18],EAX      ; 004e458d
    MOV dword ptr [ESP + 0x1c],EDX      ; 004e4591
    CMP ESI,EDI                         ; 004e4595
    JL 0x004e43f9                       ; 004e4597
        ;   XREF to: 004e43f9 (CONDITIONAL_JUMP)  ; LAB_004e43f9
    MOV EBP,dword ptr [ESP + 0x4]       ; 004e459d
        ;   Label: LAB_004e459d
    ADD EBP,0x48                        ; 004e45a1
    MOV dword ptr [ESP + 0x4],EBP       ; 004e45a4
    CMP EBP,0x90                        ; 004e45a8
    JNZ 0x004e43c1                      ; 004e45ae
        ;   XREF to: 004e43c1 (CONDITIONAL_JUMP)  ; LAB_004e43c1
    ADD ESP,0x4c                        ; 004e45b4
        ;   Label: LAB_004e45b4
    POP EBP                             ; 004e45b7
    POP EDI                             ; 004e45b8
    POP ESI                             ; 004e45b9
    POP EBX                             ; 004e45ba
    RET                                 ; 004e45bb
    PUSH 0x3                            ; 004e45bc
        ;   Label: LAB_004e45bc
    JMP 0x004e4361                      ; 004e45be
        ;   XREF to: 004e4361 (UNCONDITIONAL_JUMP)  ; LAB_004e4361
    CMP ECX,0x2                         ; 004e45c3
        ;   Label: LAB_004e45c3
    JNZ 0x004e45da                      ; 004e45c6
        ;   XREF to: 004e45da (CONDITIONAL_JUMP)  ; LAB_004e45da
    CMP dword ptr [EDX + 0x30],0x0      ; 004e45c8
    JNZ 0x004e45da                      ; 004e45cc
        ;   XREF to: 004e45da (CONDITIONAL_JUMP)  ; LAB_004e45da
    MOV dword ptr [EDX + 0x4c],0x8      ; 004e45ce
    JMP 0x004e450a                      ; 004e45d5
        ;   XREF to: 004e450a (UNCONDITIONAL_JUMP)  ; LAB_004e450a
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e45da
        ;   Label: LAB_004e45da
    MOV dword ptr [EAX + 0x4c],0x7      ; 004e45de
    JMP 0x004e450a                      ; 004e45e5
        ;   XREF to: 004e450a (UNCONDITIONAL_JUMP)  ; LAB_004e450a
    XOR ESI,ESI                         ; 004e45ea
        ;   Label: LAB_004e45ea
    PUSH 0x5                            ; 004e45ec
        ;   Label: LAB_004e45ec
    PUSH EBX                            ; 004e45ee
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e45ef
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e45f4
    MOV EDI,dword ptr [ESP + 0x40]      ; 004e45f7
    ADD EDI,EBP                         ; 004e45fb
    LEA EDX,[EDI + ESI*0x1]             ; 004e45fd
    ADD ESI,0x4                         ; 004e4600
    MOV dword ptr [EDX + 0x34],EAX      ; 004e4603
    CMP ESI,0xc                         ; 004e4606
    JNZ 0x004e45ec                      ; 004e4609
        ;   XREF to: 004e45ec (CONDITIONAL_JUMP)  ; LAB_004e45ec
    PUSH 0x4                            ; 004e460b
    PUSH EBX                            ; 004e460d
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e460e
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e4613
    PUSH 0x3                            ; 004e4616
    PUSH EBX                            ; 004e4618
    MOV dword ptr [EDI + 0x4c],EAX      ; 004e4619
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e461c
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    MOV dword ptr [EDI + 0x2c],0x0      ; 004e4621
    ADD ESP,0x8                         ; 004e4628
    MOV dword ptr [EDI + 0x50],EAX      ; 004e462b
    JMP 0x004e4521                      ; 004e462e
        ;   XREF to: 004e4521 (UNCONDITIONAL_JUMP)  ; LAB_004e4521
    PUSH 0x8                            ; 004e4633
        ;   Label: LAB_004e4633
    PUSH EBX                            ; 004e4635
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e4636
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e463b
    MOV EDX,dword ptr [ESP + 0x68]      ; 004e463e
    MOV ECX,dword ptr [ESP + 0x10]      ; 004e4642
    MOV dword ptr [EDX],EAX             ; 004e4646
    CMP ECX,0x1                         ; 004e4648
    JNZ 0x004e47b7                      ; 004e464b
        ;   XREF to: 004e47b7 (CONDITIONAL_JUMP)  ; LAB_004e47b7
    PUSH ECX                            ; 004e4651
    PUSH EBX                            ; 004e4652
        ;   Label: LAB_004e4652
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e4653
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e4658
    MOV EDX,dword ptr [ESP + 0x68]      ; 004e465b
    MOV dword ptr [EDX + 0x4],EAX       ; 004e465f
    XOR ESI,ESI                         ; 004e4662
    MOV EDI,dword ptr [ESP + 0x10]      ; 004e4664
    MOV dword ptr [ESP + 0x2c],ESI      ; 004e4668
    TEST EDI,EDI                        ; 004e466c
    JLE 0x004e45b4                      ; 004e466e
        ;   XREF to: 004e45b4 (CONDITIONAL_JUMP)  ; LAB_004e45b4
    MOV EAX,dword ptr [ESP + 0x68]      ; 004e4674
    MOV dword ptr [ESP + 0x8],ESI       ; 004e4678
    MOV dword ptr [ESP + 0x48],ESI      ; 004e467c
    MOV dword ptr [ESP + 0x3c],ESI      ; 004e4680
    MOV dword ptr [ESP + 0x34],EAX      ; 004e4684
    MOV dword ptr [ESP + 0x14],EAX      ; 004e4688
    MOV dword ptr [ESP + 0x20],EAX      ; 004e468c
    MOV dword ptr [ESP + 0x24],EAX      ; 004e4690
    PUSH 0xc                            ; 004e4694
        ;   Label: LAB_004e4694
    PUSH EBX                            ; 004e4696
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e4697
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e469c
    IMUL EBP,dword ptr [ESP + 0x2c],0xa0 ; 004e469f
    PUSH 0x9                            ; 004e46a7
    MOV EDX,dword ptr [ESP + 0x38]      ; 004e46a9
    PUSH EBX                            ; 004e46ad
    MOV ESI,dword ptr [ESP + 0x70]      ; 004e46ae
    MOV dword ptr [EDX + 0x18],EAX      ; 004e46b2
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e46b5
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e46ba
    PUSH 0x8                            ; 004e46bd
    MOV EDX,dword ptr [ESP + 0x38]      ; 004e46bf
    PUSH EBX                            ; 004e46c3
    MOV dword ptr [EDX + 0x1c],EAX      ; 004e46c4
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e46c7
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e46cc
    PUSH 0x9                            ; 004e46cf
    MOV EDX,dword ptr [ESP + 0x38]      ; 004e46d1
    PUSH EBX                            ; 004e46d5
    MOV dword ptr [EDX + 0x20],EAX      ; 004e46d6
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e46d9
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e46de
    MOV EDX,dword ptr [ESP + 0x34]      ; 004e46e1
    PUSH EBX                            ; 004e46e5
    MOV dword ptr [EDX + 0x24],EAX      ; 004e46e6
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0 ; 004e46e9
        ;   XREF to: 004e29d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0()
    ADD ESP,0x4                         ; 004e46ee
    MOV EDX,dword ptr [ESP + 0x34]      ; 004e46f1
    ADD EBP,ESI                         ; 004e46f5
    MOV dword ptr [EDX + 0x28],EAX      ; 004e46f7
    TEST EAX,EAX                        ; 004e46fa
    JNZ 0x004e47be                      ; 004e46fc
        ;   XREF to: 004e47be (CONDITIONAL_JUMP)  ; LAB_004e47be
    XOR ESI,ESI                         ; 004e4702
    PUSH 0x5                            ; 004e4704
        ;   Label: LAB_004e4704
    PUSH EBX                            ; 004e4706
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e4707
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e470c
    MOV EDI,dword ptr [ESP + 0x48]      ; 004e470f
    ADD EDI,EBP                         ; 004e4713
    LEA EDX,[EDI + ESI*0x1]             ; 004e4715
    ADD ESI,0x4                         ; 004e4718
    MOV dword ptr [EDX + 0x34],EAX      ; 004e471b
    CMP ESI,0xc                         ; 004e471e
    JNZ 0x004e4704                      ; 004e4721
        ;   XREF to: 004e4704 (CONDITIONAL_JUMP)  ; LAB_004e4704
    PUSH 0x4                            ; 004e4723
    PUSH EBX                            ; 004e4725
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e4726
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e472b
    PUSH 0x3                            ; 004e472e
    PUSH EBX                            ; 004e4730
    MOV dword ptr [EDI + 0x4c],EAX      ; 004e4731
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e4734
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    MOV dword ptr [EDI + 0x2c],0x0      ; 004e4739
    ADD ESP,0x8                         ; 004e4740
    MOV dword ptr [EDI + 0x50],EAX      ; 004e4743
    PUSH EBX                            ; 004e4746
        ;   Label: LAB_004e4746
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0 ; 004e4747
        ;   XREF to: 004e29d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0()
    ADD ESP,0x4                         ; 004e474c
    MOV EDX,dword ptr [ESP + 0x24]      ; 004e474f
    PUSH EBX                            ; 004e4753
    MOV dword ptr [EDX + 0x58],EAX      ; 004e4754
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0 ; 004e4757
        ;   XREF to: 004e29d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0()
    ADD ESP,0x4                         ; 004e475c
    MOV EDX,dword ptr [ESP + 0x24]      ; 004e475f
    MOV EBP,dword ptr [ESP + 0x34]      ; 004e4763
    MOV ECX,dword ptr [ESP + 0x24]      ; 004e4767
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004e476b
    MOV EDI,dword ptr [ESP + 0x10]      ; 004e476f
    ADD EBP,0xa0                        ; 004e4773
    ADD ECX,0xa0                        ; 004e4779
    INC ESI                             ; 004e477f
    MOV dword ptr [EDX + 0x5c],EAX      ; 004e4780
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e4783
    MOV EDX,dword ptr [ESP + 0x20]      ; 004e4787
    MOV dword ptr [ESP + 0x34],EBP      ; 004e478b
    MOV dword ptr [ESP + 0x24],ECX      ; 004e478f
    MOV dword ptr [ESP + 0x2c],ESI      ; 004e4793
    ADD EAX,0xa0                        ; 004e4797
    ADD EDX,0xa0                        ; 004e479c
    MOV dword ptr [ESP + 0x14],EAX      ; 004e47a2
    MOV dword ptr [ESP + 0x20],EDX      ; 004e47a6
    CMP ESI,EDI                         ; 004e47aa
    JGE 0x004e45b4                      ; 004e47ac
        ;   XREF to: 004e45b4 (CONDITIONAL_JUMP)  ; LAB_004e45b4
    JMP 0x004e4694                      ; 004e47b2
        ;   XREF to: 004e4694 (UNCONDITIONAL_JUMP)  ; LAB_004e4694
    PUSH 0x2                            ; 004e47b7
        ;   Label: LAB_004e47b7
    JMP 0x004e4652                      ; 004e47b9
        ;   XREF to: 004e4652 (UNCONDITIONAL_JUMP)  ; LAB_004e4652
    PUSH 0x2                            ; 004e47be
        ;   Label: LAB_004e47be
    PUSH EBX                            ; 004e47c0
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e47c1
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e47c6
    MOV EDX,dword ptr [ESP + 0x34]      ; 004e47c9
    PUSH EBX                            ; 004e47cd
    MOV dword ptr [EDX + 0x2c],EAX      ; 004e47ce
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0 ; 004e47d1
        ;   XREF to: 004e29d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0()
    ADD ESP,0x4                         ; 004e47d6
    MOV EDI,dword ptr [ESP + 0x8]       ; 004e47d9
    MOV EDX,dword ptr [ESP + 0x34]      ; 004e47dd
    ADD EDI,EBP                         ; 004e47e1
    MOV dword ptr [EDX + 0x30],EAX      ; 004e47e3
    MOV ESI,EDI                         ; 004e47e6
    ADD EDI,0x8                         ; 004e47e8
    PUSH 0x5                            ; 004e47eb
        ;   Label: LAB_004e47eb
    PUSH EBX                            ; 004e47ed
    ADD ESI,0x4                         ; 004e47ee
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e47f1
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e47f6
    MOV dword ptr [ESI + 0x30],EAX      ; 004e47f9
    CMP ESI,EDI                         ; 004e47fc
    JNZ 0x004e47eb                      ; 004e47fe
        ;   XREF to: 004e47eb (CONDITIONAL_JUMP)  ; LAB_004e47eb
    IMUL EBP,dword ptr [ESP + 0x2c],0xa0 ; 004e4800
    MOV EDX,dword ptr [ESP + 0x68]      ; 004e4808
    XOR ESI,EDI                         ; 004e480c
    ADD EBP,EDX                         ; 004e480e
    PUSH 0x3                            ; 004e4810
        ;   Label: LAB_004e4810
    PUSH EBX                            ; 004e4812
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e4813
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e4818
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e481b
    ADD EDX,EBP                         ; 004e481f
    LEA EDI,[EDX + ESI*0x1]             ; 004e4821
    ADD ESI,0x4                         ; 004e4824
    MOV dword ptr [EDI + 0x40],EAX      ; 004e4827
    CMP ESI,0xc                         ; 004e482a
    JNZ 0x004e4810                      ; 004e482d
        ;   XREF to: 004e4810 (CONDITIONAL_JUMP)  ; LAB_004e4810
    MOV ECX,dword ptr [EDX + 0x2c]      ; 004e482f
    TEST ECX,ECX                        ; 004e4832
    JNZ 0x004e4879                      ; 004e4834
        ;   XREF to: 004e4879 (CONDITIONAL_JUMP)  ; LAB_004e4879
    PUSH 0x1cd8b28                      ; 004e4836 | DAT_01cd8b28
    MOV EBP,0x58b732                    ; 004e483b | = "..\\sound\\mp3.cpp"
    MOV EAX,0x68a                       ; 004e4840
    PUSH 0x58b743                       ; 004e4845 | = "Side info bad: block_type == 0 in spl..."
    MOV dword ptr [0x01cc4800],EBP      ; 004e484a | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004e4850 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004e4855
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 004e485a
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e485d
        ;   Label: LAB_004e485d
    MOV EDX,0x14                        ; 004e4861
    MOV ECX,dword ptr [EAX + 0x4c]      ; 004e4866
    MOV EAX,EDX                         ; 004e4869
    MOV EDX,dword ptr [ESP + 0x20]      ; 004e486b
    SUB EAX,ECX                         ; 004e486f
    MOV dword ptr [EDX + 0x50],EAX      ; 004e4871
    JMP 0x004e4746                      ; 004e4874
        ;   XREF to: 004e4746 (UNCONDITIONAL_JUMP)  ; LAB_004e4746
    CMP ECX,0x2                         ; 004e4879
        ;   Label: LAB_004e4879
    JNZ 0x004e488d                      ; 004e487c
        ;   XREF to: 004e488d (CONDITIONAL_JUMP)  ; LAB_004e488d
    CMP dword ptr [EDX + 0x30],0x0      ; 004e487e
    JNZ 0x004e488d                      ; 004e4882
        ;   XREF to: 004e488d (CONDITIONAL_JUMP)  ; LAB_004e488d
    MOV dword ptr [EDX + 0x4c],0x8      ; 004e4884
    JMP 0x004e485d                      ; 004e488b
        ;   XREF to: 004e485d (UNCONDITIONAL_JUMP)  ; LAB_004e485d
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e488d
        ;   Label: LAB_004e488d
    MOV dword ptr [EAX + 0x4c],0x7      ; 004e4891
    JMP 0x004e485d                      ; 004e4898
        ;   XREF to: 004e485d (UNCONDITIONAL_JUMP)  ; LAB_004e485d

