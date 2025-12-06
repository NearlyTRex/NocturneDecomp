; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_3d.c_drawLineStrip3D_FUN_00404600(SLineStrip * line_strip)
;
; Parameters:
; SLineStrip *     Stack[0x4]:4   line_strip
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x40]:1  local_40
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
    CALL engine_3d.c_setActiveRenderColor_FUN_00404540 ; 00404607 | void engine_3d.c_setActiveRenderColor_FUN_00404540()
        ;   XREF to: 00404540 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [ESP + 0x74]      ; 0040460c
    XOR EBP,EBP                         ; 00404610
    ADD EBX,0x8                         ; 00404612
    MOV EAX,dword ptr [ESP + 0x74]      ; 00404615
        ;   Label: LAB_00404615
    MOV ESI,dword ptr [EAX + 0x4]       ; 00404619
    DEC ESI                             ; 0040461c
    CMP EBP,ESI                         ; 0040461d
    JL 0x00404638                       ; 0040461f | LAB_00404638
        ;   XREF to: 00404638 (CONDITIONAL_JUMP)
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
    LEA ESI,[ESI + 0x688014]            ; 00404644 | SRenderVertex[16] g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 0040464a | SRenderVertex[16] g_RenderVertexBuffer
    IMUL ESI,dword ptr [EBX + 0x4],0x30 ; 0040464c
    MOV EDI,ESP                         ; 00404650
    MOV ECX,0xc                         ; 00404652
    LEA ESI,[ESI + 0x688014]            ; 00404657 | SRenderVertex[16] g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 0040465d | SRenderVertex[16] g_RenderVertexBuffer
    MOV ECX,0xc                         ; 0040465f
    SUB ESP,0x30                        ; 00404664
    LEA ESI,[ESP + 0x30]                ; 00404667
    MOV EDI,ESP                         ; 0040466b
    MOVSD.REP ES:EDI,ESI                ; 0040466d
    MOV ECX,0xc                         ; 0040466f
    SUB ESP,0x30                        ; 00404674
    LEA ESI,[ESP + 0x90]                ; 00404677
    MOV EDI,ESP                         ; 0040467e
    ADD EBX,0x4                         ; 00404680
    INC EBP                             ; 00404683
    MOVSD.REP ES:EDI,ESI                ; 00404684
    CALL engine_3d.c_clipAndDrawLine3D_FUN_00408070 ; 00404686 | void engine_3d.c_clipAndDrawLine3D_FUN_00408070(SRenderVertex * vertex1, SRenderVertex * vertex2)
        ;   XREF to: 00408070 (UNCONDITIONAL_CALL)
    ADD ESP,0x60                        ; 0040468b
    JMP 0x00404615                      ; 0040468e | LAB_00404615
        ;   XREF to: 00404615 (UNCONDITIONAL_JUMP)

