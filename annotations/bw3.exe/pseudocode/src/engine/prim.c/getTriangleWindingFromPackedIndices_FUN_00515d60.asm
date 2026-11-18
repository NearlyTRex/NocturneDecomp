; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_prim_c_getTriangleWindingFromPackedIndices_FUN_00515d60(STrianglePackedIndices *triangle)
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
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046e300 at 0046e42f
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046dbd0 at 0046dde4
;
; Referenced Globals:
;   SRenderVertex[20000] g_SRenderVertex_ARRAY_0060b014
;   undefined4 g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_x
;   undefined4 g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_y
;   int g_CullingMode
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515d60
        ;   Label: engine_prim.c_getTriangleWindingFromPackedIndices_FUN_00515d60
    PUSH ESI                            ; 00515d61
    PUSH EDI                            ; 00515d62
    PUSH EBP                            ; 00515d63
    MOV EBP,ESP                         ; 00515d64
    SUB ESP,0x14                        ; 00515d66
    MOV EBX,dword ptr [EBP + 0x14]      ; 00515d69
    XOR EDX,EDX                         ; 00515d6c
    MOV DX,word ptr [EBX]               ; 00515d6e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00515d71
    MOV ECX,0x60b014                    ; 00515d78 | g_SRenderVertex_ARRAY_0060b014
    SUB EAX,EDX                         ; 00515d7d
    XOR EDX,EDX                         ; 00515d7f
    SHL EAX,0x4                         ; 00515d81
    MOV DX,word ptr [EBX + 0x2]         ; 00515d84
    ADD ECX,EAX                         ; 00515d88
    LEA EAX,[EDX*0x4 + 0x0]             ; 00515d8a
    SUB EAX,EDX                         ; 00515d91
    SHL EAX,0x4                         ; 00515d93
    MOV BX,word ptr [EBX + 0x4]         ; 00515d96
    ADD EAX,0x60b014                    ; 00515d9a | g_SRenderVertex_ARRAY_0060b014
    AND EBX,0xffff                      ; 00515d9f
    LEA EDX,[EBX*0x4 + 0x0]             ; 00515da5
    SUB EDX,EBX                         ; 00515dac
    SHL EDX,0x4                         ; 00515dae
    MOV EBX,dword ptr [0x007303fc]      ; 00515db1 | g_CullingMode
    ADD EDX,0x60b014                    ; 00515db7 | g_SRenderVertex_ARRAY_0060b014
    CMP EBX,0x1                         ; 00515dbd
    JNZ 0x00515e2a                      ; 00515dc0
        ;   XREF to: 00515e2a (CONDITIONAL_JUMP)  ; LAB_00515e2a
    MOV EDI,dword ptr [ECX + 0x10]      ; 00515dc2 | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_x
    MOV EBX,dword ptr [EAX + 0x10]      ; 00515dc5 | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_x
    SUB EBX,EDI                         ; 00515dc8
    MOV dword ptr [EBP + -0x14],EBX     ; 00515dca
    MOV EBX,dword ptr [EAX + 0x14]      ; 00515dcd | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_y
    MOV ESI,dword ptr [ECX + 0x14]      ; 00515dd0 | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_y
    SUB EBX,ESI                         ; 00515dd3
    MOV dword ptr [EBP + -0x10],EBX     ; 00515dd5
    MOV ECX,dword ptr [EDX + 0x10]      ; 00515dd8 | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_x
    MOV EDI,dword ptr [EAX + 0x10]      ; 00515ddb | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_x
    SUB ECX,EDI                         ; 00515dde
    MOV dword ptr [EBP + -0xc],ECX      ; 00515de0
    MOV EDX,dword ptr [EDX + 0x14]      ; 00515de3 | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_y
    MOV ECX,dword ptr [EAX + 0x14]      ; 00515de6 | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_y
    SUB EDX,ECX                         ; 00515de9
    MOV dword ptr [EBP + -0x8],EDX      ; 00515deb
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 00515dee
        ;   Label: LAB_00515dee
    IMUL dword ptr [EBP + 0xfffffff8]   ; 00515df4
    MOV EBX,EAX                         ; 00515dfa
    MOV ECX,EDX                         ; 00515dfc
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 00515dfe
    IMUL dword ptr [EBP + 0xfffffff4]   ; 00515e04
    SUB EAX,EBX                         ; 00515e0a
    SBB EDX,ECX                         ; 00515e0c
    MOV EAX,0x0                         ; 00515e0e
    JGE 0x00515e1a                      ; 00515e13
        ;   XREF to: 00515e1a (CONDITIONAL_JUMP)  ; LAB_00515e1a
    MOV EAX,0x1                         ; 00515e15
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 00515e1a
        ;   Label: LAB_00515e1a
    MOV EAX,dword ptr [EBP + -0x4]      ; 00515e20
    MOV ESP,EBP                         ; 00515e23
    POP EBP                             ; 00515e25
    POP EDI                             ; 00515e26
    POP ESI                             ; 00515e27
    POP EBX                             ; 00515e28
    RET                                 ; 00515e29
    MOV ESI,dword ptr [ECX + 0x10]      ; 00515e2a | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_x
        ;   Label: LAB_00515e2a
    MOV EBX,dword ptr [EAX + 0x10]      ; 00515e2d | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_x
    SUB EBX,ESI                         ; 00515e30
    MOV dword ptr [EBP + -0xc],EBX      ; 00515e32
    MOV EBX,dword ptr [EAX + 0x14]      ; 00515e35 | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_y
    MOV EDI,dword ptr [ECX + 0x14]      ; 00515e38 | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_y
    SUB EBX,EDI                         ; 00515e3b
    MOV dword ptr [EBP + -0x8],EBX      ; 00515e3d
    MOV ECX,dword ptr [EDX + 0x10]      ; 00515e40 | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_x
    MOV EBX,dword ptr [EAX + 0x10]      ; 00515e43 | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_x
    SUB ECX,EBX                         ; 00515e46
    MOV dword ptr [EBP + -0x14],ECX     ; 00515e48
    MOV EDX,dword ptr [EDX + 0x14]      ; 00515e4b | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_y
    MOV ESI,dword ptr [EAX + 0x14]      ; 00515e4e | g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_y
    SUB EDX,ESI                         ; 00515e51
    MOV dword ptr [EBP + -0x10],EDX     ; 00515e53
    JMP 0x00515dee                      ; 00515e56
        ;   XREF to: 00515dee (UNCONDITIONAL_JUMP)  ; LAB_00515dee

