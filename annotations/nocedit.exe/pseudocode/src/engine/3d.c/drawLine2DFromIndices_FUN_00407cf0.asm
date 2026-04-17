; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00407cf0(int vertex_index1,int vertex_index2)
;
; Parameters:
; int              Stack[0x4]:4   vertex_index1
; int              Stack[0x8]:4   vertex_index2
; Local Variables:
; SRenderVertex    Stack[-0x68]:48  local_68
; SRenderVertex    Stack[-0x38]:48  local_38
;
; XREF[1]:
;   core_waypoint.cpp_CWaypoint_renderOpaque_FUN_005ebf70 at 005ec24e
;
; Referenced Globals:
;   SRenderVertex[20000] g_RenderVertexBuffer
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
    JMP 0x0060e850                      ; 00407d35
        ;   XREF to: 0060e850 (UNCONDITIONAL_JUMP)  ; CAVE_cave_005fde92
    MOVSD.REP ES:EDI,ESI                ; 00407d43
        ;   Label: LAB_00407d43
    JMP 0x0060e8a9                      ; 00407d45
        ;   XREF to: 0060e8a9 (UNCONDITIONAL_JUMP)  ; LAB_0060e8a9
    MOVSD.REP ES:EDI,ESI                ; 00407d53
        ;   Label: LAB_00407d53
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00407d55
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00407d5a
    ADD ESP,0x60                        ; 00407d5d
    POP EDI                             ; 00407d60
    POP ESI                             ; 00407d61
    RET                                 ; 00407d62
    MOV ECX,0xc                         ; 0060e850
        ;   Label: CAVE_cave_005fde92
    SUB ESP,0x30                        ; 0060e855
    LEA ESI,[ESP + 0x60]                ; 0060e858
    MOV EDI,ESP                         ; 0060e85c
    MOV ECX,dword ptr [ESI]             ; 0060e85e
    MOV dword ptr [EDI],ECX             ; 0060e860
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060e862
    MOV dword ptr [EDI + 0x4],ECX       ; 0060e865
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060e868
    MOV dword ptr [EDI + 0x8],ECX       ; 0060e86b
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060e86e
    MOV dword ptr [EDI + 0xc],ECX       ; 0060e871
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060e874
    MOV dword ptr [EDI + 0x10],ECX      ; 0060e877
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060e87a
    MOV dword ptr [EDI + 0x14],ECX      ; 0060e87d
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060e880
    MOV dword ptr [EDI + 0x18],ECX      ; 0060e883
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060e886
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060e889
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060e88c
    MOV dword ptr [EDI + 0x20],ECX      ; 0060e88f
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060e892
    MOV dword ptr [EDI + 0x24],ECX      ; 0060e895
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060e898
    MOV dword ptr [EDI + 0x28],ECX      ; 0060e89b
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060e89e
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060e8a1
    JMP 0x00407d43                      ; 0060e8a4
        ;   XREF to: 00407d43 (UNCONDITIONAL_JUMP)  ; LAB_00407d43
    MOV ECX,0xc                         ; 0060e8a9
        ;   Label: LAB_0060e8a9
    SUB ESP,0x30                        ; 0060e8ae
    LEA ESI,[ESP + 0x60]                ; 0060e8b1
    MOV EDI,ESP                         ; 0060e8b5
    MOV ECX,dword ptr [ESI]             ; 0060e8b7
    MOV dword ptr [EDI],ECX             ; 0060e8b9
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060e8bb
    MOV dword ptr [EDI + 0x4],ECX       ; 0060e8be
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060e8c1
    MOV dword ptr [EDI + 0x8],ECX       ; 0060e8c4
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060e8c7
    MOV dword ptr [EDI + 0xc],ECX       ; 0060e8ca
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060e8cd
    MOV dword ptr [EDI + 0x10],ECX      ; 0060e8d0
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060e8d3
    MOV dword ptr [EDI + 0x14],ECX      ; 0060e8d6
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060e8d9
    MOV dword ptr [EDI + 0x18],ECX      ; 0060e8dc
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060e8df
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060e8e2
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060e8e5
    MOV dword ptr [EDI + 0x20],ECX      ; 0060e8e8
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060e8eb
    MOV dword ptr [EDI + 0x24],ECX      ; 0060e8ee
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060e8f1
    MOV dword ptr [EDI + 0x28],ECX      ; 0060e8f4
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060e8f7
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060e8fa
    JMP 0x00407d53                      ; 0060e8fd
        ;   XREF to: 00407d53 (UNCONDITIONAL_JUMP)  ; LAB_00407d53

