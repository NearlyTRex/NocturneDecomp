; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_00461720(CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SInputFace *     Stack[0x8]:4   face_array
; int              Stack[0xc]:4   face_count
; int              Stack[0x10]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0 at 0050df12
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_0057dcfa
;   TerminatedCString s_CDemonRenderer_demonGZFa_0057dd10
;   SMRGLPrimitiveQuad*[2000] g_VisibleFacePointers
;   int g_BitsPerPixel = 0x8
;   undefined4 DAT_006b0280
;   MainScanlineFunc* g_ScanlineRenderFunc
;   int g_UseExternalRenderer
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_00461bd0
;   engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0045f5e0
;   engine_drender.cpp_renderTriangleSimple_FUN_00458080
;   engine_drender.cpp_renderTriangleTextured_FUN_00457a00
;   engine_prim.c_getTriangleWindingFromPackedIndices_FUN_004f9cb0
;   engine_special.cpp_drawPolyList2_FUN_005327c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461720
        ;   Label: engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_00461720
    PUSH ESI                            ; 00461721
    PUSH EDI                            ; 00461722
    PUSH EBP                            ; 00461723
    SUB ESP,0x14                        ; 00461724
    MOV ESI,dword ptr [ESP + 0x28]      ; 00461727
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0046172b
    MOV EDI,dword ptr [ESP + 0x30]      ; 0046172f
    CMP dword ptr [ESP + 0x34],-0x1     ; 00461733
    JZ 0x00461768                       ; 00461738
        ;   XREF to: 00461768 (CONDITIONAL_JUMP)  ; LAB_00461768
    CMP dword ptr [ESI + 0x1c],0x0      ; 0046173a
        ;   Label: LAB_0046173a
    JZ 0x00461772                       ; 0046173e
        ;   XREF to: 00461772 (CONDITIONAL_JUMP)  ; LAB_00461772
    XOR EBP,EBP                         ; 00461740
    TEST EDI,EDI                        ; 00461742
    JLE 0x00461760                      ; 00461744
        ;   XREF to: 00461760 (CONDITIONAL_JUMP)  ; LAB_00461760
    MOV ECX,dword ptr [ESP + 0x34]      ; 00461746
        ;   Label: LAB_00461746
    PUSH ECX                            ; 0046174a
    PUSH EBX                            ; 0046174b
    PUSH ESI                            ; 0046174c
    INC EBP                             ; 0046174d
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_00461bd0 ; 0046174e
        ;   XREF to: 00461bd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_00461bd0(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    ADD EBX,0x12                        ; 00461753
    ADD ESP,0xc                         ; 00461756
    CMP EBP,EDI                         ; 00461759
    JL 0x00461746                       ; 0046175b
        ;   XREF to: 00461746 (CONDITIONAL_JUMP)  ; LAB_00461746
    LEA EAX,[EAX]                       ; 0046175d
    ADD ESP,0x14                        ; 00461760
        ;   Label: LAB_00461760
    POP EBP                             ; 00461763
    POP EDI                             ; 00461764
    POP ESI                             ; 00461765
    POP EBX                             ; 00461766
    RET                                 ; 00461767
    MOV dword ptr [ESP + 0x34],0x2cd    ; 00461768
        ;   Label: LAB_00461768
    JMP 0x0046173a                      ; 00461770
        ;   XREF to: 0046173a (UNCONDITIONAL_JUMP)  ; LAB_0046173a
    MOV EAX,dword ptr [ESI + 0x10]      ; 00461772
        ;   Label: LAB_00461772
    TEST EAX,EAX                        ; 00461775
    JZ 0x0046179e                       ; 00461777
        ;   XREF to: 0046179e (CONDITIONAL_JUMP)  ; LAB_0046179e
    XOR EBP,EBP                         ; 00461779
        ;   Label: LAB_00461779
    TEST EDI,EDI                        ; 0046177b
    JLE 0x00461760                      ; 0046177d
        ;   XREF to: 00461760 (CONDITIONAL_JUMP)  ; LAB_00461760
    MOV EDX,dword ptr [ESP + 0x34]      ; 0046177f
        ;   Label: LAB_0046177f
    PUSH EDX                            ; 00461783
    PUSH EBX                            ; 00461784
    PUSH ESI                            ; 00461785
    INC EBP                             ; 00461786
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0045f5e0 ; 00461787
        ;   XREF to: 0045f5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0045f5e0(CDemonRenderer * this_ptr, SInputFace * face, int render_flags)
    ADD EBX,0x12                        ; 0046178c
    ADD ESP,0xc                         ; 0046178f
    CMP EBP,EDI                         ; 00461792
    JL 0x0046177f                       ; 00461794
        ;   XREF to: 0046177f (CONDITIONAL_JUMP)  ; LAB_0046177f
    ADD ESP,0x14                        ; 00461796
    POP EBP                             ; 00461799
    POP EDI                             ; 0046179a
    POP ESI                             ; 0046179b
    POP EBX                             ; 0046179c
    RET                                 ; 0046179d
    CMP dword ptr [ESI + 0xc],0x0       ; 0046179e
        ;   Label: LAB_0046179e
    JNZ 0x00461779                      ; 004617a2
        ;   XREF to: 00461779 (CONDITIONAL_JUMP)  ; LAB_00461779
    CMP dword ptr [0x006b0280],0x0      ; 004617a4 | DAT_006b0280
    JZ 0x00461779                       ; 004617ab
        ;   XREF to: 00461779 (CONDITIONAL_JUMP)  ; LAB_00461779
    CMP dword ptr [ESI + 0x4],0x0       ; 004617ad
    JNZ 0x004618f6                      ; 004617b1
        ;   XREF to: 004618f6 (CONDITIONAL_JUMP)  ; LAB_004618f6
    CMP dword ptr [0x005b7624],0x20     ; 004617b7 | g_BitsPerPixel
    JNZ 0x0046194e                      ; 004617be
        ;   XREF to: 0046194e (CONDITIONAL_JUMP)  ; LAB_0046194e
    MOV dword ptr [0x01c00c7c],0x52f031 ; 004617c4 | g_ScanlineRenderFunc
    MOV EAX,dword ptr [ESP + 0x34]      ; 004617ce
        ;   Label: LAB_004617ce
    MOV EBP,0x6                         ; 004617d2
    MOV [0x01c039a0],EAX                ; 004617d7 | g_RenderStateFlags
    MOV EAX,[0x01c02594]                ; 004617dc | g_UseExternalRenderer
    MOV dword ptr [0x01c039a4],EBP      ; 004617e1 | g_VertexPreprocessMode
    TEST EAX,EAX                        ; 004617e7
    JNZ 0x0046195d                      ; 004617e9
        ;   XREF to: 0046195d (CONDITIONAL_JUMP)  ; LAB_0046195d
    TEST EDI,EDI                        ; 004617ef
        ;   Label: LAB_004617ef
    JLE 0x00461760                      ; 004617f1
        ;   XREF to: 00461760 (CONDITIONAL_JUMP)  ; LAB_00461760
    XOR EAX,EAX                         ; 004617f7
    MOV AX,word ptr [EBX]               ; 004617f9
    MOV dword ptr [ESP],EAX             ; 004617fc
    XOR EAX,EAX                         ; 004617ff
    MOV AX,word ptr [EBX + 0x2]         ; 00461801
    MOV dword ptr [ESP + 0x4],EAX       ; 00461805
    XOR EAX,EAX                         ; 00461809
    MOV AX,word ptr [EBX + 0x4]         ; 0046180b
    MOV dword ptr [ESP + 0x8],EAX       ; 0046180f
    MOV EAX,dword ptr [ESI + 0x20]      ; 00461813
    TEST EAX,EAX                        ; 00461816
    JNZ 0x004618de                      ; 00461818
        ;   XREF to: 004618de (CONDITIONAL_JUMP)  ; LAB_004618de
    MOV AX,word ptr [EBX + 0x6]         ; 0046181e
    MOV EDX,dword ptr [ESP]             ; 00461822
    MOV ECX,EAX                         ; 00461825
    LEA EAX,[EDX*0x4 + 0x0]             ; 00461827
    SUB EAX,EDX                         ; 0046182e
    MOV EDX,EAX                         ; 00461830
    SHL EDX,0x4                         ; 00461832
    MOV EAX,dword ptr [ESI]             ; 00461835
    SHL ECX,0x8                         ; 00461837
    MOV dword ptr [EDX + EAX*0x1 + 0x18],ECX ; 0046183a
    MOV EDX,dword ptr [ESP]             ; 0046183e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00461841
    XOR ECX,ECX                         ; 00461848
    SUB EAX,EDX                         ; 0046184a
    MOV CX,word ptr [EBX + 0xc]         ; 0046184c
    SHL EAX,0x4                         ; 00461850
    MOV EDX,dword ptr [ESI]             ; 00461853
    SHL ECX,0x8                         ; 00461855
    MOV dword ptr [EDX + EAX*0x1 + 0x1c],ECX ; 00461858
    MOV EBP,dword ptr [ESP + 0x4]       ; 0046185c
    XOR EAX,EAX                         ; 00461860
    LEA ECX,[EBP*0x4 + 0x0]             ; 00461862
    MOV AX,word ptr [EBX + 0x8]         ; 00461869
    SUB ECX,EBP                         ; 0046186d
    MOV EDX,EAX                         ; 0046186f
    SHL ECX,0x4                         ; 00461871
    MOV EAX,dword ptr [ESI]             ; 00461874
    SHL EDX,0x8                         ; 00461876
    MOV dword ptr [ECX + EAX*0x1 + 0x18],EDX ; 00461879
    XOR EAX,EAX                         ; 0046187d
    MOV AX,word ptr [EBX + 0xe]         ; 0046187f
    MOV EBP,dword ptr [ESP + 0x4]       ; 00461883
    MOV ECX,EAX                         ; 00461887
    LEA EAX,[EBP*0x4 + 0x0]             ; 00461889
    SUB EAX,EBP                         ; 00461890
    MOV EDX,dword ptr [ESI]             ; 00461892
    SHL EAX,0x4                         ; 00461894
    SHL ECX,0x8                         ; 00461897
    MOV dword ptr [EDX + EAX*0x1 + 0x1c],ECX ; 0046189a
    MOV EBP,dword ptr [ESP + 0x8]       ; 0046189e
    XOR EAX,EAX                         ; 004618a2
    LEA ECX,[EBP*0x4 + 0x0]             ; 004618a4
    MOV AX,word ptr [EBX + 0xa]         ; 004618ab
    SUB ECX,EBP                         ; 004618af
    MOV EDX,EAX                         ; 004618b1
    SHL ECX,0x4                         ; 004618b3
    MOV EAX,dword ptr [ESI]             ; 004618b6
    SHL EDX,0x8                         ; 004618b8
    MOV dword ptr [ECX + EAX*0x1 + 0x18],EDX ; 004618bb
    MOV EBP,dword ptr [ESP + 0x8]       ; 004618bf
    MOV EAX,dword ptr [ESI]             ; 004618c3
    LEA ECX,[EBP*0x4 + 0x0]             ; 004618c5
    XOR EDX,EDX                         ; 004618cc
    SUB ECX,EBP                         ; 004618ce
    MOV DX,word ptr [EBX + 0x10]        ; 004618d0
    SHL ECX,0x4                         ; 004618d4
    SHL EDX,0x8                         ; 004618d7
    MOV dword ptr [ECX + EAX*0x1 + 0x1c],EDX ; 004618da
    PUSH 0x3                            ; 004618de
        ;   Label: LAB_004618de
    LEA EAX,[ESP + 0x4]                 ; 004618e0
    PUSH EAX                            ; 004618e4
    DEC EDI                             ; 004618e5
    ADD EBX,0x12                        ; 004618e6
    CALL engine_drender.cpp_renderTriangleTextured_FUN_00457a00 ; 004618e9
        ;   XREF to: 00457a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_renderTriangleTextured_FUN_00457a00(int * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 004618ee
    JMP 0x004617ef                      ; 004618f1
        ;   XREF to: 004617ef (UNCONDITIONAL_JUMP)  ; LAB_004617ef
    MOV ECX,0x463a79                    ; 004618f6
        ;   Label: LAB_004618f6
    MOV [0x01c039a0],EAX                ; 004618fb | g_RenderStateFlags
    MOV [0x01c039a4],EAX                ; 00461900 | g_VertexPreprocessMode
    MOV dword ptr [0x01c00c7c],ECX      ; 00461905 | g_ScanlineRenderFunc
    TEST EDI,EDI                        ; 0046190b
    JLE 0x00461760                      ; 0046190d
        ;   XREF to: 00461760 (CONDITIONAL_JUMP)  ; LAB_00461760
    XOR EAX,EAX                         ; 00461913
        ;   Label: LAB_00461913
    MOV AX,word ptr [EBX]               ; 00461915
    MOV dword ptr [ESP],EAX             ; 00461918
    XOR EAX,EAX                         ; 0046191b
    MOV AX,word ptr [EBX + 0x2]         ; 0046191d
    MOV dword ptr [ESP + 0x4],EAX       ; 00461921
    XOR EAX,EAX                         ; 00461925
    MOV AX,word ptr [EBX + 0x4]         ; 00461927
    PUSH 0x3                            ; 0046192b
    MOV dword ptr [ESP + 0xc],EAX       ; 0046192d
    LEA EAX,[ESP + 0x4]                 ; 00461931
    PUSH EAX                            ; 00461935
    DEC EDI                             ; 00461936
    ADD EBX,0x12                        ; 00461937
    CALL engine_drender.cpp_renderTriangleSimple_FUN_00458080 ; 0046193a
        ;   XREF to: 00458080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_renderTriangleSimple_FUN_00458080(CVector3i * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 0046193f
    TEST EDI,EDI                        ; 00461942
    JG 0x00461913                       ; 00461944
        ;   XREF to: 00461913 (CONDITIONAL_JUMP)  ; LAB_00461913
    ADD ESP,0x14                        ; 00461946
    POP EBP                             ; 00461949
    POP EDI                             ; 0046194a
    POP ESI                             ; 0046194b
    POP EBX                             ; 0046194c
    RET                                 ; 0046194d
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0046194e | g_ScanlineRenderFunc
        ;   Label: LAB_0046194e
    JMP 0x004617ce                      ; 00461958
        ;   XREF to: 004617ce (UNCONDITIONAL_JUMP)  ; LAB_004617ce
    XOR EBP,EBP                         ; 0046195d
        ;   Label: LAB_0046195d
    MOV dword ptr [ESP + 0xc],EBP       ; 0046195f
    TEST EDI,EDI                        ; 00461963
    JLE 0x004619c5                      ; 00461965
        ;   XREF to: 004619c5 (CONDITIONAL_JUMP)  ; LAB_004619c5
    MOV dword ptr [ESP + 0x10],EBP      ; 00461967
    PUSH EBX                            ; 0046196b
        ;   Label: LAB_0046196b
    CALL engine_prim.c_getTriangleWindingFromPackedIndices_FUN_004f9cb0 ; 0046196c
        ;   XREF to: 004f9cb0 (UNCONDITIONAL_CALL)  ; int engine_prim.c_getTriangleWindingFromPackedIndices_FUN_004f9cb0(STrianglePackedIndices * triangle)
    ADD ESP,0x4                         ; 00461971
    TEST EAX,EAX                        ; 00461974
    JZ 0x004619b5                       ; 00461976
        ;   XREF to: 004619b5 (CONDITIONAL_JUMP)  ; LAB_004619b5
    MOV EAX,dword ptr [ESP + 0x10]      ; 00461978
    INC EBP                             ; 0046197c
    LEA EDX,[EAX + 0x4]                 ; 0046197d
    MOV dword ptr [EAX + 0x5ae70c],EBX  ; 00461980 | g_VisibleFacePointers
    MOV dword ptr [ESP + 0x10],EDX      ; 00461986
    CMP EBP,0x7d0                       ; 0046198a
    JL 0x004619b5                       ; 00461990
        ;   XREF to: 004619b5 (CONDITIONAL_JUMP)  ; LAB_004619b5
    PUSH EBP                            ; 00461992
    MOV ECX,0x57dcfa                    ; 00461993 | = "..\\engine\\drender.cpp"
    MOV EAX,0x9e1                       ; 00461998
    PUSH 0x57dd10                       ; 0046199d | = "CDemonRenderer::demonGZFacetList - To..."
    MOV dword ptr [0x01cc4800],ECX      ; 004619a2 | g_CurrentFilename
    MOV [0x01cc4804],EAX                ; 004619a8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004619ad
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x8                         ; 004619b2
    MOV EDX,dword ptr [ESP + 0xc]       ; 004619b5
        ;   Label: LAB_004619b5
    INC EDX                             ; 004619b9
    ADD EBX,0x12                        ; 004619ba
    MOV dword ptr [ESP + 0xc],EDX       ; 004619bd
    CMP EDI,EDX                         ; 004619c1
    JG 0x0046196b                       ; 004619c3
        ;   XREF to: 0046196b (CONDITIONAL_JUMP)  ; LAB_0046196b
    TEST EBP,EBP                        ; 004619c5
        ;   Label: LAB_004619c5
    JLE 0x00461760                      ; 004619c7
        ;   XREF to: 00461760 (CONDITIONAL_JUMP)  ; LAB_00461760
    MOV EBX,dword ptr [0x01c039a0]      ; 004619cd | g_RenderStateFlags
    PUSH EBX                            ; 004619d3
    PUSH EBP                            ; 004619d4
    PUSH 0x5ae70c                       ; 004619d5 | g_VisibleFacePointers
    MOV EDI,dword ptr [ESI]             ; 004619da
    PUSH EDI                            ; 004619dc
    CALL engine_special.cpp_drawPolyList2_FUN_005327c0 ; 004619dd
        ;   XREF to: 005327c0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolyList2_FUN_005327c0(SRenderVertex * vertex_buffer, SInputFace * * polygons, int polygon_count, int render_flags)
    ADD ESP,0x10                        ; 004619e2
    ADD ESP,0x14                        ; 004619e5
    POP EBP                             ; 004619e8
    POP EDI                             ; 004619e9
    POP ESI                             ; 004619ea
    POP EBX                             ; 004619eb
    RET                                 ; 004619ec

