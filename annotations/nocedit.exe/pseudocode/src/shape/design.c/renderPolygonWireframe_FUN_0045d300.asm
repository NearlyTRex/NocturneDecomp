; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive *polygon_data)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_data
; Local Variables:
; SRenderVertex    Stack[-0xa8]:48  local_a8
; SRenderVertex    Stack[-0x78]:48  local_78
; SRenderVertex    Stack[-0x48]:48  local_48
; int              Stack[-0x18]:4  local_18
;
; XREF[1]:
;   shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0 at 0045d2db
;
; Referenced Globals:
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_3d.c_setActiveRenderColor_FUN_00404540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d300
        ;   Label: shape_design.c_renderPolygonWireframe_FUN_0045d300
    PUSH ESI                            ; 0045d301
    PUSH EDI                            ; 0045d302
    PUSH EBP                            ; 0045d303
    MOV EBP,ESP                         ; 0045d304
    SUB ESP,0x98                        ; 0045d306
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d30c
    ADD EAX,0x18                        ; 0045d30f
    MOV dword ptr [EBP + -0x4],EAX      ; 0045d312
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d315
    ADD EAX,0x8                         ; 0045d318
    PUSH EAX                            ; 0045d31b
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0045d31c
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0045d321
    TEST EAX,EAX                        ; 0045d324
    JZ 0x0045d45c                       ; 0045d326
        ;   XREF to: 0045d45c (CONDITIONAL_JUMP)  ; LAB_0045d45c
    CALL engine_3d.c_setActiveRenderColor_FUN_00404540 ; 0045d32c
        ;   XREF to: 00404540 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setActiveRenderColor_FUN_00404540()
    MOV dword ptr [EBP + -0x8],0x0      ; 0045d331
    JMP 0x0045d340                      ; 0045d338
        ;   XREF to: 0045d340 (UNCONDITIONAL_JUMP)  ; LAB_0045d340
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d33a
        ;   Label: LAB_0045d33a
    INC dword ptr [EBP + -0x8]          ; 0045d33d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d340
        ;   Label: LAB_0045d340
    MOV EAX,dword ptr [EAX + 0x4]       ; 0045d343
    DEC EAX                             ; 0045d346
    CMP EAX,dword ptr [EBP + -0x8]      ; 0045d347
    JLE 0x0045d3da                      ; 0045d34a
        ;   XREF to: 0045d3da (CONDITIONAL_JUMP)  ; LAB_0045d3da
    MOV EDI,dword ptr [EBP + -0x8]      ; 0045d350
    SHL EDI,0x2                         ; 0045d353
    ADD EDI,dword ptr [EBP + -0x4]      ; 0045d356
    IMUL ESI,dword ptr [EDI],0x30       ; 0045d359
    MOV ECX,0xc                         ; 0045d35c
    LEA EDI,[EBP + -0x68]               ; 0045d361
    LEA ESI,[ESI + 0x688014]            ; 0045d364 | g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 0045d36a | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    MOV ESI,dword ptr [EBP + -0x8]      ; 0045d36c
    SHL ESI,0x2                         ; 0045d36f
    ADD ESI,dword ptr [EBP + -0x4]      ; 0045d372
    IMUL ESI,dword ptr [ESI + 0x4],0x30 ; 0045d375
    MOV ECX,0xc                         ; 0045d379
    LEA EDI,[EBP + -0x38]               ; 0045d37e
    LEA ESI,[ESI + 0x688014]            ; 0045d381 | g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 0045d387 | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    MOV ECX,0xc                         ; 0045d389
    LEA EDI,[EBP + 0xffffff68]          ; 0045d38e
    LEA ESI,[EBP + -0x38]               ; 0045d394
    MOVSD.REP ES:EDI,ESI                ; 0045d397
    JMP 0x00603048                      ; 0045d399
        ;   XREF to: 00603048 (UNCONDITIONAL_JUMP)  ; LAB_00603048
    MOVSD.REP ES:EDI,ESI                ; 0045d3a9
        ;   Label: LAB_0045d3a9
    MOV ECX,0xc                         ; 0045d3ab
    LEA EDI,[EBP + 0xffffff68]          ; 0045d3b0
    LEA ESI,[EBP + -0x68]               ; 0045d3b6
    MOVSD.REP ES:EDI,ESI                ; 0045d3b9
    JMP 0x006030a3                      ; 0045d3bb
        ;   XREF to: 006030a3 (UNCONDITIONAL_JUMP)  ; LAB_006030a3
    MOVSD.REP ES:EDI,ESI                ; 0045d3cb
        ;   Label: LAB_0045d3cb
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 0045d3cd
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0045d3d2
    JMP 0x0045d33a                      ; 0045d3d5
        ;   XREF to: 0045d33a (UNCONDITIONAL_JUMP)  ; LAB_0045d33a
    MOV EDI,dword ptr [EBP + 0x14]      ; 0045d3da
        ;   Label: LAB_0045d3da
    MOV EDI,dword ptr [EDI + 0x4]       ; 0045d3dd
    SHL EDI,0x2                         ; 0045d3e0
    ADD EDI,dword ptr [EBP + -0x4]      ; 0045d3e3
    IMUL ESI,dword ptr [EDI + -0x4],0x30 ; 0045d3e6
    MOV ECX,0xc                         ; 0045d3ea
    LEA EDI,[EBP + -0x68]               ; 0045d3ef
    LEA ESI,[ESI + 0x688014]            ; 0045d3f2 | g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 0045d3f8 | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    MOV EDI,dword ptr [EBP + -0x4]      ; 0045d3fa
    IMUL ESI,dword ptr [EDI],0x30       ; 0045d3fd
    MOV ECX,0xc                         ; 0045d400
    LEA EDI,[EBP + -0x38]               ; 0045d405
    LEA ESI,[ESI + 0x688014]            ; 0045d408 | g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 0045d40e | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    MOV ECX,0xc                         ; 0045d410
    LEA EDI,[EBP + 0xffffff68]          ; 0045d415
    LEA ESI,[EBP + -0x38]               ; 0045d41b
    MOVSD.REP ES:EDI,ESI                ; 0045d41e
    JMP 0x006030fe                      ; 0045d420
        ;   XREF to: 006030fe (UNCONDITIONAL_JUMP)  ; LAB_006030fe
    MOVSD.REP ES:EDI,ESI                ; 0045d430
        ;   Label: LAB_0045d430
    MOV ECX,0xc                         ; 0045d432
    LEA EDI,[EBP + 0xffffff68]          ; 0045d437
    LEA ESI,[EBP + -0x68]               ; 0045d43d
    MOVSD.REP ES:EDI,ESI                ; 0045d440
    JMP 0x00603159                      ; 0045d442
        ;   XREF to: 00603159 (UNCONDITIONAL_JUMP)  ; LAB_00603159
    MOVSD.REP ES:EDI,ESI                ; 0045d452
        ;   Label: LAB_0045d452
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 0045d454
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0045d459
    MOV ESP,EBP                         ; 0045d45c
        ;   Label: LAB_0045d45c
    POP EBP                             ; 0045d45e
    POP EDI                             ; 0045d45f
    POP ESI                             ; 0045d460
    POP EBX                             ; 0045d461
    RET                                 ; 0045d462
    MOV ECX,0xc                         ; 00603048
        ;   Label: LAB_00603048
    SUB ESP,0x30                        ; 0060304d
    MOV EDI,ESP                         ; 00603050
    LEA ESI,[EBP + 0xffffff68]          ; 00603052
    MOV ECX,dword ptr [ESI]             ; 00603058
    MOV dword ptr [EDI],ECX             ; 0060305a
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060305c
    MOV dword ptr [EDI + 0x4],ECX       ; 0060305f
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603062
    MOV dword ptr [EDI + 0x8],ECX       ; 00603065
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603068
    MOV dword ptr [EDI + 0xc],ECX       ; 0060306b
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060306e
    MOV dword ptr [EDI + 0x10],ECX      ; 00603071
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603074
    MOV dword ptr [EDI + 0x14],ECX      ; 00603077
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060307a
    MOV dword ptr [EDI + 0x18],ECX      ; 0060307d
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603080
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603083
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603086
    MOV dword ptr [EDI + 0x20],ECX      ; 00603089
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060308c
    MOV dword ptr [EDI + 0x24],ECX      ; 0060308f
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603092
    MOV dword ptr [EDI + 0x28],ECX      ; 00603095
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603098
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060309b
    JMP 0x0045d3a9                      ; 0060309e
        ;   XREF to: 0045d3a9 (UNCONDITIONAL_JUMP)  ; LAB_0045d3a9
    MOV ECX,0xc                         ; 006030a3
        ;   Label: LAB_006030a3
    SUB ESP,0x30                        ; 006030a8
    MOV EDI,ESP                         ; 006030ab
    LEA ESI,[EBP + 0xffffff68]          ; 006030ad
    MOV ECX,dword ptr [ESI]             ; 006030b3
    MOV dword ptr [EDI],ECX             ; 006030b5
    MOV ECX,dword ptr [ESI + 0x4]       ; 006030b7
    MOV dword ptr [EDI + 0x4],ECX       ; 006030ba
    MOV ECX,dword ptr [ESI + 0x8]       ; 006030bd
    MOV dword ptr [EDI + 0x8],ECX       ; 006030c0
    MOV ECX,dword ptr [ESI + 0xc]       ; 006030c3
    MOV dword ptr [EDI + 0xc],ECX       ; 006030c6
    MOV ECX,dword ptr [ESI + 0x10]      ; 006030c9
    MOV dword ptr [EDI + 0x10],ECX      ; 006030cc
    MOV ECX,dword ptr [ESI + 0x14]      ; 006030cf
    MOV dword ptr [EDI + 0x14],ECX      ; 006030d2
    MOV ECX,dword ptr [ESI + 0x18]      ; 006030d5
    MOV dword ptr [EDI + 0x18],ECX      ; 006030d8
    MOV ECX,dword ptr [ESI + 0x1c]      ; 006030db
    MOV dword ptr [EDI + 0x1c],ECX      ; 006030de
    MOV ECX,dword ptr [ESI + 0x20]      ; 006030e1
    MOV dword ptr [EDI + 0x20],ECX      ; 006030e4
    MOV ECX,dword ptr [ESI + 0x24]      ; 006030e7
    MOV dword ptr [EDI + 0x24],ECX      ; 006030ea
    MOV ECX,dword ptr [ESI + 0x28]      ; 006030ed
    MOV dword ptr [EDI + 0x28],ECX      ; 006030f0
    MOV ECX,dword ptr [ESI + 0x2c]      ; 006030f3
    MOV dword ptr [EDI + 0x2c],ECX      ; 006030f6
    JMP 0x0045d3cb                      ; 006030f9
        ;   XREF to: 0045d3cb (UNCONDITIONAL_JUMP)  ; LAB_0045d3cb
    MOV ECX,0xc                         ; 006030fe
        ;   Label: LAB_006030fe
    SUB ESP,0x30                        ; 00603103
    MOV EDI,ESP                         ; 00603106
    LEA ESI,[EBP + 0xffffff68]          ; 00603108
    MOV ECX,dword ptr [ESI]             ; 0060310e
    MOV dword ptr [EDI],ECX             ; 00603110
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603112
    MOV dword ptr [EDI + 0x4],ECX       ; 00603115
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603118
    MOV dword ptr [EDI + 0x8],ECX       ; 0060311b
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060311e
    MOV dword ptr [EDI + 0xc],ECX       ; 00603121
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603124
    MOV dword ptr [EDI + 0x10],ECX      ; 00603127
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060312a
    MOV dword ptr [EDI + 0x14],ECX      ; 0060312d
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603130
    MOV dword ptr [EDI + 0x18],ECX      ; 00603133
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603136
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603139
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060313c
    MOV dword ptr [EDI + 0x20],ECX      ; 0060313f
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603142
    MOV dword ptr [EDI + 0x24],ECX      ; 00603145
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603148
    MOV dword ptr [EDI + 0x28],ECX      ; 0060314b
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060314e
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603151
    JMP 0x0045d430                      ; 00603154
        ;   XREF to: 0045d430 (UNCONDITIONAL_JUMP)  ; LAB_0045d430
    MOV ECX,0xc                         ; 00603159
        ;   Label: LAB_00603159
    SUB ESP,0x30                        ; 0060315e
    MOV EDI,ESP                         ; 00603161
    LEA ESI,[EBP + 0xffffff68]          ; 00603163
    MOV ECX,dword ptr [ESI]             ; 00603169
    MOV dword ptr [EDI],ECX             ; 0060316b
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060316d
    MOV dword ptr [EDI + 0x4],ECX       ; 00603170
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603173
    MOV dword ptr [EDI + 0x8],ECX       ; 00603176
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603179
    MOV dword ptr [EDI + 0xc],ECX       ; 0060317c
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060317f
    MOV dword ptr [EDI + 0x10],ECX      ; 00603182
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603185
    MOV dword ptr [EDI + 0x14],ECX      ; 00603188
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060318b
    MOV dword ptr [EDI + 0x18],ECX      ; 0060318e
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603191
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603194
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603197
    MOV dword ptr [EDI + 0x20],ECX      ; 0060319a
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060319d
    MOV dword ptr [EDI + 0x24],ECX      ; 006031a0
    MOV ECX,dword ptr [ESI + 0x28]      ; 006031a3
    MOV dword ptr [EDI + 0x28],ECX      ; 006031a6
    MOV ECX,dword ptr [ESI + 0x2c]      ; 006031a9
    MOV dword ptr [EDI + 0x2c],ECX      ; 006031ac
    JMP 0x0045d452                      ; 006031af
        ;   XREF to: 0045d452 (UNCONDITIONAL_JUMP)  ; LAB_0045d452

