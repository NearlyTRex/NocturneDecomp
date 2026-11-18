; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[5]:
;   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 at 00475e0d
;   core_mirror.cpp_CMirror_renderMirrorQuad_FUN_004f5480 at 004f55e6
;   core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_004f53b0 at 004f53d9
;   core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250 at 0053b277
;   core_water.cpp_CWater_calculateVisibleTiles_FUN_00577290 at 005776f4
;
; Referenced Globals:
;   int g_RenderPixelBudget = 0x1
;   int g_RenderPixelCounter
;   void* g_ScanlineRenderFunc
;   int g_INT_01c6cee8
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;   int g_RenderedTriangleCount
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
;   engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b580
        ;   Label: engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
    PUSH ESI                            ; 0046b581
    PUSH EDI                            ; 0046b582
    PUSH EBP                            ; 0046b583
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046b584
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046b588
    MOV EDI,dword ptr [0x01ed3198]      ; 0046b58c | g_RenderedTriangleCount
    XOR EDX,EDX                         ; 0046b592
    MOV ECX,dword ptr [EBX + 0xc]       ; 0046b594
    MOV dword ptr [0x01bdd810],EDX      ; 0046b597 | g_RenderPixelCounter
    TEST ECX,ECX                        ; 0046b59d
    JNZ 0x0046b623                      ; 0046b59f
        ;   XREF to: 0046b623 (CONDITIONAL_JUMP)  ; LAB_0046b623
    CMP dword ptr [EBX + 0x4],0x0       ; 0046b5a5
        ;   Label: LAB_0046b5a5
    JZ 0x0046b63c                       ; 0046b5a9
        ;   XREF to: 0046b63c (CONDITIONAL_JUMP)  ; LAB_0046b63c
    XOR EAX,EAX                         ; 0046b5af
    MOV EBP,0x46ff25                    ; 0046b5b1
    MOV [0x01c6e2b4],EAX                ; 0046b5b6 | g_RenderStateFlags
    MOV [0x01c6e2b8],EAX                ; 0046b5bb | g_VertexPreprocessMode
    MOV dword ptr [0x01c6b5cc],EBP      ; 0046b5c0 | g_ScanlineRenderFunc
    MOV ECX,dword ptr [0x01c6cee8]      ; 0046b5c6 | g_INT_01c6cee8
        ;   Label: LAB_0046b5c6
    MOV EBP,dword ptr [EBX + 0x4]       ; 0046b5cc
    TEST ECX,ECX                        ; 0046b5cf
    JZ 0x0046b5de                       ; 0046b5d1
        ;   XREF to: 0046b5de (CONDITIONAL_JUMP)  ; LAB_0046b5de
    PUSH 0x1                            ; 0046b5d3
    PUSH EBX                            ; 0046b5d5
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520 ; 0046b5d6
        ;   XREF to: 0046d520 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 0046b5db
    LEA EAX,[ESI + 0x18]                ; 0046b5de
        ;   Label: LAB_0046b5de
    PUSH EAX                            ; 0046b5e1
    MOV EAX,dword ptr [ESI + 0x4]       ; 0046b5e2
    PUSH EAX                            ; 0046b5e5
    PUSH EBX                            ; 0046b5e6
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046b5e7
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    MOV EDX,dword ptr [0x01c6cee8]      ; 0046b5ec | g_INT_01c6cee8
    ADD ESP,0xc                         ; 0046b5f2
    TEST EDX,EDX                        ; 0046b5f5
    JZ 0x0046b603                       ; 0046b5f7
        ;   XREF to: 0046b603 (CONDITIONAL_JUMP)  ; LAB_0046b603
    PUSH EBP                            ; 0046b5f9
    PUSH EBX                            ; 0046b5fa
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520 ; 0046b5fb
        ;   XREF to: 0046d520 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 0046b600
    MOV EAX,[0x01bdd810]                ; 0046b603 | g_RenderPixelCounter
        ;   Label: LAB_0046b603
    MOV ECX,dword ptr [0x005f2b00]      ; 0046b608 | g_RenderPixelBudget
    MOV dword ptr [0x01ed3198],EDI      ; 0046b60e | g_RenderedTriangleCount
    CMP EAX,ECX                         ; 0046b614
    SETGE AL                            ; 0046b616
    AND EAX,0xff                        ; 0046b619
    POP EBP                             ; 0046b61e
    POP EDI                             ; 0046b61f
    POP ESI                             ; 0046b620
    POP EBX                             ; 0046b621
    RET                                 ; 0046b622
    LEA EAX,[ESI + 0x8]                 ; 0046b623
        ;   Label: LAB_0046b623
    PUSH EAX                            ; 0046b626
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046b627
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046b62c
    TEST EAX,EAX                        ; 0046b62f
    JNZ 0x0046b5a5                      ; 0046b631
        ;   XREF to: 0046b5a5 (CONDITIONAL_JUMP)  ; LAB_0046b5a5
    POP EBP                             ; 0046b637
    POP EDI                             ; 0046b638
    POP ESI                             ; 0046b639
    POP EBX                             ; 0046b63a
    RET                                 ; 0046b63b
    MOV EDX,0xc0                        ; 0046b63c
        ;   Label: LAB_0046b63c
    MOV ECX,0x6                         ; 0046b641
    MOV EAX,0x46fea7                    ; 0046b646
    MOV dword ptr [0x01c6e2b4],EDX      ; 0046b64b | g_RenderStateFlags
    MOV dword ptr [0x01c6e2b8],ECX      ; 0046b651 | g_VertexPreprocessMode
    MOV [0x01c6b5cc],EAX                ; 0046b657 | g_ScanlineRenderFunc
    JMP 0x0046b5c6                      ; 0046b65c
        ;   XREF to: 0046b5c6 (UNCONDITIONAL_JUMP)  ; LAB_0046b5c6

