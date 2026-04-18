; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count,int primitive_stride,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   primitive_array
; int              Stack[0xc]:4   primitive_count
; int              Stack[0x10]:4   primitive_stride
; int              Stack[0x14]:4   render_flags
; Local Variables:
; int[4]           Stack[-0x28]:16  local_28
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20 at 0048ce7b
;   engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90 at 0048ceeb
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_0062208d
;   TerminatedCString s_CDemonRenderer_demonGZFa_006220a3
;   SInputFace*[2000] g_VisibleFacePointers
;   int g_BitsPerPixel = 0x8
;   int g_CullingMode
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   int g_UseExternalRenderer
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
;   engine_drender.cpp_renderTriangleSimple_FUN_004839f0
;   engine_drender.cpp_renderTriangleTextured_FUN_00483370
;   engine_prim.c_getTriangleWindingFromIndices1_FUN_00552210
;   wincore_windll.cpp_drawPolyList_FUN_005b7640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048cf00
        ;   Label: engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00
    PUSH ESI                            ; 0048cf01
    PUSH EDI                            ; 0048cf02
    PUSH EBP                            ; 0048cf03
    SUB ESP,0x18                        ; 0048cf04
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0048cf07
    MOV EBX,dword ptr [ESP + 0x30]      ; 0048cf0b
    MOV EDI,dword ptr [ESP + 0x34]      ; 0048cf0f
    MOV EDX,dword ptr [ESI + 0x10]      ; 0048cf13
    TEST EDX,EDX                        ; 0048cf16
    JZ 0x0048cf48                       ; 0048cf18
        ;   XREF to: 0048cf48 (CONDITIONAL_JUMP)  ; LAB_0048cf48
    XOR EBP,EBP                         ; 0048cf1a
        ;   Label: LAB_0048cf1a
    TEST EDI,EDI                        ; 0048cf1c
    JLE 0x0048cf40                      ; 0048cf1e
        ;   XREF to: 0048cf40 (CONDITIONAL_JUMP)  ; LAB_0048cf40
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0048cf20
        ;   Label: LAB_0048cf20
    PUSH EAX                            ; 0048cf24
    PUSH EBX                            ; 0048cf25
    PUSH ESI                            ; 0048cf26
    CALL engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0 ; 0048cf27
        ;   XREF to: 0048aeb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 0048cf2c
    MOV EDX,dword ptr [ESP + 0x38]      ; 0048cf2f
    INC EBP                             ; 0048cf33
    ADD EBX,EDX                         ; 0048cf34
    CMP EBP,EDI                         ; 0048cf36
    JL 0x0048cf20                       ; 0048cf38
        ;   XREF to: 0048cf20 (CONDITIONAL_JUMP)  ; LAB_0048cf20
    LEA EAX,[EAX]                       ; 0048cf3a
    ADD ESP,0x18                        ; 0048cf40
        ;   Label: LAB_0048cf40
    POP EBP                             ; 0048cf43
    POP EDI                             ; 0048cf44
    POP ESI                             ; 0048cf45
    POP EBX                             ; 0048cf46
    RET                                 ; 0048cf47
    CMP dword ptr [ESI + 0xc],0x0       ; 0048cf48
        ;   Label: LAB_0048cf48
    JNZ 0x0048cf1a                      ; 0048cf4c
        ;   XREF to: 0048cf1a (CONDITIONAL_JUMP)  ; LAB_0048cf1a
    CMP dword ptr [0x00772a7c],0x0      ; 0048cf4e | g_CullingMode
    JZ 0x0048cf1a                       ; 0048cf55
        ;   XREF to: 0048cf1a (CONDITIONAL_JUMP)  ; LAB_0048cf1a
    CMP dword ptr [ESI + 0x4],0x0       ; 0048cf57
    JZ 0x0048cfbb                       ; 0048cf5b
        ;   XREF to: 0048cfbb (CONDITIONAL_JUMP)  ; LAB_0048cfbb
    MOV ESI,0x49072f                    ; 0048cf5d
    MOV dword ptr [0x02d052a0],EDX      ; 0048cf62 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDX      ; 0048cf68 | g_VertexPreprocessMode
    MOV dword ptr [0x02d0257c],ESI      ; 0048cf6e | g_ScanlineRenderFunc
    TEST EDI,EDI                        ; 0048cf74
    JLE 0x0048cf40                      ; 0048cf76
        ;   XREF to: 0048cf40 (CONDITIONAL_JUMP)  ; LAB_0048cf40
    MOV ESI,dword ptr [ESP + 0x38]      ; 0048cf78
    MOV EAX,dword ptr [EBX + 0x18]      ; 0048cf7c
        ;   Label: LAB_0048cf7c
    MOV dword ptr [ESP],EAX             ; 0048cf7f
    MOV EAX,dword ptr [EBX + 0x24]      ; 0048cf82
    MOV dword ptr [ESP + 0x4],EAX       ; 0048cf85
    MOV EAX,dword ptr [EBX + 0x30]      ; 0048cf89
    MOV dword ptr [ESP + 0x8],EAX       ; 0048cf8c
    MOV EBP,dword ptr [EBX + 0x4]       ; 0048cf90
    MOV EDX,EBX                         ; 0048cf93
    CMP EBP,0x4                         ; 0048cf95
    JNZ 0x0048cfa1                      ; 0048cf98
        ;   XREF to: 0048cfa1 (CONDITIONAL_JUMP)  ; LAB_0048cfa1
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0048cf9a
    MOV dword ptr [ESP + 0xc],EAX       ; 0048cf9d
    MOV ECX,dword ptr [EDX + 0x4]       ; 0048cfa1
        ;   Label: LAB_0048cfa1
    PUSH ECX                            ; 0048cfa4
    LEA EAX,[ESP + 0x4]                 ; 0048cfa5
    PUSH EAX                            ; 0048cfa9
    DEC EDI                             ; 0048cfaa
    ADD EBX,ESI                         ; 0048cfab
    CALL engine_drender.cpp_renderTriangleSimple_FUN_004839f0 ; 0048cfad
        ;   XREF to: 004839f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_renderTriangleSimple_FUN_004839f0(CVector3i * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 0048cfb2
    TEST EDI,EDI                        ; 0048cfb5
    JLE 0x0048cf40                      ; 0048cfb7
        ;   XREF to: 0048cf40 (CONDITIONAL_JUMP)  ; LAB_0048cf40
    JMP 0x0048cf7c                      ; 0048cfb9
        ;   XREF to: 0048cf7c (UNCONDITIONAL_JUMP)  ; LAB_0048cf7c
    CMP dword ptr [0x0067939c],0x20     ; 0048cfbb | g_BitsPerPixel
        ;   Label: LAB_0048cfbb
    JNZ 0x0048d0c0                      ; 0048cfc2
        ;   XREF to: 0048d0c0 (CONDITIONAL_JUMP)  ; LAB_0048d0c0
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048cfc8 | g_ScanlineRenderFunc
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0048cfd2
        ;   Label: LAB_0048cfd2
    MOV [0x02d052a0],EAX                ; 0048cfd6 | g_RenderStateFlags
    MOV EAX,0x6                         ; 0048cfdb
    MOV EDX,dword ptr [0x02d03e94]      ; 0048cfe0 | g_UseExternalRenderer
    MOV [0x02d052a4],EAX                ; 0048cfe6 | g_VertexPreprocessMode
    TEST EDX,EDX                        ; 0048cfeb
    JNZ 0x0048d0cf                      ; 0048cfed
        ;   XREF to: 0048d0cf (CONDITIONAL_JUMP)  ; LAB_0048d0cf
    TEST EDI,EDI                        ; 0048cff3
        ;   Label: LAB_0048cff3
    JLE 0x0048cf40                      ; 0048cff5
        ;   XREF to: 0048cf40 (CONDITIONAL_JUMP)  ; LAB_0048cf40
    MOV EAX,dword ptr [EBX + 0x18]      ; 0048cffb
    MOV dword ptr [ESP],EAX             ; 0048cffe
    MOV EAX,dword ptr [EBX + 0x24]      ; 0048d001
    MOV dword ptr [ESP + 0x4],EAX       ; 0048d004
    MOV EAX,dword ptr [EBX + 0x30]      ; 0048d008
    MOV dword ptr [ESP + 0x8],EAX       ; 0048d00b
    MOV ECX,dword ptr [EBX + 0x4]       ; 0048d00f
    MOV EDX,EBX                         ; 0048d012
    CMP ECX,0x4                         ; 0048d014
    JZ 0x0048d162                       ; 0048d017
        ;   XREF to: 0048d162 (CONDITIONAL_JUMP)  ; LAB_0048d162
    CMP dword ptr [ESI + 0x20],0x0      ; 0048d01d
        ;   Label: LAB_0048d01d
    JNZ 0x0048d0a3                      ; 0048d021
        ;   XREF to: 0048d0a3 (CONDITIONAL_JUMP)  ; LAB_0048d0a3
    IMUL EAX,dword ptr [ESP],0x30       ; 0048d027
    MOV EBP,dword ptr [ESI]             ; 0048d02b
    ADD EAX,EBP                         ; 0048d02d
    MOV EBP,dword ptr [EDX + 0x1c]      ; 0048d02f
    MOV dword ptr [EAX + 0x18],EBP      ; 0048d032
    IMUL EAX,dword ptr [ESP],0x30       ; 0048d035
    MOV EBP,dword ptr [ESI]             ; 0048d039
    ADD EBP,EAX                         ; 0048d03b
    MOV EAX,dword ptr [EDX + 0x20]      ; 0048d03d
    MOV dword ptr [EBP + 0x1c],EAX      ; 0048d040
    IMUL EAX,dword ptr [ESP + 0x4],0x30 ; 0048d043
    MOV EBP,dword ptr [ESI]             ; 0048d048
    ADD EBP,EAX                         ; 0048d04a
    MOV EAX,dword ptr [EDX + 0x28]      ; 0048d04c
    MOV dword ptr [EBP + 0x18],EAX      ; 0048d04f
    IMUL EBP,dword ptr [ESP + 0x4],0x30 ; 0048d052
    MOV EAX,dword ptr [ESI]             ; 0048d057
    ADD EBP,EAX                         ; 0048d059
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0048d05b
    MOV dword ptr [EBP + 0x1c],EAX      ; 0048d05e
    IMUL EAX,dword ptr [ESP + 0x8],0x30 ; 0048d061
    MOV EBP,dword ptr [ESI]             ; 0048d066
    ADD EBP,EAX                         ; 0048d068
    MOV EAX,dword ptr [EDX + 0x34]      ; 0048d06a
    MOV dword ptr [EBP + 0x18],EAX      ; 0048d06d
    IMUL EBP,dword ptr [ESP + 0x8],0x30 ; 0048d070
    MOV EAX,dword ptr [ESI]             ; 0048d075
    ADD EBP,EAX                         ; 0048d077
    MOV EAX,dword ptr [EDX + 0x38]      ; 0048d079
    MOV dword ptr [EBP + 0x1c],EAX      ; 0048d07c
    CMP dword ptr [EDX + 0x4],0x4       ; 0048d07f
    JNZ 0x0048d0a3                      ; 0048d083
        ;   XREF to: 0048d0a3 (CONDITIONAL_JUMP)  ; LAB_0048d0a3
    IMUL EAX,dword ptr [ESP + 0xc],0x30 ; 0048d085
    MOV EBP,dword ptr [ESI]             ; 0048d08a
    ADD EBP,EAX                         ; 0048d08c
    MOV EAX,dword ptr [EDX + 0x40]      ; 0048d08e
    MOV dword ptr [EBP + 0x18],EAX      ; 0048d091
    IMUL EBP,dword ptr [ESP + 0xc],0x30 ; 0048d094
    MOV EAX,dword ptr [ESI]             ; 0048d099
    ADD EBP,EAX                         ; 0048d09b
    MOV EAX,dword ptr [EDX + 0x44]      ; 0048d09d
    MOV dword ptr [EBP + 0x1c],EAX      ; 0048d0a0
    MOV ECX,dword ptr [EDX + 0x4]       ; 0048d0a3
        ;   Label: LAB_0048d0a3
    PUSH ECX                            ; 0048d0a6
    LEA EAX,[ESP + 0x4]                 ; 0048d0a7
    PUSH EAX                            ; 0048d0ab
    CALL engine_drender.cpp_renderTriangleTextured_FUN_00483370 ; 0048d0ac
        ;   XREF to: 00483370 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_renderTriangleTextured_FUN_00483370(int * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 0048d0b1
    MOV EBP,dword ptr [ESP + 0x38]      ; 0048d0b4
    DEC EDI                             ; 0048d0b8
    ADD EBX,EBP                         ; 0048d0b9
    JMP 0x0048cff3                      ; 0048d0bb
        ;   XREF to: 0048cff3 (UNCONDITIONAL_JUMP)  ; LAB_0048cff3
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048d0c0 | g_ScanlineRenderFunc
        ;   Label: LAB_0048d0c0
    JMP 0x0048cfd2                      ; 0048d0ca
        ;   XREF to: 0048cfd2 (UNCONDITIONAL_JUMP)  ; LAB_0048cfd2
    XOR EBP,EBP                         ; 0048d0cf
        ;   Label: LAB_0048d0cf
    MOV dword ptr [ESP + 0x14],EBP      ; 0048d0d1
    TEST EDI,EDI                        ; 0048d0d5
    JLE 0x0048d13a                      ; 0048d0d7
        ;   XREF to: 0048d13a (CONDITIONAL_JUMP)  ; LAB_0048d13a
    MOV dword ptr [ESP + 0x10],EBP      ; 0048d0d9
    PUSH EBX                            ; 0048d0dd
        ;   Label: LAB_0048d0dd
    CALL engine_prim.c_getTriangleWindingFromIndices1_FUN_00552210 ; 0048d0de
        ;   XREF to: 00552210 (UNCONDITIONAL_CALL)  ; int engine_prim.c_getTriangleWindingFromIndices1_FUN_00552210(SMRGLPrimitiveTriangle * triangle)
    ADD ESP,0x4                         ; 0048d0e3
    TEST EAX,EAX                        ; 0048d0e6
    JZ 0x0048d127                       ; 0048d0e8
        ;   XREF to: 0048d127 (CONDITIONAL_JUMP)  ; LAB_0048d127
    MOV EAX,dword ptr [ESP + 0x10]      ; 0048d0ea
    INC EBP                             ; 0048d0ee
    LEA EDX,[EAX + 0x4]                 ; 0048d0ef
    MOV dword ptr [EAX + 0x6703f4],EBX  ; 0048d0f2 | g_VisibleFacePointers
    MOV dword ptr [ESP + 0x10],EDX      ; 0048d0f8
    CMP EBP,0x7d0                       ; 0048d0fc
    JL 0x0048d127                       ; 0048d102
        ;   XREF to: 0048d127 (CONDITIONAL_JUMP)  ; LAB_0048d127
    PUSH EBP                            ; 0048d104
    MOV ECX,0x62208d                    ; 0048d105 | = "..\\engine\\drender.cpp"
    MOV EAX,0x9b6                       ; 0048d10a
    PUSH 0x6220a3                       ; 0048d10f | = "CDemonRenderer::demonGZFacetList - To..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0048d114 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0048d11a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0048d11f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0048d124
    MOV EDX,dword ptr [ESP + 0x14]      ; 0048d127
        ;   Label: LAB_0048d127
    MOV EAX,dword ptr [ESP + 0x38]      ; 0048d12b
    INC EDX                             ; 0048d12f
    ADD EBX,EAX                         ; 0048d130
    MOV dword ptr [ESP + 0x14],EDX      ; 0048d132
    CMP EDI,EDX                         ; 0048d136
    JG 0x0048d0dd                       ; 0048d138
        ;   XREF to: 0048d0dd (CONDITIONAL_JUMP)  ; LAB_0048d0dd
    TEST EBP,EBP                        ; 0048d13a
        ;   Label: LAB_0048d13a
    JLE 0x0048cf40                      ; 0048d13c
        ;   XREF to: 0048cf40 (CONDITIONAL_JUMP)  ; LAB_0048cf40
    MOV EBX,dword ptr [0x02d052a0]      ; 0048d142 | g_RenderStateFlags
    PUSH EBX                            ; 0048d148
    PUSH EBP                            ; 0048d149
    PUSH 0x6703f4                       ; 0048d14a | g_VisibleFacePointers
    MOV EDI,dword ptr [ESI]             ; 0048d14f
    PUSH EDI                            ; 0048d151
    CALL wincore_windll.cpp_drawPolyList_FUN_005b7640 ; 0048d152
        ;   XREF to: 005b7640 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_drawPolyList_FUN_005b7640(SRenderVertex * vertex_buffer, SMRGLPrimitiveTriangle * * polygons, int polygon_count, int render_flags)
    ADD ESP,0x10                        ; 0048d157
    ADD ESP,0x18                        ; 0048d15a
    POP EBP                             ; 0048d15d
    POP EDI                             ; 0048d15e
    POP ESI                             ; 0048d15f
    POP EBX                             ; 0048d160
    RET                                 ; 0048d161
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0048d162
        ;   Label: LAB_0048d162
    MOV dword ptr [ESP + 0xc],EAX       ; 0048d165
    JMP 0x0048d01d                      ; 0048d169
        ;   XREF to: 0048d01d (UNCONDITIONAL_JUMP)  ; LAB_0048d01d

