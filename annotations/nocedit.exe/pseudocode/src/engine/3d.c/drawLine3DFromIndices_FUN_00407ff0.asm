; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_drawLine3DFromIndices_FUN_00407ff0(int vertex_index1,int vertex_index2)
;
; Parameters:
; int              Stack[0x4]:4   vertex_index1
; int              Stack[0x8]:4   vertex_index2
; Local Variables:
; SRenderVertex    Stack[-0x68]:48  local_68
; SRenderVertex    Stack[-0x38]:48  local_38
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
    LEA ESI,[EAX + 0x688014]            ; 0040800c | g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 00408012 | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    MOV EDI,dword ptr [ESP + 0x70]      ; 00408014
    LEA EAX,[EDI*0x4 + 0x0]             ; 00408018
    SUB EAX,EDI                         ; 0040801f
    MOV ECX,0xc                         ; 00408021
    SHL EAX,0x4                         ; 00408026
    LEA EDI,[ESP + 0x30]                ; 00408029
    LEA ESI,[EAX + 0x688014]            ; 0040802d | g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 00408033 | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    JMP 0x004b1b14                      ; 00408035
        ;   XREF to: 004b1b14 (UNCONDITIONAL_JUMP)  ; CAVE_cave_005fde92
    MOVSD.REP ES:EDI,ESI                ; 00408043
        ;   Label: LAB_00408043
    JMP 0x004b1b6d                      ; 00408045
        ;   XREF to: 004b1b6d (UNCONDITIONAL_JUMP)  ; LAB_004b1b6d
    MOVSD.REP ES:EDI,ESI                ; 00408053
        ;   Label: LAB_00408053
    CALL engine_3d.c_clipAndDrawLine3D_FUN_00408070 ; 00408055
        ;   XREF to: 00408070 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine3D_FUN_00408070(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0040805a
    ADD ESP,0x60                        ; 0040805d
    POP EDI                             ; 00408060
    POP ESI                             ; 00408061
    RET                                 ; 00408062
    MOV ECX,0xc                         ; 004b1b14
        ;   Label: CAVE_cave_005fde92
    SUB ESP,0x30                        ; 004b1b19
    LEA ESI,[ESP + 0x60]                ; 004b1b1c
    MOV EDI,ESP                         ; 004b1b20
    MOV ECX,dword ptr [ESI]             ; 004b1b22
    MOV dword ptr [EDI],ECX             ; 004b1b24
    MOV ECX,dword ptr [ESI + 0x4]       ; 004b1b26
    MOV dword ptr [EDI + 0x4],ECX       ; 004b1b29
    MOV ECX,dword ptr [ESI + 0x8]       ; 004b1b2c
    MOV dword ptr [EDI + 0x8],ECX       ; 004b1b2f
    MOV ECX,dword ptr [ESI + 0xc]       ; 004b1b32
    MOV dword ptr [EDI + 0xc],ECX       ; 004b1b35
    MOV ECX,dword ptr [ESI + 0x10]      ; 004b1b38
    MOV dword ptr [EDI + 0x10],ECX      ; 004b1b3b
    MOV ECX,dword ptr [ESI + 0x14]      ; 004b1b3e
    MOV dword ptr [EDI + 0x14],ECX      ; 004b1b41
    MOV ECX,dword ptr [ESI + 0x18]      ; 004b1b44
    MOV dword ptr [EDI + 0x18],ECX      ; 004b1b47
    MOV ECX,dword ptr [ESI + 0x1c]      ; 004b1b4a
    MOV dword ptr [EDI + 0x1c],ECX      ; 004b1b4d
    MOV ECX,dword ptr [ESI + 0x20]      ; 004b1b50
    MOV dword ptr [EDI + 0x20],ECX      ; 004b1b53
    MOV ECX,dword ptr [ESI + 0x24]      ; 004b1b56
    MOV dword ptr [EDI + 0x24],ECX      ; 004b1b59
    MOV ECX,dword ptr [ESI + 0x28]      ; 004b1b5c
    MOV dword ptr [EDI + 0x28],ECX      ; 004b1b5f
    MOV ECX,dword ptr [ESI + 0x2c]      ; 004b1b62
    MOV dword ptr [EDI + 0x2c],ECX      ; 004b1b65
    JMP 0x00408043                      ; 004b1b68
        ;   XREF to: 00408043 (UNCONDITIONAL_JUMP)  ; LAB_00408043
    MOV ECX,0xc                         ; 004b1b6d
        ;   Label: LAB_004b1b6d
    SUB ESP,0x30                        ; 004b1b72
    LEA ESI,[ESP + 0x60]                ; 004b1b75
    MOV EDI,ESP                         ; 004b1b79
    MOV ECX,dword ptr [ESI]             ; 004b1b7b
    MOV dword ptr [EDI],ECX             ; 004b1b7d
    MOV ECX,dword ptr [ESI + 0x4]       ; 004b1b7f
    MOV dword ptr [EDI + 0x4],ECX       ; 004b1b82
    MOV ECX,dword ptr [ESI + 0x8]       ; 004b1b85
    MOV dword ptr [EDI + 0x8],ECX       ; 004b1b88
    MOV ECX,dword ptr [ESI + 0xc]       ; 004b1b8b
    MOV dword ptr [EDI + 0xc],ECX       ; 004b1b8e
    MOV ECX,dword ptr [ESI + 0x10]      ; 004b1b91
    MOV dword ptr [EDI + 0x10],ECX      ; 004b1b94
    MOV ECX,dword ptr [ESI + 0x14]      ; 004b1b97
    MOV dword ptr [EDI + 0x14],ECX      ; 004b1b9a
    MOV ECX,dword ptr [ESI + 0x18]      ; 004b1b9d
    MOV dword ptr [EDI + 0x18],ECX      ; 004b1ba0
    MOV ECX,dword ptr [ESI + 0x1c]      ; 004b1ba3
    MOV dword ptr [EDI + 0x1c],ECX      ; 004b1ba6
    MOV ECX,dword ptr [ESI + 0x20]      ; 004b1ba9
    MOV dword ptr [EDI + 0x20],ECX      ; 004b1bac
    MOV ECX,dword ptr [ESI + 0x24]      ; 004b1baf
    MOV dword ptr [EDI + 0x24],ECX      ; 004b1bb2
    MOV ECX,dword ptr [ESI + 0x28]      ; 004b1bb5
    MOV dword ptr [EDI + 0x28],ECX      ; 004b1bb8
    MOV ECX,dword ptr [ESI + 0x2c]      ; 004b1bbb
    MOV dword ptr [EDI + 0x2c],ECX      ; 004b1bbe
    JMP 0x00408053                      ; 004b1bc1
        ;   XREF to: 00408053 (UNCONDITIONAL_JUMP)  ; LAB_00408053

