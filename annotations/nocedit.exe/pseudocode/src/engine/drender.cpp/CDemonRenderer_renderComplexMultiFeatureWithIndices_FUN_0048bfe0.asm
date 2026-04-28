; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderComplexMultiFeatureWithIndices_FUN_0048bfe0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
; Local Variables:
; uint             Stack[-0x14]:4  local_14
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

    PUSH EBX                            ; 0048bfe0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderComplexMultiFeatureWithIndices_FUN_0048bfe0
    PUSH ESI                            ; 0048bfe1
    PUSH EDI                            ; 0048bfe2
    PUSH EBP                            ; 0048bfe3
    SUB ESP,0x4                         ; 0048bfe4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0048bfe7
    CMP dword ptr [EBX + 0xc],0x0       ; 0048bfeb
    JNZ 0x0048c08e                      ; 0048bfef
        ;   XREF to: 0048c08e (CONDITIONAL_JUMP)  ; LAB_0048c08e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048bff5
        ;   Label: LAB_0048bff5
    MOV ECX,0xffffffff                  ; 0048bff9
    XOR EDX,EDX                         ; 0048bffe
    MOV ESI,dword ptr [EAX + 0x4]       ; 0048c000
    MOV dword ptr [ESP],ECX             ; 0048c003
    TEST ESI,ESI                        ; 0048c006
    JLE 0x0048c040                      ; 0048c008
        ;   XREF to: 0048c040 (CONDITIONAL_JUMP)  ; LAB_0048c040
    XOR ECX,ECX                         ; 0048c00a
    MOV ESI,dword ptr [EAX + 0x18]      ; 0048c00c
        ;   Label: LAB_0048c00c
    MOV dword ptr [ECX + 0x2c6d5ac],ESI ; 0048c00f | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
    IMUL ESI,ESI,0x30                   ; 0048c015
    MOV EDI,dword ptr [EBX]             ; 0048c018
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0048c01a
    MOV EDI,dword ptr [ESP]             ; 0048c01e
    ADD ECX,0x4                         ; 0048c021
    AND EDI,ESI                         ; 0048c024
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048c026
    ADD EAX,0xc                         ; 0048c02a
    INC EDX                             ; 0048c02d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048c02e
    MOV dword ptr [ESP],EDI             ; 0048c031
    CMP EDX,EBP                         ; 0048c034
    JL 0x0048c00c                       ; 0048c036
        ;   XREF to: 0048c00c (CONDITIONAL_JUMP)  ; LAB_0048c00c
    LEA EAX,[EAX]                       ; 0048c038
    MOV EDX,EDX                         ; 0048c03e
    TEST byte ptr [ESP + 0x3],0x80      ; 0048c040
        ;   Label: LAB_0048c040
    JZ 0x0048c04d                       ; 0048c045
        ;   XREF to: 0048c04d (CONDITIONAL_JUMP)  ; LAB_0048c04d
    TEST byte ptr [ESP],0x1f            ; 0048c047
    JNZ 0x0048c086                      ; 0048c04b
        ;   XREF to: 0048c086 (CONDITIONAL_JUMP)  ; LAB_0048c086
    CMP dword ptr [EBX + 0x4],0x0       ; 0048c04d
        ;   Label: LAB_0048c04d
    JZ 0x0048c0a7                       ; 0048c051
        ;   XREF to: 0048c0a7 (CONDITIONAL_JUMP)  ; LAB_0048c0a7
    XOR ESI,ESI                         ; 0048c053
    MOV ECX,0x49072f                    ; 0048c055
    MOV dword ptr [0x02d052a0],ESI      ; 0048c05a | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],ESI      ; 0048c060 | g_VertexPreprocessMode
    MOV dword ptr [0x02d0257c],ECX      ; 0048c066 | g_ScanlineRenderFunc
    LEA EAX,[EAX]                       ; 0048c06c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048c070
        ;   Label: LAB_0048c070
    PUSH 0x2c6d5ac                      ; 0048c074 | g_VertexIndexBuffer
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048c079
    PUSH EDX                            ; 0048c07c
    PUSH EBX                            ; 0048c07d
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048c07e
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048c083
    ADD ESP,0x4                         ; 0048c086
        ;   Label: LAB_0048c086
    POP EBP                             ; 0048c089
    POP EDI                             ; 0048c08a
    POP ESI                             ; 0048c08b
    POP EBX                             ; 0048c08c
    RET                                 ; 0048c08d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048c08e
        ;   Label: LAB_0048c08e
    ADD EAX,0x8                         ; 0048c092
    PUSH EAX                            ; 0048c095
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048c096
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048c09b
    TEST EAX,EAX                        ; 0048c09e
    JZ 0x0048c086                       ; 0048c0a0
        ;   XREF to: 0048c086 (CONDITIONAL_JUMP)  ; LAB_0048c086
    JMP 0x0048bff5                      ; 0048c0a2
        ;   XREF to: 0048bff5 (UNCONDITIONAL_JUMP)  ; LAB_0048bff5
    CMP dword ptr [0x0067939c],0x20     ; 0048c0a7 | g_BitsPerPixel
        ;   Label: LAB_0048c0a7
    JNZ 0x0048c116                      ; 0048c0ae
        ;   XREF to: 0048c116 (CONDITIONAL_JUMP)  ; LAB_0048c116
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048c0b0 | g_ScanlineRenderFunc
    MOV EDI,0x327                       ; 0048c0ba
        ;   Label: LAB_0048c0ba
    XOR EBP,EBP                         ; 0048c0bf
    MOV EAX,dword ptr [EBX + 0x20]      ; 0048c0c1
    MOV dword ptr [0x02d052a4],EBP      ; 0048c0c4 | g_VertexPreprocessMode
    MOV dword ptr [0x02d052a0],EDI      ; 0048c0ca | g_RenderStateFlags
    TEST EAX,EAX                        ; 0048c0d0
    JNZ 0x0048c070                      ; 0048c0d2
        ;   XREF to: 0048c070 (CONDITIONAL_JUMP)  ; LAB_0048c070
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048c0d4
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048c0d8
    XOR ECX,ECX                         ; 0048c0db
    TEST EDX,EDX                        ; 0048c0dd
    JLE 0x0048c070                      ; 0048c0df
        ;   XREF to: 0048c070 (CONDITIONAL_JUMP)  ; LAB_0048c070
    XOR EDX,EDX                         ; 0048c0e1
    MOV ESI,dword ptr [EDX + 0x2c6d5ac] ; 0048c0e3 | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
        ;   Label: LAB_0048c0e3
    IMUL ESI,ESI,0x30                   ; 0048c0e9
    MOV EDI,dword ptr [EBX]             ; 0048c0ec
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0048c0ee
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0048c0f1
    MOV EDI,dword ptr [EBX]             ; 0048c0f5
    ADD EDI,ESI                         ; 0048c0f7
    MOV ESI,dword ptr [EAX + 0x20]      ; 0048c0f9
    MOV dword ptr [EDI + 0x1c],ESI      ; 0048c0fc
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048c0ff
    ADD EAX,0xc                         ; 0048c103
    INC ECX                             ; 0048c106
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048c107
    ADD EDX,0x4                         ; 0048c10a
    CMP ECX,EBP                         ; 0048c10d
    JL 0x0048c0e3                       ; 0048c10f
        ;   XREF to: 0048c0e3 (CONDITIONAL_JUMP)  ; LAB_0048c0e3
    JMP 0x0048c070                      ; 0048c111
        ;   XREF to: 0048c070 (UNCONDITIONAL_JUMP)  ; LAB_0048c070
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048c116 | g_ScanlineRenderFunc
        ;   Label: LAB_0048c116
    JMP 0x0048c0ba                      ; 0048c120
        ;   XREF to: 0048c0ba (UNCONDITIONAL_JUMP)  ; LAB_0048c0ba

