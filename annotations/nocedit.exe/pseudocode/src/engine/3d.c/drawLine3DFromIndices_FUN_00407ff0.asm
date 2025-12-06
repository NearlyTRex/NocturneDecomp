; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_3d.c_drawLine3DFromIndices_FUN_00407ff0(int vertex_index1, int vertex_index2)
;
; Parameters:
; int              Stack[0x4]:4   vertex_index1
; int              Stack[0x8]:4   vertex_index2
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x38]:1  local_38
;
; Referenced Globals:
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine3D_FUN_00408070
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00407ff0
        ;   Label: engine_3d.c_drawLine3DFromIndices_FUN_00407ff0
    PUSH EDI                            ; 00407ff1
    SUB ESP,0x60                        ; 00407ff2
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00407ff5
    LEA EAX,[EDI*0x4 + 0x0]             ; 00407ff9
    SUB EAX,EDI                         ; 00408000
    MOV ECX,0xc                         ; 00408002
    SHL EAX,0x4                         ; 00408007
    MOV EDI,ESP                         ; 0040800a
    LEA ESI,[EAX + 0x688014]            ; 0040800c | SRenderVertex[16] g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 00408012 | SRenderVertex[16] g_RenderVertexBuffer
    MOV EDI,dword ptr [ESP + 0x70]      ; 00408014
    LEA EAX,[EDI*0x4 + 0x0]             ; 00408018
    SUB EAX,EDI                         ; 0040801f
    MOV ECX,0xc                         ; 00408021
    SHL EAX,0x4                         ; 00408026
    LEA EDI,[ESP + 0x30]                ; 00408029
    LEA ESI,[EAX + 0x688014]            ; 0040802d | SRenderVertex[16] g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 00408033 | SRenderVertex[16] g_RenderVertexBuffer
    MOV ECX,0xc                         ; 00408035
    SUB ESP,0x30                        ; 0040803a
    LEA ESI,[ESP + 0x60]                ; 0040803d
    MOV EDI,ESP                         ; 00408041
    MOVSD.REP ES:EDI,ESI                ; 00408043
    MOV ECX,0xc                         ; 00408045
    SUB ESP,0x30                        ; 0040804a
    LEA ESI,[ESP + 0x60]                ; 0040804d
    MOV EDI,ESP                         ; 00408051
    MOVSD.REP ES:EDI,ESI                ; 00408053
    CALL engine_3d.c_clipAndDrawLine3D_FUN_00408070 ; 00408055 | void engine_3d.c_clipAndDrawLine3D_FUN_00408070(SRenderVertex * vertex1, SRenderVertex * vertex2)
        ;   XREF to: 00408070 (UNCONDITIONAL_CALL)
    ADD ESP,0x60                        ; 0040805a
    ADD ESP,0x60                        ; 0040805d
    POP EDI                             ; 00408060
    POP ESI                             ; 00408061
    RET                                 ; 00408062

