; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_renderPolygonWireframeAntialiased_FUN_0045d470(SMRGLHeaderPrimitive *polygon_data,int line_color)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_data
; int              Stack[0x8]:4   line_color
; Local Variables:
; int              Stack[-0x18]:4  local_18
;
; XREF[1]:
;   shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0 at 0045d2ed
;
; Referenced Globals:
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
;   int[12] g_AALineVertex1
;   undefined4 g_AALineVertex1[1]
;   undefined4 g_AALineVertex1[4]
;   undefined4 g_AALineVertex1[4]+3
;   undefined4 g_AALineVertex1[5]
;   int[12] g_AALineVertex2
;   undefined4 g_AALineVertex2[1]
;   undefined4 g_AALineVertex2[4]
;   undefined4 g_AALineVertex2[4]+3
;   undefined4 g_AALineVertex2[5]
;
; Called Functions:
;   cockpit_ckptutil.c_drawLineAA_FUN_00433c90
;   engine_3d.c_isVisiblePlane_FUN_00403950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d470
        ;   Label: shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470
    PUSH ESI                            ; 0045d471
    PUSH EDI                            ; 0045d472
    PUSH EBP                            ; 0045d473
    MOV EBP,ESP                         ; 0045d474
    SUB ESP,0x8                         ; 0045d476
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d47c
    ADD EAX,0x18                        ; 0045d47f
    MOV dword ptr [EBP + -0x4],EAX      ; 0045d482
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d485
    ADD EAX,0x8                         ; 0045d488
    PUSH EAX                            ; 0045d48b
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0045d48c
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0045d491
    TEST EAX,EAX                        ; 0045d494
    JZ 0x0045d5c1                       ; 0045d496
        ;   XREF to: 0045d5c1 (CONDITIONAL_JUMP)  ; LAB_0045d5c1
    MOV dword ptr [EBP + -0x8],0x0      ; 0045d49c
    JMP 0x0045d4ab                      ; 0045d4a3
        ;   XREF to: 0045d4ab (UNCONDITIONAL_JUMP)  ; LAB_0045d4ab
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d4a5
        ;   Label: LAB_0045d4a5
    INC dword ptr [EBP + -0x8]          ; 0045d4a8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d4ab
        ;   Label: LAB_0045d4ab
    MOV EAX,dword ptr [EAX + 0x4]       ; 0045d4ae
    DEC EAX                             ; 0045d4b1
    CMP EAX,dword ptr [EBP + -0x8]      ; 0045d4b2
    JLE 0x0045d543                      ; 0045d4b5
        ;   XREF to: 0045d543 (CONDITIONAL_JUMP)  ; LAB_0045d543
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d4bb
    SHL EAX,0x2                         ; 0045d4be
    ADD EAX,dword ptr [EBP + -0x4]      ; 0045d4c1
    IMUL ESI,dword ptr [EAX],0x30       ; 0045d4c4
    MOV ECX,0xc                         ; 0045d4c7
    MOV EDI,0x69ffb4                    ; 0045d4cc | g_AALineVertex1
    LEA ESI,[ESI + 0x688014]            ; 0045d4d1 | g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 0045d4d7 | g_AALineVertex1 | g_AALineVertex1[1] | g_RenderVertexBuffer
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d4d9
    SHL EAX,0x2                         ; 0045d4dc
    ADD EAX,dword ptr [EBP + -0x4]      ; 0045d4df
    IMUL ESI,dword ptr [EAX + 0x4],0x30 ; 0045d4e2
    MOV ECX,0xc                         ; 0045d4e6
    MOV EDI,0x69ffe4                    ; 0045d4eb | g_AALineVertex2
    LEA ESI,[ESI + 0x688014]            ; 0045d4f0 | g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 0045d4f6 | g_AALineVertex2 | g_AALineVertex2[1] | g_RenderVertexBuffer
    TEST byte ptr [0x0069ffc7],0x80     ; 0045d4f8 | g_AALineVertex1[4]+3
    JZ 0x0045d503                       ; 0045d4ff
        ;   XREF to: 0045d503 (CONDITIONAL_JUMP)  ; LAB_0045d503
    JMP 0x0045d53e                      ; 0045d501
        ;   XREF to: 0045d53e (UNCONDITIONAL_JUMP)  ; LAB_0045d53e
    TEST byte ptr [0x0069fff7],0x80     ; 0045d503 | g_AALineVertex2[4]+3
        ;   Label: LAB_0045d503
    JZ 0x0045d50e                       ; 0045d50a
        ;   XREF to: 0045d50e (CONDITIONAL_JUMP)  ; LAB_0045d50e
    JMP 0x0045d53e                      ; 0045d50c
        ;   XREF to: 0045d53e (UNCONDITIONAL_JUMP)  ; LAB_0045d53e
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045d50e
        ;   Label: LAB_0045d50e
    PUSH EAX                            ; 0045d511
    MOV EAX,[0x0069fff8]                ; 0045d512 | g_AALineVertex2[5]
    SAR EAX,0x10                        ; 0045d517
    PUSH EAX                            ; 0045d51a
    MOV EAX,[0x0069fff4]                ; 0045d51b | g_AALineVertex2[4]
    SAR EAX,0x10                        ; 0045d520
    PUSH EAX                            ; 0045d523
    MOV EAX,[0x0069ffc8]                ; 0045d524 | g_AALineVertex1[5]
    SAR EAX,0x10                        ; 0045d529
    PUSH EAX                            ; 0045d52c
    MOV EAX,[0x0069ffc4]                ; 0045d52d | g_AALineVertex1[4]
    SAR EAX,0x10                        ; 0045d532
    PUSH EAX                            ; 0045d535
    CALL cockpit_ckptutil.c_drawLineAA_FUN_00433c90 ; 0045d536
        ;   XREF to: 00433c90 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_drawLineAA_FUN_00433c90(int x0, int y0, int x1, int y1, ...)
    ADD ESP,0x14                        ; 0045d53b
    JMP 0x0045d4a5                      ; 0045d53e
        ;   XREF to: 0045d4a5 (UNCONDITIONAL_JUMP)  ; LAB_0045d4a5
        ;   Label: LAB_0045d53e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d543
        ;   Label: LAB_0045d543
    MOV EAX,dword ptr [EAX + 0x4]       ; 0045d546
    SHL EAX,0x2                         ; 0045d549
    ADD EAX,dword ptr [EBP + -0x4]      ; 0045d54c
    IMUL ESI,dword ptr [EAX + -0x4],0x30 ; 0045d54f
    MOV ECX,0xc                         ; 0045d553
    MOV EDI,0x69ffb4                    ; 0045d558 | g_AALineVertex1
    LEA ESI,[ESI + 0x688014]            ; 0045d55d | g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 0045d563 | g_AALineVertex1 | g_AALineVertex1[1] | g_RenderVertexBuffer
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045d565
    IMUL ESI,dword ptr [EAX],0x30       ; 0045d568
    MOV ECX,0xc                         ; 0045d56b
    MOV EDI,0x69ffe4                    ; 0045d570 | g_AALineVertex2
    LEA ESI,[ESI + 0x688014]            ; 0045d575 | g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 0045d57b | g_AALineVertex2 | g_AALineVertex2[1] | g_RenderVertexBuffer
    TEST byte ptr [0x0069ffc7],0x80     ; 0045d57d | g_AALineVertex1[4]+3
    JNZ 0x0045d58f                      ; 0045d584
        ;   XREF to: 0045d58f (CONDITIONAL_JUMP)  ; LAB_0045d58f
    TEST byte ptr [0x0069fff7],0x80     ; 0045d586 | g_AALineVertex2[4]+3
    JZ 0x0045d591                       ; 0045d58d
        ;   XREF to: 0045d591 (CONDITIONAL_JUMP)  ; LAB_0045d591
    JMP 0x0045d5c1                      ; 0045d58f
        ;   XREF to: 0045d5c1 (UNCONDITIONAL_JUMP)  ; LAB_0045d5c1
        ;   Label: LAB_0045d58f
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045d591
        ;   Label: LAB_0045d591
    PUSH EAX                            ; 0045d594
    MOV EAX,[0x0069fff8]                ; 0045d595 | g_AALineVertex2[5]
    SAR EAX,0x10                        ; 0045d59a
    PUSH EAX                            ; 0045d59d
    MOV EAX,[0x0069fff4]                ; 0045d59e | g_AALineVertex2[4]
    SAR EAX,0x10                        ; 0045d5a3
    PUSH EAX                            ; 0045d5a6
    MOV EAX,[0x0069ffc8]                ; 0045d5a7 | g_AALineVertex1[5]
    SAR EAX,0x10                        ; 0045d5ac
    PUSH EAX                            ; 0045d5af
    MOV EAX,[0x0069ffc4]                ; 0045d5b0 | g_AALineVertex1[4]
    SAR EAX,0x10                        ; 0045d5b5
    PUSH EAX                            ; 0045d5b8
    CALL cockpit_ckptutil.c_drawLineAA_FUN_00433c90 ; 0045d5b9
        ;   XREF to: 00433c90 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_drawLineAA_FUN_00433c90(int x0, int y0, int x1, int y1, ...)
    ADD ESP,0x14                        ; 0045d5be
    MOV ESP,EBP                         ; 0045d5c1
        ;   Label: LAB_0045d5c1
    POP EBP                             ; 0045d5c3
    POP EDI                             ; 0045d5c4
    POP ESI                             ; 0045d5c5
    POP EBX                             ; 0045d5c6
    RET                                 ; 0045d5c7

