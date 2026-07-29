; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
; Local Variables:
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* switchdataD_00437c5c = 00437f0c
;   void* PTR_caseD_3_00437c68 = 00437f36
;   void* PTR_caseD_1_00437c70 = 0043821d
;   void* PTR_caseD_3_00437c78 = 00437fe5
;   void* switchdataD_00437c7c = 00438065
;   void* PTR_caseD_3_00437c88 = 0043808f
;   void* PTR_caseD_1_00437c90 = 0043831b
;   void* PTR_caseD_3_00437c98 = 0043813f
;   SRenderVertex[20000] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
;   int g_CullingMode
;   int g_ClippedVertexCount
;   SRenderVertex[16] g_ClippedVertexBuffer
;   undefined4 g_ClippedVertexBuffer[0].projected_vertex.transformed_y
;   ... and 38 more
;
; Called Functions:
;   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
;   engine_special.cpp_drawPolygon2_FUN_005b7610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437ca0
        ;   Label: engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0
    PUSH ESI                            ; 00437ca1
    PUSH EDI                            ; 00437ca2
    PUSH EBP                            ; 00437ca3
    SUB ESP,0x1c                        ; 00437ca4
    MOV EBP,dword ptr [ESP + 0x30]      ; 00437ca7
    MOV ECX,0xffffffff                  ; 00437cab
    XOR EDX,EDX                         ; 00437cb0
    XOR ESI,ESI                         ; 00437cb2
    TEST EBP,EBP                        ; 00437cb4
    JLE 0x00437cd8                      ; 00437cb6
        ;   XREF to: 00437cd8 (CONDITIONAL_JUMP)  ; LAB_00437cd8
    MOV EAX,dword ptr [ESP + 0x34]      ; 00437cb8
    IMUL EBX,dword ptr [EAX],0x30       ; 00437cbc
        ;   Label: LAB_00437cbc
    MOV EBX,dword ptr [EBX + 0x688024]  ; 00437cbf | g_RenderVertexBuffer[0].projected_vertex.screen_x
    TEST EBX,0x80000000                 ; 00437cc5
    JZ 0x00437cce                       ; 00437ccb
        ;   XREF to: 00437cce (CONDITIONAL_JUMP)  ; LAB_00437cce
    INC ESI                             ; 00437ccd
    ADD EAX,0x4                         ; 00437cce
        ;   Label: LAB_00437cce
    INC EDX                             ; 00437cd1
    AND ECX,EBX                         ; 00437cd2
    CMP EDX,EBP                         ; 00437cd4
    JL 0x00437cbc                       ; 00437cd6
        ;   XREF to: 00437cbc (CONDITIONAL_JUMP)  ; LAB_00437cbc
    CMP ESI,EBP                         ; 00437cd8
        ;   Label: LAB_00437cd8
    JNZ 0x00437ce5                      ; 00437cda
        ;   XREF to: 00437ce5 (CONDITIONAL_JUMP)  ; LAB_00437ce5
    TEST CL,0xff                        ; 00437cdc
    JNZ 0x00437d81                      ; 00437cdf
        ;   XREF to: 00437d81 (CONDITIONAL_JUMP)  ; LAB_00437d81
    TEST ESI,ESI                        ; 00437ce5
        ;   Label: LAB_00437ce5
    JNZ 0x00437e4a                      ; 00437ce7
        ;   XREF to: 00437e4a (CONDITIONAL_JUMP)  ; LAB_00437e4a
    CMP dword ptr [0x02d03e94],0x0      ; 00437ced | g_UseExternalRenderer
    JZ 0x00437df3                       ; 00437cf4
        ;   XREF to: 00437df3 (CONDITIONAL_JUMP)  ; LAB_00437df3
    XOR EAX,EAX                         ; 00437cfa
    TEST EBP,EBP                        ; 00437cfc
    JLE 0x00437d20                      ; 00437cfe
        ;   XREF to: 00437d20 (CONDITIONAL_JUMP)  ; LAB_00437d20
    MOV EBX,dword ptr [ESP + 0x34]      ; 00437d00
    IMUL EDX,dword ptr [EBX],0x30       ; 00437d04
        ;   Label: LAB_00437d04
    INC EAX                             ; 00437d07
    ADD EDX,0x688014                    ; 00437d08 | g_RenderVertexBuffer
    ADD EBX,0x4                         ; 00437d0e
    MOV dword ptr [EAX*0x4 + 0x825424],EDX ; 00437d11 | g_ClipperCullingPointers | g_ClipperCullingPointers[1]
    CMP EAX,EBP                         ; 00437d18
    JL 0x00437d04                       ; 00437d1a
        ;   XREF to: 00437d04 (CONDITIONAL_JUMP)  ; LAB_00437d04
    LEA EAX,[EAX]                       ; 00437d1c
    CMP dword ptr [0x00772a7c],0x0      ; 00437d20 | g_CullingMode
        ;   Label: LAB_00437d20
    JZ 0x00437dc0                       ; 00437d27
        ;   XREF to: 00437dc0 (CONDITIONAL_JUMP)  ; LAB_00437dc0
    CMP EBP,0x3                         ; 00437d2d
    JLE 0x00437d93                      ; 00437d30
        ;   XREF to: 00437d93 (CONDITIONAL_JUMP)  ; LAB_00437d93
    LEA EAX,[EBP + -0x2]                ; 00437d32
    XOR EBX,EBX                         ; 00437d35
    MOV dword ptr [ESP],EAX             ; 00437d37
    LEA EDI,[EAX*0x4 + 0x0]             ; 00437d3a
    XOR ESI,ESI                         ; 00437d41
    TEST EDI,EDI                        ; 00437d43
    JLE 0x00437d6f                      ; 00437d45
        ;   XREF to: 00437d6f (CONDITIONAL_JUMP)  ; LAB_00437d6f
    MOV EAX,dword ptr [EBX + 0x825430]  ; 00437d47 | g_ClipperCullingPointers[2] | g_ClipperCullingPointers[3]
        ;   Label: LAB_00437d47
    PUSH EAX                            ; 00437d4d
    MOV EDX,dword ptr [EBX + 0x82542c]  ; 00437d4e | g_ClipperCullingPointers[1] | g_ClipperCullingPointers[2]
    PUSH EDX                            ; 00437d54
    MOV ECX,dword ptr [0x00825428]      ; 00437d55 | g_ClipperCullingPointers
    PUSH ECX                            ; 00437d5b
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 00437d5c
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00437d61
    TEST EAX,EAX                        ; 00437d64
    JZ 0x00437d90                       ; 00437d66
        ;   XREF to: 00437d90 (CONDITIONAL_JUMP)  ; LAB_00437d90
    ADD EBX,0x4                         ; 00437d68
        ;   Label: LAB_00437d68
    CMP EBX,EDI                         ; 00437d6b
    JL 0x00437d47                       ; 00437d6d
        ;   XREF to: 00437d47 (CONDITIONAL_JUMP)  ; LAB_00437d47
    CMP ESI,dword ptr [ESP]             ; 00437d6f
        ;   Label: LAB_00437d6f
    JNZ 0x00437dc0                      ; 00437d72
        ;   XREF to: 00437dc0 (CONDITIONAL_JUMP)  ; LAB_00437dc0
    MOV EAX,0x1                         ; 00437d74
    ADD ESP,0x1c                        ; 00437d79
        ;   Label: LAB_00437d79
    POP EBP                             ; 00437d7c
    POP EDI                             ; 00437d7d
    POP ESI                             ; 00437d7e
    POP EBX                             ; 00437d7f
    RET                                 ; 00437d80
    XOR ECX,ECX                         ; 00437d81
        ;   Label: LAB_00437d81
    MOV EAX,0x1                         ; 00437d83
    MOV dword ptr [0x00824e24],ECX      ; 00437d88 | g_ClippedVertexCount
    JMP 0x00437d79                      ; 00437d8e
        ;   XREF to: 00437d79 (UNCONDITIONAL_JUMP)  ; LAB_00437d79
    INC ESI                             ; 00437d90
        ;   Label: LAB_00437d90
    JMP 0x00437d68                      ; 00437d91
        ;   XREF to: 00437d68 (UNCONDITIONAL_JUMP)  ; LAB_00437d68
    MOV EAX,[0x00825430]                ; 00437d93 | g_ClipperCullingPointers[2]
        ;   Label: LAB_00437d93
    PUSH EAX                            ; 00437d98
    MOV EDX,dword ptr [0x0082542c]      ; 00437d99 | g_ClipperCullingPointers[1]
    PUSH EDX                            ; 00437d9f
    MOV ECX,dword ptr [0x00825428]      ; 00437da0 | g_ClipperCullingPointers
    PUSH ECX                            ; 00437da6
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 00437da7
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00437dac
    TEST EAX,EAX                        ; 00437daf
    JNZ 0x00437dc0                      ; 00437db1
        ;   XREF to: 00437dc0 (CONDITIONAL_JUMP)  ; LAB_00437dc0
    MOV EAX,0x1                         ; 00437db3
    ADD ESP,0x1c                        ; 00437db8
    POP EBP                             ; 00437dbb
    POP EDI                             ; 00437dbc
    POP ESI                             ; 00437dbd
    POP EBX                             ; 00437dbe
    RET                                 ; 00437dbf
    MOV ESI,dword ptr [0x02d052a0]      ; 00437dc0 | g_RenderStateFlags
        ;   Label: LAB_00437dc0
    PUSH ESI                            ; 00437dc6
    LEA EAX,[EBP + -0x2]                ; 00437dc7
    MOV EBX,dword ptr [0x030e56b8]      ; 00437dca | g_RenderedTriangleCount
    PUSH EBP                            ; 00437dd0
    ADD EBX,EAX                         ; 00437dd1
    PUSH 0x825428                       ; 00437dd3 | g_ClipperCullingPointers
    MOV dword ptr [0x030e56b8],EBX      ; 00437dd8 | g_RenderedTriangleCount
    CALL engine_special.cpp_drawPolygon2_FUN_005b7610 ; 00437dde
        ;   XREF to: 005b7610 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_005b7610(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    MOV EAX,0x1                         ; 00437de3
    ADD ESP,0xc                         ; 00437de8
    ADD ESP,0x1c                        ; 00437deb
    POP EBP                             ; 00437dee
    POP EDI                             ; 00437def
    POP ESI                             ; 00437df0
    POP EBX                             ; 00437df1
    RET                                 ; 00437df2
    MOV dword ptr [ESP + 0x8],ESI       ; 00437df3
        ;   Label: LAB_00437df3
    MOV dword ptr [0x00824e24],EBP      ; 00437df7 | g_ClippedVertexCount
    TEST EBP,EBP                        ; 00437dfd
    JLE 0x00437e40                      ; 00437dff
        ;   XREF to: 00437e40 (CONDITIONAL_JUMP)  ; LAB_00437e40
    MOV EBX,dword ptr [ESP + 0x34]      ; 00437e01
    MOV EDX,0x824e28                    ; 00437e05 | g_ClippedVertexBuffer
    IMUL ESI,dword ptr [EBX],0x30       ; 00437e0a
        ;   Label: LAB_00437e0a
    MOV ECX,0x30                        ; 00437e0d
    ADD ESI,0x688014                    ; 00437e12 | g_RenderVertexBuffer
    MOV EDI,EDX                         ; 00437e18
    PUSH EDI                            ; 00437e1a | g_ClippedVertexBuffer | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    MOV EAX,ECX                         ; 00437e1b
    SHR ECX,0x2                         ; 00437e1d
    MOVSD.REP ES:EDI,ESI                ; 00437e20 | g_RenderVertexBuffer | g_ClippedVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 00437e22
    AND CL,0x3                          ; 00437e24
    MOVSB.REP ES:EDI,ESI                ; 00437e27 | g_RenderVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 00437e29
    MOV EAX,dword ptr [ESP + 0x8]       ; 00437e2a
    ADD EBX,0x4                         ; 00437e2e
    INC EAX                             ; 00437e31
    ADD EDX,0x30                        ; 00437e32
    MOV dword ptr [ESP + 0x8],EAX       ; 00437e35
    CMP EBP,EAX                         ; 00437e39
    JG 0x00437e0a                       ; 00437e3b
        ;   XREF to: 00437e0a (CONDITIONAL_JUMP)  ; LAB_00437e0a
    LEA EAX,[EAX]                       ; 00437e3d
    XOR EAX,EAX                         ; 00437e40
        ;   Label: LAB_00437e40
    ADD ESP,0x1c                        ; 00437e42
    POP EBP                             ; 00437e45
    POP EDI                             ; 00437e46
    POP ESI                             ; 00437e47
    POP EBX                             ; 00437e48
    RET                                 ; 00437e49
    XOR EDX,EDX                         ; 00437e4a
        ;   Label: LAB_00437e4a
    MOV dword ptr [0x00825cf0],EBP      ; 00437e4c | g_InputVertexCount
    MOV dword ptr [0x00825cf4],EDX      ; 00437e52 | g_OutputVertexCount
    MOV dword ptr [0x00825cf8],EDX      ; 00437e58 | g_TempVertexCount
    MOV dword ptr [0x00825cfc],EDX      ; 00437e5e | g_IntermediateVertexCount
    MOV dword ptr [0x00824e24],EDX      ; 00437e64 | g_ClippedVertexCount
    MOV dword ptr [ESP + 0x4],EDX       ; 00437e6a
    TEST EBP,EBP                        ; 00437e6e
    JLE 0x00437eb0                      ; 00437e70
        ;   XREF to: 00437eb0 (CONDITIONAL_JUMP)  ; LAB_00437eb0
    MOV EBX,dword ptr [ESP + 0x34]      ; 00437e72
    MOV EDX,0x826300                    ; 00437e76 | g_ClipperInputBuffer
    IMUL ESI,dword ptr [EBX],0x30       ; 00437e7b
        ;   Label: LAB_00437e7b
    MOV ECX,0x30                        ; 00437e7e
    MOV EDI,EDX                         ; 00437e83
    ADD ESI,0x688014                    ; 00437e85 | g_RenderVertexBuffer
    PUSH EDI                            ; 00437e8b | g_ClipperInputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    MOV EAX,ECX                         ; 00437e8c
    SHR ECX,0x2                         ; 00437e8e
    MOVSD.REP ES:EDI,ESI                ; 00437e91 | g_RenderVertexBuffer | g_ClipperInputBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 00437e93
    AND CL,0x3                          ; 00437e95
    MOVSB.REP ES:EDI,ESI                ; 00437e98 | g_RenderVertexBuffer[0].projected_vertex.transformed_y | g_ClipperInputBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 00437e9a
    MOV ECX,dword ptr [ESP + 0x4]       ; 00437e9b
    ADD EBX,0x4                         ; 00437e9f
    INC ECX                             ; 00437ea2
    ADD EDX,0x30                        ; 00437ea3
    MOV dword ptr [ESP + 0x4],ECX       ; 00437ea6
    CMP EBP,ECX                         ; 00437eaa
    JG 0x00437e7b                       ; 00437eac
        ;   XREF to: 00437e7b (CONDITIONAL_JUMP)  ; LAB_00437e7b
    MOV EAX,EAX                         ; 00437eae
    XOR EDI,EDI                         ; 00437eb0
        ;   Label: LAB_00437eb0
    MOV EBP,dword ptr [0x00825cf0]      ; 00437eb2 | g_InputVertexCount
    MOV dword ptr [ESP + 0xc],EDI       ; 00437eb8
    TEST EBP,EBP                        ; 00437ebc
    JLE 0x00437f50                      ; 00437ebe
        ;   XREF to: 00437f50 (CONDITIONAL_JUMP)  ; LAB_00437f50
    MOV EBX,0x826300                    ; 00437ec4 | g_ClipperInputBuffer
    MOV EAX,dword ptr [ESP + 0xc]       ; 00437ec9
        ;   Label: engine_clipper.c_clipToFrustumFull_FUN_00437ec9
    MOV EDI,dword ptr [0x00825cf0]      ; 00437ecd | g_InputVertexCount
    INC EAX                             ; 00437ed3
    CMP EAX,EDI                         ; 00437ed4
    JNZ 0x00437eda                      ; 00437ed6
        ;   XREF to: 00437eda (CONDITIONAL_JUMP)  ; LAB_00437eda
    XOR EAX,EDI                         ; 00437ed8
    IMUL EAX,EAX,0x30                   ; 00437eda
        ;   Label: LAB_00437eda
    MOV EBP,0x826300                    ; 00437edd | g_ClipperInputBuffer
    MOV EDX,EBX                         ; 00437ee2
    MOV ECX,dword ptr [EBX]             ; 00437ee4 | g_ClipperInputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    MOV ESI,dword ptr [EBX + 0x8]       ; 00437ee6 | g_ClipperInputBuffer[0].projected_vertex.transformed_z | g_ClipperInputBuffer[1].projected_vertex.transformed_z
    ADD EBP,EAX                         ; 00437ee9
    XOR EAX,EAX                         ; 00437eeb
    CMP ECX,ESI                         ; 00437eed
    JL 0x00437ef6                       ; 00437eef
        ;   XREF to: 00437ef6 (CONDITIONAL_JUMP)  ; LAB_00437ef6
    MOV EAX,0x1                         ; 00437ef1
    MOV EDI,dword ptr [EBP + 0x8]       ; 00437ef6 | g_ClipperInputBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_00437ef6
    CMP EDI,dword ptr [EBP]             ; 00437ef9 | g_ClipperInputBuffer
    JG 0x00437f00                       ; 00437efc
        ;   XREF to: 00437f00 (CONDITIONAL_JUMP)  ; LAB_00437f00
    OR AL,0x2                           ; 00437efe
    CMP EAX,0x3                         ; 00437f00
        ;   Label: LAB_00437f00
    JA 0x00437f36                       ; 00437f03
        ;   XREF to: 00437f36 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x437c5c]  ; 00437f05 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00825cf4],0x30 ; 00437f0c | g_OutputVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00437f13
    MOV ESI,EDX                         ; 00437f18
    ADD EDI,0x825d00                    ; 00437f1a | g_ClipperOutputBuffer
    PUSH EDI                            ; 00437f20 | g_ClipperOutputBuffer
    MOV EAX,ECX                         ; 00437f21
    SHR ECX,0x2                         ; 00437f23
    MOVSD.REP ES:EDI,ESI                ; 00437f26 | g_ClipperInputBuffer[1].projected_vertex.transformed_x | g_ClipperOutputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_y
    MOV CL,AL                           ; 00437f28
    AND CL,0x3                          ; 00437f2a
    MOVSB.REP ES:EDI,ESI                ; 00437f2d | g_ClipperInputBuffer[1].projected_vertex.transformed_y | g_ClipperOutputBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 00437f2f
    INC dword ptr [0x00825cf4]          ; 00437f30 | g_OutputVertexCount
    MOV EAX,dword ptr [ESP + 0xc]       ; 00437f36
        ;   Label: caseD_3
    MOV EDX,dword ptr [0x00825cf0]      ; 00437f3a | g_InputVertexCount
    INC EAX                             ; 00437f40
    ADD EBX,0x30                        ; 00437f41
    MOV dword ptr [ESP + 0xc],EAX       ; 00437f44
    CMP EAX,EDX                         ; 00437f48
    JL 0x00437ec9                       ; 00437f4a
        ;   XREF to: 00437ec9 (CONDITIONAL_JUMP)  ; engine_clipper.c_clipToFrustumFull_FUN_00437ec9
    MOV ECX,dword ptr [0x00825cf4]      ; 00437f50 | g_OutputVertexCount
        ;   Label: LAB_00437f50
    CMP ECX,0x3                         ; 00437f56
    JL 0x00438194                       ; 00437f59
        ;   XREF to: 00438194 (CONDITIONAL_JUMP)  ; LAB_00438194
    XOR EBX,EBX                         ; 00437f5f
    MOV dword ptr [ESP + 0x10],EBX      ; 00437f61
    TEST ECX,ECX                        ; 00437f65
    JLE 0x00437fff                      ; 00437f67
        ;   XREF to: 00437fff (CONDITIONAL_JUMP)  ; LAB_00437fff
    MOV EBX,0x825d00                    ; 00437f6d | g_ClipperOutputBuffer
    MOV EAX,dword ptr [ESP + 0x10]      ; 00437f72
        ;   Label: LAB_00437f72
    MOV EBP,dword ptr [0x00825cf4]      ; 00437f76 | g_OutputVertexCount
    INC EAX                             ; 00437f7c
    CMP EAX,EBP                         ; 00437f7d
    JNZ 0x00437f83                      ; 00437f7f
        ;   XREF to: 00437f83 (CONDITIONAL_JUMP)  ; LAB_00437f83
    XOR EAX,EBP                         ; 00437f81
    IMUL EAX,EAX,0x30                   ; 00437f83
        ;   Label: LAB_00437f83
    MOV EBP,0x825d00                    ; 00437f86 | g_ClipperOutputBuffer
    MOV EDX,EBX                         ; 00437f8b
    MOV ECX,dword ptr [EBX + 0x8]       ; 00437f8d | g_ClipperOutputBuffer[0].projected_vertex.transformed_z | g_ClipperOutputBuffer[1].projected_vertex.transformed_z
    MOV ESI,dword ptr [EBX]             ; 00437f90 | g_ClipperOutputBuffer | g_ClipperOutputBuffer[1].projected_vertex.transformed_x
    NEG ECX                             ; 00437f92
    ADD EBP,EAX                         ; 00437f94
    XOR EAX,EAX                         ; 00437f96
    CMP ECX,ESI                         ; 00437f98
    JL 0x00437fa1                       ; 00437f9a
        ;   XREF to: 00437fa1 (CONDITIONAL_JUMP)  ; LAB_00437fa1
    MOV EAX,0x1                         ; 00437f9c
    MOV ECX,dword ptr [EBP + 0x8]       ; 00437fa1 | g_ClipperOutputBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_00437fa1
    MOV EDI,dword ptr [EBP]             ; 00437fa4 | g_ClipperOutputBuffer
    NEG ECX                             ; 00437fa7
    CMP ECX,EDI                         ; 00437fa9
    JL 0x00437faf                       ; 00437fab
        ;   XREF to: 00437faf (CONDITIONAL_JUMP)  ; LAB_00437faf
    OR AL,0x2                           ; 00437fad
    CMP EAX,0x3                         ; 00437faf
        ;   Label: LAB_00437faf
    JA 0x00437fe5                       ; 00437fb2
        ;   XREF to: 00437fe5 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x437c6c]  ; 00437fb4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00825cf8],0x30 ; 00437fbb | g_TempVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00437fc2
    MOV ESI,EDX                         ; 00437fc7
    ADD EDI,0x826900                    ; 00437fc9 | g_ClipperWorkingBuffer
    PUSH EDI                            ; 00437fcf | g_ClipperWorkingBuffer
    MOV EAX,ECX                         ; 00437fd0
    SHR ECX,0x2                         ; 00437fd2
    MOVSD.REP ES:EDI,ESI                ; 00437fd5 | g_ClipperOutputBuffer | g_ClipperWorkingBuffer | g_ClipperOutputBuffer[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 00437fd7
    AND CL,0x3                          ; 00437fd9
    MOVSB.REP ES:EDI,ESI                ; 00437fdc | g_ClipperOutputBuffer[0].projected_vertex.transformed_y | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 00437fde
    INC dword ptr [0x00825cf8]          ; 00437fdf | g_TempVertexCount
    MOV EDX,dword ptr [ESP + 0x10]      ; 00437fe5
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x00825cf4]      ; 00437fe9 | g_OutputVertexCount
    INC EDX                             ; 00437fef
    ADD EBX,0x30                        ; 00437ff0
    MOV dword ptr [ESP + 0x10],EDX      ; 00437ff3
    CMP EDX,ECX                         ; 00437ff7
    JL 0x00437f72                       ; 00437ff9
        ;   XREF to: 00437f72 (CONDITIONAL_JUMP)  ; LAB_00437f72
    MOV EBX,dword ptr [0x00825cf8]      ; 00437fff | g_TempVertexCount
        ;   Label: LAB_00437fff
    CMP EBX,0x3                         ; 00438005
    JL 0x00438194                       ; 00438008
        ;   XREF to: 00438194 (CONDITIONAL_JUMP)  ; LAB_00438194
    XOR ESI,ESI                         ; 0043800e
    MOV dword ptr [ESP + 0x18],ESI      ; 00438010
    TEST EBX,EBX                        ; 00438014
    JLE 0x004380a9                      ; 00438016
        ;   XREF to: 004380a9 (CONDITIONAL_JUMP)  ; LAB_004380a9
    MOV EBX,0x826900                    ; 0043801c | g_ClipperWorkingBuffer
    MOV EAX,dword ptr [ESP + 0x18]      ; 00438021
        ;   Label: LAB_00438021
    MOV EBP,dword ptr [0x00825cf8]      ; 00438025 | g_TempVertexCount
    INC EAX                             ; 0043802b
    CMP EAX,EBP                         ; 0043802c
    JNZ 0x00438032                      ; 0043802e
        ;   XREF to: 00438032 (CONDITIONAL_JUMP)  ; LAB_00438032
    XOR EAX,EBP                         ; 00438030
    IMUL EAX,EAX,0x30                   ; 00438032
        ;   Label: LAB_00438032
    MOV EBP,0x826900                    ; 00438035 | g_ClipperWorkingBuffer
    MOV EDX,EBX                         ; 0043803a
    MOV ECX,dword ptr [EBX + 0x4]       ; 0043803c | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y | g_ClipperWorkingBuffer[1].projected_vertex.transformed_y
    MOV ESI,dword ptr [EBX + 0x8]       ; 0043803f | g_ClipperWorkingBuffer[0].projected_vertex.transformed_z | g_ClipperWorkingBuffer[1].projected_vertex.transformed_z
    ADD EBP,EAX                         ; 00438042
    XOR EAX,EAX                         ; 00438044
    CMP ECX,ESI                         ; 00438046
    JL 0x0043804f                       ; 00438048
        ;   XREF to: 0043804f (CONDITIONAL_JUMP)  ; LAB_0043804f
    MOV EAX,0x1                         ; 0043804a
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043804f | g_ClipperWorkingBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0043804f
    CMP EDI,dword ptr [EBP + 0x4]       ; 00438052 | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
    JG 0x00438059                       ; 00438055
        ;   XREF to: 00438059 (CONDITIONAL_JUMP)  ; LAB_00438059
    OR AL,0x2                           ; 00438057
    CMP EAX,0x3                         ; 00438059
        ;   Label: LAB_00438059
    JA 0x0043808f                       ; 0043805c
        ;   XREF to: 0043808f (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x437c7c]  ; 0043805e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00825cfc],0x30 ; 00438065 | g_IntermediateVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043806c
    MOV ESI,EDX                         ; 00438071
    ADD EDI,0x826f00                    ; 00438073 | g_ClipperIntermediateBuffer
    PUSH EDI                            ; 00438079 | g_ClipperIntermediateBuffer
    MOV EAX,ECX                         ; 0043807a
    SHR ECX,0x2                         ; 0043807c
    MOVSD.REP ES:EDI,ESI                ; 0043807f | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x | g_ClipperIntermediateBuffer | g_ClipperWorkingBuffer[1].projected_vertex.transformed_y
    MOV CL,AL                           ; 00438081
    AND CL,0x3                          ; 00438083
    MOVSB.REP ES:EDI,ESI                ; 00438086 | g_ClipperWorkingBuffer[1].projected_vertex.transformed_y | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 00438088
    INC dword ptr [0x00825cfc]          ; 00438089 | g_IntermediateVertexCount
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043808f
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x00825cf8]      ; 00438093 | g_TempVertexCount
    INC EDX                             ; 00438099
    ADD EBX,0x30                        ; 0043809a
    MOV dword ptr [ESP + 0x18],EDX      ; 0043809d
    CMP EDX,ECX                         ; 004380a1
    JL 0x00438021                       ; 004380a3
        ;   XREF to: 00438021 (CONDITIONAL_JUMP)  ; LAB_00438021
    MOV EBX,dword ptr [0x00825cfc]      ; 004380a9 | g_IntermediateVertexCount
        ;   Label: LAB_004380a9
    CMP EBX,0x3                         ; 004380af
    JL 0x00438194                       ; 004380b2
        ;   XREF to: 00438194 (CONDITIONAL_JUMP)  ; LAB_00438194
    XOR ESI,ESI                         ; 004380b8
    MOV dword ptr [ESP + 0x14],ESI      ; 004380ba
    TEST EBX,EBX                        ; 004380be
    JLE 0x00438159                      ; 004380c0
        ;   XREF to: 00438159 (CONDITIONAL_JUMP)  ; LAB_00438159
    MOV EBX,0x826f00                    ; 004380c6 | g_ClipperIntermediateBuffer
    MOV EAX,dword ptr [ESP + 0x14]      ; 004380cb
        ;   Label: LAB_004380cb
    MOV EDI,dword ptr [0x00825cfc]      ; 004380cf | g_IntermediateVertexCount
    INC EAX                             ; 004380d5
    CMP EAX,EDI                         ; 004380d6
    JNZ 0x004380dc                      ; 004380d8
        ;   XREF to: 004380dc (CONDITIONAL_JUMP)  ; LAB_004380dc
    XOR EAX,EDI                         ; 004380da
    IMUL EAX,EAX,0x30                   ; 004380dc
        ;   Label: LAB_004380dc
    MOV EBP,0x826f00                    ; 004380df | g_ClipperIntermediateBuffer
    MOV EDX,EBX                         ; 004380e4
    MOV ECX,dword ptr [EBX + 0x8]       ; 004380e6 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_z | g_ClipperIntermediateBuffer[1].projected_vertex.transformed_z
    MOV ESI,dword ptr [EBX + 0x4]       ; 004380e9 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y | g_ClipperIntermediateBuffer[1].projected_vertex.transformed_y
    NEG ECX                             ; 004380ec
    ADD EBP,EAX                         ; 004380ee
    XOR EAX,EAX                         ; 004380f0
    CMP ECX,ESI                         ; 004380f2
    JL 0x004380fb                       ; 004380f4
        ;   XREF to: 004380fb (CONDITIONAL_JUMP)  ; LAB_004380fb
    MOV EAX,0x1                         ; 004380f6
    MOV ECX,dword ptr [EBP + 0x8]       ; 004380fb | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_004380fb
    MOV EDI,dword ptr [EBP + 0x4]       ; 004380fe | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    NEG ECX                             ; 00438101
    CMP ECX,EDI                         ; 00438103
    JL 0x00438109                       ; 00438105
        ;   XREF to: 00438109 (CONDITIONAL_JUMP)  ; LAB_00438109
    OR AL,0x2                           ; 00438107
    CMP EAX,0x3                         ; 00438109
        ;   Label: LAB_00438109
    JA 0x0043813f                       ; 0043810c
        ;   XREF to: 0043813f (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x437c8c]  ; 0043810e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00824e24],0x30 ; 00438115 | g_ClippedVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043811c
    MOV ESI,EDX                         ; 00438121
    ADD EDI,0x824e28                    ; 00438123 | g_ClippedVertexBuffer
    PUSH EDI                            ; 00438129 | g_ClippedVertexBuffer
    MOV EAX,ECX                         ; 0043812a
    SHR ECX,0x2                         ; 0043812c
    MOVSD.REP ES:EDI,ESI                ; 0043812f | g_ClipperIntermediateBuffer | g_ClippedVertexBuffer | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 00438131
    AND CL,0x3                          ; 00438133
    MOVSB.REP ES:EDI,ESI                ; 00438136 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 00438138
    INC dword ptr [0x00824e24]          ; 00438139 | g_ClippedVertexCount
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043813f
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x00825cfc]      ; 00438143 | g_IntermediateVertexCount
    INC EDX                             ; 00438149
    ADD EBX,0x30                        ; 0043814a
    MOV dword ptr [ESP + 0x14],EDX      ; 0043814d
    CMP EDX,ECX                         ; 00438151
    JL 0x004380cb                       ; 00438153
        ;   XREF to: 004380cb (CONDITIONAL_JUMP)  ; LAB_004380cb
    MOV EBX,dword ptr [0x00824e24]      ; 00438159 | g_ClippedVertexCount
        ;   Label: LAB_00438159
    CMP EBX,0x3                         ; 0043815f
    JL 0x00438194                       ; 00438162
        ;   XREF to: 00438194 (CONDITIONAL_JUMP)  ; LAB_00438194
    MOV EAX,0x824e28                    ; 00438164 | g_ClippedVertexBuffer
    XOR EBP,EBP                         ; 00438169
    TEST EBX,EBX                        ; 0043816b
    JLE 0x00438194                      ; 0043816d
        ;   XREF to: 00438194 (CONDITIONAL_JUMP)  ; LAB_00438194
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043816f | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[1].projected_vertex.transformed_z
        ;   Label: LAB_0043816f
    TEST ECX,ECX                        ; 00438172
    JNZ 0x0043839a                      ; 00438174
        ;   XREF to: 0043839a (CONDITIONAL_JUMP)  ; LAB_0043839a
    MOV dword ptr [EAX + 0x8],0x1       ; 0043817a | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[1].projected_vertex.transformed_z
    MOV dword ptr [EAX],ECX             ; 00438181 | g_ClippedVertexBuffer | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    MOV dword ptr [EAX + 0x4],ECX       ; 00438183 | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[1].projected_vertex.transformed_y
    MOV EDX,dword ptr [0x00824e24]      ; 00438186 | g_ClippedVertexCount
        ;   Label: LAB_00438186
    INC EBP                             ; 0043818c
    ADD EAX,0x30                        ; 0043818d
    CMP EBP,EDX                         ; 00438190
    JL 0x0043816f                       ; 00438192
        ;   XREF to: 0043816f (CONDITIONAL_JUMP)  ; LAB_0043816f
    XOR EAX,EAX                         ; 00438194
        ;   Label: LAB_00438194
    ADD ESP,0x1c                        ; 00438196
    POP EBP                             ; 00438199
    POP EDI                             ; 0043819a
    POP ESI                             ; 0043819b
    POP EBX                             ; 0043819c
    RET                                 ; 0043819d
    IMUL EAX,dword ptr [0x00825cf4],0x30 ; 0043819e | g_OutputVertexCount
        ;   Label: caseD_1
    ADD EAX,0x825d00                    ; 004381a5 | g_ClipperOutputBuffer
    PUSH EAX                            ; 004381aa | g_ClipperOutputBuffer
    PUSH EDX                            ; 004381ab | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 004381ac
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230 ; 004381ad
        ;   XREF to: 00437230 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00825cf4]      ; 004381b2 | g_OutputVertexCount
    INC ESI                             ; 004381b8
    ADD ESP,0xc                         ; 004381b9
    MOV dword ptr [0x00825cf4],ESI      ; 004381bc | g_OutputVertexCount
    JMP 0x00437f36                      ; 004381c2
        ;   XREF to: 00437f36 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00825cf4],0x30 ; 004381c7 | g_OutputVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 004381ce
    MOV ESI,EDX                         ; 004381d3
    ADD EDI,0x825d00                    ; 004381d5 | g_ClipperOutputBuffer
    PUSH EDI                            ; 004381db | g_ClipperOutputBuffer
    MOV EAX,ECX                         ; 004381dc
    SHR ECX,0x2                         ; 004381de
    MOVSD.REP ES:EDI,ESI                ; 004381e1 | g_ClipperInputBuffer[1].projected_vertex.transformed_x | g_ClipperOutputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_y
    MOV CL,AL                           ; 004381e3
    AND CL,0x3                          ; 004381e5
    MOVSB.REP ES:EDI,ESI                ; 004381e8 | g_ClipperInputBuffer[1].projected_vertex.transformed_y | g_ClipperOutputBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 004381ea
    MOV ECX,dword ptr [0x00825cf4]      ; 004381eb | g_OutputVertexCount
    INC ECX                             ; 004381f1
    MOV dword ptr [0x00825cf4],ECX      ; 004381f2 | g_OutputVertexCount
    IMUL EAX,ECX,0x30                   ; 004381f8
    ADD EAX,0x825d00                    ; 004381fb | g_ClipperOutputBuffer
    PUSH EAX                            ; 00438200 | g_ClipperOutputBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 00438201
    PUSH EDX                            ; 00438202 | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230 ; 00438203
        ;   XREF to: 00437230 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00825cf4]      ; 00438208 | g_OutputVertexCount
    INC EDI                             ; 0043820e
    ADD ESP,0xc                         ; 0043820f
    MOV dword ptr [0x00825cf4],EDI      ; 00438212 | g_OutputVertexCount
    JMP 0x00437f36                      ; 00438218
        ;   XREF to: 00437f36 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x00825cf8],0x30 ; 0043821d | g_TempVertexCount
        ;   Label: caseD_1
    ADD EAX,0x826900                    ; 00438224 | g_ClipperWorkingBuffer
    PUSH EAX                            ; 00438229 | g_ClipperWorkingBuffer
    PUSH EDX                            ; 0043822a | g_ClipperOutputBuffer
    PUSH EBP                            ; 0043822b
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360 ; 0043822c
        ;   XREF to: 00437360 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00825cf8]      ; 00438231 | g_TempVertexCount
    INC ESI                             ; 00438237
    ADD ESP,0xc                         ; 00438238
    MOV dword ptr [0x00825cf8],ESI      ; 0043823b | g_TempVertexCount
    JMP 0x00437fe5                      ; 00438241
        ;   XREF to: 00437fe5 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00825cf8],0x30 ; 00438246 | g_TempVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043824d
    MOV ESI,EDX                         ; 00438252
    ADD EDI,0x826900                    ; 00438254 | g_ClipperWorkingBuffer
    PUSH EDI                            ; 0043825a | g_ClipperWorkingBuffer
    MOV EAX,ECX                         ; 0043825b
    SHR ECX,0x2                         ; 0043825d
    MOVSD.REP ES:EDI,ESI                ; 00438260 | g_ClipperOutputBuffer | g_ClipperWorkingBuffer | g_ClipperOutputBuffer[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 00438262
    AND CL,0x3                          ; 00438264
    MOVSB.REP ES:EDI,ESI                ; 00438267 | g_ClipperOutputBuffer[0].projected_vertex.transformed_y | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 00438269
    MOV ECX,dword ptr [0x00825cf8]      ; 0043826a | g_TempVertexCount
    INC ECX                             ; 00438270
    MOV dword ptr [0x00825cf8],ECX      ; 00438271 | g_TempVertexCount
    IMUL EAX,ECX,0x30                   ; 00438277
    ADD EAX,0x826900                    ; 0043827a | g_ClipperWorkingBuffer
    PUSH EAX                            ; 0043827f | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 00438280
    PUSH EDX                            ; 00438281 | g_ClipperOutputBuffer
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360 ; 00438282
        ;   XREF to: 00437360 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00825cf8]      ; 00438287 | g_TempVertexCount
    INC EDI                             ; 0043828d
    ADD ESP,0xc                         ; 0043828e
    MOV dword ptr [0x00825cf8],EDI      ; 00438291 | g_TempVertexCount
    JMP 0x00437fe5                      ; 00438297
        ;   XREF to: 00437fe5 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x00825cfc],0x30 ; 0043829c | g_IntermediateVertexCount
        ;   Label: caseD_1
    ADD EAX,0x826f00                    ; 004382a3 | g_ClipperIntermediateBuffer
    PUSH EAX                            ; 004382a8 | g_ClipperIntermediateBuffer
    PUSH EDX                            ; 004382a9 | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 004382aa
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490 ; 004382ab
        ;   XREF to: 00437490 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00825cfc]      ; 004382b0 | g_IntermediateVertexCount
    INC ESI                             ; 004382b6
    ADD ESP,0xc                         ; 004382b7
    MOV dword ptr [0x00825cfc],ESI      ; 004382ba | g_IntermediateVertexCount
    JMP 0x0043808f                      ; 004382c0
        ;   XREF to: 0043808f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00825cfc],0x30 ; 004382c5 | g_IntermediateVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 004382cc
    MOV ESI,EDX                         ; 004382d1
    ADD EDI,0x826f00                    ; 004382d3 | g_ClipperIntermediateBuffer
    PUSH EDI                            ; 004382d9 | g_ClipperIntermediateBuffer
    MOV EAX,ECX                         ; 004382da
    SHR ECX,0x2                         ; 004382dc
    MOVSD.REP ES:EDI,ESI                ; 004382df | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x | g_ClipperIntermediateBuffer | g_ClipperWorkingBuffer[1].projected_vertex.transformed_y
    MOV CL,AL                           ; 004382e1
    AND CL,0x3                          ; 004382e3
    MOVSB.REP ES:EDI,ESI                ; 004382e6 | g_ClipperWorkingBuffer[1].projected_vertex.transformed_y | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 004382e8
    MOV ECX,dword ptr [0x00825cfc]      ; 004382e9 | g_IntermediateVertexCount
    INC ECX                             ; 004382ef
    MOV dword ptr [0x00825cfc],ECX      ; 004382f0 | g_IntermediateVertexCount
    IMUL EAX,ECX,0x30                   ; 004382f6
    ADD EAX,0x826f00                    ; 004382f9 | g_ClipperIntermediateBuffer
    PUSH EAX                            ; 004382fe | g_ClipperIntermediateBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 004382ff
    PUSH EDX                            ; 00438300 | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490 ; 00438301
        ;   XREF to: 00437490 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00825cfc]      ; 00438306 | g_IntermediateVertexCount
    INC EDI                             ; 0043830c
    ADD ESP,0xc                         ; 0043830d
    MOV dword ptr [0x00825cfc],EDI      ; 00438310 | g_IntermediateVertexCount
    JMP 0x0043808f                      ; 00438316
        ;   XREF to: 0043808f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x00824e24],0x30 ; 0043831b | g_ClippedVertexCount
        ;   Label: caseD_1
    ADD EAX,0x824e28                    ; 00438322 | g_ClippedVertexBuffer
    PUSH EAX                            ; 00438327 | g_ClippedVertexBuffer
    PUSH EDX                            ; 00438328 | g_ClipperIntermediateBuffer
    PUSH EBP                            ; 00438329
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0 ; 0043832a
        ;   XREF to: 004375c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00824e24]      ; 0043832f | g_ClippedVertexCount
    INC ESI                             ; 00438335
    ADD ESP,0xc                         ; 00438336
    MOV dword ptr [0x00824e24],ESI      ; 00438339 | g_ClippedVertexCount
    JMP 0x0043813f                      ; 0043833f
        ;   XREF to: 0043813f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00824e24],0x30 ; 00438344 | g_ClippedVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043834b
    MOV ESI,EDX                         ; 00438350
    ADD EDI,0x824e28                    ; 00438352 | g_ClippedVertexBuffer
    PUSH EDI                            ; 00438358 | g_ClippedVertexBuffer
    MOV EAX,ECX                         ; 00438359
    SHR ECX,0x2                         ; 0043835b
    MOVSD.REP ES:EDI,ESI                ; 0043835e | g_ClipperIntermediateBuffer | g_ClippedVertexBuffer | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 00438360
    AND CL,0x3                          ; 00438362
    MOVSB.REP ES:EDI,ESI                ; 00438365 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 00438367
    MOV ECX,dword ptr [0x00824e24]      ; 00438368 | g_ClippedVertexCount
    INC ECX                             ; 0043836e
    MOV dword ptr [0x00824e24],ECX      ; 0043836f | g_ClippedVertexCount
    IMUL EAX,ECX,0x30                   ; 00438375
    ADD EAX,0x824e28                    ; 00438378 | g_ClippedVertexBuffer
    PUSH EAX                            ; 0043837d | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 0043837e
    PUSH EDX                            ; 0043837f | g_ClipperIntermediateBuffer
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0 ; 00438380
        ;   XREF to: 004375c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00824e24]      ; 00438385 | g_ClippedVertexCount
    INC EDI                             ; 0043838b
    ADD ESP,0xc                         ; 0043838c
    MOV dword ptr [0x00824e24],EDI      ; 0043838f | g_ClippedVertexCount
    JMP 0x0043813f                      ; 00438395
        ;   XREF to: 0043813f (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP ECX,dword ptr [EAX]             ; 0043839a | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
        ;   Label: LAB_0043839a
    JGE 0x004383a5                      ; 0043839c
        ;   XREF to: 004383a5 (CONDITIONAL_JUMP)  ; LAB_004383a5
    MOV dword ptr [EAX],ECX             ; 0043839e | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    JMP 0x00438186                      ; 004383a0
        ;   XREF to: 00438186 (UNCONDITIONAL_JUMP)  ; LAB_00438186
    MOV EDX,ECX                         ; 004383a5
        ;   Label: LAB_004383a5
    MOV ESI,dword ptr [EAX]             ; 004383a7 | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    NEG EDX                             ; 004383a9
    CMP EDX,ESI                         ; 004383ab
    JLE 0x004383b6                      ; 004383ad
        ;   XREF to: 004383b6 (CONDITIONAL_JUMP)  ; LAB_004383b6
    MOV dword ptr [EAX],EDX             ; 004383af | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    JMP 0x00438186                      ; 004383b1
        ;   XREF to: 00438186 (UNCONDITIONAL_JUMP)  ; LAB_00438186
    MOV EDI,dword ptr [EAX + 0x8]       ; 004383b6 | g_ClippedVertexBuffer[1].projected_vertex.transformed_z
        ;   Label: LAB_004383b6
    MOV ECX,dword ptr [EAX + 0x4]       ; 004383b9 | g_ClippedVertexBuffer[1].projected_vertex.transformed_y
    CMP ECX,EDI                         ; 004383bc
    JLE 0x004383c8                      ; 004383be
        ;   XREF to: 004383c8 (CONDITIONAL_JUMP)  ; LAB_004383c8
    MOV dword ptr [EAX + 0x4],EDI       ; 004383c0 | g_ClippedVertexBuffer[1].projected_vertex.transformed_y
    JMP 0x00438186                      ; 004383c3
        ;   XREF to: 00438186 (UNCONDITIONAL_JUMP)  ; LAB_00438186
    CMP EDX,ECX                         ; 004383c8
        ;   Label: LAB_004383c8
    JLE 0x00438186                      ; 004383ca
        ;   XREF to: 00438186 (CONDITIONAL_JUMP)  ; LAB_00438186
    MOV dword ptr [EAX + 0x4],EDX       ; 004383d0 | g_ClippedVertexBuffer[1].projected_vertex.transformed_y
    JMP 0x00438186                      ; 004383d3
        ;   XREF to: 00438186 (UNCONDITIONAL_JUMP)  ; LAB_00438186

