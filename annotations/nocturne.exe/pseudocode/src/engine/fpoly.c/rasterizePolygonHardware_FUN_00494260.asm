; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fpoly_c_rasterizePolygonHardware_FUN_00494260(SRenderVertex **vertices,int vertex_count)
;
; Parameters:
; SRenderVertex * * Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_3d.c_renderPolygonSolidTexturedHardwareOp53_FUN_00407070 at 004070c6
;   engine_3d.c_renderPolygonTexturedHardwareOp40_FUN_00406fd0 at 00407019
;
; Referenced Globals:
;   int g_WindowHeight = 0xc8
;   undefined4 DAT_01c70f78
;   undefined4 DAT_01c70f7c
;   undefined4 DAT_01c70fb4
;   undefined4 DAT_01c712fc
;   undefined4 DAT_01c71300
;
; Called Functions:
;   engine_special.cpp_renderScanline_FUN_00530710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494260
        ;   Label: engine_fpoly.c_rasterizePolygonHardware_FUN_00494260
    PUSH ESI                            ; 00494261
    PUSH EDI                            ; 00494262
    PUSH EBP                            ; 00494263
    SUB ESP,0x14                        ; 00494264
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00494267
    MOV EAX,[0x005b7620]                ; 0049426b | g_WindowHeight
    XOR EDX,EDX                         ; 00494270
    XOR EBP,EBP                         ; 00494272
    MOV [0x01c712fc],EAX                ; 00494274 | DAT_01c712fc
    MOV dword ptr [0x01c71300],EDX      ; 00494279 | DAT_01c71300
    MOV dword ptr [ESP + 0x4],EDX       ; 0049427f
    TEST EBX,EBX                        ; 00494283
    JLE 0x004942db                      ; 00494285
        ;   XREF to: 004942db (CONDITIONAL_JUMP)  ; LAB_004942db
    MOV EAX,dword ptr [ESP + 0x28]      ; 00494287
    MOV dword ptr [ESP],EAX             ; 0049428b
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049428e
        ;   Label: LAB_0049428e
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00494292
    INC EAX                             ; 00494296
    CMP EAX,ECX                         ; 00494297
    JL 0x0049429d                       ; 00494299
        ;   XREF to: 0049429d (CONDITIONAL_JUMP)  ; LAB_0049429d
    XOR EAX,EAX                         ; 0049429b
    MOV EBX,dword ptr [ESP + 0x28]      ; 0049429d
        ;   Label: LAB_0049429d
    SHL EAX,0x2                         ; 004942a1
    ADD EAX,EBX                         ; 004942a4
    MOV EBX,dword ptr [ESP]             ; 004942a6
    MOV EDI,dword ptr [EAX]             ; 004942a9
    MOV EBX,dword ptr [EBX]             ; 004942ab
    MOV EAX,dword ptr [EDI + 0x14]      ; 004942ad
    MOV EDX,dword ptr [EBX + 0x14]      ; 004942b0
    SAR EAX,0x10                        ; 004942b3
    SAR EDX,0x10                        ; 004942b6
    CMP EDX,EAX                         ; 004942b9
    JNZ 0x00494402                      ; 004942bb
        ;   XREF to: 00494402 (CONDITIONAL_JUMP)  ; LAB_00494402
    MOV ESI,dword ptr [ESP]             ; 004942c1
        ;   Label: LAB_004942c1
    MOV EDI,dword ptr [ESP + 0x4]       ; 004942c4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004942c8
    ADD ESI,0x4                         ; 004942cc
    INC EDI                             ; 004942cf
    MOV dword ptr [ESP],ESI             ; 004942d0
    MOV dword ptr [ESP + 0x4],EDI       ; 004942d3
    CMP EDI,EDX                         ; 004942d7
    JL 0x0049428e                       ; 004942d9
        ;   XREF to: 0049428e (CONDITIONAL_JUMP)  ; LAB_0049428e
    MOV EAX,0x1c70f7c                   ; 004942db
        ;   Label: LAB_004942db
    MOV ECX,dword ptr [0x01c712fc]      ; 004942e0 | DAT_01c712fc
    XOR EDX,EDX                         ; 004942e6
    TEST EBP,EBP                        ; 004942e8
    JLE 0x00494513                      ; 004942ea
        ;   XREF to: 00494513 (CONDITIONAL_JUMP)  ; LAB_00494513
    CMP ECX,dword ptr [EAX]             ; 004942f0 | DAT_01c70f7c | DAT_01c70fb4
        ;   Label: LAB_004942f0
    JNZ 0x00494507                      ; 004942f2
        ;   XREF to: 00494507 (CONDITIONAL_JUMP)  ; LAB_00494507
    TEST EAX,EAX                        ; 004942f8
    JZ 0x00494507                       ; 004942fa
        ;   XREF to: 00494507 (CONDITIONAL_JUMP)  ; LAB_00494507
    MOV dword ptr [ESP + 0xc],EAX       ; 00494300 | DAT_01c70f7c | DAT_01c70fb4
        ;   Label: LAB_00494300
    MOV dword ptr [0x01c70f78],EBP      ; 00494304 | DAT_01c70f78
    TEST EAX,EAX                        ; 0049430a
    JZ 0x004943f4                       ; 0049430c
        ;   XREF to: 004943f4 (CONDITIONAL_JUMP)  ; LAB_004943f4
    MOV EBX,dword ptr [0x01c712fc]      ; 00494312 | DAT_01c712fc
    MOV ECX,EAX                         ; 00494318
    XOR EDX,EDX                         ; 0049431a
    MOV EAX,0x1c70f7c                   ; 0049431c
    TEST EBP,EBP                        ; 00494321
    JLE 0x00494526                      ; 00494323
        ;   XREF to: 00494526 (CONDITIONAL_JUMP)  ; LAB_00494526
    CMP EBX,dword ptr [EAX]             ; 00494329 | DAT_01c70f7c | DAT_01c70fb4
        ;   Label: LAB_00494329
    JNZ 0x0049451a                      ; 0049432b
        ;   XREF to: 0049451a (CONDITIONAL_JUMP)  ; LAB_0049451a
    CMP EAX,ECX                         ; 00494331
    JZ 0x0049451a                       ; 00494333
        ;   XREF to: 0049451a (CONDITIONAL_JUMP)  ; LAB_0049451a
    MOV dword ptr [ESP + 0x10],EAX      ; 00494339 | DAT_01c70f7c | DAT_01c70fb4
        ;   Label: LAB_00494339
    MOV dword ptr [0x01c70f78],EBP      ; 0049433d | DAT_01c70f78
    TEST EAX,EAX                        ; 00494343
    JZ 0x004943f4                       ; 00494345
        ;   XREF to: 004943f4 (CONDITIONAL_JUMP)  ; LAB_004943f4
    MOV EAX,[0x01c712fc]                ; 0049434b | DAT_01c712fc
    MOV dword ptr [ESP + 0x8],EAX       ; 00494350
    MOV EDX,dword ptr [ESP + 0xc]       ; 00494354
        ;   Label: LAB_00494354
    MOV EAX,dword ptr [ESP + 0x8]       ; 00494358
    CMP EAX,dword ptr [EDX + 0x4]       ; 0049435c
    JL 0x004943a0                       ; 0049435f
        ;   XREF to: 004943a0 (CONDITIONAL_JUMP)  ; LAB_004943a0
    MOV ECX,dword ptr [ESP + 0x10]      ; 00494361
    MOV EBP,dword ptr [0x01c70f78]      ; 00494365 | DAT_01c70f78
    MOV EBX,EAX                         ; 0049436b
    MOV dword ptr [EDX],0xffffffff      ; 0049436d
    MOV EAX,0x1c70f7c                   ; 00494373
    XOR EDX,EDX                         ; 00494378
    TEST EBP,EBP                        ; 0049437a
    JLE 0x00494539                      ; 0049437c
        ;   XREF to: 00494539 (CONDITIONAL_JUMP)  ; LAB_00494539
    CMP EBX,dword ptr [EAX]             ; 00494382 | DAT_01c70f7c | DAT_01c70fb4
        ;   Label: LAB_00494382
    JNZ 0x0049452d                      ; 00494384
        ;   XREF to: 0049452d (CONDITIONAL_JUMP)  ; LAB_0049452d
    CMP EAX,ECX                         ; 0049438a
    JZ 0x0049452d                       ; 0049438c
        ;   XREF to: 0049452d (CONDITIONAL_JUMP)  ; LAB_0049452d
    MOV dword ptr [ESP + 0xc],EAX       ; 00494392 | DAT_01c70f7c | DAT_01c70fb4
        ;   Label: LAB_00494392
    MOV dword ptr [0x01c70f78],EBP      ; 00494396 | DAT_01c70f78
    TEST EAX,EAX                        ; 0049439c
    JZ 0x004943f4                       ; 0049439e
        ;   XREF to: 004943f4 (CONDITIONAL_JUMP)  ; LAB_004943f4
    MOV EDX,dword ptr [ESP + 0x10]      ; 004943a0
        ;   Label: LAB_004943a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004943a4
    CMP EAX,dword ptr [EDX + 0x4]       ; 004943a8
    JL 0x00494553                       ; 004943ab
        ;   XREF to: 00494553 (CONDITIONAL_JUMP)  ; LAB_00494553
    MOV ECX,dword ptr [ESP + 0xc]       ; 004943b1
    MOV EBP,dword ptr [0x01c70f78]      ; 004943b5 | DAT_01c70f78
    MOV EBX,EAX                         ; 004943bb
    MOV dword ptr [EDX],0xffffffff      ; 004943bd
    MOV EAX,0x1c70f7c                   ; 004943c3
    XOR EDX,EDX                         ; 004943c8
    TEST EBP,EBP                        ; 004943ca
    JLE 0x0049454c                      ; 004943cc
        ;   XREF to: 0049454c (CONDITIONAL_JUMP)  ; LAB_0049454c
    CMP EBX,dword ptr [EAX]             ; 004943d2 | DAT_01c70f7c | DAT_01c70fb4
        ;   Label: LAB_004943d2
    JNZ 0x00494540                      ; 004943d4
        ;   XREF to: 00494540 (CONDITIONAL_JUMP)  ; LAB_00494540
    CMP EAX,ECX                         ; 004943da
    JZ 0x00494540                       ; 004943dc
        ;   XREF to: 00494540 (CONDITIONAL_JUMP)  ; LAB_00494540
    MOV dword ptr [ESP + 0x10],EAX      ; 004943e2 | DAT_01c70fb4 | DAT_01c70f7c
        ;   Label: LAB_004943e2
    MOV dword ptr [0x01c70f78],EBP      ; 004943e6 | DAT_01c70f78
    TEST EAX,EAX                        ; 004943ec
    JNZ 0x00494553                      ; 004943ee
        ;   XREF to: 00494553 (CONDITIONAL_JUMP)  ; LAB_00494553
    MOV EBP,dword ptr [0x01c70f78]      ; 004943f4 | DAT_01c70f78
        ;   Label: LAB_004943f4
    ADD ESP,0x14                        ; 004943fa
    POP EBP                             ; 004943fd
    POP EDI                             ; 004943fe
    POP ESI                             ; 004943ff
    POP EBX                             ; 00494400
    RET                                 ; 00494401
    MOV ESI,dword ptr [EDI + 0x14]      ; 00494402
        ;   Label: LAB_00494402
    CMP ESI,dword ptr [EBX + 0x14]      ; 00494405
    JGE 0x00494416                      ; 00494408
        ;   XREF to: 00494416 (CONDITIONAL_JUMP)  ; LAB_00494416
    MOV ECX,EBX                         ; 0049440a
    MOV EBX,EDI                         ; 0049440c
    MOV EDI,ECX                         ; 0049440e
    MOV ECX,EDX                         ; 00494410
    MOV EDX,EAX                         ; 00494412
    MOV EAX,ECX                         ; 00494414
    IMUL ECX,EBP,0x38                   ; 00494416
        ;   Label: LAB_00494416
    ADD ECX,0x1c70f7c                   ; 00494419
    MOV dword ptr [ECX],EDX             ; 0049441f | DAT_01c70f7c
    MOV ESI,dword ptr [0x01c712fc]      ; 00494421 | DAT_01c712fc
    MOV dword ptr [ECX + 0x4],EAX       ; 00494427
    CMP EDX,ESI                         ; 0049442a
    JGE 0x00494434                      ; 0049442c
        ;   XREF to: 00494434 (CONDITIONAL_JUMP)  ; LAB_00494434
    MOV dword ptr [0x01c712fc],EDX      ; 0049442e | DAT_01c712fc
    CMP EAX,dword ptr [0x01c71300]      ; 00494434 | DAT_01c71300
        ;   Label: LAB_00494434
    JLE 0x00494441                      ; 0049443a
        ;   XREF to: 00494441 (CONDITIONAL_JUMP)  ; LAB_00494441
    MOV [0x01c71300],EAX                ; 0049443c | DAT_01c71300
    MOV EAX,dword ptr [EBX + 0x10]      ; 00494441
        ;   Label: LAB_00494441
    MOV dword ptr [ECX + 0x8],EAX       ; 00494444
    MOV EAX,dword ptr [EBX + 0x18]      ; 00494447
    MOV dword ptr [ECX + 0x18],EAX      ; 0049444a
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0049444d
    MOV dword ptr [ECX + 0x20],EAX      ; 00494450
    MOV ESI,dword ptr [EDI + 0x14]      ; 00494453
    SUB ESI,dword ptr [EBX + 0x14]      ; 00494456
    CMP ESI,0x10000                     ; 00494459
    JNC 0x004944f7                      ; 0049445f
        ;   XREF to: 004944f7 (CONDITIONAL_JUMP)  ; LAB_004944f7
    XOR ESI,ESI                         ; 00494465
    MOV EAX,dword ptr [EDI + 0x10]      ; 00494467
        ;   Label: LAB_00494467
    MOV EDX,dword ptr [EBX + 0x10]      ; 0049446a
    SUB EAX,EDX                         ; 0049446d
    MOV EDX,EAX                         ; 0049446f
    MOV EAX,ESI                         ; 00494471
    MOV dword ptr [0x01c70f78],EBP      ; 00494473 | DAT_01c70f78
    IMUL EDX                            ; 00494479
    SHRD EAX,EDX,0x10                   ; 0049447b
    MOV dword ptr [ECX + 0xc],EAX       ; 0049447f
    MOV EAX,dword ptr [EDI + 0x18]      ; 00494482
    MOV EDX,dword ptr [EBX + 0x18]      ; 00494485
    SUB EAX,EDX                         ; 00494488
    MOV EDX,EAX                         ; 0049448a
    MOV EAX,ESI                         ; 0049448c
    IMUL EDX                            ; 0049448e
    SHRD EAX,EDX,0x10                   ; 00494490
    MOV dword ptr [ECX + 0x1c],EAX      ; 00494494
    MOV EDX,dword ptr [EDI + 0x1c]      ; 00494497
    MOV EDI,dword ptr [EBX + 0x1c]      ; 0049449a
    MOV EAX,ESI                         ; 0049449d
    SUB EDX,EDI                         ; 0049449f
    IMUL EDX                            ; 004944a1
    SHRD EAX,EDX,0x10                   ; 004944a3
    MOV dword ptr [ECX + 0x24],EAX      ; 004944a7
    MOV EBX,dword ptr [EBX + 0x14]      ; 004944aa
    AND EBX,0xffff                      ; 004944ad
    XOR BX,0xffff                       ; 004944b3
    MOV EDX,dword ptr [ECX + 0xc]       ; 004944b7
    MOV EAX,EBX                         ; 004944ba
    IMUL EDX                            ; 004944bc
    SHRD EAX,EDX,0x10                   ; 004944be
    ADD dword ptr [ECX + 0x8],EAX       ; 004944c2
    MOV EAX,EBX                         ; 004944c5
    MOV EDX,dword ptr [ECX + 0x1c]      ; 004944c7
    IMUL EDX                            ; 004944ca
    SHRD EAX,EDX,0x10                   ; 004944cc
    MOV ESI,dword ptr [ECX + 0x18]      ; 004944d0
    MOV EDX,dword ptr [ECX + 0x24]      ; 004944d3
    ADD ESI,EAX                         ; 004944d6
    MOV EAX,EBX                         ; 004944d8
    MOV dword ptr [ECX + 0x18],ESI      ; 004944da
    IMUL EDX                            ; 004944dd
    SHRD EAX,EDX,0x10                   ; 004944df
    MOV EDI,dword ptr [ECX + 0x20]      ; 004944e3
    MOV EBP,dword ptr [0x01c70f78]      ; 004944e6 | DAT_01c70f78
    ADD EDI,EAX                         ; 004944ec
    INC EBP                             ; 004944ee
    MOV dword ptr [ECX + 0x20],EDI      ; 004944ef
    JMP 0x004942c1                      ; 004944f2
        ;   XREF to: 004942c1 (UNCONDITIONAL_JUMP)  ; LAB_004942c1
    MOV EAX,0xffffffff                  ; 004944f7
        ;   Label: LAB_004944f7
    XOR EDX,EDX                         ; 004944fc
    DIV ESI                             ; 004944fe
    MOV ESI,EAX                         ; 00494500
    JMP 0x00494467                      ; 00494502
        ;   XREF to: 00494467 (UNCONDITIONAL_JUMP)  ; LAB_00494467
    INC EDX                             ; 00494507
        ;   Label: LAB_00494507
    ADD EAX,0x38                        ; 00494508
    CMP EDX,EBP                         ; 0049450b
    JL 0x004942f0                       ; 0049450d
        ;   XREF to: 004942f0 (CONDITIONAL_JUMP)  ; LAB_004942f0
    XOR EAX,EAX                         ; 00494513
        ;   Label: LAB_00494513
    JMP 0x00494300                      ; 00494515
        ;   XREF to: 00494300 (UNCONDITIONAL_JUMP)  ; LAB_00494300
    INC EDX                             ; 0049451a
        ;   Label: LAB_0049451a
    ADD EAX,0x38                        ; 0049451b
    CMP EDX,EBP                         ; 0049451e
    JL 0x00494329                       ; 00494520
        ;   XREF to: 00494329 (CONDITIONAL_JUMP)  ; LAB_00494329
    XOR EAX,EAX                         ; 00494526
        ;   Label: LAB_00494526
    JMP 0x00494339                      ; 00494528
        ;   XREF to: 00494339 (UNCONDITIONAL_JUMP)  ; LAB_00494339
    INC EDX                             ; 0049452d
        ;   Label: LAB_0049452d
    ADD EAX,0x38                        ; 0049452e
    CMP EDX,EBP                         ; 00494531
    JL 0x00494382                       ; 00494533
        ;   XREF to: 00494382 (CONDITIONAL_JUMP)  ; LAB_00494382
    XOR EAX,EAX                         ; 00494539
        ;   Label: LAB_00494539
    JMP 0x00494392                      ; 0049453b
        ;   XREF to: 00494392 (UNCONDITIONAL_JUMP)  ; LAB_00494392
    INC EDX                             ; 00494540
        ;   Label: LAB_00494540
    ADD EAX,0x38                        ; 00494541 | DAT_01c70fb4
    CMP EDX,EBP                         ; 00494544
    JL 0x004943d2                       ; 00494546
        ;   XREF to: 004943d2 (CONDITIONAL_JUMP)  ; LAB_004943d2
    XOR EAX,EAX                         ; 0049454c
        ;   Label: LAB_0049454c
    JMP 0x004943e2                      ; 0049454e
        ;   XREF to: 004943e2 (UNCONDITIONAL_JUMP)  ; LAB_004943e2
    MOV EDI,dword ptr [ESP + 0x10]      ; 00494553
        ;   Label: LAB_00494553
    MOV ESI,dword ptr [ESP + 0xc]       ; 00494557
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049455b
    CALL engine_special.cpp_renderScanline_FUN_00530710 ; 0049455f
        ;   XREF to: 00530710 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderScanline_FUN_00530710(SSoftwareEdge * left, SSoftwareEdge * right, int scanline_y)
    MOV EAX,dword ptr [ESP + 0xc]       ; 00494564
    MOV EDX,dword ptr [ESP + 0xc]       ; 00494568
    MOV EAX,dword ptr [EAX + 0xc]       ; 0049456c
    MOV EDI,dword ptr [EDX + 0x8]       ; 0049456f
    MOV ECX,dword ptr [EDX + 0x18]      ; 00494572
    MOV EBX,dword ptr [EDX + 0x20]      ; 00494575
    ADD EDI,EAX                         ; 00494578
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0049457a
    MOV dword ptr [EDX + 0x8],EDI       ; 0049457d
    ADD ECX,EAX                         ; 00494580
    MOV EAX,dword ptr [EDX + 0x24]      ; 00494582
    MOV dword ptr [EDX + 0x18],ECX      ; 00494585
    ADD EBX,EAX                         ; 00494588
    MOV EAX,dword ptr [ESP + 0x10]      ; 0049458a
    MOV dword ptr [EDX + 0x20],EBX      ; 0049458e
    MOV EDX,dword ptr [ESP + 0x10]      ; 00494591
    MOV EBX,dword ptr [ESP + 0x8]       ; 00494595
    MOV EAX,dword ptr [EAX + 0xc]       ; 00494599
    INC EBX                             ; 0049459c
    MOV ESI,dword ptr [EDX + 0x8]       ; 0049459d
    MOV EDI,dword ptr [EDX + 0x18]      ; 004945a0
    MOV ECX,dword ptr [EDX + 0x20]      ; 004945a3
    ADD ESI,EAX                         ; 004945a6
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004945a8
    MOV dword ptr [EDX + 0x8],ESI       ; 004945ab
    ADD EDI,EAX                         ; 004945ae
    MOV EAX,dword ptr [EDX + 0x24]      ; 004945b0
    MOV dword ptr [EDX + 0x18],EDI      ; 004945b3
    ADD ECX,EAX                         ; 004945b6
    MOV dword ptr [ESP + 0x8],EBX       ; 004945b8
    MOV dword ptr [EDX + 0x20],ECX      ; 004945bc
    JMP 0x00494354                      ; 004945bf
        ;   XREF to: 00494354 (UNCONDITIONAL_JUMP)  ; LAB_00494354

