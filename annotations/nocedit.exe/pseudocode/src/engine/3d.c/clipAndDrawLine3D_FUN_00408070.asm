; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_3d_c_clipAndDrawLine3D_FUN_00408070(SRenderVertex *vertex1,SRenderVertex *vertex2)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex1
; SRenderVertex *  Stack[0x8]:4   vertex2
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
;
; XREF[2]:
;   engine_3d.c_drawLine3DFromIndices_FUN_00407ff0 at 00408055
;   engine_3d.c_drawLineStrip3D_FUN_00404600 at 00404686
;
; Referenced Globals:
;   SRenderVertex[16] g_RenderVertexBuffer
;   SRenderVertex g_QuadVertex2
;   undefined4 g_QuadVertex2_Y
;   undefined4 g_QuadVertex2_U
;   undefined4 g_ProjectedScreenX1
;   undefined4 g_ProjectedScreenY1
;   SRenderVertex g_QuadVertex3
;   undefined4 g_QuadVertex3_Y
;   undefined4 g_QuadVertex3_U
;   undefined4 g_ProjectedScreenX2
;   undefined4 g_ProjectedScreenY2
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
    MOV ECX,0xc                         ; 004080b6
    ADD ESP,0xc                         ; 004080bb
    MOVSD.REP ES:EDI,ESI                ; 004080be
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
    MOV ECX,0xc                         ; 004080eb
    ADD ESP,0xc                         ; 004080f0
    MOVSD.REP ES:EDI,ESI                ; 004080f3
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
    MOV ECX,0xc                         ; 0040811c
    ADD ESP,0xc                         ; 00408121
    MOVSD.REP ES:EDI,ESI                ; 00408124
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
    MOV ECX,0xc                         ; 00408151
    ADD ESP,0xc                         ; 00408156
    MOVSD.REP ES:EDI,ESI                ; 00408159
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
    MOV ECX,0xc                         ; 0040817f
    ADD ESP,0xc                         ; 00408184
    MOVSD.REP ES:EDI,ESI                ; 00408187
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
    MOV ECX,0xc                         ; 004081b1
    ADD ESP,0xc                         ; 004081b6
    MOVSD.REP ES:EDI,ESI                ; 004081b9
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
    MOV ECX,0xc                         ; 004081df
    ADD ESP,0xc                         ; 004081e4
    MOVSD.REP ES:EDI,ESI                ; 004081e7
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
    MOV ECX,0xc                         ; 00408211
    ADD ESP,0xc                         ; 00408216
    MOVSD.REP ES:EDI,ESI                ; 00408219
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
    MOV ECX,0xc                         ; 0040828a
        ;   Label: LAB_0040828a
    LEA ESI,[ESP + 0x44]                ; 0040828f
    MOV EDI,0x7725b4                    ; 00408293 | g_QuadVertex2
    MOVSD.REP ES:EDI,ESI                ; 00408298 | g_QuadVertex2 | g_QuadVertex2_Y
    MOV ECX,0xc                         ; 0040829a
    LEA ESI,[ESP + 0x74]                ; 0040829f
    MOV EDI,0x7725e4                    ; 004082a3 | g_QuadVertex3
    PUSH 0x4e1e                         ; 004082a8
    MOVSD.REP ES:EDI,ESI                ; 004082ad | g_QuadVertex3 | g_QuadVertex3_Y
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60 ; 004082af
        ;   XREF to: 0050ce60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60(int cache_index)
    ADD ESP,0x4                         ; 004082b4
    PUSH 0x4e1f                         ; 004082b7
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60 ; 004082bc
        ;   XREF to: 0050ce60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60(int cache_index)
    ADD ESP,0x4                         ; 004082c1
    MOV EAX,0x688014                    ; 004082c4 | g_RenderVertexBuffer
    PUSH 0x2                            ; 004082c9
    ADD EAX,0xea5a0                     ; 004082cb
    PUSH EAX                            ; 004082d0 | g_QuadVertex2
    CALL engine_prim.c_prepareDepthBuffer_FUN_00551fb0 ; 004082d1
        ;   XREF to: 00551fb0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_prepareDepthBuffer_FUN_00551fb0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004082d6
    MOV ECX,dword ptr [0x007725ec]      ; 004082d9 | g_QuadVertex3_U
    MOV EAX,[0x007725f8]                ; 004082df | g_ProjectedScreenY2
    PUSH ECX                            ; 004082e4
    SAR EAX,0x10                        ; 004082e5
    PUSH EAX                            ; 004082e8
    MOV EAX,[0x007725f4]                ; 004082e9 | g_ProjectedScreenX2
    SAR EAX,0x10                        ; 004082ee
    PUSH EAX                            ; 004082f1
    MOV EBX,dword ptr [0x007725bc]      ; 004082f2 | g_QuadVertex2_U
    MOV EAX,[0x007725c8]                ; 004082f8 | g_ProjectedScreenY1
    PUSH EBX                            ; 004082fd
    SAR EAX,0x10                        ; 004082fe
    PUSH EAX                            ; 00408301
    MOV EAX,[0x007725c4]                ; 00408302 | g_ProjectedScreenX1
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

