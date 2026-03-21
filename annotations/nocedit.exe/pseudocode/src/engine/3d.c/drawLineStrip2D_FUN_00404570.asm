; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip2D_FUN_00404570(SLineStrip *line_strip)
;
; Parameters:
; SLineStrip *     Stack[0x4]:4   line_strip
; Local Variables:
; SRenderVertex    Stack[-0x70]:48  local_70
; SRenderVertex    Stack[-0x40]:48  local_40
;
; XREF[1]:
;   core_course.cpp_renderCourseGizmo_FUN_00443760 at 00443ac5
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
    CALL engine_3d.c_setActiveRenderColor_FUN_00404540 ; 00404577
        ;   XREF to: 00404540 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setActiveRenderColor_FUN_00404540()
    MOV EBX,dword ptr [ESP + 0x74]      ; 0040457c
    XOR EBP,EBP                         ; 00404580
    ADD EBX,0x8                         ; 00404582
    MOV EAX,dword ptr [ESP + 0x74]      ; 00404585
        ;   Label: LAB_00404585
    MOV ESI,dword ptr [EAX + 0x4]       ; 00404589
    DEC ESI                             ; 0040458c
    CMP EBP,ESI                         ; 0040458d
    JL 0x004045a8                       ; 0040458f
        ;   XREF to: 004045a8 (CONDITIONAL_JUMP)  ; LAB_004045a8
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
    LEA ESI,[ESI + 0x688014]            ; 004045b4 | g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 004045ba | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    IMUL ESI,dword ptr [EBX + 0x4],0x30 ; 004045bc
    MOV EDI,ESP                         ; 004045c0
    MOV ECX,0xc                         ; 004045c2
    LEA ESI,[ESI + 0x688014]            ; 004045c7 | g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 004045cd | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    JMP 0x0060e072                      ; 004045cf
        ;   XREF to: 0060e072 (UNCONDITIONAL_JUMP)  ; LAB_0060e072
    MOVSD.REP ES:EDI,ESI                ; 004045dd
        ;   Label: LAB_004045dd
    JMP 0x0060e0cb                      ; 004045df
        ;   XREF to: 0060e0cb (UNCONDITIONAL_JUMP)  ; LAB_0060e0cb
    MOVSD.REP ES:EDI,ESI                ; 004045f4
        ;   Label: LAB_004045f4
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 004045f6
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 004045fb
    JMP 0x00404585                      ; 004045fe
        ;   XREF to: 00404585 (UNCONDITIONAL_JUMP)  ; LAB_00404585
    MOV ECX,0xc                         ; 0060e072
        ;   Label: LAB_0060e072
    SUB ESP,0x30                        ; 0060e077
    LEA ESI,[ESP + 0x30]                ; 0060e07a
    MOV EDI,ESP                         ; 0060e07e
    MOV ECX,dword ptr [ESI]             ; 0060e080
    MOV dword ptr [EDI],ECX             ; 0060e082
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060e084
    MOV dword ptr [EDI + 0x4],ECX       ; 0060e087
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060e08a
    MOV dword ptr [EDI + 0x8],ECX       ; 0060e08d
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060e090
    MOV dword ptr [EDI + 0xc],ECX       ; 0060e093
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060e096
    MOV dword ptr [EDI + 0x10],ECX      ; 0060e099
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060e09c
    MOV dword ptr [EDI + 0x14],ECX      ; 0060e09f
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060e0a2
    MOV dword ptr [EDI + 0x18],ECX      ; 0060e0a5
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060e0a8
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060e0ab
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060e0ae
    MOV dword ptr [EDI + 0x20],ECX      ; 0060e0b1
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060e0b4
    MOV dword ptr [EDI + 0x24],ECX      ; 0060e0b7
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060e0ba
    MOV dword ptr [EDI + 0x28],ECX      ; 0060e0bd
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060e0c0
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060e0c3
    JMP 0x004045dd                      ; 0060e0c6
        ;   XREF to: 004045dd (UNCONDITIONAL_JUMP)  ; LAB_004045dd
    MOV ECX,0xc                         ; 0060e0cb
        ;   Label: LAB_0060e0cb
    SUB ESP,0x30                        ; 0060e0d0
    LEA ESI,[ESP + 0x90]                ; 0060e0d3
    MOV EDI,ESP                         ; 0060e0da
    ADD EBX,0x4                         ; 0060e0dc
    INC EBP                             ; 0060e0df
    MOV ECX,dword ptr [ESI]             ; 0060e0e0
    MOV dword ptr [EDI],ECX             ; 0060e0e2
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060e0e4
    MOV dword ptr [EDI + 0x4],ECX       ; 0060e0e7
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060e0ea
    MOV dword ptr [EDI + 0x8],ECX       ; 0060e0ed
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060e0f0
    MOV dword ptr [EDI + 0xc],ECX       ; 0060e0f3
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060e0f6
    MOV dword ptr [EDI + 0x10],ECX      ; 0060e0f9
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060e0fc
    MOV dword ptr [EDI + 0x14],ECX      ; 0060e0ff
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060e102
    MOV dword ptr [EDI + 0x18],ECX      ; 0060e105
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060e108
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060e10b
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060e10e
    MOV dword ptr [EDI + 0x20],ECX      ; 0060e111
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060e114
    MOV dword ptr [EDI + 0x24],ECX      ; 0060e117
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060e11a
    MOV dword ptr [EDI + 0x28],ECX      ; 0060e11d
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060e120
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060e123
    JMP 0x004045f4                      ; 0060e126
        ;   XREF to: 004045f4 (UNCONDITIONAL_JUMP)  ; LAB_004045f4

