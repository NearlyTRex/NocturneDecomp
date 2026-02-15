; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_prim_c_getTriangleWindingFromIndices_FUN_00552300(STriangleIndices *triangle_indices)
;
; Parameters:
; STriangleIndices * Stack[0x4]:4   triangle_indices
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
;   int g_CullingMode
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552300
        ;   Label: engine_prim.c_getTriangleWindingFromIndices_FUN_00552300
    PUSH ESI                            ; 00552301
    PUSH EDI                            ; 00552302
    PUSH EBP                            ; 00552303
    MOV EBP,ESP                         ; 00552304
    SUB ESP,0x14                        ; 00552306
    MOV EBX,dword ptr [EBP + 0x14]      ; 00552309
    MOV EDX,dword ptr [EBX + 0x18]      ; 0055230c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0055230f
    SUB EAX,EDX                         ; 00552316
    MOV ECX,0x688014                    ; 00552318 | g_RenderVertexBuffer
    SHL EAX,0x4                         ; 0055231d
    MOV EDX,dword ptr [EBX + 0x24]      ; 00552320
    ADD ECX,EAX                         ; 00552323
    LEA EAX,[EDX*0x4 + 0x0]             ; 00552325
    MOV EBX,dword ptr [EBX + 0x30]      ; 0055232c
    SUB EAX,EDX                         ; 0055232f
    LEA EDX,[EBX*0x4 + 0x0]             ; 00552331
    SHL EAX,0x4                         ; 00552338
    SUB EDX,EBX                         ; 0055233b
    ADD EAX,0x688014                    ; 0055233d | g_RenderVertexBuffer
    SHL EDX,0x4                         ; 00552342
    MOV EBX,dword ptr [0x00772a7c]      ; 00552345 | g_CullingMode
    ADD EDX,0x688014                    ; 0055234b | g_RenderVertexBuffer
    CMP EBX,0x1                         ; 00552351
    JNZ 0x005523be                      ; 00552354
        ;   XREF to: 005523be (CONDITIONAL_JUMP)  ; LAB_005523be
    MOV EDI,dword ptr [ECX + 0x10]      ; 00552356 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV EBX,dword ptr [EAX + 0x10]      ; 00552359 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    SUB EBX,EDI                         ; 0055235c
    MOV dword ptr [EBP + -0x14],EBX     ; 0055235e
    MOV EBX,dword ptr [EAX + 0x14]      ; 00552361 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV ESI,dword ptr [ECX + 0x14]      ; 00552364 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB EBX,ESI                         ; 00552367
    MOV dword ptr [EBP + -0x10],EBX     ; 00552369
    MOV ECX,dword ptr [EDX + 0x10]      ; 0055236c | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV EDI,dword ptr [EAX + 0x10]      ; 0055236f | g_RenderVertexBuffer[0].projected_vertex.screen_x
    SUB ECX,EDI                         ; 00552372
    MOV dword ptr [EBP + -0xc],ECX      ; 00552374
    MOV EDX,dword ptr [EDX + 0x14]      ; 00552377 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV ECX,dword ptr [EAX + 0x14]      ; 0055237a | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB EDX,ECX                         ; 0055237d
    MOV dword ptr [EBP + -0x8],EDX      ; 0055237f
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 00552382
        ;   Label: LAB_00552382
    IMUL dword ptr [EBP + 0xfffffff8]   ; 00552388
    MOV EBX,EAX                         ; 0055238e
    MOV ECX,EDX                         ; 00552390
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 00552392
    IMUL dword ptr [EBP + 0xfffffff4]   ; 00552398
    SUB EAX,EBX                         ; 0055239e
    SBB EDX,ECX                         ; 005523a0
    MOV EAX,0x0                         ; 005523a2
    JGE 0x005523ae                      ; 005523a7
        ;   XREF to: 005523ae (CONDITIONAL_JUMP)  ; LAB_005523ae
    MOV EAX,0x1                         ; 005523a9
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 005523ae
        ;   Label: LAB_005523ae
    MOV EAX,dword ptr [EBP + -0x4]      ; 005523b4
    MOV ESP,EBP                         ; 005523b7
    POP EBP                             ; 005523b9
    POP EDI                             ; 005523ba
    POP ESI                             ; 005523bb
    POP EBX                             ; 005523bc
    RET                                 ; 005523bd
    MOV ESI,dword ptr [ECX + 0x10]      ; 005523be | g_RenderVertexBuffer[0].projected_vertex.screen_x
        ;   Label: LAB_005523be
    MOV EBX,dword ptr [EAX + 0x10]      ; 005523c1 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    SUB EBX,ESI                         ; 005523c4
    MOV dword ptr [EBP + -0xc],EBX      ; 005523c6
    MOV EBX,dword ptr [EAX + 0x14]      ; 005523c9 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV EDI,dword ptr [ECX + 0x14]      ; 005523cc | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB EBX,EDI                         ; 005523cf
    MOV dword ptr [EBP + -0x8],EBX      ; 005523d1
    MOV ECX,dword ptr [EDX + 0x10]      ; 005523d4 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV EBX,dword ptr [EAX + 0x10]      ; 005523d7 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    SUB ECX,EBX                         ; 005523da
    MOV dword ptr [EBP + -0x14],ECX     ; 005523dc
    MOV EDX,dword ptr [EDX + 0x14]      ; 005523df | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV ESI,dword ptr [EAX + 0x14]      ; 005523e2 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB EDX,ESI                         ; 005523e5
    MOV dword ptr [EBP + -0x10],EDX     ; 005523e7
    JMP 0x00552382                      ; 005523ea
        ;   XREF to: 00552382 (UNCONDITIONAL_JUMP)  ; LAB_00552382

