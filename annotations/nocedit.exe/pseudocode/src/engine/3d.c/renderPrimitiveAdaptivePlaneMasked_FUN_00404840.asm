; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   int g_CurrentPolygonColor
;   undefined4 DAT_00772a70
;   int g_TexturesDisabled
;   int[24] g_ProcessedVertexIndices
;   undefined4 DAT_00772a9c
;   int g_ActiveRenderColor
;   int g_CurrentLightingValue
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a00
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_3d.c_makeGrayscaleColor_FUN_004039c0
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_light.cpp_calculateLighting_FUN_00505780
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00404840
        ;   Label: engine_3d.c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840
    PUSH EBP                            ; 00404841
    MOV EBP,dword ptr [ESP + 0xc]       ; 00404842
    LEA ESI,[EBP + 0x18]                ; 00404846
    LEA EAX,[EBP + 0x8]                 ; 00404849
    PUSH EAX                            ; 0040484c
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0040484d
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00404852
    TEST EAX,EAX                        ; 00404855
    JZ 0x00404a1f                       ; 00404857
        ;   XREF to: 00404a1f (CONDITIONAL_JUMP)  ; LAB_00404a1f
    PUSH EDI                            ; 0040485d
    PUSH EBX                            ; 0040485e
    CMP dword ptr [0x00772a74],0x0      ; 0040485f | g_TexturesDisabled
    JZ 0x00404905                       ; 00404866
        ;   XREF to: 00404905 (CONDITIONAL_JUMP)  ; LAB_00404905
    CMP dword ptr [0x02d05248],0x0      ; 0040486c | g_MMXSupported
    JNZ 0x004048e4                      ; 00404873
        ;   XREF to: 004048e4 (CONDITIONAL_JUMP)  ; LAB_004048e4
    CMP dword ptr [0x0067939c],0x20     ; 00404875 | g_BitsPerPixel
    JNZ 0x004048d8                      ; 0040487c
        ;   XREF to: 004048d8 (CONDITIONAL_JUMP)  ; LAB_004048d8
    MOV dword ptr [0x02d0257c],0x5b50ec ; 0040487e | g_ScanlineRenderFunc
    XOR EBX,EBX                         ; 00404888
        ;   Label: LAB_00404888
    MOV dword ptr [0x02d052a4],EBX      ; 0040488a | g_RenderStateFlag2
    MOV dword ptr [0x02d052a0],EBX      ; 00404890 | g_RenderStateFlags
    MOV EAX,ESI                         ; 00404896
        ;   Label: LAB_00404896
    XOR EDX,EDX                         ; 00404898
    XOR ECX,ECX                         ; 0040489a
    XOR EBX,EBX                         ; 0040489c
    MOV ESI,dword ptr [EBP + 0x4]       ; 0040489e
        ;   Label: LAB_0040489e
    LEA ESI,[ESI + ESI*0x2]             ; 004048a1
    CMP EDX,ESI                         ; 004048a4
    JGE 0x00404a0f                      ; 004048a6
        ;   XREF to: 00404a0f (CONDITIONAL_JUMP)  ; LAB_00404a0f
    MOV ESI,dword ptr [EAX]             ; 004048ac
    MOV dword ptr [ECX + 0x772a98],ESI  ; 004048ae | g_ProcessedVertexIndices | DAT_00772a9c
    IMUL EDI,ESI,0x30                   ; 004048b4
    MOV ESI,dword ptr [EAX + 0x4]       ; 004048b7
    MOV dword ptr [EDI + 0x68802c],ESI  ; 004048ba | g_RenderVertexBuffer[0].u
    IMUL EDI,dword ptr [EAX],0x30       ; 004048c0
    ADD EAX,0xc                         ; 004048c3
    ADD ECX,0x4                         ; 004048c6
    INC EBX                             ; 004048c9
    MOV ESI,dword ptr [EAX + -0x4]      ; 004048ca
    ADD EDX,0x3                         ; 004048cd
    MOV dword ptr [EDI + 0x688030],ESI  ; 004048d0 | g_RenderVertexBuffer[0].v
    JMP 0x0040489e                      ; 004048d6
        ;   XREF to: 0040489e (UNCONDITIONAL_JUMP)  ; LAB_0040489e
    MOV dword ptr [0x02d0257c],0x5b5322 ; 004048d8 | g_ScanlineRenderFunc
        ;   Label: LAB_004048d8
    JMP 0x00404888                      ; 004048e2
        ;   XREF to: 00404888 (UNCONDITIONAL_JUMP)  ; LAB_00404888
    CMP dword ptr [0x0067939c],0x20     ; 004048e4 | g_BitsPerPixel
        ;   Label: LAB_004048e4
    JNZ 0x004048f9                      ; 004048eb
        ;   XREF to: 004048f9 (CONDITIONAL_JUMP)  ; LAB_004048f9
    MOV dword ptr [0x02d0257c],0x5b4031 ; 004048ed | g_ScanlineRenderFunc
    JMP 0x00404888                      ; 004048f7
        ;   XREF to: 00404888 (UNCONDITIONAL_JUMP)  ; LAB_00404888
    MOV dword ptr [0x02d0257c],0x5b4823 ; 004048f9 | g_ScanlineRenderFunc
        ;   Label: LAB_004048f9
    JMP 0x00404888                      ; 00404903
        ;   XREF to: 00404888 (UNCONDITIONAL_JUMP)  ; LAB_00404888
    CMP dword ptr [0x00772a70],0x0      ; 00404905 | DAT_00772a70
        ;   Label: LAB_00404905
    JNZ 0x0040497e                      ; 0040490c
        ;   XREF to: 0040497e (CONDITIONAL_JUMP)  ; LAB_0040497e
    CMP dword ptr [0x02d05248],0x0      ; 00404912 | g_MMXSupported
    JNZ 0x0040495d                      ; 00404919
        ;   XREF to: 0040495d (CONDITIONAL_JUMP)  ; LAB_0040495d
    CMP dword ptr [0x0067939c],0x20     ; 0040491b | g_BitsPerPixel
    JNZ 0x00404951                      ; 00404922
        ;   XREF to: 00404951 (CONDITIONAL_JUMP)  ; LAB_00404951
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00404924 | g_ScanlineRenderFunc
    MOV EDI,0xd1                        ; 0040492e
        ;   Label: LAB_0040492e
    MOV EAX,0x3                         ; 00404933
    PUSH EBP                            ; 00404938
    MOV dword ptr [0x02d052a0],EDI      ; 00404939 | g_RenderStateFlags
    MOV [0x02d052a4],EAX                ; 0040493f | g_RenderStateFlag2
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 00404944
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00404949
    JMP 0x00404896                      ; 0040494c
        ;   XREF to: 00404896 (UNCONDITIONAL_JUMP)  ; LAB_00404896
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00404951 | g_ScanlineRenderFunc
        ;   Label: LAB_00404951
    JMP 0x0040492e                      ; 0040495b
        ;   XREF to: 0040492e (UNCONDITIONAL_JUMP)  ; LAB_0040492e
    CMP dword ptr [0x0067939c],0x20     ; 0040495d | g_BitsPerPixel
        ;   Label: LAB_0040495d
    JNZ 0x00404972                      ; 00404964
        ;   XREF to: 00404972 (CONDITIONAL_JUMP)  ; LAB_00404972
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00404966 | g_ScanlineRenderFunc
    JMP 0x0040492e                      ; 00404970
        ;   XREF to: 0040492e (UNCONDITIONAL_JUMP)  ; LAB_0040492e
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00404972 | g_ScanlineRenderFunc
        ;   Label: LAB_00404972
    JMP 0x0040492e                      ; 0040497c
        ;   XREF to: 0040492e (UNCONDITIONAL_JUMP)  ; LAB_0040492e
    CMP dword ptr [0x02d05248],0x0      ; 0040497e | g_MMXSupported
        ;   Label: LAB_0040497e
    JNZ 0x004049ee                      ; 00404985
        ;   XREF to: 004049ee (CONDITIONAL_JUMP)  ; LAB_004049ee
    CMP dword ptr [0x0067939c],0x20     ; 00404987 | g_BitsPerPixel
    JNZ 0x004049e2                      ; 0040498e
        ;   XREF to: 004049e2 (CONDITIONAL_JUMP)  ; LAB_004049e2
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00404990 | g_ScanlineRenderFunc
    MOV ECX,dword ptr [EBP + 0x10]      ; 0040499a
        ;   Label: LAB_0040499a
    PUSH ECX                            ; 0040499d
    MOV EBX,dword ptr [EBP + 0xc]       ; 0040499e
    MOV EAX,0xd0                        ; 004049a1
    PUSH EBX                            ; 004049a6
    MOV EDI,dword ptr [EBP + 0x8]       ; 004049a7
    MOV EDX,0x1                         ; 004049aa
    PUSH EDI                            ; 004049af
    MOV [0x02d052a0],EAX                ; 004049b0 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDX      ; 004049b5 | g_RenderStateFlag2
    CALL engine_light.cpp_calculateLighting_FUN_00505780 ; 004049bb
        ;   XREF to: 00505780 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_00505780(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 004049c0
    MOV EAX,[0x02d02574]                ; 004049c3 | g_CurrentLightingValue
    PUSH EAX                            ; 004049c8
    MOV EDX,dword ptr [0x00772a5c]      ; 004049c9 | g_CurrentPolygonColor
    PUSH EDX                            ; 004049cf
    CALL engine_3d.c_makeGrayscaleColor_FUN_004039c0 ; 004049d0
        ;   XREF to: 004039c0 (UNCONDITIONAL_CALL)  ; uint engine_3d.c_makeGrayscaleColor_FUN_004039c0(int intensity)
    ADD ESP,0x8                         ; 004049d5
    MOV [0x02d02570],EAX                ; 004049d8 | g_ActiveRenderColor
    JMP 0x00404896                      ; 004049dd
        ;   XREF to: 00404896 (UNCONDITIONAL_JUMP)  ; LAB_00404896
    MOV dword ptr [0x02d0257c],0x5b5322 ; 004049e2 | g_ScanlineRenderFunc
        ;   Label: LAB_004049e2
    JMP 0x0040499a                      ; 004049ec
        ;   XREF to: 0040499a (UNCONDITIONAL_JUMP)  ; LAB_0040499a
    CMP dword ptr [0x0067939c],0x20     ; 004049ee | g_BitsPerPixel
        ;   Label: LAB_004049ee
    JNZ 0x00404a03                      ; 004049f5
        ;   XREF to: 00404a03 (CONDITIONAL_JUMP)  ; LAB_00404a03
    MOV dword ptr [0x02d0257c],0x5b4031 ; 004049f7 | g_ScanlineRenderFunc
    JMP 0x0040499a                      ; 00404a01
        ;   XREF to: 0040499a (UNCONDITIONAL_JUMP)  ; LAB_0040499a
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00404a03 | g_ScanlineRenderFunc
        ;   Label: LAB_00404a03
    JMP 0x0040499a                      ; 00404a0d
        ;   XREF to: 0040499a (UNCONDITIONAL_JUMP)  ; LAB_0040499a
    PUSH 0x772a98                       ; 00404a0f | g_ProcessedVertexIndices
        ;   Label: LAB_00404a0f
    PUSH EBX                            ; 00404a14
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00404a15
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404a1a
    POP EBX                             ; 00404a1d
    POP EDI                             ; 00404a1e
    MOV EDX,dword ptr [EBP + 0x4]       ; 00404a1f
        ;   Label: LAB_00404a1f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00404a22
    SUB EAX,EDX                         ; 00404a29
    LEA EDX,[EAX*0x4 + 0x0]             ; 00404a2b
    LEA EAX,[EBP + 0x18]                ; 00404a32
    ADD EAX,EDX                         ; 00404a35
    POP EBP                             ; 00404a37
    POP ESI                             ; 00404a38
    RET                                 ; 00404a39

