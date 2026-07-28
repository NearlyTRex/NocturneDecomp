; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_CDrawSurface_fillPoly_FUN_0045d310(CDrawSurface *param_1,int param_2,int *param_3)
;
; Local Variables:
; undefined4       Stack[-0xdc]:4  local_dc
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_0057da84
;   TerminatedCString s_CDrawSurface_fillPoly_to_0057da9c
;   undefined4 DAT_01b4d490
;   undefined4 DAT_01b4d494
;   undefined4 DAT_01b4d498
;   undefined4 DAT_01b4d49c
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730
;   core_main.c_FUN_004c8440
;   crt_string.c_memmove_FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d310
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_fillPoly_FUN_0045d310
    PUSH ESI                            ; 0045d311
    PUSH EDI                            ; 0045d312
    PUSH EBP                            ; 0045d313
    SUB ESP,0xcc                        ; 0045d314
    MOV EDX,dword ptr [ESP + 0xe4]      ; 0045d31a
    CMP EDX,0x3                         ; 0045d321
    JL 0x0045d59b                       ; 0045d324
        ;   XREF to: 0045d59b (CONDITIONAL_JUMP)  ; LAB_0045d59b
    XOR ECX,ECX                         ; 0045d32a
    LEA EBX,[EDX + -0x1]                ; 0045d32c
    MOV dword ptr [ESP + 0xb8],ECX      ; 0045d32f
    MOV dword ptr [ESP + 0xbc],ECX      ; 0045d336
    TEST EDX,EDX                        ; 0045d33d
    JLE 0x0045d3d5                      ; 0045d33f
        ;   XREF to: 0045d3d5 (CONDITIONAL_JUMP)  ; LAB_0045d3d5
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0045d345
    MOV EDI,0x1b4d490                   ; 0045d34c
    MOV dword ptr [ESP + 0xb4],EAX      ; 0045d351
    MOV ESI,dword ptr [ESP + 0xe8]      ; 0045d358
        ;   Label: LAB_0045d358
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0045d35f
    MOV EBP,dword ptr [ESI + EBX*0x8]   ; 0045d366
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045d369
    MOV ECX,dword ptr [EAX + 0xc]       ; 0045d36c
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0045d36f
    ADD EBP,EDX                         ; 0045d376
    MOV EDX,dword ptr [ESP + 0xe0]      ; 0045d378
    MOV ESI,dword ptr [ESI + EBX*0x8 + 0x4] ; 0045d37f
    MOV EAX,dword ptr [EAX]             ; 0045d383
    ADD EAX,dword ptr [EDX + 0x8]       ; 0045d385
    MOV EBX,dword ptr [ESP + 0xb4]      ; 0045d388
    MOV EDX,dword ptr [EDX + 0xc]       ; 0045d38f
    MOV EBX,dword ptr [EBX + 0x4]       ; 0045d392
    ADD ESI,ECX                         ; 0045d395
    ADD EBX,EDX                         ; 0045d397
    MOV dword ptr [ESP + 0xb0],EAX      ; 0045d399
    CMP ESI,EBX                         ; 0045d3a0
    JNZ 0x0045d5a6                      ; 0045d3a2
        ;   XREF to: 0045d5a6 (CONDITIONAL_JUMP)  ; LAB_0045d5a6
    MOV EBX,dword ptr [ESP + 0xb8]      ; 0045d3a8
        ;   Label: LAB_0045d3a8
    MOV EBP,dword ptr [ESP + 0xb4]      ; 0045d3af
    MOV EDX,dword ptr [ESP + 0xe4]      ; 0045d3b6
    ADD EBP,0x8                         ; 0045d3bd
    LEA EAX,[EBX + 0x1]                 ; 0045d3c0
    MOV dword ptr [ESP + 0xb4],EBP      ; 0045d3c3
    MOV dword ptr [ESP + 0xb8],EAX      ; 0045d3ca
    CMP EAX,EDX                         ; 0045d3d1
    JL 0x0045d358                       ; 0045d3d3
        ;   XREF to: 0045d358 (CONDITIONAL_JUMP)  ; LAB_0045d358
    MOV ECX,dword ptr [ESP + 0xbc]      ; 0045d3d5
        ;   Label: LAB_0045d3d5
    CMP ECX,0x2                         ; 0045d3dc
    JL 0x0045d59b                       ; 0045d3df
        ;   XREF to: 0045d59b (CONDITIONAL_JUMP)  ; LAB_0045d59b
    LEA EBX,[ECX + -0x1]                ; 0045d3e5
    TEST EBX,EBX                        ; 0045d3e8
    JLE 0x0045d441                      ; 0045d3ea
        ;   XREF to: 0045d441 (CONDITIONAL_JUMP)  ; LAB_0045d441
    JLE 0x0045d43c                      ; 0045d3ec
        ;   XREF to: 0045d43c (CONDITIONAL_JUMP)  ; LAB_0045d43c
        ;   Label: LAB_0045d3ec
    MOV ECX,EBX                         ; 0045d3ee
    XOR EAX,EAX                         ; 0045d3f0
    SHL ECX,0x4                         ; 0045d3f2
    MOV EDI,dword ptr [EAX + 0x1b4d4a0] ; 0045d3f5
        ;   Label: LAB_0045d3f5
    CMP EDI,dword ptr [EAX + 0x1b4d490] ; 0045d3fb | DAT_01b4d490
    JGE 0x0045d435                      ; 0045d401
        ;   XREF to: 0045d435 (CONDITIONAL_JUMP)  ; LAB_0045d435
    LEA EDI,[ESP + 0xa0]                ; 0045d403
    LEA ESI,[EAX + 0x1b4d490]           ; 0045d40a
    MOVSD ES:EDI,ESI                    ; 0045d410 | DAT_01b4d490
    MOVSD ES:EDI,ESI                    ; 0045d411 | DAT_01b4d494
    MOVSD ES:EDI,ESI                    ; 0045d412
    MOVSD ES:EDI,ESI                    ; 0045d413
    LEA EDI,[EAX + 0x1b4d490]           ; 0045d414
    LEA ESI,[EAX + 0x1b4d4a0]           ; 0045d41a
    MOVSD ES:EDI,ESI                    ; 0045d420 | DAT_01b4d490
    MOVSD ES:EDI,ESI                    ; 0045d421
    MOVSD ES:EDI,ESI                    ; 0045d422
    MOVSD ES:EDI,ESI                    ; 0045d423
    LEA ESI,[ESP + 0xa0]                ; 0045d424
    LEA EDI,[EAX + 0x1b4d4a0]           ; 0045d42b
    MOVSD ES:EDI,ESI                    ; 0045d431
    MOVSD ES:EDI,ESI                    ; 0045d432
    MOVSD ES:EDI,ESI                    ; 0045d433
    MOVSD ES:EDI,ESI                    ; 0045d434
    ADD EAX,0x10                        ; 0045d435
        ;   Label: LAB_0045d435
    CMP EAX,ECX                         ; 0045d438
    JL 0x0045d3f5                       ; 0045d43a
        ;   XREF to: 0045d3f5 (CONDITIONAL_JUMP)  ; LAB_0045d3f5
    DEC EBX                             ; 0045d43c
        ;   Label: LAB_0045d43c
    TEST EBX,EBX                        ; 0045d43d
    JG 0x0045d3ec                       ; 0045d43f
        ;   XREF to: 0045d3ec (CONDITIONAL_JUMP)  ; LAB_0045d3ec
    MOV ESI,dword ptr [ESP + 0xbc]      ; 0045d441
        ;   Label: LAB_0045d441
    MOV EAX,[0x01b4d490]                ; 0045d448 | DAT_01b4d490
    XOR EDI,EDI                         ; 0045d44d
    XOR EBP,EBP                         ; 0045d44f
    MOV dword ptr [ESP + 0xc8],EAX      ; 0045d451
    TEST ESI,ESI                        ; 0045d458
    JLE 0x0045d59b                      ; 0045d45a
        ;   XREF to: 0045d59b (CONDITIONAL_JUMP)  ; LAB_0045d59b
    MOV EAX,EBP                         ; 0045d460
        ;   Label: LAB_0045d460
    SHL EAX,0x4                         ; 0045d462
    MOV dword ptr [ESP + 0xc4],EAX      ; 0045d465
    CMP EBP,dword ptr [ESP + 0xbc]      ; 0045d46c
        ;   Label: LAB_0045d46c
    JL 0x0045d688                       ; 0045d473
        ;   XREF to: 0045d688 (CONDITIONAL_JUMP)  ; LAB_0045d688
    LEA EAX,[EDI + -0x1]                ; 0045d479
        ;   Label: LAB_0045d479
    MOV dword ptr [ESP + 0xc0],EAX      ; 0045d47c
    MOV EBX,dword ptr [ESP + 0xc0]      ; 0045d483
        ;   Label: LAB_0045d483
    XOR EAX,EAX                         ; 0045d48a
    SHL EBX,0x2                         ; 0045d48c
    XOR ESI,ESI                         ; 0045d48f
    TEST EBX,EBX                        ; 0045d491
    JLE 0x0045d4ca                      ; 0045d493
        ;   XREF to: 0045d4ca (CONDITIONAL_JUMP)  ; LAB_0045d4ca
    MOV EDX,dword ptr [ESP + EAX*0x1]   ; 0045d495
        ;   Label: LAB_0045d495
    MOV ECX,dword ptr [ESP + EAX*0x1 + 0x4] ; 0045d498
    SHL EDX,0x4                         ; 0045d49c
    SHL ECX,0x4                         ; 0045d49f
    MOV EDX,dword ptr [EDX + 0x1b4d498] ; 0045d4a2
    CMP EDX,dword ptr [ECX + 0x1b4d498] ; 0045d4a8
    JLE 0x0045d4c3                      ; 0045d4ae
        ;   XREF to: 0045d4c3 (CONDITIONAL_JUMP)  ; LAB_0045d4c3
    MOV EDX,dword ptr [ESP + EAX*0x1 + 0x4] ; 0045d4b0
    MOV ECX,dword ptr [ESP + EAX*0x1]   ; 0045d4b4
    MOV dword ptr [ESP + EAX*0x1],EDX   ; 0045d4b7
    MOV ESI,0x1                         ; 0045d4ba
    MOV dword ptr [ESP + EAX*0x1 + 0x4],ECX ; 0045d4bf
    ADD EAX,0x4                         ; 0045d4c3
        ;   Label: LAB_0045d4c3
    CMP EAX,EBX                         ; 0045d4c6
    JL 0x0045d495                       ; 0045d4c8
        ;   XREF to: 0045d495 (CONDITIONAL_JUMP)  ; LAB_0045d495
    TEST ESI,ESI                        ; 0045d4ca
        ;   Label: LAB_0045d4ca
    JNZ 0x0045d483                      ; 0045d4cc
        ;   XREF to: 0045d483 (CONDITIONAL_JUMP)  ; LAB_0045d483
    CMP EDI,0x1                         ; 0045d4ce
    JLE 0x0045d52e                      ; 0045d4d1
        ;   XREF to: 0045d52e (CONDITIONAL_JUMP)  ; LAB_0045d52e
    MOV EBX,0x4                         ; 0045d4d3
    LEA ESI,[EDI*0x4 + 0x0]             ; 0045d4d8
    MOV EAX,dword ptr [ESP + EBX*0x1]   ; 0045d4df
        ;   Label: LAB_0045d4df
    SHL EAX,0x4                         ; 0045d4e2
    MOV EDX,dword ptr [ESP + 0xe0]      ; 0045d4e5
    MOV EAX,dword ptr [EAX + 0x1b4d498] ; 0045d4ec
    MOV ECX,dword ptr [EDX + 0x8]       ; 0045d4f2
    SAR EAX,0x10                        ; 0045d4f5
    SUB EAX,ECX                         ; 0045d4f8
    PUSH EAX                            ; 0045d4fa
    MOV ECX,dword ptr [EDX + 0xc]       ; 0045d4fb
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0045d4fe
    SUB EAX,ECX                         ; 0045d505
    PUSH EAX                            ; 0045d507
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x4] ; 0045d508
    SHL EAX,0x4                         ; 0045d50c
    MOV EAX,dword ptr [EAX + 0x1b4d498] ; 0045d50f
    MOV ECX,dword ptr [EDX + 0x8]       ; 0045d515
    SAR EAX,0x10                        ; 0045d518
    SUB EAX,ECX                         ; 0045d51b
    PUSH EAX                            ; 0045d51d
    PUSH EDX                            ; 0045d51e
    ADD EBX,0x8                         ; 0045d51f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730 ; 0045d522
        ;   XREF to: 0045c730 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730(CDrawSurface * this_ptr, int start_x, int y, int end_x)
    ADD ESP,0x10                        ; 0045d527
    CMP EBX,ESI                         ; 0045d52a
    JL 0x0045d4df                       ; 0045d52c
        ;   XREF to: 0045d4df (CONDITIONAL_JUMP)  ; LAB_0045d4df
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0045d52e
        ;   Label: LAB_0045d52e
    INC EDX                             ; 0045d535
    XOR EBX,EBX                         ; 0045d536
    MOV dword ptr [ESP + 0xc8],EDX      ; 0045d538
    TEST EDI,EDI                        ; 0045d53f
    JLE 0x0045d586                      ; 0045d541
        ;   XREF to: 0045d586 (CONDITIONAL_JUMP)  ; LAB_0045d586
    XOR ESI,ESI                         ; 0045d543
    MOV EAX,dword ptr [ESP + ESI*0x1]   ; 0045d545
        ;   Label: LAB_0045d545
    SHL EAX,0x4                         ; 0045d548
    ADD EAX,0x1b4d490                   ; 0045d54b
    MOV ECX,dword ptr [ESP + 0xc8]      ; 0045d550
    LEA EDX,[ESI + 0x4]                 ; 0045d557
    CMP ECX,dword ptr [EAX + 0x4]       ; 0045d55a
    JL 0x0045d6bd                       ; 0045d55d
        ;   XREF to: 0045d6bd (CONDITIONAL_JUMP)  ; LAB_0045d6bd
    DEC EDI                             ; 0045d563
    MOV EAX,EDI                         ; 0045d564
    SUB EAX,EBX                         ; 0045d566
    SHL EAX,0x2                         ; 0045d568
    PUSH EAX                            ; 0045d56b
    LEA EAX,[ESP + 0x4]                 ; 0045d56c
    ADD EAX,EDX                         ; 0045d570
    PUSH EAX                            ; 0045d572
    LEA EAX,[ESP + 0x8]                 ; 0045d573
    ADD EAX,ESI                         ; 0045d577
    PUSH EAX                            ; 0045d579
    CALL crt_string.c_memmove_FUN_00566170 ; 0045d57a
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0045d57f
    CMP EBX,EDI                         ; 0045d582
        ;   Label: LAB_0045d582
    JL 0x0045d545                       ; 0045d584
        ;   XREF to: 0045d545 (CONDITIONAL_JUMP)  ; LAB_0045d545
    TEST EDI,EDI                        ; 0045d586
        ;   Label: LAB_0045d586
    JG 0x0045d46c                       ; 0045d588
        ;   XREF to: 0045d46c (CONDITIONAL_JUMP)  ; LAB_0045d46c
    CMP EBP,dword ptr [ESP + 0xbc]      ; 0045d58e
    JL 0x0045d460                       ; 0045d595
        ;   XREF to: 0045d460 (CONDITIONAL_JUMP)  ; LAB_0045d460
    ADD ESP,0xcc                        ; 0045d59b
        ;   Label: LAB_0045d59b
    POP EBP                             ; 0045d5a1
    POP EDI                             ; 0045d5a2
    POP ESI                             ; 0045d5a3
    POP EBX                             ; 0045d5a4
    RET                                 ; 0045d5a5
    JLE 0x0045d5be                      ; 0045d5a6
        ;   XREF to: 0045d5be (CONDITIONAL_JUMP)  ; LAB_0045d5be
        ;   Label: LAB_0045d5a6
    MOV EAX,ESI                         ; 0045d5a8
    MOV ESI,EBX                         ; 0045d5aa
    MOV EBX,EAX                         ; 0045d5ac
    MOV EAX,EBP                         ; 0045d5ae
    MOV EBP,dword ptr [ESP + 0xb0]      ; 0045d5b0
    MOV dword ptr [ESP + 0xb0],EAX      ; 0045d5b7
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0045d5be
        ;   Label: LAB_0045d5be
    CMP EBX,dword ptr [EAX + 0x14]      ; 0045d5c5
    JL 0x0045d3a8                       ; 0045d5c8
        ;   XREF to: 0045d3a8 (CONDITIONAL_JUMP)  ; LAB_0045d3a8
    CMP ESI,dword ptr [EAX + 0x1c]      ; 0045d5ce
    JG 0x0045d3a8                       ; 0045d5d1
        ;   XREF to: 0045d3a8 (CONDITIONAL_JUMP)  ; LAB_0045d3a8
    CMP dword ptr [ESP + 0xbc],0x28     ; 0045d5d7
    JL 0x0045d603                       ; 0045d5df
        ;   XREF to: 0045d603 (CONDITIONAL_JUMP)  ; LAB_0045d603
    MOV EAX,0x57da84                    ; 0045d5e1 | = "..\\cockpit\\drawsurf.cpp"
    MOV EDX,0x578                       ; 0045d5e6
    PUSH 0x57da9c                       ; 0045d5eb | = "CDrawSurface::fillPoly - too many edges!"
    MOV [0x01cc4800],EAX                ; 0045d5f0 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0045d5f5 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0045d5fb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0045d600
    MOV EAX,EBP                         ; 0045d603
        ;   Label: LAB_0045d603
    SHL EAX,0x10                        ; 0045d605
    MOV EDX,0x10000                     ; 0045d608
    MOV dword ptr [EDI + 0x8],EAX       ; 0045d60d | DAT_01b4d498
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0045d610
    MOV ECX,EDI                         ; 0045d617
    INC EAX                             ; 0045d619
    MOV dword ptr [EDI + 0x4],EBX       ; 0045d61a | DAT_01b4d494
    MOV dword ptr [ESP + 0xbc],EAX      ; 0045d61d
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0045d624
    SUB EBX,ESI                         ; 0045d62b
    SUB EAX,EBP                         ; 0045d62d
    MOV dword ptr [EDI],ESI             ; 0045d62f | DAT_01b4d490
    IMUL EDX                            ; 0045d631
    IDIV EBX                            ; 0045d633
    MOV dword ptr [ECX + 0xc],EAX       ; 0045d635 | DAT_01b4d49c
    MOV EDX,dword ptr [ESP + 0xe0]      ; 0045d638
    MOV EAX,dword ptr [ECX]             ; 0045d63f | DAT_01b4d490
    MOV EBX,dword ptr [EDX + 0x14]      ; 0045d641
    ADD EDI,0x10                        ; 0045d644
    CMP EAX,EBX                         ; 0045d647
    JGE 0x0045d66b                      ; 0045d649
        ;   XREF to: 0045d66b (CONDITIONAL_JUMP)  ; LAB_0045d66b
    MOV EAX,EBX                         ; 0045d64b
    MOV ESI,dword ptr [ECX]             ; 0045d64d | DAT_01b4d490
    MOV EBP,dword ptr [ECX + 0xc]       ; 0045d64f | DAT_01b4d49c
    SUB EAX,ESI                         ; 0045d652
    IMUL EAX,EBP                        ; 0045d654
    MOV EDX,dword ptr [ECX + 0x8]       ; 0045d657 | DAT_01b4d498
    ADD EDX,EAX                         ; 0045d65a
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0045d65c
    MOV dword ptr [ECX + 0x8],EDX       ; 0045d663 | DAT_01b4d498
    MOV EAX,dword ptr [EAX + 0x14]      ; 0045d666
    MOV dword ptr [ECX],EAX             ; 0045d669 | DAT_01b4d490
    MOV EDX,dword ptr [ESP + 0xe0]      ; 0045d66b
        ;   Label: LAB_0045d66b
    MOV EAX,dword ptr [ECX + 0x4]       ; 0045d672 | DAT_01b4d494
    MOV EBX,dword ptr [EDX + 0x1c]      ; 0045d675
    CMP EAX,EBX                         ; 0045d678
    JLE 0x0045d3a8                      ; 0045d67a
        ;   XREF to: 0045d3a8 (CONDITIONAL_JUMP)  ; LAB_0045d3a8
    MOV dword ptr [ECX + 0x4],EBX       ; 0045d680 | DAT_01b4d494
    JMP 0x0045d3a8                      ; 0045d683
        ;   XREF to: 0045d3a8 (UNCONDITIONAL_JUMP)  ; LAB_0045d3a8
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0045d688
        ;   Label: LAB_0045d688
    MOV ECX,dword ptr [ESP + 0xc8]      ; 0045d68f
    CMP ECX,dword ptr [EAX + 0x1b4d490] ; 0045d696 | DAT_01b4d490
    JL 0x0045d479                       ; 0045d69c
        ;   XREF to: 0045d479 (CONDITIONAL_JUMP)  ; LAB_0045d479
    MOV EBX,dword ptr [ESP + 0xc4]      ; 0045d6a2
    MOV dword ptr [ESP + EDI*0x4],EBP   ; 0045d6a9
    INC EDI                             ; 0045d6ac
    ADD EBX,0x10                        ; 0045d6ad
    INC EBP                             ; 0045d6b0
    MOV dword ptr [ESP + 0xc4],EBX      ; 0045d6b1
    JMP 0x0045d46c                      ; 0045d6b8
        ;   XREF to: 0045d46c (UNCONDITIONAL_JUMP)  ; LAB_0045d46c
    MOV ESI,dword ptr [EAX + 0x8]       ; 0045d6bd
        ;   Label: LAB_0045d6bd
    ADD ESI,dword ptr [EAX + 0xc]       ; 0045d6c0
    INC EBX                             ; 0045d6c3
    MOV dword ptr [EAX + 0x8],ESI       ; 0045d6c4
    MOV ESI,EDX                         ; 0045d6c7
    JMP 0x0045d582                      ; 0045d6c9
        ;   XREF to: 0045d582 (UNCONDITIONAL_JUMP)  ; LAB_0045d582

