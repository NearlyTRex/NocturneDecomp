; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0048d170(CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SInputFace *     Stack[0x8]:4   face_array
; int              Stack[0xc]:4   face_count
; int              Stack[0x10]:4   render_flags
; Local Variables:
; CVector3i        Stack[-0x24]:12  local_24
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00570870 at 005708b2
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_006220ea
;   TerminatedCString s_CDemonRenderer_demonGZFa_00622100
;   SMRGLPrimitiveQuad*[2000] g_VisibleFacePointers
;   int g_BitsPerPixel = 0x8
;   int g_CullingMode
;   MainScanlineFunc* g_ScanlineRenderFunc
;   int g_UseExternalRenderer
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0
;   engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0048b030
;   engine_drender.cpp_renderTriangleSimple_FUN_004839f0
;   engine_drender.cpp_renderTriangleTextured_FUN_00483370
;   engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0
;   engine_special.cpp_drawPolyList2_FUN_005b7780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048d170
        ;   Label: engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170
    PUSH ESI                            ; 0048d171
    PUSH EDI                            ; 0048d172
    PUSH EBP                            ; 0048d173
    SUB ESP,0x14                        ; 0048d174
    MOV ESI,dword ptr [ESP + 0x28]      ; 0048d177
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0048d17b
    MOV EDI,dword ptr [ESP + 0x30]      ; 0048d17f
    CMP dword ptr [ESP + 0x34],-0x1     ; 0048d183
    JZ 0x0048d1b8                       ; 0048d188
        ;   XREF to: 0048d1b8 (CONDITIONAL_JUMP)  ; LAB_0048d1b8
    CMP dword ptr [ESI + 0x1c],0x0      ; 0048d18a
        ;   Label: LAB_0048d18a
    JZ 0x0048d1c2                       ; 0048d18e
        ;   XREF to: 0048d1c2 (CONDITIONAL_JUMP)  ; LAB_0048d1c2
    XOR EBP,EBP                         ; 0048d190
    TEST EDI,EDI                        ; 0048d192
    JLE 0x0048d1b0                      ; 0048d194
        ;   XREF to: 0048d1b0 (CONDITIONAL_JUMP)  ; LAB_0048d1b0
    MOV ECX,dword ptr [ESP + 0x34]      ; 0048d196
        ;   Label: LAB_0048d196
    PUSH ECX                            ; 0048d19a
    PUSH EBX                            ; 0048d19b
    PUSH ESI                            ; 0048d19c
    INC EBP                             ; 0048d19d
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0 ; 0048d19e
        ;   XREF to: 0048d8a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    ADD EBX,0x12                        ; 0048d1a3
    ADD ESP,0xc                         ; 0048d1a6
    CMP EBP,EDI                         ; 0048d1a9
    JL 0x0048d196                       ; 0048d1ab
        ;   XREF to: 0048d196 (CONDITIONAL_JUMP)  ; LAB_0048d196
    LEA EAX,[EAX]                       ; 0048d1ad
    ADD ESP,0x14                        ; 0048d1b0
        ;   Label: LAB_0048d1b0
    POP EBP                             ; 0048d1b3
    POP EDI                             ; 0048d1b4
    POP ESI                             ; 0048d1b5
    POP EBX                             ; 0048d1b6
    RET                                 ; 0048d1b7
    MOV dword ptr [ESP + 0x34],0x2cd    ; 0048d1b8
        ;   Label: LAB_0048d1b8
    JMP 0x0048d18a                      ; 0048d1c0
        ;   XREF to: 0048d18a (UNCONDITIONAL_JUMP)  ; LAB_0048d18a
    MOV EAX,dword ptr [ESI + 0x10]      ; 0048d1c2
        ;   Label: LAB_0048d1c2
    TEST EAX,EAX                        ; 0048d1c5
    JZ 0x0048d1ee                       ; 0048d1c7
        ;   XREF to: 0048d1ee (CONDITIONAL_JUMP)  ; LAB_0048d1ee
    XOR EBP,EBP                         ; 0048d1c9
        ;   Label: LAB_0048d1c9
    TEST EDI,EDI                        ; 0048d1cb
    JLE 0x0048d1b0                      ; 0048d1cd
        ;   XREF to: 0048d1b0 (CONDITIONAL_JUMP)  ; LAB_0048d1b0
    MOV EDX,dword ptr [ESP + 0x34]      ; 0048d1cf
        ;   Label: LAB_0048d1cf
    PUSH EDX                            ; 0048d1d3
    PUSH EBX                            ; 0048d1d4
    PUSH ESI                            ; 0048d1d5
    INC EBP                             ; 0048d1d6
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0048b030 ; 0048d1d7
        ;   XREF to: 0048b030 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0048b030(CDemonRenderer * this_ptr, SInputFace * face, int render_flags)
    ADD EBX,0x12                        ; 0048d1dc
    ADD ESP,0xc                         ; 0048d1df
    CMP EBP,EDI                         ; 0048d1e2
    JL 0x0048d1cf                       ; 0048d1e4
        ;   XREF to: 0048d1cf (CONDITIONAL_JUMP)  ; LAB_0048d1cf
    ADD ESP,0x14                        ; 0048d1e6
    POP EBP                             ; 0048d1e9
    POP EDI                             ; 0048d1ea
    POP ESI                             ; 0048d1eb
    POP EBX                             ; 0048d1ec
    RET                                 ; 0048d1ed
    CMP dword ptr [ESI + 0xc],0x0       ; 0048d1ee
        ;   Label: LAB_0048d1ee
    JNZ 0x0048d1c9                      ; 0048d1f2
        ;   XREF to: 0048d1c9 (CONDITIONAL_JUMP)  ; LAB_0048d1c9
    CMP dword ptr [0x00772a7c],0x0      ; 0048d1f4 | g_CullingMode
    JZ 0x0048d1c9                       ; 0048d1fb
        ;   XREF to: 0048d1c9 (CONDITIONAL_JUMP)  ; LAB_0048d1c9
    CMP dword ptr [ESI + 0x4],0x0       ; 0048d1fd
    JNZ 0x0048d30e                      ; 0048d201
        ;   XREF to: 0048d30e (CONDITIONAL_JUMP)  ; LAB_0048d30e
    CMP dword ptr [0x0067939c],0x20     ; 0048d207 | g_BitsPerPixel
    JNZ 0x0048d366                      ; 0048d20e
        ;   XREF to: 0048d366 (CONDITIONAL_JUMP)  ; LAB_0048d366
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048d214 | g_ScanlineRenderFunc
    MOV EAX,dword ptr [ESP + 0x34]      ; 0048d21e
        ;   Label: LAB_0048d21e
    MOV EBP,0x6                         ; 0048d222
    MOV [0x02d052a0],EAX                ; 0048d227 | g_RenderStateFlags
    MOV EAX,[0x02d03e94]                ; 0048d22c | g_UseExternalRenderer
    MOV dword ptr [0x02d052a4],EBP      ; 0048d231 | g_VertexPreprocessMode
    TEST EAX,EAX                        ; 0048d237
    JNZ 0x0048d375                      ; 0048d239
        ;   XREF to: 0048d375 (CONDITIONAL_JUMP)  ; LAB_0048d375
    TEST EDI,EDI                        ; 0048d23f
        ;   Label: LAB_0048d23f
    JLE 0x0048d1b0                      ; 0048d241
        ;   XREF to: 0048d1b0 (CONDITIONAL_JUMP)  ; LAB_0048d1b0
    XOR EAX,EAX                         ; 0048d247
    MOV AX,word ptr [EBX]               ; 0048d249
    MOV dword ptr [ESP],EAX             ; 0048d24c
    XOR EAX,EAX                         ; 0048d24f
    MOV AX,word ptr [EBX + 0x2]         ; 0048d251
    MOV dword ptr [ESP + 0x4],EAX       ; 0048d255
    XOR EAX,EAX                         ; 0048d259
    MOV AX,word ptr [EBX + 0x4]         ; 0048d25b
    MOV dword ptr [ESP + 0x8],EAX       ; 0048d25f
    MOV EAX,dword ptr [ESI + 0x20]      ; 0048d263
    TEST EAX,EAX                        ; 0048d266
    JNZ 0x0048d2f6                      ; 0048d268
        ;   XREF to: 0048d2f6 (CONDITIONAL_JUMP)  ; LAB_0048d2f6
    MOV AX,word ptr [EBX + 0x6]         ; 0048d26e
    MOV ECX,dword ptr [ESP]             ; 0048d272
    MOV EDX,EAX                         ; 0048d275
    IMUL EAX,ECX,0x30                   ; 0048d277
    MOV EBP,dword ptr [ESI]             ; 0048d27a
    SHL EDX,0x8                         ; 0048d27c
    MOV dword ptr [EAX + EBP*0x1 + 0x18],EDX ; 0048d27f
    XOR EAX,EAX                         ; 0048d283
    MOV AX,word ptr [EBX + 0xc]         ; 0048d285
    MOV EDX,dword ptr [ESP]             ; 0048d289
    MOV EBP,EAX                         ; 0048d28c
    IMUL EAX,EDX,0x30                   ; 0048d28e
    MOV EDX,dword ptr [ESI]             ; 0048d291
    SHL EBP,0x8                         ; 0048d293
    MOV dword ptr [EDX + EAX*0x1 + 0x1c],EBP ; 0048d296
    IMUL EDX,dword ptr [ESP + 0x4],0x30 ; 0048d29a
    XOR EAX,EAX                         ; 0048d29f
    MOV AX,word ptr [EBX + 0x8]         ; 0048d2a1
    MOV EBP,dword ptr [ESI]             ; 0048d2a5
    SHL EAX,0x8                         ; 0048d2a7
    MOV dword ptr [EDX + EBP*0x1 + 0x18],EAX ; 0048d2aa
    XOR EAX,EAX                         ; 0048d2ae
    MOV AX,word ptr [EBX + 0xe]         ; 0048d2b0
    MOV EDX,dword ptr [ESP + 0x4]       ; 0048d2b4
    MOV EBP,EAX                         ; 0048d2b8
    IMUL EAX,EDX,0x30                   ; 0048d2ba
    MOV EDX,dword ptr [ESI]             ; 0048d2bd
    SHL EBP,0x8                         ; 0048d2bf
    MOV dword ptr [EDX + EAX*0x1 + 0x1c],EBP ; 0048d2c2
    XOR EAX,EAX                         ; 0048d2c6
    MOV AX,word ptr [EBX + 0xa]         ; 0048d2c8
    MOV ECX,dword ptr [ESP + 0x8]       ; 0048d2cc
    MOV EDX,EAX                         ; 0048d2d0
    IMUL EAX,ECX,0x30                   ; 0048d2d2
    MOV EBP,dword ptr [ESI]             ; 0048d2d5
    SHL EDX,0x8                         ; 0048d2d7
    MOV dword ptr [EAX + EBP*0x1 + 0x18],EDX ; 0048d2da
    XOR EAX,EAX                         ; 0048d2de
    MOV AX,word ptr [EBX + 0x10]        ; 0048d2e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048d2e4
    MOV EBP,EAX                         ; 0048d2e8
    IMUL EAX,EDX,0x30                   ; 0048d2ea
    MOV EDX,dword ptr [ESI]             ; 0048d2ed
    SHL EBP,0x8                         ; 0048d2ef
    MOV dword ptr [EDX + EAX*0x1 + 0x1c],EBP ; 0048d2f2
    PUSH 0x3                            ; 0048d2f6
        ;   Label: LAB_0048d2f6
    LEA EAX,[ESP + 0x4]                 ; 0048d2f8
    PUSH EAX                            ; 0048d2fc
    DEC EDI                             ; 0048d2fd
    ADD EBX,0x12                        ; 0048d2fe
    CALL engine_drender.cpp_renderTriangleTextured_FUN_00483370 ; 0048d301
        ;   XREF to: 00483370 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_renderTriangleTextured_FUN_00483370(int * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 0048d306
    JMP 0x0048d23f                      ; 0048d309
        ;   XREF to: 0048d23f (UNCONDITIONAL_JUMP)  ; LAB_0048d23f
    MOV ECX,0x49072f                    ; 0048d30e
        ;   Label: LAB_0048d30e
    MOV [0x02d052a0],EAX                ; 0048d313 | g_RenderStateFlags
    MOV [0x02d052a4],EAX                ; 0048d318 | g_VertexPreprocessMode
    MOV dword ptr [0x02d0257c],ECX      ; 0048d31d | g_ScanlineRenderFunc
    TEST EDI,EDI                        ; 0048d323
    JLE 0x0048d1b0                      ; 0048d325
        ;   XREF to: 0048d1b0 (CONDITIONAL_JUMP)  ; LAB_0048d1b0
    XOR EAX,EAX                         ; 0048d32b
        ;   Label: LAB_0048d32b
    MOV AX,word ptr [EBX]               ; 0048d32d
    MOV dword ptr [ESP],EAX             ; 0048d330
    XOR EAX,EAX                         ; 0048d333
    MOV AX,word ptr [EBX + 0x2]         ; 0048d335
    MOV dword ptr [ESP + 0x4],EAX       ; 0048d339
    XOR EAX,EAX                         ; 0048d33d
    MOV AX,word ptr [EBX + 0x4]         ; 0048d33f
    PUSH 0x3                            ; 0048d343
    MOV dword ptr [ESP + 0xc],EAX       ; 0048d345
    LEA EAX,[ESP + 0x4]                 ; 0048d349
    PUSH EAX                            ; 0048d34d
    DEC EDI                             ; 0048d34e
    ADD EBX,0x12                        ; 0048d34f
    CALL engine_drender.cpp_renderTriangleSimple_FUN_004839f0 ; 0048d352
        ;   XREF to: 004839f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_renderTriangleSimple_FUN_004839f0(CVector3i * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 0048d357
    TEST EDI,EDI                        ; 0048d35a
    JG 0x0048d32b                       ; 0048d35c
        ;   XREF to: 0048d32b (CONDITIONAL_JUMP)  ; LAB_0048d32b
    ADD ESP,0x14                        ; 0048d35e
    POP EBP                             ; 0048d361
    POP EDI                             ; 0048d362
    POP ESI                             ; 0048d363
    POP EBX                             ; 0048d364
    RET                                 ; 0048d365
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048d366 | g_ScanlineRenderFunc
        ;   Label: LAB_0048d366
    JMP 0x0048d21e                      ; 0048d370
        ;   XREF to: 0048d21e (UNCONDITIONAL_JUMP)  ; LAB_0048d21e
    XOR EBP,EBP                         ; 0048d375
        ;   Label: LAB_0048d375
    MOV dword ptr [ESP + 0x10],EBP      ; 0048d377
    TEST EDI,EDI                        ; 0048d37b
    JLE 0x0048d3dd                      ; 0048d37d
        ;   XREF to: 0048d3dd (CONDITIONAL_JUMP)  ; LAB_0048d3dd
    MOV dword ptr [ESP + 0xc],EBP       ; 0048d37f
    PUSH EBX                            ; 0048d383
        ;   Label: LAB_0048d383
    CALL engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0 ; 0048d384
        ;   XREF to: 005523f0 (UNCONDITIONAL_CALL)  ; int engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0(STrianglePackedIndices * triangle)
    ADD ESP,0x4                         ; 0048d389
    TEST EAX,EAX                        ; 0048d38c
    JZ 0x0048d3cd                       ; 0048d38e
        ;   XREF to: 0048d3cd (CONDITIONAL_JUMP)  ; LAB_0048d3cd
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048d390
    INC EBP                             ; 0048d394
    LEA EDX,[EAX + 0x4]                 ; 0048d395
    MOV dword ptr [EAX + 0x6703f4],EBX  ; 0048d398 | g_VisibleFacePointers
    MOV dword ptr [ESP + 0xc],EDX       ; 0048d39e
    CMP EBP,0x7d0                       ; 0048d3a2
    JL 0x0048d3cd                       ; 0048d3a8
        ;   XREF to: 0048d3cd (CONDITIONAL_JUMP)  ; LAB_0048d3cd
    PUSH EBP                            ; 0048d3aa
    MOV ECX,0x6220ea                    ; 0048d3ab | = "..\\engine\\drender.cpp"
    MOV EAX,0xa30                       ; 0048d3b0
    PUSH 0x622100                       ; 0048d3b5 | = "CDemonRenderer::demonGZFacetList - To..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0048d3ba | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0048d3c0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0048d3c5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0048d3ca
    MOV ECX,dword ptr [ESP + 0x10]      ; 0048d3cd
        ;   Label: LAB_0048d3cd
    INC ECX                             ; 0048d3d1
    ADD EBX,0x12                        ; 0048d3d2
    MOV dword ptr [ESP + 0x10],ECX      ; 0048d3d5
    CMP EDI,ECX                         ; 0048d3d9
    JG 0x0048d383                       ; 0048d3db
        ;   XREF to: 0048d383 (CONDITIONAL_JUMP)  ; LAB_0048d383
    TEST EBP,EBP                        ; 0048d3dd
        ;   Label: LAB_0048d3dd
    JLE 0x0048d1b0                      ; 0048d3df
        ;   XREF to: 0048d1b0 (CONDITIONAL_JUMP)  ; LAB_0048d1b0
    MOV EDX,dword ptr [0x02d052a0]      ; 0048d3e5 | g_RenderStateFlags
    PUSH EDX                            ; 0048d3eb
    PUSH EBP                            ; 0048d3ec
    PUSH 0x6703f4                       ; 0048d3ed | g_VisibleFacePointers
    MOV ECX,dword ptr [ESI]             ; 0048d3f2
    PUSH ECX                            ; 0048d3f4
    CALL engine_special.cpp_drawPolyList2_FUN_005b7780 ; 0048d3f5
        ;   XREF to: 005b7780 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolyList2_FUN_005b7780(SRenderVertex * vertex_buffer, SInputFace * * polygons, int polygon_count, int render_flags)
    ADD ESP,0x10                        ; 0048d3fa
    ADD ESP,0x14                        ; 0048d3fd
    POP EBP                             ; 0048d400
    POP EDI                             ; 0048d401
    POP ESI                             ; 0048d402
    POP EBX                             ; 0048d403
    RET                                 ; 0048d404

