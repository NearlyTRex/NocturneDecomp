; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[7]:
;   core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70 at 00497296
;   core_dtri.cpp_CDemonTriangle_render_FUN_0049cbd0 at 0049cd0d
;   core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_00570960 at 005709c6
;   core_skeleton.cpp_CDeformableModel_renderParts_FUN_0059abf0 at 0059b381
;   core_water.cpp_CWater_render_FUN_005ea320 at 005ea7eb
;   shape_meshlod.cpp_CLodMesh_renderShadedTriangles_FUN_0051e990 at 0051ea5a
;   shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0 at 0051ecbd
;
; Referenced Globals:
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

    PUSH ESI                            ; 0048a8a0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
    PUSH EDI                            ; 0048a8a1
    PUSH EBP                            ; 0048a8a2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0048a8a3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0048a8a7
    CMP dword ptr [EDI + 0xc],0x0       ; 0048a8ab
    JNZ 0x0048a916                      ; 0048a8af
        ;   XREF to: 0048a916 (CONDITIONAL_JUMP)  ; LAB_0048a916
    PUSH EBX                            ; 0048a8b1
        ;   Label: LAB_0048a8b1
    MOV ECX,dword ptr [ESI + 0x4]       ; 0048a8b2
    XOR EDX,EDX                         ; 0048a8b5
    TEST ECX,ECX                        ; 0048a8b7
    JLE 0x0048a8e0                      ; 0048a8b9
        ;   XREF to: 0048a8e0 (CONDITIONAL_JUMP)  ; LAB_0048a8e0
    MOV EAX,ESI                         ; 0048a8bb
    XOR ECX,ECX                         ; 0048a8bd
    ADD ECX,0x4                         ; 0048a8bf
        ;   Label: LAB_0048a8bf
    MOV EBX,dword ptr [EAX + 0x18]      ; 0048a8c2
    MOV dword ptr [ECX + 0x2c6d5a8],EBX ; 0048a8c5 | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
    INC EDX                             ; 0048a8cb
    MOV EBX,dword ptr [ESI + 0x4]       ; 0048a8cc
    ADD EAX,0xc                         ; 0048a8cf
    CMP EDX,EBX                         ; 0048a8d2
    JL 0x0048a8bf                       ; 0048a8d4
        ;   XREF to: 0048a8bf (CONDITIONAL_JUMP)  ; LAB_0048a8bf
    LEA EAX,[EAX]                       ; 0048a8d6
    LEA EDX,[EDX]                       ; 0048a8dc
    CMP dword ptr [EDI + 0x4],0x0       ; 0048a8e0
        ;   Label: LAB_0048a8e0
    JZ 0x0048a928                       ; 0048a8e4
        ;   XREF to: 0048a928 (CONDITIONAL_JUMP)  ; LAB_0048a928
    XOR EBP,EBP                         ; 0048a8e6
    MOV EBX,0x49072f                    ; 0048a8e8
    MOV dword ptr [0x02d052a0],EBP      ; 0048a8ed | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 0048a8f3 | g_VertexPreprocessMode
    MOV dword ptr [0x02d0257c],EBX      ; 0048a8f9 | g_ScanlineRenderFunc
    PUSH 0x2c6d5ac                      ; 0048a8ff | g_VertexIndexBuffer
        ;   Label: LAB_0048a8ff
    MOV EDX,dword ptr [ESI + 0x4]       ; 0048a904
    PUSH EDX                            ; 0048a907
    PUSH EDI                            ; 0048a908
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048a909
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048a90e
    POP EBX                             ; 0048a911
    POP EBP                             ; 0048a912
        ;   Label: LAB_0048a912
    POP EDI                             ; 0048a913
    POP ESI                             ; 0048a914
    RET                                 ; 0048a915
    LEA EAX,[ESI + 0x8]                 ; 0048a916
        ;   Label: LAB_0048a916
    PUSH EAX                            ; 0048a919
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048a91a
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048a91f
    TEST EAX,EAX                        ; 0048a922
    JZ 0x0048a912                       ; 0048a924
        ;   XREF to: 0048a912 (CONDITIONAL_JUMP)  ; LAB_0048a912
    JMP 0x0048a8b1                      ; 0048a926
        ;   XREF to: 0048a8b1 (UNCONDITIONAL_JUMP)  ; LAB_0048a8b1
    MOV EDX,0xc0                        ; 0048a928
        ;   Label: LAB_0048a928
    MOV ECX,0x6                         ; 0048a92d
    MOV EAX,0x490a58                    ; 0048a932
    MOV dword ptr [0x02d052a0],EDX      ; 0048a937 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],ECX      ; 0048a93d | g_VertexPreprocessMode
    MOV [0x02d0257c],EAX                ; 0048a943 | g_ScanlineRenderFunc
    JMP 0x0048a8ff                      ; 0048a948
        ;   XREF to: 0048a8ff (UNCONDITIONAL_JUMP)  ; LAB_0048a8ff

