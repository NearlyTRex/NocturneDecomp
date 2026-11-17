; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_0043bac0(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[10]:
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d90 at 00406e72
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c50 at 00406d2f
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0 at 004055b4
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600 at 004056d7
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406af0 at 00406bb5
;   engine_3d.c_renderPolygonFogColorOp6_FUN_00403b70 at 00403c41
;   engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_004075b0 at 004076ed
;   engine_3d.c_renderPolygonWithRenderFlags_FUN_004074b0 at 00407596
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 at 0046b1f4
;   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0046de70 at 0046e02e
;
; Referenced Globals:
;   void* switchdataD_0043ba78 = 0043bd4c
;   void* PTR_caseD_3_0043ba84 = 0043bd76
;   void* PTR_caseD_1_0043ba8c = 0043c05f
;   void* PTR_caseD_3_0043ba94 = 0043be25
;   void* switchdataD_0043ba98 = 0043bea5
;   void* PTR_caseD_3_0043baa4 = 0043becf
;   void* PTR_caseD_1_0043baac = 0043c15d
;   void* PTR_caseD_3_0043bab4 = 0043bf7f
;   uint g_VertexProcessingEnabled = 0x1
;   SRenderVertex[20000] g_SRenderVertex_ARRAY_0060b014
;   undefined4 g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.transformed_y
;   undefined4 g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_x
;   int g_CullingMode
;   int g_ClippedVertexCount
;   SRenderVertex[16] g_SRenderVertex_ARRAY_007e3e8c
;   ... and 39 more
;
; Called Functions:
;   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043ac50
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ab20
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00517480
;   engine_prim.c_renderScanlinePolygon_FUN_00516de0
;   engine_special.cpp_drawPolygon2_FUN_00565c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043bac0
        ;   Label: engine_clipper.c_clipPolygonToViewport_FUN_0043bac0
    PUSH ESI                            ; 0043bac1
    PUSH EDI                            ; 0043bac2
    PUSH EBP                            ; 0043bac3
    SUB ESP,0x20                        ; 0043bac4
    MOV EBX,dword ptr [ESP + 0x34]      ; 0043bac7
    MOV EDX,dword ptr [ESP + 0x38]      ; 0043bacb
    CMP dword ptr [0x005fba40],0x0      ; 0043bacf | g_VertexProcessingEnabled
    JZ 0x0043bbac                       ; 0043bad6
        ;   XREF to: 0043bbac (CONDITIONAL_JUMP)  ; LAB_0043bbac
    MOV ECX,0xffffffff                  ; 0043badc
    MOV dword ptr [ESP + 0x4],EDX       ; 0043bae1
    MOV EBP,EBX                         ; 0043bae5
    XOR ESI,ESI                         ; 0043bae7
    XOR EAX,EAX                         ; 0043bae9
    TEST EBX,EBX                        ; 0043baeb
    JLE 0x0043bb0b                      ; 0043baed
        ;   XREF to: 0043bb0b (CONDITIONAL_JUMP)  ; LAB_0043bb0b
    IMUL EBX,dword ptr [EDX],0x30       ; 0043baef
        ;   Label: LAB_0043baef
    MOV EBX,dword ptr [EBX + 0x60b024]  ; 0043baf2 | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_x
    TEST EBX,0x80000000                 ; 0043baf8
    JZ 0x0043bb01                       ; 0043bafe
        ;   XREF to: 0043bb01 (CONDITIONAL_JUMP)  ; LAB_0043bb01
    INC ESI                             ; 0043bb00
    ADD EDX,0x4                         ; 0043bb01
        ;   Label: LAB_0043bb01
    INC EAX                             ; 0043bb04
    AND ECX,EBX                         ; 0043bb05
    CMP EAX,EBP                         ; 0043bb07
    JL 0x0043baef                       ; 0043bb09
        ;   XREF to: 0043baef (CONDITIONAL_JUMP)  ; LAB_0043baef
    CMP ESI,EBP                         ; 0043bb0b
        ;   Label: LAB_0043bb0b
    JNZ 0x0043bb18                      ; 0043bb0d
        ;   XREF to: 0043bb18 (CONDITIONAL_JUMP)  ; LAB_0043bb18
    TEST CL,0xff                        ; 0043bb0f
    JNZ 0x0043bbb8                      ; 0043bb12
        ;   XREF to: 0043bbb8 (CONDITIONAL_JUMP)  ; LAB_0043bbb8
    TEST ESI,ESI                        ; 0043bb18
        ;   Label: LAB_0043bb18
    JNZ 0x0043bc85                      ; 0043bb1a
        ;   XREF to: 0043bc85 (CONDITIONAL_JUMP)  ; LAB_0043bc85
    CMP dword ptr [0x01c6cee8],0x0      ; 0043bb20 | g_INT_01c6cee8
    JZ 0x0043bc14                       ; 0043bb27
        ;   XREF to: 0043bc14 (CONDITIONAL_JUMP)  ; LAB_0043bc14
    XOR EAX,EAX                         ; 0043bb2d
    TEST EBP,EBP                        ; 0043bb2f
    JLE 0x0043bb50                      ; 0043bb31
        ;   XREF to: 0043bb50 (CONDITIONAL_JUMP)  ; LAB_0043bb50
    MOV EBX,dword ptr [ESP + 0x4]       ; 0043bb33
    IMUL ECX,dword ptr [EBX],0x30       ; 0043bb37
        ;   Label: LAB_0043bb37
    INC EAX                             ; 0043bb3a
    ADD ECX,0x60b014                    ; 0043bb3b | g_SRenderVertex_ARRAY_0060b014
    ADD EBX,0x4                         ; 0043bb41
    MOV dword ptr [EAX*0x4 + 0x7e4488],ECX ; 0043bb44 | g_ClipperCullingPointers | g_ClipperCullingPointers[1]
    CMP EAX,EBP                         ; 0043bb4b
    JL 0x0043bb37                       ; 0043bb4d
        ;   XREF to: 0043bb37 (CONDITIONAL_JUMP)  ; LAB_0043bb37
    NOP                                 ; 0043bb4f
    CMP dword ptr [0x007303fc],0x0      ; 0043bb50 | g_CullingMode
        ;   Label: LAB_0043bb50
    JZ 0x0043bbe6                       ; 0043bb57
        ;   XREF to: 0043bbe6 (CONDITIONAL_JUMP)  ; LAB_0043bbe6
    CMP EBP,0x3                         ; 0043bb5d
    JLE 0x0043bbc5                      ; 0043bb60
        ;   XREF to: 0043bbc5 (CONDITIONAL_JUMP)  ; LAB_0043bbc5
    LEA EAX,[EBP + -0x2]                ; 0043bb62
    XOR EBX,EBX                         ; 0043bb65
    MOV dword ptr [ESP],EAX             ; 0043bb67
    LEA EDI,[EAX*0x4 + 0x0]             ; 0043bb6a
    XOR ESI,ESI                         ; 0043bb71
    TEST EDI,EDI                        ; 0043bb73
    JLE 0x0043bb9f                      ; 0043bb75
        ;   XREF to: 0043bb9f (CONDITIONAL_JUMP)  ; LAB_0043bb9f
    MOV EAX,dword ptr [EBX + 0x7e4494]  ; 0043bb77 | g_ClipperCullingPointers[2] | g_ClipperCullingPointers[3]
        ;   Label: LAB_0043bb77
    PUSH EAX                            ; 0043bb7d
    MOV EDX,dword ptr [EBX + 0x7e4490]  ; 0043bb7e | g_ClipperCullingPointers[1] | g_ClipperCullingPointers[2]
    PUSH EDX                            ; 0043bb84
    MOV ECX,dword ptr [0x007e448c]      ; 0043bb85 | g_ClipperCullingPointers
    PUSH ECX                            ; 0043bb8b
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0 ; 0043bb8c
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0043bb91
    TEST EAX,EAX                        ; 0043bb94
    JZ 0x0043bbc2                       ; 0043bb96
        ;   XREF to: 0043bbc2 (CONDITIONAL_JUMP)  ; LAB_0043bbc2
    ADD EBX,0x4                         ; 0043bb98
        ;   Label: LAB_0043bb98
    CMP EBX,EDI                         ; 0043bb9b
    JL 0x0043bb77                       ; 0043bb9d
        ;   XREF to: 0043bb77 (CONDITIONAL_JUMP)  ; LAB_0043bb77
    CMP ESI,dword ptr [ESP]             ; 0043bb9f
        ;   Label: LAB_0043bb9f
    JNZ 0x0043bbe6                      ; 0043bba2
        ;   XREF to: 0043bbe6 (CONDITIONAL_JUMP)  ; LAB_0043bbe6
    ADD ESP,0x20                        ; 0043bba4
        ;   Label: LAB_0043bba4
    POP EBP                             ; 0043bba7
    POP EDI                             ; 0043bba8
    POP ESI                             ; 0043bba9
    POP EBX                             ; 0043bbaa
    RET                                 ; 0043bbab
    PUSH EBX                            ; 0043bbac
        ;   Label: LAB_0043bbac
    PUSH EDX                            ; 0043bbad
    CALL engine_prim.c_renderIndexedPolygonAdvanced_FUN_00517480 ; 0043bbae
        ;   XREF to: 00517480 (UNCONDITIONAL_CALL)  ; void engine_prim.c_renderIndexedPolygonAdvanced_FUN_00517480(int * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 0043bbb3
    JMP 0x0043bba4                      ; 0043bbb6
        ;   XREF to: 0043bba4 (UNCONDITIONAL_JUMP)  ; LAB_0043bba4
    XOR ESI,EBP                         ; 0043bbb8
        ;   Label: LAB_0043bbb8
    MOV dword ptr [0x007e3e88],ESI      ; 0043bbba | g_ClippedVertexCount
    JMP 0x0043bba4                      ; 0043bbc0
        ;   XREF to: 0043bba4 (UNCONDITIONAL_JUMP)  ; LAB_0043bba4
    INC ESI                             ; 0043bbc2
        ;   Label: LAB_0043bbc2
    JMP 0x0043bb98                      ; 0043bbc3
        ;   XREF to: 0043bb98 (UNCONDITIONAL_JUMP)  ; LAB_0043bb98
    MOV EDX,dword ptr [0x007e4494]      ; 0043bbc5 | g_ClipperCullingPointers[2]
        ;   Label: LAB_0043bbc5
    PUSH EDX                            ; 0043bbcb
    MOV ECX,dword ptr [0x007e4490]      ; 0043bbcc | g_ClipperCullingPointers[1]
    PUSH ECX                            ; 0043bbd2
    MOV EBX,dword ptr [0x007e448c]      ; 0043bbd3 | g_ClipperCullingPointers
    PUSH EBX                            ; 0043bbd9
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0 ; 0043bbda
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0043bbdf
    TEST EAX,EAX                        ; 0043bbe2
    JZ 0x0043bba4                       ; 0043bbe4
        ;   XREF to: 0043bba4 (CONDITIONAL_JUMP)  ; LAB_0043bba4
    MOV ESI,dword ptr [0x01c6e2b4]      ; 0043bbe6 | g_RenderStateFlags
        ;   Label: LAB_0043bbe6
    PUSH ESI                            ; 0043bbec
    LEA EAX,[EBP + -0x2]                ; 0043bbed
    MOV EBX,dword ptr [0x01ed3198]      ; 0043bbf0 | g_RenderedTriangleCount
    PUSH EBP                            ; 0043bbf6
    ADD EBX,EAX                         ; 0043bbf7
    PUSH 0x7e448c                       ; 0043bbf9 | g_ClipperCullingPointers
    MOV dword ptr [0x01ed3198],EBX      ; 0043bbfe | g_RenderedTriangleCount
    CALL engine_special.cpp_drawPolygon2_FUN_00565c40 ; 0043bc04
        ;   XREF to: 00565c40 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_00565c40(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 0043bc09
    ADD ESP,0x20                        ; 0043bc0c
    POP EBP                             ; 0043bc0f
    POP EDI                             ; 0043bc10
    POP ESI                             ; 0043bc11
    POP EBX                             ; 0043bc12
    RET                                 ; 0043bc13
    MOV dword ptr [ESP + 0x8],ESI       ; 0043bc14
        ;   Label: LAB_0043bc14
    MOV dword ptr [0x007e3e88],EBP      ; 0043bc18 | g_ClippedVertexCount
    TEST EBP,EBP                        ; 0043bc1e
    JLE 0x0043bc60                      ; 0043bc20
        ;   XREF to: 0043bc60 (CONDITIONAL_JUMP)  ; LAB_0043bc60
    MOV EBX,dword ptr [ESP + 0x4]       ; 0043bc22
    MOV EDX,0x7e3e8c                    ; 0043bc26 | g_SRenderVertex_ARRAY_007e3e8c
    IMUL ESI,dword ptr [EBX],0x30       ; 0043bc2b
        ;   Label: LAB_0043bc2b
    MOV ECX,0x30                        ; 0043bc2e
    ADD ESI,0x60b014                    ; 0043bc33 | g_SRenderVertex_ARRAY_0060b014
    MOV EDI,EDX                         ; 0043bc39
    PUSH EDI                            ; 0043bc3b | g_SRenderVertex_ARRAY_007e3e8c | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_x
    MOV EAX,ECX                         ; 0043bc3c
    SHR ECX,0x2                         ; 0043bc3e
    MOVSD.REP ES:EDI,ESI                ; 0043bc41 | g_SRenderVertex_ARRAY_0060b014 | g_SRenderVertex_ARRAY_007e3e8c | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043bc43
    AND CL,0x3                          ; 0043bc45
    MOVSB.REP ES:EDI,ESI                ; 0043bc48 | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.transformed_y
    POP EDI                             ; 0043bc4a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043bc4b
    ADD EBX,0x4                         ; 0043bc4f
    INC EAX                             ; 0043bc52
    ADD EDX,0x30                        ; 0043bc53
    MOV dword ptr [ESP + 0x8],EAX       ; 0043bc56
    CMP EBP,EAX                         ; 0043bc5a
    JG 0x0043bc2b                       ; 0043bc5c
        ;   XREF to: 0043bc2b (CONDITIONAL_JUMP)  ; LAB_0043bc2b
    MOV EAX,EAX                         ; 0043bc5e
    MOV EBX,dword ptr [0x007e3e88]      ; 0043bc60 | g_ClippedVertexCount
        ;   Label: LAB_0043bc60
    CMP EBX,0x2                         ; 0043bc66
    JLE 0x0043bba4                      ; 0043bc69
        ;   XREF to: 0043bba4 (CONDITIONAL_JUMP)  ; LAB_0043bba4
    PUSH EBX                            ; 0043bc6f
    PUSH 0x7e3e8c                       ; 0043bc70 | g_SRenderVertex_ARRAY_007e3e8c
    CALL engine_prim.c_renderScanlinePolygon_FUN_00516de0 ; 0043bc75
        ;   XREF to: 00516de0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_renderScanlinePolygon_FUN_00516de0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0043bc7a
    ADD ESP,0x20                        ; 0043bc7d
    POP EBP                             ; 0043bc80
    POP EDI                             ; 0043bc81
    POP ESI                             ; 0043bc82
    POP EBX                             ; 0043bc83
    RET                                 ; 0043bc84
    XOR EBX,EBX                         ; 0043bc85
        ;   Label: LAB_0043bc85
    MOV dword ptr [0x007e4d54],EBP      ; 0043bc87 | g_InputVertexCount
    MOV dword ptr [0x007e4d58],EBX      ; 0043bc8d | g_OutputVertexCount
    MOV dword ptr [0x007e4d5c],EBX      ; 0043bc93 | g_TempVertexCount
    MOV dword ptr [0x007e4d60],EBX      ; 0043bc99 | g_IntermediateVertexCount
    MOV dword ptr [0x007e3e88],EBX      ; 0043bc9f | g_ClippedVertexCount
    MOV dword ptr [ESP + 0xc],EBX       ; 0043bca5
    TEST EBP,EBP                        ; 0043bca9
    JLE 0x0043bcf0                      ; 0043bcab
        ;   XREF to: 0043bcf0 (CONDITIONAL_JUMP)  ; LAB_0043bcf0
    MOV EBX,dword ptr [ESP + 0x4]       ; 0043bcad
    MOV EDX,0x7e5364                    ; 0043bcb1 | g_ClipperInputBuffer
    IMUL ESI,dword ptr [EBX],0x30       ; 0043bcb6
        ;   Label: LAB_0043bcb6
    MOV ECX,0x30                        ; 0043bcb9
    MOV EDI,EDX                         ; 0043bcbe
    ADD ESI,0x60b014                    ; 0043bcc0 | g_SRenderVertex_ARRAY_0060b014
    PUSH EDI                            ; 0043bcc6 | g_ClipperInputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    MOV EAX,ECX                         ; 0043bcc7
    SHR ECX,0x2                         ; 0043bcc9
    MOVSD.REP ES:EDI,ESI                ; 0043bccc | g_SRenderVertex_ARRAY_0060b014 | g_ClipperInputBuffer | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043bcce
    AND CL,0x3                          ; 0043bcd0
    MOVSB.REP ES:EDI,ESI                ; 0043bcd3 | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.transformed_y | g_ClipperInputBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 0043bcd5
    MOV ECX,dword ptr [ESP + 0xc]       ; 0043bcd6
    ADD EBX,0x4                         ; 0043bcda
    INC ECX                             ; 0043bcdd
    ADD EDX,0x30                        ; 0043bcde
    MOV dword ptr [ESP + 0xc],ECX       ; 0043bce1
    CMP EBP,ECX                         ; 0043bce5
    JG 0x0043bcb6                       ; 0043bce7
        ;   XREF to: 0043bcb6 (CONDITIONAL_JUMP)  ; LAB_0043bcb6
    LEA EAX,[EAX]                       ; 0043bce9
    NOP                                 ; 0043bcef
    XOR EDI,EDI                         ; 0043bcf0
        ;   Label: LAB_0043bcf0
    MOV EBP,dword ptr [0x007e4d54]      ; 0043bcf2 | g_InputVertexCount
    MOV dword ptr [ESP + 0x10],EDI      ; 0043bcf8
    TEST EBP,EBP                        ; 0043bcfc
    JLE 0x0043bd90                      ; 0043bcfe
        ;   XREF to: 0043bd90 (CONDITIONAL_JUMP)  ; LAB_0043bd90
    MOV EBX,0x7e5364                    ; 0043bd04 | g_ClipperInputBuffer
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043bd09
        ;   Label: LAB_0043bd09
    MOV EDI,dword ptr [0x007e4d54]      ; 0043bd0d | g_InputVertexCount
    INC EAX                             ; 0043bd13
    CMP EAX,EDI                         ; 0043bd14
    JNZ 0x0043bd1a                      ; 0043bd16
        ;   XREF to: 0043bd1a (CONDITIONAL_JUMP)  ; LAB_0043bd1a
    XOR EAX,EDI                         ; 0043bd18
    IMUL EAX,EAX,0x30                   ; 0043bd1a
        ;   Label: LAB_0043bd1a
    MOV EBP,0x7e5364                    ; 0043bd1d | g_ClipperInputBuffer
    MOV EDX,EBX                         ; 0043bd22
    MOV ECX,dword ptr [EBX]             ; 0043bd24 | g_ClipperInputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    MOV ESI,dword ptr [EBX + 0x8]       ; 0043bd26 | g_ClipperInputBuffer[0].projected_vertex.transformed_z | g_ClipperInputBuffer[1].projected_vertex.transformed_z
    ADD EBP,EAX                         ; 0043bd29
    XOR EAX,EAX                         ; 0043bd2b
    CMP ECX,ESI                         ; 0043bd2d
    JL 0x0043bd36                       ; 0043bd2f
        ;   XREF to: 0043bd36 (CONDITIONAL_JUMP)  ; LAB_0043bd36
    MOV EAX,0x1                         ; 0043bd31
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043bd36 | g_ClipperInputBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0043bd36
    CMP EDI,dword ptr [EBP]             ; 0043bd39 | g_ClipperInputBuffer
    JG 0x0043bd40                       ; 0043bd3c
        ;   XREF to: 0043bd40 (CONDITIONAL_JUMP)  ; LAB_0043bd40
    OR AL,0x2                           ; 0043bd3e
    CMP EAX,0x3                         ; 0043bd40
        ;   Label: LAB_0043bd40
    JA 0x0043bd76                       ; 0043bd43
        ;   XREF to: 0043bd76 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43ba78]  ; 0043bd45 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007e4d58],0x30 ; 0043bd4c | g_OutputVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043bd53
    MOV ESI,EDX                         ; 0043bd58
    ADD EDI,0x7e4d64                    ; 0043bd5a | g_ClipperOutputBuffer
    PUSH EDI                            ; 0043bd60 | g_ClipperOutputBuffer
    MOV EAX,ECX                         ; 0043bd61
    SHR ECX,0x2                         ; 0043bd63
    MOVSD.REP ES:EDI,ESI                ; 0043bd66 | g_ClipperInputBuffer[1].projected_vertex.transformed_x | g_ClipperOutputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043bd68
    AND CL,0x3                          ; 0043bd6a
    MOVSB.REP ES:EDI,ESI                ; 0043bd6d | g_ClipperInputBuffer[1].projected_vertex.transformed_y | g_ClipperOutputBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 0043bd6f
    INC dword ptr [0x007e4d58]          ; 0043bd70 | g_OutputVertexCount
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043bd76
        ;   Label: caseD_3
    MOV EDX,dword ptr [0x007e4d54]      ; 0043bd7a | g_InputVertexCount
    INC EAX                             ; 0043bd80
    ADD EBX,0x30                        ; 0043bd81
    MOV dword ptr [ESP + 0x10],EAX      ; 0043bd84
    CMP EAX,EDX                         ; 0043bd88
    JL 0x0043bd09                       ; 0043bd8a
        ;   XREF to: 0043bd09 (CONDITIONAL_JUMP)  ; LAB_0043bd09
    MOV ECX,dword ptr [0x007e4d58]      ; 0043bd90 | g_OutputVertexCount
        ;   Label: LAB_0043bd90
    CMP ECX,0x3                         ; 0043bd96
    JL 0x0043bc60                       ; 0043bd99
        ;   XREF to: 0043bc60 (CONDITIONAL_JUMP)  ; LAB_0043bc60
    XOR EBX,EBX                         ; 0043bd9f
    MOV dword ptr [ESP + 0x18],EBX      ; 0043bda1
    TEST ECX,ECX                        ; 0043bda5
    JLE 0x0043be3f                      ; 0043bda7
        ;   XREF to: 0043be3f (CONDITIONAL_JUMP)  ; LAB_0043be3f
    MOV EBX,0x7e4d64                    ; 0043bdad | g_ClipperOutputBuffer
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043bdb2
        ;   Label: LAB_0043bdb2
    MOV EBP,dword ptr [0x007e4d58]      ; 0043bdb6 | g_OutputVertexCount
    INC EAX                             ; 0043bdbc
    CMP EAX,EBP                         ; 0043bdbd
    JNZ 0x0043bdc3                      ; 0043bdbf
        ;   XREF to: 0043bdc3 (CONDITIONAL_JUMP)  ; LAB_0043bdc3
    XOR EAX,EBP                         ; 0043bdc1
    IMUL EAX,EAX,0x30                   ; 0043bdc3
        ;   Label: LAB_0043bdc3
    MOV EBP,0x7e4d64                    ; 0043bdc6 | g_ClipperOutputBuffer
    MOV EDX,EBX                         ; 0043bdcb
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043bdcd | g_ClipperOutputBuffer[0].projected_vertex.transformed_z | g_ClipperOutputBuffer[1].projected_vertex.transformed_z
    MOV ESI,dword ptr [EBX]             ; 0043bdd0 | g_ClipperOutputBuffer | g_ClipperOutputBuffer[1].projected_vertex.transformed_x
    NEG ECX                             ; 0043bdd2
    ADD EBP,EAX                         ; 0043bdd4
    XOR EAX,EAX                         ; 0043bdd6
    CMP ECX,ESI                         ; 0043bdd8
    JL 0x0043bde1                       ; 0043bdda
        ;   XREF to: 0043bde1 (CONDITIONAL_JUMP)  ; LAB_0043bde1
    MOV EAX,0x1                         ; 0043bddc
    MOV ECX,dword ptr [EBP + 0x8]       ; 0043bde1 | g_ClipperOutputBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0043bde1
    MOV EDI,dword ptr [EBP]             ; 0043bde4 | g_ClipperOutputBuffer
    NEG ECX                             ; 0043bde7
    CMP ECX,EDI                         ; 0043bde9
    JL 0x0043bdef                       ; 0043bdeb
        ;   XREF to: 0043bdef (CONDITIONAL_JUMP)  ; LAB_0043bdef
    OR AL,0x2                           ; 0043bded
    CMP EAX,0x3                         ; 0043bdef
        ;   Label: LAB_0043bdef
    JA 0x0043be25                       ; 0043bdf2
        ;   XREF to: 0043be25 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43ba88]  ; 0043bdf4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007e4d5c],0x30 ; 0043bdfb | g_TempVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043be02
    MOV ESI,EDX                         ; 0043be07
    ADD EDI,0x7e5964                    ; 0043be09 | g_ClipperWorkingBuffer
    PUSH EDI                            ; 0043be0f | g_ClipperWorkingBuffer
    MOV EAX,ECX                         ; 0043be10
    SHR ECX,0x2                         ; 0043be12
    MOVSD.REP ES:EDI,ESI                ; 0043be15 | g_ClipperOutputBuffer | g_ClipperWorkingBuffer | g_ClipperOutputBuffer[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043be17
    AND CL,0x3                          ; 0043be19
    MOVSB.REP ES:EDI,ESI                ; 0043be1c | g_ClipperOutputBuffer[0].projected_vertex.transformed_y | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 0043be1e
    INC dword ptr [0x007e4d5c]          ; 0043be1f | g_TempVertexCount
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043be25
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007e4d58]      ; 0043be29 | g_OutputVertexCount
    INC EDX                             ; 0043be2f
    ADD EBX,0x30                        ; 0043be30
    MOV dword ptr [ESP + 0x18],EDX      ; 0043be33
    CMP EDX,ECX                         ; 0043be37
    JL 0x0043bdb2                       ; 0043be39
        ;   XREF to: 0043bdb2 (CONDITIONAL_JUMP)  ; LAB_0043bdb2
    MOV EBX,dword ptr [0x007e4d5c]      ; 0043be3f | g_TempVertexCount
        ;   Label: LAB_0043be3f
    CMP EBX,0x3                         ; 0043be45
    JL 0x0043bc60                       ; 0043be48
        ;   XREF to: 0043bc60 (CONDITIONAL_JUMP)  ; LAB_0043bc60
    XOR ESI,ESI                         ; 0043be4e
    MOV dword ptr [ESP + 0x1c],ESI      ; 0043be50
    TEST EBX,EBX                        ; 0043be54
    JLE 0x0043bee9                      ; 0043be56
        ;   XREF to: 0043bee9 (CONDITIONAL_JUMP)  ; LAB_0043bee9
    MOV EBX,0x7e5964                    ; 0043be5c | g_ClipperWorkingBuffer
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043be61
        ;   Label: LAB_0043be61
    MOV EBP,dword ptr [0x007e4d5c]      ; 0043be65 | g_TempVertexCount
    INC EAX                             ; 0043be6b
    CMP EAX,EBP                         ; 0043be6c
    JNZ 0x0043be72                      ; 0043be6e
        ;   XREF to: 0043be72 (CONDITIONAL_JUMP)  ; LAB_0043be72
    XOR EAX,EBP                         ; 0043be70
    IMUL EAX,EAX,0x30                   ; 0043be72
        ;   Label: LAB_0043be72
    MOV EBP,0x7e5964                    ; 0043be75 | g_ClipperWorkingBuffer
    MOV EDX,EBX                         ; 0043be7a
    MOV ECX,dword ptr [EBX + 0x4]       ; 0043be7c | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y | g_ClipperWorkingBuffer[1].projected_vertex.transformed_y
    MOV ESI,dword ptr [EBX + 0x8]       ; 0043be7f | g_ClipperWorkingBuffer[0].projected_vertex.transformed_z | g_ClipperWorkingBuffer[1].projected_vertex.transformed_z
    ADD EBP,EAX                         ; 0043be82
    XOR EAX,EAX                         ; 0043be84
    CMP ECX,ESI                         ; 0043be86
    JL 0x0043be8f                       ; 0043be88
        ;   XREF to: 0043be8f (CONDITIONAL_JUMP)  ; LAB_0043be8f
    MOV EAX,0x1                         ; 0043be8a
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043be8f | g_ClipperWorkingBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0043be8f
    CMP EDI,dword ptr [EBP + 0x4]       ; 0043be92 | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
    JG 0x0043be99                       ; 0043be95
        ;   XREF to: 0043be99 (CONDITIONAL_JUMP)  ; LAB_0043be99
    OR AL,0x2                           ; 0043be97
    CMP EAX,0x3                         ; 0043be99
        ;   Label: LAB_0043be99
    JA 0x0043becf                       ; 0043be9c
        ;   XREF to: 0043becf (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43ba98]  ; 0043be9e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007e4d60],0x30 ; 0043bea5 | g_IntermediateVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043beac
    MOV ESI,EDX                         ; 0043beb1
    ADD EDI,0x7e5f64                    ; 0043beb3 | g_ClipperIntermediateBuffer
    PUSH EDI                            ; 0043beb9 | g_ClipperIntermediateBuffer
    MOV EAX,ECX                         ; 0043beba
    SHR ECX,0x2                         ; 0043bebc
    MOVSD.REP ES:EDI,ESI                ; 0043bebf | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x | g_ClipperIntermediateBuffer | g_ClipperWorkingBuffer[1].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043bec1
    AND CL,0x3                          ; 0043bec3
    MOVSB.REP ES:EDI,ESI                ; 0043bec6 | g_ClipperWorkingBuffer[1].projected_vertex.transformed_y | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 0043bec8
    INC dword ptr [0x007e4d60]          ; 0043bec9 | g_IntermediateVertexCount
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043becf
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007e4d5c]      ; 0043bed3 | g_TempVertexCount
    INC EDX                             ; 0043bed9
    ADD EBX,0x30                        ; 0043beda
    MOV dword ptr [ESP + 0x1c],EDX      ; 0043bedd
    CMP EDX,ECX                         ; 0043bee1
    JL 0x0043be61                       ; 0043bee3
        ;   XREF to: 0043be61 (CONDITIONAL_JUMP)  ; LAB_0043be61
    MOV EBX,dword ptr [0x007e4d60]      ; 0043bee9 | g_IntermediateVertexCount
        ;   Label: LAB_0043bee9
    CMP EBX,0x3                         ; 0043beef
    JL 0x0043bc60                       ; 0043bef2
        ;   XREF to: 0043bc60 (CONDITIONAL_JUMP)  ; LAB_0043bc60
    XOR ESI,ESI                         ; 0043bef8
    MOV dword ptr [ESP + 0x14],ESI      ; 0043befa
    TEST EBX,EBX                        ; 0043befe
    JLE 0x0043bf99                      ; 0043bf00
        ;   XREF to: 0043bf99 (CONDITIONAL_JUMP)  ; LAB_0043bf99
    MOV EBX,0x7e5f64                    ; 0043bf06 | g_ClipperIntermediateBuffer
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043bf0b
        ;   Label: LAB_0043bf0b
    MOV EDI,dword ptr [0x007e4d60]      ; 0043bf0f | g_IntermediateVertexCount
    INC EAX                             ; 0043bf15
    CMP EAX,EDI                         ; 0043bf16
    JNZ 0x0043bf1c                      ; 0043bf18
        ;   XREF to: 0043bf1c (CONDITIONAL_JUMP)  ; LAB_0043bf1c
    XOR EAX,EDI                         ; 0043bf1a
    IMUL EAX,EAX,0x30                   ; 0043bf1c
        ;   Label: LAB_0043bf1c
    MOV EBP,0x7e5f64                    ; 0043bf1f | g_ClipperIntermediateBuffer
    MOV EDX,EBX                         ; 0043bf24
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043bf26 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_z | g_ClipperIntermediateBuffer[1].projected_vertex.transformed_z
    MOV ESI,dword ptr [EBX + 0x4]       ; 0043bf29 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y | g_ClipperIntermediateBuffer[1].projected_vertex.transformed_y
    NEG ECX                             ; 0043bf2c
    ADD EBP,EAX                         ; 0043bf2e
    XOR EAX,EAX                         ; 0043bf30
    CMP ECX,ESI                         ; 0043bf32
    JL 0x0043bf3b                       ; 0043bf34
        ;   XREF to: 0043bf3b (CONDITIONAL_JUMP)  ; LAB_0043bf3b
    MOV EAX,0x1                         ; 0043bf36
    MOV ECX,dword ptr [EBP + 0x8]       ; 0043bf3b | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0043bf3b
    MOV EDI,dword ptr [EBP + 0x4]       ; 0043bf3e | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    NEG ECX                             ; 0043bf41
    CMP ECX,EDI                         ; 0043bf43
    JL 0x0043bf49                       ; 0043bf45
        ;   XREF to: 0043bf49 (CONDITIONAL_JUMP)  ; LAB_0043bf49
    OR AL,0x2                           ; 0043bf47
    CMP EAX,0x3                         ; 0043bf49
        ;   Label: LAB_0043bf49
    JA 0x0043bf7f                       ; 0043bf4c
        ;   XREF to: 0043bf7f (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43baa8]  ; 0043bf4e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007e3e88],0x30 ; 0043bf55 | g_ClippedVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043bf5c
    MOV ESI,EDX                         ; 0043bf61
    ADD EDI,0x7e3e8c                    ; 0043bf63 | g_SRenderVertex_ARRAY_007e3e8c
    PUSH EDI                            ; 0043bf69 | g_SRenderVertex_ARRAY_007e3e8c
    MOV EAX,ECX                         ; 0043bf6a
    SHR ECX,0x2                         ; 0043bf6c
    MOVSD.REP ES:EDI,ESI                ; 0043bf6f | g_ClipperIntermediateBuffer | g_SRenderVertex_ARRAY_007e3e8c | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043bf71
    AND CL,0x3                          ; 0043bf73
    MOVSB.REP ES:EDI,ESI                ; 0043bf76 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.transformed_y
    POP EDI                             ; 0043bf78
    INC dword ptr [0x007e3e88]          ; 0043bf79 | g_ClippedVertexCount
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043bf7f
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007e4d60]      ; 0043bf83 | g_IntermediateVertexCount
    INC EDX                             ; 0043bf89
    ADD EBX,0x30                        ; 0043bf8a
    MOV dword ptr [ESP + 0x14],EDX      ; 0043bf8d
    CMP EDX,ECX                         ; 0043bf91
    JL 0x0043bf0b                       ; 0043bf93
        ;   XREF to: 0043bf0b (CONDITIONAL_JUMP)  ; LAB_0043bf0b
    MOV EBX,dword ptr [0x007e3e88]      ; 0043bf99 | g_ClippedVertexCount
        ;   Label: LAB_0043bf99
    CMP EBX,0x3                         ; 0043bf9f
    JL 0x0043bc60                       ; 0043bfa2
        ;   XREF to: 0043bc60 (CONDITIONAL_JUMP)  ; LAB_0043bc60
    MOV EAX,0x7e3e8c                    ; 0043bfa8 | g_SRenderVertex_ARRAY_007e3e8c
    XOR EBP,EBP                         ; 0043bfad
    TEST EBX,EBX                        ; 0043bfaf
    JLE 0x0043bc60                      ; 0043bfb1
        ;   XREF to: 0043bc60 (CONDITIONAL_JUMP)  ; LAB_0043bc60
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043bfb7 | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.transformed_z | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_z
        ;   Label: LAB_0043bfb7
    TEST ECX,ECX                        ; 0043bfba
    JZ 0x0043c1dc                       ; 0043bfbc
        ;   XREF to: 0043c1dc (CONDITIONAL_JUMP)  ; LAB_0043c1dc
    CMP ECX,dword ptr [EAX]             ; 0043bfc2 | g_SRenderVertex_ARRAY_007e3e8c | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_x
    JGE 0x0043c1ed                      ; 0043bfc4
        ;   XREF to: 0043c1ed (CONDITIONAL_JUMP)  ; LAB_0043c1ed
    MOV dword ptr [EAX],ECX             ; 0043bfca | g_SRenderVertex_ARRAY_007e3e8c | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_x
    MOV EDX,dword ptr [0x007e3e88]      ; 0043bfcc | g_ClippedVertexCount
        ;   Label: LAB_0043bfcc
    INC EBP                             ; 0043bfd2
    ADD EAX,0x30                        ; 0043bfd3
    CMP EBP,EDX                         ; 0043bfd6
    JGE 0x0043bc60                      ; 0043bfd8
        ;   XREF to: 0043bc60 (CONDITIONAL_JUMP)  ; LAB_0043bc60
    JMP 0x0043bfb7                      ; 0043bfde
        ;   XREF to: 0043bfb7 (UNCONDITIONAL_JUMP)  ; LAB_0043bfb7
    IMUL EAX,dword ptr [0x007e4d58],0x30 ; 0043bfe0 | g_OutputVertexCount
        ;   Label: caseD_1
    ADD EAX,0x7e4d64                    ; 0043bfe7 | g_ClipperOutputBuffer
    PUSH EAX                            ; 0043bfec | g_ClipperOutputBuffer
    PUSH EDX                            ; 0043bfed | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 0043bfee
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043a8c0 ; 0043bfef
        ;   XREF to: 0043a8c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043a8c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007e4d58]      ; 0043bff4 | g_OutputVertexCount
    INC ESI                             ; 0043bffa
    ADD ESP,0xc                         ; 0043bffb
    MOV dword ptr [0x007e4d58],ESI      ; 0043bffe | g_OutputVertexCount
    JMP 0x0043bd76                      ; 0043c004
        ;   XREF to: 0043bd76 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007e4d58],0x30 ; 0043c009 | g_OutputVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043c010
    MOV ESI,EDX                         ; 0043c015
    ADD EDI,0x7e4d64                    ; 0043c017 | g_ClipperOutputBuffer
    PUSH EDI                            ; 0043c01d | g_ClipperOutputBuffer
    MOV EAX,ECX                         ; 0043c01e
    SHR ECX,0x2                         ; 0043c020
    MOVSD.REP ES:EDI,ESI                ; 0043c023 | g_ClipperInputBuffer[1].projected_vertex.transformed_x | g_ClipperOutputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043c025
    AND CL,0x3                          ; 0043c027
    MOVSB.REP ES:EDI,ESI                ; 0043c02a | g_ClipperInputBuffer[1].projected_vertex.transformed_y | g_ClipperOutputBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 0043c02c
    MOV ECX,dword ptr [0x007e4d58]      ; 0043c02d | g_OutputVertexCount
    INC ECX                             ; 0043c033
    MOV dword ptr [0x007e4d58],ECX      ; 0043c034 | g_OutputVertexCount
    IMUL EAX,ECX,0x30                   ; 0043c03a
    ADD EAX,0x7e4d64                    ; 0043c03d | g_ClipperOutputBuffer
    PUSH EAX                            ; 0043c042 | g_ClipperOutputBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 0043c043
    PUSH EDX                            ; 0043c044 | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043a8c0 ; 0043c045
        ;   XREF to: 0043a8c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043a8c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007e4d58]      ; 0043c04a | g_OutputVertexCount
    INC EDI                             ; 0043c050
    ADD ESP,0xc                         ; 0043c051
    MOV dword ptr [0x007e4d58],EDI      ; 0043c054 | g_OutputVertexCount
    JMP 0x0043bd76                      ; 0043c05a
        ;   XREF to: 0043bd76 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007e4d5c],0x30 ; 0043c05f | g_TempVertexCount
        ;   Label: caseD_1
    ADD EAX,0x7e5964                    ; 0043c066 | g_ClipperWorkingBuffer
    PUSH EAX                            ; 0043c06b | g_ClipperWorkingBuffer
    PUSH EDX                            ; 0043c06c | g_ClipperOutputBuffer
    PUSH EBP                            ; 0043c06d
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0 ; 0043c06e
        ;   XREF to: 0043a9f0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007e4d5c]      ; 0043c073 | g_TempVertexCount
    INC ESI                             ; 0043c079
    ADD ESP,0xc                         ; 0043c07a
    MOV dword ptr [0x007e4d5c],ESI      ; 0043c07d | g_TempVertexCount
    JMP 0x0043be25                      ; 0043c083
        ;   XREF to: 0043be25 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007e4d5c],0x30 ; 0043c088 | g_TempVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043c08f
    MOV ESI,EDX                         ; 0043c094
    ADD EDI,0x7e5964                    ; 0043c096 | g_ClipperWorkingBuffer
    PUSH EDI                            ; 0043c09c | g_ClipperWorkingBuffer
    MOV EAX,ECX                         ; 0043c09d
    SHR ECX,0x2                         ; 0043c09f
    MOVSD.REP ES:EDI,ESI                ; 0043c0a2 | g_ClipperOutputBuffer | g_ClipperWorkingBuffer | g_ClipperOutputBuffer[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043c0a4
    AND CL,0x3                          ; 0043c0a6
    MOVSB.REP ES:EDI,ESI                ; 0043c0a9 | g_ClipperOutputBuffer[0].projected_vertex.transformed_y | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 0043c0ab
    MOV ECX,dword ptr [0x007e4d5c]      ; 0043c0ac | g_TempVertexCount
    INC ECX                             ; 0043c0b2
    MOV dword ptr [0x007e4d5c],ECX      ; 0043c0b3 | g_TempVertexCount
    IMUL EAX,ECX,0x30                   ; 0043c0b9
    ADD EAX,0x7e5964                    ; 0043c0bc | g_ClipperWorkingBuffer
    PUSH EAX                            ; 0043c0c1 | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 0043c0c2
    PUSH EDX                            ; 0043c0c3 | g_ClipperOutputBuffer
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0 ; 0043c0c4
        ;   XREF to: 0043a9f0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007e4d5c]      ; 0043c0c9 | g_TempVertexCount
    INC EDI                             ; 0043c0cf
    ADD ESP,0xc                         ; 0043c0d0
    MOV dword ptr [0x007e4d5c],EDI      ; 0043c0d3 | g_TempVertexCount
    JMP 0x0043be25                      ; 0043c0d9
        ;   XREF to: 0043be25 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007e4d60],0x30 ; 0043c0de | g_IntermediateVertexCount
        ;   Label: caseD_1
    ADD EAX,0x7e5f64                    ; 0043c0e5 | g_ClipperIntermediateBuffer
    PUSH EAX                            ; 0043c0ea | g_ClipperIntermediateBuffer
    PUSH EDX                            ; 0043c0eb | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 0043c0ec
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ab20 ; 0043c0ed
        ;   XREF to: 0043ab20 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ab20(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007e4d60]      ; 0043c0f2 | g_IntermediateVertexCount
    INC ESI                             ; 0043c0f8
    ADD ESP,0xc                         ; 0043c0f9
    MOV dword ptr [0x007e4d60],ESI      ; 0043c0fc | g_IntermediateVertexCount
    JMP 0x0043becf                      ; 0043c102
        ;   XREF to: 0043becf (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007e4d60],0x30 ; 0043c107 | g_IntermediateVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043c10e
    MOV ESI,EDX                         ; 0043c113
    ADD EDI,0x7e5f64                    ; 0043c115 | g_ClipperIntermediateBuffer
    PUSH EDI                            ; 0043c11b | g_ClipperIntermediateBuffer
    MOV EAX,ECX                         ; 0043c11c
    SHR ECX,0x2                         ; 0043c11e
    MOVSD.REP ES:EDI,ESI                ; 0043c121 | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x | g_ClipperIntermediateBuffer | g_ClipperWorkingBuffer[1].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043c123
    AND CL,0x3                          ; 0043c125
    MOVSB.REP ES:EDI,ESI                ; 0043c128 | g_ClipperWorkingBuffer[1].projected_vertex.transformed_y | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 0043c12a
    MOV ECX,dword ptr [0x007e4d60]      ; 0043c12b | g_IntermediateVertexCount
    INC ECX                             ; 0043c131
    MOV dword ptr [0x007e4d60],ECX      ; 0043c132 | g_IntermediateVertexCount
    IMUL EAX,ECX,0x30                   ; 0043c138
    ADD EAX,0x7e5f64                    ; 0043c13b | g_ClipperIntermediateBuffer
    PUSH EAX                            ; 0043c140 | g_ClipperIntermediateBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 0043c141
    PUSH EDX                            ; 0043c142 | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ab20 ; 0043c143
        ;   XREF to: 0043ab20 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ab20(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007e4d60]      ; 0043c148 | g_IntermediateVertexCount
    INC EDI                             ; 0043c14e
    ADD ESP,0xc                         ; 0043c14f
    MOV dword ptr [0x007e4d60],EDI      ; 0043c152 | g_IntermediateVertexCount
    JMP 0x0043becf                      ; 0043c158
        ;   XREF to: 0043becf (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007e3e88],0x30 ; 0043c15d | g_ClippedVertexCount
        ;   Label: caseD_1
    ADD EAX,0x7e3e8c                    ; 0043c164 | g_SRenderVertex_ARRAY_007e3e8c
    PUSH EAX                            ; 0043c169 | g_SRenderVertex_ARRAY_007e3e8c
    PUSH EDX                            ; 0043c16a | g_ClipperIntermediateBuffer
    PUSH EBP                            ; 0043c16b
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043ac50 ; 0043c16c
        ;   XREF to: 0043ac50 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043ac50(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007e3e88]      ; 0043c171 | g_ClippedVertexCount
    INC ESI                             ; 0043c177
    ADD ESP,0xc                         ; 0043c178
    MOV dword ptr [0x007e3e88],ESI      ; 0043c17b | g_ClippedVertexCount
    JMP 0x0043bf7f                      ; 0043c181
        ;   XREF to: 0043bf7f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007e3e88],0x30 ; 0043c186 | g_ClippedVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043c18d
    MOV ESI,EDX                         ; 0043c192
    ADD EDI,0x7e3e8c                    ; 0043c194 | g_SRenderVertex_ARRAY_007e3e8c
    PUSH EDI                            ; 0043c19a | g_SRenderVertex_ARRAY_007e3e8c
    MOV EAX,ECX                         ; 0043c19b
    SHR ECX,0x2                         ; 0043c19d
    MOVSD.REP ES:EDI,ESI                ; 0043c1a0 | g_ClipperIntermediateBuffer | g_SRenderVertex_ARRAY_007e3e8c | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043c1a2
    AND CL,0x3                          ; 0043c1a4
    MOVSB.REP ES:EDI,ESI                ; 0043c1a7 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.transformed_y
    POP EDI                             ; 0043c1a9
    MOV ECX,dword ptr [0x007e3e88]      ; 0043c1aa | g_ClippedVertexCount
    INC ECX                             ; 0043c1b0
    MOV dword ptr [0x007e3e88],ECX      ; 0043c1b1 | g_ClippedVertexCount
    IMUL EAX,ECX,0x30                   ; 0043c1b7
    ADD EAX,0x7e3e8c                    ; 0043c1ba | g_SRenderVertex_ARRAY_007e3e8c
    PUSH EAX                            ; 0043c1bf | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_x
    PUSH EBP                            ; 0043c1c0
    PUSH EDX                            ; 0043c1c1 | g_ClipperIntermediateBuffer
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043ac50 ; 0043c1c2
        ;   XREF to: 0043ac50 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043ac50(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007e3e88]      ; 0043c1c7 | g_ClippedVertexCount
    INC EDI                             ; 0043c1cd
    ADD ESP,0xc                         ; 0043c1ce
    MOV dword ptr [0x007e3e88],EDI      ; 0043c1d1 | g_ClippedVertexCount
    JMP 0x0043bf7f                      ; 0043c1d7
        ;   XREF to: 0043bf7f (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV dword ptr [EAX + 0x8],0x1       ; 0043c1dc | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_z
        ;   Label: LAB_0043c1dc
    MOV dword ptr [EAX],ECX             ; 0043c1e3 | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_x
    MOV dword ptr [EAX + 0x4],ECX       ; 0043c1e5 | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_y
    JMP 0x0043bfcc                      ; 0043c1e8
        ;   XREF to: 0043bfcc (UNCONDITIONAL_JUMP)  ; LAB_0043bfcc
    MOV EDX,ECX                         ; 0043c1ed
        ;   Label: LAB_0043c1ed
    MOV ESI,dword ptr [EAX]             ; 0043c1ef | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_x
    NEG EDX                             ; 0043c1f1
    CMP EDX,ESI                         ; 0043c1f3
    JLE 0x0043c1fe                      ; 0043c1f5
        ;   XREF to: 0043c1fe (CONDITIONAL_JUMP)  ; LAB_0043c1fe
    MOV dword ptr [EAX],EDX             ; 0043c1f7 | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_x
    JMP 0x0043bfcc                      ; 0043c1f9
        ;   XREF to: 0043bfcc (UNCONDITIONAL_JUMP)  ; LAB_0043bfcc
    MOV EDI,dword ptr [EAX + 0x8]       ; 0043c1fe | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_z
        ;   Label: LAB_0043c1fe
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043c201 | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_y
    CMP ECX,EDI                         ; 0043c204
    JLE 0x0043c210                      ; 0043c206
        ;   XREF to: 0043c210 (CONDITIONAL_JUMP)  ; LAB_0043c210
    MOV dword ptr [EAX + 0x4],EDI       ; 0043c208 | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_y
    JMP 0x0043bfcc                      ; 0043c20b
        ;   XREF to: 0043bfcc (UNCONDITIONAL_JUMP)  ; LAB_0043bfcc
    CMP EDX,ECX                         ; 0043c210
        ;   Label: LAB_0043c210
    JLE 0x0043bfcc                      ; 0043c212
        ;   XREF to: 0043bfcc (CONDITIONAL_JUMP)  ; LAB_0043bfcc
    MOV dword ptr [EAX + 0x4],EDX       ; 0043c218 | g_SRenderVertex_ARRAY_007e3e8c[1].projected_vertex.transformed_y
    JMP 0x0043bfcc                      ; 0043c21b
        ;   XREF to: 0043bfcc (UNCONDITIONAL_JUMP)  ; LAB_0043bfcc

