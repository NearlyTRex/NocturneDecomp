; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_0043b330(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
;
; Referenced Globals:
;   undefined1* switchdataD_0043b2ec = 0043b5ac
;   undefined1* PTR_caseD_1_0043b2f0 = 0043b83d
;   undefined1* PTR_caseD_3_0043b2f8 = 0043b5d6
;   undefined1* switchdataD_0043b2fc = 0043b65a
;   undefined1* PTR_caseD_1_0043b300 = 0043b8bc
;   undefined1* PTR_caseD_3_0043b308 = 0043b684
;   undefined1* switchdataD_0043b30c = 0043b704
;   undefined1* PTR_caseD_1_0043b310 = 0043b93b
;   undefined1* PTR_caseD_3_0043b318 = 0043b72e
;   undefined1* PTR_caseD_1_0043b320 = 0043b9ba
;   undefined1* PTR_caseD_3_0043b328 = 0043b7de
;   string caseD_0
;   string caseD_0
;   string caseD_0
;   string caseD_2
;   ... and 37 more
;
; Called Functions:
;   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043ac50
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ab20
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0
;   engine_special.cpp_drawPolygon2_FUN_00565c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b330
        ;   Label: engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_0043b330
    PUSH ESI                            ; 0043b331
    PUSH EDI                            ; 0043b332
    PUSH EBP                            ; 0043b333
    SUB ESP,0x1c                        ; 0043b334
    MOV EBP,dword ptr [ESP + 0x30]      ; 0043b337
    MOV ECX,0xffffffff                  ; 0043b33b
    XOR EBX,EBX                         ; 0043b340
    XOR EDI,EDI                         ; 0043b342
    TEST EBP,EBP                        ; 0043b344
    JLE 0x0043b372                      ; 0043b346
        ;   XREF to: 0043b372 (CONDITIONAL_JUMP)  ; LAB_0043b372
    MOV EDX,dword ptr [ESP + 0x34]      ; 0043b348
    MOV ESI,dword ptr [EDX]             ; 0043b34c
        ;   Label: LAB_0043b34c
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043b34e
    SUB EAX,ESI                         ; 0043b355
    SHL EAX,0x4                         ; 0043b357
    MOV EAX,dword ptr [EAX + 0x60b024]  ; 0043b35a
    TEST EAX,0x80000000                 ; 0043b360
    JZ 0x0043b368                       ; 0043b365
        ;   XREF to: 0043b368 (CONDITIONAL_JUMP)  ; LAB_0043b368
    INC EDI                             ; 0043b367
    ADD EDX,0x4                         ; 0043b368
        ;   Label: LAB_0043b368
    INC EBX                             ; 0043b36b
    AND ECX,EAX                         ; 0043b36c
    CMP EBX,EBP                         ; 0043b36e
    JL 0x0043b34c                       ; 0043b370
        ;   XREF to: 0043b34c (CONDITIONAL_JUMP)  ; LAB_0043b34c
    CMP EDI,EBP                         ; 0043b372
        ;   Label: LAB_0043b372
    JNZ 0x0043b37f                      ; 0043b374
        ;   XREF to: 0043b37f (CONDITIONAL_JUMP)  ; LAB_0043b37f
    TEST CL,0xff                        ; 0043b376
    JNZ 0x0043b421                      ; 0043b379
        ;   XREF to: 0043b421 (CONDITIONAL_JUMP)  ; LAB_0043b421
    TEST EDI,EDI                        ; 0043b37f
        ;   Label: LAB_0043b37f
    JNZ 0x0043b4ea                      ; 0043b381
        ;   XREF to: 0043b4ea (CONDITIONAL_JUMP)  ; LAB_0043b4ea
    CMP dword ptr [0x01c6cee8],0x0      ; 0043b387 | g_INT_01c6cee8
    JZ 0x0043b493                       ; 0043b38e
        ;   XREF to: 0043b493 (CONDITIONAL_JUMP)  ; LAB_0043b493
    XOR EAX,EAX                         ; 0043b394
    TEST EBP,EBP                        ; 0043b396
    JLE 0x0043b3c0                      ; 0043b398
        ;   XREF to: 0043b3c0 (CONDITIONAL_JUMP)  ; LAB_0043b3c0
    MOV EBX,dword ptr [ESP + 0x34]      ; 0043b39a
    IMUL ECX,dword ptr [EBX],0x30       ; 0043b39e
        ;   Label: LAB_0043b39e
    INC EAX                             ; 0043b3a1
    ADD ECX,0x60b014                    ; 0043b3a2
    ADD EBX,0x4                         ; 0043b3a8
    MOV dword ptr [EAX*0x4 + 0x7e4488],ECX ; 0043b3ab
    CMP EAX,EBP                         ; 0043b3b2
    JL 0x0043b39e                       ; 0043b3b4
        ;   XREF to: 0043b39e (CONDITIONAL_JUMP)  ; LAB_0043b39e
    LEA EAX,[EAX]                       ; 0043b3b6
    LEA EDX,[EDX]                       ; 0043b3bc
    CMP dword ptr [0x007303fc],0x0      ; 0043b3c0 | g_CullingMode
        ;   Label: LAB_0043b3c0
    JZ 0x0043b460                       ; 0043b3c7
        ;   XREF to: 0043b460 (CONDITIONAL_JUMP)  ; LAB_0043b460
    CMP EBP,0x3                         ; 0043b3cd
    JLE 0x0043b433                      ; 0043b3d0
        ;   XREF to: 0043b433 (CONDITIONAL_JUMP)  ; LAB_0043b433
    LEA EAX,[EBP + -0x2]                ; 0043b3d2
    XOR EBX,EBX                         ; 0043b3d5
    MOV dword ptr [ESP],EAX             ; 0043b3d7
    LEA EDI,[EAX*0x4 + 0x0]             ; 0043b3da
    XOR ESI,ESI                         ; 0043b3e1
    TEST EDI,EDI                        ; 0043b3e3
    JLE 0x0043b40f                      ; 0043b3e5
        ;   XREF to: 0043b40f (CONDITIONAL_JUMP)  ; LAB_0043b40f
    MOV EAX,dword ptr [EBX + 0x7e4494]  ; 0043b3e7
        ;   Label: LAB_0043b3e7
    PUSH EAX                            ; 0043b3ed
    MOV EDX,dword ptr [EBX + 0x7e4490]  ; 0043b3ee
    PUSH EDX                            ; 0043b3f4
    MOV ECX,dword ptr [0x007e448c]      ; 0043b3f5 | g_ClipperCullingPointers
    PUSH ECX                            ; 0043b3fb
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0 ; 0043b3fc
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0043b401
    TEST EAX,EAX                        ; 0043b404
    JZ 0x0043b430                       ; 0043b406
        ;   XREF to: 0043b430 (CONDITIONAL_JUMP)  ; LAB_0043b430
    ADD EBX,0x4                         ; 0043b408
        ;   Label: LAB_0043b408
    CMP EBX,EDI                         ; 0043b40b
    JL 0x0043b3e7                       ; 0043b40d
        ;   XREF to: 0043b3e7 (CONDITIONAL_JUMP)  ; LAB_0043b3e7
    CMP ESI,dword ptr [ESP]             ; 0043b40f
        ;   Label: LAB_0043b40f
    JNZ 0x0043b460                      ; 0043b412
        ;   XREF to: 0043b460 (CONDITIONAL_JUMP)  ; LAB_0043b460
    MOV EAX,0x1                         ; 0043b414
    ADD ESP,0x1c                        ; 0043b419
        ;   Label: LAB_0043b419
    POP EBP                             ; 0043b41c
    POP EDI                             ; 0043b41d
    POP ESI                             ; 0043b41e
    POP EBX                             ; 0043b41f
    RET                                 ; 0043b420
    XOR ECX,ECX                         ; 0043b421
        ;   Label: LAB_0043b421
    MOV EAX,0x1                         ; 0043b423
    MOV dword ptr [0x007e3e88],ECX      ; 0043b428 | g_ClippedVertexCount
    JMP 0x0043b419                      ; 0043b42e
        ;   XREF to: 0043b419 (UNCONDITIONAL_JUMP)  ; LAB_0043b419
    INC ESI                             ; 0043b430
        ;   Label: LAB_0043b430
    JMP 0x0043b408                      ; 0043b431
        ;   XREF to: 0043b408 (UNCONDITIONAL_JUMP)  ; LAB_0043b408
    MOV EAX,[0x007e4494]                ; 0043b433 | g_ClipperCullingPointers[2]
        ;   Label: LAB_0043b433
    PUSH EAX                            ; 0043b438
    MOV EDX,dword ptr [0x007e4490]      ; 0043b439 | g_ClipperCullingPointers[1]
    PUSH EDX                            ; 0043b43f
    MOV ECX,dword ptr [0x007e448c]      ; 0043b440 | g_ClipperCullingPointers
    PUSH ECX                            ; 0043b446
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0 ; 0043b447
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0043b44c
    TEST EAX,EAX                        ; 0043b44f
    JNZ 0x0043b460                      ; 0043b451
        ;   XREF to: 0043b460 (CONDITIONAL_JUMP)  ; LAB_0043b460
    MOV EAX,0x1                         ; 0043b453
    ADD ESP,0x1c                        ; 0043b458
    POP EBP                             ; 0043b45b
    POP EDI                             ; 0043b45c
    POP ESI                             ; 0043b45d
    POP EBX                             ; 0043b45e
    RET                                 ; 0043b45f
    MOV ESI,dword ptr [0x01c6e2b4]      ; 0043b460 | g_RenderStateFlags
        ;   Label: LAB_0043b460
    PUSH ESI                            ; 0043b466
    LEA EAX,[EBP + -0x2]                ; 0043b467
    MOV EBX,dword ptr [0x01ed3198]      ; 0043b46a | g_RenderedTriangleCount
    PUSH EBP                            ; 0043b470
    ADD EBX,EAX                         ; 0043b471
    PUSH 0x7e448c                       ; 0043b473
    MOV dword ptr [0x01ed3198],EBX      ; 0043b478 | g_RenderedTriangleCount
    CALL engine_special.cpp_drawPolygon2_FUN_00565c40 ; 0043b47e
        ;   XREF to: 00565c40 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_00565c40(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    MOV EAX,0x1                         ; 0043b483
    ADD ESP,0xc                         ; 0043b488
    ADD ESP,0x1c                        ; 0043b48b
    POP EBP                             ; 0043b48e
    POP EDI                             ; 0043b48f
    POP ESI                             ; 0043b490
    POP EBX                             ; 0043b491
    RET                                 ; 0043b492
    MOV dword ptr [ESP + 0x4],EDI       ; 0043b493
        ;   Label: LAB_0043b493
    MOV dword ptr [0x007e3e88],EBP      ; 0043b497 | g_ClippedVertexCount
    TEST EBP,EBP                        ; 0043b49d
    JLE 0x0043b4e0                      ; 0043b49f
        ;   XREF to: 0043b4e0 (CONDITIONAL_JUMP)  ; LAB_0043b4e0
    MOV EBX,dword ptr [ESP + 0x34]      ; 0043b4a1
    MOV EDX,0x7e3e8c                    ; 0043b4a5
    IMUL ESI,dword ptr [EBX],0x30       ; 0043b4aa
        ;   Label: LAB_0043b4aa
    MOV ECX,0x30                        ; 0043b4ad
    ADD ESI,0x60b014                    ; 0043b4b2
    MOV EDI,EDX                         ; 0043b4b8
    PUSH EDI                            ; 0043b4ba
    MOV EAX,ECX                         ; 0043b4bb
    SHR ECX,0x2                         ; 0043b4bd
    MOVSD.REP ES:EDI,ESI                ; 0043b4c0
    MOV CL,AL                           ; 0043b4c2
    AND CL,0x3                          ; 0043b4c4
    MOVSB.REP ES:EDI,ESI                ; 0043b4c7
    POP EDI                             ; 0043b4c9
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043b4ca
    ADD EBX,0x4                         ; 0043b4ce
    INC EAX                             ; 0043b4d1
    ADD EDX,0x30                        ; 0043b4d2
    MOV dword ptr [ESP + 0x4],EAX       ; 0043b4d5
    CMP EBP,EAX                         ; 0043b4d9
    JG 0x0043b4aa                       ; 0043b4db
        ;   XREF to: 0043b4aa (CONDITIONAL_JUMP)  ; LAB_0043b4aa
    LEA EAX,[EAX]                       ; 0043b4dd
    XOR EAX,EAX                         ; 0043b4e0
        ;   Label: LAB_0043b4e0
    ADD ESP,0x1c                        ; 0043b4e2
    POP EBP                             ; 0043b4e5
    POP EDI                             ; 0043b4e6
    POP ESI                             ; 0043b4e7
    POP EBX                             ; 0043b4e8
    RET                                 ; 0043b4e9
    XOR EDX,EDX                         ; 0043b4ea
        ;   Label: LAB_0043b4ea
    MOV dword ptr [0x007e4d54],EBP      ; 0043b4ec | g_InputVertexCount
    MOV dword ptr [0x007e4d58],EDX      ; 0043b4f2 | g_OutputVertexCount
    MOV dword ptr [0x007e4d5c],EDX      ; 0043b4f8 | g_TempVertexCount
    MOV dword ptr [0x007e4d60],EDX      ; 0043b4fe | g_IntermediateVertexCount
    MOV dword ptr [0x007e3e88],EDX      ; 0043b504 | g_ClippedVertexCount
    MOV dword ptr [ESP + 0x8],EDX       ; 0043b50a
    TEST EBP,EBP                        ; 0043b50e
    JLE 0x0043b550                      ; 0043b510
        ;   XREF to: 0043b550 (CONDITIONAL_JUMP)  ; LAB_0043b550
    MOV EBX,dword ptr [ESP + 0x34]      ; 0043b512
    MOV EDX,0x7e5364                    ; 0043b516
    IMUL ESI,dword ptr [EBX],0x30       ; 0043b51b
        ;   Label: LAB_0043b51b
    MOV ECX,0x30                        ; 0043b51e
    ADD ESI,0x60b014                    ; 0043b523
    MOV EDI,EDX                         ; 0043b529
    PUSH EDI                            ; 0043b52b
    MOV EAX,ECX                         ; 0043b52c
    SHR ECX,0x2                         ; 0043b52e
    MOVSD.REP ES:EDI,ESI                ; 0043b531
    MOV CL,AL                           ; 0043b533
    AND CL,0x3                          ; 0043b535
    MOVSB.REP ES:EDI,ESI                ; 0043b538
    POP EDI                             ; 0043b53a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043b53b
    ADD EBX,0x4                         ; 0043b53f
    INC EAX                             ; 0043b542
    ADD EDX,0x30                        ; 0043b543
    MOV dword ptr [ESP + 0x8],EAX       ; 0043b546
    CMP EBP,EAX                         ; 0043b54a
    JG 0x0043b51b                       ; 0043b54c
        ;   XREF to: 0043b51b (CONDITIONAL_JUMP)  ; LAB_0043b51b
    MOV EAX,EAX                         ; 0043b54e
    XOR EBX,EBX                         ; 0043b550
        ;   Label: LAB_0043b550
    MOV ESI,dword ptr [0x007e4d54]      ; 0043b552 | g_InputVertexCount
    MOV dword ptr [ESP + 0x14],EBX      ; 0043b558
    TEST ESI,ESI                        ; 0043b55c
    JLE 0x0043b5f0                      ; 0043b55e
        ;   XREF to: 0043b5f0 (CONDITIONAL_JUMP)  ; LAB_0043b5f0
    MOV EBX,0x7e5364                    ; 0043b564
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043b569
        ;   Label: LAB_0043b569
    MOV ESI,dword ptr [0x007e4d54]      ; 0043b56d | g_InputVertexCount
    INC EAX                             ; 0043b573
    CMP EAX,ESI                         ; 0043b574
    JNZ 0x0043b57a                      ; 0043b576
        ;   XREF to: 0043b57a (CONDITIONAL_JUMP)  ; LAB_0043b57a
    XOR EAX,ESI                         ; 0043b578
    IMUL EAX,EAX,0x30                   ; 0043b57a
        ;   Label: LAB_0043b57a
    MOV EBP,0x7e5364                    ; 0043b57d | g_ClipperInputBuffer
    MOV EDX,EBX                         ; 0043b582
    MOV ECX,dword ptr [EBX]             ; 0043b584
    MOV EDI,dword ptr [EBX + 0x8]       ; 0043b586
    ADD EBP,EAX                         ; 0043b589
    XOR EAX,EAX                         ; 0043b58b
    CMP ECX,EDI                         ; 0043b58d
    JL 0x0043b596                       ; 0043b58f
        ;   XREF to: 0043b596 (CONDITIONAL_JUMP)  ; LAB_0043b596
    MOV EAX,0x1                         ; 0043b591
    MOV ESI,dword ptr [EBP + 0x8]       ; 0043b596 | g_ClipperInputBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0043b596
    CMP ESI,dword ptr [EBP]             ; 0043b599 | g_ClipperInputBuffer
    JG 0x0043b5a0                       ; 0043b59c
        ;   XREF to: 0043b5a0 (CONDITIONAL_JUMP)  ; LAB_0043b5a0
    OR AL,0x2                           ; 0043b59e
    CMP EAX,0x3                         ; 0043b5a0
        ;   Label: LAB_0043b5a0
    JA 0x0043b5d6                       ; 0043b5a3
        ;   XREF to: 0043b5d6 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43b2ec]  ; 0043b5a5 | = "k=XM~" | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EDI,dword ptr [ESP + 0x14]      ; 0043b5d6
        ;   Label: caseD_3
    MOV EBP,dword ptr [0x007e4d54]      ; 0043b5da | g_InputVertexCount
    INC EDI                             ; 0043b5e0
    ADD EBX,0x30                        ; 0043b5e1
    MOV dword ptr [ESP + 0x14],EDI      ; 0043b5e4
    CMP EDI,EBP                         ; 0043b5e8
    JL 0x0043b569                       ; 0043b5ea
        ;   XREF to: 0043b569 (CONDITIONAL_JUMP)  ; LAB_0043b569
    MOV EAX,[0x007e4d58]                ; 0043b5f0 | g_OutputVertexCount
        ;   Label: LAB_0043b5f0
    CMP EAX,0x3                         ; 0043b5f5
    JL 0x0043b833                       ; 0043b5f8
        ;   XREF to: 0043b833 (CONDITIONAL_JUMP)  ; LAB_0043b833
    XOR EDX,EDX                         ; 0043b5fe
    MOV dword ptr [ESP + 0x18],EDX      ; 0043b600
    TEST EAX,EAX                        ; 0043b604
    JLE 0x0043b69e                      ; 0043b606
        ;   XREF to: 0043b69e (CONDITIONAL_JUMP)  ; LAB_0043b69e
    MOV EBX,0x7e4d64                    ; 0043b60c | g_ClipperOutputBuffer
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043b611
        ;   Label: LAB_0043b611
    MOV EBP,dword ptr [0x007e4d58]      ; 0043b615 | g_OutputVertexCount
    INC EAX                             ; 0043b61b
    CMP EAX,EBP                         ; 0043b61c
    JNZ 0x0043b622                      ; 0043b61e
        ;   XREF to: 0043b622 (CONDITIONAL_JUMP)  ; LAB_0043b622
    XOR EAX,EBP                         ; 0043b620
    IMUL EAX,EAX,0x30                   ; 0043b622
        ;   Label: LAB_0043b622
    MOV EBP,0x7e4d64                    ; 0043b625 | g_ClipperOutputBuffer
    MOV EDX,EBX                         ; 0043b62a
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043b62c | g_ClipperOutputBuffer[0].projected_vertex.transformed_z | g_ClipperOutputBuffer[1].projected_vertex.transformed_z
    MOV ESI,dword ptr [EBX]             ; 0043b62f | g_ClipperOutputBuffer | g_ClipperOutputBuffer[1].projected_vertex.transformed_x
    NEG ECX                             ; 0043b631
    ADD EBP,EAX                         ; 0043b633
    XOR EAX,EAX                         ; 0043b635
    CMP ECX,ESI                         ; 0043b637
    JL 0x0043b640                       ; 0043b639
        ;   XREF to: 0043b640 (CONDITIONAL_JUMP)  ; LAB_0043b640
    MOV EAX,0x1                         ; 0043b63b
    MOV ECX,dword ptr [EBP + 0x8]       ; 0043b640 | g_ClipperOutputBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0043b640
    MOV EDI,dword ptr [EBP]             ; 0043b643 | g_ClipperOutputBuffer
    NEG ECX                             ; 0043b646
    CMP ECX,EDI                         ; 0043b648
    JL 0x0043b64e                       ; 0043b64a
        ;   XREF to: 0043b64e (CONDITIONAL_JUMP)  ; LAB_0043b64e
    OR AL,0x2                           ; 0043b64c
    CMP EAX,0x3                         ; 0043b64e
        ;   Label: LAB_0043b64e
    JA 0x0043b684                       ; 0043b651
        ;   XREF to: 0043b684 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43b2fc]  ; 0043b653 | = "k=\\M~" | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043b684
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007e4d58]      ; 0043b688 | g_OutputVertexCount
    INC EDX                             ; 0043b68e
    ADD EBX,0x30                        ; 0043b68f
    MOV dword ptr [ESP + 0x18],EDX      ; 0043b692
    CMP EDX,ECX                         ; 0043b696
    JL 0x0043b611                       ; 0043b698
        ;   XREF to: 0043b611 (CONDITIONAL_JUMP)  ; LAB_0043b611
    MOV EBX,dword ptr [0x007e4d5c]      ; 0043b69e | g_TempVertexCount
        ;   Label: LAB_0043b69e
    CMP EBX,0x3                         ; 0043b6a4
    JL 0x0043b833                       ; 0043b6a7
        ;   XREF to: 0043b833 (CONDITIONAL_JUMP)  ; LAB_0043b833
    XOR ESI,ESI                         ; 0043b6ad
    MOV dword ptr [ESP + 0x10],ESI      ; 0043b6af
    TEST EBX,EBX                        ; 0043b6b3
    JLE 0x0043b748                      ; 0043b6b5
        ;   XREF to: 0043b748 (CONDITIONAL_JUMP)  ; LAB_0043b748
    MOV EBX,0x7e5964                    ; 0043b6bb | g_ClipperWorkingBuffer
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043b6c0
        ;   Label: LAB_0043b6c0
    MOV EBP,dword ptr [0x007e4d5c]      ; 0043b6c4 | g_TempVertexCount
    INC EAX                             ; 0043b6ca
    CMP EAX,EBP                         ; 0043b6cb
    JNZ 0x0043b6d1                      ; 0043b6cd
        ;   XREF to: 0043b6d1 (CONDITIONAL_JUMP)  ; LAB_0043b6d1
    XOR EAX,EBP                         ; 0043b6cf
    IMUL EAX,EAX,0x30                   ; 0043b6d1
        ;   Label: LAB_0043b6d1
    MOV EBP,0x7e5964                    ; 0043b6d4 | g_ClipperWorkingBuffer
    MOV EDX,EBX                         ; 0043b6d9
    MOV ECX,dword ptr [EBX + 0x4]       ; 0043b6db | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y | g_ClipperWorkingBuffer[1].projected_vertex.transformed_y
    MOV ESI,dword ptr [EBX + 0x8]       ; 0043b6de | g_ClipperWorkingBuffer[0].projected_vertex.transformed_z | g_ClipperWorkingBuffer[1].projected_vertex.transformed_z
    ADD EBP,EAX                         ; 0043b6e1
    XOR EAX,EAX                         ; 0043b6e3
    CMP ECX,ESI                         ; 0043b6e5
    JL 0x0043b6ee                       ; 0043b6e7
        ;   XREF to: 0043b6ee (CONDITIONAL_JUMP)  ; LAB_0043b6ee
    MOV EAX,0x1                         ; 0043b6e9
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043b6ee | g_ClipperWorkingBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0043b6ee
    CMP EDI,dword ptr [EBP + 0x4]       ; 0043b6f1 | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
    JG 0x0043b6f8                       ; 0043b6f4
        ;   XREF to: 0043b6f8 (CONDITIONAL_JUMP)  ; LAB_0043b6f8
    OR AL,0x2                           ; 0043b6f6
    CMP EAX,0x3                         ; 0043b6f8
        ;   Label: LAB_0043b6f8
    JA 0x0043b72e                       ; 0043b6fb
        ;   XREF to: 0043b72e (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43b30c]  ; 0043b6fd | = "k=`M~" | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EDX,dword ptr [ESP + 0x10]      ; 0043b72e
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007e4d5c]      ; 0043b732 | g_TempVertexCount
    INC EDX                             ; 0043b738
    ADD EBX,0x30                        ; 0043b739
    MOV dword ptr [ESP + 0x10],EDX      ; 0043b73c
    CMP EDX,ECX                         ; 0043b740
    JL 0x0043b6c0                       ; 0043b742
        ;   XREF to: 0043b6c0 (CONDITIONAL_JUMP)  ; LAB_0043b6c0
    MOV EBX,dword ptr [0x007e4d60]      ; 0043b748 | g_IntermediateVertexCount
        ;   Label: LAB_0043b748
    CMP EBX,0x3                         ; 0043b74e
    JL 0x0043b833                       ; 0043b751
        ;   XREF to: 0043b833 (CONDITIONAL_JUMP)  ; LAB_0043b833
    XOR ESI,ESI                         ; 0043b757
    MOV dword ptr [ESP + 0xc],ESI       ; 0043b759
    TEST EBX,EBX                        ; 0043b75d
    JLE 0x0043b7f8                      ; 0043b75f
        ;   XREF to: 0043b7f8 (CONDITIONAL_JUMP)  ; LAB_0043b7f8
    MOV EBX,0x7e5f64                    ; 0043b765 | g_ClipperIntermediateBuffer
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043b76a
        ;   Label: LAB_0043b76a
    MOV EDI,dword ptr [0x007e4d60]      ; 0043b76e | g_IntermediateVertexCount
    INC EAX                             ; 0043b774
    CMP EAX,EDI                         ; 0043b775
    JNZ 0x0043b77b                      ; 0043b777
        ;   XREF to: 0043b77b (CONDITIONAL_JUMP)  ; LAB_0043b77b
    XOR EAX,EDI                         ; 0043b779
    IMUL EAX,EAX,0x30                   ; 0043b77b
        ;   Label: LAB_0043b77b
    MOV EBP,0x7e5f64                    ; 0043b77e | g_ClipperIntermediateBuffer
    MOV EDX,EBX                         ; 0043b783
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043b785 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_z | g_ClipperIntermediateBuffer[1].projected_vertex.transformed_z
    MOV ESI,dword ptr [EBX + 0x4]       ; 0043b788 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y | g_ClipperIntermediateBuffer[1].projected_vertex.transformed_y
    NEG ECX                             ; 0043b78b
    ADD EBP,EAX                         ; 0043b78d
    XOR EAX,EAX                         ; 0043b78f
    CMP ECX,ESI                         ; 0043b791
    JL 0x0043b79a                       ; 0043b793
        ;   XREF to: 0043b79a (CONDITIONAL_JUMP)  ; LAB_0043b79a
    MOV EAX,0x1                         ; 0043b795
    MOV ECX,dword ptr [EBP + 0x8]       ; 0043b79a | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0043b79a
    MOV EDI,dword ptr [EBP + 0x4]       ; 0043b79d | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    NEG ECX                             ; 0043b7a0
    CMP ECX,EDI                         ; 0043b7a2
    JL 0x0043b7a8                       ; 0043b7a4
        ;   XREF to: 0043b7a8 (CONDITIONAL_JUMP)  ; LAB_0043b7a8
    OR AL,0x2                           ; 0043b7a6
    CMP EAX,0x3                         ; 0043b7a8
        ;   Label: LAB_0043b7a8
    JA 0x0043b7de                       ; 0043b7ab
        ;   XREF to: 0043b7de (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43b31c]  ; 0043b7ad | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007e3e88],0x30 ; 0043b7b4 | g_ClippedVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043b7bb
    MOV ESI,EDX                         ; 0043b7c0
    ADD EDI,0x7e3e8c                    ; 0043b7c2 | g_SRenderVertex_ARRAY_007e3e8c
    PUSH EDI                            ; 0043b7c8
    MOV EAX,ECX                         ; 0043b7c9
    SHR ECX,0x2                         ; 0043b7cb
    MOVSD.REP ES:EDI,ESI                ; 0043b7ce | g_ClipperIntermediateBuffer | g_SRenderVertex_ARRAY_007e3e8c | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043b7d0
    AND CL,0x3                          ; 0043b7d2
    MOVSB.REP ES:EDI,ESI                ; 0043b7d5 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.transformed_y
    POP EDI                             ; 0043b7d7
    INC dword ptr [0x007e3e88]          ; 0043b7d8 | g_ClippedVertexCount
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043b7de
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007e4d60]      ; 0043b7e2 | g_IntermediateVertexCount
    INC EDX                             ; 0043b7e8
    ADD EBX,0x30                        ; 0043b7e9
    MOV dword ptr [ESP + 0xc],EDX       ; 0043b7ec
    CMP EDX,ECX                         ; 0043b7f0
    JL 0x0043b76a                       ; 0043b7f2
        ;   XREF to: 0043b76a (CONDITIONAL_JUMP)  ; LAB_0043b76a
    MOV EBX,dword ptr [0x007e3e88]      ; 0043b7f8 | g_ClippedVertexCount
        ;   Label: LAB_0043b7f8
    CMP EBX,0x3                         ; 0043b7fe
    JL 0x0043b833                       ; 0043b801
        ;   XREF to: 0043b833 (CONDITIONAL_JUMP)  ; LAB_0043b833
    MOV EAX,0x7e3e8c                    ; 0043b803 | g_SRenderVertex_ARRAY_007e3e8c
    XOR EBP,EBP                         ; 0043b808
    TEST EBX,EBX                        ; 0043b80a
    JLE 0x0043b833                      ; 0043b80c
        ;   XREF to: 0043b833 (CONDITIONAL_JUMP)  ; LAB_0043b833
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043b80e | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.transformed_z | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_z
        ;   Label: LAB_0043b80e
    TEST ECX,ECX                        ; 0043b811
    JNZ 0x0043ba39                      ; 0043b813
        ;   XREF to: 0043ba39 (CONDITIONAL_JUMP)  ; LAB_0043ba39
    MOV dword ptr [EAX + 0x8],0x1       ; 0043b819 | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.transformed_z | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_z
    MOV dword ptr [EAX],ECX             ; 0043b820 | g_SRenderVertex_ARRAY_007e3e8c | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_x
    MOV dword ptr [EAX + 0x4],ECX       ; 0043b822 | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_y
    MOV EDX,dword ptr [0x007e3e88]      ; 0043b825 | g_ClippedVertexCount
        ;   Label: LAB_0043b825
    INC EBP                             ; 0043b82b
    ADD EAX,0x30                        ; 0043b82c
    CMP EBP,EDX                         ; 0043b82f
    JL 0x0043b80e                       ; 0043b831
        ;   XREF to: 0043b80e (CONDITIONAL_JUMP)  ; LAB_0043b80e
    XOR EAX,EAX                         ; 0043b833
        ;   Label: LAB_0043b833
    ADD ESP,0x1c                        ; 0043b835
    POP EBP                             ; 0043b838
    POP EDI                             ; 0043b839
    POP ESI                             ; 0043b83a
    POP EBX                             ; 0043b83b
    RET                                 ; 0043b83c
    IMUL EAX,dword ptr [0x007e4d58],0x30 ; 0043b83d | g_OutputVertexCount
        ;   Label: caseD_1
    ADD EAX,0x7e4d64                    ; 0043b844 | g_ClipperOutputBuffer
    PUSH EAX                            ; 0043b849
    PUSH EDX                            ; 0043b84a
    PUSH EBP                            ; 0043b84b
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043a8c0 ; 0043b84c
        ;   XREF to: 0043a8c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043a8c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007e4d58]      ; 0043b851 | g_OutputVertexCount
    INC ESI                             ; 0043b857
    ADD ESP,0xc                         ; 0043b858
    MOV dword ptr [0x007e4d58],ESI      ; 0043b85b | g_OutputVertexCount
    JMP 0x0043b5d6                      ; 0043b861
        ;   XREF to: 0043b5d6 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007e4d5c],0x30 ; 0043b8bc | g_TempVertexCount
        ;   Label: caseD_1
    ADD EAX,0x7e5964                    ; 0043b8c3 | g_ClipperWorkingBuffer
    PUSH EAX                            ; 0043b8c8
    PUSH EDX                            ; 0043b8c9 | g_ClipperOutputBuffer
    PUSH EBP                            ; 0043b8ca
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0 ; 0043b8cb
        ;   XREF to: 0043a9f0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007e4d5c]      ; 0043b8d0 | g_TempVertexCount
    INC ESI                             ; 0043b8d6
    ADD ESP,0xc                         ; 0043b8d7
    MOV dword ptr [0x007e4d5c],ESI      ; 0043b8da | g_TempVertexCount
    JMP 0x0043b684                      ; 0043b8e0
        ;   XREF to: 0043b684 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007e4d60],0x30 ; 0043b93b | g_IntermediateVertexCount
        ;   Label: caseD_1
    ADD EAX,0x7e5f64                    ; 0043b942 | g_ClipperIntermediateBuffer
    PUSH EAX                            ; 0043b947
    PUSH EDX                            ; 0043b948 | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 0043b949
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ab20 ; 0043b94a
        ;   XREF to: 0043ab20 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ab20(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007e4d60]      ; 0043b94f | g_IntermediateVertexCount
    INC ESI                             ; 0043b955
    ADD ESP,0xc                         ; 0043b956
    MOV dword ptr [0x007e4d60],ESI      ; 0043b959 | g_IntermediateVertexCount
    JMP 0x0043b72e                      ; 0043b95f
        ;   XREF to: 0043b72e (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007e3e88],0x30 ; 0043b9ba | g_ClippedVertexCount
        ;   Label: caseD_1
    ADD EAX,0x7e3e8c                    ; 0043b9c1 | g_SRenderVertex_ARRAY_007e3e8c
    PUSH EAX                            ; 0043b9c6
    PUSH EDX                            ; 0043b9c7 | g_ClipperIntermediateBuffer
    PUSH EBP                            ; 0043b9c8
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043ac50 ; 0043b9c9
        ;   XREF to: 0043ac50 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043ac50(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007e3e88]      ; 0043b9ce | g_ClippedVertexCount
    INC ESI                             ; 0043b9d4
    ADD ESP,0xc                         ; 0043b9d5
    MOV dword ptr [0x007e3e88],ESI      ; 0043b9d8 | g_ClippedVertexCount
    JMP 0x0043b7de                      ; 0043b9de
        ;   XREF to: 0043b7de (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007e3e88],0x30 ; 0043b9e3 | g_ClippedVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043b9ea
    MOV ESI,EDX                         ; 0043b9ef
    ADD EDI,0x7e3e8c                    ; 0043b9f1 | g_SRenderVertex_ARRAY_007e3e8c
    PUSH EDI                            ; 0043b9f7
    MOV EAX,ECX                         ; 0043b9f8
    SHR ECX,0x2                         ; 0043b9fa
    MOVSD.REP ES:EDI,ESI                ; 0043b9fd | g_ClipperIntermediateBuffer | g_SRenderVertex_ARRAY_007e3e8c | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043b9ff
    AND CL,0x3                          ; 0043ba01
    MOVSB.REP ES:EDI,ESI                ; 0043ba04 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.transformed_y
    POP EDI                             ; 0043ba06
    MOV ECX,dword ptr [0x007e3e88]      ; 0043ba07 | g_ClippedVertexCount
    INC ECX                             ; 0043ba0d
    MOV dword ptr [0x007e3e88],ECX      ; 0043ba0e | g_ClippedVertexCount
    IMUL EAX,ECX,0x30                   ; 0043ba14
    ADD EAX,0x7e3e8c                    ; 0043ba17 | g_SRenderVertex_ARRAY_007e3e8c
    PUSH EAX                            ; 0043ba1c
    PUSH EBP                            ; 0043ba1d
    PUSH EDX                            ; 0043ba1e | g_ClipperIntermediateBuffer
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043ac50 ; 0043ba1f
        ;   XREF to: 0043ac50 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043ac50(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007e3e88]      ; 0043ba24 | g_ClippedVertexCount
    INC EDI                             ; 0043ba2a
    ADD ESP,0xc                         ; 0043ba2b
    MOV dword ptr [0x007e3e88],EDI      ; 0043ba2e | g_ClippedVertexCount
    JMP 0x0043b7de                      ; 0043ba34
        ;   XREF to: 0043b7de (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP ECX,dword ptr [EAX]             ; 0043ba39 | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_x
        ;   Label: LAB_0043ba39
    JGE 0x0043ba44                      ; 0043ba3b
        ;   XREF to: 0043ba44 (CONDITIONAL_JUMP)  ; LAB_0043ba44
    MOV dword ptr [EAX],ECX             ; 0043ba3d | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_x
    JMP 0x0043b825                      ; 0043ba3f
        ;   XREF to: 0043b825 (UNCONDITIONAL_JUMP)  ; LAB_0043b825
    MOV EDX,ECX                         ; 0043ba44
        ;   Label: LAB_0043ba44
    MOV ESI,dword ptr [EAX]             ; 0043ba46 | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_x
    NEG EDX                             ; 0043ba48
    CMP EDX,ESI                         ; 0043ba4a
    JLE 0x0043ba55                      ; 0043ba4c
        ;   XREF to: 0043ba55 (CONDITIONAL_JUMP)  ; LAB_0043ba55
    MOV dword ptr [EAX],EDX             ; 0043ba4e | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_x
    JMP 0x0043b825                      ; 0043ba50
        ;   XREF to: 0043b825 (UNCONDITIONAL_JUMP)  ; LAB_0043b825
    MOV EDI,dword ptr [EAX + 0x8]       ; 0043ba55 | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_z
        ;   Label: LAB_0043ba55
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043ba58 | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_y
    CMP ECX,EDI                         ; 0043ba5b
    JLE 0x0043ba67                      ; 0043ba5d
        ;   XREF to: 0043ba67 (CONDITIONAL_JUMP)  ; LAB_0043ba67
    MOV dword ptr [EAX + 0x4],EDI       ; 0043ba5f | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_y
    JMP 0x0043b825                      ; 0043ba62
        ;   XREF to: 0043b825 (UNCONDITIONAL_JUMP)  ; LAB_0043b825
    CMP EDX,ECX                         ; 0043ba67
        ;   Label: LAB_0043ba67
    JLE 0x0043b825                      ; 0043ba69
        ;   XREF to: 0043b825 (CONDITIONAL_JUMP)  ; LAB_0043b825
    MOV dword ptr [EAX + 0x4],EDX       ; 0043ba6f | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_y
    JMP 0x0043b825                      ; 0043ba72
        ;   XREF to: 0043b825 (UNCONDITIONAL_JUMP)  ; LAB_0043b825

