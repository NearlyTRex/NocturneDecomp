; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_renderIndexedPolygonSoftware_FUN_004fa2e0(int *vertex_indices,int vertex_count)
;
; Parameters:
; int *            Stack[0x4]:4   vertex_indices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_clipper.c_clipAndRasterize_FUN_00432cd0 at 00432ded
;
; Referenced Globals:
;   int INT_005be1e4 = 0x4b0
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c501c
;   undefined4 DAT_005c5020
;   undefined4 DAT_005c5024
;   undefined4 DAT_005c5028
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5040
;   undefined4 DAT_006b0278
;   undefined4 DAT_006b0280
;   int g_UseExternalRenderer
;   int g_ProcessorType
;   _BIT_INTEGER32 g_RenderStateFlags
;   ... and 6 more
;
; Called Functions:
;   engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10
;   engine_prim.c_findEdgeInBuffer_FUN_004f9830
;   engine_special.cpp_drawPolygon2_FUN_00532650
;   engine_special.cpp_renderScanline_FUN_00530710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fa2e0
        ;   Label: engine_prim.c_renderIndexedPolygonSoftware_FUN_004fa2e0
    PUSH ESI                            ; 004fa2e1
    PUSH EDI                            ; 004fa2e2
    PUSH EBP                            ; 004fa2e3
    SUB ESP,0x54                        ; 004fa2e4
    CMP dword ptr [0x006b0280],0x0      ; 004fa2e7 | DAT_006b0280
    JZ 0x004fa34d                       ; 004fa2ee
        ;   XREF to: 004fa34d (CONDITIONAL_JUMP)  ; LAB_004fa34d
    MOV ECX,dword ptr [ESP + 0x6c]      ; 004fa2f0
    CMP ECX,0x3                         ; 004fa2f4
    JLE 0x004fa3c7                      ; 004fa2f7
        ;   XREF to: 004fa3c7 (CONDITIONAL_JUMP)  ; LAB_004fa3c7
    MOV EBX,dword ptr [ESP + 0x68]      ; 004fa2fd
    LEA EBP,[ECX + -0x2]                ; 004fa301
    XOR ESI,ESI                         ; 004fa304
    XOR EDI,EDI                         ; 004fa306
    TEST EBP,EBP                        ; 004fa308
    JLE 0x004fa345                      ; 004fa30a
        ;   XREF to: 004fa345 (CONDITIONAL_JUMP)  ; LAB_004fa345
    IMUL EAX,dword ptr [EBX + 0x8],0x30 ; 004fa30c
        ;   Label: LAB_004fa30c
    ADD EAX,0x5c5014                    ; 004fa310 | DAT_005c5014
    MOV ECX,dword ptr [EBX + 0x4]       ; 004fa315
    PUSH EAX                            ; 004fa318
    IMUL EAX,ECX,0x30                   ; 004fa319
    ADD EAX,0x5c5014                    ; 004fa31c | DAT_005c5014
    MOV EDX,dword ptr [EBX]             ; 004fa321
    PUSH EAX                            ; 004fa323
    IMUL EAX,EDX,0x30                   ; 004fa324
    ADD EAX,0x5c5014                    ; 004fa327 | DAT_005c5014
    PUSH EAX                            ; 004fa32c
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 004fa32d
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 004fa332
    TEST EAX,EAX                        ; 004fa335
    JZ 0x004fa3c1                       ; 004fa337
        ;   XREF to: 004fa3c1 (CONDITIONAL_JUMP)  ; LAB_004fa3c1
    INC ESI                             ; 004fa33d
        ;   Label: LAB_004fa33d
    ADD EBX,0x4                         ; 004fa33e
    CMP ESI,EBP                         ; 004fa341
    JL 0x004fa30c                       ; 004fa343
        ;   XREF to: 004fa30c (CONDITIONAL_JUMP)  ; LAB_004fa30c
    CMP EDI,EBP                         ; 004fa345
        ;   Label: LAB_004fa345
    JZ 0x004fa3b9                       ; 004fa347
        ;   XREF to: 004fa3b9 (CONDITIONAL_JUMP)  ; LAB_004fa3b9
    MOV ECX,dword ptr [0x01e52ef8]      ; 004fa34d | g_RenderedTriangleCount
        ;   Label: LAB_004fa34d
    INC ECX                             ; 004fa353
    MOV EBX,dword ptr [0x01c02594]      ; 004fa354 | g_UseExternalRenderer
    MOV dword ptr [0x01e52ef8],ECX      ; 004fa35a | g_RenderedTriangleCount
    TEST EBX,EBX                        ; 004fa360
    JZ 0x004fa429                       ; 004fa362
        ;   XREF to: 004fa429 (CONDITIONAL_JUMP)  ; LAB_004fa429
    CMP dword ptr [0x006b0278],0x0      ; 004fa368 | DAT_006b0278
    JNZ 0x004fa429                      ; 004fa36f
        ;   XREF to: 004fa429 (CONDITIONAL_JUMP)  ; LAB_004fa429
    MOV EBX,dword ptr [ESP + 0x6c]      ; 004fa375
    XOR EAX,EAX                         ; 004fa379
    TEST EBX,EBX                        ; 004fa37b
    JLE 0x004fa3a0                      ; 004fa37d
        ;   XREF to: 004fa3a0 (CONDITIONAL_JUMP)  ; LAB_004fa3a0
    MOV ECX,dword ptr [ESP + 0x68]      ; 004fa37f
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004fa383
    IMUL EDX,dword ptr [ECX],0x30       ; 004fa387
        ;   Label: LAB_004fa387
    INC EAX                             ; 004fa38a
    ADD EDX,0x5c5014                    ; 004fa38b | DAT_005c5014
    ADD ECX,0x4                         ; 004fa391
    MOV dword ptr [ESP + EAX*0x4 + -0x4],EDX ; 004fa394
    CMP EAX,ESI                         ; 004fa398
    JL 0x004fa387                       ; 004fa39a
        ;   XREF to: 004fa387 (CONDITIONAL_JUMP)  ; LAB_004fa387
    LEA EAX,[EAX]                       ; 004fa39c
    MOV EDI,dword ptr [0x01c039a0]      ; 004fa3a0 | g_RenderStateFlags
        ;   Label: LAB_004fa3a0
    PUSH EDI                            ; 004fa3a6
    MOV EBP,dword ptr [ESP + 0x70]      ; 004fa3a7
    PUSH EBP                            ; 004fa3ab
    LEA EAX,[ESP + 0x8]                 ; 004fa3ac
    PUSH EAX                            ; 004fa3b0
    CALL engine_special.cpp_drawPolygon2_FUN_00532650 ; 004fa3b1
        ;   XREF to: 00532650 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_00532650(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 004fa3b6
    ADD ESP,0x54                        ; 004fa3b9
        ;   Label: LAB_004fa3b9
    POP EBP                             ; 004fa3bc
    POP EDI                             ; 004fa3bd
    POP ESI                             ; 004fa3be
    POP EBX                             ; 004fa3bf
    RET                                 ; 004fa3c0
    INC EDI                             ; 004fa3c1
        ;   Label: LAB_004fa3c1
    JMP 0x004fa33d                      ; 004fa3c2
        ;   XREF to: 004fa33d (UNCONDITIONAL_JUMP)  ; LAB_004fa33d
    MOV EDX,dword ptr [ESP + 0x68]      ; 004fa3c7
        ;   Label: LAB_004fa3c7
    MOV EDX,dword ptr [EDX + 0x8]       ; 004fa3cb
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fa3ce
    SUB EAX,EDX                         ; 004fa3d5
    SHL EAX,0x4                         ; 004fa3d7
    MOV EDX,dword ptr [ESP + 0x68]      ; 004fa3da
    ADD EAX,0x5c5014                    ; 004fa3de | DAT_005c5014
    MOV EDX,dword ptr [EDX + 0x4]       ; 004fa3e3
    PUSH EAX                            ; 004fa3e6
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fa3e7
    SUB EAX,EDX                         ; 004fa3ee
    SHL EAX,0x4                         ; 004fa3f0
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004fa3f3
    ADD EAX,0x5c5014                    ; 004fa3f7 | DAT_005c5014
    MOV EDX,dword ptr [EDX]             ; 004fa3fc
    PUSH EAX                            ; 004fa3fe
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fa3ff
    SUB EAX,EDX                         ; 004fa406
    SHL EAX,0x4                         ; 004fa408
    ADD EAX,0x5c5014                    ; 004fa40b | DAT_005c5014
    PUSH EAX                            ; 004fa410
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 004fa411
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 004fa416
    TEST EAX,EAX                        ; 004fa419
    JNZ 0x004fa34d                      ; 004fa41b
        ;   XREF to: 004fa34d (CONDITIONAL_JUMP)  ; LAB_004fa34d
    ADD ESP,0x54                        ; 004fa421
    POP EBP                             ; 004fa424
    POP EDI                             ; 004fa425
    POP ESI                             ; 004fa426
    POP EBX                             ; 004fa427
    RET                                 ; 004fa428
    MOV EDI,0x4b0                       ; 004fa429
        ;   Label: LAB_004fa429
    XOR EBP,EBP                         ; 004fa42e
    MOV ECX,dword ptr [ESP + 0x6c]      ; 004fa430
    MOV dword ptr [0x01e52ef0],EBP      ; 004fa434 | DAT_01e52ef0
    MOV dword ptr [0x01e52a68],EBP      ; 004fa43a | DAT_01e52a68
    MOV dword ptr [ESP + 0x48],EBP      ; 004fa440
    MOV dword ptr [0x01e52eec],EDI      ; 004fa444 | DAT_01e52eec
    TEST ECX,ECX                        ; 004fa44a
    JLE 0x004fa4b7                      ; 004fa44c
        ;   XREF to: 004fa4b7 (CONDITIONAL_JUMP)  ; LAB_004fa4b7
    MOV EAX,dword ptr [ESP + 0x68]      ; 004fa44e
    MOV dword ptr [ESP + 0x44],EAX      ; 004fa452
    MOV EAX,dword ptr [ESP + 0x48]      ; 004fa456
        ;   Label: LAB_004fa456
    MOV EBX,dword ptr [ESP + 0x6c]      ; 004fa45a
    INC EAX                             ; 004fa45e
    CMP EAX,EBX                         ; 004fa45f
    JL 0x004fa465                       ; 004fa461
        ;   XREF to: 004fa465 (CONDITIONAL_JUMP)  ; LAB_004fa465
    XOR EAX,EAX                         ; 004fa463
    MOV EDX,dword ptr [ESP + 0x44]      ; 004fa465
        ;   Label: LAB_004fa465
    IMUL EBP,dword ptr [EDX],0x30       ; 004fa469
    MOV ESI,dword ptr [ESP + 0x68]      ; 004fa46c
    SHL EAX,0x2                         ; 004fa470
    ADD EAX,ESI                         ; 004fa473
    IMUL EAX,dword ptr [EAX],0x30       ; 004fa475
    ADD EBP,0x5c5014                    ; 004fa478 | DAT_005c5014
    ADD EAX,0x5c5014                    ; 004fa47e | DAT_005c5014
    MOV EBX,EBP                         ; 004fa483
    MOV ECX,dword ptr [EBP + 0x14]      ; 004fa485 | DAT_005c5028
    MOV ESI,dword ptr [EAX + 0x14]      ; 004fa488 | DAT_005c5028
    SAR ECX,0x10                        ; 004fa48b
    SAR ESI,0x10                        ; 004fa48e
    MOV EDI,EAX                         ; 004fa491
    CMP ECX,ESI                         ; 004fa493
    JNZ 0x004fa5e9                      ; 004fa495
        ;   XREF to: 004fa5e9 (CONDITIONAL_JUMP)  ; LAB_004fa5e9
    MOV ESI,dword ptr [ESP + 0x44]      ; 004fa49b
        ;   Label: LAB_004fa49b
    MOV EDI,dword ptr [ESP + 0x48]      ; 004fa49f
    MOV EBP,dword ptr [ESP + 0x6c]      ; 004fa4a3
    ADD ESI,0x4                         ; 004fa4a7
    INC EDI                             ; 004fa4aa
    MOV dword ptr [ESP + 0x44],ESI      ; 004fa4ab
    MOV dword ptr [ESP + 0x48],EDI      ; 004fa4af
    CMP EDI,EBP                         ; 004fa4b3
    JL 0x004fa456                       ; 004fa4b5
        ;   XREF to: 004fa456 (CONDITIONAL_JUMP)  ; LAB_004fa456
    PUSH 0x0                            ; 004fa4b7
        ;   Label: LAB_004fa4b7
    MOV EAX,[0x01e52eec]                ; 004fa4b9 | DAT_01e52eec
    PUSH EAX                            ; 004fa4be
    CALL engine_prim.c_findEdgeInBuffer_FUN_004f9830 ; 004fa4bf
        ;   XREF to: 004f9830 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_004f9830(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 004fa4c4
    MOV dword ptr [ESP + 0x50],EAX      ; 004fa4c7
    TEST EAX,EAX                        ; 004fa4cb
    JZ 0x004fa3b9                       ; 004fa4cd
        ;   XREF to: 004fa3b9 (CONDITIONAL_JUMP)  ; LAB_004fa3b9
    PUSH EAX                            ; 004fa4d3
    MOV EDX,dword ptr [0x01e52eec]      ; 004fa4d4 | DAT_01e52eec
    PUSH EDX                            ; 004fa4da
    CALL engine_prim.c_findEdgeInBuffer_FUN_004f9830 ; 004fa4db
        ;   XREF to: 004f9830 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_004f9830(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 004fa4e0
    MOV EBP,EAX                         ; 004fa4e3
    TEST EAX,EAX                        ; 004fa4e5
    JZ 0x004fa3b9                       ; 004fa4e7
        ;   XREF to: 004fa3b9 (CONDITIONAL_JUMP)  ; LAB_004fa3b9
    MOV EAX,[0x01e52eec]                ; 004fa4ed | DAT_01e52eec
    MOV ECX,dword ptr [0x005be1e4]      ; 004fa4f2 | INT_005be1e4
    MOV dword ptr [ESP + 0x4c],EAX      ; 004fa4f8
    CMP EAX,ECX                         ; 004fa4fc
    JGE 0x004fa3b9                      ; 004fa4fe
        ;   XREF to: 004fa3b9 (CONDITIONAL_JUMP)  ; LAB_004fa3b9
        ;   Label: LAB_004fa4fe
    MOV EDX,dword ptr [ESP + 0x50]      ; 004fa504
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004fa508
    CMP EAX,dword ptr [EDX + 0x4]       ; 004fa50c
    JGE 0x004fa7d0                      ; 004fa50f
        ;   XREF to: 004fa7d0 (CONDITIONAL_JUMP)  ; LAB_004fa7d0
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004fa515
        ;   Label: LAB_004fa515
    CMP EAX,dword ptr [EBP + 0x4]       ; 004fa519
    JL 0x004fa53d                       ; 004fa51c
        ;   XREF to: 004fa53d (CONDITIONAL_JUMP)  ; LAB_004fa53d
    MOV EDI,dword ptr [ESP + 0x50]      ; 004fa51e
    PUSH EDI                            ; 004fa522
    PUSH EAX                            ; 004fa523
    MOV dword ptr [EBP],0xffffffff      ; 004fa524
    CALL engine_prim.c_findEdgeInBuffer_FUN_004f9830 ; 004fa52b
        ;   XREF to: 004f9830 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_004f9830(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 004fa530
    MOV EBP,EAX                         ; 004fa533
    TEST EAX,EAX                        ; 004fa535
    JZ 0x004fa3b9                       ; 004fa537
        ;   XREF to: 004fa3b9 (CONDITIONAL_JUMP)  ; LAB_004fa3b9
    MOV ESI,dword ptr [ESP + 0x50]      ; 004fa53d
        ;   Label: LAB_004fa53d
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004fa541
    MOV EDI,EBP                         ; 004fa545
    CALL engine_special.cpp_renderScanline_FUN_00530710 ; 004fa547
        ;   XREF to: 00530710 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderScanline_FUN_00530710(SSoftwareEdge * left, SSoftwareEdge * right, int scanline_y)
    MOV EAX,dword ptr [ESP + 0x50]      ; 004fa54c
    MOV EDX,dword ptr [ESP + 0x50]      ; 004fa550
    MOV EAX,dword ptr [EAX + 0xc]       ; 004fa554
    MOV EBX,dword ptr [EDX + 0x8]       ; 004fa557
    MOV ESI,dword ptr [EDX + 0x18]      ; 004fa55a
    ADD EBX,EAX                         ; 004fa55d
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004fa55f
    MOV dword ptr [EDX + 0x8],EBX       ; 004fa562
    ADD ESI,EAX                         ; 004fa565
    MOV dword ptr [EDX + 0x18],ESI      ; 004fa567
    MOV EDI,dword ptr [EDX + 0x20]      ; 004fa56a
    MOV ECX,dword ptr [EDX + 0x10]      ; 004fa56d
    MOV EBX,dword ptr [EDX + 0x28]      ; 004fa570
    MOV EAX,dword ptr [EDX + 0x24]      ; 004fa573
    MOV ESI,dword ptr [EDX + 0x30]      ; 004fa576
    ADD EDI,EAX                         ; 004fa579
    MOV EAX,dword ptr [EDX + 0x14]      ; 004fa57b
    MOV dword ptr [EDX + 0x20],EDI      ; 004fa57e
    ADD ECX,EAX                         ; 004fa581
    MOV EAX,dword ptr [EDX + 0x2c]      ; 004fa583
    MOV dword ptr [EDX + 0x10],ECX      ; 004fa586
    ADD EBX,EAX                         ; 004fa589
    MOV EAX,dword ptr [EDX + 0x34]      ; 004fa58b
    MOV dword ptr [EDX + 0x28],EBX      ; 004fa58e
    ADD ESI,EAX                         ; 004fa591
    MOV dword ptr [EDX + 0x30],ESI      ; 004fa593
    MOV EAX,dword ptr [EBP + 0xc]       ; 004fa596
    ADD dword ptr [EBP + 0x8],EAX       ; 004fa599
    MOV EDX,dword ptr [EBP + 0x18]      ; 004fa59c
    MOV ECX,dword ptr [EBP + 0x20]      ; 004fa59f
    MOV EBX,dword ptr [EBP + 0x10]      ; 004fa5a2
    MOV ESI,dword ptr [EBP + 0x28]      ; 004fa5a5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004fa5a8
    MOV EDI,dword ptr [EBP + 0x30]      ; 004fa5ab
    ADD EDX,EAX                         ; 004fa5ae
    MOV EAX,dword ptr [EBP + 0x24]      ; 004fa5b0
    MOV dword ptr [EBP + 0x18],EDX      ; 004fa5b3
    ADD ECX,EAX                         ; 004fa5b6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fa5b8
    MOV EDX,dword ptr [0x005be1e4]      ; 004fa5bb | INT_005be1e4
    ADD EBX,EAX                         ; 004fa5c1
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004fa5c3
    MOV dword ptr [EBP + 0x20],ECX      ; 004fa5c6
    ADD ESI,EAX                         ; 004fa5c9
    MOV EAX,dword ptr [EBP + 0x34]      ; 004fa5cb
    MOV dword ptr [EBP + 0x10],EBX      ; 004fa5ce
    ADD EDI,EAX                         ; 004fa5d1
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004fa5d3
    MOV dword ptr [EBP + 0x28],ESI      ; 004fa5d7
    INC EAX                             ; 004fa5da
    MOV dword ptr [EBP + 0x30],EDI      ; 004fa5db
    MOV dword ptr [ESP + 0x4c],EAX      ; 004fa5de
    CMP EAX,EDX                         ; 004fa5e2
    JMP 0x004fa4fe                      ; 004fa5e4
        ;   XREF to: 004fa4fe (UNCONDITIONAL_JUMP)  ; LAB_004fa4fe
    MOV EDX,dword ptr [EBP + 0x14]      ; 004fa5e9 | DAT_005c5028
        ;   Label: LAB_004fa5e9
    CMP EDX,dword ptr [EAX + 0x14]      ; 004fa5ec | DAT_005c5028
    JLE 0x004fa5fb                      ; 004fa5ef
        ;   XREF to: 004fa5fb (CONDITIONAL_JUMP)  ; LAB_004fa5fb
    MOV EBX,EAX                         ; 004fa5f1
    MOV EDI,EBP                         ; 004fa5f3
    MOV EAX,ECX                         ; 004fa5f5
    MOV ECX,ESI                         ; 004fa5f7
    MOV ESI,EAX                         ; 004fa5f9
    IMUL EBP,dword ptr [0x01e52a68],0x48 ; 004fa5fb | DAT_01e52a68
        ;   Label: LAB_004fa5fb
    ADD EBP,0x1e52a6c                   ; 004fa602
    MOV dword ptr [EBP],ECX             ; 004fa608 | DAT_01e52a6c
    MOV EDX,dword ptr [0x01e52eec]      ; 004fa60b | DAT_01e52eec
    MOV dword ptr [EBP + 0x4],ESI       ; 004fa611
    CMP ECX,EDX                         ; 004fa614
    JGE 0x004fa61e                      ; 004fa616
        ;   XREF to: 004fa61e (CONDITIONAL_JUMP)  ; LAB_004fa61e
    MOV dword ptr [0x01e52eec],ECX      ; 004fa618 | DAT_01e52eec
    CMP ESI,dword ptr [0x01e52ef0]      ; 004fa61e | DAT_01e52ef0
        ;   Label: LAB_004fa61e
    JLE 0x004fa62c                      ; 004fa624
        ;   XREF to: 004fa62c (CONDITIONAL_JUMP)  ; LAB_004fa62c
    MOV dword ptr [0x01e52ef0],ESI      ; 004fa626 | DAT_01e52ef0
    MOV ESI,dword ptr [EBX + 0x14]      ; 004fa62c | DAT_005c5028
        ;   Label: LAB_004fa62c
    MOV ECX,dword ptr [EDI + 0x14]      ; 004fa62f | DAT_005c5028
    SUB ECX,ESI                         ; 004fa632
    CMP ECX,0x10000                     ; 004fa634
    JNC 0x004fa784                      ; 004fa63a
        ;   XREF to: 004fa784 (CONDITIONAL_JUMP)  ; LAB_004fa784
    XOR ECX,ECX                         ; 004fa640
    MOV EAX,dword ptr [EDI + 0x10]      ; 004fa642 | DAT_005c5024
        ;   Label: LAB_004fa642
    MOV EDX,dword ptr [EBX + 0x10]      ; 004fa645 | DAT_005c5024
    MOV ESI,dword ptr [EBX + 0x14]      ; 004fa648 | DAT_005c5028
    SUB EAX,EDX                         ; 004fa64b
    AND ESI,0xffff                      ; 004fa64d
    MOV EDX,EAX                         ; 004fa653
    MOV EAX,ECX                         ; 004fa655
    XOR SI,0xffff                       ; 004fa657
    IMUL EDX                            ; 004fa65b
    SHRD EAX,EDX,0x10                   ; 004fa65d
    MOV EDX,EAX                         ; 004fa661
    MOV dword ptr [EBP + 0xc],EAX       ; 004fa663
    MOV EAX,ESI                         ; 004fa666
    IMUL EDX                            ; 004fa668
    SHRD EAX,EDX,0x10                   ; 004fa66a
    MOV dword ptr [ESP + 0x40],EAX      ; 004fa66e
    MOV EDX,dword ptr [ESP + 0x40]      ; 004fa672
    MOV EAX,dword ptr [EBX + 0x10]      ; 004fa676 | DAT_005c5024
    ADD EAX,EDX                         ; 004fa679
    MOV dword ptr [EBP + 0x8],EAX       ; 004fa67b
    MOV EAX,dword ptr [EDI + 0x18]      ; 004fa67e | DAT_005c502c
    MOV EDX,dword ptr [EBX + 0x18]      ; 004fa681 | DAT_005c502c
    SUB EAX,EDX                         ; 004fa684
    MOV EDX,EAX                         ; 004fa686
    MOV EAX,ECX                         ; 004fa688
    IMUL EDX                            ; 004fa68a
    SHRD EAX,EDX,0x10                   ; 004fa68c
    MOV EDX,EAX                         ; 004fa690
    MOV dword ptr [EBP + 0x1c],EAX      ; 004fa692
    MOV EAX,ESI                         ; 004fa695
    IMUL EDX                            ; 004fa697
    SHRD EAX,EDX,0x10                   ; 004fa699
    MOV dword ptr [ESP + 0x40],EAX      ; 004fa69d
    MOV EDX,dword ptr [ESP + 0x40]      ; 004fa6a1
    MOV EAX,dword ptr [EBX + 0x18]      ; 004fa6a5 | DAT_005c502c
    ADD EAX,EDX                         ; 004fa6a8
    MOV dword ptr [EBP + 0x18],EAX      ; 004fa6aa
    MOV EAX,dword ptr [EDI + 0x1c]      ; 004fa6ad | DAT_005c5030
    MOV EDX,dword ptr [EBX + 0x1c]      ; 004fa6b0 | DAT_005c5030
    SUB EAX,EDX                         ; 004fa6b3
    MOV EDX,EAX                         ; 004fa6b5
    MOV EAX,ECX                         ; 004fa6b7
    IMUL EDX                            ; 004fa6b9
    SHRD EAX,EDX,0x10                   ; 004fa6bb
    MOV EDX,EAX                         ; 004fa6bf
    MOV dword ptr [EBP + 0x24],EAX      ; 004fa6c1
    MOV EAX,ESI                         ; 004fa6c4
    IMUL EDX                            ; 004fa6c6
    SHRD EAX,EDX,0x10                   ; 004fa6c8
    MOV dword ptr [ESP + 0x40],EAX      ; 004fa6cc
    MOV EDX,dword ptr [ESP + 0x40]      ; 004fa6d0
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004fa6d4 | DAT_005c5030
    ADD EAX,EDX                         ; 004fa6d7
    MOV dword ptr [EBP + 0x20],EAX      ; 004fa6d9
    MOV EAX,dword ptr [EDI + 0x20]      ; 004fa6dc | DAT_005c5034
    MOV EDX,dword ptr [EBX + 0x20]      ; 004fa6df | DAT_005c5034
    SUB EAX,EDX                         ; 004fa6e2
    MOV EDX,EAX                         ; 004fa6e4
    MOV EAX,ECX                         ; 004fa6e6
    IMUL EDX                            ; 004fa6e8
    SHRD EAX,EDX,0x10                   ; 004fa6ea
    MOV EDX,EAX                         ; 004fa6ee
    MOV dword ptr [EBP + 0x14],EAX      ; 004fa6f0
    MOV EAX,ESI                         ; 004fa6f3
    IMUL EDX                            ; 004fa6f5
    SHRD EAX,EDX,0x10                   ; 004fa6f7
    MOV dword ptr [ESP + 0x40],EAX      ; 004fa6fb
    MOV EDX,dword ptr [ESP + 0x40]      ; 004fa6ff
    MOV EAX,dword ptr [EBX + 0x20]      ; 004fa703 | DAT_005c5034
    ADD EAX,EDX                         ; 004fa706
    MOV dword ptr [EBP + 0x10],EAX      ; 004fa708
    MOV EAX,dword ptr [EDI + 0x2c]      ; 004fa70b | DAT_005c5040
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004fa70e | DAT_005c5040
    SUB EAX,EDX                         ; 004fa711
    MOV EDX,EAX                         ; 004fa713
    MOV EAX,ECX                         ; 004fa715
    IMUL EDX                            ; 004fa717
    SHRD EAX,EDX,0x10                   ; 004fa719
    MOV EDX,EAX                         ; 004fa71d
    MOV dword ptr [EBP + 0x34],EAX      ; 004fa71f
    MOV EAX,ESI                         ; 004fa722
    IMUL EDX                            ; 004fa724
    SHRD EAX,EDX,0x10                   ; 004fa726
    MOV dword ptr [ESP + 0x40],EAX      ; 004fa72a
    MOV EDX,dword ptr [ESP + 0x40]      ; 004fa72e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004fa732 | DAT_005c5040
    ADD EAX,EDX                         ; 004fa735
    MOV dword ptr [EBP + 0x30],EAX      ; 004fa737
    CMP dword ptr [0x01c039a4],0x1      ; 004fa73a | g_VertexPreprocessMode
    JNZ 0x004fa79c                      ; 004fa741
        ;   XREF to: 004fa79c (CONDITIONAL_JUMP)  ; LAB_004fa79c
    CMP dword ptr [0x01c0399c],0x0      ; 004fa743 | g_ProcessorType
    JZ 0x004fa794                       ; 004fa74a
        ;   XREF to: 004fa794 (CONDITIONAL_JUMP)  ; LAB_004fa794
    MOV EAX,0x7fffffff                  ; 004fa74c
    MOV EDX,dword ptr [EBX + 0x8]       ; 004fa751 | DAT_005c501c
    MOV EBX,EAX                         ; 004fa754
    SUB EBX,EDX                         ; 004fa756
    SUB EAX,dword ptr [EDI + 0x8]       ; 004fa758 | DAT_005c501c
    MOV EDX,EAX                         ; 004fa75b
        ;   Label: LAB_004fa75b
    MOV EAX,ECX                         ; 004fa75d
    SUB EDX,EBX                         ; 004fa75f
    IMUL EDX                            ; 004fa761
    SHRD EAX,EDX,0x10                   ; 004fa763
    MOV EDX,EAX                         ; 004fa767
    MOV dword ptr [EBP + 0x2c],EAX      ; 004fa769
    MOV EAX,ESI                         ; 004fa76c
    IMUL EDX                            ; 004fa76e
    SHRD EAX,EDX,0x10                   ; 004fa770
    ADD EBX,EAX                         ; 004fa774
    MOV dword ptr [EBP + 0x28],EBX      ; 004fa776
    INC dword ptr [0x01e52a68]          ; 004fa779 | DAT_01e52a68
    JMP 0x004fa49b                      ; 004fa77f
        ;   XREF to: 004fa49b (UNCONDITIONAL_JUMP)  ; LAB_004fa49b
    MOV EAX,0xffffffff                  ; 004fa784
        ;   Label: LAB_004fa784
    XOR EDX,EDX                         ; 004fa789
    DIV ECX                             ; 004fa78b
    MOV ECX,EAX                         ; 004fa78d
    JMP 0x004fa642                      ; 004fa78f
        ;   XREF to: 004fa642 (UNCONDITIONAL_JUMP)  ; LAB_004fa642
    MOV EAX,dword ptr [EDI + 0xc]       ; 004fa794 | DAT_005c5020
        ;   Label: LAB_004fa794
    MOV EBX,dword ptr [EBX + 0xc]       ; 004fa797 | DAT_005c5020
    JMP 0x004fa75b                      ; 004fa79a
        ;   XREF to: 004fa75b (UNCONDITIONAL_JUMP)  ; LAB_004fa75b
    MOV EAX,dword ptr [EDI + 0x8]       ; 004fa79c | DAT_005c501c
        ;   Label: LAB_004fa79c
    MOV EDX,dword ptr [EBX + 0x8]       ; 004fa79f | DAT_005c501c
    SUB EAX,EDX                         ; 004fa7a2
    MOV EDX,EAX                         ; 004fa7a4
    MOV EAX,ECX                         ; 004fa7a6
    IMUL EDX                            ; 004fa7a8
    SHRD EAX,EDX,0x10                   ; 004fa7aa
    MOV EDX,EAX                         ; 004fa7ae
    MOV dword ptr [EBP + 0x2c],EAX      ; 004fa7b0
    MOV EAX,ESI                         ; 004fa7b3
    IMUL EDX                            ; 004fa7b5
    SHRD EAX,EDX,0x10                   ; 004fa7b7
    MOV EDX,EAX                         ; 004fa7bb
    MOV EAX,dword ptr [EBX + 0x8]       ; 004fa7bd | DAT_005c501c
    ADD EAX,EDX                         ; 004fa7c0
    MOV dword ptr [EBP + 0x28],EAX      ; 004fa7c2
    INC dword ptr [0x01e52a68]          ; 004fa7c5 | DAT_01e52a68
    JMP 0x004fa49b                      ; 004fa7cb
        ;   XREF to: 004fa49b (UNCONDITIONAL_JUMP)  ; LAB_004fa49b
    PUSH EBP                            ; 004fa7d0
        ;   Label: LAB_004fa7d0
    PUSH EAX                            ; 004fa7d1
    MOV dword ptr [EDX],0xffffffff      ; 004fa7d2
    CALL engine_prim.c_findEdgeInBuffer_FUN_004f9830 ; 004fa7d8
        ;   XREF to: 004f9830 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_004f9830(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 004fa7dd
    MOV dword ptr [ESP + 0x50],EAX      ; 004fa7e0
    TEST EAX,EAX                        ; 004fa7e4
    JZ 0x004fa3b9                       ; 004fa7e6
        ;   XREF to: 004fa3b9 (CONDITIONAL_JUMP)  ; LAB_004fa3b9
    JMP 0x004fa515                      ; 004fa7ec
        ;   XREF to: 004fa515 (UNCONDITIONAL_JUMP)  ; LAB_004fa515

