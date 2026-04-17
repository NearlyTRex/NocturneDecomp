; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_clipAndDrawLine3D_FUN_00408070(SRenderVertex vertex1,SRenderVertex vertex2)
;
; Parameters:
; SRenderVertex    Stack[0x4]:48   vertex1
; SRenderVertex    Stack[0x34]:48   vertex2
; Local Variables:
; SRenderVertex    Stack[-0x40]:48  local_40
;
; XREF[2]:
;   engine_3d.c_drawLine3DFromIndices_FUN_00407ff0 at 00408055
;   engine_3d.c_drawLineStrip3D_FUN_00404600 at 00404686
;
; Referenced Globals:
;   SRenderVertex[20000] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[19998].projected_vertex.transformed_x
;   undefined4 g_RenderVertexBuffer[19998].projected_vertex.transformed_z
;   undefined4 g_RenderVertexBuffer[19998].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[19998].projected_vertex.screen_y
;   undefined4 g_RenderVertexBuffer[19999].projected_vertex.transformed_z
;   undefined4 g_RenderVertexBuffer[19999].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[19999].projected_vertex.screen_y
;
; Called Functions:
;   engine_2d.c_drawLine3D_FUN_00401320
;   engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
;   engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
;   engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
;   engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
;   engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60
;   engine_prim.c_prepareDepthBuffer_FUN_00551fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408070
        ;   Label: engine_3d.c_clipAndDrawLine3D_FUN_00408070
    PUSH ESI                            ; 00408071
    PUSH EDI                            ; 00408072
    PUSH EBP                            ; 00408073
    SUB ESP,0x30                        ; 00408074
    MOV EAX,dword ptr [ESP + 0x54]      ; 00408077
    AND EAX,dword ptr [ESP + 0x84]      ; 0040807b
    TEST EAX,0x80000000                 ; 00408082
    JNZ 0x00408281                      ; 00408087
        ;   XREF to: 00408281 (CONDITIONAL_JUMP)  ; LAB_00408281
    XOR EBX,EBX                         ; 0040808d
        ;   Label: LAB_0040808d
    MOV EAX,dword ptr [ESP + 0x74]      ; 0040808f
        ;   Label: LAB_0040808f
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00408093
    JLE 0x004080c0                      ; 00408097
        ;   XREF to: 004080c0 (CONDITIONAL_JUMP)  ; LAB_004080c0
    MOV EAX,ESP                         ; 00408099
    PUSH EAX                            ; 0040809b
    LEA EAX,[ESP + 0x78]                ; 0040809c
    PUSH EAX                            ; 004080a0
    LEA EAX,[ESP + 0x4c]                ; 004080a1
    PUSH EAX                            ; 004080a5
    LEA EDI,[ESP + 0x80]                ; 004080a6
    LEA ESI,[ESP + 0xc]                 ; 004080ad
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00 ; 004080b1
        ;   XREF to: 00435a00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    JMP 0x03fc124f                      ; 004080b6
        ;   XREF to: 03fc124f (UNCONDITIONAL_JUMP)  ; LAB_03fc124f
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004080c0
        ;   Label: LAB_004080c0
    MOV ESI,dword ptr [ESP + 0x74]      ; 004080c4
    NEG EAX                             ; 004080c8
    CMP EAX,ESI                         ; 004080ca
    JLE 0x004080f5                      ; 004080cc
        ;   XREF to: 004080f5 (CONDITIONAL_JUMP)  ; LAB_004080f5
    MOV EAX,ESP                         ; 004080ce
    PUSH EAX                            ; 004080d0
    LEA EAX,[ESP + 0x78]                ; 004080d1
    PUSH EAX                            ; 004080d5
    LEA EAX,[ESP + 0x4c]                ; 004080d6
    PUSH EAX                            ; 004080da
    LEA EDI,[ESP + 0x80]                ; 004080db
    LEA ESI,[ESP + 0xc]                 ; 004080e2
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00 ; 004080e6
        ;   XREF to: 00435b00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_00435b00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    JMP 0x03fc12aa                      ; 004080eb
        ;   XREF to: 03fc12aa (UNCONDITIONAL_JUMP)  ; LAB_03fc12aa
    MOV EAX,dword ptr [ESP + 0x78]      ; 004080f5
        ;   Label: LAB_004080f5
    CMP EAX,dword ptr [ESP + 0x7c]      ; 004080f9
    JLE 0x00408126                      ; 004080fd
        ;   XREF to: 00408126 (CONDITIONAL_JUMP)  ; LAB_00408126
    MOV EAX,ESP                         ; 004080ff
    PUSH EAX                            ; 00408101
    LEA EAX,[ESP + 0x78]                ; 00408102
    PUSH EAX                            ; 00408106
    LEA EAX,[ESP + 0x4c]                ; 00408107
    PUSH EAX                            ; 0040810b
    LEA EDI,[ESP + 0x80]                ; 0040810c
    LEA ESI,[ESP + 0xc]                 ; 00408113
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00 ; 00408117
        ;   XREF to: 00435c00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    JMP 0x03fc1305                      ; 0040811c
        ;   XREF to: 03fc1305 (UNCONDITIONAL_JUMP)  ; LAB_03fc1305
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00408126
        ;   Label: LAB_00408126
    MOV EBP,dword ptr [ESP + 0x78]      ; 0040812a
    NEG EAX                             ; 0040812e
    CMP EAX,EBP                         ; 00408130
    JLE 0x0040815b                      ; 00408132
        ;   XREF to: 0040815b (CONDITIONAL_JUMP)  ; LAB_0040815b
    MOV EAX,ESP                         ; 00408134
    PUSH EAX                            ; 00408136
    LEA EAX,[ESP + 0x78]                ; 00408137
    PUSH EAX                            ; 0040813b
    LEA EAX,[ESP + 0x4c]                ; 0040813c
    PUSH EAX                            ; 00408140
    LEA EDI,[ESP + 0x80]                ; 00408141
    LEA ESI,[ESP + 0xc]                 ; 00408148
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00 ; 0040814c
        ;   XREF to: 00435d00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_00435d00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    JMP 0x03fc1360                      ; 00408151
        ;   XREF to: 03fc1360 (UNCONDITIONAL_JUMP)  ; LAB_03fc1360
    MOV EAX,dword ptr [ESP + 0x44]      ; 0040815b
        ;   Label: LAB_0040815b
    CMP EAX,dword ptr [ESP + 0x4c]      ; 0040815f
    JLE 0x00408189                      ; 00408163
        ;   XREF to: 00408189 (CONDITIONAL_JUMP)  ; LAB_00408189
    MOV EAX,ESP                         ; 00408165
    PUSH EAX                            ; 00408167
    LEA EAX,[ESP + 0x48]                ; 00408168
    PUSH EAX                            ; 0040816c
    LEA EAX,[ESP + 0x7c]                ; 0040816d
    PUSH EAX                            ; 00408171
    LEA EDI,[ESP + 0x50]                ; 00408172
    LEA ESI,[ESP + 0xc]                 ; 00408176
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00 ; 0040817a
        ;   XREF to: 00435a00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    JMP 0x03fc13bb                      ; 0040817f
        ;   XREF to: 03fc13bb (UNCONDITIONAL_JUMP)  ; LAB_03fc13bb
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00408189
        ;   Label: LAB_00408189
    MOV ECX,dword ptr [ESP + 0x44]      ; 0040818d
    NEG EAX                             ; 00408191
    CMP EAX,ECX                         ; 00408193
    JLE 0x004081bb                      ; 00408195
        ;   XREF to: 004081bb (CONDITIONAL_JUMP)  ; LAB_004081bb
    MOV EAX,ESP                         ; 00408197
    PUSH EAX                            ; 00408199
    LEA EAX,[ESP + 0x48]                ; 0040819a
    PUSH EAX                            ; 0040819e
    LEA EAX,[ESP + 0x7c]                ; 0040819f
    PUSH EAX                            ; 004081a3
    LEA EDI,[ESP + 0x50]                ; 004081a4
    LEA ESI,[ESP + 0xc]                 ; 004081a8
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00 ; 004081ac
        ;   XREF to: 00435b00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_00435b00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    JMP 0x03fc1416                      ; 004081b1
        ;   XREF to: 03fc1416 (UNCONDITIONAL_JUMP)  ; LAB_03fc1416
    MOV EAX,dword ptr [ESP + 0x48]      ; 004081bb
        ;   Label: LAB_004081bb
    CMP EAX,dword ptr [ESP + 0x4c]      ; 004081bf
    JLE 0x004081e9                      ; 004081c3
        ;   XREF to: 004081e9 (CONDITIONAL_JUMP)  ; LAB_004081e9
    MOV EAX,ESP                         ; 004081c5
    PUSH EAX                            ; 004081c7
    LEA EAX,[ESP + 0x48]                ; 004081c8
    PUSH EAX                            ; 004081cc
    LEA EAX,[ESP + 0x7c]                ; 004081cd
    PUSH EAX                            ; 004081d1
    LEA EDI,[ESP + 0x50]                ; 004081d2
    LEA ESI,[ESP + 0xc]                 ; 004081d6
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00 ; 004081da
        ;   XREF to: 00435c00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    JMP 0x03fc1471                      ; 004081df
        ;   XREF to: 03fc1471 (UNCONDITIONAL_JUMP)  ; LAB_03fc1471
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004081e9
        ;   Label: LAB_004081e9
    MOV EDI,dword ptr [ESP + 0x48]      ; 004081ed
    NEG EAX                             ; 004081f1
    CMP EAX,EDI                         ; 004081f3
    JLE 0x0040821b                      ; 004081f5
        ;   XREF to: 0040821b (CONDITIONAL_JUMP)  ; LAB_0040821b
    MOV EAX,ESP                         ; 004081f7
    PUSH EAX                            ; 004081f9
    LEA EAX,[ESP + 0x48]                ; 004081fa
    PUSH EAX                            ; 004081fe
    LEA EAX,[ESP + 0x7c]                ; 004081ff
    PUSH EAX                            ; 00408203
    LEA EDI,[ESP + 0x50]                ; 00408204
    LEA ESI,[ESP + 0xc]                 ; 00408208
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00 ; 0040820c
        ;   XREF to: 00435d00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_00435d00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    JMP 0x03fc14cc                      ; 00408211
        ;   XREF to: 03fc14cc (UNCONDITIONAL_JUMP)  ; LAB_03fc14cc
    INC EBX                             ; 0040821b
        ;   Label: LAB_0040821b
    CMP EBX,0x2                         ; 0040821c
    JL 0x0040808f                       ; 0040821f
        ;   XREF to: 0040808f (CONDITIONAL_JUMP)  ; LAB_0040808f
    MOV EAX,dword ptr [ESP + 0x44]      ; 00408225
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00408229
    CMP EAX,EBP                         ; 0040822d
    JG 0x0040826f                       ; 0040822f
        ;   XREF to: 0040826f (CONDITIONAL_JUMP)  ; LAB_0040826f
    MOV EBX,EBP                         ; 00408231
    NEG EBX                             ; 00408233
    CMP EBX,EAX                         ; 00408235
    JG 0x0040826f                       ; 00408237
        ;   XREF to: 0040826f (CONDITIONAL_JUMP)  ; LAB_0040826f
    MOV EAX,dword ptr [ESP + 0x48]      ; 00408239
    CMP EAX,EBP                         ; 0040823d
    JG 0x0040826f                       ; 0040823f
        ;   XREF to: 0040826f (CONDITIONAL_JUMP)  ; LAB_0040826f
    CMP EBX,EAX                         ; 00408241
    JG 0x0040826f                       ; 00408243
        ;   XREF to: 0040826f (CONDITIONAL_JUMP)  ; LAB_0040826f
    MOV EAX,dword ptr [ESP + 0x74]      ; 00408245
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00408249
    CMP EAX,EBX                         ; 0040824d
    JG 0x0040826f                       ; 0040824f
        ;   XREF to: 0040826f (CONDITIONAL_JUMP)  ; LAB_0040826f
    NEG EBX                             ; 00408251
    CMP EBX,EAX                         ; 00408253
    JG 0x0040826f                       ; 00408255
        ;   XREF to: 0040826f (CONDITIONAL_JUMP)  ; LAB_0040826f
    MOV EAX,dword ptr [ESP + 0x78]      ; 00408257
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0040825b
    CMP EAX,EDI                         ; 0040825f
    JG 0x0040826f                       ; 00408261
        ;   XREF to: 0040826f (CONDITIONAL_JUMP)  ; LAB_0040826f
    CMP EBX,EAX                         ; 00408263
    JG 0x0040826f                       ; 00408265
        ;   XREF to: 0040826f (CONDITIONAL_JUMP)  ; LAB_0040826f
    TEST EBP,EBP                        ; 00408267
    JLE 0x0040826f                      ; 00408269
        ;   XREF to: 0040826f (CONDITIONAL_JUMP)  ; LAB_0040826f
    TEST EDI,EDI                        ; 0040826b
    JG 0x0040828a                       ; 0040826d
        ;   XREF to: 0040828a (CONDITIONAL_JUMP)  ; LAB_0040828a
    ADD ESP,0x30                        ; 0040826f
        ;   Label: LAB_0040826f
    POP EBP                             ; 00408272
    POP EDI                             ; 00408273
    POP ESI                             ; 00408274
    POP EBX                             ; 00408275
    LEA EAX,[EAX]                       ; 00408276
    LEA EDX,[EDX]                       ; 0040827c
    RET                                 ; 00408280
    TEST AL,0xff                        ; 00408281
        ;   Label: LAB_00408281
    JNZ 0x0040826f                      ; 00408283
        ;   XREF to: 0040826f (CONDITIONAL_JUMP)  ; LAB_0040826f
    JMP 0x0040808d                      ; 00408285
        ;   XREF to: 0040808d (UNCONDITIONAL_JUMP)  ; LAB_0040808d
    JMP 0x03fc1527                      ; 0040828a
        ;   XREF to: 03fc1527 (UNCONDITIONAL_JUMP)  ; LAB_03fc1527
        ;   Label: LAB_0040828a
    JMP 0x03fc1588                      ; 0040829a
        ;   XREF to: 03fc1588 (UNCONDITIONAL_JUMP)  ; LAB_03fc1588
        ;   Label: LAB_0040829a
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60 ; 004082af
        ;   XREF to: 0050ce60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60(int cache_index)
        ;   Label: LAB_004082af
    ADD ESP,0x4                         ; 004082b4
    PUSH 0x4e1f                         ; 004082b7
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60 ; 004082bc
        ;   XREF to: 0050ce60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60(int cache_index)
    ADD ESP,0x4                         ; 004082c1
    MOV EAX,0x688014                    ; 004082c4 | g_RenderVertexBuffer
    PUSH 0x2                            ; 004082c9
    ADD EAX,0xea5a0                     ; 004082cb
    PUSH EAX                            ; 004082d0 | g_RenderVertexBuffer[19998].projected_vertex.transformed_x
    CALL engine_prim.c_prepareDepthBuffer_FUN_00551fb0 ; 004082d1
        ;   XREF to: 00551fb0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_prepareDepthBuffer_FUN_00551fb0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004082d6
    MOV ECX,dword ptr [0x007725ec]      ; 004082d9 | g_RenderVertexBuffer[19999].projected_vertex.transformed_z
    MOV EAX,[0x007725f8]                ; 004082df | g_RenderVertexBuffer[19999].projected_vertex.screen_y
    PUSH ECX                            ; 004082e4
    SAR EAX,0x10                        ; 004082e5
    PUSH EAX                            ; 004082e8
    MOV EAX,[0x007725f4]                ; 004082e9 | g_RenderVertexBuffer[19999].projected_vertex.screen_x
    SAR EAX,0x10                        ; 004082ee
    PUSH EAX                            ; 004082f1
    MOV EBX,dword ptr [0x007725bc]      ; 004082f2 | g_RenderVertexBuffer[19998].projected_vertex.transformed_z
    MOV EAX,[0x007725c8]                ; 004082f8 | g_RenderVertexBuffer[19998].projected_vertex.screen_y
    PUSH EBX                            ; 004082fd
    SAR EAX,0x10                        ; 004082fe
    PUSH EAX                            ; 00408301
    MOV EAX,[0x007725c4]                ; 00408302 | g_RenderVertexBuffer[19998].projected_vertex.screen_x
    SAR EAX,0x10                        ; 00408307
    PUSH EAX                            ; 0040830a
    CALL engine_2d.c_drawLine3D_FUN_00401320 ; 0040830b
        ;   XREF to: 00401320 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine3D_FUN_00401320(int x1, int y1, uint z1, int x2, ...)
    ADD ESP,0x18                        ; 00408310
    ADD ESP,0x30                        ; 00408313
    POP EBP                             ; 00408316
    POP EDI                             ; 00408317
    POP ESI                             ; 00408318
    POP EBX                             ; 00408319
    RET                                 ; 0040831a
    MOV ECX,0xc                         ; 03fc124f
        ;   Label: LAB_03fc124f
    ADD ESP,0xc                         ; 03fc1254
    MOV ECX,dword ptr [ESI]             ; 03fc1257
    MOV dword ptr [EDI],ECX             ; 03fc1259
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc125b
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc125e
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1261
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1264
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1267
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc126a
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc126d
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1270
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1273
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1276
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc1279
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc127c
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc127f
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1282
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1285
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1288
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc128b
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc128e
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc1291
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1294
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1297
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc129a
    ADD ESI,0x30                        ; 03fc129d
    ADD EDI,0x30                        ; 03fc12a0
    XOR ECX,ECX                         ; 03fc12a3
    JMP 0x004080c0                      ; 03fc12a5
        ;   XREF to: 004080c0 (UNCONDITIONAL_JUMP)  ; LAB_004080c0
    MOV ECX,0xc                         ; 03fc12aa
        ;   Label: LAB_03fc12aa
    ADD ESP,0xc                         ; 03fc12af
    MOV ECX,dword ptr [ESI]             ; 03fc12b2
    MOV dword ptr [EDI],ECX             ; 03fc12b4
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc12b6
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc12b9
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc12bc
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc12bf
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc12c2
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc12c5
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc12c8
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc12cb
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc12ce
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc12d1
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc12d4
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc12d7
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc12da
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc12dd
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc12e0
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc12e3
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc12e6
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc12e9
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc12ec
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc12ef
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc12f2
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc12f5
    ADD ESI,0x30                        ; 03fc12f8
    ADD EDI,0x30                        ; 03fc12fb
    XOR ECX,ECX                         ; 03fc12fe
    JMP 0x004080f5                      ; 03fc1300
        ;   XREF to: 004080f5 (UNCONDITIONAL_JUMP)  ; LAB_004080f5
    MOV ECX,0xc                         ; 03fc1305
        ;   Label: LAB_03fc1305
    ADD ESP,0xc                         ; 03fc130a
    MOV ECX,dword ptr [ESI]             ; 03fc130d
    MOV dword ptr [EDI],ECX             ; 03fc130f
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc1311
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc1314
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1317
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc131a
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc131d
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc1320
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc1323
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1326
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1329
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc132c
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc132f
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc1332
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc1335
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1338
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc133b
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc133e
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc1341
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc1344
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc1347
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc134a
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc134d
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc1350
    ADD ESI,0x30                        ; 03fc1353
    ADD EDI,0x30                        ; 03fc1356
    XOR ECX,ECX                         ; 03fc1359
    JMP 0x00408126                      ; 03fc135b
        ;   XREF to: 00408126 (UNCONDITIONAL_JUMP)  ; LAB_00408126
    MOV ECX,0xc                         ; 03fc1360
        ;   Label: LAB_03fc1360
    ADD ESP,0xc                         ; 03fc1365
    MOV ECX,dword ptr [ESI]             ; 03fc1368
    MOV dword ptr [EDI],ECX             ; 03fc136a
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc136c
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc136f
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1372
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1375
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1378
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc137b
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc137e
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1381
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1384
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1387
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc138a
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc138d
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc1390
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1393
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1396
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1399
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc139c
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc139f
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc13a2
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc13a5
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc13a8
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc13ab
    ADD ESI,0x30                        ; 03fc13ae
    ADD EDI,0x30                        ; 03fc13b1
    XOR ECX,ECX                         ; 03fc13b4
    JMP 0x0040815b                      ; 03fc13b6
        ;   XREF to: 0040815b (UNCONDITIONAL_JUMP)  ; LAB_0040815b
    MOV ECX,0xc                         ; 03fc13bb
        ;   Label: LAB_03fc13bb
    ADD ESP,0xc                         ; 03fc13c0
    MOV ECX,dword ptr [ESI]             ; 03fc13c3
    MOV dword ptr [EDI],ECX             ; 03fc13c5
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc13c7
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc13ca
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc13cd
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc13d0
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc13d3
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc13d6
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc13d9
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc13dc
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc13df
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc13e2
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc13e5
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc13e8
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc13eb
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc13ee
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc13f1
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc13f4
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc13f7
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc13fa
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc13fd
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1400
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1403
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc1406
    ADD ESI,0x30                        ; 03fc1409
    ADD EDI,0x30                        ; 03fc140c
    XOR ECX,ECX                         ; 03fc140f
    JMP 0x00408189                      ; 03fc1411
        ;   XREF to: 00408189 (UNCONDITIONAL_JUMP)  ; LAB_00408189
    MOV ECX,0xc                         ; 03fc1416
        ;   Label: LAB_03fc1416
    ADD ESP,0xc                         ; 03fc141b
    MOV ECX,dword ptr [ESI]             ; 03fc141e
    MOV dword ptr [EDI],ECX             ; 03fc1420
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc1422
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc1425
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1428
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc142b
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc142e
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc1431
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc1434
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1437
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc143a
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc143d
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc1440
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc1443
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc1446
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1449
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc144c
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc144f
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc1452
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc1455
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc1458
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc145b
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc145e
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc1461
    ADD ESI,0x30                        ; 03fc1464
    ADD EDI,0x30                        ; 03fc1467
    XOR ECX,ECX                         ; 03fc146a
    JMP 0x004081bb                      ; 03fc146c
        ;   XREF to: 004081bb (UNCONDITIONAL_JUMP)  ; LAB_004081bb
    MOV ECX,0xc                         ; 03fc1471
        ;   Label: LAB_03fc1471
    ADD ESP,0xc                         ; 03fc1476
    MOV ECX,dword ptr [ESI]             ; 03fc1479
    MOV dword ptr [EDI],ECX             ; 03fc147b
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc147d
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc1480
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1483
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1486
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1489
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc148c
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc148f
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1492
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1495
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1498
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc149b
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc149e
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc14a1
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc14a4
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc14a7
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc14aa
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc14ad
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc14b0
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc14b3
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc14b6
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc14b9
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc14bc
    ADD ESI,0x30                        ; 03fc14bf
    ADD EDI,0x30                        ; 03fc14c2
    XOR ECX,ECX                         ; 03fc14c5
    JMP 0x004081e9                      ; 03fc14c7
        ;   XREF to: 004081e9 (UNCONDITIONAL_JUMP)  ; LAB_004081e9
    MOV ECX,0xc                         ; 03fc14cc
        ;   Label: LAB_03fc14cc
    ADD ESP,0xc                         ; 03fc14d1
    MOV ECX,dword ptr [ESI]             ; 03fc14d4
    MOV dword ptr [EDI],ECX             ; 03fc14d6
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc14d8
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc14db
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc14de
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc14e1
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc14e4
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc14e7
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc14ea
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc14ed
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc14f0
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc14f3
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc14f6
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc14f9
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc14fc
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc14ff
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1502
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1505
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc1508
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc150b
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc150e
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1511
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1514
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc1517
    ADD ESI,0x30                        ; 03fc151a
    ADD EDI,0x30                        ; 03fc151d
    XOR ECX,ECX                         ; 03fc1520
    JMP 0x0040821b                      ; 03fc1522
        ;   XREF to: 0040821b (UNCONDITIONAL_JUMP)  ; LAB_0040821b
    MOV ECX,0xc                         ; 03fc1527
        ;   Label: LAB_03fc1527
    LEA ESI,[ESP + 0x44]                ; 03fc152c
    MOV EDI,0x7725b4                    ; 03fc1530
    MOV ECX,dword ptr [ESI]             ; 03fc1535
    MOV dword ptr [EDI],ECX             ; 03fc1537
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc1539
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc153c
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc153f
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1542
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1545
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc1548
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc154b
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc154e
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1551
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1554
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc1557
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc155a
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc155d
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1560
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1563
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1566
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc1569
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc156c
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc156f
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1572
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1575
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc1578
    ADD ESI,0x30                        ; 03fc157b
    ADD EDI,0x30                        ; 03fc157e
    XOR ECX,ECX                         ; 03fc1581
    JMP 0x0040829a                      ; 03fc1583
        ;   XREF to: 0040829a (UNCONDITIONAL_JUMP)  ; LAB_0040829a
    MOV ECX,0xc                         ; 03fc1588
        ;   Label: LAB_03fc1588
    LEA ESI,[ESP + 0x74]                ; 03fc158d
    MOV EDI,0x7725e4                    ; 03fc1591
    PUSH 0x4e1e                         ; 03fc1596
    MOV ECX,dword ptr [ESI]             ; 03fc159b
    MOV dword ptr [EDI],ECX             ; 03fc159d
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc159f
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc15a2
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc15a5
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc15a8
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc15ab
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc15ae
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc15b1
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc15b4
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc15b7
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc15ba
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc15bd
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc15c0
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc15c3
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc15c6
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc15c9
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc15cc
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc15cf
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc15d2
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc15d5
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc15d8
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc15db
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc15de
    ADD ESI,0x30                        ; 03fc15e1
    ADD EDI,0x30                        ; 03fc15e4
    XOR ECX,ECX                         ; 03fc15e7
    JMP 0x004082af                      ; 03fc15e9
        ;   XREF to: 004082af (UNCONDITIONAL_JUMP)  ; LAB_004082af

