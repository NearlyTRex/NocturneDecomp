; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_3d.c_drawLine2DFromIndices_FUN_00407cf0(int vertex_index1, int vertex_index2)
;
; Parameters:
; int              Stack[0x4]:4   vertex_index1
; int              Stack[0x8]:4   vertex_index2
; Local Variables:
; undefined1       Stack[-0x68]:1  local_68
; undefined1       Stack[-0x38]:1  local_38
;
; XREF[1]:
;   core_waypoint.cpp_CWaypoint_FUN_005ebf70 at 005ec24e
;
; Referenced Globals:
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00407cf0
        ;   Label: engine_3d.c_drawLine2DFromIndices_FUN_00407cf0
    PUSH EDI                            ; 00407cf1
    SUB ESP,0x60                        ; 00407cf2
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00407cf5
    LEA EAX,[EDI*0x4 + 0x0]             ; 00407cf9
    SUB EAX,EDI                         ; 00407d00
    MOV ECX,0xc                         ; 00407d02
    SHL EAX,0x4                         ; 00407d07
    MOV EDI,ESP                         ; 00407d0a
    LEA ESI,[EAX + 0x688014]            ; 00407d0c | g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 00407d12 | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    MOV EDI,dword ptr [ESP + 0x70]      ; 00407d14
    LEA EAX,[EDI*0x4 + 0x0]             ; 00407d18
    SUB EAX,EDI                         ; 00407d1f
    MOV ECX,0xc                         ; 00407d21
    SHL EAX,0x4                         ; 00407d26
    LEA EDI,[ESP + 0x30]                ; 00407d29
    LEA ESI,[EAX + 0x688014]            ; 00407d2d | g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 00407d33 | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    MOV ECX,0xc                         ; 00407d35
    SUB ESP,0x30                        ; 00407d3a
    LEA ESI,[ESP + 0x60]                ; 00407d3d
    MOV EDI,ESP                         ; 00407d41
    MOVSD.REP ES:EDI,ESI                ; 00407d43
    MOV ECX,0xc                         ; 00407d45
    SUB ESP,0x30                        ; 00407d4a
    LEA ESI,[ESP + 0x60]                ; 00407d4d
    MOV EDI,ESP                         ; 00407d51
    MOVSD.REP ES:EDI,ESI                ; 00407d53
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00407d55
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex * vertex1, SRenderVertex * vertex2)
    ADD ESP,0x60                        ; 00407d5a
    ADD ESP,0x60                        ; 00407d5d
    POP EDI                             ; 00407d60
    POP ESI                             ; 00407d61
    RET                                 ; 00407d62

