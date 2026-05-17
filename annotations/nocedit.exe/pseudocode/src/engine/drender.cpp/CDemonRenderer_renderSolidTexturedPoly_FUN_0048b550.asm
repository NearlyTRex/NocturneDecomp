; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0048b550(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
;
; XREF[1]:
;   core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0 at 004e9e31
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int[16] g_VertexIndexBuffer
;   undefined4 g_VertexIndexBuffer[1]
;   MainScanlineFunc* g_ScanlineRenderFunc
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b550
        ;   Label: engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0048b550
    PUSH EBP                            ; 0048b551
    SUB ESP,0x4                         ; 0048b552
    MOV EBX,dword ptr [ESP + 0x10]      ; 0048b555
    CMP dword ptr [EBX + 0xc],0x0       ; 0048b559
    JNZ 0x0048b5fa                      ; 0048b55d
        ;   XREF to: 0048b5fa (CONDITIONAL_JUMP)  ; LAB_0048b5fa
    PUSH EDI                            ; 0048b563
        ;   Label: LAB_0048b563
    PUSH ESI                            ; 0048b564
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048b565
    MOV ESI,dword ptr [EAX + 0x4]       ; 0048b569
    XOR ECX,ECX                         ; 0048b56c
    TEST ESI,ESI                        ; 0048b56e
    JLE 0x0048b5b9                      ; 0048b570
        ;   XREF to: 0048b5b9 (CONDITIONAL_JUMP)  ; LAB_0048b5b9
    XOR EDX,EDX                         ; 0048b572
    MOV EDI,dword ptr [EBX + 0x20]      ; 0048b574
        ;   Label: LAB_0048b574
    MOV ESI,dword ptr [EAX + 0x18]      ; 0048b577
    TEST EDI,EDI                        ; 0048b57a
    JNZ 0x0048b5a1                      ; 0048b57c
        ;   XREF to: 0048b5a1 (CONDITIONAL_JUMP)  ; LAB_0048b5a1
    IMUL EDI,ESI,0x30                   ; 0048b57e
    MOV dword ptr [ESP + 0x8],EDI       ; 0048b581
    MOV EBP,dword ptr [ESP + 0x8]       ; 0048b585
    MOV EDI,dword ptr [EBX]             ; 0048b589
    ADD EDI,EBP                         ; 0048b58b
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0048b58d
    MOV dword ptr [EDI + 0x18],EBP      ; 0048b590
    MOV EBP,dword ptr [ESP + 0x8]       ; 0048b593
    MOV EDI,dword ptr [EBX]             ; 0048b597
    ADD EBP,EDI                         ; 0048b599
    MOV EDI,dword ptr [EAX + 0x20]      ; 0048b59b
    MOV dword ptr [EBP + 0x1c],EDI      ; 0048b59e
    MOV dword ptr [EDX + 0x2c6d5ac],ESI ; 0048b5a1 | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
        ;   Label: LAB_0048b5a1
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048b5a7
    ADD EAX,0xc                         ; 0048b5ab
    INC ECX                             ; 0048b5ae
    MOV EDI,dword ptr [ESI + 0x4]       ; 0048b5af
    ADD EDX,0x4                         ; 0048b5b2
    CMP ECX,EDI                         ; 0048b5b5
    JL 0x0048b574                       ; 0048b5b7
        ;   XREF to: 0048b574 (CONDITIONAL_JUMP)  ; LAB_0048b574
    CMP dword ptr [EBX + 0x4],0x0       ; 0048b5b9
        ;   Label: LAB_0048b5b9
    JZ 0x0048b613                       ; 0048b5bd
        ;   XREF to: 0048b613 (CONDITIONAL_JUMP)  ; LAB_0048b613
    MOV EAX,0x1                         ; 0048b5bf
    MOV EBP,0x4907e7                    ; 0048b5c4
    XOR EDX,EDX                         ; 0048b5c9
    MOV [0x02d052a0],EAX                ; 0048b5cb | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDX      ; 0048b5d0 | g_VertexPreprocessMode
    MOV dword ptr [0x02d0257c],EBP      ; 0048b5d6 | g_ScanlineRenderFunc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048b5dc
        ;   Label: LAB_0048b5dc
    PUSH 0x2c6d5ac                      ; 0048b5e0 | g_VertexIndexBuffer
    MOV ECX,dword ptr [EAX + 0x4]       ; 0048b5e5
    PUSH ECX                            ; 0048b5e8
    PUSH EBX                            ; 0048b5e9
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048b5ea
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048b5ef
    POP ESI                             ; 0048b5f2
    POP EDI                             ; 0048b5f3
    ADD ESP,0x4                         ; 0048b5f4
        ;   Label: LAB_0048b5f4
    POP EBP                             ; 0048b5f7
    POP EBX                             ; 0048b5f8
    RET                                 ; 0048b5f9
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048b5fa
        ;   Label: LAB_0048b5fa
    ADD EAX,0x8                         ; 0048b5fe
    PUSH EAX                            ; 0048b601
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048b602
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048b607
    TEST EAX,EAX                        ; 0048b60a
    JZ 0x0048b5f4                       ; 0048b60c
        ;   XREF to: 0048b5f4 (CONDITIONAL_JUMP)  ; LAB_0048b5f4
    JMP 0x0048b563                      ; 0048b60e
        ;   XREF to: 0048b563 (UNCONDITIONAL_JUMP)  ; LAB_0048b563
    CMP dword ptr [0x0067939c],0x20     ; 0048b613 | g_BitsPerPixel
        ;   Label: LAB_0048b613
    JNZ 0x0048b63e                      ; 0048b61a
        ;   XREF to: 0048b63e (CONDITIONAL_JUMP)  ; LAB_0048b63e
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048b61c | g_ScanlineRenderFunc
    MOV EDI,0x6                         ; 0048b626
        ;   Label: LAB_0048b626
    MOV ESI,0xc3                        ; 0048b62b
    MOV dword ptr [0x02d052a4],EDI      ; 0048b630 | g_VertexPreprocessMode
    MOV dword ptr [0x02d052a0],ESI      ; 0048b636 | g_RenderStateFlags
    JMP 0x0048b5dc                      ; 0048b63c
        ;   XREF to: 0048b5dc (UNCONDITIONAL_JUMP)  ; LAB_0048b5dc
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048b63e | g_ScanlineRenderFunc
        ;   Label: LAB_0048b63e
    JMP 0x0048b626                      ; 0048b648
        ;   XREF to: 0048b626 (UNCONDITIONAL_JUMP)  ; LAB_0048b626

