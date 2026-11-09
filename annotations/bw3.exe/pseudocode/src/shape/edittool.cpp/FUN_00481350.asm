; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00481350(undefined4 param_1,int *param_2,int *param_3,int param_4)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00481920 at 004819b0
;
; Referenced Globals:
;   undefined4 DAT_005bd345
;   undefined4 DAT_005bd349
;   undefined4 DAT_005deffc
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c6b5c0
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;   engine_3d.c_FUN_00407b30
;   engine_matrix.c_transformToCache_FUN_004e5540
;   engine_mini3d.cpp_FUN_004f3520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481350
        ;   Label: shape_edittool.cpp_FUN_00481350
    PUSH ESI                            ; 00481351
    PUSH EDI                            ; 00481352
    PUSH EBP                            ; 00481353
    SUB ESP,0x16c                       ; 00481354
    MOV EBX,dword ptr [ESP + 0x184]     ; 0048135a
    MOV ESI,dword ptr [ESP + 0x188]     ; 00481361
    MOV EBP,dword ptr [ESP + 0x18c]     ; 00481368
    PUSH 0x5db0f0                       ; 0048136f
    PUSH 0x8                            ; 00481374
    LEA EAX,[ESP + 0x8]                 ; 00481376
    PUSH EAX                            ; 0048137a
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0048137b
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 00481380
    XOR EAX,EAX                         ; 00481383
    MOV EDX,dword ptr [ESI]             ; 00481385
        ;   Label: LAB_00481385
    MOV dword ptr [ESP + 0x160],EDX     ; 00481387
    IMUL EDX,EAX,0xc                    ; 0048138e
    MOV EDI,dword ptr [ESP + 0x160]     ; 00481391
        ;   Label: LAB_00481391
    MOV dword ptr [ESP + EDX*0x1],EDI   ; 00481398
    TEST AL,0x2                         ; 0048139b
    JNZ 0x004813e5                      ; 0048139d
        ;   XREF to: 004813e5 (CONDITIONAL_JUMP)  ; LAB_004813e5
    MOV EDI,dword ptr [ESI + 0x4]       ; 0048139f
    MOV dword ptr [ESP + 0x164],EDI     ; 004813a2
        ;   Label: LAB_004813a2
    MOV EDI,dword ptr [ESP + 0x164]     ; 004813a9
    MOV dword ptr [ESP + EDX*0x1 + 0x4],EDI ; 004813b0
    TEST AL,0x4                         ; 004813b4
    JZ 0x004813ea                       ; 004813b6
        ;   XREF to: 004813ea (CONDITIONAL_JUMP)  ; LAB_004813ea
    MOV EDI,dword ptr [EBX + 0x8]       ; 004813b8
    MOV dword ptr [ESP + 0x168],EDI     ; 004813bb
        ;   Label: LAB_004813bb
    ADD EDX,0xc                         ; 004813c2
    MOV EDI,dword ptr [ESP + 0x168]     ; 004813c5
    INC EAX                             ; 004813cc
    MOV dword ptr [ESP + EDX*0x1 + -0x4],EDI ; 004813cd
    CMP EAX,0x8                         ; 004813d1
    JGE 0x004813ef                      ; 004813d4
        ;   XREF to: 004813ef (CONDITIONAL_JUMP)  ; LAB_004813ef
    TEST AL,0x1                         ; 004813d6
    JZ 0x00481385                       ; 004813d8
        ;   XREF to: 00481385 (CONDITIONAL_JUMP)  ; LAB_00481385
    MOV EDI,dword ptr [EBX]             ; 004813da
    MOV dword ptr [ESP + 0x160],EDI     ; 004813dc
    JMP 0x00481391                      ; 004813e3
        ;   XREF to: 00481391 (UNCONDITIONAL_JUMP)  ; LAB_00481391
    MOV EDI,dword ptr [EBX + 0x4]       ; 004813e5
        ;   Label: LAB_004813e5
    JMP 0x004813a2                      ; 004813e8
        ;   XREF to: 004813a2 (UNCONDITIONAL_JUMP)  ; LAB_004813a2
    MOV EDI,dword ptr [ESI + 0x8]       ; 004813ea
        ;   Label: LAB_004813ea
    JMP 0x004813bb                      ; 004813ed
        ;   XREF to: 004813bb (UNCONDITIONAL_JUMP)  ; LAB_004813bb
    CMP dword ptr [0x01c5baec],0x0      ; 004813ef | DAT_01c5baec
        ;   Label: LAB_004813ef
    JZ 0x0048190c                       ; 004813f6
        ;   XREF to: 0048190c (CONDITIONAL_JUMP)  ; LAB_0048190c
    MOV EDX,EBP                         ; 004813fc
    AND EDX,0xff                        ; 004813fe
    LEA EAX,[EDX*0x4 + 0x0]             ; 00481404
    SUB EAX,EDX                         ; 0048140b
    XOR EBX,EBX                         ; 0048140d
    XOR EDX,EDX                         ; 0048140f
    MOV BL,byte ptr [EAX + 0x1c6af99]   ; 00481411
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 00481417
    SHL EBX,0x8                         ; 0048141d
    SHL EDX,0x10                        ; 00481420
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 00481423
    OR EDX,EBX                          ; 00481429
    AND EAX,0xff                        ; 0048142b
    OR EAX,EDX                          ; 00481430
    PUSH EAX                            ; 00481432
    CALL engine_mini3d.cpp_FUN_004f3520 ; 00481433
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 00481438
    XOR ECX,ECX                         ; 0048143b
        ;   Label: LAB_0048143b
    MOV EBP,ESP                         ; 0048143d
    MOV dword ptr [ESP + 0x15c],ECX     ; 0048143f
    MOV ESI,dword ptr [ESP + 0x15c]     ; 00481446
        ;   Label: LAB_00481446
    XOR SI,0x1                          ; 0048144d
    IMUL ESI,ESI,0xc                    ; 00481451
    MOV EAX,ESP                         ; 00481454
    LEA EBX,[ESP + 0xe4]                ; 00481456
    ADD ESI,EAX                         ; 0048145d
    MOV EAX,EBP                         ; 0048145f
    FLD float ptr [EAX]                 ; 00481461
    FMUL float ptr [0x005deffc]         ; 00481463 | DAT_005deffc
    FISTP dword ptr [EBX]               ; 00481469
    FLD float ptr [EAX + 0x4]           ; 0048146b
    FMUL float ptr [0x005deffc]         ; 0048146e | DAT_005deffc
    FISTP dword ptr [EBX + 0x4]         ; 00481474
    FLD float ptr [EAX + 0x8]           ; 00481477
    FMUL float ptr [0x005deffc]         ; 0048147a | DAT_005deffc
    FISTP dword ptr [EBX + 0x8]         ; 00481480
    LEA EAX,[ESP + 0xe4]                ; 00481483
    PUSH EAX                            ; 0048148a
    PUSH 0x0                            ; 0048148b
    CALL engine_matrix.c_transformToCache_FUN_004e5540 ; 0048148d
        ;   XREF to: 004e5540 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e5540(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [ESI]                 ; 00481492
    FMUL float ptr [0x005bd345]         ; 00481494 | DAT_005bd345
    FLD float ptr [ESI + 0x4]           ; 0048149a
    FMUL float ptr [0x005bd345]         ; 0048149d | DAT_005bd345
    FLD float ptr [ESI + 0x8]           ; 004814a3
    FMUL float ptr [0x005bd345]         ; 004814a6 | DAT_005bd345
    LEA EDI,[ESP + 0x11c]               ; 004814ac
    ADD ESP,0x8                         ; 004814b3
    LEA ESI,[ESP + 0xfc]                ; 004814b6
    FXCH ST2                            ; 004814bd
    FSTP float ptr [ESP + 0xfc]         ; 004814bf
    FSTP float ptr [ESP + 0x100]        ; 004814c6
    FSTP float ptr [ESP + 0x104]        ; 004814cd
    MOVSD ES:EDI,ESI                    ; 004814d4
    MOVSD ES:EDI,ESI                    ; 004814d5
    MOVSD ES:EDI,ESI                    ; 004814d6
    FLD float ptr [EBP]                 ; 004814d7
    FMUL float ptr [0x005bd349]         ; 004814da | DAT_005bd349
    FLD float ptr [EBP + 0x4]           ; 004814e0
    FMUL float ptr [0x005bd349]         ; 004814e3 | DAT_005bd349
    FLD float ptr [EBP + 0x8]           ; 004814e9
    FMUL float ptr [0x005bd349]         ; 004814ec | DAT_005bd349
    LEA EBX,[ESP + 0xe4]                ; 004814f2
    LEA EDI,[ESP + 0x90]                ; 004814f9
    LEA ESI,[ESP + 0x60]                ; 00481500
    FXCH ST2                            ; 00481504
    FSTP float ptr [ESP + 0x60]         ; 00481506
    FSTP float ptr [ESP + 0x64]         ; 0048150a
    FSTP float ptr [ESP + 0x68]         ; 0048150e
    MOVSD ES:EDI,ESI                    ; 00481512
    MOVSD ES:EDI,ESI                    ; 00481513
    MOVSD ES:EDI,ESI                    ; 00481514
    LEA EAX,[ESP + 0xf0]                ; 00481515
    FLD float ptr [ESP + 0x90]          ; 0048151c
    FLD float ptr [ESP + 0x94]          ; 00481523
    FLD float ptr [ESP + 0x98]          ; 0048152a
    LEA EDI,[ESP + 0xf0]                ; 00481531
    LEA ESI,[ESP + 0x108]               ; 00481538
    FXCH ST2                            ; 0048153f
    FADD float ptr [ESP + 0x114]        ; 00481541
    FXCH                                ; 00481548
    FADD float ptr [ESP + 0x118]        ; 0048154a
    FXCH ST2                            ; 00481551
    FADD float ptr [ESP + 0x11c]        ; 00481553
    FXCH                                ; 0048155a
    FSTP float ptr [ESP + 0x108]        ; 0048155c
    FXCH                                ; 00481563
    FSTP float ptr [ESP + 0x10c]        ; 00481565
    FSTP float ptr [ESP + 0x110]        ; 0048156c
    MOVSD ES:EDI,ESI                    ; 00481573
    MOVSD ES:EDI,ESI                    ; 00481574
    MOVSD ES:EDI,ESI                    ; 00481575
    FLD float ptr [EAX]                 ; 00481576
    FMUL float ptr [0x005deffc]         ; 00481578 | DAT_005deffc
    FISTP dword ptr [EBX]               ; 0048157e
    FLD float ptr [EAX + 0x4]           ; 00481580
    FMUL float ptr [0x005deffc]         ; 00481583 | DAT_005deffc
    FISTP dword ptr [EBX + 0x4]         ; 00481589
    FLD float ptr [EAX + 0x8]           ; 0048158c
    FMUL float ptr [0x005deffc]         ; 0048158f | DAT_005deffc
    FISTP dword ptr [EBX + 0x8]         ; 00481595
    LEA EAX,[ESP + 0xe4]                ; 00481598
    PUSH EAX                            ; 0048159f
    PUSH 0x1                            ; 004815a0
    CALL engine_matrix.c_transformToCache_FUN_004e5540 ; 004815a2
        ;   XREF to: 004e5540 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e5540(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 004815a7
    MOV ESI,0x60b044                    ; 004815aa
    SUB ESP,0x30                        ; 004815af
    MOV ECX,0xc                         ; 004815b2
    MOV EDI,ESP                         ; 004815b7
    MOVSD.REP ES:EDI,ESI                ; 004815b9
    SUB ESP,0x30                        ; 004815bb
    MOV ECX,0xc                         ; 004815be
    MOV ESI,0x60b014                    ; 004815c3
    MOV EDI,ESP                         ; 004815c8
    MOVSD.REP ES:EDI,ESI                ; 004815ca
    CALL engine_3d.c_FUN_00407b30       ; 004815cc
        ;   XREF to: 00407b30 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_FUN_00407b30()
    ADD ESP,0x60                        ; 004815d1
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004815d4
    XOR AL,0x2                          ; 004815db
    IMUL EAX,EAX,0xc                    ; 004815dd
    MOV ESI,ESP                         ; 004815e0
    LEA EBX,[ESP + 0x144]               ; 004815e2
    ADD ESI,EAX                         ; 004815e9
    MOV EAX,EBP                         ; 004815eb
    FLD float ptr [EAX]                 ; 004815ed
    FMUL float ptr [0x005deffc]         ; 004815ef | DAT_005deffc
    FISTP dword ptr [EBX]               ; 004815f5
    FLD float ptr [EAX + 0x4]           ; 004815f7
    FMUL float ptr [0x005deffc]         ; 004815fa | DAT_005deffc
    FISTP dword ptr [EBX + 0x4]         ; 00481600
    FLD float ptr [EAX + 0x8]           ; 00481603
    FMUL float ptr [0x005deffc]         ; 00481606 | DAT_005deffc
    FISTP dword ptr [EBX + 0x8]         ; 0048160c
    LEA EAX,[ESP + 0x144]               ; 0048160f
    PUSH EAX                            ; 00481616
    PUSH 0x0                            ; 00481617
    CALL engine_matrix.c_transformToCache_FUN_004e5540 ; 00481619
        ;   XREF to: 004e5540 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e5540(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [ESI]                 ; 0048161e
    FMUL float ptr [0x005bd345]         ; 00481620 | DAT_005bd345
    FLD float ptr [ESI + 0x4]           ; 00481626
    FMUL float ptr [0x005bd345]         ; 00481629 | DAT_005bd345
    FLD float ptr [ESI + 0x8]           ; 0048162f
    FMUL float ptr [0x005bd345]         ; 00481632 | DAT_005bd345
    LEA EDI,[ESP + 0x80]                ; 00481638
    ADD ESP,0x8                         ; 0048163f
    LEA ESI,[ESP + 0xcc]                ; 00481642
    FXCH ST2                            ; 00481649
    FSTP float ptr [ESP + 0xcc]         ; 0048164b
    FSTP float ptr [ESP + 0xd0]         ; 00481652
    FSTP float ptr [ESP + 0xd4]         ; 00481659
    MOVSD ES:EDI,ESI                    ; 00481660
    MOVSD ES:EDI,ESI                    ; 00481661
    MOVSD ES:EDI,ESI                    ; 00481662
    FLD float ptr [EBP]                 ; 00481663
    FMUL float ptr [0x005bd349]         ; 00481666 | DAT_005bd349
    FLD float ptr [EBP + 0x4]           ; 0048166c
    FMUL float ptr [0x005bd349]         ; 0048166f | DAT_005bd349
    FLD float ptr [EBP + 0x8]           ; 00481675
    FMUL float ptr [0x005bd349]         ; 00481678 | DAT_005bd349
    LEA EDI,[ESP + 0x150]               ; 0048167e
    LEA ESI,[ESP + 0x138]               ; 00481685
    FXCH ST2                            ; 0048168c
    FSTP float ptr [ESP + 0x138]        ; 0048168e
    FSTP float ptr [ESP + 0x13c]        ; 00481695
    FSTP float ptr [ESP + 0x140]        ; 0048169c
    MOVSD ES:EDI,ESI                    ; 004816a3
    MOVSD ES:EDI,ESI                    ; 004816a4
    MOVSD ES:EDI,ESI                    ; 004816a5
    FLD float ptr [ESP + 0x150]         ; 004816a6
    FLD float ptr [ESP + 0x154]         ; 004816ad
    FLD float ptr [ESP + 0x158]         ; 004816b4
    LEA EDI,[ESP + 0xb4]                ; 004816bb
    LEA ESI,[ESP + 0x12c]               ; 004816c2
    FXCH ST2                            ; 004816c9
    FADD float ptr [ESP + 0x78]         ; 004816cb
    FXCH                                ; 004816cf
    FADD float ptr [ESP + 0x7c]         ; 004816d1
    FXCH ST2                            ; 004816d5
    FADD float ptr [ESP + 0x80]         ; 004816d7
    FXCH                                ; 004816de
    FSTP float ptr [ESP + 0x12c]        ; 004816e0
    FXCH                                ; 004816e7
    FSTP float ptr [ESP + 0x130]        ; 004816e9
    FSTP float ptr [ESP + 0x134]        ; 004816f0
    MOVSD ES:EDI,ESI                    ; 004816f7
    MOVSD ES:EDI,ESI                    ; 004816f8
    MOVSD ES:EDI,ESI                    ; 004816f9
    LEA EBX,[ESP + 0x144]               ; 004816fa
    LEA EAX,[ESP + 0xb4]                ; 00481701
    FLD float ptr [EAX]                 ; 00481708
    FMUL float ptr [0x005deffc]         ; 0048170a | DAT_005deffc
    FISTP dword ptr [EBX]               ; 00481710
    FLD float ptr [EAX + 0x4]           ; 00481712
    FMUL float ptr [0x005deffc]         ; 00481715 | DAT_005deffc
    FISTP dword ptr [EBX + 0x4]         ; 0048171b
    FLD float ptr [EAX + 0x8]           ; 0048171e
    FMUL float ptr [0x005deffc]         ; 00481721 | DAT_005deffc
    FISTP dword ptr [EBX + 0x8]         ; 00481727
    LEA EAX,[ESP + 0x144]               ; 0048172a
    PUSH EAX                            ; 00481731
    PUSH 0x1                            ; 00481732
    CALL engine_matrix.c_transformToCache_FUN_004e5540 ; 00481734
        ;   XREF to: 004e5540 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e5540(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 00481739
    MOV ESI,0x60b044                    ; 0048173c
    SUB ESP,0x30                        ; 00481741
    MOV ECX,0xc                         ; 00481744
    MOV EDI,ESP                         ; 00481749
    MOVSD.REP ES:EDI,ESI                ; 0048174b
    SUB ESP,0x30                        ; 0048174d
    MOV ECX,0xc                         ; 00481750
    MOV ESI,0x60b014                    ; 00481755
    MOV EDI,ESP                         ; 0048175a
    MOVSD.REP ES:EDI,ESI                ; 0048175c
    CALL engine_3d.c_FUN_00407b30       ; 0048175e
        ;   XREF to: 00407b30 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_FUN_00407b30()
    ADD ESP,0x60                        ; 00481763
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00481766
    XOR AL,0x4                          ; 0048176d
    IMUL EAX,EAX,0xc                    ; 0048176f
    MOV ESI,ESP                         ; 00481772
    LEA EBX,[ESP + 0x6c]                ; 00481774
    ADD ESI,EAX                         ; 00481778
    MOV EAX,EBP                         ; 0048177a
    FLD float ptr [EAX]                 ; 0048177c
    FMUL float ptr [0x005deffc]         ; 0048177e | DAT_005deffc
    FISTP dword ptr [EBX]               ; 00481784
    FLD float ptr [EAX + 0x4]           ; 00481786
    FMUL float ptr [0x005deffc]         ; 00481789 | DAT_005deffc
    FISTP dword ptr [EBX + 0x4]         ; 0048178f
    FLD float ptr [EAX + 0x8]           ; 00481792
    FMUL float ptr [0x005deffc]         ; 00481795 | DAT_005deffc
    FISTP dword ptr [EBX + 0x8]         ; 0048179b
    LEA EAX,[ESP + 0x6c]                ; 0048179e
    PUSH EAX                            ; 004817a2
    PUSH 0x0                            ; 004817a3
    CALL engine_matrix.c_transformToCache_FUN_004e5540 ; 004817a5
        ;   XREF to: 004e5540 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e5540(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [0x005bd345]          ; 004817aa | DAT_005bd345
    FLD float ptr [ESI]                 ; 004817b0
    FMUL ST1                            ; 004817b2
    FLD float ptr [ESI + 0x4]           ; 004817b4
    FMUL ST2                            ; 004817b7
    FLD float ptr [ESI + 0x8]           ; 004817b9
    FMULP ST3                           ; 004817bc
    LEA EDI,[ESP + 0xa4]                ; 004817be
    ADD ESP,0x8                         ; 004817c5
    LEA ESI,[ESP + 0xa8]                ; 004817c8
    FXCH                                ; 004817cf
    FSTP float ptr [ESP + 0xa8]         ; 004817d1
    FSTP float ptr [ESP + 0xac]         ; 004817d8
    FSTP float ptr [ESP + 0xb0]         ; 004817df
    MOVSD ES:EDI,ESI                    ; 004817e6
    MOVSD ES:EDI,ESI                    ; 004817e7
    MOVSD ES:EDI,ESI                    ; 004817e8
    FLD float ptr [0x005bd349]          ; 004817e9 | DAT_005bd349
    FLD float ptr [EBP]                 ; 004817ef
    FMUL ST1                            ; 004817f2
    FLD float ptr [EBP + 0x4]           ; 004817f4
    FMUL ST2                            ; 004817f7
    FLD float ptr [EBP + 0x8]           ; 004817f9
    FMULP ST3                           ; 004817fc
    LEA EBX,[ESP + 0x6c]                ; 004817fe
    LEA EDI,[ESP + 0x120]               ; 00481802
    LEA ESI,[ESP + 0xd8]                ; 00481809
    FXCH                                ; 00481810
    FSTP float ptr [ESP + 0xd8]         ; 00481812
    FSTP float ptr [ESP + 0xdc]         ; 00481819
    FSTP float ptr [ESP + 0xe0]         ; 00481820
    MOVSD ES:EDI,ESI                    ; 00481827
    MOVSD ES:EDI,ESI                    ; 00481828
    MOVSD ES:EDI,ESI                    ; 00481829
    LEA EAX,[ESP + 0x84]                ; 0048182a
    FLD float ptr [ESP + 0x120]         ; 00481831
    FLD float ptr [ESP + 0x124]         ; 00481838
    FLD float ptr [ESP + 0x128]         ; 0048183f
    LEA EDI,[ESP + 0x84]                ; 00481846
    LEA ESI,[ESP + 0xc0]                ; 0048184d
    FXCH ST2                            ; 00481854
    FADD float ptr [ESP + 0x9c]         ; 00481856
    FXCH                                ; 0048185d
    FADD float ptr [ESP + 0xa0]         ; 0048185f
    FXCH ST2                            ; 00481866
    FADD float ptr [ESP + 0xa4]         ; 00481868
    FXCH                                ; 0048186f
    FSTP float ptr [ESP + 0xc0]         ; 00481871
    FXCH                                ; 00481878
    FSTP float ptr [ESP + 0xc4]         ; 0048187a
    FSTP float ptr [ESP + 0xc8]         ; 00481881
    MOVSD ES:EDI,ESI                    ; 00481888
    MOVSD ES:EDI,ESI                    ; 00481889
    MOVSD ES:EDI,ESI                    ; 0048188a
    FLD float ptr [EAX]                 ; 0048188b
    FMUL float ptr [0x005deffc]         ; 0048188d | DAT_005deffc
    FISTP dword ptr [EBX]               ; 00481893
    FLD float ptr [EAX + 0x4]           ; 00481895
    FMUL float ptr [0x005deffc]         ; 00481898 | DAT_005deffc
    FISTP dword ptr [EBX + 0x4]         ; 0048189e
    FLD float ptr [EAX + 0x8]           ; 004818a1
    FMUL float ptr [0x005deffc]         ; 004818a4 | DAT_005deffc
    FISTP dword ptr [EBX + 0x8]         ; 004818aa
    LEA EAX,[ESP + 0x6c]                ; 004818ad
    PUSH EAX                            ; 004818b1
    PUSH 0x1                            ; 004818b2
    CALL engine_matrix.c_transformToCache_FUN_004e5540 ; 004818b4
        ;   XREF to: 004e5540 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e5540(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 004818b9
    MOV ESI,0x60b044                    ; 004818bc
    SUB ESP,0x30                        ; 004818c1
    MOV ECX,0xc                         ; 004818c4
    MOV EDI,ESP                         ; 004818c9
    MOVSD.REP ES:EDI,ESI                ; 004818cb
    SUB ESP,0x30                        ; 004818cd
    MOV ECX,0xc                         ; 004818d0
    MOV ESI,0x60b014                    ; 004818d5
    MOV EDI,ESP                         ; 004818da
    MOVSD.REP ES:EDI,ESI                ; 004818dc
    CALL engine_3d.c_FUN_00407b30       ; 004818de
        ;   XREF to: 00407b30 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_FUN_00407b30()
    ADD ESP,0x60                        ; 004818e3
    MOV EBX,dword ptr [ESP + 0x15c]     ; 004818e6
    INC EBX                             ; 004818ed
    ADD EBP,0xc                         ; 004818ee
    MOV dword ptr [ESP + 0x15c],EBX     ; 004818f1
    CMP EBX,0x8                         ; 004818f8
    JL 0x00481446                       ; 004818fb
        ;   XREF to: 00481446 (CONDITIONAL_JUMP)  ; LAB_00481446
    ADD ESP,0x16c                       ; 00481901
    POP EBP                             ; 00481907
    POP EDI                             ; 00481908
    POP ESI                             ; 00481909
    POP EBX                             ; 0048190a
    RET                                 ; 0048190b
    MOV dword ptr [0x01c6b5c0],EBP      ; 0048190c | DAT_01c6b5c0
        ;   Label: LAB_0048190c
    JMP 0x0048143b                      ; 00481912
        ;   XREF to: 0048143b (UNCONDITIONAL_JUMP)  ; LAB_0048143b

