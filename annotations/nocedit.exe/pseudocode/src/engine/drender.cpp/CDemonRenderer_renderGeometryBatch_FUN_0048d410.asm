; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410(CDemonRenderer * this_ptr, int * vertex_indices, int face_count, int vertices_per_face, int render_mode)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   vertex_indices
; int              Stack[0xc]:4   face_count
; int              Stack[0x10]:4   vertices_per_face
; int              Stack[0x14]:4   render_mode
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_00622147
;   TerminatedCString s_Can_t_capture_this_type__0062215d
;   int g_BitsPerPixel = 0x8
;   int g_CullingMode
;   int g_ClippedVertexCount
;   SRenderVertex[16] g_ClippedVertexBuffer
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   int g_RenderStateFlags
;   undefined4 DAT_02d052a1
;   int g_RenderStateFlag2
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
    JNZ 0x0048d431                      ; 0048d42a | LAB_0048d431
        ;   XREF to: 0048d431 (CONDITIONAL_JUMP)
    MOV EDI,0x2cd                       ; 0048d42c
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048d431
        ;   Label: LAB_0048d431
    CMP dword ptr [EAX + 0x1c],0x0      ; 0048d435
    JZ 0x0048d45d                       ; 0048d439 | LAB_0048d45d
        ;   XREF to: 0048d45d (CONDITIONAL_JUMP)
    MOV ECX,0x622147                    ; 0048d43b | = "..\\engine\\drender.cpp" | s_engine_drender_cpp_00622147 = ..\engine\drender.cpp
    MOV EAX,0xa6a                       ; 0048d440
    PUSH 0x62215d                       ; 0048d445 | = "Can't capture this type of face!" | s_Can_t_capture_this_type__0062215d = Can't capture this type of face!
    MOV dword ptr [0x02f0ca48],ECX      ; 0048d44a | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0048d450 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0048d455 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0048d45a
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048d45d
        ;   Label: LAB_0048d45d
    CMP dword ptr [EAX + 0x4],0x0       ; 0048d461
    JZ 0x0048d54b                       ; 0048d465 | LAB_0048d54b
        ;   XREF to: 0048d54b (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 0048d46b
    MOV EAX,0x49072f                    ; 0048d46d
    MOV dword ptr [0x02d052a0],EDX      ; 0048d472 | int g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDX      ; 0048d478 | int g_RenderStateFlag2
    MOV [0x02d0257c],EAX                ; 0048d47e | RenderScanlineFunc * g_ScanlineRenderFunc
    TEST ESI,ESI                        ; 0048d483
    JLE 0x0048d4ff                      ; 0048d485 | LAB_0048d4ff
        ;   XREF to: 0048d4ff (CONDITIONAL_JUMP)
    LEA EAX,[EBP + EBP*0x1]             ; 0048d48b
    MOV dword ptr [ESP + 0x50],EAX      ; 0048d48f
    CMP dword ptr [0x00772a7c],0x0      ; 0048d493 | int g_CullingMode
        ;   Label: LAB_0048d493
    JNZ 0x0048d507                      ; 0048d49a | LAB_0048d507
        ;   XREF to: 0048d507 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 0048d4a0
        ;   Label: LAB_0048d4a0
    TEST EBP,EBP                        ; 0048d4a2
    JLE 0x0048d4c5                      ; 0048d4a4 | LAB_0048d4c5
        ;   XREF to: 0048d4c5 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 0048d4a6
    XOR ECX,ECX                         ; 0048d4a8
    CMP word ptr [EAX],-0x1             ; 0048d4aa
        ;   Label: LAB_0048d4aa
    JZ 0x0048d4c5                       ; 0048d4ae | LAB_0048d4c5
        ;   XREF to: 0048d4c5 (CONDITIONAL_JUMP)
    ADD EAX,0x2                         ; 0048d4b0
    XOR EDI,EDI                         ; 0048d4b3
    ADD ECX,0x4                         ; 0048d4b5
    MOV DI,word ptr [EAX + -0x2]        ; 0048d4b8
    INC EDX                             ; 0048d4bc
    MOV dword ptr [ESP + ECX*0x1 + -0x4],EDI ; 0048d4bd
    CMP EDX,EBP                         ; 0048d4c1
    JL 0x0048d4aa                       ; 0048d4c3 | LAB_0048d4aa
        ;   XREF to: 0048d4aa (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048d4c5
        ;   Label: LAB_0048d4c5
    CMP dword ptr [EAX + 0x10],0x0      ; 0048d4c9
    JZ 0x0048d53e                       ; 0048d4cd | LAB_0048d53e
        ;   XREF to: 0048d53e (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 0048d4cf
    PUSH EAX                            ; 0048d4d1
    PUSH EDX                            ; 0048d4d2
    CALL core_xform.cpp_transformAndClipGeometry_FUN_005f8550 ; 0048d4d3 | SRenderVertex * core_xform.cpp_transformAndClipGeometry_FUN_005f8550(int vertex_count, int * vertex_indices)
        ;   XREF to: 005f8550 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [0x00824e24]      ; 0048d4d8 | int g_ClippedVertexCount
    ADD ESP,0x8                         ; 0048d4de
    CMP EDI,0x2                         ; 0048d4e1
    JLE 0x0048d4f4                      ; 0048d4e4 | LAB_0048d4f4
        ;   XREF to: 0048d4f4 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0048d4e6
    PUSH 0x824e28                       ; 0048d4e7 | SRenderVertex[16] g_ClippedVertexBuffer
    CALL engine_3d.c_rasterizeTriangle_FUN_005fcfc0 ; 0048d4ec | void engine_3d.c_rasterizeTriangle_FUN_005fcfc0(SRenderVertex * vertex_buffer, int vertex_count, int triangle_count)
        ;   XREF to: 005fcfc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0048d4f1
        ;   Label: LAB_0048d4f1
    MOV EDX,dword ptr [ESP + 0x50]      ; 0048d4f4
        ;   Label: LAB_0048d4f4
    DEC ESI                             ; 0048d4f8
    ADD EBX,EDX                         ; 0048d4f9
    TEST ESI,ESI                        ; 0048d4fb
        ;   Label: LAB_0048d4fb
    JG 0x0048d493                       ; 0048d4fd | LAB_0048d493
        ;   XREF to: 0048d493 (CONDITIONAL_JUMP)
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
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 0048d525 | int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0048d52a
    TEST EAX,EAX                        ; 0048d52d
    JNZ 0x0048d4a0                      ; 0048d52f | LAB_0048d4a0
        ;   XREF to: 0048d4a0 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x50]      ; 0048d535
    DEC ESI                             ; 0048d539
    ADD EBX,EAX                         ; 0048d53a
    JMP 0x0048d4fb                      ; 0048d53c | LAB_0048d4fb
        ;   XREF to: 0048d4fb (UNCONDITIONAL_JUMP)
    PUSH EDX                            ; 0048d53e
        ;   Label: LAB_0048d53e
    LEA EAX,[ESP + 0x4]                 ; 0048d53f
    PUSH EAX                            ; 0048d543
    CALL engine_drender.cpp_renderTriangleSimple_FUN_004839f0 ; 0048d544 | void engine_drender.cpp_renderTriangleSimple_FUN_004839f0(int * vertex_indices, int vertex_count)
        ;   XREF to: 004839f0 (UNCONDITIONAL_CALL)
    JMP 0x0048d4f1                      ; 0048d549 | LAB_0048d4f1
        ;   XREF to: 0048d4f1 (UNCONDITIONAL_JUMP)
    CMP EDI,0xc0                        ; 0048d54b
        ;   Label: LAB_0048d54b
    JNZ 0x0048d5e9                      ; 0048d551 | LAB_0048d5e9
        ;   XREF to: 0048d5e9 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x4906e9 ; 0048d557 | RenderScanlineFunc * g_ScanlineRenderFunc
    MOV dword ptr [0x02d052a0],EDI      ; 0048d561 | int g_RenderStateFlags
        ;   Label: LAB_0048d561
    MOV dword ptr [0x02d052a4],0x6      ; 0048d567 | int g_RenderStateFlag2
    TEST ESI,ESI                        ; 0048d571
    JLE 0x0048d4ff                      ; 0048d573 | LAB_0048d4ff
        ;   XREF to: 0048d4ff (CONDITIONAL_JUMP)
    LEA EAX,[EBP + EBP*0x1]             ; 0048d575
    MOV dword ptr [ESP + 0x54],EAX      ; 0048d579
    CMP dword ptr [0x00772a7c],0x0      ; 0048d57d | int g_CullingMode
        ;   Label: LAB_0048d57d
    JNZ 0x0048d610                      ; 0048d584 | LAB_0048d610
        ;   XREF to: 0048d610 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 0048d58a
        ;   Label: LAB_0048d58a
    TEST EBP,EBP                        ; 0048d58c
    JLE 0x0048d5af                      ; 0048d58e | LAB_0048d5af
        ;   XREF to: 0048d5af (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 0048d590
    XOR ECX,ECX                         ; 0048d592
    CMP word ptr [EAX],-0x1             ; 0048d594
        ;   Label: LAB_0048d594
    JZ 0x0048d5af                       ; 0048d598 | LAB_0048d5af
        ;   XREF to: 0048d5af (CONDITIONAL_JUMP)
    ADD EAX,0x2                         ; 0048d59a
    XOR EDI,EDI                         ; 0048d59d
    ADD ECX,0x4                         ; 0048d59f
    MOV DI,word ptr [EAX + -0x2]        ; 0048d5a2
    INC EDX                             ; 0048d5a6
    MOV dword ptr [ESP + ECX*0x1 + -0x4],EDI ; 0048d5a7
    CMP EDX,EBP                         ; 0048d5ab
    JL 0x0048d594                       ; 0048d5ad | LAB_0048d594
        ;   XREF to: 0048d594 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048d5af
        ;   Label: LAB_0048d5af
    CMP dword ptr [EAX + 0x10],0x0      ; 0048d5b3
    JZ 0x0048d663                       ; 0048d5b7 | LAB_0048d663
        ;   XREF to: 0048d663 (CONDITIONAL_JUMP)
    TEST byte ptr [0x02d052a1],0x2      ; 0048d5bd | DAT_02d052a1
    JZ 0x0048d655                       ; 0048d5c4 | LAB_0048d655
        ;   XREF to: 0048d655 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 0048d5ca
        ;   Label: LAB_0048d5ca
    PUSH EAX                            ; 0048d5cc
    PUSH EDX                            ; 0048d5cd
    CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420 ; 0048d5ce | void engine_clipper.c_clipPolygonToViewport_FUN_00438420(int vertex_count, int * vertex_indices)
        ;   XREF to: 00438420 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0048d5d3
        ;   Label: LAB_0048d5d3
    MOV ECX,dword ptr [ESP + 0x54]      ; 0048d5d6
        ;   Label: LAB_0048d5d6
    DEC ESI                             ; 0048d5da
    ADD EBX,ECX                         ; 0048d5db
    TEST ESI,ESI                        ; 0048d5dd
    JG 0x0048d57d                       ; 0048d5df | LAB_0048d57d
        ;   XREF to: 0048d57d (CONDITIONAL_JUMP)
    ADD ESP,0x58                        ; 0048d5e1
    POP EBP                             ; 0048d5e4
    POP EDI                             ; 0048d5e5
    POP ESI                             ; 0048d5e6
    POP EBX                             ; 0048d5e7
    RET                                 ; 0048d5e8
    CMP dword ptr [0x0067939c],0x20     ; 0048d5e9 | int g_BitsPerPixel
        ;   Label: LAB_0048d5e9
    JNZ 0x0048d601                      ; 0048d5f0 | LAB_0048d601
        ;   XREF to: 0048d601 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048d5f2 | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x0048d561                      ; 0048d5fc | LAB_0048d561
        ;   XREF to: 0048d561 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048d601 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_0048d601
    JMP 0x0048d561                      ; 0048d60b | LAB_0048d561
        ;   XREF to: 0048d561 (UNCONDITIONAL_JUMP)
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
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 0048d62e | int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0048d633
    TEST EAX,EAX                        ; 0048d636
    JNZ 0x0048d58a                      ; 0048d638 | LAB_0048d58a
        ;   XREF to: 0048d58a (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x54]      ; 0048d63e
    DEC ESI                             ; 0048d642
    ADD EBX,EAX                         ; 0048d643
    TEST ESI,ESI                        ; 0048d645
    JG 0x0048d57d                       ; 0048d647 | LAB_0048d57d
        ;   XREF to: 0048d57d (CONDITIONAL_JUMP)
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
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 0048d659 | void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)
    JMP 0x0048d5d3                      ; 0048d65e | LAB_0048d5d3
        ;   XREF to: 0048d5d3 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x4],0x0       ; 0048d663
        ;   Label: LAB_0048d663
    JZ 0x0048d672                       ; 0048d667 | LAB_0048d672
        ;   XREF to: 0048d672 (CONDITIONAL_JUMP)
    TEST byte ptr [0x02d052a0],0x1      ; 0048d669 | int g_RenderStateFlags
    JZ 0x0048d689                       ; 0048d670 | LAB_0048d689
        ;   XREF to: 0048d689 (CONDITIONAL_JUMP)
    TEST byte ptr [0x02d052a0],0x5      ; 0048d672 | int g_RenderStateFlags
        ;   Label: LAB_0048d672
    JZ 0x0048d689                       ; 0048d679 | LAB_0048d689
        ;   XREF to: 0048d689 (CONDITIONAL_JUMP)
    TEST byte ptr [0x02d052a1],0x2      ; 0048d67b | DAT_02d052a1
    JZ 0x0048d655                       ; 0048d682 | LAB_0048d655
        ;   XREF to: 0048d655 (CONDITIONAL_JUMP)
    JMP 0x0048d5ca                      ; 0048d684 | LAB_0048d5ca
        ;   XREF to: 0048d5ca (UNCONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 0048d689
        ;   Label: LAB_0048d689
    PUSH EAX                            ; 0048d68b
    PUSH EDX                            ; 0048d68c
    CALL core_xform.cpp_transformAndClipGeometry_FUN_005f8550 ; 0048d68d | SRenderVertex * core_xform.cpp_transformAndClipGeometry_FUN_005f8550(int vertex_count, int * vertex_indices)
        ;   XREF to: 005f8550 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00824e24]                ; 0048d692 | int g_ClippedVertexCount
    ADD ESP,0x8                         ; 0048d697
    CMP EAX,0x2                         ; 0048d69a
    JLE 0x0048d5d6                      ; 0048d69d | LAB_0048d5d6
        ;   XREF to: 0048d5d6 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0048d6a3
    PUSH 0x824e28                       ; 0048d6a4 | SRenderVertex[16] g_ClippedVertexBuffer
    CALL engine_3d.c_rasterizeTriangle_FUN_005fcfc0 ; 0048d6a9 | void engine_3d.c_rasterizeTriangle_FUN_005fcfc0(SRenderVertex * vertex_buffer, int vertex_count, int triangle_count)
        ;   XREF to: 005fcfc0 (UNCONDITIONAL_CALL)
    JMP 0x0048d5d3                      ; 0048d6ae | LAB_0048d5d3
        ;   XREF to: 0048d5d3 (UNCONDITIONAL_JUMP)

