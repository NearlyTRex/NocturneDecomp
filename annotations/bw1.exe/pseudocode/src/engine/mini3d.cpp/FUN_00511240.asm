; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00511240(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e8b67
;   undefined4 DAT_01c51d5c
;   undefined4 DAT_01c51d60
;   undefined4 DAT_01c51d64
;   undefined4 DAT_01c51d68
;   undefined4 DAT_01c51d6c
;   undefined4 DAT_01c51d70
;   undefined4 DAT_01c51d74
;   undefined4 DAT_01c51d78
;   undefined4 DAT_01c51d7c
;   undefined4 DAT_01d1dd18
;   undefined4 DAT_01d1dd1c
;   undefined4 DAT_01d1dd20
;   undefined4 DAT_01d1dd24
;   undefined4 DAT_01d1dd28
;   ... and 27 more
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045f840
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511240
        ;   Label: engine_mini3d.cpp_FUN_00511240
    PUSH ESI                            ; 00511241
    PUSH EDI                            ; 00511242
    SUB ESP,0x60                        ; 00511243
    MOV EBX,dword ptr [ESP + 0x70]      ; 00511246
    PUSH EBX                            ; 0051124a
    LEA ESI,[ESP + 0x4]                 ; 0051124b
    CALL core_dirmat.cpp_FUN_0045f840   ; 0051124f
        ;   XREF to: 0045f840 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f840()
    FLD float ptr [0x01d224d4]          ; 00511254 | DAT_01d224d4
    FLD float ptr [0x01d224d8]          ; 0051125a | DAT_01d224d8
    FSUB float ptr [0x01d224d0]         ; 00511260 | DAT_01d224d0
    ADD ESP,0x4                         ; 00511266
    FLD1                                ; 00511269
    FADDP                               ; 0051126b
    FXCH                                ; 0051126d
    FSUB float ptr [0x01d224cc]         ; 0051126f | DAT_01d224cc
    FLD1                                ; 00511275
    FADDP                               ; 00511277
    FDIVRP                              ; 00511279
    LEA EDI,[ESP + 0xc]                 ; 0051127b
    MOV ESI,ESP                         ; 0051127f
    MOVSD ES:EDI,ESI                    ; 00511281
    MOVSD ES:EDI,ESI                    ; 00511282
    MOVSD ES:EDI,ESI                    ; 00511283
    MOV EAX,dword ptr [ESP + 0xc]       ; 00511284
    MOV [0x01d2251c],EAX                ; 00511288 | DAT_01d2251c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0051128d
    FLD float ptr [0x01d22528]          ; 00511291 | DAT_01d22528
    FLD ST0                             ; 00511297
    MOV [0x01d22520],EAX                ; 00511299 | DAT_01d22520
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051129e
    FSTP float ptr [0x01d2252c]         ; 005112a2 | DAT_01d2252c
    MOV [0x01d22524],EAX                ; 005112a8 | DAT_01d22524
    MOV EAX,[0x01d2257c]                ; 005112ad | DAT_01d2257c
    MOV EDX,dword ptr [EBX]             ; 005112b2
    MOV dword ptr [EAX],EDX             ; 005112b4
    MOV EDX,dword ptr [EBX + 0x4]       ; 005112b6
    MOV dword ptr [EAX + 0x4],EDX       ; 005112b9
    MOV EDX,dword ptr [EBX + 0x8]       ; 005112bc
    MOV dword ptr [EAX + 0x8],EDX       ; 005112bf
    MOV EDX,dword ptr [EBX + 0xc]       ; 005112c2
    MOV dword ptr [EAX + 0xc],EDX       ; 005112c5
    FLD float ptr [EAX + 0xc]           ; 005112c8
    FMUL float ptr [0x01d2252c]         ; 005112cb | DAT_01d2252c
    FLD float ptr [0x01d2252c]          ; 005112d1 | DAT_01d2252c
    FLD1                                ; 005112d7
    MOV EDX,dword ptr [EBX + 0x10]      ; 005112d9
    MOV dword ptr [EAX + 0x10],EDX      ; 005112dc
    MOV EDX,dword ptr [EBX + 0x14]      ; 005112df
    MOV dword ptr [EAX + 0x14],EDX      ; 005112e2
    MOV EDX,dword ptr [EBX + 0x18]      ; 005112e5
    MOV dword ptr [EAX + 0x18],EDX      ; 005112e8
    FDIVRP                              ; 005112eb
    FLD float ptr [EAX + 0x18]          ; 005112ed
    FMUL float ptr [0x01d2252c]         ; 005112f0 | DAT_01d2252c
    MOV EDX,dword ptr [EBX + 0x1c]      ; 005112f6
    MOV dword ptr [EAX + 0x1c],EDX      ; 005112f9
    MOV EDX,dword ptr [EBX + 0x20]      ; 005112fc
    MOV dword ptr [EAX + 0x20],EDX      ; 005112ff
    FXCH ST2                            ; 00511302
    FST float ptr [EAX + 0xc]           ; 00511304
    FMUL float ptr [EAX + 0x20]         ; 00511307
    FLD float ptr [EAX + 0x14]          ; 0051130a
    FXCH ST3                            ; 0051130d
    FSTP float ptr [EAX + 0x18]         ; 0051130f
    FXCH ST2                            ; 00511312
    FMUL float ptr [EAX + 0x18]         ; 00511314
    FXCH ST3                            ; 00511317
    FMULP ST4                           ; 00511319
    FLD float ptr [EAX + 0x4]           ; 0051131b
    FXCH ST4                            ; 0051131e
    FSTP float ptr [0x01d22530]         ; 00511320 | DAT_01d22530
    FXCH ST3                            ; 00511326
    FMUL float ptr [0x01d22530]         ; 00511328 | DAT_01d22530
    FLD float ptr [EAX + 0x10]          ; 0051132e
    FMUL float ptr [0x01d22530]         ; 00511331 | DAT_01d22530
    FLD float ptr [EAX + 0x1c]          ; 00511337
    FXCH ST3                            ; 0051133a
    FSTP float ptr [ESP + 0x58]         ; 0051133c
    FXCH ST3                            ; 00511340
    FSTP float ptr [ESP + 0x20]         ; 00511342
    FLD float ptr [ESP + 0x58]          ; 00511346
    FSUB float ptr [ESP + 0x20]         ; 0051134a
    FXCH ST2                            ; 0051134e
    FMUL float ptr [0x01d22530]         ; 00511350 | DAT_01d22530
    FXCH ST2                            ; 00511356
    FSTP float ptr [ESP + 0x2c]         ; 00511358
    FLD float ptr [0x01d22530]          ; 0051135c | DAT_01d22530
    FLD1                                ; 00511362
    FXCH ST2                            ; 00511364
    FST float ptr [EAX + 0x4]           ; 00511366
    FMUL float ptr [ESP + 0x2c]         ; 00511369
    FXCH ST2                            ; 0051136d
    FDIVRP                              ; 0051136f
    FXCH ST3                            ; 00511371
    FST float ptr [EAX + 0x10]          ; 00511373
    FMUL float ptr [EAX + 0x20]         ; 00511376
    FXCH ST2                            ; 00511379
    FSTP float ptr [EAX + 0x1c]         ; 0051137b
    FXCH                                ; 0051137e
    FSTP float ptr [ESP + 0x54]         ; 00511380
    FLD float ptr [EAX + 0x14]          ; 00511384
    FMUL float ptr [EAX + 0x1c]         ; 00511387
    FLD float ptr [EAX]                 ; 0051138a
    FMUL float ptr [0x01d2252c]         ; 0051138c | DAT_01d2252c
    FXCH                                ; 00511392
    FSTP float ptr [ESP + 0x5c]         ; 00511394
    FLD float ptr [ESP + 0x54]          ; 00511398
    FSUB float ptr [ESP + 0x5c]         ; 0051139c
    FXCH                                ; 005113a0
    FSTP float ptr [EAX]                ; 005113a2
    FSTP float ptr [ESP + 0x30]         ; 005113a4
    FLD float ptr [EAX]                 ; 005113a8
    FMUL float ptr [ESP + 0x30]         ; 005113aa
    FSUBRP                              ; 005113ae
    FLD float ptr [EAX + 0xc]           ; 005113b0
    FMUL float ptr [EAX + 0x1c]         ; 005113b3
    FSTP float ptr [ESP + 0x1c]         ; 005113b6
    FLD float ptr [EAX + 0x10]          ; 005113ba
    FMUL float ptr [EAX + 0x18]         ; 005113bd
    FSTP float ptr [ESP + 0x24]         ; 005113c0
    FLD float ptr [ESP + 0x1c]          ; 005113c4
    FSUB float ptr [ESP + 0x24]         ; 005113c8
    FSTP float ptr [ESP + 0x28]         ; 005113cc
    FLD float ptr [EAX + 0x8]           ; 005113d0
    FMUL float ptr [ESP + 0x28]         ; 005113d3
    FXCH ST3                            ; 005113d7
    FSTP float ptr [0x01d22534]         ; 005113d9 | DAT_01d22534
    FADDP ST2,ST0                       ; 005113df
    FSTP float ptr [0x01d22538]         ; 005113e1 | DAT_01d22538
    FSTP float ptr [ESP + 0x4c]         ; 005113e7
    FLD float ptr [EAX]                 ; 005113eb
    FMUL float ptr [0x005e8b67]         ; 005113ed | DAT_005e8b67
    FLD float ptr [EAX + 0x4]           ; 005113f3
    FMUL float ptr [0x005e8b67]         ; 005113f6 | DAT_005e8b67
    FLD float ptr [EAX + 0x8]           ; 005113fc
    FMUL float ptr [0x005e8b67]         ; 005113ff | DAT_005e8b67
    FLD float ptr [EAX + 0x4]           ; 00511405
    FMUL float ptr [EAX + 0x20]         ; 00511408
    FLD float ptr [EAX + 0x8]           ; 0051140b
    FMUL float ptr [EAX + 0x18]         ; 0051140e
    FLD float ptr [EAX + 0x8]           ; 00511411
    FMUL float ptr [EAX + 0x1c]         ; 00511414
    FLD float ptr [ESP + 0x2c]          ; 00511417
    FCHS                                ; 0051141b
    FSTP float ptr [ESP + 0x3c]         ; 0051141d
    FLD float ptr [EAX]                 ; 00511421
    FXCH                                ; 00511423
    FSUBP ST3,ST0                       ; 00511425
    FMUL float ptr [EAX + 0x20]         ; 00511427
    FXCH ST2                            ; 0051142a
    FCHS                                ; 0051142c
    FSTP float ptr [ESP + 0x34]         ; 0051142e
    FLD1                                ; 00511432
    FLD float ptr [EAX + 0x4]           ; 00511434
    FMUL float ptr [EAX + 0x18]         ; 00511437
    FXCH                                ; 0051143a
    FDIV float ptr [ESP + 0x4c]         ; 0051143c
    FXCH ST3                            ; 00511440
    FSUBRP ST2,ST0                      ; 00511442
    FXCH                                ; 00511444
    FSTP float ptr [ESP + 0x40]         ; 00511446
    FLD float ptr [EAX]                 ; 0051144a
    FMUL float ptr [EAX + 0x1c]         ; 0051144c
    FLD float ptr [EAX + 0x4]           ; 0051144f
    FXCH                                ; 00511452
    FSUBRP ST2,ST0                      ; 00511454
    FMUL float ptr [EAX + 0x14]         ; 00511456
    FXCH                                ; 00511459
    FCHS                                ; 0051145b
    FSTP float ptr [ESP + 0x48]         ; 0051145d
    FLD float ptr [EAX + 0x8]           ; 00511461
    FMUL float ptr [EAX + 0x10]         ; 00511464
    FLD float ptr [EAX + 0x8]           ; 00511467
    FMUL float ptr [EAX + 0xc]          ; 0051146a
    FXCH                                ; 0051146d
    FSUBP ST2,ST0                       ; 0051146f
    FXCH                                ; 00511471
    FSTP float ptr [ESP + 0x38]         ; 00511473
    FLD float ptr [EAX]                 ; 00511477
    FMUL float ptr [EAX + 0x14]         ; 00511479
    FLD float ptr [EAX + 0x4]           ; 0051147c
    FXCH                                ; 0051147f
    FSUBRP ST2,ST0                      ; 00511481
    FMUL float ptr [EAX + 0xc]          ; 00511483
    FXCH                                ; 00511486
    FCHS                                ; 00511488
    FSTP float ptr [ESP + 0x44]         ; 0051148a
    FLD float ptr [EAX]                 ; 0051148e
    FMUL float ptr [EAX + 0x10]         ; 00511490
    FLD float ptr [EAX + 0xc]           ; 00511493
    FXCH                                ; 00511496
    FSUBRP ST2,ST0                      ; 00511498
    FMUL float ptr [0x005e8b67]         ; 0051149a | DAT_005e8b67
    FXCH                                ; 005114a0
    FSTP float ptr [ESP + 0x18]         ; 005114a2
    FLD float ptr [EAX + 0x10]          ; 005114a6
    FMUL float ptr [0x005e8b67]         ; 005114a9 | DAT_005e8b67
    FLD float ptr [ESP + 0x30]          ; 005114af
    FXCH ST3                            ; 005114b3
    FSTP float ptr [ESP + 0x4c]         ; 005114b5
    FXCH ST2                            ; 005114b9
    FMUL float ptr [ESP + 0x4c]         ; 005114bb
    FLD float ptr [ESP + 0x34]          ; 005114bf
    FMUL float ptr [ESP + 0x4c]         ; 005114c3
    FXCH                                ; 005114c7
    FSTP float ptr [0x01d224ec]         ; 005114c9 | DAT_01d224ec
    FLD float ptr [ESP + 0x38]          ; 005114cf
    FMUL float ptr [ESP + 0x4c]         ; 005114d3
    FXCH                                ; 005114d7
    FSTP float ptr [0x01d224f0]         ; 005114d9 | DAT_01d224f0
    FLD float ptr [ESP + 0x3c]          ; 005114df
    FMUL float ptr [ESP + 0x4c]         ; 005114e3
    FXCH                                ; 005114e7
    FSTP float ptr [0x01d224f4]         ; 005114e9 | DAT_01d224f4
    FLD float ptr [ESP + 0x40]          ; 005114ef
    FMUL float ptr [ESP + 0x4c]         ; 005114f3
    FXCH                                ; 005114f7
    FSTP float ptr [0x01d224f8]         ; 005114f9 | DAT_01d224f8
    FLD float ptr [ESP + 0x44]          ; 005114ff
    FMUL float ptr [ESP + 0x4c]         ; 00511503
    FXCH                                ; 00511507
    FSTP float ptr [0x01d224fc]         ; 00511509 | DAT_01d224fc
    FLD float ptr [ESP + 0x28]          ; 0051150f
    FMUL float ptr [ESP + 0x4c]         ; 00511513
    FXCH                                ; 00511517
    FSTP float ptr [0x01d22500]         ; 00511519 | DAT_01d22500
    FLD float ptr [ESP + 0x48]          ; 0051151f
    FMUL float ptr [ESP + 0x4c]         ; 00511523
    FXCH                                ; 00511527
    FSTP float ptr [0x01d22504]         ; 00511529 | DAT_01d22504
    FLD float ptr [ESP + 0x18]          ; 0051152f
    FMUL float ptr [ESP + 0x4c]         ; 00511533
    FXCH                                ; 00511537
    FSTP float ptr [0x01d22508]         ; 00511539 | DAT_01d22508
    FLD float ptr [EAX + 0x14]          ; 0051153f
    FMUL float ptr [0x005e8b67]         ; 00511542 | DAT_005e8b67
    FXCH                                ; 00511548
    FSTP float ptr [0x01d2250c]         ; 0051154a | DAT_01d2250c
    FLD float ptr [EAX + 0x18]          ; 00511550
    MOV EDX,0x1                         ; 00511553
    FMUL float ptr [0x005e8b67]         ; 00511558 | DAT_005e8b67
    MOV dword ptr [0x01d24ffc],EDX      ; 0051155e | DAT_01d24ffc
    FXCH ST6                            ; 00511564
    CALL crt_math.c_round_FUN_005c03a0  ; 00511566
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [0x01c51d5c]        ; 0051156b | DAT_01c51d5c
    FLD float ptr [EAX + 0x1c]          ; 00511571
    FMUL float ptr [0x005e8b67]         ; 00511574 | DAT_005e8b67
    FXCH ST5                            ; 0051157a
    CALL crt_math.c_round_FUN_005c03a0  ; 0051157c
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [0x01c51d60]        ; 00511581 | DAT_01c51d60
    FLD float ptr [EAX + 0x20]          ; 00511587
    FMUL float ptr [0x005e8b67]         ; 0051158a | DAT_005e8b67
    FXCH ST4                            ; 00511590
    CALL crt_math.c_round_FUN_005c03a0  ; 00511592
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [0x01c51d64]        ; 00511597 | DAT_01c51d64
    FLD float ptr [0x01d224ec]          ; 0051159d | DAT_01d224ec
    FMUL float ptr [0x005e8b67]         ; 005115a3 | DAT_005e8b67
    FXCH ST2                            ; 005115a9
    CALL crt_math.c_round_FUN_005c03a0  ; 005115ab
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [0x01c51d68]        ; 005115b0 | DAT_01c51d68
    FLD float ptr [0x01d224f0]          ; 005115b6 | DAT_01d224f0
    FMUL float ptr [0x005e8b67]         ; 005115bc | DAT_005e8b67
    FXCH ST3                            ; 005115c2
    CALL crt_math.c_round_FUN_005c03a0  ; 005115c4
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [0x01c51d6c]        ; 005115c9 | DAT_01c51d6c
    FLD float ptr [0x01d224f4]          ; 005115cf | DAT_01d224f4
    FMUL float ptr [0x005e8b67]         ; 005115d5 | DAT_005e8b67
    FXCH                                ; 005115db
    CALL crt_math.c_round_FUN_005c03a0  ; 005115dd
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [0x01c51d70]        ; 005115e2 | DAT_01c51d70
    FLD float ptr [0x01d224f8]          ; 005115e8 | DAT_01d224f8
    FMUL float ptr [0x005e8b67]         ; 005115ee | DAT_005e8b67
    FXCH ST6                            ; 005115f4
    CALL crt_math.c_round_FUN_005c03a0  ; 005115f6
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [0x01c51d74]        ; 005115fb | DAT_01c51d74
    FLD float ptr [0x01d224fc]          ; 00511601 | DAT_01d224fc
    FMUL float ptr [0x005e8b67]         ; 00511607 | DAT_005e8b67
    FXCH ST5                            ; 0051160d
    CALL crt_math.c_round_FUN_005c03a0  ; 0051160f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [0x01c51d78]        ; 00511614 | DAT_01c51d78
    FLD float ptr [0x01d22500]          ; 0051161a | DAT_01d22500
    FMUL float ptr [0x005e8b67]         ; 00511620 | DAT_005e8b67
    FXCH ST4                            ; 00511626
    CALL crt_math.c_round_FUN_005c03a0  ; 00511628
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [0x01c51d7c]        ; 0051162d | DAT_01c51d7c
    FLD float ptr [0x01d22504]          ; 00511633 | DAT_01d22504
    FMUL float ptr [0x005e8b67]         ; 00511639 | DAT_005e8b67
    FXCH ST2                            ; 0051163f
    CALL crt_math.c_round_FUN_005c03a0  ; 00511641
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [0x01d1dd18]        ; 00511646 | DAT_01d1dd18
    FLD float ptr [0x01d22508]          ; 0051164c | DAT_01d22508
    FMUL float ptr [0x005e8b67]         ; 00511652 | DAT_005e8b67
    FXCH ST3                            ; 00511658
    CALL crt_math.c_round_FUN_005c03a0  ; 0051165a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [0x01d1dd1c]        ; 0051165f | DAT_01d1dd1c
    FLD float ptr [0x01d2250c]          ; 00511665 | DAT_01d2250c
    FMUL float ptr [0x005e8b67]         ; 0051166b | DAT_005e8b67
    FXCH                                ; 00511671
    CALL crt_math.c_round_FUN_005c03a0  ; 00511673
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST6                            ; 00511678
    CALL crt_math.c_round_FUN_005c03a0  ; 0051167a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST5                            ; 0051167f
    CALL crt_math.c_round_FUN_005c03a0  ; 00511681
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST4                            ; 00511686
    CALL crt_math.c_round_FUN_005c03a0  ; 00511688
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 0051168d
    CALL crt_math.c_round_FUN_005c03a0  ; 0051168f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST3                            ; 00511694
    CALL crt_math.c_round_FUN_005c03a0  ; 00511696
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 0051169b
    CALL crt_math.c_round_FUN_005c03a0  ; 0051169d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST6                            ; 005116a2
    FISTP dword ptr [0x01d1dd20]        ; 005116a4 | DAT_01d1dd20
    FXCH ST4                            ; 005116aa
    FISTP dword ptr [0x01d1dd24]        ; 005116ac | DAT_01d1dd24
    FXCH ST2                            ; 005116b2
    FISTP dword ptr [0x01d1dd28]        ; 005116b4 | DAT_01d1dd28
    FXCH                                ; 005116ba
    FISTP dword ptr [0x01d1dd2c]        ; 005116bc | DAT_01d1dd2c
    FISTP dword ptr [0x01d1dd30]        ; 005116c2 | DAT_01d1dd30
    FISTP dword ptr [0x01d1dd34]        ; 005116c8 | DAT_01d1dd34
    FISTP dword ptr [0x01d1dd38]        ; 005116ce | DAT_01d1dd38
    ADD ESP,0x60                        ; 005116d4
    POP EDI                             ; 005116d7
    POP ESI                             ; 005116d8
    POP EBX                             ; 005116d9
    RET                                 ; 005116da

