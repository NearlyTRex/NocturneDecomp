; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_prim_c_getTriangleWindingFromIndices_FUN_00552210(SMRGLPrimitiveTriangle *triangle)
;
; Parameters:
; SMRGLPrimitiveTriangle * Stack[0x4]:4   triangle
; Local Variables:
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00 at 0048d0de
;
; Referenced Globals:
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
;   int g_CullingMode
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552210
        ;   Label: engine_prim.c_getTriangleWindingFromIndices_FUN_00552210
    PUSH ESI                            ; 00552211
    PUSH EDI                            ; 00552212
    PUSH EBP                            ; 00552213
    MOV EBP,ESP                         ; 00552214
    SUB ESP,0x14                        ; 00552216
    MOV EBX,dword ptr [EBP + 0x14]      ; 00552219
    MOV EDX,dword ptr [EBX + 0x18]      ; 0055221c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0055221f
    SUB EAX,EDX                         ; 00552226
    MOV ECX,0x688014                    ; 00552228 | g_RenderVertexBuffer
    SHL EAX,0x4                         ; 0055222d
    MOV EDX,dword ptr [EBX + 0x24]      ; 00552230
    ADD ECX,EAX                         ; 00552233
    LEA EAX,[EDX*0x4 + 0x0]             ; 00552235
    MOV EBX,dword ptr [EBX + 0x30]      ; 0055223c
    SUB EAX,EDX                         ; 0055223f
    LEA EDX,[EBX*0x4 + 0x0]             ; 00552241
    SHL EAX,0x4                         ; 00552248
    SUB EDX,EBX                         ; 0055224b
    ADD EAX,0x688014                    ; 0055224d | g_RenderVertexBuffer
    SHL EDX,0x4                         ; 00552252
    MOV EBX,dword ptr [0x00772a7c]      ; 00552255 | g_CullingMode
    ADD EDX,0x688014                    ; 0055225b | g_RenderVertexBuffer
    CMP EBX,0x1                         ; 00552261
    JNZ 0x005522ce                      ; 00552264
        ;   XREF to: 005522ce (CONDITIONAL_JUMP)  ; LAB_005522ce
    MOV EDI,dword ptr [ECX + 0x10]      ; 00552266 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV EBX,dword ptr [EAX + 0x10]      ; 00552269 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    SUB EBX,EDI                         ; 0055226c
    MOV dword ptr [EBP + -0x14],EBX     ; 0055226e
    MOV EBX,dword ptr [EAX + 0x14]      ; 00552271 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV ESI,dword ptr [ECX + 0x14]      ; 00552274 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB EBX,ESI                         ; 00552277
    MOV dword ptr [EBP + -0x10],EBX     ; 00552279
    MOV ECX,dword ptr [EDX + 0x10]      ; 0055227c | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV EDI,dword ptr [EAX + 0x10]      ; 0055227f | g_RenderVertexBuffer[0].projected_vertex.screen_x
    SUB ECX,EDI                         ; 00552282
    MOV dword ptr [EBP + -0xc],ECX      ; 00552284
    MOV EDX,dword ptr [EDX + 0x14]      ; 00552287 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV ECX,dword ptr [EAX + 0x14]      ; 0055228a | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB EDX,ECX                         ; 0055228d
    MOV dword ptr [EBP + -0x8],EDX      ; 0055228f
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 00552292
        ;   Label: LAB_00552292
    IMUL dword ptr [EBP + 0xfffffff8]   ; 00552298
    MOV EBX,EAX                         ; 0055229e
    MOV ECX,EDX                         ; 005522a0
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 005522a2
    IMUL dword ptr [EBP + 0xfffffff4]   ; 005522a8
    SUB EAX,EBX                         ; 005522ae
    SBB EDX,ECX                         ; 005522b0
    MOV EAX,0x0                         ; 005522b2
    JGE 0x005522be                      ; 005522b7
        ;   XREF to: 005522be (CONDITIONAL_JUMP)  ; LAB_005522be
    MOV EAX,0x1                         ; 005522b9
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 005522be
        ;   Label: LAB_005522be
    MOV EAX,dword ptr [EBP + -0x4]      ; 005522c4
    MOV ESP,EBP                         ; 005522c7
    POP EBP                             ; 005522c9
    POP EDI                             ; 005522ca
    POP ESI                             ; 005522cb
    POP EBX                             ; 005522cc
    RET                                 ; 005522cd
    MOV ESI,dword ptr [ECX + 0x10]      ; 005522ce | g_RenderVertexBuffer[0].projected_vertex.screen_x
        ;   Label: LAB_005522ce
    MOV EBX,dword ptr [EAX + 0x10]      ; 005522d1 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    SUB EBX,ESI                         ; 005522d4
    MOV dword ptr [EBP + -0xc],EBX      ; 005522d6
    MOV EBX,dword ptr [EAX + 0x14]      ; 005522d9 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV EDI,dword ptr [ECX + 0x14]      ; 005522dc | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB EBX,EDI                         ; 005522df
    MOV dword ptr [EBP + -0x8],EBX      ; 005522e1
    MOV ECX,dword ptr [EDX + 0x10]      ; 005522e4 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV EBX,dword ptr [EAX + 0x10]      ; 005522e7 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    SUB ECX,EBX                         ; 005522ea
    MOV dword ptr [EBP + -0x14],ECX     ; 005522ec
    MOV EDX,dword ptr [EDX + 0x14]      ; 005522ef | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV ESI,dword ptr [EAX + 0x14]      ; 005522f2 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB EDX,ESI                         ; 005522f5
    MOV dword ptr [EBP + -0x10],EDX     ; 005522f7
    JMP 0x00552292                      ; 005522fa
        ;   XREF to: 00552292 (UNCONDITIONAL_JUMP)  ; LAB_00552292

