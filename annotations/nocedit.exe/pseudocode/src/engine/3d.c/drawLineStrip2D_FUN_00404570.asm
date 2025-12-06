; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_drawLineStrip2D_FUN_00404570(SLineStrip * line_strip)
;
; Parameters:
; SLineStrip *     Stack[0x4]:4   line_strip
; Local Variables:
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0x40]:1  local_40
;
; XREF[1]:
;   core_course.cpp_FUN_00443760 at 00443ac5
;
; Referenced Globals:
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;   engine_3d.c_setActiveRenderColor_FUN_00404540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404570
        ;   Label: engine_3d.c_drawLineStrip2D_FUN_00404570
    PUSH ESI                            ; 00404571
    PUSH EDI                            ; 00404572
    PUSH EBP                            ; 00404573
    SUB ESP,0x60                        ; 00404574
    CALL engine_3d.c_setActiveRenderColor_FUN_00404540 ; 00404577 | void engine_3d.c_setActiveRenderColor_FUN_00404540()
        ;   XREF to: 00404540 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [ESP + 0x74]      ; 0040457c
    XOR EBP,EBP                         ; 00404580
    ADD EBX,0x8                         ; 00404582
    MOV EAX,dword ptr [ESP + 0x74]      ; 00404585
        ;   Label: LAB_00404585
    MOV ESI,dword ptr [EAX + 0x4]       ; 00404589
    DEC ESI                             ; 0040458c
    CMP EBP,ESI                         ; 0040458d
    JL 0x004045a8                       ; 0040458f | LAB_004045a8
        ;   XREF to: 004045a8 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x74]      ; 00404591
    MOV EAX,dword ptr [EAX + 0x4]       ; 00404595
    ADD EBX,0x8                         ; 00404598
    SHL EAX,0x2                         ; 0040459b
    ADD EAX,EBX                         ; 0040459e
    ADD ESP,0x60                        ; 004045a0
    POP EBP                             ; 004045a3
    POP EDI                             ; 004045a4
    POP ESI                             ; 004045a5
    POP EBX                             ; 004045a6
    RET                                 ; 004045a7
    IMUL ESI,dword ptr [EBX],0x30       ; 004045a8
        ;   Label: LAB_004045a8
    MOV ECX,0xc                         ; 004045ab
    LEA EDI,[ESP + 0x30]                ; 004045b0
    LEA ESI,[ESI + 0x688014]            ; 004045b4 | SRenderVertex[16] g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 004045ba | SRenderVertex[16] g_RenderVertexBuffer
    IMUL ESI,dword ptr [EBX + 0x4],0x30 ; 004045bc
    MOV EDI,ESP                         ; 004045c0
    MOV ECX,0xc                         ; 004045c2
    LEA ESI,[ESI + 0x688014]            ; 004045c7 | SRenderVertex[16] g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 004045cd | SRenderVertex[16] g_RenderVertexBuffer
    MOV ECX,0xc                         ; 004045cf
    SUB ESP,0x30                        ; 004045d4
    LEA ESI,[ESP + 0x30]                ; 004045d7
    MOV EDI,ESP                         ; 004045db
    MOVSD.REP ES:EDI,ESI                ; 004045dd
    MOV ECX,0xc                         ; 004045df
    SUB ESP,0x30                        ; 004045e4
    LEA ESI,[ESP + 0x90]                ; 004045e7
    MOV EDI,ESP                         ; 004045ee
    ADD EBX,0x4                         ; 004045f0
    INC EBP                             ; 004045f3
    MOVSD.REP ES:EDI,ESI                ; 004045f4
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 004045f6 | void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex * vertex1, SRenderVertex * vertex2)
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)
    ADD ESP,0x60                        ; 004045fb
    JMP 0x00404585                      ; 004045fe | LAB_00404585
        ;   XREF to: 00404585 (UNCONDITIONAL_JUMP)

