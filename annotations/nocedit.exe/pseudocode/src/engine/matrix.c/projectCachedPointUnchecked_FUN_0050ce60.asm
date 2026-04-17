; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(int cache_index)
;
; Parameters:
; int              Stack[0x4]:4   cache_index
;
; XREF[3]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70 at 00407fa5
;   engine_3d.c_clipAndDrawLine3D_FUN_00408070 at 004082af
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 at 0048cd82
;
; Referenced Globals:
;   SRenderVertex[20000] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.inv_z
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
;   int g_ViewportCenterXFixed
;   int g_ViewportCenterYFixed
;   int g_ViewportRightFixed
;   int g_ViewportBottomFixed
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ce60
        ;   Label: engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60
    PUSH ESI                            ; 0050ce61
    PUSH EDI                            ; 0050ce62
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050ce63
    LEA ECX,[EAX*0x4 + 0x0]             ; 0050ce67
    SUB ECX,EAX                         ; 0050ce6e
    MOV EAX,0x7fffffff                  ; 0050ce70
    SHL ECX,0x4                         ; 0050ce75
    MOV EDX,EAX                         ; 0050ce78
    MOV EBX,dword ptr [ECX + 0x68801c]  ; 0050ce7a | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    SAR EDX,0x1f                        ; 0050ce80
    IDIV EBX                            ; 0050ce83
    MOV dword ptr [ECX + 0x688020],EAX  ; 0050ce85 | g_RenderVertexBuffer[0].projected_vertex.inv_z
    MOV EDX,dword ptr [0x02d02548]      ; 0050ce8b | g_ViewportCenterXFixed
    MOV EBX,dword ptr [ECX + 0x68801c]  ; 0050ce91 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    MOV EAX,dword ptr [ECX + 0x688014]  ; 0050ce97 | g_RenderVertexBuffer
    IMUL EDX                            ; 0050ce9d
    IDIV EBX                            ; 0050ce9f
    MOV ESI,dword ptr [0x02d02550]      ; 0050cea1 | g_ViewportRightFixed
    ADD EAX,ESI                         ; 0050cea7
    MOV dword ptr [ECX + 0x688024],EAX  ; 0050cea9 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV EDX,dword ptr [0x02d0254c]      ; 0050ceaf | g_ViewportCenterYFixed
    MOV EBX,dword ptr [ECX + 0x68801c]  ; 0050ceb5 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    MOV EAX,dword ptr [ECX + 0x688018]  ; 0050cebb | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    IMUL EDX                            ; 0050cec1
    IDIV EBX                            ; 0050cec3
    MOV EDI,dword ptr [0x02d02554]      ; 0050cec5 | g_ViewportBottomFixed
    ADD EAX,EDI                         ; 0050cecb
    MOV dword ptr [ECX + 0x688028],EAX  ; 0050cecd | g_RenderVertexBuffer[0].projected_vertex.screen_y
    POP EDI                             ; 0050ced3
    POP ESI                             ; 0050ced4
    POP EBX                             ; 0050ced5
    RET                                 ; 0050ced6

