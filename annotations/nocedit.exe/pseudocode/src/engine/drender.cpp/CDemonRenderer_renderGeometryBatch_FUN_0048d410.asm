; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410(CDemonRenderer *this_ptr,int *vertex_indices,int face_count,int vertices_per_face,int render_mode)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   vertex_indices
; int              Stack[0xc]:4   face_count
; int              Stack[0x10]:4   vertices_per_face
; int              Stack[0x14]:4   render_mode
; Local Variables:
; CVector3i[6]     Stack[-0x68]:72  local_68
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_00622147
;   TerminatedCString s_Can_t_capture_this_type__0062215d
;   int g_BitsPerPixel = 0x8
;   int g_CullingMode
;   int g_ClippedVertexCount
;   SRenderVertex[16] g_ClippedVertexBuffer
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   _BIT_INTEGER32 g_RenderStateFlags
;   undefined4 g_RenderStateFlags+1
;   int g_VertexPreprocessMode
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_xform.cpp_transformAndClipGeometry_FUN_005f8550
;   engine_3d.c_rasterizeTriangle_FUN_005fcfc0
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_clipper.c_clipPolygonToViewport_FUN_00438420
;   engine_drender.cpp_renderTriangleSimple_FUN_004839f0
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048d410
        ;   Label: engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410
    PUSH ESI                            ; 0048d411
    PUSH EDI                            ; 0048d412
    PUSH EBP                            ; 0048d413
    SUB ESP,0x58                        ; 0048d414
    MOV EBX,dword ptr [ESP + 0x70]      ; 0048d417
    MOV ESI,dword ptr [ESP + 0x74]      ; 0048d41b
    MOV EBP,dword ptr [ESP + 0x78]      ; 0048d41f
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0048d423
    CMP EDI,-0x1                        ; 0048d427
    JNZ 0x0048d431                      ; 0048d42a
        ;   XREF to: 0048d431 (CONDITIONAL_JUMP)  ; LAB_0048d431
    MOV EDI,0x2cd                       ; 0048d42c
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048d431
        ;   Label: LAB_0048d431
    CMP dword ptr [EAX + 0x1c],0x0      ; 0048d435
    JZ 0x0048d45d                       ; 0048d439
        ;   XREF to: 0048d45d (CONDITIONAL_JUMP)  ; LAB_0048d45d
    MOV ECX,0x622147                    ; 0048d43b | = "..\\engine\\drender.cpp"
    MOV EAX,0xa6a                       ; 0048d440
    PUSH 0x62215d                       ; 0048d445 | = "Can't capture this type of face!"
    MOV dword ptr [0x02f0ca48],ECX      ; 0048d44a | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0048d450 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0048d455
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0048d45a
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048d45d
        ;   Label: LAB_0048d45d
    CMP dword ptr [EAX + 0x4],0x0       ; 0048d461
    JZ 0x0048d54b                       ; 0048d465
        ;   XREF to: 0048d54b (CONDITIONAL_JUMP)  ; LAB_0048d54b
    XOR EDX,EDX                         ; 0048d46b
    MOV EAX,0x49072f                    ; 0048d46d
    MOV dword ptr [0x02d052a0],EDX      ; 0048d472 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDX      ; 0048d478 | g_VertexPreprocessMode
    MOV [0x02d0257c],EAX                ; 0048d47e | g_ScanlineRenderFunc
    TEST ESI,ESI                        ; 0048d483
    JLE 0x0048d4ff                      ; 0048d485
        ;   XREF to: 0048d4ff (CONDITIONAL_JUMP)  ; LAB_0048d4ff
    LEA EAX,[EBP + EBP*0x1]             ; 0048d48b
    MOV dword ptr [ESP + 0x50],EAX      ; 0048d48f
    CMP dword ptr [0x00772a7c],0x0      ; 0048d493 | g_CullingMode
        ;   Label: LAB_0048d493
    JNZ 0x0048d507                      ; 0048d49a
        ;   XREF to: 0048d507 (CONDITIONAL_JUMP)  ; LAB_0048d507
    XOR EDX,EDX                         ; 0048d4a0
        ;   Label: LAB_0048d4a0
    TEST EBP,EBP                        ; 0048d4a2
    JLE 0x0048d4c5                      ; 0048d4a4
        ;   XREF to: 0048d4c5 (CONDITIONAL_JUMP)  ; LAB_0048d4c5
    MOV EAX,EBX                         ; 0048d4a6
    XOR ECX,ECX                         ; 0048d4a8
    CMP word ptr [EAX],-0x1             ; 0048d4aa
        ;   Label: LAB_0048d4aa
    JZ 0x0048d4c5                       ; 0048d4ae
        ;   XREF to: 0048d4c5 (CONDITIONAL_JUMP)  ; LAB_0048d4c5
    ADD EAX,0x2                         ; 0048d4b0
    XOR EDI,EDI                         ; 0048d4b3
    ADD ECX,0x4                         ; 0048d4b5
    MOV DI,word ptr [EAX + -0x2]        ; 0048d4b8
    INC EDX                             ; 0048d4bc
    MOV dword ptr [ESP + ECX*0x1 + -0x4],EDI ; 0048d4bd
    CMP EDX,EBP                         ; 0048d4c1
    JL 0x0048d4aa                       ; 0048d4c3
        ;   XREF to: 0048d4aa (CONDITIONAL_JUMP)  ; LAB_0048d4aa
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048d4c5
        ;   Label: LAB_0048d4c5
    CMP dword ptr [EAX + 0x10],0x0      ; 0048d4c9
    JZ 0x0048d53e                       ; 0048d4cd
        ;   XREF to: 0048d53e (CONDITIONAL_JUMP)  ; LAB_0048d53e
    MOV EAX,ESP                         ; 0048d4cf
    PUSH EAX                            ; 0048d4d1
    PUSH EDX                            ; 0048d4d2
    CALL core_xform.cpp_transformAndClipGeometry_FUN_005f8550 ; 0048d4d3
        ;   XREF to: 005f8550 (UNCONDITIONAL_CALL)  ; SRenderVertex * core_xform.cpp_transformAndClipGeometry_FUN_005f8550(int vertex_count, int * vertex_indices)
    MOV EDI,dword ptr [0x00824e24]      ; 0048d4d8 | g_ClippedVertexCount
    ADD ESP,0x8                         ; 0048d4de
    CMP EDI,0x2                         ; 0048d4e1
    JLE 0x0048d4f4                      ; 0048d4e4
        ;   XREF to: 0048d4f4 (CONDITIONAL_JUMP)  ; LAB_0048d4f4
    PUSH EDI                            ; 0048d4e6
    PUSH 0x824e28                       ; 0048d4e7 | g_ClippedVertexBuffer
    CALL engine_3d.c_rasterizeTriangle_FUN_005fcfc0 ; 0048d4ec
        ;   XREF to: 005fcfc0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_rasterizeTriangle_FUN_005fcfc0(SRenderVertex * vertex_buffer, int vertex_count)
    ADD ESP,0x8                         ; 0048d4f1
        ;   Label: LAB_0048d4f1
    MOV EDX,dword ptr [ESP + 0x50]      ; 0048d4f4
        ;   Label: LAB_0048d4f4
    DEC ESI                             ; 0048d4f8
    ADD EBX,EDX                         ; 0048d4f9
    TEST ESI,ESI                        ; 0048d4fb
        ;   Label: LAB_0048d4fb
    JG 0x0048d493                       ; 0048d4fd
        ;   XREF to: 0048d493 (CONDITIONAL_JUMP)  ; LAB_0048d493
    ADD ESP,0x58                        ; 0048d4ff
        ;   Label: LAB_0048d4ff
    POP EBP                             ; 0048d502
    POP EDI                             ; 0048d503
    POP ESI                             ; 0048d504
    POP EBX                             ; 0048d505
    RET                                 ; 0048d506
    XOR EDX,EDX                         ; 0048d507
        ;   Label: LAB_0048d507
    MOV DX,word ptr [EBX + 0x2]         ; 0048d509
    IMUL EDX,EDX,0x30                   ; 0048d50d
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048d510
    MOV EAX,dword ptr [EAX]             ; 0048d514
    ADD EDX,EAX                         ; 0048d516
    PUSH EDX                            ; 0048d518
    PUSH EDX                            ; 0048d519
    XOR EDX,EDX                         ; 0048d51a
    MOV DX,word ptr [EBX]               ; 0048d51c
    IMUL EDX,EDX,0x30                   ; 0048d51f
    ADD EAX,EDX                         ; 0048d522
    PUSH EAX                            ; 0048d524
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 0048d525
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0048d52a
    TEST EAX,EAX                        ; 0048d52d
    JNZ 0x0048d4a0                      ; 0048d52f
        ;   XREF to: 0048d4a0 (CONDITIONAL_JUMP)  ; LAB_0048d4a0
    MOV EAX,dword ptr [ESP + 0x50]      ; 0048d535
    DEC ESI                             ; 0048d539
    ADD EBX,EAX                         ; 0048d53a
    JMP 0x0048d4fb                      ; 0048d53c
        ;   XREF to: 0048d4fb (UNCONDITIONAL_JUMP)  ; LAB_0048d4fb
    PUSH EDX                            ; 0048d53e
        ;   Label: LAB_0048d53e
    LEA EAX,[ESP + 0x4]                 ; 0048d53f
    PUSH EAX                            ; 0048d543
    CALL engine_drender.cpp_renderTriangleSimple_FUN_004839f0 ; 0048d544
        ;   XREF to: 004839f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_renderTriangleSimple_FUN_004839f0(CVector3i * vertex_indices, int vertex_count)
    JMP 0x0048d4f1                      ; 0048d549
        ;   XREF to: 0048d4f1 (UNCONDITIONAL_JUMP)  ; LAB_0048d4f1
    CMP EDI,0xc0                        ; 0048d54b
        ;   Label: LAB_0048d54b
    JNZ 0x0048d5e9                      ; 0048d551
        ;   XREF to: 0048d5e9 (CONDITIONAL_JUMP)  ; LAB_0048d5e9
    MOV dword ptr [0x02d0257c],0x4906e9 ; 0048d557 | g_ScanlineRenderFunc
    MOV dword ptr [0x02d052a0],EDI      ; 0048d561 | g_RenderStateFlags
        ;   Label: LAB_0048d561
    MOV dword ptr [0x02d052a4],0x6      ; 0048d567 | g_VertexPreprocessMode
    TEST ESI,ESI                        ; 0048d571
    JLE 0x0048d4ff                      ; 0048d573
        ;   XREF to: 0048d4ff (CONDITIONAL_JUMP)  ; LAB_0048d4ff
    LEA EAX,[EBP + EBP*0x1]             ; 0048d575
    MOV dword ptr [ESP + 0x54],EAX      ; 0048d579
    CMP dword ptr [0x00772a7c],0x0      ; 0048d57d | g_CullingMode
        ;   Label: LAB_0048d57d
    JNZ 0x0048d610                      ; 0048d584
        ;   XREF to: 0048d610 (CONDITIONAL_JUMP)  ; LAB_0048d610
    XOR EDX,EDX                         ; 0048d58a
        ;   Label: LAB_0048d58a
    TEST EBP,EBP                        ; 0048d58c
    JLE 0x0048d5af                      ; 0048d58e
        ;   XREF to: 0048d5af (CONDITIONAL_JUMP)  ; LAB_0048d5af
    MOV EAX,EBX                         ; 0048d590
    XOR ECX,ECX                         ; 0048d592
    CMP word ptr [EAX],-0x1             ; 0048d594
        ;   Label: LAB_0048d594
    JZ 0x0048d5af                       ; 0048d598
        ;   XREF to: 0048d5af (CONDITIONAL_JUMP)  ; LAB_0048d5af
    ADD EAX,0x2                         ; 0048d59a
    XOR EDI,EDI                         ; 0048d59d
    ADD ECX,0x4                         ; 0048d59f
    MOV DI,word ptr [EAX + -0x2]        ; 0048d5a2
    INC EDX                             ; 0048d5a6
    MOV dword ptr [ESP + ECX*0x1 + -0x4],EDI ; 0048d5a7
    CMP EDX,EBP                         ; 0048d5ab
    JL 0x0048d594                       ; 0048d5ad
        ;   XREF to: 0048d594 (CONDITIONAL_JUMP)  ; LAB_0048d594
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048d5af
        ;   Label: LAB_0048d5af
    CMP dword ptr [EAX + 0x10],0x0      ; 0048d5b3
    JZ 0x0048d663                       ; 0048d5b7
        ;   XREF to: 0048d663 (CONDITIONAL_JUMP)  ; LAB_0048d663
    TEST byte ptr [0x02d052a1],0x2      ; 0048d5bd | g_RenderStateFlags+1
    JZ 0x0048d655                       ; 0048d5c4
        ;   XREF to: 0048d655 (CONDITIONAL_JUMP)  ; LAB_0048d655
    MOV EAX,ESP                         ; 0048d5ca
        ;   Label: LAB_0048d5ca
    PUSH EAX                            ; 0048d5cc
    PUSH EDX                            ; 0048d5cd
    CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420 ; 0048d5ce
        ;   XREF to: 00438420 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_00438420(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0048d5d3
        ;   Label: LAB_0048d5d3
    MOV ECX,dword ptr [ESP + 0x54]      ; 0048d5d6
        ;   Label: LAB_0048d5d6
    DEC ESI                             ; 0048d5da
    ADD EBX,ECX                         ; 0048d5db
    TEST ESI,ESI                        ; 0048d5dd
    JG 0x0048d57d                       ; 0048d5df
        ;   XREF to: 0048d57d (CONDITIONAL_JUMP)  ; LAB_0048d57d
    ADD ESP,0x58                        ; 0048d5e1
    POP EBP                             ; 0048d5e4
    POP EDI                             ; 0048d5e5
    POP ESI                             ; 0048d5e6
    POP EBX                             ; 0048d5e7
    RET                                 ; 0048d5e8
    CMP dword ptr [0x0067939c],0x20     ; 0048d5e9 | g_BitsPerPixel
        ;   Label: LAB_0048d5e9
    JNZ 0x0048d601                      ; 0048d5f0
        ;   XREF to: 0048d601 (CONDITIONAL_JUMP)  ; LAB_0048d601
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048d5f2 | g_ScanlineRenderFunc
    JMP 0x0048d561                      ; 0048d5fc
        ;   XREF to: 0048d561 (UNCONDITIONAL_JUMP)  ; LAB_0048d561
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048d601 | g_ScanlineRenderFunc
        ;   Label: LAB_0048d601
    JMP 0x0048d561                      ; 0048d60b
        ;   XREF to: 0048d561 (UNCONDITIONAL_JUMP)  ; LAB_0048d561
    XOR EAX,EAX                         ; 0048d610
        ;   Label: LAB_0048d610
    MOV AX,word ptr [EBX + 0x2]         ; 0048d612
    IMUL EDX,EAX,0x30                   ; 0048d616
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048d619
    MOV EAX,dword ptr [EAX]             ; 0048d61d
    ADD EDX,EAX                         ; 0048d61f
    PUSH EDX                            ; 0048d621
    PUSH EDX                            ; 0048d622
    XOR EDX,EDX                         ; 0048d623
    MOV DX,word ptr [EBX]               ; 0048d625
    IMUL EDX,EDX,0x30                   ; 0048d628
    ADD EAX,EDX                         ; 0048d62b
    PUSH EAX                            ; 0048d62d
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 0048d62e
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0048d633
    TEST EAX,EAX                        ; 0048d636
    JNZ 0x0048d58a                      ; 0048d638
        ;   XREF to: 0048d58a (CONDITIONAL_JUMP)  ; LAB_0048d58a
    MOV EAX,dword ptr [ESP + 0x54]      ; 0048d63e
    DEC ESI                             ; 0048d642
    ADD EBX,EAX                         ; 0048d643
    TEST ESI,ESI                        ; 0048d645
    JG 0x0048d57d                       ; 0048d647
        ;   XREF to: 0048d57d (CONDITIONAL_JUMP)  ; LAB_0048d57d
    ADD ESP,0x58                        ; 0048d64d
    POP EBP                             ; 0048d650
    POP EDI                             ; 0048d651
    POP ESI                             ; 0048d652
    POP EBX                             ; 0048d653
    RET                                 ; 0048d654
    MOV EAX,ESP                         ; 0048d655
        ;   Label: LAB_0048d655
    PUSH EAX                            ; 0048d657
    PUSH EDX                            ; 0048d658
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 0048d659
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    JMP 0x0048d5d3                      ; 0048d65e
        ;   XREF to: 0048d5d3 (UNCONDITIONAL_JUMP)  ; LAB_0048d5d3
    CMP dword ptr [EAX + 0x4],0x0       ; 0048d663
        ;   Label: LAB_0048d663
    JZ 0x0048d672                       ; 0048d667
        ;   XREF to: 0048d672 (CONDITIONAL_JUMP)  ; LAB_0048d672
    TEST byte ptr [0x02d052a0],0x1      ; 0048d669 | g_RenderStateFlags
    JZ 0x0048d689                       ; 0048d670
        ;   XREF to: 0048d689 (CONDITIONAL_JUMP)  ; LAB_0048d689
    TEST byte ptr [0x02d052a0],0x5      ; 0048d672 | g_RenderStateFlags
        ;   Label: LAB_0048d672
    JZ 0x0048d689                       ; 0048d679
        ;   XREF to: 0048d689 (CONDITIONAL_JUMP)  ; LAB_0048d689
    TEST byte ptr [0x02d052a1],0x2      ; 0048d67b | g_RenderStateFlags+1
    JZ 0x0048d655                       ; 0048d682
        ;   XREF to: 0048d655 (CONDITIONAL_JUMP)  ; LAB_0048d655
    JMP 0x0048d5ca                      ; 0048d684
        ;   XREF to: 0048d5ca (UNCONDITIONAL_JUMP)  ; LAB_0048d5ca
    MOV EAX,ESP                         ; 0048d689
        ;   Label: LAB_0048d689
    PUSH EAX                            ; 0048d68b
    PUSH EDX                            ; 0048d68c
    CALL core_xform.cpp_transformAndClipGeometry_FUN_005f8550 ; 0048d68d
        ;   XREF to: 005f8550 (UNCONDITIONAL_CALL)  ; SRenderVertex * core_xform.cpp_transformAndClipGeometry_FUN_005f8550(int vertex_count, int * vertex_indices)
    MOV EAX,[0x00824e24]                ; 0048d692 | g_ClippedVertexCount
    ADD ESP,0x8                         ; 0048d697
    CMP EAX,0x2                         ; 0048d69a
    JLE 0x0048d5d6                      ; 0048d69d
        ;   XREF to: 0048d5d6 (CONDITIONAL_JUMP)  ; LAB_0048d5d6
    PUSH EAX                            ; 0048d6a3
    PUSH 0x824e28                       ; 0048d6a4 | g_ClippedVertexBuffer
    CALL engine_3d.c_rasterizeTriangle_FUN_005fcfc0 ; 0048d6a9
        ;   XREF to: 005fcfc0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_rasterizeTriangle_FUN_005fcfc0(SRenderVertex * vertex_buffer, int vertex_count)
    JMP 0x0048d5d3                      ; 0048d6ae
        ;   XREF to: 0048d5d3 (UNCONDITIONAL_JUMP)  ; LAB_0048d5d3

