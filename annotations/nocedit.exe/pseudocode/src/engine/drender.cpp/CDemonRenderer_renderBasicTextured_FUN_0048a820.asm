; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[3]:
;   core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00522560 at 00522589
;   core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_005225e0 at 0052265c
;   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005708e0 at 00570946
;
; Referenced Globals:
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048a820
        ;   Label: engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820
    PUSH ESI                            ; 0048a821
    PUSH EBP                            ; 0048a822
    MOV EBX,dword ptr [ESP + 0x10]      ; 0048a823
    MOV ESI,dword ptr [ESP + 0x14]      ; 0048a827
    CMP dword ptr [EBX + 0xc],0x0       ; 0048a82b
    JNZ 0x0048a865                      ; 0048a82f
        ;   XREF to: 0048a865 (CONDITIONAL_JUMP)  ; LAB_0048a865
    CMP dword ptr [EBX + 0x4],0x0       ; 0048a831
        ;   Label: LAB_0048a831
    JZ 0x0048a877                       ; 0048a835
        ;   XREF to: 0048a877 (CONDITIONAL_JUMP)  ; LAB_0048a877
    XOR ECX,ECX                         ; 0048a837
    MOV EDX,0x49072f                    ; 0048a839
    MOV dword ptr [0x02d052a0],ECX      ; 0048a83e | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],ECX      ; 0048a844 | g_VertexPreprocessMode
    MOV dword ptr [0x02d0257c],EDX      ; 0048a84a | g_ScanlineRenderFunc
    LEA EAX,[ESI + 0x18]                ; 0048a850
        ;   Label: LAB_0048a850
    PUSH EAX                            ; 0048a853
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048a854
    PUSH EBP                            ; 0048a857
    PUSH EBX                            ; 0048a858
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048a859
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048a85e
    POP EBP                             ; 0048a861
        ;   Label: LAB_0048a861
    POP ESI                             ; 0048a862
    POP EBX                             ; 0048a863
    RET                                 ; 0048a864
    LEA EAX,[ESI + 0x8]                 ; 0048a865
        ;   Label: LAB_0048a865
    PUSH EAX                            ; 0048a868
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048a869
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048a86e
    TEST EAX,EAX                        ; 0048a871
    JZ 0x0048a861                       ; 0048a873
        ;   XREF to: 0048a861 (CONDITIONAL_JUMP)  ; LAB_0048a861
    JMP 0x0048a831                      ; 0048a875
        ;   XREF to: 0048a831 (UNCONDITIONAL_JUMP)  ; LAB_0048a831
    PUSH EDI                            ; 0048a877
        ;   Label: LAB_0048a877
    MOV EBP,0xc0                        ; 0048a878
    MOV EAX,0x6                         ; 0048a87d
    MOV EDI,0x490a58                    ; 0048a882
    MOV dword ptr [0x02d052a0],EBP      ; 0048a887 | g_RenderStateFlags
    MOV [0x02d052a4],EAX                ; 0048a88d | g_VertexPreprocessMode
    MOV dword ptr [0x02d0257c],EDI      ; 0048a892 | g_ScanlineRenderFunc
    POP EDI                             ; 0048a898
    JMP 0x0048a850                      ; 0048a899
        ;   XREF to: 0048a850 (UNCONDITIONAL_JUMP)  ; LAB_0048a850

