; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_drawLineStrip3D_FUN_00404600(SLineStrip *line_strip)
;
; Parameters:
; SLineStrip *     Stack[0x4]:4   line_strip
; Local Variables:
; SRenderVertex    Stack[-0x70]:48  local_70
; SRenderVertex    Stack[-0x40]:48  local_40
;
; Referenced Globals:
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine3D_FUN_00408070
;   engine_3d.c_setActiveRenderColor_FUN_00404540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404600
        ;   Label: engine_3d.c_drawLineStrip3D_FUN_00404600
    PUSH ESI                            ; 00404601
    PUSH EDI                            ; 00404602
    PUSH EBP                            ; 00404603
    SUB ESP,0x60                        ; 00404604
    CALL engine_3d.c_setActiveRenderColor_FUN_00404540 ; 00404607
        ;   XREF to: 00404540 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setActiveRenderColor_FUN_00404540()
    MOV EBX,dword ptr [ESP + 0x74]      ; 0040460c
    XOR EBP,EBP                         ; 00404610
    ADD EBX,0x8                         ; 00404612
    MOV EAX,dword ptr [ESP + 0x74]      ; 00404615
        ;   Label: LAB_00404615
    MOV ESI,dword ptr [EAX + 0x4]       ; 00404619
    DEC ESI                             ; 0040461c
    CMP EBP,ESI                         ; 0040461d
    JL 0x00404638                       ; 0040461f
        ;   XREF to: 00404638 (CONDITIONAL_JUMP)  ; LAB_00404638
    MOV EBX,dword ptr [ESP + 0x74]      ; 00404621
    MOV EAX,dword ptr [EAX + 0x4]       ; 00404625
    ADD EBX,0x8                         ; 00404628
    SHL EAX,0x2                         ; 0040462b
    ADD EAX,EBX                         ; 0040462e
    ADD ESP,0x60                        ; 00404630
    POP EBP                             ; 00404633
    POP EDI                             ; 00404634
    POP ESI                             ; 00404635
    POP EBX                             ; 00404636
    RET                                 ; 00404637
    IMUL ESI,dword ptr [EBX],0x30       ; 00404638
        ;   Label: LAB_00404638
    MOV ECX,0xc                         ; 0040463b
    LEA EDI,[ESP + 0x30]                ; 00404640
    LEA ESI,[ESI + 0x688014]            ; 00404644 | g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 0040464a | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    IMUL ESI,dword ptr [EBX + 0x4],0x30 ; 0040464c
    MOV EDI,ESP                         ; 00404650
    MOV ECX,0xc                         ; 00404652
    LEA ESI,[ESI + 0x688014]            ; 00404657 | g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 0040465d | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    JMP 0x00599474                      ; 0040465f
        ;   XREF to: 00599474 (UNCONDITIONAL_JUMP)  ; CAVE_cave_00415045
    MOVSD.REP ES:EDI,ESI                ; 0040466d
        ;   Label: LAB_0040466d
    JMP 0x005994cd                      ; 0040466f
        ;   XREF to: 005994cd (UNCONDITIONAL_JUMP)  ; LAB_005994cd
    MOVSD.REP ES:EDI,ESI                ; 00404684
        ;   Label: LAB_00404684
    CALL engine_3d.c_clipAndDrawLine3D_FUN_00408070 ; 00404686
        ;   XREF to: 00408070 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine3D_FUN_00408070(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0040468b
    JMP 0x00404615                      ; 0040468e
        ;   XREF to: 00404615 (UNCONDITIONAL_JUMP)  ; LAB_00404615
    MOV ECX,0xc                         ; 00599474
        ;   Label: CAVE_cave_00415045
    SUB ESP,0x30                        ; 00599479
    LEA ESI,[ESP + 0x30]                ; 0059947c
    MOV EDI,ESP                         ; 00599480
    MOV ECX,dword ptr [ESI]             ; 00599482
    MOV dword ptr [EDI],ECX             ; 00599484
    MOV ECX,dword ptr [ESI + 0x4]       ; 00599486
    MOV dword ptr [EDI + 0x4],ECX       ; 00599489
    MOV ECX,dword ptr [ESI + 0x8]       ; 0059948c
    MOV dword ptr [EDI + 0x8],ECX       ; 0059948f
    MOV ECX,dword ptr [ESI + 0xc]       ; 00599492
    MOV dword ptr [EDI + 0xc],ECX       ; 00599495
    MOV ECX,dword ptr [ESI + 0x10]      ; 00599498
    MOV dword ptr [EDI + 0x10],ECX      ; 0059949b
    MOV ECX,dword ptr [ESI + 0x14]      ; 0059949e
    MOV dword ptr [EDI + 0x14],ECX      ; 005994a1
    MOV ECX,dword ptr [ESI + 0x18]      ; 005994a4
    MOV dword ptr [EDI + 0x18],ECX      ; 005994a7
    MOV ECX,dword ptr [ESI + 0x1c]      ; 005994aa
    MOV dword ptr [EDI + 0x1c],ECX      ; 005994ad
    MOV ECX,dword ptr [ESI + 0x20]      ; 005994b0
    MOV dword ptr [EDI + 0x20],ECX      ; 005994b3
    MOV ECX,dword ptr [ESI + 0x24]      ; 005994b6
    MOV dword ptr [EDI + 0x24],ECX      ; 005994b9
    MOV ECX,dword ptr [ESI + 0x28]      ; 005994bc
    MOV dword ptr [EDI + 0x28],ECX      ; 005994bf
    MOV ECX,dword ptr [ESI + 0x2c]      ; 005994c2
    MOV dword ptr [EDI + 0x2c],ECX      ; 005994c5
    JMP 0x0040466d                      ; 005994c8
        ;   XREF to: 0040466d (UNCONDITIONAL_JUMP)  ; LAB_0040466d
    MOV ECX,0xc                         ; 005994cd
        ;   Label: LAB_005994cd
    SUB ESP,0x30                        ; 005994d2
    LEA ESI,[ESP + 0x90]                ; 005994d5
    MOV EDI,ESP                         ; 005994dc
    ADD EBX,0x4                         ; 005994de
    INC EBP                             ; 005994e1
    MOV ECX,dword ptr [ESI]             ; 005994e2
    MOV dword ptr [EDI],ECX             ; 005994e4
    MOV ECX,dword ptr [ESI + 0x4]       ; 005994e6
    MOV dword ptr [EDI + 0x4],ECX       ; 005994e9
    MOV ECX,dword ptr [ESI + 0x8]       ; 005994ec
    MOV dword ptr [EDI + 0x8],ECX       ; 005994ef
    MOV ECX,dword ptr [ESI + 0xc]       ; 005994f2
    MOV dword ptr [EDI + 0xc],ECX       ; 005994f5
    MOV ECX,dword ptr [ESI + 0x10]      ; 005994f8
    MOV dword ptr [EDI + 0x10],ECX      ; 005994fb
    MOV ECX,dword ptr [ESI + 0x14]      ; 005994fe
    MOV dword ptr [EDI + 0x14],ECX      ; 00599501
    MOV ECX,dword ptr [ESI + 0x18]      ; 00599504
    MOV dword ptr [EDI + 0x18],ECX      ; 00599507
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0059950a
    MOV dword ptr [EDI + 0x1c],ECX      ; 0059950d
    MOV ECX,dword ptr [ESI + 0x20]      ; 00599510
    MOV dword ptr [EDI + 0x20],ECX      ; 00599513
    MOV ECX,dword ptr [ESI + 0x24]      ; 00599516
    MOV dword ptr [EDI + 0x24],ECX      ; 00599519
    MOV ECX,dword ptr [ESI + 0x28]      ; 0059951c
    MOV dword ptr [EDI + 0x28],ECX      ; 0059951f
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00599522
    MOV dword ptr [EDI + 0x2c],ECX      ; 00599525
    JMP 0x00404684                      ; 00599528
        ;   XREF to: 00404684 (UNCONDITIONAL_JUMP)  ; LAB_00404684

