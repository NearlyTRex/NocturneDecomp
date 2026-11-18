; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bc288(uint *param_1,int *param_2,undefined1 *param_3)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c23bf at 005c2471
;   crt_unknown.c_FUN_005c49cc at 005c4a2d
;
; Called Functions:
;   crt_unknown.c_FUN_005bc220
;   crt_unknown.c_FUN_005bc597
;   crt_unknown.c_FUN_005c24dc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005bc288
        ;   Label: crt_unknown.c_FUN_005bc288
    MOV EBP,ESP                         ; 005bc289
    PUSH EBX                            ; 005bc28b
    PUSH ESI                            ; 005bc28c
    PUSH EDI                            ; 005bc28d
    SUB ESP,0x88                        ; 005bc28e
    MOV EBX,dword ptr [EBP + 0x8]       ; 005bc294
    MOV ESI,dword ptr [EBP + 0xc]       ; 005bc297
    PUSH 0x0                            ; 005bc29a
    FSTCW word ptr [ESP]                ; 005bc29c
    POP EAX                             ; 005bc2a0
    MOV dword ptr [EBP + -0x14],EAX     ; 005bc2a1
    OR AH,0x3                           ; 005bc2a4
    AND EAX,0xffff                      ; 005bc2a7
    PUSH EAX                            ; 005bc2ac
    FLDCW word ptr [ESP]                ; 005bc2ad
    POP EAX                             ; 005bc2b0
    MOV dword ptr [ESI + 0x14],0x0      ; 005bc2b1
    MOV AX,word ptr [EBX + 0x8]         ; 005bc2b8
    MOV word ptr [EBP + -0x40],AX       ; 005bc2bc
    MOV EAX,dword ptr [EBX + 0x4]       ; 005bc2c0
    MOV dword ptr [EBP + -0x44],EAX     ; 005bc2c3
    MOV EAX,dword ptr [EBX]             ; 005bc2c6
    MOV dword ptr [EBP + -0x48],EAX     ; 005bc2c8
    TEST byte ptr [EBP + -0x3f],0x80    ; 005bc2cb
    JZ 0x005bc2d8                       ; 005bc2cf
        ;   XREF to: 005bc2d8 (CONDITIONAL_JUMP)  ; LAB_005bc2d8
    MOV dword ptr [ESI + 0x14],0xffffffff ; 005bc2d1
    AND byte ptr [EBP + -0x3f],0x7f     ; 005bc2d8
        ;   Label: LAB_005bc2d8
    MOV dword ptr [ESI + 0x1c],0x0      ; 005bc2dc
    MOV dword ptr [ESI + 0x20],0x0      ; 005bc2e3
    LEA EAX,[EBP + -0x48]               ; 005bc2ea
    MOV dword ptr [ESI + 0x24],0x0      ; 005bc2ed
    PUSH EAX                            ; 005bc2f4
    MOV dword ptr [ESI + 0x28],0x0      ; 005bc2f5
    XOR EDI,EDI                         ; 005bc2fc
    MOV dword ptr [ESI + 0x18],0x0      ; 005bc2fe
    CALL crt_unknown.c_FUN_005c24dc     ; 005bc305
        ;   XREF to: 005c24dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c24dc()
    ADD ESP,0x4                         ; 005bc30a
    CMP EAX,0x4                         ; 005bc30d
    JA 0x005bc490                       ; 005bc310
        ;   XREF to: 005bc490 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr CS:[EAX*0x4 + 0x5bc274] ; 005bc316 | caseD_4 | caseD_1 | caseD_2
        ;   Label: switchD
    XOR ECX,ECX                         ; 005bc31e
        ;   Label: caseD_0
    MOV dword ptr [ESI + 0x14],0x0      ; 005bc320
    MOV dword ptr [EBP + -0x20],ECX     ; 005bc327
    JMP 0x005bc490                      ; 005bc32a
        ;   XREF to: 005bc490 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x10]      ; 005bc32f
        ;   Label: caseD_2
    MOV byte ptr [EAX],0x6e             ; 005bc332
    MOV byte ptr [EAX + 0x1],0x61       ; 005bc335
    MOV byte ptr [EAX + 0x2],0x6e       ; 005bc339
    MOV byte ptr [EAX + 0x3],0x0        ; 005bc33d
        ;   Label: LAB_005bc33d
    MOV dword ptr [ESI + 0x1c],0x3      ; 005bc341
    JMP 0x005bc71c                      ; 005bc348
        ;   XREF to: 005bc71c (UNCONDITIONAL_JUMP)  ; LAB_005bc71c
    MOV EAX,dword ptr [EBP + 0x10]      ; 005bc34d
        ;   Label: caseD_3
    MOV byte ptr [EAX],0x69             ; 005bc350
    MOV byte ptr [EAX + 0x1],0x6e       ; 005bc353
    MOV byte ptr [EAX + 0x2],0x66       ; 005bc357
    JMP 0x005bc33d                      ; 005bc35b
        ;   XREF to: 005bc33d (UNCONDITIONAL_JUMP)  ; LAB_005bc33d
    XOR EAX,EAX                         ; 005bc35d
        ;   Label: caseD_1
    MOV AX,word ptr [EBP + -0x40]       ; 005bc35f
    SUB EAX,0x3ffe                      ; 005bc363
    MOV dword ptr [EBP + -0x20],EAX     ; 005bc368
    IMUL EDX,EAX,0x7597                 ; 005bc36b
    MOV EBX,0x186a0                     ; 005bc371
    MOV EAX,EDX                         ; 005bc376
    SAR EDX,0x1f                        ; 005bc378
    IDIV EBX                            ; 005bc37b
    MOV dword ptr [EBP + -0x20],EAX     ; 005bc37d
    LEA ECX,[EAX + -0x4]                ; 005bc380
    MOV dword ptr [EBP + -0x20],ECX     ; 005bc383
    TEST ECX,ECX                        ; 005bc386
    JZ 0x005bc490                       ; 005bc388
        ;   XREF to: 005bc490 (CONDITIONAL_JUMP)  ; default
    JGE 0x005bc3b1                      ; 005bc38e
        ;   XREF to: 005bc3b1 (CONDITIONAL_JUMP)  ; LAB_005bc3b1
    MOV EAX,ECX                         ; 005bc390
    NEG EAX                             ; 005bc392
    ADD EAX,0x3                         ; 005bc394
    AND AL,0xfc                         ; 005bc397
    MOV EBX,EAX                         ; 005bc399
    NEG EBX                             ; 005bc39b
    MOV dword ptr [EBP + -0x20],EAX     ; 005bc39d
    MOV EAX,EBX                         ; 005bc3a0
    NEG EAX                             ; 005bc3a2
    PUSH EAX                            ; 005bc3a4
    LEA EAX,[EBP + -0x48]               ; 005bc3a5
    PUSH EAX                            ; 005bc3a8
    MOV dword ptr [EBP + -0x20],EBX     ; 005bc3a9
    JMP 0x005bc488                      ; 005bc3ac
        ;   XREF to: 005bc488 (UNCONDITIONAL_JUMP)  ; LAB_005bc488
    MOV EDX,dword ptr [EBP + -0x40]     ; 005bc3b1
        ;   Label: LAB_005bc3b1
    CMP DX,0x4019                       ; 005bc3b4
    JC 0x005bc3c6                       ; 005bc3b9
        ;   XREF to: 005bc3c6 (CONDITIONAL_JUMP)  ; LAB_005bc3c6
    JNZ 0x005bc3d0                      ; 005bc3bb
        ;   XREF to: 005bc3d0 (CONDITIONAL_JUMP)  ; LAB_005bc3d0
    CMP dword ptr [EBP + -0x44],0xbebc2000 ; 005bc3bd
    JNC 0x005bc3d0                      ; 005bc3c4
        ;   XREF to: 005bc3d0 (CONDITIONAL_JUMP)  ; LAB_005bc3d0
    XOR EDX,EDX                         ; 005bc3c6
        ;   Label: LAB_005bc3c6
    MOV dword ptr [EBP + -0x20],EDX     ; 005bc3c8
    JMP 0x005bc490                      ; 005bc3cb
        ;   XREF to: 005bc490 (UNCONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBP + -0x40]     ; 005bc3d0
        ;   Label: LAB_005bc3d0
    CMP CX,0x4034                       ; 005bc3d3
    JC 0x005bc3fe                       ; 005bc3d8
        ;   XREF to: 005bc3fe (CONDITIONAL_JUMP)  ; LAB_005bc3fe
    JNZ 0x005bc47a                      ; 005bc3da
        ;   XREF to: 005bc47a (CONDITIONAL_JUMP)  ; LAB_005bc47a
    MOV ECX,dword ptr [EBP + -0x44]     ; 005bc3e0
    CMP ECX,0x8e1bc9bf                  ; 005bc3e3
    JC 0x005bc3fe                       ; 005bc3e9
        ;   XREF to: 005bc3fe (CONDITIONAL_JUMP)  ; LAB_005bc3fe
    JNZ 0x005bc47a                      ; 005bc3eb
        ;   XREF to: 005bc47a (CONDITIONAL_JUMP)  ; LAB_005bc47a
    CMP dword ptr [EBP + -0x48],0x4000000 ; 005bc3f1
    JNC 0x005bc47a                      ; 005bc3f8
        ;   XREF to: 005bc47a (CONDITIONAL_JUMP)  ; LAB_005bc47a
    MOV EDX,0x4019                      ; 005bc3fe
        ;   Label: LAB_005bc3fe
    MOV EBX,0xbebc2000                  ; 005bc403
    LEA EAX,[EBP + -0x48]               ; 005bc408
    XOR ECX,ECX                         ; 005bc40b
    MOV word ptr [EBP + -0x34],DX       ; 005bc40d
    MOV dword ptr [EBP + -0x38],EBX     ; 005bc411
    LEA EBX,[EBP + -0x30]               ; 005bc414
    LEA EDX,[EBP + -0x3c]               ; 005bc417
    MOV dword ptr [EBP + -0x3c],ECX     ; 005bc41a
    FLD extended double ptr [EAX]       ; 005bc41d
    FLD extended double ptr [EDX]       ; 005bc41f
    FDIVP                               ; 005bc421
    FSTP extended double ptr [EBX]      ; 005bc423
    LEA EAX,[EBP + -0x30]               ; 005bc425
    LEA EBX,[EBP + -0x3c]               ; 005bc428
    FLD extended double ptr [EAX]       ; 005bc42b
    PUSH EAX                            ; 005bc42d
    PUSH EAX                            ; 005bc42e
    FSTCW word ptr [ESP]                ; 005bc42f
    POP EAX                             ; 005bc433
    PUSH EAX                            ; 005bc434
    OR AH,0xc                           ; 005bc435
    PUSH EAX                            ; 005bc438
    FLDCW word ptr [ESP]                ; 005bc439
    POP EAX                             ; 005bc43c
    FISTP dword ptr [ESP + 0x4]         ; 005bc43d
    FLDCW word ptr [ESP]                ; 005bc441
    POP EAX                             ; 005bc444
    POP EAX                             ; 005bc445
    LEA EDX,[EBP + -0x30]               ; 005bc446
    MOV EDI,EAX                         ; 005bc449
    PUSH EAX                            ; 005bc44b
    FILD dword ptr [ESP]                ; 005bc44c
    POP EAX                             ; 005bc44f
    FSTP extended double ptr [EDX]      ; 005bc450
    LEA EDX,[EBP + -0x3c]               ; 005bc452
    LEA EAX,[EBP + -0x30]               ; 005bc455
    FLD extended double ptr [EAX]       ; 005bc458
    FLD extended double ptr [EDX]       ; 005bc45a
    FMULP                               ; 005bc45c
    FSTP extended double ptr [EBX]      ; 005bc45e
    LEA EBX,[EBP + -0x48]               ; 005bc460
    LEA EDX,[EBP + -0x3c]               ; 005bc463
    LEA EAX,[EBP + -0x48]               ; 005bc466
    FLD extended double ptr [EAX]       ; 005bc469
    FLD extended double ptr [EDX]       ; 005bc46b
    FSUBP                               ; 005bc46d
    FSTP extended double ptr [EBX]      ; 005bc46f
    MOV dword ptr [EBP + -0x20],0x8     ; 005bc471
    JMP 0x005bc490                      ; 005bc478
        ;   XREF to: 005bc490 (UNCONDITIONAL_JUMP)  ; default
    AND byte ptr [EBP + -0x20],0xfc     ; 005bc47a
        ;   Label: LAB_005bc47a
    MOV EAX,dword ptr [EBP + -0x20]     ; 005bc47e
    NEG EAX                             ; 005bc481
    PUSH EAX                            ; 005bc483
    LEA EAX,[EBP + -0x48]               ; 005bc484
    PUSH EAX                            ; 005bc487
    CALL crt_unknown.c_FUN_005bc220     ; 005bc488
        ;   XREF to: 005bc220 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bc220()
        ;   Label: LAB_005bc488
    ADD ESP,0x8                         ; 005bc48d
    TEST byte ptr [ESI + 0x8],0x2       ; 005bc490
        ;   Label: default
    JZ 0x005bc4b2                       ; 005bc494
        ;   XREF to: 005bc4b2 (CONDITIONAL_JUMP)  ; LAB_005bc4b2
    MOV EDX,dword ptr [EBP + -0x20]     ; 005bc496
    MOV EAX,dword ptr [ESI]             ; 005bc499
    ADD EAX,EDX                         ; 005bc49b
    ADD EAX,0xa                         ; 005bc49d
    MOV EBX,dword ptr [ESI + 0x4]       ; 005bc4a0
    MOV dword ptr [EBP + -0x18],EAX     ; 005bc4a3
    TEST EBX,EBX                        ; 005bc4a6
    JLE 0x005bc4ba                      ; 005bc4a8
        ;   XREF to: 005bc4ba (CONDITIONAL_JUMP)  ; LAB_005bc4ba
    LEA ECX,[EAX + EBX*0x1]             ; 005bc4aa
    MOV dword ptr [EBP + -0x18],ECX     ; 005bc4ad
    JMP 0x005bc4ba                      ; 005bc4b0
        ;   XREF to: 005bc4ba (UNCONDITIONAL_JUMP)  ; LAB_005bc4ba
    MOV EAX,dword ptr [ESI]             ; 005bc4b2
        ;   Label: LAB_005bc4b2
    ADD EAX,0x7                         ; 005bc4b4
    MOV dword ptr [EBP + -0x18],EAX     ; 005bc4b7
    MOV BH,byte ptr [ESI + 0x8]         ; 005bc4ba
        ;   Label: LAB_005bc4ba
    MOV EAX,0xf                         ; 005bc4bd
    TEST BH,0x20                        ; 005bc4c2
    JZ 0x005bc4cc                       ; 005bc4c5
        ;   XREF to: 005bc4cc (CONDITIONAL_JUMP)  ; LAB_005bc4cc
    MOV EAX,0x14                        ; 005bc4c7
    TEST byte ptr [ESI + 0x8],0x40      ; 005bc4cc
        ;   Label: LAB_005bc4cc
    JZ 0x005bc4d4                       ; 005bc4d0
        ;   XREF to: 005bc4d4 (CONDITIONAL_JUMP)  ; LAB_005bc4d4
    ADD EAX,EAX                         ; 005bc4d2
    MOV EDX,dword ptr [EBP + -0x18]     ; 005bc4d4
        ;   Label: LAB_005bc4d4
    ADD EAX,0x4                         ; 005bc4d7
    CMP EAX,EDX                         ; 005bc4da
    JGE 0x005bc4e1                      ; 005bc4dc
        ;   XREF to: 005bc4e1 (CONDITIONAL_JUMP)  ; LAB_005bc4e1
    MOV dword ptr [EBP + -0x18],EAX     ; 005bc4de
    MOV CH,0x30                         ; 005bc4e1
        ;   Label: LAB_005bc4e1
    XOR AL,AL                           ; 005bc4e3
    XOR EBX,EBX                         ; 005bc4e5
    MOV byte ptr [EBP + 0xffffff6c],CH  ; 005bc4e7
    MOV byte ptr [EBP + 0xffffff6d],AL  ; 005bc4ed
    LEA EAX,[EBP + 0xffffff6d]          ; 005bc4f3
    MOV dword ptr [EBP + -0x24],EBX     ; 005bc4f9
    MOV dword ptr [EBP + -0x1c],EAX     ; 005bc4fc
    MOV ECX,dword ptr [EBP + -0x18]     ; 005bc4ff
        ;   Label: LAB_005bc4ff
    TEST ECX,ECX                        ; 005bc502
    JLE 0x005bc5f5                      ; 005bc504
        ;   XREF to: 005bc5f5 (CONDITIONAL_JUMP)  ; LAB_005bc5f5
    LEA EAX,[ECX + -0x8]                ; 005bc50a
    MOV dword ptr [EBP + -0x18],EAX     ; 005bc50d
    TEST EDI,EDI                        ; 005bc510
    JNZ 0x005bc589                      ; 005bc512
        ;   XREF to: 005bc589 (CONDITIONAL_JUMP)  ; LAB_005bc589
    TEST word ptr [EBP + -0x40],0x7fff  ; 005bc514
    JZ 0x005bc5f5                       ; 005bc51a
        ;   XREF to: 005bc5f5 (CONDITIONAL_JUMP)  ; LAB_005bc5f5
    LEA EAX,[EBP + -0x48]               ; 005bc520
    FLD extended double ptr [EAX]       ; 005bc523
    PUSH EAX                            ; 005bc525
    PUSH EAX                            ; 005bc526
    FSTCW word ptr [ESP]                ; 005bc527
    POP EAX                             ; 005bc52b
    PUSH EAX                            ; 005bc52c
    OR AH,0xc                           ; 005bc52d
    PUSH EAX                            ; 005bc530
    FLDCW word ptr [ESP]                ; 005bc531
    POP EAX                             ; 005bc534
    FISTP dword ptr [ESP + 0x4]         ; 005bc535
    FLDCW word ptr [ESP]                ; 005bc539
    POP EAX                             ; 005bc53c
    POP EAX                             ; 005bc53d
    MOV EDX,dword ptr [EBP + -0x18]     ; 005bc53e
    MOV EDI,EAX                         ; 005bc541
    TEST EDX,EDX                        ; 005bc543
    JLE 0x005bc589                      ; 005bc545
        ;   XREF to: 005bc589 (CONDITIONAL_JUMP)  ; LAB_005bc589
    LEA EDX,[EBP + -0x54]               ; 005bc547
    LEA EBX,[EBP + -0x48]               ; 005bc54a
    PUSH EAX                            ; 005bc54d
    FILD dword ptr [ESP]                ; 005bc54e
    POP EAX                             ; 005bc551
    FSTP extended double ptr [EDX]      ; 005bc552
    LEA EDX,[EBP + -0x54]               ; 005bc554
    LEA EAX,[EBP + -0x48]               ; 005bc557
    FLD extended double ptr [EAX]       ; 005bc55a
    FLD extended double ptr [EDX]       ; 005bc55c
    FSUBP                               ; 005bc55e
    FSTP extended double ptr [EBX]      ; 005bc560
    MOV ECX,0x4019                      ; 005bc562
    MOV EBX,0xbebc2000                  ; 005bc567
    LEA EDX,[EBP + -0x54]               ; 005bc56c
    LEA EAX,[EBP + -0x48]               ; 005bc56f
    MOV word ptr [EBP + -0x4c],CX       ; 005bc572
    MOV dword ptr [EBP + -0x50],EBX     ; 005bc576
    XOR ECX,ECX                         ; 005bc579
    LEA EBX,[EBP + -0x48]               ; 005bc57b
    MOV dword ptr [EBP + -0x54],ECX     ; 005bc57e
    FLD extended double ptr [EAX]       ; 005bc581
    FLD extended double ptr [EDX]       ; 005bc583
    FMULP                               ; 005bc585
    FSTP extended double ptr [EBX]      ; 005bc587
    MOV EBX,dword ptr [EBP + -0x1c]     ; 005bc589
        ;   Label: LAB_005bc589
    MOV EAX,EDI                         ; 005bc58c
    PUSH ECX                            ; 005bc58e
    PUSH EDX                            ; 005bc58f
    CALL crt_unknown.c_FUN_005bc597     ; 005bc590
        ;   XREF to: 005bc597 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bc597()
    JMP 0x005bc5dc                      ; 005bc595
        ;   XREF to: 005bc5dc (UNCONDITIONAL_JUMP)

