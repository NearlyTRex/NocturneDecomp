; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_renderIndexedPolygonSoftware_FUN_00552a40(int *vertex_indices,int vertex_count)
;
; Parameters:
; int *            Stack[0x4]:4   vertex_indices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; SRenderVertex *[16] Stack[-0x64]:64  local_64
; uint             Stack[-0x24]:4  local_24
; int *            Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; SSoftwareEdge *  Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_clipper.c_clipAndRasterize_FUN_004371b0 at 004371df
;
; Referenced Globals:
;   int g_MaxViewportScanline = 0x4b0
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.inv_z
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 g_RenderVertexBuffer[0].r
;   undefined4 g_RenderVertexBuffer[0].a
;   int g_TexturesDisabled
;   int g_CullingMode
;   int g_UseExternalRenderer
;   int g_ProcessorType
;   _BIT_INTEGER32 g_RenderStateFlags
;   ... and 19 more
;
; Called Functions:
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
;   engine_prim.c_findEdgeInBuffer_FUN_00551f70
;   wincore_windll.cpp_drawPolygon2_FUN_005b7610
;   wincore_windll.cpp_renderScanline_FUN_005b5710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552a40
        ;   Label: engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40
    PUSH ESI                            ; 00552a41
    PUSH EDI                            ; 00552a42
    PUSH EBP                            ; 00552a43
    SUB ESP,0x54                        ; 00552a44
    CMP dword ptr [0x00772a7c],0x0      ; 00552a47 | g_CullingMode
    JZ 0x00552aad                       ; 00552a4e
        ;   XREF to: 00552aad (CONDITIONAL_JUMP)  ; LAB_00552aad
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00552a50
    CMP ECX,0x3                         ; 00552a54
    JLE 0x00552b2c                      ; 00552a57
        ;   XREF to: 00552b2c (CONDITIONAL_JUMP)  ; LAB_00552b2c
    MOV EBX,dword ptr [ESP + 0x68]      ; 00552a5d
    LEA EBP,[ECX + -0x2]                ; 00552a61
    XOR ESI,ESI                         ; 00552a64
    XOR EDI,EDI                         ; 00552a66
    TEST EBP,EBP                        ; 00552a68
    JLE 0x00552aa5                      ; 00552a6a
        ;   XREF to: 00552aa5 (CONDITIONAL_JUMP)  ; LAB_00552aa5
    IMUL EAX,dword ptr [EBX + 0x8],0x30 ; 00552a6c
        ;   Label: LAB_00552a6c
    ADD EAX,0x688014                    ; 00552a70 | g_RenderVertexBuffer
    MOV ECX,dword ptr [EBX + 0x4]       ; 00552a75
    PUSH EAX                            ; 00552a78
    IMUL EAX,ECX,0x30                   ; 00552a79
    ADD EAX,0x688014                    ; 00552a7c | g_RenderVertexBuffer
    MOV EDX,dword ptr [EBX]             ; 00552a81
    PUSH EAX                            ; 00552a83
    IMUL EAX,EDX,0x30                   ; 00552a84
    ADD EAX,0x688014                    ; 00552a87 | g_RenderVertexBuffer
    PUSH EAX                            ; 00552a8c
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 00552a8d
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00552a92
    TEST EAX,EAX                        ; 00552a95
    JZ 0x00552b26                       ; 00552a97
        ;   XREF to: 00552b26 (CONDITIONAL_JUMP)  ; LAB_00552b26
    INC ESI                             ; 00552a9d
        ;   Label: LAB_00552a9d
    ADD EBX,0x4                         ; 00552a9e
    CMP ESI,EBP                         ; 00552aa1
    JL 0x00552a6c                       ; 00552aa3
        ;   XREF to: 00552a6c (CONDITIONAL_JUMP)  ; LAB_00552a6c
    CMP EDI,EBP                         ; 00552aa5
        ;   Label: LAB_00552aa5
    JZ 0x00552b1e                       ; 00552aa7
        ;   XREF to: 00552b1e (CONDITIONAL_JUMP)  ; LAB_00552b1e
    CMP dword ptr [0x02d03e94],0x0      ; 00552aad | g_UseExternalRenderer
        ;   Label: LAB_00552aad
    JZ 0x00552b8e                       ; 00552ab4
        ;   XREF to: 00552b8e (CONDITIONAL_JUMP)  ; LAB_00552b8e
    CMP dword ptr [0x00772a74],0x0      ; 00552aba | g_TexturesDisabled
    JNZ 0x00552b8e                      ; 00552ac1
        ;   XREF to: 00552b8e (CONDITIONAL_JUMP)  ; LAB_00552b8e
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00552ac7
    XOR EAX,EAX                         ; 00552acb
    TEST EBX,EBX                        ; 00552acd
    JLE 0x00552af0                      ; 00552acf
        ;   XREF to: 00552af0 (CONDITIONAL_JUMP)  ; LAB_00552af0
    MOV ECX,dword ptr [ESP + 0x68]      ; 00552ad1
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00552ad5
    IMUL EDX,dword ptr [ECX],0x30       ; 00552ad9
        ;   Label: LAB_00552ad9
    INC EAX                             ; 00552adc
    ADD EDX,0x688014                    ; 00552add | g_RenderVertexBuffer
    ADD ECX,0x4                         ; 00552ae3
    MOV dword ptr [ESP + EAX*0x4 + -0x4],EDX ; 00552ae6
    CMP EAX,ESI                         ; 00552aea
    JL 0x00552ad9                       ; 00552aec
        ;   XREF to: 00552ad9 (CONDITIONAL_JUMP)  ; LAB_00552ad9
    MOV EAX,EAX                         ; 00552aee
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00552af0
        ;   Label: LAB_00552af0
    MOV EDI,dword ptr [0x030e56b8]      ; 00552af4 | g_RenderedTriangleCount
    MOV EBP,dword ptr [0x02d052a0]      ; 00552afa | g_RenderStateFlags
    SUB EAX,0x2                         ; 00552b00
    PUSH EBP                            ; 00552b03
    ADD EDI,EAX                         ; 00552b04
    MOV EAX,dword ptr [ESP + 0x70]      ; 00552b06
    PUSH EAX                            ; 00552b0a
    LEA EAX,[ESP + 0x8]                 ; 00552b0b
    PUSH EAX                            ; 00552b0f
    MOV dword ptr [0x030e56b8],EDI      ; 00552b10 | g_RenderedTriangleCount
    CALL wincore_windll.cpp_drawPolygon2_FUN_005b7610 ; 00552b16
        ;   XREF to: 005b7610 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_drawPolygon2_FUN_005b7610(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 00552b1b
    ADD ESP,0x54                        ; 00552b1e
        ;   Label: LAB_00552b1e
    POP EBP                             ; 00552b21
    POP EDI                             ; 00552b22
    POP ESI                             ; 00552b23
    POP EBX                             ; 00552b24
    RET                                 ; 00552b25
    INC EDI                             ; 00552b26
        ;   Label: LAB_00552b26
    JMP 0x00552a9d                      ; 00552b27
        ;   XREF to: 00552a9d (UNCONDITIONAL_JUMP)  ; LAB_00552a9d
    MOV EDX,dword ptr [ESP + 0x68]      ; 00552b2c
        ;   Label: LAB_00552b2c
    MOV EDX,dword ptr [EDX + 0x8]       ; 00552b30
    LEA EAX,[EDX*0x4 + 0x0]             ; 00552b33
    SUB EAX,EDX                         ; 00552b3a
    SHL EAX,0x4                         ; 00552b3c
    MOV EDX,dword ptr [ESP + 0x68]      ; 00552b3f
    ADD EAX,0x688014                    ; 00552b43 | g_RenderVertexBuffer
    MOV EDX,dword ptr [EDX + 0x4]       ; 00552b48
    PUSH EAX                            ; 00552b4b
    LEA EAX,[EDX*0x4 + 0x0]             ; 00552b4c
    SUB EAX,EDX                         ; 00552b53
    SHL EAX,0x4                         ; 00552b55
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00552b58
    ADD EAX,0x688014                    ; 00552b5c | g_RenderVertexBuffer
    MOV EDX,dword ptr [EDX]             ; 00552b61
    PUSH EAX                            ; 00552b63
    LEA EAX,[EDX*0x4 + 0x0]             ; 00552b64
    SUB EAX,EDX                         ; 00552b6b
    SHL EAX,0x4                         ; 00552b6d
    ADD EAX,0x688014                    ; 00552b70 | g_RenderVertexBuffer
    PUSH EAX                            ; 00552b75
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 00552b76
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00552b7b
    TEST EAX,EAX                        ; 00552b7e
    JNZ 0x00552aad                      ; 00552b80
        ;   XREF to: 00552aad (CONDITIONAL_JUMP)  ; LAB_00552aad
    ADD ESP,0x54                        ; 00552b86
    POP EBP                             ; 00552b89
    POP EDI                             ; 00552b8a
    POP ESI                             ; 00552b8b
    POP EBX                             ; 00552b8c
    RET                                 ; 00552b8d
    MOV ESI,0x4b0                       ; 00552b8e
        ;   Label: LAB_00552b8e
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00552b93
    XOR EDI,EDI                         ; 00552b97
    MOV EDX,dword ptr [0x030e56b8]      ; 00552b99 | g_RenderedTriangleCount
    MOV dword ptr [0x030e56b0],EDI      ; 00552b9f | g_SoftwareMaxScanline
    MOV dword ptr [0x030e5228],EDI      ; 00552ba5 | g_SoftwareEdgeCount
    MOV dword ptr [ESP + 0x48],EDI      ; 00552bab
    INC EDX                             ; 00552baf
    MOV dword ptr [0x030e56ac],ESI      ; 00552bb0 | g_SoftwareMinScanline
    MOV dword ptr [0x030e56b8],EDX      ; 00552bb6 | g_RenderedTriangleCount
    TEST ECX,ECX                        ; 00552bbc
    JLE 0x00552c29                      ; 00552bbe
        ;   XREF to: 00552c29 (CONDITIONAL_JUMP)  ; LAB_00552c29
    MOV EAX,dword ptr [ESP + 0x68]      ; 00552bc0
    MOV dword ptr [ESP + 0x44],EAX      ; 00552bc4
    MOV EAX,dword ptr [ESP + 0x48]      ; 00552bc8
        ;   Label: LAB_00552bc8
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00552bcc
    INC EAX                             ; 00552bd0
    CMP EAX,EBX                         ; 00552bd1
    JL 0x00552bd7                       ; 00552bd3
        ;   XREF to: 00552bd7 (CONDITIONAL_JUMP)  ; LAB_00552bd7
    XOR EAX,EAX                         ; 00552bd5
    MOV EDX,dword ptr [ESP + 0x44]      ; 00552bd7
        ;   Label: LAB_00552bd7
    IMUL EBP,dword ptr [EDX],0x30       ; 00552bdb
    MOV ESI,dword ptr [ESP + 0x68]      ; 00552bde
    SHL EAX,0x2                         ; 00552be2
    ADD EAX,ESI                         ; 00552be5
    IMUL EAX,dword ptr [EAX],0x30       ; 00552be7
    ADD EBP,0x688014                    ; 00552bea | g_RenderVertexBuffer
    ADD EAX,0x688014                    ; 00552bf0 | g_RenderVertexBuffer
    MOV EBX,EBP                         ; 00552bf5
    MOV ECX,dword ptr [EBP + 0x14]      ; 00552bf7 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV ESI,dword ptr [EAX + 0x14]      ; 00552bfa | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SAR ECX,0x10                        ; 00552bfd
    SAR ESI,0x10                        ; 00552c00
    MOV EDI,EAX                         ; 00552c03
    CMP ECX,ESI                         ; 00552c05
    JNZ 0x00552d58                      ; 00552c07
        ;   XREF to: 00552d58 (CONDITIONAL_JUMP)  ; LAB_00552d58
    MOV ESI,dword ptr [ESP + 0x44]      ; 00552c0d
        ;   Label: LAB_00552c0d
    MOV EDI,dword ptr [ESP + 0x48]      ; 00552c11
    MOV EBP,dword ptr [ESP + 0x6c]      ; 00552c15
    ADD ESI,0x4                         ; 00552c19
    INC EDI                             ; 00552c1c
    MOV dword ptr [ESP + 0x44],ESI      ; 00552c1d
    MOV dword ptr [ESP + 0x48],EDI      ; 00552c21
    CMP EDI,EBP                         ; 00552c25
    JL 0x00552bc8                       ; 00552c27
        ;   XREF to: 00552bc8 (CONDITIONAL_JUMP)  ; LAB_00552bc8
    PUSH 0x0                            ; 00552c29
        ;   Label: LAB_00552c29
    MOV EAX,[0x030e56ac]                ; 00552c2b | g_SoftwareMinScanline
    PUSH EAX                            ; 00552c30
    CALL engine_prim.c_findEdgeInBuffer_FUN_00551f70 ; 00552c31
        ;   XREF to: 00551f70 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_00551f70(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 00552c36
    MOV EBP,EAX                         ; 00552c39
    TEST EAX,EAX                        ; 00552c3b
    JZ 0x00552b1e                       ; 00552c3d
        ;   XREF to: 00552b1e (CONDITIONAL_JUMP)  ; LAB_00552b1e
    PUSH EAX                            ; 00552c43
    MOV EDX,dword ptr [0x030e56ac]      ; 00552c44 | g_SoftwareMinScanline
    PUSH EDX                            ; 00552c4a
    CALL engine_prim.c_findEdgeInBuffer_FUN_00551f70 ; 00552c4b
        ;   XREF to: 00551f70 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_00551f70(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 00552c50
    MOV dword ptr [ESP + 0x50],EAX      ; 00552c53
    TEST EAX,EAX                        ; 00552c57
    JZ 0x00552b1e                       ; 00552c59
        ;   XREF to: 00552b1e (CONDITIONAL_JUMP)  ; LAB_00552b1e
    MOV EAX,[0x030e56ac]                ; 00552c5f | g_SoftwareMinScanline
    MOV ECX,dword ptr [0x00680cf4]      ; 00552c64 | g_MaxViewportScanline
    MOV dword ptr [ESP + 0x4c],EAX      ; 00552c6a
    CMP EAX,ECX                         ; 00552c6e
    JGE 0x00552b1e                      ; 00552c70
        ;   XREF to: 00552b1e (CONDITIONAL_JUMP)  ; LAB_00552b1e
        ;   Label: LAB_00552c70
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00552c76
    CMP EAX,dword ptr [EBP + 0x4]       ; 00552c7a
    JGE 0x00552f3f                      ; 00552c7d
        ;   XREF to: 00552f3f (CONDITIONAL_JUMP)  ; LAB_00552f3f
    MOV EDX,dword ptr [ESP + 0x50]      ; 00552c83
        ;   Label: LAB_00552c83
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00552c87
    CMP EAX,dword ptr [EDX + 0x4]       ; 00552c8b
    JL 0x00552cac                       ; 00552c8e
        ;   XREF to: 00552cac (CONDITIONAL_JUMP)  ; LAB_00552cac
    PUSH EBP                            ; 00552c90
    PUSH EAX                            ; 00552c91
    MOV dword ptr [EDX],0xffffffff      ; 00552c92
    CALL engine_prim.c_findEdgeInBuffer_FUN_00551f70 ; 00552c98
        ;   XREF to: 00551f70 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_00551f70(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 00552c9d
    MOV dword ptr [ESP + 0x50],EAX      ; 00552ca0
    TEST EAX,EAX                        ; 00552ca4
    JZ 0x00552b1e                       ; 00552ca6
        ;   XREF to: 00552b1e (CONDITIONAL_JUMP)  ; LAB_00552b1e
    MOV EDI,dword ptr [ESP + 0x50]      ; 00552cac
        ;   Label: LAB_00552cac
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00552cb0
    MOV ESI,EBP                         ; 00552cb4
    CALL wincore_windll.cpp_renderScanline_FUN_005b5710 ; 00552cb6
        ;   XREF to: 005b5710 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_renderScanline_FUN_005b5710(SHardwareEdge * left, SHardwareEdge * right, int scanline_y)
    MOV EAX,dword ptr [EBP + 0xc]       ; 00552cbb
    ADD dword ptr [EBP + 0x8],EAX       ; 00552cbe
    MOV EBX,dword ptr [EBP + 0x18]      ; 00552cc1
    MOV ESI,dword ptr [EBP + 0x20]      ; 00552cc4
    MOV EDI,dword ptr [EBP + 0x10]      ; 00552cc7
    MOV EDX,dword ptr [EBP + 0x28]      ; 00552cca
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00552ccd
    MOV ECX,dword ptr [EBP + 0x30]      ; 00552cd0
    ADD EBX,EAX                         ; 00552cd3
    MOV EAX,dword ptr [EBP + 0x24]      ; 00552cd5
    MOV dword ptr [EBP + 0x18],EBX      ; 00552cd8
    ADD ESI,EAX                         ; 00552cdb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00552cdd
    MOV dword ptr [EBP + 0x20],ESI      ; 00552ce0
    ADD EDI,EAX                         ; 00552ce3
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00552ce5
    MOV dword ptr [EBP + 0x10],EDI      ; 00552ce8
    ADD EDX,EAX                         ; 00552ceb
    MOV EAX,dword ptr [EBP + 0x34]      ; 00552ced
    MOV dword ptr [EBP + 0x28],EDX      ; 00552cf0
    ADD ECX,EAX                         ; 00552cf3
    MOV EAX,dword ptr [ESP + 0x50]      ; 00552cf5
    MOV dword ptr [EBP + 0x30],ECX      ; 00552cf9
    MOV EDX,dword ptr [ESP + 0x50]      ; 00552cfc
    MOV EAX,dword ptr [EAX + 0xc]       ; 00552d00
    MOV EBX,dword ptr [EDX + 0x8]       ; 00552d03
    MOV ESI,dword ptr [EDX + 0x18]      ; 00552d06
    ADD EBX,EAX                         ; 00552d09
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00552d0b
    MOV dword ptr [EDX + 0x8],EBX       ; 00552d0e
    ADD ESI,EAX                         ; 00552d11
    MOV dword ptr [EDX + 0x18],ESI      ; 00552d13
    MOV EDI,dword ptr [EDX + 0x20]      ; 00552d16
    MOV ECX,dword ptr [EDX + 0x10]      ; 00552d19
    MOV EBX,dword ptr [EDX + 0x28]      ; 00552d1c
    MOV EAX,dword ptr [EDX + 0x24]      ; 00552d1f
    MOV ESI,dword ptr [EDX + 0x30]      ; 00552d22
    ADD EDI,EAX                         ; 00552d25
    MOV EAX,dword ptr [EDX + 0x14]      ; 00552d27
    MOV dword ptr [EDX + 0x20],EDI      ; 00552d2a
    MOV EDI,dword ptr [ESP + 0x4c]      ; 00552d2d
    ADD ECX,EAX                         ; 00552d31
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00552d33
    MOV dword ptr [EDX + 0x10],ECX      ; 00552d36
    ADD EBX,EAX                         ; 00552d39
    MOV EAX,dword ptr [EDX + 0x34]      ; 00552d3b
    MOV dword ptr [EDX + 0x28],EBX      ; 00552d3e
    ADD ESI,EAX                         ; 00552d41
    INC EDI                             ; 00552d43
    MOV dword ptr [EDX + 0x30],ESI      ; 00552d44
    MOV EDX,dword ptr [0x00680cf4]      ; 00552d47 | g_MaxViewportScanline
    MOV dword ptr [ESP + 0x4c],EDI      ; 00552d4d
    CMP EDI,EDX                         ; 00552d51
    JMP 0x00552c70                      ; 00552d53
        ;   XREF to: 00552c70 (UNCONDITIONAL_JUMP)  ; LAB_00552c70
    MOV EDX,dword ptr [EBP + 0x14]      ; 00552d58 | g_RenderVertexBuffer[0].projected_vertex.screen_y
        ;   Label: LAB_00552d58
    CMP EDX,dword ptr [EAX + 0x14]      ; 00552d5b | g_RenderVertexBuffer[0].projected_vertex.screen_y
    JLE 0x00552d6a                      ; 00552d5e
        ;   XREF to: 00552d6a (CONDITIONAL_JUMP)  ; LAB_00552d6a
    MOV EBX,EAX                         ; 00552d60
    MOV EDI,EBP                         ; 00552d62
    MOV EAX,ECX                         ; 00552d64
    MOV ECX,ESI                         ; 00552d66
    MOV ESI,EAX                         ; 00552d68
    IMUL EBP,dword ptr [0x030e5228],0x48 ; 00552d6a | g_SoftwareEdgeCount
        ;   Label: LAB_00552d6a
    ADD EBP,0x30e522c                   ; 00552d71 | g_SoftwareEdgeBuffer
    MOV dword ptr [EBP],ECX             ; 00552d77 | g_SoftwareEdgeBuffer
    MOV EDX,dword ptr [0x030e56ac]      ; 00552d7a | g_SoftwareMinScanline
    MOV dword ptr [EBP + 0x4],ESI       ; 00552d80 | DAT_030e5230
    CMP ECX,EDX                         ; 00552d83
    JGE 0x00552d8d                      ; 00552d85
        ;   XREF to: 00552d8d (CONDITIONAL_JUMP)  ; LAB_00552d8d
    MOV dword ptr [0x030e56ac],ECX      ; 00552d87 | g_SoftwareMinScanline
    CMP ESI,dword ptr [0x030e56b0]      ; 00552d8d | g_SoftwareMaxScanline
        ;   Label: LAB_00552d8d
    JLE 0x00552d9b                      ; 00552d93
        ;   XREF to: 00552d9b (CONDITIONAL_JUMP)  ; LAB_00552d9b
    MOV dword ptr [0x030e56b0],ESI      ; 00552d95 | g_SoftwareMaxScanline
    MOV ESI,dword ptr [EBX + 0x14]      ; 00552d9b | g_RenderVertexBuffer[0].projected_vertex.screen_y
        ;   Label: LAB_00552d9b
    MOV ECX,dword ptr [EDI + 0x14]      ; 00552d9e | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB ECX,ESI                         ; 00552da1
    CMP ECX,0x10000                     ; 00552da3
    JNC 0x00552ef3                      ; 00552da9
        ;   XREF to: 00552ef3 (CONDITIONAL_JUMP)  ; LAB_00552ef3
    XOR ECX,ECX                         ; 00552daf
    MOV EAX,dword ptr [EDI + 0x10]      ; 00552db1 | g_RenderVertexBuffer[0].projected_vertex.screen_x
        ;   Label: LAB_00552db1
    MOV EDX,dword ptr [EBX + 0x10]      ; 00552db4 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV ESI,dword ptr [EBX + 0x14]      ; 00552db7 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB EAX,EDX                         ; 00552dba
    AND ESI,0xffff                      ; 00552dbc
    MOV EDX,EAX                         ; 00552dc2
    MOV EAX,ECX                         ; 00552dc4
    XOR SI,0xffff                       ; 00552dc6
    IMUL EDX                            ; 00552dca
    SHRD EAX,EDX,0x10                   ; 00552dcc
    MOV EDX,EAX                         ; 00552dd0
    MOV dword ptr [EBP + 0xc],EAX       ; 00552dd2 | DAT_030e5238
    MOV EAX,ESI                         ; 00552dd5
    IMUL EDX                            ; 00552dd7
    SHRD EAX,EDX,0x10                   ; 00552dd9
    MOV dword ptr [ESP + 0x40],EAX      ; 00552ddd
    MOV EDX,dword ptr [ESP + 0x40]      ; 00552de1
    MOV EAX,dword ptr [EBX + 0x10]      ; 00552de5 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    ADD EAX,EDX                         ; 00552de8
    MOV dword ptr [EBP + 0x8],EAX       ; 00552dea | DAT_030e5234
    MOV EAX,dword ptr [EDI + 0x18]      ; 00552ded | g_RenderVertexBuffer[0].u
    MOV EDX,dword ptr [EBX + 0x18]      ; 00552df0 | g_RenderVertexBuffer[0].u
    SUB EAX,EDX                         ; 00552df3
    MOV EDX,EAX                         ; 00552df5
    MOV EAX,ECX                         ; 00552df7
    IMUL EDX                            ; 00552df9
    SHRD EAX,EDX,0x10                   ; 00552dfb
    MOV EDX,EAX                         ; 00552dff
    MOV dword ptr [EBP + 0x1c],EAX      ; 00552e01 | DAT_030e5248
    MOV EAX,ESI                         ; 00552e04
    IMUL EDX                            ; 00552e06
    SHRD EAX,EDX,0x10                   ; 00552e08
    MOV dword ptr [ESP + 0x40],EAX      ; 00552e0c
    MOV EDX,dword ptr [ESP + 0x40]      ; 00552e10
    MOV EAX,dword ptr [EBX + 0x18]      ; 00552e14 | g_RenderVertexBuffer[0].u
    ADD EAX,EDX                         ; 00552e17
    MOV dword ptr [EBP + 0x18],EAX      ; 00552e19 | DAT_030e5244
    MOV EAX,dword ptr [EDI + 0x1c]      ; 00552e1c | g_RenderVertexBuffer[0].v
    MOV EDX,dword ptr [EBX + 0x1c]      ; 00552e1f | g_RenderVertexBuffer[0].v
    SUB EAX,EDX                         ; 00552e22
    MOV EDX,EAX                         ; 00552e24
    MOV EAX,ECX                         ; 00552e26
    IMUL EDX                            ; 00552e28
    SHRD EAX,EDX,0x10                   ; 00552e2a
    MOV EDX,EAX                         ; 00552e2e
    MOV dword ptr [EBP + 0x24],EAX      ; 00552e30 | DAT_030e5250
    MOV EAX,ESI                         ; 00552e33
    IMUL EDX                            ; 00552e35
    SHRD EAX,EDX,0x10                   ; 00552e37
    MOV dword ptr [ESP + 0x40],EAX      ; 00552e3b
    MOV EDX,dword ptr [ESP + 0x40]      ; 00552e3f
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00552e43 | g_RenderVertexBuffer[0].v
    ADD EAX,EDX                         ; 00552e46
    MOV dword ptr [EBP + 0x20],EAX      ; 00552e48 | DAT_030e524c
    MOV EAX,dword ptr [EDI + 0x20]      ; 00552e4b | g_RenderVertexBuffer[0].r
    MOV EDX,dword ptr [EBX + 0x20]      ; 00552e4e | g_RenderVertexBuffer[0].r
    SUB EAX,EDX                         ; 00552e51
    MOV EDX,EAX                         ; 00552e53
    MOV EAX,ECX                         ; 00552e55
    IMUL EDX                            ; 00552e57
    SHRD EAX,EDX,0x10                   ; 00552e59
    MOV EDX,EAX                         ; 00552e5d
    MOV dword ptr [EBP + 0x14],EAX      ; 00552e5f | DAT_030e5240
    MOV EAX,ESI                         ; 00552e62
    IMUL EDX                            ; 00552e64
    SHRD EAX,EDX,0x10                   ; 00552e66
    MOV dword ptr [ESP + 0x40],EAX      ; 00552e6a
    MOV EDX,dword ptr [ESP + 0x40]      ; 00552e6e
    MOV EAX,dword ptr [EBX + 0x20]      ; 00552e72 | g_RenderVertexBuffer[0].r
    ADD EAX,EDX                         ; 00552e75
    MOV dword ptr [EBP + 0x10],EAX      ; 00552e77 | DAT_030e523c
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00552e7a | g_RenderVertexBuffer[0].a
    MOV EDX,dword ptr [EBX + 0x2c]      ; 00552e7d | g_RenderVertexBuffer[0].a
    SUB EAX,EDX                         ; 00552e80
    MOV EDX,EAX                         ; 00552e82
    MOV EAX,ECX                         ; 00552e84
    IMUL EDX                            ; 00552e86
    SHRD EAX,EDX,0x10                   ; 00552e88
    MOV EDX,EAX                         ; 00552e8c
    MOV dword ptr [EBP + 0x34],EAX      ; 00552e8e | DAT_030e5260
    MOV EAX,ESI                         ; 00552e91
    IMUL EDX                            ; 00552e93
    SHRD EAX,EDX,0x10                   ; 00552e95
    MOV dword ptr [ESP + 0x40],EAX      ; 00552e99
    MOV EDX,dword ptr [ESP + 0x40]      ; 00552e9d
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00552ea1 | g_RenderVertexBuffer[0].a
    ADD EAX,EDX                         ; 00552ea4
    MOV dword ptr [EBP + 0x30],EAX      ; 00552ea6 | DAT_030e525c
    CMP dword ptr [0x02d052a4],0x1      ; 00552ea9 | g_RenderStateFlag2
    JNZ 0x00552f0b                      ; 00552eb0
        ;   XREF to: 00552f0b (CONDITIONAL_JUMP)  ; LAB_00552f0b
    CMP dword ptr [0x02d0529c],0x0      ; 00552eb2 | g_ProcessorType
    JZ 0x00552f03                       ; 00552eb9
        ;   XREF to: 00552f03 (CONDITIONAL_JUMP)  ; LAB_00552f03
    MOV EAX,0x7fffffff                  ; 00552ebb
    MOV EDX,dword ptr [EBX + 0x8]       ; 00552ec0 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    MOV EBX,EAX                         ; 00552ec3
    SUB EBX,EDX                         ; 00552ec5
    MOV EDX,EAX                         ; 00552ec7
    SUB EDX,dword ptr [EDI + 0x8]       ; 00552ec9 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    MOV EAX,ECX                         ; 00552ecc
        ;   Label: LAB_00552ecc
    SUB EDX,EBX                         ; 00552ece
    IMUL EDX                            ; 00552ed0
    SHRD EAX,EDX,0x10                   ; 00552ed2
    MOV EDX,EAX                         ; 00552ed6
    MOV dword ptr [EBP + 0x2c],EAX      ; 00552ed8 | DAT_030e5258
    MOV EAX,ESI                         ; 00552edb
    IMUL EDX                            ; 00552edd
    SHRD EAX,EDX,0x10                   ; 00552edf
    ADD EBX,EAX                         ; 00552ee3
    MOV dword ptr [EBP + 0x28],EBX      ; 00552ee5 | DAT_030e5254
    INC dword ptr [0x030e5228]          ; 00552ee8 | g_SoftwareEdgeCount
    JMP 0x00552c0d                      ; 00552eee
        ;   XREF to: 00552c0d (UNCONDITIONAL_JUMP)  ; LAB_00552c0d
    MOV EAX,0xffffffff                  ; 00552ef3
        ;   Label: LAB_00552ef3
    XOR EDX,EDX                         ; 00552ef8
    DIV ECX                             ; 00552efa
    MOV ECX,EAX                         ; 00552efc
    JMP 0x00552db1                      ; 00552efe
        ;   XREF to: 00552db1 (UNCONDITIONAL_JUMP)  ; LAB_00552db1
    MOV EDX,dword ptr [EDI + 0xc]       ; 00552f03 | g_RenderVertexBuffer[0].projected_vertex.inv_z
        ;   Label: LAB_00552f03
    MOV EBX,dword ptr [EBX + 0xc]       ; 00552f06 | g_RenderVertexBuffer[0].projected_vertex.inv_z
    JMP 0x00552ecc                      ; 00552f09
        ;   XREF to: 00552ecc (UNCONDITIONAL_JUMP)  ; LAB_00552ecc
    MOV EAX,dword ptr [EDI + 0x8]       ; 00552f0b | g_RenderVertexBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_00552f0b
    MOV EDX,dword ptr [EBX + 0x8]       ; 00552f0e | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    SUB EAX,EDX                         ; 00552f11
    MOV EDX,EAX                         ; 00552f13
    MOV EAX,ECX                         ; 00552f15
    IMUL EDX                            ; 00552f17
    SHRD EAX,EDX,0x10                   ; 00552f19
    MOV EDX,EAX                         ; 00552f1d
    MOV dword ptr [EBP + 0x2c],EAX      ; 00552f1f | DAT_030e5258
    MOV EAX,ESI                         ; 00552f22
    IMUL EDX                            ; 00552f24
    SHRD EAX,EDX,0x10                   ; 00552f26
    MOV EDX,EAX                         ; 00552f2a
    MOV EAX,dword ptr [EBX + 0x8]       ; 00552f2c | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    ADD EAX,EDX                         ; 00552f2f
    MOV dword ptr [EBP + 0x28],EAX      ; 00552f31 | DAT_030e5254
    INC dword ptr [0x030e5228]          ; 00552f34 | g_SoftwareEdgeCount
    JMP 0x00552c0d                      ; 00552f3a
        ;   XREF to: 00552c0d (UNCONDITIONAL_JUMP)  ; LAB_00552c0d
    MOV EBX,dword ptr [ESP + 0x50]      ; 00552f3f
        ;   Label: LAB_00552f3f
    PUSH EBX                            ; 00552f43
    PUSH EAX                            ; 00552f44
    MOV dword ptr [EBP],0xffffffff      ; 00552f45
    CALL engine_prim.c_findEdgeInBuffer_FUN_00551f70 ; 00552f4c
        ;   XREF to: 00551f70 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_00551f70(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 00552f51
    MOV EBP,EAX                         ; 00552f54
    TEST EAX,EAX                        ; 00552f56
    JZ 0x00552b1e                       ; 00552f58
        ;   XREF to: 00552b1e (CONDITIONAL_JUMP)  ; LAB_00552b1e
    JMP 0x00552c83                      ; 00552f5e
        ;   XREF to: 00552c83 (UNCONDITIONAL_JUMP)  ; LAB_00552c83

