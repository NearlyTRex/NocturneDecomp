; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_CurrentAlphaValue = 0xff
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
;   undefined4 g_RenderVertexBuffer[0].fog
;   undefined4 DAT_00688044
;   int[24] g_ProcessedVertexIndices
;   int g_RenderBufferEnabled
;   int g_RenderBufferCount
;   SRenderBufferEntry[256] g_RenderBufferPool
;   undefined4 g_RenderBufferPool[1].vertex_count
;   SRenderBufferEntry*[2500] g_RenderBufferSortArray
;   undefined4 g_RenderBufferSortArray[1]
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   ... and 3 more
;
; Called Functions:
;   crt_stdlib.c__qsort_FUN_005fdf38
;   engine_3d.c_setBlendMode_FUN_00406dd0
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_texture.cpp_loadTextureAndGetData_FUN_005dd8c0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004070c0
        ;   Label: engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0
    SUB ESP,0xc                         ; 004070c1
    CMP dword ptr [0x00772af8],0x0      ; 004070c4 | g_RenderBufferEnabled
    JZ 0x00407246                       ; 004070cb
        ;   XREF to: 00407246 (CONDITIONAL_JUMP)  ; LAB_00407246
    PUSH EDI                            ; 004070d1
    PUSH ESI                            ; 004070d2
    PUSH EBX                            ; 004070d3
    MOV ECX,dword ptr [0x00772afc]      ; 004070d4 | g_RenderBufferCount
    TEST ECX,ECX                        ; 004070da
    JLE 0x00407100                      ; 004070dc
        ;   XREF to: 00407100 (CONDITIONAL_JUMP)  ; LAB_00407100
    MOV EDX,0x772b00                    ; 004070de | g_RenderBufferPool
    LEA EBX,[ECX*0x4 + 0x0]             ; 004070e3
    XOR EAX,EAX                         ; 004070ea
    MOV dword ptr [EAX + 0x81d960],EDX  ; 004070ec | g_RenderBufferSortArray | g_RenderBufferPool | g_RenderBufferSortArray[1]
        ;   Label: LAB_004070ec
    ADD EAX,0x4                         ; 004070f2
    ADD EDX,0x118                       ; 004070f5 | g_RenderBufferPool[1].vertex_count
    CMP EAX,EBX                         ; 004070fb
    JL 0x004070ec                       ; 004070fd
        ;   XREF to: 004070ec (CONDITIONAL_JUMP)  ; LAB_004070ec
    NOP                                 ; 004070ff
    PUSH 0x407080                       ; 00407100
        ;   Label: LAB_00407100
    PUSH 0x4                            ; 00407105
    MOV EBX,dword ptr [0x00772afc]      ; 00407107 | g_RenderBufferCount
    PUSH EBX                            ; 0040710d
    PUSH 0x81d960                       ; 0040710e | g_RenderBufferSortArray
    CALL crt_stdlib.c__qsort_FUN_005fdf38 ; 00407113
        ;   XREF to: 005fdf38 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__qsort_FUN_005fdf38(void * base, SIZE_T num, SIZE_T size, QSORT_COMPARATOR compar)
    MOV ESI,dword ptr [0x02d05248]      ; 00407118 | g_MMXSupported
    ADD ESP,0x10                        ; 0040711e
    TEST ESI,ESI                        ; 00407121
    JNZ 0x0040725a                      ; 00407123
        ;   XREF to: 0040725a (CONDITIONAL_JUMP)  ; LAB_0040725a
    CMP dword ptr [0x0067939c],0x20     ; 00407129 | g_BitsPerPixel
    JNZ 0x0040724b                      ; 00407130
        ;   XREF to: 0040724b (CONDITIONAL_JUMP)  ; LAB_0040724b
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00407136 | g_ScanlineRenderFunc
    MOV EDI,0x1                         ; 00407140
        ;   Label: LAB_00407140
    MOV ESI,0x1e7                       ; 00407145
    MOV EAX,[0x00772afc]                ; 0040714a | g_RenderBufferCount
    XOR EBP,EBP                         ; 0040714f
    MOV dword ptr [0x02d052a4],EDI      ; 00407151 | g_RenderStateFlag2
    MOV dword ptr [ESP + 0x10],EBP      ; 00407157
    MOV dword ptr [0x02d052a0],ESI      ; 0040715b | g_RenderStateFlags
    TEST EAX,EAX                        ; 00407161
    JLE 0x0040722c                      ; 00407163
        ;   XREF to: 0040722c (CONDITIONAL_JUMP)  ; LAB_0040722c
    MOV dword ptr [ESP + 0xc],EBP       ; 00407169
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040716d
        ;   Label: LAB_0040716d
    MOV EAX,dword ptr [EAX + 0x81d960]  ; 00407171 | g_RenderBufferSortArray | g_RenderBufferSortArray[1]
    MOV dword ptr [ESP + 0x14],EAX      ; 00407177
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040717b
    MOV ECX,dword ptr [EDX]             ; 0040717f
    XOR EAX,EAX                         ; 00407181
    TEST ECX,ECX                        ; 00407183
    JLE 0x004071c6                      ; 00407185
        ;   XREF to: 004071c6 (CONDITIONAL_JUMP)  ; LAB_004071c6
    MOV EBX,EDX                         ; 00407187
    XOR EBP,EBP                         ; 00407189
    IMUL EDX,EAX,0x30                   ; 0040718b
        ;   Label: LAB_0040718b
    MOV ECX,0xc                         ; 0040718e
    LEA ESI,[EBX + 0x4]                 ; 00407193
    LEA EDI,[EDX + 0x688014]            ; 00407196 | g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 0040719c | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y | DAT_00688044
    MOV CX,word ptr [EDX + 0x688040]    ; 0040719e | g_RenderVertexBuffer[0].fog
    XOR ECX,0xffffffff                  ; 004071a5
    ADD EBP,0x4                         ; 004071a8
    MOV word ptr [EDX + 0x688040],CX    ; 004071ab | g_RenderVertexBuffer[0].fog
    MOV EDX,dword ptr [ESP + 0x14]      ; 004071b2
    MOV dword ptr [EBP + 0x772a94],EAX  ; 004071b6 | g_ProcessedVertexIndices
    INC EAX                             ; 004071bc
    MOV ESI,dword ptr [EDX]             ; 004071bd
    ADD EBX,0x30                        ; 004071bf
    CMP EAX,ESI                         ; 004071c2
    JL 0x0040718b                       ; 004071c4
        ;   XREF to: 0040718b (CONDITIONAL_JUMP)  ; LAB_0040718b
    MOV EAX,dword ptr [ESP + 0x14]      ; 004071c6
        ;   Label: LAB_004071c6
    ADD EAX,0xc4                        ; 004071ca
    PUSH EAX                            ; 004071cf
    CALL engine_texture.cpp_loadTextureAndGetData_FUN_005dd8c0 ; 004071d0
        ;   XREF to: 005dd8c0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_loadTextureAndGetData_FUN_005dd8c0(SMRGLTextureBasic * texture_info)
    ADD ESP,0x4                         ; 004071d5
    MOV EAX,dword ptr [ESP + 0x14]      ; 004071d8
    MOV EAX,dword ptr [EAX + 0x110]     ; 004071dc
    MOV [0x02d05298],EAX                ; 004071e2 | g_BlendMode
    MOV EAX,dword ptr [ESP + 0x14]      ; 004071e7
    MOV EAX,dword ptr [EAX + 0x10c]     ; 004071eb
    MOV [0x006793b4],EAX                ; 004071f1 | g_CurrentAlphaValue
    MOV EAX,dword ptr [ESP + 0x14]      ; 004071f6
    PUSH 0x772a98                       ; 004071fa | g_ProcessedVertexIndices
    MOV EDX,dword ptr [EAX]             ; 004071ff
    PUSH EDX                            ; 00407201
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00407202
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00407207
    MOV ESI,dword ptr [0x00772afc]      ; 0040720a | g_RenderBufferCount
    MOV ECX,dword ptr [ESP + 0xc]       ; 00407210
    MOV EBX,dword ptr [ESP + 0x10]      ; 00407214
    ADD ECX,0x4                         ; 00407218
    INC EBX                             ; 0040721b
    MOV dword ptr [ESP + 0xc],ECX       ; 0040721c
    MOV dword ptr [ESP + 0x10],EBX      ; 00407220
    CMP EBX,ESI                         ; 00407224
    JL 0x0040716d                       ; 00407226
        ;   XREF to: 0040716d (CONDITIONAL_JUMP)  ; LAB_0040716d
    XOR EDI,EDI                         ; 0040722c
        ;   Label: LAB_0040722c
    PUSH EDI                            ; 0040722e
    MOV dword ptr [0x00772afc],EDI      ; 0040722f | g_RenderBufferCount
    MOV dword ptr [0x00772af8],EDI      ; 00407235 | g_RenderBufferEnabled
    CALL engine_3d.c_setBlendMode_FUN_00406dd0 ; 0040723b
        ;   XREF to: 00406dd0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_00406dd0(int blend_mode)
    ADD ESP,0x4                         ; 00407240
    POP EBX                             ; 00407243
    POP ESI                             ; 00407244
    POP EDI                             ; 00407245
    ADD ESP,0xc                         ; 00407246
        ;   Label: LAB_00407246
    POP EBP                             ; 00407249
    RET                                 ; 0040724a
    MOV dword ptr [0x02d0257c],0x5b5322 ; 0040724b | g_ScanlineRenderFunc
        ;   Label: LAB_0040724b
    JMP 0x00407140                      ; 00407255
        ;   XREF to: 00407140 (UNCONDITIONAL_JUMP)  ; LAB_00407140
    CMP dword ptr [0x0067939c],0x20     ; 0040725a | g_BitsPerPixel
        ;   Label: LAB_0040725a
    JNZ 0x00407272                      ; 00407261
        ;   XREF to: 00407272 (CONDITIONAL_JUMP)  ; LAB_00407272
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00407263 | g_ScanlineRenderFunc
    JMP 0x00407140                      ; 0040726d
        ;   XREF to: 00407140 (UNCONDITIONAL_JUMP)  ; LAB_00407140
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00407272 | g_ScanlineRenderFunc
        ;   Label: LAB_00407272
    JMP 0x00407140                      ; 0040727c
        ;   XREF to: 00407140 (UNCONDITIONAL_JUMP)  ; LAB_00407140

