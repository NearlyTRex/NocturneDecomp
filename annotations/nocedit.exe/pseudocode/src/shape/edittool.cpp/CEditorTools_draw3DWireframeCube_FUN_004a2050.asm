; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   corner1
; CVector3f *      Stack[0xc]:4   corner2
; int              Stack[0x10]:4   color_value
; Local Variables:
; float[24]        Stack[-0x110]:96  afStack_110
; CVector3i        Stack[-0xb0]:12  local_b0
; float            Stack[-0xa4]:4  local_a4
; float            Stack[-0xa0]:4  local_a0
; float            Stack[-0x9c]:4  local_9c
; float            Stack[-0x98]:4  local_98
; float            Stack[-0x94]:4  local_94
; float            Stack[-0x90]:4  local_90
; CVector3i        Stack[-0x8c]:12  local_8c
; float            Stack[-0x80]:4  local_80
; float            Stack[-0x7c]:4  local_7c
; float            Stack[-0x78]:4  local_78
; float            Stack[-0x74]:4  local_74
; float            Stack[-0x70]:4  local_70
; float            Stack[-0x6c]:4  local_6c
; float            Stack[-0x68]:4  local_68
; float            Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; CVector3i        Stack[-0x50]:12  local_50
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; uint             Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_setedit.cpp_CDemonSet_showRoomEditor_FUN_00581aa0 at 00581da5
;   core_setedit.cpp_CDemonSet_showVdirBoxEditor_FUN_00583170 at 00583571
;   shape_edittool.cpp_CEditorTools_drawCenteredWireframeCube_FUN_004a2510 at 004a256e
;
; Referenced Globals:
;   float g_CubeEdgeScale1 = 0.2000000
;   float g_CubeEdgeScale2 = 0.8000000
;   WatcomTypeInfo g_CVectorTypeInfo
;   float g_WorldToScreenScale2 = 256
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
;   undefined4 g_RenderVertexBuffer[1].projected_vertex.transformed_x
;   undefined4 g_RenderVertexBuffer[1].projected_vertex.transformed_y
;   int g_ActiveRenderColor
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005fe667
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;   engine_matrix.c_transformToCache_FUN_0050cd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2050
        ;   Label: shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
    PUSH ESI                            ; 004a2051
    PUSH EDI                            ; 004a2052
    PUSH EBP                            ; 004a2053
    SUB ESP,0x100                       ; 004a2054
    MOV EBX,dword ptr [ESP + 0x118]     ; 004a205a
    MOV ESI,dword ptr [ESP + 0x11c]     ; 004a2061
    PUSH 0x6598c0                       ; 004a2068 | g_CVectorTypeInfo
    PUSH 0x8                            ; 004a206d
    LEA EAX,[ESP + 0x8]                 ; 004a206f
    PUSH EAX                            ; 004a2073
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004a2074
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004a2079
    XOR EAX,EAX                         ; 004a207c
    MOV EDX,dword ptr [ESI]             ; 004a207e
        ;   Label: LAB_004a207e
    MOV dword ptr [ESP + 0xf4],EDX      ; 004a2080
    IMUL EDX,EAX,0xc                    ; 004a2087
    MOV EDI,dword ptr [ESP + 0xf4]      ; 004a208a
        ;   Label: LAB_004a208a
    MOV dword ptr [ESP + EDX*0x1],EDI   ; 004a2091
    TEST AL,0x2                         ; 004a2094
    JNZ 0x004a24fb                      ; 004a2096
        ;   XREF to: 004a24fb (CONDITIONAL_JUMP)  ; LAB_004a24fb
    MOV EDI,dword ptr [ESI + 0x4]       ; 004a209c
    MOV dword ptr [ESP + 0xfc],EDI      ; 004a209f
        ;   Label: LAB_004a209f
    MOV EDI,dword ptr [ESP + 0xfc]      ; 004a20a6
    MOV dword ptr [ESP + EDX*0x1 + 0x4],EDI ; 004a20ad
    TEST AL,0x4                         ; 004a20b1
    JZ 0x004a2503                       ; 004a20b3
        ;   XREF to: 004a2503 (CONDITIONAL_JUMP)  ; LAB_004a2503
    MOV EDI,dword ptr [EBX + 0x8]       ; 004a20b9
    MOV dword ptr [ESP + 0xf8],EDI      ; 004a20bc
        ;   Label: LAB_004a20bc
    ADD EDX,0xc                         ; 004a20c3
    MOV EDI,dword ptr [ESP + 0xf8]      ; 004a20c6
    INC EAX                             ; 004a20cd
    MOV dword ptr [ESP + EDX*0x1 + -0x4],EDI ; 004a20ce
    CMP EAX,0x8                         ; 004a20d2
    JL 0x004a24e5                       ; 004a20d5
        ;   XREF to: 004a24e5 (CONDITIONAL_JUMP)  ; LAB_004a24e5
    MOV EAX,dword ptr [ESP + 0x120]     ; 004a20db
    XOR EDX,EDX                         ; 004a20e2
    MOV EBP,ESP                         ; 004a20e4
    MOV dword ptr [ESP + 0xf0],EDX      ; 004a20e6
    MOV [0x02d02570],EAX                ; 004a20ed | g_ActiveRenderColor
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004a20f2
        ;   Label: LAB_004a20f2
    XOR AL,0x1                          ; 004a20f9
    IMUL EAX,EAX,0xc                    ; 004a20fb
    MOV ESI,ESP                         ; 004a20fe
    LEA EBX,[ESP + 0x84]                ; 004a2100
    ADD ESI,EAX                         ; 004a2107
    MOV EAX,EBP                         ; 004a2109
    FLD float ptr [EAX]                 ; 004a210b
    FMUL float ptr [0x0065d44c]         ; 004a210d | g_WorldToScreenScale2
    FISTP dword ptr [EBX]               ; 004a2113
    FLD float ptr [EAX + 0x4]           ; 004a2115
    FMUL float ptr [0x0065d44c]         ; 004a2118 | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x4]         ; 004a211e
    FLD float ptr [EAX + 0x8]           ; 004a2121
    FMUL float ptr [0x0065d44c]         ; 004a2124 | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x8]         ; 004a212a
    LEA EAX,[ESP + 0x84]                ; 004a212d
    PUSH EAX                            ; 004a2134
    PUSH 0x0                            ; 004a2135
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004a2137
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [ESI]                 ; 004a213c
    FMUL float ptr [0x006235c6]         ; 004a213e | g_CubeEdgeScale1
    ADD ESP,0x8                         ; 004a2144
    FSTP float ptr [ESP + 0xa8]         ; 004a2147
    FLD float ptr [ESI + 0x4]           ; 004a214e
    FMUL float ptr [0x006235c6]         ; 004a2151 | g_CubeEdgeScale1
    FSTP float ptr [ESP + 0xac]         ; 004a2157
    FLD float ptr [ESI + 0x8]           ; 004a215e
    FMUL float ptr [0x006235c6]         ; 004a2161 | g_CubeEdgeScale1
    FSTP float ptr [ESP + 0xb0]         ; 004a2167
    FLD float ptr [EBP]                 ; 004a216e
    FMUL float ptr [0x006235ca]         ; 004a2171 | g_CubeEdgeScale2
    FSTP float ptr [ESP + 0xd8]         ; 004a2177
    FLD float ptr [EBP + 0x4]           ; 004a217e
    FMUL float ptr [0x006235ca]         ; 004a2181 | g_CubeEdgeScale2
    FSTP float ptr [ESP + 0xdc]         ; 004a2187
    FLD float ptr [EBP + 0x8]           ; 004a218e
    FMUL float ptr [0x006235ca]         ; 004a2191 | g_CubeEdgeScale2
    LEA EBX,[ESP + 0x84]                ; 004a2197
    LEA EAX,[ESP + 0xcc]                ; 004a219e
    FLD float ptr [ESP + 0xd8]          ; 004a21a5
    FADD float ptr [ESP + 0xa8]         ; 004a21ac
    FLD float ptr [ESP + 0xdc]          ; 004a21b3
    FXCH                                ; 004a21ba
    FSTP float ptr [ESP + 0xcc]         ; 004a21bc
    FADD float ptr [ESP + 0xac]         ; 004a21c3
    FXCH                                ; 004a21ca
    FST float ptr [ESP + 0xe0]          ; 004a21cc
    FADD float ptr [ESP + 0xb0]         ; 004a21d3
    FXCH                                ; 004a21da
    FSTP float ptr [ESP + 0xd0]         ; 004a21dc
    FSTP float ptr [ESP + 0xd4]         ; 004a21e3
    FLD float ptr [EAX]                 ; 004a21ea
    FMUL float ptr [0x0065d44c]         ; 004a21ec | g_WorldToScreenScale2
    FISTP dword ptr [EBX]               ; 004a21f2
    FLD float ptr [EAX + 0x4]           ; 004a21f4
    FMUL float ptr [0x0065d44c]         ; 004a21f7 | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x4]         ; 004a21fd
    FLD float ptr [EAX + 0x8]           ; 004a2200
    FMUL float ptr [0x0065d44c]         ; 004a2203 | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x8]         ; 004a2209
    LEA EAX,[ESP + 0x84]                ; 004a220c
    PUSH EAX                            ; 004a2213
    PUSH 0x1                            ; 004a2214
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004a2216
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 004a221b
    JMP 0x00602c18                      ; 004a221e
        ;   XREF to: 00602c18 (UNCONDITIONAL_JUMP)  ; LAB_00602c18
    MOVSD.REP ES:EDI,ESI                ; 004a222d | g_RenderVertexBuffer[1].projected_vertex.transformed_x | g_RenderVertexBuffer[1].projected_vertex.transformed_y
        ;   Label: LAB_004a222d
    JMP 0x00602c72                      ; 004a222f
        ;   XREF to: 00602c72 (UNCONDITIONAL_JUMP)  ; LAB_00602c72
    MOVSD.REP ES:EDI,ESI                ; 004a223e | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
        ;   Label: LAB_004a223e
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 004a2240
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 004a2245
    MOV ESI,dword ptr [ESP + 0xf0]      ; 004a2248
    XOR SI,0x2                          ; 004a224f
    IMUL ESI,ESI,0xc                    ; 004a2253
    MOV EAX,ESP                         ; 004a2256
    LEA EBX,[ESP + 0x60]                ; 004a2258
    ADD ESI,EAX                         ; 004a225c
    MOV EAX,EBP                         ; 004a225e
    FLD float ptr [EAX]                 ; 004a2260
    FMUL float ptr [0x0065d44c]         ; 004a2262 | g_WorldToScreenScale2
    FISTP dword ptr [EBX]               ; 004a2268
    FLD float ptr [EAX + 0x4]           ; 004a226a
    FMUL float ptr [0x0065d44c]         ; 004a226d | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x4]         ; 004a2273
    FLD float ptr [EAX + 0x8]           ; 004a2276
    FMUL float ptr [0x0065d44c]         ; 004a2279 | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x8]         ; 004a227f
    LEA EAX,[ESP + 0x60]                ; 004a2282
    PUSH EAX                            ; 004a2286
    PUSH 0x0                            ; 004a2287
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004a2289
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [ESI]                 ; 004a228e
    FMUL float ptr [0x006235c6]         ; 004a2290 | g_CubeEdgeScale1
    ADD ESP,0x8                         ; 004a2296
    FSTP float ptr [ESP + 0x78]         ; 004a2299
    FLD float ptr [ESI + 0x4]           ; 004a229d
    FMUL float ptr [0x006235c6]         ; 004a22a0 | g_CubeEdgeScale1
    FSTP float ptr [ESP + 0x7c]         ; 004a22a6
    FLD float ptr [ESI + 0x8]           ; 004a22aa
    FMUL float ptr [0x006235c6]         ; 004a22ad | g_CubeEdgeScale1
    FSTP float ptr [ESP + 0x80]         ; 004a22b3
    FLD float ptr [EBP]                 ; 004a22ba
    FMUL float ptr [0x006235ca]         ; 004a22bd | g_CubeEdgeScale2
    FSTP float ptr [ESP + 0x9c]         ; 004a22c3
    FLD float ptr [EBP + 0x4]           ; 004a22ca
    FMUL float ptr [0x006235ca]         ; 004a22cd | g_CubeEdgeScale2
    FSTP float ptr [ESP + 0xa0]         ; 004a22d3
    FLD float ptr [EBP + 0x8]           ; 004a22da
    FMUL float ptr [0x006235ca]         ; 004a22dd | g_CubeEdgeScale2
    FLD float ptr [ESP + 0x9c]          ; 004a22e3
    FADD float ptr [ESP + 0x78]         ; 004a22ea
    FLD float ptr [ESP + 0xa0]          ; 004a22ee
    FXCH                                ; 004a22f5
    FSTP float ptr [ESP + 0xe4]         ; 004a22f7
    FADD float ptr [ESP + 0x7c]         ; 004a22fe
    FXCH                                ; 004a2302
    FST float ptr [ESP + 0xa4]          ; 004a2304
    FADD float ptr [ESP + 0x80]         ; 004a230b
    FXCH                                ; 004a2312
    FSTP float ptr [ESP + 0xe8]         ; 004a2314
    FSTP float ptr [ESP + 0xec]         ; 004a231b
    LEA EBX,[ESP + 0x60]                ; 004a2322
    LEA EAX,[ESP + 0xe4]                ; 004a2326
    FLD float ptr [EAX]                 ; 004a232d
    FMUL float ptr [0x0065d44c]         ; 004a232f | g_WorldToScreenScale2
    FISTP dword ptr [EBX]               ; 004a2335
    FLD float ptr [EAX + 0x4]           ; 004a2337
    FMUL float ptr [0x0065d44c]         ; 004a233a | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x4]         ; 004a2340
    FLD float ptr [EAX + 0x8]           ; 004a2343
    FMUL float ptr [0x0065d44c]         ; 004a2346 | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x8]         ; 004a234c
    LEA EAX,[ESP + 0x60]                ; 004a234f
    PUSH EAX                            ; 004a2353
    PUSH 0x1                            ; 004a2354
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004a2356
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 004a235b
    JMP 0x00602ccc                      ; 004a235e
        ;   XREF to: 00602ccc (UNCONDITIONAL_JUMP)  ; LAB_00602ccc
    MOVSD.REP ES:EDI,ESI                ; 004a236d | g_RenderVertexBuffer[1].projected_vertex.transformed_x | g_RenderVertexBuffer[1].projected_vertex.transformed_y
        ;   Label: LAB_004a236d
    JMP 0x00602d26                      ; 004a236f
        ;   XREF to: 00602d26 (UNCONDITIONAL_JUMP)  ; LAB_00602d26
    MOVSD.REP ES:EDI,ESI                ; 004a237e | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
        ;   Label: LAB_004a237e
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 004a2380
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 004a2385
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004a2388
    XOR AL,0x4                          ; 004a238f
    IMUL EAX,EAX,0xc                    ; 004a2391
    MOV ESI,ESP                         ; 004a2394
    LEA EBX,[ESP + 0xc0]                ; 004a2396
    ADD ESI,EAX                         ; 004a239d
    MOV EAX,EBP                         ; 004a239f
    FLD float ptr [EAX]                 ; 004a23a1
    FMUL float ptr [0x0065d44c]         ; 004a23a3 | g_WorldToScreenScale2
    FISTP dword ptr [EBX]               ; 004a23a9
    FLD float ptr [EAX + 0x4]           ; 004a23ab
    FMUL float ptr [0x0065d44c]         ; 004a23ae | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x4]         ; 004a23b4
    FLD float ptr [EAX + 0x8]           ; 004a23b7
    FMUL float ptr [0x0065d44c]         ; 004a23ba | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x8]         ; 004a23c0
    LEA EAX,[ESP + 0xc0]                ; 004a23c3
    PUSH EAX                            ; 004a23ca
    PUSH 0x0                            ; 004a23cb
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004a23cd
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [0x006235c6]          ; 004a23d2 | g_CubeEdgeScale1
    FLD float ptr [ESI]                 ; 004a23d8
    FMUL ST1                            ; 004a23da
    ADD ESP,0x8                         ; 004a23dc
    FSTP float ptr [ESP + 0x90]         ; 004a23df
    FLD float ptr [ESI + 0x4]           ; 004a23e6
    FMUL ST1                            ; 004a23e9
    FSTP float ptr [ESP + 0x94]         ; 004a23eb
    FMUL float ptr [ESI + 0x8]          ; 004a23f2
    FSTP float ptr [ESP + 0x98]         ; 004a23f5
    FLD float ptr [0x006235ca]          ; 004a23fc | g_CubeEdgeScale2
    FLD float ptr [EBP]                 ; 004a2402
    FMUL ST1                            ; 004a2405
    FSTP float ptr [ESP + 0x6c]         ; 004a2407
    FLD float ptr [EBP + 0x4]           ; 004a240b
    FMUL ST1                            ; 004a240e
    FSTP float ptr [ESP + 0x70]         ; 004a2410
    FMUL float ptr [EBP + 0x8]          ; 004a2414
    LEA EBX,[ESP + 0xc0]                ; 004a2417
    LEA EAX,[ESP + 0xb4]                ; 004a241e
    FLD float ptr [ESP + 0x6c]          ; 004a2425
    FADD float ptr [ESP + 0x90]         ; 004a2429
    FLD float ptr [ESP + 0x70]          ; 004a2430
    FXCH                                ; 004a2434
    FSTP float ptr [ESP + 0xb4]         ; 004a2436
    FADD float ptr [ESP + 0x94]         ; 004a243d
    FXCH                                ; 004a2444
    FST float ptr [ESP + 0x74]          ; 004a2446
    FADD float ptr [ESP + 0x98]         ; 004a244a
    FXCH                                ; 004a2451
    FSTP float ptr [ESP + 0xb8]         ; 004a2453
    FSTP float ptr [ESP + 0xbc]         ; 004a245a
    FLD float ptr [EAX]                 ; 004a2461
    FMUL float ptr [0x0065d44c]         ; 004a2463 | g_WorldToScreenScale2
    FISTP dword ptr [EBX]               ; 004a2469
    FLD float ptr [EAX + 0x4]           ; 004a246b
    FMUL float ptr [0x0065d44c]         ; 004a246e | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x4]         ; 004a2474
    FLD float ptr [EAX + 0x8]           ; 004a2477
    FMUL float ptr [0x0065d44c]         ; 004a247a | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x8]         ; 004a2480
    LEA EAX,[ESP + 0xc0]                ; 004a2483
    PUSH EAX                            ; 004a248a
    PUSH 0x1                            ; 004a248b
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004a248d
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 004a2492
    JMP 0x00602d80                      ; 004a2495
        ;   XREF to: 00602d80 (UNCONDITIONAL_JUMP)  ; LAB_00602d80
    MOVSD.REP ES:EDI,ESI                ; 004a24a4 | g_RenderVertexBuffer[1].projected_vertex.transformed_x | g_RenderVertexBuffer[1].projected_vertex.transformed_y
        ;   Label: LAB_004a24a4
    JMP 0x00602dda                      ; 004a24a6
        ;   XREF to: 00602dda (UNCONDITIONAL_JUMP)  ; LAB_00602dda
    MOVSD.REP ES:EDI,ESI                ; 004a24b5 | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
        ;   Label: LAB_004a24b5
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 004a24b7
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 004a24bc
    MOV ECX,dword ptr [ESP + 0xf0]      ; 004a24bf
    INC ECX                             ; 004a24c6
    ADD EBP,0xc                         ; 004a24c7
    MOV dword ptr [ESP + 0xf0],ECX      ; 004a24ca
    CMP ECX,0x8                         ; 004a24d1
    JL 0x004a20f2                       ; 004a24d4
        ;   XREF to: 004a20f2 (CONDITIONAL_JUMP)  ; LAB_004a20f2
    ADD ESP,0x100                       ; 004a24da
    POP EBP                             ; 004a24e0
    POP EDI                             ; 004a24e1
    POP ESI                             ; 004a24e2
    POP EBX                             ; 004a24e3
    RET                                 ; 004a24e4
    TEST AL,0x1                         ; 004a24e5
        ;   Label: LAB_004a24e5
    JZ 0x004a207e                       ; 004a24e7
        ;   XREF to: 004a207e (CONDITIONAL_JUMP)  ; LAB_004a207e
    MOV EDI,dword ptr [EBX]             ; 004a24ed
    MOV dword ptr [ESP + 0xf4],EDI      ; 004a24ef
    JMP 0x004a208a                      ; 004a24f6
        ;   XREF to: 004a208a (UNCONDITIONAL_JUMP)  ; LAB_004a208a
    MOV EDI,dword ptr [EBX + 0x4]       ; 004a24fb
        ;   Label: LAB_004a24fb
    JMP 0x004a209f                      ; 004a24fe
        ;   XREF to: 004a209f (UNCONDITIONAL_JUMP)  ; LAB_004a209f
    MOV EDI,dword ptr [ESI + 0x8]       ; 004a2503
        ;   Label: LAB_004a2503
    JMP 0x004a20bc                      ; 004a2506
        ;   XREF to: 004a20bc (UNCONDITIONAL_JUMP)  ; LAB_004a20bc
    MOV ESI,0x688044                    ; 00602c18
        ;   Label: LAB_00602c18
    SUB ESP,0x30                        ; 00602c1d
    MOV ECX,0xc                         ; 00602c20
    MOV EDI,ESP                         ; 00602c25
    MOV ECX,dword ptr [ESI]             ; 00602c27
    MOV dword ptr [EDI],ECX             ; 00602c29
    MOV ECX,dword ptr [ESI + 0x4]       ; 00602c2b
    MOV dword ptr [EDI + 0x4],ECX       ; 00602c2e
    MOV ECX,dword ptr [ESI + 0x8]       ; 00602c31
    MOV dword ptr [EDI + 0x8],ECX       ; 00602c34
    MOV ECX,dword ptr [ESI + 0xc]       ; 00602c37
    MOV dword ptr [EDI + 0xc],ECX       ; 00602c3a
    MOV ECX,dword ptr [ESI + 0x10]      ; 00602c3d
    MOV dword ptr [EDI + 0x10],ECX      ; 00602c40
    MOV ECX,dword ptr [ESI + 0x14]      ; 00602c43
    MOV dword ptr [EDI + 0x14],ECX      ; 00602c46
    MOV ECX,dword ptr [ESI + 0x18]      ; 00602c49
    MOV dword ptr [EDI + 0x18],ECX      ; 00602c4c
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00602c4f
    MOV dword ptr [EDI + 0x1c],ECX      ; 00602c52
    MOV ECX,dword ptr [ESI + 0x20]      ; 00602c55
    MOV dword ptr [EDI + 0x20],ECX      ; 00602c58
    MOV ECX,dword ptr [ESI + 0x24]      ; 00602c5b
    MOV dword ptr [EDI + 0x24],ECX      ; 00602c5e
    MOV ECX,dword ptr [ESI + 0x28]      ; 00602c61
    MOV dword ptr [EDI + 0x28],ECX      ; 00602c64
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00602c67
    MOV dword ptr [EDI + 0x2c],ECX      ; 00602c6a
    JMP 0x004a222d                      ; 00602c6d
        ;   XREF to: 004a222d (UNCONDITIONAL_JUMP)  ; LAB_004a222d
    SUB ESP,0x30                        ; 00602c72
        ;   Label: LAB_00602c72
    MOV ECX,0xc                         ; 00602c75
    MOV ESI,0x688014                    ; 00602c7a
    MOV EDI,ESP                         ; 00602c7f
    MOV ECX,dword ptr [ESI]             ; 00602c81
    MOV dword ptr [EDI],ECX             ; 00602c83
    MOV ECX,dword ptr [ESI + 0x4]       ; 00602c85
    MOV dword ptr [EDI + 0x4],ECX       ; 00602c88
    MOV ECX,dword ptr [ESI + 0x8]       ; 00602c8b
    MOV dword ptr [EDI + 0x8],ECX       ; 00602c8e
    MOV ECX,dword ptr [ESI + 0xc]       ; 00602c91
    MOV dword ptr [EDI + 0xc],ECX       ; 00602c94
    MOV ECX,dword ptr [ESI + 0x10]      ; 00602c97
    MOV dword ptr [EDI + 0x10],ECX      ; 00602c9a
    MOV ECX,dword ptr [ESI + 0x14]      ; 00602c9d
    MOV dword ptr [EDI + 0x14],ECX      ; 00602ca0
    MOV ECX,dword ptr [ESI + 0x18]      ; 00602ca3
    MOV dword ptr [EDI + 0x18],ECX      ; 00602ca6
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00602ca9
    MOV dword ptr [EDI + 0x1c],ECX      ; 00602cac
    MOV ECX,dword ptr [ESI + 0x20]      ; 00602caf
    MOV dword ptr [EDI + 0x20],ECX      ; 00602cb2
    MOV ECX,dword ptr [ESI + 0x24]      ; 00602cb5
    MOV dword ptr [EDI + 0x24],ECX      ; 00602cb8
    MOV ECX,dword ptr [ESI + 0x28]      ; 00602cbb
    MOV dword ptr [EDI + 0x28],ECX      ; 00602cbe
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00602cc1
    MOV dword ptr [EDI + 0x2c],ECX      ; 00602cc4
    JMP 0x004a223e                      ; 00602cc7
        ;   XREF to: 004a223e (UNCONDITIONAL_JUMP)  ; LAB_004a223e
    MOV ESI,0x688044                    ; 00602ccc
        ;   Label: LAB_00602ccc
    SUB ESP,0x30                        ; 00602cd1
    MOV ECX,0xc                         ; 00602cd4
    MOV EDI,ESP                         ; 00602cd9
    MOV ECX,dword ptr [ESI]             ; 00602cdb
    MOV dword ptr [EDI],ECX             ; 00602cdd
    MOV ECX,dword ptr [ESI + 0x4]       ; 00602cdf
    MOV dword ptr [EDI + 0x4],ECX       ; 00602ce2
    MOV ECX,dword ptr [ESI + 0x8]       ; 00602ce5
    MOV dword ptr [EDI + 0x8],ECX       ; 00602ce8
    MOV ECX,dword ptr [ESI + 0xc]       ; 00602ceb
    MOV dword ptr [EDI + 0xc],ECX       ; 00602cee
    MOV ECX,dword ptr [ESI + 0x10]      ; 00602cf1
    MOV dword ptr [EDI + 0x10],ECX      ; 00602cf4
    MOV ECX,dword ptr [ESI + 0x14]      ; 00602cf7
    MOV dword ptr [EDI + 0x14],ECX      ; 00602cfa
    MOV ECX,dword ptr [ESI + 0x18]      ; 00602cfd
    MOV dword ptr [EDI + 0x18],ECX      ; 00602d00
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00602d03
    MOV dword ptr [EDI + 0x1c],ECX      ; 00602d06
    MOV ECX,dword ptr [ESI + 0x20]      ; 00602d09
    MOV dword ptr [EDI + 0x20],ECX      ; 00602d0c
    MOV ECX,dword ptr [ESI + 0x24]      ; 00602d0f
    MOV dword ptr [EDI + 0x24],ECX      ; 00602d12
    MOV ECX,dword ptr [ESI + 0x28]      ; 00602d15
    MOV dword ptr [EDI + 0x28],ECX      ; 00602d18
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00602d1b
    MOV dword ptr [EDI + 0x2c],ECX      ; 00602d1e
    JMP 0x004a236d                      ; 00602d21
        ;   XREF to: 004a236d (UNCONDITIONAL_JUMP)  ; LAB_004a236d
    SUB ESP,0x30                        ; 00602d26
        ;   Label: LAB_00602d26
    MOV ECX,0xc                         ; 00602d29
    MOV ESI,0x688014                    ; 00602d2e
    MOV EDI,ESP                         ; 00602d33
    MOV ECX,dword ptr [ESI]             ; 00602d35
    MOV dword ptr [EDI],ECX             ; 00602d37
    MOV ECX,dword ptr [ESI + 0x4]       ; 00602d39
    MOV dword ptr [EDI + 0x4],ECX       ; 00602d3c
    MOV ECX,dword ptr [ESI + 0x8]       ; 00602d3f
    MOV dword ptr [EDI + 0x8],ECX       ; 00602d42
    MOV ECX,dword ptr [ESI + 0xc]       ; 00602d45
    MOV dword ptr [EDI + 0xc],ECX       ; 00602d48
    MOV ECX,dword ptr [ESI + 0x10]      ; 00602d4b
    MOV dword ptr [EDI + 0x10],ECX      ; 00602d4e
    MOV ECX,dword ptr [ESI + 0x14]      ; 00602d51
    MOV dword ptr [EDI + 0x14],ECX      ; 00602d54
    MOV ECX,dword ptr [ESI + 0x18]      ; 00602d57
    MOV dword ptr [EDI + 0x18],ECX      ; 00602d5a
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00602d5d
    MOV dword ptr [EDI + 0x1c],ECX      ; 00602d60
    MOV ECX,dword ptr [ESI + 0x20]      ; 00602d63
    MOV dword ptr [EDI + 0x20],ECX      ; 00602d66
    MOV ECX,dword ptr [ESI + 0x24]      ; 00602d69
    MOV dword ptr [EDI + 0x24],ECX      ; 00602d6c
    MOV ECX,dword ptr [ESI + 0x28]      ; 00602d6f
    MOV dword ptr [EDI + 0x28],ECX      ; 00602d72
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00602d75
    MOV dword ptr [EDI + 0x2c],ECX      ; 00602d78
    JMP 0x004a237e                      ; 00602d7b
        ;   XREF to: 004a237e (UNCONDITIONAL_JUMP)  ; LAB_004a237e
    MOV ESI,0x688044                    ; 00602d80
        ;   Label: LAB_00602d80
    SUB ESP,0x30                        ; 00602d85
    MOV ECX,0xc                         ; 00602d88
    MOV EDI,ESP                         ; 00602d8d
    MOV ECX,dword ptr [ESI]             ; 00602d8f
    MOV dword ptr [EDI],ECX             ; 00602d91
    MOV ECX,dword ptr [ESI + 0x4]       ; 00602d93
    MOV dword ptr [EDI + 0x4],ECX       ; 00602d96
    MOV ECX,dword ptr [ESI + 0x8]       ; 00602d99
    MOV dword ptr [EDI + 0x8],ECX       ; 00602d9c
    MOV ECX,dword ptr [ESI + 0xc]       ; 00602d9f
    MOV dword ptr [EDI + 0xc],ECX       ; 00602da2
    MOV ECX,dword ptr [ESI + 0x10]      ; 00602da5
    MOV dword ptr [EDI + 0x10],ECX      ; 00602da8
    MOV ECX,dword ptr [ESI + 0x14]      ; 00602dab
    MOV dword ptr [EDI + 0x14],ECX      ; 00602dae
    MOV ECX,dword ptr [ESI + 0x18]      ; 00602db1
    MOV dword ptr [EDI + 0x18],ECX      ; 00602db4
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00602db7
    MOV dword ptr [EDI + 0x1c],ECX      ; 00602dba
    MOV ECX,dword ptr [ESI + 0x20]      ; 00602dbd
    MOV dword ptr [EDI + 0x20],ECX      ; 00602dc0
    MOV ECX,dword ptr [ESI + 0x24]      ; 00602dc3
    MOV dword ptr [EDI + 0x24],ECX      ; 00602dc6
    MOV ECX,dword ptr [ESI + 0x28]      ; 00602dc9
    MOV dword ptr [EDI + 0x28],ECX      ; 00602dcc
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00602dcf
    MOV dword ptr [EDI + 0x2c],ECX      ; 00602dd2
    JMP 0x004a24a4                      ; 00602dd5
        ;   XREF to: 004a24a4 (UNCONDITIONAL_JUMP)  ; LAB_004a24a4
    SUB ESP,0x30                        ; 00602dda
        ;   Label: LAB_00602dda
    MOV ECX,0xc                         ; 00602ddd
    MOV ESI,0x688014                    ; 00602de2
    MOV EDI,ESP                         ; 00602de7
    MOV ECX,dword ptr [ESI]             ; 00602de9
    MOV dword ptr [EDI],ECX             ; 00602deb
    MOV ECX,dword ptr [ESI + 0x4]       ; 00602ded
    MOV dword ptr [EDI + 0x4],ECX       ; 00602df0
    MOV ECX,dword ptr [ESI + 0x8]       ; 00602df3
    MOV dword ptr [EDI + 0x8],ECX       ; 00602df6
    MOV ECX,dword ptr [ESI + 0xc]       ; 00602df9
    MOV dword ptr [EDI + 0xc],ECX       ; 00602dfc
    MOV ECX,dword ptr [ESI + 0x10]      ; 00602dff
    MOV dword ptr [EDI + 0x10],ECX      ; 00602e02
    MOV ECX,dword ptr [ESI + 0x14]      ; 00602e05
    MOV dword ptr [EDI + 0x14],ECX      ; 00602e08
    MOV ECX,dword ptr [ESI + 0x18]      ; 00602e0b
    MOV dword ptr [EDI + 0x18],ECX      ; 00602e0e
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00602e11
    MOV dword ptr [EDI + 0x1c],ECX      ; 00602e14
    MOV ECX,dword ptr [ESI + 0x20]      ; 00602e17
    MOV dword ptr [EDI + 0x20],ECX      ; 00602e1a
    MOV ECX,dword ptr [ESI + 0x24]      ; 00602e1d
    MOV dword ptr [EDI + 0x24],ECX      ; 00602e20
    MOV ECX,dword ptr [ESI + 0x28]      ; 00602e23
    MOV dword ptr [EDI + 0x28],ECX      ; 00602e26
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00602e29
    MOV dword ptr [EDI + 0x2c],ECX      ; 00602e2c
    JMP 0x004a24b5                      ; 00602e2f
        ;   XREF to: 004a24b5 (UNCONDITIONAL_JUMP)  ; LAB_004a24b5

