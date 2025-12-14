; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0(STrianglePackedIndices * triangle)
;
; Parameters:
; STrianglePackedIndices * Stack[0x4]:4   triangle
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0 at 0048d9cf
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170 at 0048d384
;
; Referenced Globals:
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
;   int g_CullingMode
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005523f0
        ;   Label: engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0
    PUSH ESI                            ; 005523f1
    PUSH EDI                            ; 005523f2
    PUSH EBP                            ; 005523f3
    MOV EBP,ESP                         ; 005523f4
    SUB ESP,0x14                        ; 005523f6
    MOV EBX,dword ptr [EBP + 0x14]      ; 005523f9
    XOR EDX,EDX                         ; 005523fc
    MOV DX,word ptr [EBX]               ; 005523fe
    LEA EAX,[EDX*0x4 + 0x0]             ; 00552401
    MOV ECX,0x688014                    ; 00552408 | g_RenderVertexBuffer
    SUB EAX,EDX                         ; 0055240d
    XOR EDX,EDX                         ; 0055240f
    SHL EAX,0x4                         ; 00552411
    MOV DX,word ptr [EBX + 0x2]         ; 00552414
    ADD ECX,EAX                         ; 00552418
    LEA EAX,[EDX*0x4 + 0x0]             ; 0055241a
    SUB EAX,EDX                         ; 00552421
    SHL EAX,0x4                         ; 00552423
    MOV BX,word ptr [EBX + 0x4]         ; 00552426
    ADD EAX,0x688014                    ; 0055242a | g_RenderVertexBuffer
    AND EBX,0xffff                      ; 0055242f
    LEA EDX,[EBX*0x4 + 0x0]             ; 00552435
    SUB EDX,EBX                         ; 0055243c
    SHL EDX,0x4                         ; 0055243e
    MOV EBX,dword ptr [0x00772a7c]      ; 00552441 | g_CullingMode
    ADD EDX,0x688014                    ; 00552447 | g_RenderVertexBuffer
    CMP EBX,0x1                         ; 0055244d
    JNZ 0x005524ba                      ; 00552450
        ;   XREF to: 005524ba (CONDITIONAL_JUMP)  ; LAB_005524ba
    MOV EDI,dword ptr [ECX + 0x10]      ; 00552452 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV EBX,dword ptr [EAX + 0x10]      ; 00552455 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    SUB EBX,EDI                         ; 00552458
    MOV dword ptr [EBP + -0x14],EBX     ; 0055245a
    MOV EBX,dword ptr [EAX + 0x14]      ; 0055245d | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV ESI,dword ptr [ECX + 0x14]      ; 00552460 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB EBX,ESI                         ; 00552463
    MOV dword ptr [EBP + -0x10],EBX     ; 00552465
    MOV ECX,dword ptr [EDX + 0x10]      ; 00552468 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV EDI,dword ptr [EAX + 0x10]      ; 0055246b | g_RenderVertexBuffer[0].projected_vertex.screen_x
    SUB ECX,EDI                         ; 0055246e
    MOV dword ptr [EBP + -0xc],ECX      ; 00552470
    MOV EDX,dword ptr [EDX + 0x14]      ; 00552473 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV ECX,dword ptr [EAX + 0x14]      ; 00552476 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB EDX,ECX                         ; 00552479
    MOV dword ptr [EBP + -0x8],EDX      ; 0055247b
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 0055247e
        ;   Label: LAB_0055247e
    IMUL dword ptr [EBP + 0xfffffff8]   ; 00552484
    MOV EBX,EAX                         ; 0055248a
    MOV ECX,EDX                         ; 0055248c
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 0055248e
    IMUL dword ptr [EBP + 0xfffffff4]   ; 00552494
    SUB EAX,EBX                         ; 0055249a
    SBB EDX,ECX                         ; 0055249c
    MOV EAX,0x0                         ; 0055249e
    JGE 0x005524aa                      ; 005524a3
        ;   XREF to: 005524aa (CONDITIONAL_JUMP)  ; LAB_005524aa
    MOV EAX,0x1                         ; 005524a5
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 005524aa
        ;   Label: LAB_005524aa
    MOV EAX,dword ptr [EBP + -0x4]      ; 005524b0
    MOV ESP,EBP                         ; 005524b3
    POP EBP                             ; 005524b5
    POP EDI                             ; 005524b6
    POP ESI                             ; 005524b7
    POP EBX                             ; 005524b8
    RET                                 ; 005524b9
    MOV ESI,dword ptr [ECX + 0x10]      ; 005524ba | g_RenderVertexBuffer[0].projected_vertex.screen_x
        ;   Label: LAB_005524ba
    MOV EBX,dword ptr [EAX + 0x10]      ; 005524bd | g_RenderVertexBuffer[0].projected_vertex.screen_x
    SUB EBX,ESI                         ; 005524c0
    MOV dword ptr [EBP + -0xc],EBX      ; 005524c2
    MOV EBX,dword ptr [EAX + 0x14]      ; 005524c5 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV EDI,dword ptr [ECX + 0x14]      ; 005524c8 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB EBX,EDI                         ; 005524cb
    MOV dword ptr [EBP + -0x8],EBX      ; 005524cd
    MOV ECX,dword ptr [EDX + 0x10]      ; 005524d0 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV EBX,dword ptr [EAX + 0x10]      ; 005524d3 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    SUB ECX,EBX                         ; 005524d6
    MOV dword ptr [EBP + -0x14],ECX     ; 005524d8
    MOV EDX,dword ptr [EDX + 0x14]      ; 005524db | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV ESI,dword ptr [EAX + 0x14]      ; 005524de | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB EDX,ESI                         ; 005524e1
    MOV dword ptr [EBP + -0x10],EDX     ; 005524e3
    JMP 0x0055247e                      ; 005524e6
        ;   XREF to: 0055247e (UNCONDITIONAL_JUMP)  ; LAB_0055247e

