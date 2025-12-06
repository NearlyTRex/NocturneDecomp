; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive * polygon_data)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_data
; Local Variables:
; undefined1       Stack[-0xa8]:1  local_a8
; undefined1       Stack[-0x78]:1  local_78
; undefined1       Stack[-0x48]:1  local_48
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
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
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0045d31c | int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045d321
    TEST EAX,EAX                        ; 0045d324
    JZ 0x0045d45c                       ; 0045d326 | LAB_0045d45c
        ;   XREF to: 0045d45c (CONDITIONAL_JUMP)
    CALL engine_3d.c_setActiveRenderColor_FUN_00404540 ; 0045d32c | void engine_3d.c_setActiveRenderColor_FUN_00404540()
        ;   XREF to: 00404540 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x8],0x0      ; 0045d331
    JMP 0x0045d340                      ; 0045d338 | LAB_0045d340
        ;   XREF to: 0045d340 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d33a
        ;   Label: LAB_0045d33a
    INC dword ptr [EBP + -0x8]          ; 0045d33d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d340
        ;   Label: LAB_0045d340
    MOV EAX,dword ptr [EAX + 0x4]       ; 0045d343
    DEC EAX                             ; 0045d346
    CMP EAX,dword ptr [EBP + -0x8]      ; 0045d347
    JLE 0x0045d3da                      ; 0045d34a | LAB_0045d3da
        ;   XREF to: 0045d3da (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + -0x8]      ; 0045d350
    SHL EDI,0x2                         ; 0045d353
    ADD EDI,dword ptr [EBP + -0x4]      ; 0045d356
    IMUL ESI,dword ptr [EDI],0x30       ; 0045d359
    MOV ECX,0xc                         ; 0045d35c
    LEA EDI,[EBP + -0x68]               ; 0045d361
    LEA ESI,[ESI + 0x688014]            ; 0045d364 | SRenderVertex[16] g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 0045d36a | SRenderVertex[16] g_RenderVertexBuffer
    MOV ESI,dword ptr [EBP + -0x8]      ; 0045d36c
    SHL ESI,0x2                         ; 0045d36f
    ADD ESI,dword ptr [EBP + -0x4]      ; 0045d372
    IMUL ESI,dword ptr [ESI + 0x4],0x30 ; 0045d375
    MOV ECX,0xc                         ; 0045d379
    LEA EDI,[EBP + -0x38]               ; 0045d37e
    LEA ESI,[ESI + 0x688014]            ; 0045d381 | SRenderVertex[16] g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 0045d387 | SRenderVertex[16] g_RenderVertexBuffer
    MOV ECX,0xc                         ; 0045d389
    LEA EDI,[EBP + 0xffffff68]          ; 0045d38e
    LEA ESI,[EBP + -0x38]               ; 0045d394
    MOVSD.REP ES:EDI,ESI                ; 0045d397
    MOV ECX,0xc                         ; 0045d399
    SUB ESP,0x30                        ; 0045d39e
    MOV EDI,ESP                         ; 0045d3a1
    LEA ESI,[EBP + 0xffffff68]          ; 0045d3a3
    MOVSD.REP ES:EDI,ESI                ; 0045d3a9
    MOV ECX,0xc                         ; 0045d3ab
    LEA EDI,[EBP + 0xffffff68]          ; 0045d3b0
    LEA ESI,[EBP + -0x68]               ; 0045d3b6
    MOVSD.REP ES:EDI,ESI                ; 0045d3b9
    MOV ECX,0xc                         ; 0045d3bb
    SUB ESP,0x30                        ; 0045d3c0
    MOV EDI,ESP                         ; 0045d3c3
    LEA ESI,[EBP + 0xffffff68]          ; 0045d3c5
    MOVSD.REP ES:EDI,ESI                ; 0045d3cb
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 0045d3cd | void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex * vertex1, SRenderVertex * vertex2)
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)
    ADD ESP,0x60                        ; 0045d3d2
    JMP 0x0045d33a                      ; 0045d3d5 | LAB_0045d33a
        ;   XREF to: 0045d33a (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x14]      ; 0045d3da
        ;   Label: LAB_0045d3da
    MOV EDI,dword ptr [EDI + 0x4]       ; 0045d3dd
    SHL EDI,0x2                         ; 0045d3e0
    ADD EDI,dword ptr [EBP + -0x4]      ; 0045d3e3
    IMUL ESI,dword ptr [EDI + -0x4],0x30 ; 0045d3e6
    MOV ECX,0xc                         ; 0045d3ea
    LEA EDI,[EBP + -0x68]               ; 0045d3ef
    LEA ESI,[ESI + 0x688014]            ; 0045d3f2 | SRenderVertex[16] g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 0045d3f8 | SRenderVertex[16] g_RenderVertexBuffer
    MOV EDI,dword ptr [EBP + -0x4]      ; 0045d3fa
    IMUL ESI,dword ptr [EDI],0x30       ; 0045d3fd
    MOV ECX,0xc                         ; 0045d400
    LEA EDI,[EBP + -0x38]               ; 0045d405
    LEA ESI,[ESI + 0x688014]            ; 0045d408 | SRenderVertex[16] g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 0045d40e | SRenderVertex[16] g_RenderVertexBuffer
    MOV ECX,0xc                         ; 0045d410
    LEA EDI,[EBP + 0xffffff68]          ; 0045d415
    LEA ESI,[EBP + -0x38]               ; 0045d41b
    MOVSD.REP ES:EDI,ESI                ; 0045d41e
    MOV ECX,0xc                         ; 0045d420
    SUB ESP,0x30                        ; 0045d425
    MOV EDI,ESP                         ; 0045d428
    LEA ESI,[EBP + 0xffffff68]          ; 0045d42a
    MOVSD.REP ES:EDI,ESI                ; 0045d430
    MOV ECX,0xc                         ; 0045d432
    LEA EDI,[EBP + 0xffffff68]          ; 0045d437
    LEA ESI,[EBP + -0x68]               ; 0045d43d
    MOVSD.REP ES:EDI,ESI                ; 0045d440
    MOV ECX,0xc                         ; 0045d442
    SUB ESP,0x30                        ; 0045d447
    MOV EDI,ESP                         ; 0045d44a
    LEA ESI,[EBP + 0xffffff68]          ; 0045d44c
    MOVSD.REP ES:EDI,ESI                ; 0045d452
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 0045d454 | void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex * vertex1, SRenderVertex * vertex2)
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)
    ADD ESP,0x60                        ; 0045d459
    MOV ESP,EBP                         ; 0045d45c
        ;   Label: LAB_0045d45c
    POP EBP                             ; 0045d45e
    POP EDI                             ; 0045d45f
    POP ESI                             ; 0045d460
    POP EBX                             ; 0045d461
    RET                                 ; 0045d462

