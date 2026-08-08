; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_renderIndexedPolygonAdvanced_FUN_004fb390(int *vertex_indices,int vertex_count)
;
; Parameters:
; int *            Stack[0x4]:4   vertex_indices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_clipper.c_clipPolygonToViewport_FUN_004349a0 at 00434a8e
;
; Referenced Globals:
;   void* switchdataD_004fb36c = 004fb5f0
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c501c
;   undefined4 DAT_005c5020
;   undefined4 DAT_005c5024
;   undefined4 DAT_005c5028
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5038
;   undefined4 DAT_005c503c
;   undefined4 DAT_005c5040
;   undefined4 DAT_006b0278
;   undefined4 DAT_006b0280
;   int g_UseExternalRenderer
;   ... and 9 more
;
; Called Functions:
;   engine_prim.c_adjustNearPlaneTextureCoords_FUN_004f9960
;   engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10
;   engine_prim.c_normalizeTextureCoords_FUN_004f98e0
;   engine_prim.c_prepareDepthBuffer_FUN_004f9870
;   engine_prim.c_replaceWWithDepth_FUN_004f99d0
;   engine_special.cpp_drawPolygon2_FUN_00532650
;   engine_special.cpp_renderScanline_FUN_00530710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb390
        ;   Label: engine_prim.c_renderIndexedPolygonAdvanced_FUN_004fb390
    PUSH ESI                            ; 004fb391
    PUSH EDI                            ; 004fb392
    PUSH EBP                            ; 004fb393
    SUB ESP,0x58                        ; 004fb394
    CMP dword ptr [0x006b0280],0x0      ; 004fb397 | DAT_006b0280
    JZ 0x004fb3fd                       ; 004fb39e
        ;   XREF to: 004fb3fd (CONDITIONAL_JUMP)  ; LAB_004fb3fd
    MOV ECX,dword ptr [ESP + 0x70]      ; 004fb3a0
    CMP ECX,0x3                         ; 004fb3a4
    JLE 0x004fb487                      ; 004fb3a7
        ;   XREF to: 004fb487 (CONDITIONAL_JUMP)  ; LAB_004fb487
    MOV EBX,dword ptr [ESP + 0x6c]      ; 004fb3ad
    LEA EBP,[ECX + -0x2]                ; 004fb3b1
    XOR ESI,ESI                         ; 004fb3b4
    XOR EDI,EDI                         ; 004fb3b6
    TEST EBP,EBP                        ; 004fb3b8
    JLE 0x004fb3f5                      ; 004fb3ba
        ;   XREF to: 004fb3f5 (CONDITIONAL_JUMP)  ; LAB_004fb3f5
    IMUL EAX,dword ptr [EBX + 0x8],0x30 ; 004fb3bc
        ;   Label: LAB_004fb3bc
    ADD EAX,0x5c5014                    ; 004fb3c0 | DAT_005c5014
    MOV ECX,dword ptr [EBX + 0x4]       ; 004fb3c5
    PUSH EAX                            ; 004fb3c8
    IMUL EAX,ECX,0x30                   ; 004fb3c9
    ADD EAX,0x5c5014                    ; 004fb3cc | DAT_005c5014
    MOV EDX,dword ptr [EBX]             ; 004fb3d1
    PUSH EAX                            ; 004fb3d3
    IMUL EAX,EDX,0x30                   ; 004fb3d4
    ADD EAX,0x5c5014                    ; 004fb3d7 | DAT_005c5014
    PUSH EAX                            ; 004fb3dc
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 004fb3dd
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 004fb3e2
    TEST EAX,EAX                        ; 004fb3e5
    JZ 0x004fb481                       ; 004fb3e7
        ;   XREF to: 004fb481 (CONDITIONAL_JUMP)  ; LAB_004fb481
    INC ESI                             ; 004fb3ed
        ;   Label: LAB_004fb3ed
    ADD EBX,0x4                         ; 004fb3ee
    CMP ESI,EBP                         ; 004fb3f1
    JL 0x004fb3bc                       ; 004fb3f3
        ;   XREF to: 004fb3bc (CONDITIONAL_JUMP)  ; LAB_004fb3bc
    CMP EDI,EBP                         ; 004fb3f5
        ;   Label: LAB_004fb3f5
    JZ 0x004fb479                       ; 004fb3f7
        ;   XREF to: 004fb479 (CONDITIONAL_JUMP)  ; LAB_004fb479
    MOV ECX,dword ptr [0x01e52ef8]      ; 004fb3fd | g_RenderedTriangleCount
        ;   Label: LAB_004fb3fd
    INC ECX                             ; 004fb403
    MOV EBX,dword ptr [0x01c02594]      ; 004fb404 | g_UseExternalRenderer
    MOV dword ptr [0x01e52ef8],ECX      ; 004fb40a | g_RenderedTriangleCount
    TEST EBX,EBX                        ; 004fb410
    JZ 0x004fb86f                       ; 004fb412
        ;   XREF to: 004fb86f (CONDITIONAL_JUMP)  ; LAB_004fb86f
    CMP dword ptr [0x006b0278],0x0      ; 004fb418 | DAT_006b0278
    JNZ 0x004fb86f                      ; 004fb41f
        ;   XREF to: 004fb86f (CONDITIONAL_JUMP)  ; LAB_004fb86f
    MOV EBX,dword ptr [ESP + 0x70]      ; 004fb425
    XOR EDX,EDX                         ; 004fb429
    TEST EBX,EBX                        ; 004fb42b
    JLE 0x004fb460                      ; 004fb42d
        ;   XREF to: 004fb460 (CONDITIONAL_JUMP)  ; LAB_004fb460
    MOV ECX,dword ptr [ESP + 0x6c]      ; 004fb42f
    MOV EDI,dword ptr [ESP + 0x70]      ; 004fb433
    MOV EBX,dword ptr [ECX]             ; 004fb437
        ;   Label: LAB_004fb437
    LEA EAX,[EBX*0x4 + 0x0]             ; 004fb439
    SUB EAX,EBX                         ; 004fb440
    SHL EAX,0x4                         ; 004fb442
    INC EDX                             ; 004fb445
    ADD EAX,0x5c5014                    ; 004fb446 | DAT_005c5014
    ADD ECX,0x4                         ; 004fb44b
    MOV dword ptr [ESP + EDX*0x4 + -0x4],EAX ; 004fb44e
    CMP EDX,EDI                         ; 004fb452
    JL 0x004fb437                       ; 004fb454
        ;   XREF to: 004fb437 (CONDITIONAL_JUMP)  ; LAB_004fb437
    LEA EAX,[EAX]                       ; 004fb456
    LEA EDX,[EDX]                       ; 004fb45c
    MOV EBP,dword ptr [0x01c039a0]      ; 004fb460 | g_RenderStateFlags
        ;   Label: LAB_004fb460
    PUSH EBP                            ; 004fb466
    MOV EAX,dword ptr [ESP + 0x74]      ; 004fb467
    PUSH EAX                            ; 004fb46b
    LEA EAX,[ESP + 0x8]                 ; 004fb46c
    PUSH EAX                            ; 004fb470
    CALL engine_special.cpp_drawPolygon2_FUN_00532650 ; 004fb471
        ;   XREF to: 00532650 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_00532650(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 004fb476
    ADD ESP,0x58                        ; 004fb479
        ;   Label: LAB_004fb479
    POP EBP                             ; 004fb47c
    POP EDI                             ; 004fb47d
    POP ESI                             ; 004fb47e
    POP EBX                             ; 004fb47f
    RET                                 ; 004fb480
    INC EDI                             ; 004fb481
        ;   Label: LAB_004fb481
    JMP 0x004fb3ed                      ; 004fb482
        ;   XREF to: 004fb3ed (UNCONDITIONAL_JUMP)  ; LAB_004fb3ed
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004fb487
        ;   Label: LAB_004fb487
    MOV EDX,dword ptr [EDX + 0x8]       ; 004fb48b
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fb48e
    SUB EAX,EDX                         ; 004fb495
    SHL EAX,0x4                         ; 004fb497
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004fb49a
    ADD EAX,0x5c5014                    ; 004fb49e | DAT_005c5014
    MOV EDX,dword ptr [EDX + 0x4]       ; 004fb4a3
    PUSH EAX                            ; 004fb4a6
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fb4a7
    SUB EAX,EDX                         ; 004fb4ae
    SHL EAX,0x4                         ; 004fb4b0
    MOV EDX,dword ptr [ESP + 0x70]      ; 004fb4b3
    ADD EAX,0x5c5014                    ; 004fb4b7 | DAT_005c5014
    MOV EDX,dword ptr [EDX]             ; 004fb4bc
    PUSH EAX                            ; 004fb4be
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fb4bf
    SUB EAX,EDX                         ; 004fb4c6
    SHL EAX,0x4                         ; 004fb4c8
    ADD EAX,0x5c5014                    ; 004fb4cb | DAT_005c5014
    PUSH EAX                            ; 004fb4d0
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 004fb4d1
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 004fb4d6
    TEST EAX,EAX                        ; 004fb4d9
    JNZ 0x004fb3fd                      ; 004fb4db
        ;   XREF to: 004fb3fd (CONDITIONAL_JUMP)  ; LAB_004fb3fd
    ADD ESP,0x58                        ; 004fb4e1
    POP EBP                             ; 004fb4e4
    POP EDI                             ; 004fb4e5
    POP ESI                             ; 004fb4e6
    POP EBX                             ; 004fb4e7
    RET                                 ; 004fb4e8
    MOV ECX,dword ptr [ESP + 0x70]      ; 004fb4e9
        ;   Label: caseD_1
    XOR EBX,EBX                         ; 004fb4ed
    TEST ECX,ECX                        ; 004fb4ef
    JLE 0x004fb5f0                      ; 004fb4f1
        ;   XREF to: 004fb5f0 (CONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004fb4f7
    MOV EBP,dword ptr [ESP + 0x70]      ; 004fb4fb
    IMUL EAX,dword ptr [ESI],0x30       ; 004fb4ff
        ;   Label: LAB_004fb4ff
    PUSH 0x1                            ; 004fb502
    ADD EAX,0x5c5014                    ; 004fb504 | DAT_005c5014
    PUSH EAX                            ; 004fb509
    ADD ESI,0x4                         ; 004fb50a
    INC EBX                             ; 004fb50d
    CALL engine_prim.c_prepareDepthBuffer_FUN_004f9870 ; 004fb50e
        ;   XREF to: 004f9870 (UNCONDITIONAL_CALL)  ; void engine_prim.c_prepareDepthBuffer_FUN_004f9870(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004fb513
    CMP EBX,EBP                         ; 004fb516
    JL 0x004fb4ff                       ; 004fb518
        ;   XREF to: 004fb4ff (CONDITIONAL_JUMP)  ; LAB_004fb4ff
    JMP 0x004fb5f0                      ; 004fb51a
        ;   XREF to: 004fb5f0 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [ESP + 0x70]      ; 004fb51f
        ;   Label: caseD_2
    XOR EBX,EBX                         ; 004fb523
    TEST EDX,EDX                        ; 004fb525
    JLE 0x004fb5f0                      ; 004fb527
        ;   XREF to: 004fb5f0 (CONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004fb52d
    IMUL EAX,dword ptr [ESI],0x30       ; 004fb531
        ;   Label: LAB_004fb531
    PUSH 0x1                            ; 004fb534
    ADD EAX,0x5c5014                    ; 004fb536 | DAT_005c5014
    PUSH EAX                            ; 004fb53b
    CALL engine_prim.c_normalizeTextureCoords_FUN_004f98e0 ; 004fb53c
        ;   XREF to: 004f98e0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_normalizeTextureCoords_FUN_004f98e0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004fb541
    INC EBX                             ; 004fb544
    MOV ECX,dword ptr [ESP + 0x70]      ; 004fb545
    ADD ESI,0x4                         ; 004fb549
    CMP EBX,ECX                         ; 004fb54c
    JL 0x004fb531                       ; 004fb54e
        ;   XREF to: 004fb531 (CONDITIONAL_JUMP)  ; LAB_004fb531
    JMP 0x004fb5f0                      ; 004fb550
        ;   XREF to: 004fb5f0 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,dword ptr [ESP + 0x70]      ; 004fb555
        ;   Label: caseD_3
    XOR ESI,ESI                         ; 004fb559
    TEST EAX,EAX                        ; 004fb55b
    JLE 0x004fb5f0                      ; 004fb55d
        ;   XREF to: 004fb5f0 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 004fb563
    MOV EBP,dword ptr [ESP + 0x70]      ; 004fb567
    IMUL EAX,dword ptr [EBX],0x30       ; 004fb56b
        ;   Label: LAB_004fb56b
    PUSH 0x1                            ; 004fb56e
    ADD EAX,0x5c5014                    ; 004fb570 | DAT_005c5014
    PUSH EAX                            ; 004fb575
    ADD EBX,0x4                         ; 004fb576
    INC ESI                             ; 004fb579
    CALL engine_prim.c_adjustNearPlaneTextureCoords_FUN_004f9960 ; 004fb57a
        ;   XREF to: 004f9960 (UNCONDITIONAL_CALL)  ; void engine_prim.c_adjustNearPlaneTextureCoords_FUN_004f9960(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004fb57f
    CMP ESI,EBP                         ; 004fb582
    JL 0x004fb56b                       ; 004fb584
        ;   XREF to: 004fb56b (CONDITIONAL_JUMP)  ; LAB_004fb56b
    JMP 0x004fb5f0                      ; 004fb586
        ;   XREF to: 004fb5f0 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ESP + 0x70]      ; 004fb58b
        ;   Label: caseD_5
    XOR ESI,ESI                         ; 004fb58f
    TEST EBP,EBP                        ; 004fb591
    JLE 0x004fb5f0                      ; 004fb593
        ;   XREF to: 004fb5f0 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 004fb595
    IMUL EAX,dword ptr [EBX],0x30       ; 004fb599
        ;   Label: LAB_004fb599
    PUSH 0x1                            ; 004fb59c
    ADD EAX,0x5c5014                    ; 004fb59e | DAT_005c5014
    PUSH EAX                            ; 004fb5a3
    CALL engine_prim.c_normalizeTextureCoords_FUN_004f98e0 ; 004fb5a4
        ;   XREF to: 004f98e0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_normalizeTextureCoords_FUN_004f98e0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004fb5a9
    INC ESI                             ; 004fb5ac
    MOV ECX,dword ptr [ESP + 0x70]      ; 004fb5ad
    ADD EBX,0x4                         ; 004fb5b1
    CMP ESI,ECX                         ; 004fb5b4
    JL 0x004fb599                       ; 004fb5b6
        ;   XREF to: 004fb599 (CONDITIONAL_JUMP)  ; LAB_004fb599
    JMP 0x004fb5f0                      ; 004fb5b8
        ;   XREF to: 004fb5f0 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDI,dword ptr [ESP + 0x70]      ; 004fb5ba
        ;   Label: caseD_6
    XOR ESI,ESI                         ; 004fb5be
    TEST EDI,EDI                        ; 004fb5c0
    JLE 0x004fb5f0                      ; 004fb5c2
        ;   XREF to: 004fb5f0 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 004fb5c4
    MOV EBP,dword ptr [ESP + 0x70]      ; 004fb5c8
    IMUL EAX,dword ptr [EBX],0x30       ; 004fb5cc
        ;   Label: LAB_004fb5cc
    PUSH 0x1                            ; 004fb5cf
    ADD EAX,0x5c5014                    ; 004fb5d1 | DAT_005c5014
    PUSH EAX                            ; 004fb5d6
    ADD EBX,0x4                         ; 004fb5d7
    INC ESI                             ; 004fb5da
    CALL engine_prim.c_replaceWWithDepth_FUN_004f99d0 ; 004fb5db
        ;   XREF to: 004f99d0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_004f99d0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004fb5e0
    CMP ESI,EBP                         ; 004fb5e3
    JL 0x004fb5cc                       ; 004fb5e5
        ;   XREF to: 004fb5cc (CONDITIONAL_JUMP)  ; LAB_004fb5cc
    LEA EAX,[EAX]                       ; 004fb5e7
    LEA EDX,[EDX]                       ; 004fb5ed
    MOV EAX,0x4b0                       ; 004fb5f0
        ;   Label: caseD_0
    XOR EDX,EDX                         ; 004fb5f5
    MOV ESI,dword ptr [ESP + 0x70]      ; 004fb5f7
    MOV dword ptr [0x01e53384],EDX      ; 004fb5fb | DAT_01e53384
    MOV dword ptr [0x01e52efc],EDX      ; 004fb601 | DAT_01e52efc
    MOV dword ptr [ESP + 0x4c],EDX      ; 004fb607
    MOV [0x01e53380],EAX                ; 004fb60b | DAT_01e53380
    TEST ESI,ESI                        ; 004fb610
    JLE 0x004fb67e                      ; 004fb612
        ;   XREF to: 004fb67e (CONDITIONAL_JUMP)  ; LAB_004fb67e
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004fb614
    MOV dword ptr [ESP + 0x44],EAX      ; 004fb618
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004fb61c
        ;   Label: LAB_004fb61c
    MOV EDI,dword ptr [ESP + 0x70]      ; 004fb620
    INC EAX                             ; 004fb624
    CMP EAX,EDI                         ; 004fb625
    JL 0x004fb62b                       ; 004fb627
        ;   XREF to: 004fb62b (CONDITIONAL_JUMP)  ; LAB_004fb62b
    XOR EAX,EAX                         ; 004fb629
    MOV EBP,dword ptr [ESP + 0x6c]      ; 004fb62b
        ;   Label: LAB_004fb62b
    SHL EAX,0x2                         ; 004fb62f
    ADD EAX,EBP                         ; 004fb632
    IMUL ESI,dword ptr [EAX],0x30       ; 004fb634
    MOV EAX,dword ptr [ESP + 0x44]      ; 004fb637
    IMUL ECX,dword ptr [EAX],0x30       ; 004fb63b
    ADD ESI,0x5c5014                    ; 004fb63e | DAT_005c5014
    ADD ECX,0x5c5014                    ; 004fb644 | DAT_005c5014
    MOV EDI,ESI                         ; 004fb64a
    MOV EDX,dword ptr [ESI + 0x14]      ; 004fb64c | DAT_005c5028
    MOV EAX,dword ptr [ECX + 0x14]      ; 004fb64f | DAT_005c5028
    SAR EDX,0x10                        ; 004fb652
    SAR EAX,0x10                        ; 004fb655
    MOV EBX,ECX                         ; 004fb658
    CMP EAX,EDX                         ; 004fb65a
    JNZ 0x004fb884                      ; 004fb65c
        ;   XREF to: 004fb884 (CONDITIONAL_JUMP)  ; LAB_004fb884
    MOV EDI,dword ptr [ESP + 0x44]      ; 004fb662
        ;   Label: LAB_004fb662
    MOV EBP,dword ptr [ESP + 0x4c]      ; 004fb666
    MOV EDX,dword ptr [ESP + 0x70]      ; 004fb66a
    ADD EDI,0x4                         ; 004fb66e
    INC EBP                             ; 004fb671
    MOV dword ptr [ESP + 0x44],EDI      ; 004fb672
    MOV dword ptr [ESP + 0x4c],EBP      ; 004fb676
    CMP EBP,EDX                         ; 004fb67a
    JL 0x004fb61c                       ; 004fb67c
        ;   XREF to: 004fb61c (CONDITIONAL_JUMP)  ; LAB_004fb61c
    MOV EAX,0x1e52f00                   ; 004fb67e
        ;   Label: LAB_004fb67e
    MOV ESI,dword ptr [0x01e52efc]      ; 004fb683 | DAT_01e52efc
    MOV EBX,dword ptr [0x01e53380]      ; 004fb689 | DAT_01e53380
    XOR ECX,ECX                         ; 004fb68f
    TEST ESI,ESI                        ; 004fb691
    JLE 0x004fbaf2                      ; 004fb693
        ;   XREF to: 004fbaf2 (CONDITIONAL_JUMP)  ; LAB_004fbaf2
    MOV EDX,dword ptr [0x01e52efc]      ; 004fb699 | DAT_01e52efc
    CMP EBX,dword ptr [EAX]             ; 004fb69f | DAT_01e52f00 | DAT_01e52f48
        ;   Label: LAB_004fb69f
    JNZ 0x004fbae6                      ; 004fb6a1
        ;   XREF to: 004fbae6 (CONDITIONAL_JUMP)  ; LAB_004fbae6
    TEST EAX,EAX                        ; 004fb6a7
    JZ 0x004fbae6                       ; 004fb6a9
        ;   XREF to: 004fbae6 (CONDITIONAL_JUMP)  ; LAB_004fbae6
    MOV dword ptr [ESP + 0x54],EAX      ; 004fb6af | DAT_01e52f00 | DAT_01e52f48
        ;   Label: LAB_004fb6af
    TEST EAX,EAX                        ; 004fb6b3
    JZ 0x004fb479                       ; 004fb6b5
        ;   XREF to: 004fb479 (CONDITIONAL_JUMP)  ; LAB_004fb479
    MOV EDI,dword ptr [0x01e52efc]      ; 004fb6bb | DAT_01e52efc
    MOV ECX,dword ptr [0x01e53380]      ; 004fb6c1 | DAT_01e53380
    MOV EBX,EAX                         ; 004fb6c7
    XOR EDX,EDX                         ; 004fb6c9
    MOV EAX,0x1e52f00                   ; 004fb6cb
    TEST EDI,EDI                        ; 004fb6d0
    JLE 0x004fbb05                      ; 004fb6d2
        ;   XREF to: 004fbb05 (CONDITIONAL_JUMP)  ; LAB_004fbb05
    MOV EBP,dword ptr [0x01e52efc]      ; 004fb6d8 | DAT_01e52efc
    CMP ECX,dword ptr [EAX]             ; 004fb6de | DAT_01e52f00 | DAT_01e52f48
        ;   Label: LAB_004fb6de
    JNZ 0x004fbaf9                      ; 004fb6e0
        ;   XREF to: 004fbaf9 (CONDITIONAL_JUMP)  ; LAB_004fbaf9
    CMP EAX,EBX                         ; 004fb6e6
    JZ 0x004fbaf9                       ; 004fb6e8
        ;   XREF to: 004fbaf9 (CONDITIONAL_JUMP)  ; LAB_004fbaf9
    MOV EBP,EAX                         ; 004fb6ee
        ;   Label: LAB_004fb6ee
    TEST EAX,EAX                        ; 004fb6f0
    JZ 0x004fb479                       ; 004fb6f2
        ;   XREF to: 004fb479 (CONDITIONAL_JUMP)  ; LAB_004fb479
    MOV EAX,[0x01e53380]                ; 004fb6f8 | DAT_01e53380
    MOV dword ptr [ESP + 0x50],EAX      ; 004fb6fd
    MOV EDX,dword ptr [ESP + 0x54]      ; 004fb701
        ;   Label: LAB_004fb701
    MOV EAX,dword ptr [ESP + 0x50]      ; 004fb705
    CMP EAX,dword ptr [EDX + 0x4]       ; 004fb709
    JL 0x004fb74f                       ; 004fb70c
        ;   XREF to: 004fb74f (CONDITIONAL_JUMP)  ; LAB_004fb74f
    MOV ESI,dword ptr [0x01e52efc]      ; 004fb70e | DAT_01e52efc
    MOV EBX,EAX                         ; 004fb714
    MOV ECX,EBP                         ; 004fb716
    MOV dword ptr [EDX],0xffffffff      ; 004fb718
    MOV EAX,0x1e52f00                   ; 004fb71e
    XOR EDX,EDX                         ; 004fb723
    TEST ESI,ESI                        ; 004fb725
    JLE 0x004fbb18                      ; 004fb727
        ;   XREF to: 004fbb18 (CONDITIONAL_JUMP)  ; LAB_004fbb18
    MOV EDI,dword ptr [0x01e52efc]      ; 004fb72d | DAT_01e52efc
    CMP EBX,dword ptr [EAX]             ; 004fb733 | DAT_01e52f00 | DAT_01e52f48
        ;   Label: LAB_004fb733
    JNZ 0x004fbb0c                      ; 004fb735
        ;   XREF to: 004fbb0c (CONDITIONAL_JUMP)  ; LAB_004fbb0c
    CMP EAX,ECX                         ; 004fb73b
    JZ 0x004fbb0c                       ; 004fb73d
        ;   XREF to: 004fbb0c (CONDITIONAL_JUMP)  ; LAB_004fbb0c
    MOV dword ptr [ESP + 0x54],EAX      ; 004fb743 | DAT_01e52f00 | DAT_01e52f48
        ;   Label: LAB_004fb743
    TEST EAX,EAX                        ; 004fb747
    JZ 0x004fb479                       ; 004fb749
        ;   XREF to: 004fb479 (CONDITIONAL_JUMP)  ; LAB_004fb479
    MOV EAX,dword ptr [ESP + 0x50]      ; 004fb74f
        ;   Label: LAB_004fb74f
    CMP EAX,dword ptr [EBP + 0x4]       ; 004fb753
    JL 0x004fb79a                       ; 004fb756
        ;   XREF to: 004fb79a (CONDITIONAL_JUMP)  ; LAB_004fb79a
    MOV ECX,dword ptr [ESP + 0x54]      ; 004fb758
    MOV EBX,EAX                         ; 004fb75c
    MOV dword ptr [EBP],0xffffffff      ; 004fb75e
    XOR EDX,EDX                         ; 004fb765
    MOV EBP,dword ptr [0x01e52efc]      ; 004fb767 | DAT_01e52efc
    MOV EAX,0x1e52f00                   ; 004fb76d
    TEST EBP,EBP                        ; 004fb772
    JLE 0x004fbb2b                      ; 004fb774
        ;   XREF to: 004fbb2b (CONDITIONAL_JUMP)  ; LAB_004fbb2b
    MOV ESI,dword ptr [0x01e52efc]      ; 004fb77a | DAT_01e52efc
    CMP EBX,dword ptr [EAX]             ; 004fb780 | DAT_01e52f00 | DAT_01e52f48
        ;   Label: LAB_004fb780
    JNZ 0x004fbb1f                      ; 004fb782
        ;   XREF to: 004fbb1f (CONDITIONAL_JUMP)  ; LAB_004fbb1f
    CMP EAX,ECX                         ; 004fb788
    JZ 0x004fbb1f                       ; 004fb78a
        ;   XREF to: 004fbb1f (CONDITIONAL_JUMP)  ; LAB_004fbb1f
    MOV EBP,EAX                         ; 004fb790
        ;   Label: LAB_004fb790
    TEST EAX,EAX                        ; 004fb792
    JZ 0x004fb479                       ; 004fb794
        ;   XREF to: 004fb479 (CONDITIONAL_JUMP)  ; LAB_004fb479
    MOV ESI,dword ptr [ESP + 0x54]      ; 004fb79a
        ;   Label: LAB_004fb79a
    MOV EBX,dword ptr [ESP + 0x50]      ; 004fb79e
    MOV EDI,EBP                         ; 004fb7a2
    CALL engine_special.cpp_renderScanline_FUN_00530710 ; 004fb7a4
        ;   XREF to: 00530710 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderScanline_FUN_00530710(SSoftwareEdge * left, SSoftwareEdge * right, int scanline_y)
    MOV EAX,dword ptr [ESP + 0x54]      ; 004fb7a9
    MOV EDX,dword ptr [ESP + 0x54]      ; 004fb7ad
    MOV EAX,dword ptr [EAX + 0xc]       ; 004fb7b1
    MOV ECX,dword ptr [EDX + 0x8]       ; 004fb7b4
    MOV EBX,dword ptr [EDX + 0x18]      ; 004fb7b7
    MOV ESI,dword ptr [EDX + 0x20]      ; 004fb7ba
    MOV EDI,dword ptr [EDX + 0x28]      ; 004fb7bd
    ADD ECX,EAX                         ; 004fb7c0
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004fb7c2
    MOV dword ptr [EDX + 0x8],ECX       ; 004fb7c5
    ADD EBX,EAX                         ; 004fb7c8
    MOV EAX,dword ptr [EDX + 0x24]      ; 004fb7ca
    MOV dword ptr [EDX + 0x18],EBX      ; 004fb7cd
    ADD ESI,EAX                         ; 004fb7d0
    MOV EAX,dword ptr [EDX + 0x2c]      ; 004fb7d2
    MOV dword ptr [EDX + 0x20],ESI      ; 004fb7d5
    ADD EDI,EAX                         ; 004fb7d8
    MOV dword ptr [EDX + 0x28],EDI      ; 004fb7da
    MOV ECX,dword ptr [EDX + 0x10]      ; 004fb7dd
    MOV EBX,dword ptr [EDX + 0x38]      ; 004fb7e0
    MOV ESI,dword ptr [EDX + 0x40]      ; 004fb7e3
    MOV EAX,dword ptr [EDX + 0x14]      ; 004fb7e6
    MOV EDI,dword ptr [EDX + 0x30]      ; 004fb7e9
    ADD ECX,EAX                         ; 004fb7ec
    MOV EAX,dword ptr [EDX + 0x3c]      ; 004fb7ee
    MOV dword ptr [EDX + 0x10],ECX      ; 004fb7f1
    ADD EBX,EAX                         ; 004fb7f4
    MOV EAX,dword ptr [EDX + 0x44]      ; 004fb7f6
    MOV dword ptr [EDX + 0x38],EBX      ; 004fb7f9
    ADD ESI,EAX                         ; 004fb7fc
    MOV EAX,dword ptr [EDX + 0x34]      ; 004fb7fe
    MOV dword ptr [EDX + 0x40],ESI      ; 004fb801
    ADD EDI,EAX                         ; 004fb804
    MOV dword ptr [EDX + 0x30],EDI      ; 004fb806
    MOV EAX,dword ptr [EBP + 0xc]       ; 004fb809
    MOV EDX,dword ptr [EBP + 0x8]       ; 004fb80c
    MOV ECX,dword ptr [EBP + 0x18]      ; 004fb80f
    MOV EBX,dword ptr [EBP + 0x20]      ; 004fb812
    ADD EDX,EAX                         ; 004fb815
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004fb817
    MOV dword ptr [EBP + 0x8],EDX       ; 004fb81a
    ADD ECX,EAX                         ; 004fb81d
    MOV EAX,dword ptr [EBP + 0x24]      ; 004fb81f
    MOV dword ptr [EBP + 0x18],ECX      ; 004fb822
    ADD EBX,EAX                         ; 004fb825
    MOV dword ptr [EBP + 0x20],EBX      ; 004fb827
    MOV ESI,dword ptr [EBP + 0x28]      ; 004fb82a
    MOV EDI,dword ptr [EBP + 0x10]      ; 004fb82d
    MOV EDX,dword ptr [EBP + 0x38]      ; 004fb830
    MOV ECX,dword ptr [EBP + 0x40]      ; 004fb833
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004fb836
    MOV EBX,dword ptr [EBP + 0x30]      ; 004fb839
    ADD ESI,EAX                         ; 004fb83c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb83e
    MOV dword ptr [EBP + 0x28],ESI      ; 004fb841
    MOV ESI,dword ptr [ESP + 0x50]      ; 004fb844
    ADD EDI,EAX                         ; 004fb848
    INC ESI                             ; 004fb84a
    MOV EAX,dword ptr [EBP + 0x3c]      ; 004fb84b
    MOV dword ptr [EBP + 0x10],EDI      ; 004fb84e
    ADD EDX,EAX                         ; 004fb851
    MOV EAX,dword ptr [EBP + 0x44]      ; 004fb853
    MOV dword ptr [EBP + 0x38],EDX      ; 004fb856
    ADD ECX,EAX                         ; 004fb859
    MOV EAX,dword ptr [EBP + 0x34]      ; 004fb85b
    MOV dword ptr [EBP + 0x40],ECX      ; 004fb85e
    ADD EBX,EAX                         ; 004fb861
    MOV dword ptr [ESP + 0x50],ESI      ; 004fb863
    MOV dword ptr [EBP + 0x30],EBX      ; 004fb867
    JMP 0x004fb701                      ; 004fb86a
        ;   XREF to: 004fb701 (UNCONDITIONAL_JUMP)  ; LAB_004fb701
    MOV EAX,[0x01c039a4]                ; 004fb86f | g_VertexPreprocessMode
        ;   Label: LAB_004fb86f
    CMP EAX,0x6                         ; 004fb874
    JA 0x004fb5f0                       ; 004fb877
        ;   XREF to: 004fb5f0 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EAX*0x4 + 0x4fb36c]  ; 004fb87d | caseD_4 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EBP,dword ptr [ECX + 0x14]      ; 004fb884 | DAT_005c5028
        ;   Label: LAB_004fb884
    CMP EBP,dword ptr [ESI + 0x14]      ; 004fb887 | DAT_005c5028
    JLE 0x004fb896                      ; 004fb88a
        ;   XREF to: 004fb896 (CONDITIONAL_JUMP)  ; LAB_004fb896
    MOV EDI,ECX                         ; 004fb88c
    MOV EBX,ESI                         ; 004fb88e
    MOV ECX,EAX                         ; 004fb890
    MOV EAX,EDX                         ; 004fb892
    MOV EDX,ECX                         ; 004fb894
    IMUL EBP,dword ptr [0x01e52efc],0x48 ; 004fb896 | DAT_01e52efc
        ;   Label: LAB_004fb896
    ADD EBP,0x1e52f00                   ; 004fb89d
    MOV dword ptr [EBP],EAX             ; 004fb8a3 | DAT_01e52f00
    MOV ECX,dword ptr [0x01e53380]      ; 004fb8a6 | DAT_01e53380
    MOV dword ptr [EBP + 0x4],EDX       ; 004fb8ac
    CMP EAX,ECX                         ; 004fb8af
    JGE 0x004fb8b8                      ; 004fb8b1
        ;   XREF to: 004fb8b8 (CONDITIONAL_JUMP)  ; LAB_004fb8b8
    MOV [0x01e53380],EAX                ; 004fb8b3 | DAT_01e53380
    CMP EDX,dword ptr [0x01e53384]      ; 004fb8b8 | DAT_01e53384
        ;   Label: LAB_004fb8b8
    JLE 0x004fb8c6                      ; 004fb8be
        ;   XREF to: 004fb8c6 (CONDITIONAL_JUMP)  ; LAB_004fb8c6
    MOV dword ptr [0x01e53384],EDX      ; 004fb8c0 | DAT_01e53384
    MOV EAX,dword ptr [EBX + 0x14]      ; 004fb8c6 | DAT_005c5028
        ;   Label: LAB_004fb8c6
    MOV ECX,dword ptr [EDI + 0x14]      ; 004fb8c9 | DAT_005c5028
    SUB ECX,EAX                         ; 004fb8cc
    CMP ECX,0x10000                     ; 004fb8ce
    JNC 0x004fba93                      ; 004fb8d4
        ;   XREF to: 004fba93 (CONDITIONAL_JUMP)  ; LAB_004fba93
    XOR ECX,ECX                         ; 004fb8da
    MOV EAX,dword ptr [EDI + 0x10]      ; 004fb8dc | DAT_005c5024
        ;   Label: LAB_004fb8dc
    MOV EDX,dword ptr [EBX + 0x10]      ; 004fb8df | DAT_005c5024
    MOV ESI,dword ptr [EBX + 0x14]      ; 004fb8e2 | DAT_005c5028
    SUB EAX,EDX                         ; 004fb8e5
    AND ESI,0xffff                      ; 004fb8e7
    MOV EDX,EAX                         ; 004fb8ed
    MOV EAX,ECX                         ; 004fb8ef
    XOR SI,0xffff                       ; 004fb8f1
    IMUL EDX                            ; 004fb8f5
    SHRD EAX,EDX,0x10                   ; 004fb8f7
    MOV EDX,EAX                         ; 004fb8fb
    MOV dword ptr [EBP + 0xc],EAX       ; 004fb8fd
    MOV EAX,ESI                         ; 004fb900
    IMUL EDX                            ; 004fb902
    SHRD EAX,EDX,0x10                   ; 004fb904
    MOV dword ptr [ESP + 0x40],EAX      ; 004fb908
    MOV EDX,dword ptr [ESP + 0x40]      ; 004fb90c
    MOV EAX,dword ptr [EBX + 0x10]      ; 004fb910 | DAT_005c5024
    ADD EAX,EDX                         ; 004fb913
    MOV dword ptr [EBP + 0x8],EAX       ; 004fb915
    MOV EAX,dword ptr [EDI + 0x18]      ; 004fb918 | DAT_005c502c
    MOV EDX,dword ptr [EBX + 0x18]      ; 004fb91b | DAT_005c502c
    SUB EAX,EDX                         ; 004fb91e
    MOV EDX,EAX                         ; 004fb920
    MOV EAX,ECX                         ; 004fb922
    IMUL EDX                            ; 004fb924
    SHRD EAX,EDX,0x10                   ; 004fb926
    MOV EDX,EAX                         ; 004fb92a
    MOV dword ptr [EBP + 0x1c],EAX      ; 004fb92c
    MOV EAX,ESI                         ; 004fb92f
    IMUL EDX                            ; 004fb931
    SHRD EAX,EDX,0x10                   ; 004fb933
    MOV dword ptr [ESP + 0x40],EAX      ; 004fb937
    MOV EDX,dword ptr [ESP + 0x40]      ; 004fb93b
    MOV EAX,dword ptr [EBX + 0x18]      ; 004fb93f | DAT_005c502c
    ADD EAX,EDX                         ; 004fb942
    MOV dword ptr [EBP + 0x18],EAX      ; 004fb944
    MOV EAX,dword ptr [EDI + 0x1c]      ; 004fb947 | DAT_005c5030
    MOV EDX,dword ptr [EBX + 0x1c]      ; 004fb94a | DAT_005c5030
    SUB EAX,EDX                         ; 004fb94d
    MOV EDX,EAX                         ; 004fb94f
    MOV EAX,ECX                         ; 004fb951
    IMUL EDX                            ; 004fb953
    SHRD EAX,EDX,0x10                   ; 004fb955
    MOV EDX,EAX                         ; 004fb959
    MOV dword ptr [EBP + 0x24],EAX      ; 004fb95b
    MOV EAX,ESI                         ; 004fb95e
    IMUL EDX                            ; 004fb960
    SHRD EAX,EDX,0x10                   ; 004fb962
    MOV dword ptr [ESP + 0x40],EAX      ; 004fb966
    MOV EDX,dword ptr [ESP + 0x40]      ; 004fb96a
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004fb96e | DAT_005c5030
    ADD EAX,EDX                         ; 004fb971
    MOV dword ptr [EBP + 0x20],EAX      ; 004fb973
    MOV EAX,dword ptr [EDI + 0x20]      ; 004fb976 | DAT_005c5034
    MOV EDX,dword ptr [EBX + 0x20]      ; 004fb979 | DAT_005c5034
    SUB EAX,EDX                         ; 004fb97c
    MOV EDX,EAX                         ; 004fb97e
    MOV EAX,ECX                         ; 004fb980
    IMUL EDX                            ; 004fb982
    SHRD EAX,EDX,0x10                   ; 004fb984
    MOV EDX,EAX                         ; 004fb988
    MOV dword ptr [EBP + 0x14],EAX      ; 004fb98a
    MOV EAX,ESI                         ; 004fb98d
    IMUL EDX                            ; 004fb98f
    SHRD EAX,EDX,0x10                   ; 004fb991
    MOV dword ptr [ESP + 0x40],EAX      ; 004fb995
    MOV EDX,dword ptr [ESP + 0x40]      ; 004fb999
    MOV EAX,dword ptr [EBX + 0x20]      ; 004fb99d | DAT_005c5034
    ADD EAX,EDX                         ; 004fb9a0
    MOV dword ptr [EBP + 0x10],EAX      ; 004fb9a2
    MOV EAX,dword ptr [EDI + 0x2c]      ; 004fb9a5 | DAT_005c5040
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004fb9a8 | DAT_005c5040
    SUB EAX,EDX                         ; 004fb9ab
    MOV EDX,EAX                         ; 004fb9ad
    MOV EAX,ECX                         ; 004fb9af
    IMUL EDX                            ; 004fb9b1
    SHRD EAX,EDX,0x10                   ; 004fb9b3
    MOV EDX,EAX                         ; 004fb9b7
    MOV dword ptr [EBP + 0x34],EAX      ; 004fb9b9
    MOV EAX,ESI                         ; 004fb9bc
    IMUL EDX                            ; 004fb9be
    SHRD EAX,EDX,0x10                   ; 004fb9c0
    MOV dword ptr [ESP + 0x40],EAX      ; 004fb9c4
    MOV EDX,dword ptr [ESP + 0x40]      ; 004fb9c8
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004fb9cc | DAT_005c5040
    ADD EAX,EDX                         ; 004fb9cf
    MOV dword ptr [EBP + 0x30],EAX      ; 004fb9d1
    CMP dword ptr [0x01c039a4],0x1      ; 004fb9d4 | g_VertexPreprocessMode
    JNZ 0x004fbab2                      ; 004fb9db
        ;   XREF to: 004fbab2 (CONDITIONAL_JUMP)  ; LAB_004fbab2
    CMP dword ptr [0x01c0399c],0x0      ; 004fb9e1 | g_ProcessorType
    JZ 0x004fbaa3                       ; 004fb9e8
        ;   XREF to: 004fbaa3 (CONDITIONAL_JUMP)  ; LAB_004fbaa3
    MOV EAX,0x7fffffff                  ; 004fb9ee
    MOV EDX,dword ptr [EBX + 0x8]       ; 004fb9f3 | DAT_005c501c
    SUB EAX,EDX                         ; 004fb9f6
    MOV dword ptr [ESP + 0x48],EAX      ; 004fb9f8
    MOV EDX,dword ptr [EDI + 0x8]       ; 004fb9fc | DAT_005c501c
    MOV EAX,0x7fffffff                  ; 004fb9ff
    SUB EAX,EDX                         ; 004fba04
    MOV EDX,dword ptr [ESP + 0x48]      ; 004fba06
        ;   Label: LAB_004fba06
    SUB EAX,EDX                         ; 004fba0a
    MOV dword ptr [ESP + 0x40],EAX      ; 004fba0c
    MOV EDX,dword ptr [ESP + 0x40]      ; 004fba10
    MOV EAX,ECX                         ; 004fba14
    IMUL EDX                            ; 004fba16
    SHRD EAX,EDX,0x10                   ; 004fba18
    MOV EDX,EAX                         ; 004fba1c
    MOV dword ptr [EBP + 0x2c],EAX      ; 004fba1e
    MOV EAX,ESI                         ; 004fba21
    IMUL EDX                            ; 004fba23
    SHRD EAX,EDX,0x10                   ; 004fba25
    MOV EDX,dword ptr [ESP + 0x48]      ; 004fba29
    ADD EDX,EAX                         ; 004fba2d
    MOV dword ptr [EBP + 0x28],EDX      ; 004fba2f
    MOV EAX,dword ptr [EDI + 0x24]      ; 004fba32 | DAT_005c5038
        ;   Label: LAB_004fba32
    MOV EDX,dword ptr [EBX + 0x24]      ; 004fba35 | DAT_005c5038
    SUB EAX,EDX                         ; 004fba38
    MOV EDX,EAX                         ; 004fba3a
    MOV EAX,ECX                         ; 004fba3c
    IMUL EDX                            ; 004fba3e
    SHRD EAX,EDX,0x10                   ; 004fba40
    MOV EDX,EAX                         ; 004fba44
    MOV dword ptr [EBP + 0x3c],EAX      ; 004fba46
    MOV EAX,ESI                         ; 004fba49
    IMUL EDX                            ; 004fba4b
    SHRD EAX,EDX,0x10                   ; 004fba4d
    MOV dword ptr [ESP + 0x40],EAX      ; 004fba51
    MOV EDX,dword ptr [ESP + 0x40]      ; 004fba55
    MOV EAX,dword ptr [EBX + 0x24]      ; 004fba59 | DAT_005c5038
    ADD EAX,EDX                         ; 004fba5c
    MOV dword ptr [EBP + 0x38],EAX      ; 004fba5e
    MOV EDX,dword ptr [EDI + 0x28]      ; 004fba61 | DAT_005c503c
    MOV EDI,dword ptr [EBX + 0x28]      ; 004fba64 | DAT_005c503c
    MOV EAX,ECX                         ; 004fba67
    SUB EDX,EDI                         ; 004fba69
    IMUL EDX                            ; 004fba6b
    SHRD EAX,EDX,0x10                   ; 004fba6d
    MOV EDX,EAX                         ; 004fba71
    MOV dword ptr [EBP + 0x44],EAX      ; 004fba73
    MOV EAX,ESI                         ; 004fba76
    IMUL EDX                            ; 004fba78
    SHRD EAX,EDX,0x10                   ; 004fba7a
    MOV EDX,EAX                         ; 004fba7e
    MOV EAX,dword ptr [EBX + 0x28]      ; 004fba80 | DAT_005c503c
    ADD EAX,EDX                         ; 004fba83
    MOV dword ptr [EBP + 0x40],EAX      ; 004fba85
    INC dword ptr [0x01e52efc]          ; 004fba88 | DAT_01e52efc
    JMP 0x004fb662                      ; 004fba8e
        ;   XREF to: 004fb662 (UNCONDITIONAL_JUMP)  ; LAB_004fb662
    MOV EAX,0xffffffff                  ; 004fba93
        ;   Label: LAB_004fba93
    XOR EDX,EDX                         ; 004fba98
    DIV ECX                             ; 004fba9a
    MOV ECX,EAX                         ; 004fba9c
    JMP 0x004fb8dc                      ; 004fba9e
        ;   XREF to: 004fb8dc (UNCONDITIONAL_JUMP)  ; LAB_004fb8dc
    MOV EAX,dword ptr [EBX + 0xc]       ; 004fbaa3 | DAT_005c5020
        ;   Label: LAB_004fbaa3
    MOV dword ptr [ESP + 0x48],EAX      ; 004fbaa6
    MOV EAX,dword ptr [EDI + 0xc]       ; 004fbaaa | DAT_005c5020
    JMP 0x004fba06                      ; 004fbaad
        ;   XREF to: 004fba06 (UNCONDITIONAL_JUMP)  ; LAB_004fba06
    MOV EAX,dword ptr [EDI + 0x8]       ; 004fbab2 | DAT_005c501c
        ;   Label: LAB_004fbab2
    MOV EDX,dword ptr [EBX + 0x8]       ; 004fbab5 | DAT_005c501c
    SUB EAX,EDX                         ; 004fbab8
    MOV EDX,EAX                         ; 004fbaba
    MOV EAX,ECX                         ; 004fbabc
    IMUL EDX                            ; 004fbabe
    SHRD EAX,EDX,0x10                   ; 004fbac0
    MOV EDX,EAX                         ; 004fbac4
    MOV dword ptr [EBP + 0x2c],EAX      ; 004fbac6
    MOV EAX,ESI                         ; 004fbac9
    IMUL EDX                            ; 004fbacb
    SHRD EAX,EDX,0x10                   ; 004fbacd
    MOV dword ptr [ESP + 0x40],EAX      ; 004fbad1
    MOV EDX,dword ptr [ESP + 0x40]      ; 004fbad5
    MOV EAX,dword ptr [EBX + 0x8]       ; 004fbad9 | DAT_005c501c
    ADD EAX,EDX                         ; 004fbadc
    MOV dword ptr [EBP + 0x28],EAX      ; 004fbade
    JMP 0x004fba32                      ; 004fbae1
        ;   XREF to: 004fba32 (UNCONDITIONAL_JUMP)  ; LAB_004fba32
    INC ECX                             ; 004fbae6
        ;   Label: LAB_004fbae6
    ADD EAX,0x48                        ; 004fbae7
    CMP ECX,EDX                         ; 004fbaea
    JL 0x004fb69f                       ; 004fbaec
        ;   XREF to: 004fb69f (CONDITIONAL_JUMP)  ; LAB_004fb69f
    XOR EAX,EAX                         ; 004fbaf2
        ;   Label: LAB_004fbaf2
    JMP 0x004fb6af                      ; 004fbaf4
        ;   XREF to: 004fb6af (UNCONDITIONAL_JUMP)  ; LAB_004fb6af
    INC EDX                             ; 004fbaf9
        ;   Label: LAB_004fbaf9
    ADD EAX,0x48                        ; 004fbafa
    CMP EDX,EBP                         ; 004fbafd
    JL 0x004fb6de                       ; 004fbaff
        ;   XREF to: 004fb6de (CONDITIONAL_JUMP)  ; LAB_004fb6de
    XOR EAX,EAX                         ; 004fbb05
        ;   Label: LAB_004fbb05
    JMP 0x004fb6ee                      ; 004fbb07
        ;   XREF to: 004fb6ee (UNCONDITIONAL_JUMP)  ; LAB_004fb6ee
    INC EDX                             ; 004fbb0c
        ;   Label: LAB_004fbb0c
    ADD EAX,0x48                        ; 004fbb0d
    CMP EDX,EDI                         ; 004fbb10
    JL 0x004fb733                       ; 004fbb12
        ;   XREF to: 004fb733 (CONDITIONAL_JUMP)  ; LAB_004fb733
    XOR EAX,EAX                         ; 004fbb18
        ;   Label: LAB_004fbb18
    JMP 0x004fb743                      ; 004fbb1a
        ;   XREF to: 004fb743 (UNCONDITIONAL_JUMP)  ; LAB_004fb743
    INC EDX                             ; 004fbb1f
        ;   Label: LAB_004fbb1f
    ADD EAX,0x48                        ; 004fbb20
    CMP EDX,ESI                         ; 004fbb23
    JL 0x004fb780                       ; 004fbb25
        ;   XREF to: 004fb780 (CONDITIONAL_JUMP)  ; LAB_004fb780
    XOR EAX,EAX                         ; 004fbb2b
        ;   Label: LAB_004fbb2b
    JMP 0x004fb790                      ; 004fbb2d
        ;   XREF to: 004fb790 (UNCONDITIONAL_JUMP)  ; LAB_004fb790

