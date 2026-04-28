; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0048ad90(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; Referenced Globals:
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

    PUSH EBX                            ; 0048ad90
        ;   Label: engine_drender.cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0048ad90
    PUSH ESI                            ; 0048ad91
    PUSH EBP                            ; 0048ad92
    MOV EBX,dword ptr [ESP + 0x10]      ; 0048ad93
    MOV ESI,dword ptr [ESP + 0x14]      ; 0048ad97
    CMP dword ptr [EBX + 0xc],0x0       ; 0048ad9b
    JNZ 0x0048add5                      ; 0048ad9f
        ;   XREF to: 0048add5 (CONDITIONAL_JUMP)  ; LAB_0048add5
    CMP dword ptr [EBX + 0x4],0x0       ; 0048ada1
        ;   Label: LAB_0048ada1
    JZ 0x0048ade7                       ; 0048ada5
        ;   XREF to: 0048ade7 (CONDITIONAL_JUMP)  ; LAB_0048ade7
    XOR ECX,ECX                         ; 0048ada7
    MOV EDX,0x49072f                    ; 0048ada9
    MOV dword ptr [0x02d052a0],ECX      ; 0048adae | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],ECX      ; 0048adb4 | g_VertexPreprocessMode
    MOV dword ptr [0x02d0257c],EDX      ; 0048adba | g_ScanlineRenderFunc
    LEA EAX,[ESI + 0x18]                ; 0048adc0
        ;   Label: LAB_0048adc0
    PUSH EAX                            ; 0048adc3
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048adc4
    PUSH EBP                            ; 0048adc7
    PUSH EBX                            ; 0048adc8
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048adc9
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048adce
    POP EBP                             ; 0048add1
        ;   Label: LAB_0048add1
    POP ESI                             ; 0048add2
    POP EBX                             ; 0048add3
    RET                                 ; 0048add4
    LEA EAX,[ESI + 0x8]                 ; 0048add5
        ;   Label: LAB_0048add5
    PUSH EAX                            ; 0048add8
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048add9
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048adde
    TEST EAX,EAX                        ; 0048ade1
    JZ 0x0048add1                       ; 0048ade3
        ;   XREF to: 0048add1 (CONDITIONAL_JUMP)  ; LAB_0048add1
    JMP 0x0048ada1                      ; 0048ade5
        ;   XREF to: 0048ada1 (UNCONDITIONAL_JUMP)  ; LAB_0048ada1
    PUSH EDI                            ; 0048ade7
        ;   Label: LAB_0048ade7
    MOV EBP,0x1                         ; 0048ade8
    MOV EAX,0x6                         ; 0048aded
    MOV EDI,0x4940e9                    ; 0048adf2
    MOV dword ptr [0x02d052a0],EBP      ; 0048adf7 | g_RenderStateFlags
    MOV [0x02d052a4],EAX                ; 0048adfd | g_VertexPreprocessMode
    MOV dword ptr [0x02d0257c],EDI      ; 0048ae02 | g_ScanlineRenderFunc
    POP EDI                             ; 0048ae08
    JMP 0x0048adc0                      ; 0048ae09
        ;   XREF to: 0048adc0 (UNCONDITIONAL_JUMP)  ; LAB_0048adc0

