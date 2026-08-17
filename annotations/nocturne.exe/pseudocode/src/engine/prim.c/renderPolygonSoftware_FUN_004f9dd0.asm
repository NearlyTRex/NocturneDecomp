; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_renderPolygonSoftware_FUN_004f9dd0(SRenderVertex *vertices,int vertex_count)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_clipper.c_clipAndRasterize_FUN_00432cd0 at 00432ee5
;
; Referenced Globals:
;   void* switchdataD_004f9da8 = 004f9ee1
;   int INT_005b7644 = 0x1
;   int INT_005be1e4 = 0x4b0
;   undefined4 DAT_006b0278
;   undefined4 DAT_006b0280
;   SProjectionParams g_Projection
;   undefined4 g_Projection.neg_half_height_fixed
;   undefined4 g_Projection.center_x_fixed
;   undefined4 g_Projection.center_y_fixed
;   int g_UseExternalRenderer
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;   undefined4 DAT_01e52a68
;   undefined4 DAT_01e52a6c
;   undefined4 DAT_01e52eec
;   ... and 2 more
;
; Called Functions:
;   engine_prim.c_adjustNearPlaneTextureCoords_FUN_004f9960
;   engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10
;   engine_prim.c_findEdgeInBuffer_FUN_004f9830
;   engine_prim.c_normalizeTextureCoords_FUN_004f98e0
;   engine_prim.c_prepareDepthBuffer_FUN_004f9870
;   engine_prim.c_replaceWWithDepth_FUN_004f99d0
;   engine_special.cpp_drawPolygon_FUN_00532620
;   engine_special.cpp_renderScanline_FUN_00530710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9dd0
        ;   Label: engine_prim.c_renderPolygonSoftware_FUN_004f9dd0
    PUSH ESI                            ; 004f9dd1
    PUSH EDI                            ; 004f9dd2
    PUSH EBP                            ; 004f9dd3
    SUB ESP,0x14                        ; 004f9dd4
    CMP dword ptr [0x005b7644],0x0      ; 004f9dd7 | INT_005b7644
    JZ 0x004f9e47                       ; 004f9dde
        ;   XREF to: 004f9e47 (CONDITIONAL_JUMP)  ; LAB_004f9e47
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004f9de0
    MOV ECX,dword ptr [ESP + 0x28]      ; 004f9de4
    XOR ESI,ESI                         ; 004f9de8
    TEST EBX,EBX                        ; 004f9dea
    JLE 0x004f9e47                      ; 004f9dec
        ;   XREF to: 004f9e47 (CONDITIONAL_JUMP)  ; LAB_004f9e47
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004f9dee
    TEST byte ptr [ECX + 0x13],0x80     ; 004f9df2
        ;   Label: LAB_004f9df2
    JZ 0x004f9e3f                       ; 004f9df6
        ;   XREF to: 004f9e3f (CONDITIONAL_JUMP)  ; LAB_004f9e3f
    MOV EAX,0x7fffffff                  ; 004f9df8
    MOV EDX,EAX                         ; 004f9dfd
    MOV EBX,dword ptr [ECX + 0x8]       ; 004f9dff
    SAR EDX,0x1f                        ; 004f9e02
    IDIV EBX                            ; 004f9e05
    MOV dword ptr [ECX + 0xc],EAX       ; 004f9e07
    MOV EDX,dword ptr [0x01c00c48]      ; 004f9e0a | g_Projection
    MOV EBX,dword ptr [ECX + 0x8]       ; 004f9e10
    MOV EAX,dword ptr [ECX]             ; 004f9e13
    IMUL EDX                            ; 004f9e15
    IDIV EBX                            ; 004f9e17
    MOV EDX,dword ptr [0x01c00c50]      ; 004f9e19 | g_Projection.center_x_fixed
    ADD EAX,EDX                         ; 004f9e1f
    MOV EBX,dword ptr [ECX + 0x8]       ; 004f9e21
    MOV dword ptr [ECX + 0x10],EAX      ; 004f9e24
    MOV EDX,dword ptr [0x01c00c4c]      ; 004f9e27 | g_Projection.neg_half_height_fixed
    MOV EAX,dword ptr [ECX + 0x4]       ; 004f9e2d
    IMUL EDX                            ; 004f9e30
    IDIV EBX                            ; 004f9e32
    MOV EDX,dword ptr [0x01c00c54]      ; 004f9e34 | g_Projection.center_y_fixed
    ADD EAX,EDX                         ; 004f9e3a
    MOV dword ptr [ECX + 0x14],EAX      ; 004f9e3c
    INC ESI                             ; 004f9e3f
        ;   Label: LAB_004f9e3f
    ADD ECX,0x30                        ; 004f9e40
    CMP ESI,EDI                         ; 004f9e43
    JL 0x004f9df2                       ; 004f9e45
        ;   XREF to: 004f9df2 (CONDITIONAL_JUMP)  ; LAB_004f9df2
    CMP dword ptr [0x006b0280],0x0      ; 004f9e47 | DAT_006b0280
        ;   Label: LAB_004f9e47
    JZ 0x004f9eac                       ; 004f9e4e
        ;   XREF to: 004f9eac (CONDITIONAL_JUMP)  ; LAB_004f9eac
    MOV EDI,dword ptr [ESP + 0x28]      ; 004f9e50
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f9e54
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004f9e58
    ADD EDI,0x30                        ; 004f9e5c
    ADD EAX,0x60                        ; 004f9e5f
    CMP EDX,0x3                         ; 004f9e62
    JLE 0x004f9f7a                      ; 004f9e65
        ;   XREF to: 004f9f7a (CONDITIONAL_JUMP)  ; LAB_004f9f7a
    SUB EDX,0x2                         ; 004f9e6b
    MOV EBX,EAX                         ; 004f9e6e
    XOR ESI,ESI                         ; 004f9e70
    XOR EBP,EBP                         ; 004f9e72
    MOV dword ptr [ESP + 0x4],EDX       ; 004f9e74
    TEST EDX,EDX                        ; 004f9e78
    JLE 0x004f9ea2                      ; 004f9e7a
        ;   XREF to: 004f9ea2 (CONDITIONAL_JUMP)  ; LAB_004f9ea2
    PUSH EBX                            ; 004f9e7c
        ;   Label: LAB_004f9e7c
    PUSH EDI                            ; 004f9e7d
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f9e7e
    PUSH EAX                            ; 004f9e82
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 004f9e83
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 004f9e88
    TEST EAX,EAX                        ; 004f9e8b
    JZ 0x004f9f74                       ; 004f9e8d
        ;   XREF to: 004f9f74 (CONDITIONAL_JUMP)  ; LAB_004f9f74
    MOV EDX,dword ptr [ESP + 0x4]       ; 004f9e93
        ;   Label: LAB_004f9e93
    ADD EDI,0x30                        ; 004f9e97
    INC ESI                             ; 004f9e9a
    ADD EBX,0x30                        ; 004f9e9b
    CMP ESI,EDX                         ; 004f9e9e
    JL 0x004f9e7c                       ; 004f9ea0
        ;   XREF to: 004f9e7c (CONDITIONAL_JUMP)  ; LAB_004f9e7c
    CMP EBP,dword ptr [ESP + 0x4]       ; 004f9ea2
        ;   Label: LAB_004f9ea2
    JZ 0x004f9f6c                       ; 004f9ea6
        ;   XREF to: 004f9f6c (CONDITIONAL_JUMP)  ; LAB_004f9f6c
    MOV EDX,dword ptr [0x01e52ef8]      ; 004f9eac | g_RenderedTriangleCount
        ;   Label: LAB_004f9eac
    INC EDX                             ; 004f9eb2
    MOV ECX,dword ptr [0x01c02594]      ; 004f9eb3 | g_UseExternalRenderer
    MOV dword ptr [0x01e52ef8],EDX      ; 004f9eb9 | g_RenderedTriangleCount
    TEST ECX,ECX                        ; 004f9ebf
    JZ 0x004f9ed0                       ; 004f9ec1
        ;   XREF to: 004f9ed0 (CONDITIONAL_JUMP)  ; LAB_004f9ed0
    CMP dword ptr [0x006b0278],0x0      ; 004f9ec3 | DAT_006b0278
    JZ 0x004f9f99                       ; 004f9eca
        ;   XREF to: 004f9f99 (CONDITIONAL_JUMP)  ; LAB_004f9f99
    MOV EAX,[0x01c039a4]                ; 004f9ed0 | g_VertexPreprocessMode
        ;   Label: LAB_004f9ed0
    CMP EAX,0x6                         ; 004f9ed5
    JA 0x004f9ee1                       ; 004f9ed8
        ;   XREF to: 004f9ee1 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EAX*0x4 + 0x4f9da8]  ; 004f9eda | caseD_4 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x4b0                       ; 004f9ee1
        ;   Label: caseD_0
    XOR EDX,EDX                         ; 004f9ee6
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004f9ee8
    MOV dword ptr [0x01e52ef0],EDX      ; 004f9eec | DAT_01e52ef0
    MOV dword ptr [0x01e52a68],EDX      ; 004f9ef2 | DAT_01e52a68
    MOV dword ptr [ESP + 0x8],EDX       ; 004f9ef8
    MOV [0x01e52eec],EAX                ; 004f9efc | DAT_01e52eec
    TEST ESI,ESI                        ; 004f9f01
    JLE 0x004f9f51                      ; 004f9f03
        ;   XREF to: 004f9f51 (CONDITIONAL_JUMP)  ; LAB_004f9f51
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f9f05
        ;   Label: LAB_004f9f05
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004f9f09
    INC EAX                             ; 004f9f0d
    CMP EAX,EBP                         ; 004f9f0e
    JL 0x004f9f14                       ; 004f9f10
        ;   XREF to: 004f9f14 (CONDITIONAL_JUMP)  ; LAB_004f9f14
    XOR EAX,EAX                         ; 004f9f12
    IMUL EAX,EAX,0x30                   ; 004f9f14
        ;   Label: LAB_004f9f14
    MOV EBP,dword ptr [ESP + 0x28]      ; 004f9f17
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f9f1b
    ADD EBP,EAX                         ; 004f9f1f
    IMUL EAX,EDX,0x30                   ; 004f9f21
    ADD EAX,dword ptr [ESP + 0x28]      ; 004f9f24
    MOV EDI,EBP                         ; 004f9f28
    MOV ESI,dword ptr [EAX + 0x14]      ; 004f9f2a
    MOV ECX,dword ptr [EBP + 0x14]      ; 004f9f2d
    SAR ESI,0x10                        ; 004f9f30
    SAR ECX,0x10                        ; 004f9f33
    MOV EBX,EAX                         ; 004f9f36
    CMP ESI,ECX                         ; 004f9f38
    JNZ 0x004fa02d                      ; 004f9f3a
        ;   XREF to: 004fa02d (CONDITIONAL_JUMP)  ; LAB_004fa02d
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f9f40
        ;   Label: LAB_004f9f40
    INC EDX                             ; 004f9f44
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004f9f45
    MOV dword ptr [ESP + 0x8],EDX       ; 004f9f49
    CMP EDX,ECX                         ; 004f9f4d
    JL 0x004f9f05                       ; 004f9f4f
        ;   XREF to: 004f9f05 (CONDITIONAL_JUMP)  ; LAB_004f9f05
    PUSH 0x0                            ; 004f9f51
        ;   Label: LAB_004f9f51
    MOV EBX,dword ptr [0x01e52eec]      ; 004f9f53 | DAT_01e52eec
    PUSH EBX                            ; 004f9f59
    CALL engine_prim.c_findEdgeInBuffer_FUN_004f9830 ; 004f9f5a
        ;   XREF to: 004f9830 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_004f9830(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 004f9f5f
    MOV EBP,EAX                         ; 004f9f62
    TEST EAX,EAX                        ; 004f9f64
    JNZ 0x004fa1a4                      ; 004f9f66
        ;   XREF to: 004fa1a4 (CONDITIONAL_JUMP)  ; LAB_004fa1a4
    ADD ESP,0x14                        ; 004f9f6c
        ;   Label: LAB_004f9f6c
    POP EBP                             ; 004f9f6f
    POP EDI                             ; 004f9f70
    POP ESI                             ; 004f9f71
    POP EBX                             ; 004f9f72
    RET                                 ; 004f9f73
    INC EBP                             ; 004f9f74
        ;   Label: LAB_004f9f74
    JMP 0x004f9e93                      ; 004f9f75
        ;   XREF to: 004f9e93 (UNCONDITIONAL_JUMP)  ; LAB_004f9e93
    PUSH EAX                            ; 004f9f7a
        ;   Label: LAB_004f9f7a
    PUSH EDI                            ; 004f9f7b
    MOV ECX,dword ptr [ESP + 0x30]      ; 004f9f7c
    PUSH ECX                            ; 004f9f80
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 004f9f81
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 004f9f86
    TEST EAX,EAX                        ; 004f9f89
    JNZ 0x004f9eac                      ; 004f9f8b
        ;   XREF to: 004f9eac (CONDITIONAL_JUMP)  ; LAB_004f9eac
    ADD ESP,0x14                        ; 004f9f91
    POP EBP                             ; 004f9f94
    POP EDI                             ; 004f9f95
    POP ESI                             ; 004f9f96
    POP EBX                             ; 004f9f97
    RET                                 ; 004f9f98
    MOV EDI,dword ptr [0x01c039a0]      ; 004f9f99 | g_RenderStateFlags
        ;   Label: LAB_004f9f99
    PUSH EDI                            ; 004f9f9f
    MOV EBP,dword ptr [ESP + 0x30]      ; 004f9fa0
    PUSH EBP                            ; 004f9fa4
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f9fa5
    PUSH EAX                            ; 004f9fa9
    CALL engine_special.cpp_drawPolygon_FUN_00532620 ; 004f9faa
        ;   XREF to: 00532620 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon_FUN_00532620(SRenderVertex * vertices, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 004f9faf
    ADD ESP,0x14                        ; 004f9fb2
    POP EBP                             ; 004f9fb5
    POP EDI                             ; 004f9fb6
    POP ESI                             ; 004f9fb7
    POP EBX                             ; 004f9fb8
    RET                                 ; 004f9fb9
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004f9fba
        ;   Label: caseD_1
    PUSH EDI                            ; 004f9fbe
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004f9fbf
    PUSH EBP                            ; 004f9fc3
    CALL engine_prim.c_prepareDepthBuffer_FUN_004f9870 ; 004f9fc4
        ;   XREF to: 004f9870 (UNCONDITIONAL_CALL)  ; void engine_prim.c_prepareDepthBuffer_FUN_004f9870(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004f9fc9
    JMP 0x004f9ee1                      ; 004f9fcc
        ;   XREF to: 004f9ee1 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004f9fd1
        ;   Label: caseD_2
    PUSH EBX                            ; 004f9fd5
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004f9fd6
    PUSH ESI                            ; 004f9fda
    CALL engine_prim.c_normalizeTextureCoords_FUN_004f98e0 ; 004f9fdb
        ;   XREF to: 004f98e0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_normalizeTextureCoords_FUN_004f98e0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004f9fe0
    JMP 0x004f9ee1                      ; 004f9fe3
        ;   XREF to: 004f9ee1 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004f9fe8
        ;   Label: caseD_3
    PUSH EDX                            ; 004f9fec
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004f9fed
    PUSH ECX                            ; 004f9ff1
    CALL engine_prim.c_adjustNearPlaneTextureCoords_FUN_004f9960 ; 004f9ff2
        ;   XREF to: 004f9960 (UNCONDITIONAL_CALL)  ; void engine_prim.c_adjustNearPlaneTextureCoords_FUN_004f9960(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004f9ff7
    JMP 0x004f9ee1                      ; 004f9ffa
        ;   XREF to: 004f9ee1 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004f9fff
        ;   Label: caseD_5
    PUSH EBP                            ; 004fa003
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004fa004
    PUSH EAX                            ; 004fa008
    CALL engine_prim.c_normalizeTextureCoords_FUN_004f98e0 ; 004fa009
        ;   XREF to: 004f98e0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_normalizeTextureCoords_FUN_004f98e0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004fa00e
    JMP 0x004f9ee1                      ; 004fa011
        ;   XREF to: 004f9ee1 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004fa016
        ;   Label: caseD_6
    PUSH ESI                            ; 004fa01a
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004fa01b
    PUSH EDI                            ; 004fa01f
    CALL engine_prim.c_replaceWWithDepth_FUN_004f99d0 ; 004fa020
        ;   XREF to: 004f99d0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_004f99d0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004fa025
    JMP 0x004f9ee1                      ; 004fa028
        ;   XREF to: 004f9ee1 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [EAX + 0x14]      ; 004fa02d
        ;   Label: LAB_004fa02d
    CMP EDX,dword ptr [EBP + 0x14]      ; 004fa030
    JLE 0x004fa03f                      ; 004fa033
        ;   XREF to: 004fa03f (CONDITIONAL_JUMP)  ; LAB_004fa03f
    MOV EDI,EAX                         ; 004fa035
    MOV EBX,EBP                         ; 004fa037
    MOV EAX,ESI                         ; 004fa039
    MOV ESI,ECX                         ; 004fa03b
    MOV ECX,EAX                         ; 004fa03d
    IMUL EBP,dword ptr [0x01e52a68],0x48 ; 004fa03f | DAT_01e52a68
        ;   Label: LAB_004fa03f
    ADD EBP,0x1e52a6c                   ; 004fa046
    MOV dword ptr [EBP],ESI             ; 004fa04c | DAT_01e52a6c
    MOV EDX,dword ptr [0x01e52eec]      ; 004fa04f | DAT_01e52eec
    MOV dword ptr [EBP + 0x4],ECX       ; 004fa055
    CMP ESI,EDX                         ; 004fa058
    JGE 0x004fa062                      ; 004fa05a
        ;   XREF to: 004fa062 (CONDITIONAL_JUMP)  ; LAB_004fa062
    MOV dword ptr [0x01e52eec],ESI      ; 004fa05c | DAT_01e52eec
    CMP ECX,dword ptr [0x01e52ef0]      ; 004fa062 | DAT_01e52ef0
        ;   Label: LAB_004fa062
    JLE 0x004fa070                      ; 004fa068
        ;   XREF to: 004fa070 (CONDITIONAL_JUMP)  ; LAB_004fa070
    MOV dword ptr [0x01e52ef0],ECX      ; 004fa06a | DAT_01e52ef0
    MOV EAX,dword ptr [EBX + 0x14]      ; 004fa070
        ;   Label: LAB_004fa070
    MOV ECX,dword ptr [EDI + 0x14]      ; 004fa073
    SUB ECX,EAX                         ; 004fa076
    CMP ECX,0x10000                     ; 004fa078
    JNC 0x004fa194                      ; 004fa07e
        ;   XREF to: 004fa194 (CONDITIONAL_JUMP)  ; LAB_004fa194
    XOR ECX,ECX                         ; 004fa084
    MOV EAX,dword ptr [EDI + 0x10]      ; 004fa086
        ;   Label: LAB_004fa086
    MOV EDX,dword ptr [EBX + 0x10]      ; 004fa089
    MOV ESI,dword ptr [EBX + 0x14]      ; 004fa08c
    SUB EAX,EDX                         ; 004fa08f
    AND ESI,0xffff                      ; 004fa091
    MOV EDX,EAX                         ; 004fa097
    MOV EAX,ECX                         ; 004fa099
    XOR SI,0xffff                       ; 004fa09b
    IMUL EDX                            ; 004fa09f
    SHRD EAX,EDX,0x10                   ; 004fa0a1
    MOV EDX,EAX                         ; 004fa0a5
    MOV dword ptr [EBP + 0xc],EAX       ; 004fa0a7
    MOV EAX,ESI                         ; 004fa0aa
    IMUL EDX                            ; 004fa0ac
    SHRD EAX,EDX,0x10                   ; 004fa0ae
    MOV dword ptr [ESP],EAX             ; 004fa0b2
    MOV EDX,dword ptr [ESP]             ; 004fa0b5
    MOV EAX,dword ptr [EBX + 0x10]      ; 004fa0b8
    ADD EAX,EDX                         ; 004fa0bb
    MOV dword ptr [EBP + 0x8],EAX       ; 004fa0bd
    MOV EAX,dword ptr [EDI + 0x18]      ; 004fa0c0
    MOV EDX,dword ptr [EBX + 0x18]      ; 004fa0c3
    SUB EAX,EDX                         ; 004fa0c6
    MOV EDX,EAX                         ; 004fa0c8
    MOV EAX,ECX                         ; 004fa0ca
    IMUL EDX                            ; 004fa0cc
    SHRD EAX,EDX,0x10                   ; 004fa0ce
    MOV EDX,EAX                         ; 004fa0d2
    MOV dword ptr [EBP + 0x1c],EAX      ; 004fa0d4
    MOV EAX,ESI                         ; 004fa0d7
    IMUL EDX                            ; 004fa0d9
    SHRD EAX,EDX,0x10                   ; 004fa0db
    MOV dword ptr [ESP],EAX             ; 004fa0df
    MOV EDX,dword ptr [ESP]             ; 004fa0e2
    MOV EAX,dword ptr [EBX + 0x18]      ; 004fa0e5
    ADD EAX,EDX                         ; 004fa0e8
    MOV dword ptr [EBP + 0x18],EAX      ; 004fa0ea
    MOV EAX,dword ptr [EDI + 0x1c]      ; 004fa0ed
    MOV EDX,dword ptr [EBX + 0x1c]      ; 004fa0f0
    SUB EAX,EDX                         ; 004fa0f3
    MOV EDX,EAX                         ; 004fa0f5
    MOV EAX,ECX                         ; 004fa0f7
    IMUL EDX                            ; 004fa0f9
    SHRD EAX,EDX,0x10                   ; 004fa0fb
    MOV EDX,EAX                         ; 004fa0ff
    MOV dword ptr [EBP + 0x24],EAX      ; 004fa101
    MOV EAX,ESI                         ; 004fa104
    IMUL EDX                            ; 004fa106
    SHRD EAX,EDX,0x10                   ; 004fa108
    MOV dword ptr [ESP],EAX             ; 004fa10c
    MOV EDX,dword ptr [ESP]             ; 004fa10f
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004fa112
    ADD EAX,EDX                         ; 004fa115
    MOV dword ptr [EBP + 0x20],EAX      ; 004fa117
    MOV EAX,dword ptr [EDI + 0x20]      ; 004fa11a
    MOV EDX,dword ptr [EBX + 0x20]      ; 004fa11d
    SUB EAX,EDX                         ; 004fa120
    MOV EDX,EAX                         ; 004fa122
    MOV EAX,ECX                         ; 004fa124
    IMUL EDX                            ; 004fa126
    SHRD EAX,EDX,0x10                   ; 004fa128
    MOV EDX,EAX                         ; 004fa12c
    MOV dword ptr [EBP + 0x14],EAX      ; 004fa12e
    MOV EAX,ESI                         ; 004fa131
    IMUL EDX                            ; 004fa133
    SHRD EAX,EDX,0x10                   ; 004fa135
    MOV EDX,dword ptr [EBX + 0x20]      ; 004fa139
    ADD EDX,EAX                         ; 004fa13c
    MOV dword ptr [EBP + 0x10],EDX      ; 004fa13e
    MOV EDX,dword ptr [EDI + 0x2c]      ; 004fa141
    SUB EDX,dword ptr [EBX + 0x2c]      ; 004fa144
    MOV EAX,ECX                         ; 004fa147
    IMUL EDX                            ; 004fa149
    SHRD EAX,EDX,0x10                   ; 004fa14b
    MOV EDX,EAX                         ; 004fa14f
    MOV dword ptr [EBP + 0x34],EAX      ; 004fa151
    MOV EAX,ESI                         ; 004fa154
    IMUL EDX                            ; 004fa156
    SHRD EAX,EDX,0x10                   ; 004fa158
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004fa15c
    ADD EDX,EAX                         ; 004fa15f
    MOV dword ptr [EBP + 0x30],EDX      ; 004fa161
    MOV EDX,dword ptr [EDI + 0x8]       ; 004fa164
    MOV EDI,dword ptr [EBX + 0x8]       ; 004fa167
    MOV EAX,ECX                         ; 004fa16a
    SUB EDX,EDI                         ; 004fa16c
    IMUL EDX                            ; 004fa16e
    SHRD EAX,EDX,0x10                   ; 004fa170
    MOV EDX,EAX                         ; 004fa174
    MOV dword ptr [EBP + 0x2c],EAX      ; 004fa176
    MOV EAX,ESI                         ; 004fa179
    IMUL EDX                            ; 004fa17b
    SHRD EAX,EDX,0x10                   ; 004fa17d
    MOV EDX,dword ptr [EBX + 0x8]       ; 004fa181
    ADD EDX,EAX                         ; 004fa184
    MOV dword ptr [EBP + 0x28],EDX      ; 004fa186
    INC dword ptr [0x01e52a68]          ; 004fa189 | DAT_01e52a68
    JMP 0x004f9f40                      ; 004fa18f
        ;   XREF to: 004f9f40 (UNCONDITIONAL_JUMP)  ; LAB_004f9f40
    MOV EAX,0xffffffff                  ; 004fa194
        ;   Label: LAB_004fa194
    XOR EDX,EDX                         ; 004fa199
    DIV ECX                             ; 004fa19b
    MOV ECX,EAX                         ; 004fa19d
    JMP 0x004fa086                      ; 004fa19f
        ;   XREF to: 004fa086 (UNCONDITIONAL_JUMP)  ; LAB_004fa086
    PUSH EAX                            ; 004fa1a4
        ;   Label: LAB_004fa1a4
    MOV ESI,dword ptr [0x01e52eec]      ; 004fa1a5 | DAT_01e52eec
    PUSH ESI                            ; 004fa1ab
    CALL engine_prim.c_findEdgeInBuffer_FUN_004f9830 ; 004fa1ac
        ;   XREF to: 004f9830 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_004f9830(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 004fa1b1
    MOV dword ptr [ESP + 0x10],EAX      ; 004fa1b4
    TEST EAX,EAX                        ; 004fa1b8
    JZ 0x004f9f6c                       ; 004fa1ba
        ;   XREF to: 004f9f6c (CONDITIONAL_JUMP)  ; LAB_004f9f6c
    MOV EAX,[0x01e52eec]                ; 004fa1c0 | DAT_01e52eec
    MOV EDI,dword ptr [0x005be1e4]      ; 004fa1c5 | INT_005be1e4
    MOV dword ptr [ESP + 0xc],EAX       ; 004fa1cb
    CMP EAX,EDI                         ; 004fa1cf
    JGE 0x004f9f6c                      ; 004fa1d1
        ;   XREF to: 004f9f6c (CONDITIONAL_JUMP)  ; LAB_004f9f6c
        ;   Label: LAB_004fa1d1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fa1d7
    CMP EAX,dword ptr [EBP + 0x4]       ; 004fa1db
    JGE 0x004fa2b9                      ; 004fa1de
        ;   XREF to: 004fa2b9 (CONDITIONAL_JUMP)  ; LAB_004fa2b9
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fa1e4
        ;   Label: LAB_004fa1e4
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fa1e8
    CMP EAX,dword ptr [EDX + 0x4]       ; 004fa1ec
    JL 0x004fa20d                       ; 004fa1ef
        ;   XREF to: 004fa20d (CONDITIONAL_JUMP)  ; LAB_004fa20d
    PUSH EBP                            ; 004fa1f1
    PUSH EAX                            ; 004fa1f2
    MOV dword ptr [EDX],0xffffffff      ; 004fa1f3
    CALL engine_prim.c_findEdgeInBuffer_FUN_004f9830 ; 004fa1f9
        ;   XREF to: 004f9830 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_004f9830(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 004fa1fe
    MOV dword ptr [ESP + 0x10],EAX      ; 004fa201
    TEST EAX,EAX                        ; 004fa205
    JZ 0x004f9f6c                       ; 004fa207
        ;   XREF to: 004f9f6c (CONDITIONAL_JUMP)  ; LAB_004f9f6c
    MOV EDI,dword ptr [ESP + 0x10]      ; 004fa20d
        ;   Label: LAB_004fa20d
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fa211
    MOV ESI,EBP                         ; 004fa215
    CALL engine_special.cpp_renderScanline_FUN_00530710 ; 004fa217
        ;   XREF to: 00530710 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderScanline_FUN_00530710(SSoftwareEdge * left, SSoftwareEdge * right, int scanline_y)
    MOV EAX,dword ptr [EBP + 0xc]       ; 004fa21c
    ADD dword ptr [EBP + 0x8],EAX       ; 004fa21f
    MOV ECX,dword ptr [EBP + 0x18]      ; 004fa222
    MOV EBX,dword ptr [EBP + 0x20]      ; 004fa225
    MOV ESI,dword ptr [EBP + 0x10]      ; 004fa228
    MOV EDI,dword ptr [EBP + 0x28]      ; 004fa22b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004fa22e
    MOV EDX,dword ptr [EBP + 0x30]      ; 004fa231
    ADD ECX,EAX                         ; 004fa234
    MOV EAX,dword ptr [EBP + 0x24]      ; 004fa236
    MOV dword ptr [EBP + 0x18],ECX      ; 004fa239
    ADD EBX,EAX                         ; 004fa23c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fa23e
    MOV dword ptr [EBP + 0x20],EBX      ; 004fa241
    ADD ESI,EAX                         ; 004fa244
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004fa246
    MOV dword ptr [EBP + 0x10],ESI      ; 004fa249
    ADD EDI,EAX                         ; 004fa24c
    MOV EAX,dword ptr [EBP + 0x34]      ; 004fa24e
    MOV dword ptr [EBP + 0x28],EDI      ; 004fa251
    ADD EDX,EAX                         ; 004fa254
    MOV EAX,dword ptr [ESP + 0x10]      ; 004fa256
    MOV dword ptr [EBP + 0x30],EDX      ; 004fa25a
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fa25d
    MOV EAX,dword ptr [EAX + 0xc]       ; 004fa261
    MOV ECX,dword ptr [EDX + 0x8]       ; 004fa264
    MOV EBX,dword ptr [EDX + 0x18]      ; 004fa267
    ADD ECX,EAX                         ; 004fa26a
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004fa26c
    MOV dword ptr [EDX + 0x8],ECX       ; 004fa26f
    ADD EBX,EAX                         ; 004fa272
    MOV dword ptr [EDX + 0x18],EBX      ; 004fa274
    MOV ESI,dword ptr [EDX + 0x20]      ; 004fa277
    MOV EDI,dword ptr [EDX + 0x10]      ; 004fa27a
    MOV ECX,dword ptr [EDX + 0x28]      ; 004fa27d
    MOV EAX,dword ptr [EDX + 0x24]      ; 004fa280
    MOV EBX,dword ptr [EDX + 0x30]      ; 004fa283
    ADD ESI,EAX                         ; 004fa286
    MOV EAX,dword ptr [EDX + 0x14]      ; 004fa288
    MOV dword ptr [EDX + 0x20],ESI      ; 004fa28b
    MOV ESI,dword ptr [ESP + 0xc]       ; 004fa28e
    ADD EDI,EAX                         ; 004fa292
    INC ESI                             ; 004fa294
    MOV EAX,dword ptr [EDX + 0x2c]      ; 004fa295
    MOV dword ptr [EDX + 0x10],EDI      ; 004fa298
    MOV EDI,dword ptr [0x005be1e4]      ; 004fa29b | INT_005be1e4
    ADD ECX,EAX                         ; 004fa2a1
    MOV EAX,dword ptr [EDX + 0x34]      ; 004fa2a3
    MOV dword ptr [EDX + 0x28],ECX      ; 004fa2a6
    ADD EBX,EAX                         ; 004fa2a9
    MOV dword ptr [ESP + 0xc],ESI       ; 004fa2ab
    MOV dword ptr [EDX + 0x30],EBX      ; 004fa2af
    CMP ESI,EDI                         ; 004fa2b2
    JMP 0x004fa1d1                      ; 004fa2b4
        ;   XREF to: 004fa1d1 (UNCONDITIONAL_JUMP)  ; LAB_004fa1d1
    MOV ECX,dword ptr [ESP + 0x10]      ; 004fa2b9
        ;   Label: LAB_004fa2b9
    PUSH ECX                            ; 004fa2bd
    PUSH EAX                            ; 004fa2be
    MOV dword ptr [EBP],0xffffffff      ; 004fa2bf
    CALL engine_prim.c_findEdgeInBuffer_FUN_004f9830 ; 004fa2c6
        ;   XREF to: 004f9830 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_004f9830(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 004fa2cb
    MOV EBP,EAX                         ; 004fa2ce
    TEST EAX,EAX                        ; 004fa2d0
    JZ 0x004f9f6c                       ; 004fa2d2
        ;   XREF to: 004f9f6c (CONDITIONAL_JUMP)  ; LAB_004f9f6c
    JMP 0x004fa1e4                      ; 004fa2d8
        ;   XREF to: 004fa1e4 (UNCONDITIONAL_JUMP)  ; LAB_004fa1e4

