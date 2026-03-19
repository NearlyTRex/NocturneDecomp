; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_draw3DInterpolatedLine_FUN_004a1f40(CVector3f *start_point,CVector3f *end_point)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   start_point
; CVector3f *      Stack[0x8]:4   end_point
; Local Variables:
; CVector3i        Stack[-0x24]:12  local_24
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
; float            Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   float FLOAT_006235be = 0.2000000
;   float FLOAT_006235c2 = 0.8000000
;   float g_WorldToScreenScale2 = 256
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
;   undefined4 g_RenderVertexBuffer[1].projected_vertex.transformed_x
;   undefined4 g_RenderVertexBuffer[1].projected_vertex.transformed_y
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;   engine_matrix.c_transformToCache_FUN_0050cd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1f40
        ;   Label: shape_edittool.cpp_draw3DInterpolatedLine_FUN_004a1f40
    PUSH ESI                            ; 004a1f41
    PUSH EDI                            ; 004a1f42
    SUB ESP,0x30                        ; 004a1f43
    MOV EDI,dword ptr [ESP + 0x40]      ; 004a1f46
    MOV ESI,dword ptr [ESP + 0x44]      ; 004a1f4a
    LEA EBX,[ESP + 0x18]                ; 004a1f4e
    MOV EAX,EDI                         ; 004a1f52
    FLD float ptr [EAX]                 ; 004a1f54
    FMUL float ptr [0x0065d44c]         ; 004a1f56 | g_WorldToScreenScale2
    FISTP dword ptr [EBX]               ; 004a1f5c
    FLD float ptr [EAX + 0x4]           ; 004a1f5e
    FMUL float ptr [0x0065d44c]         ; 004a1f61 | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x4]         ; 004a1f67
    FLD float ptr [EAX + 0x8]           ; 004a1f6a
    FMUL float ptr [0x0065d44c]         ; 004a1f6d | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x8]         ; 004a1f73
    LEA EAX,[ESP + 0x18]                ; 004a1f76
    PUSH EAX                            ; 004a1f7a
    PUSH 0x0                            ; 004a1f7b
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004a1f7d
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [0x006235be]          ; 004a1f82 | FLOAT_006235be
    FLD float ptr [ESI]                 ; 004a1f88
    FMUL ST1                            ; 004a1f8a
    ADD ESP,0x8                         ; 004a1f8c
    FSTP float ptr [ESP + 0xc]          ; 004a1f8f
    FLD float ptr [ESI + 0x4]           ; 004a1f93
    FMUL ST1                            ; 004a1f96
    FSTP float ptr [ESP + 0x10]         ; 004a1f98
    FMUL float ptr [ESI + 0x8]          ; 004a1f9c
    FSTP float ptr [ESP + 0x14]         ; 004a1f9f
    FLD float ptr [0x006235c2]          ; 004a1fa3 | FLOAT_006235c2
    FLD float ptr [EDI]                 ; 004a1fa9
    FMUL ST1                            ; 004a1fab
    FSTP float ptr [ESP]                ; 004a1fad
    FLD float ptr [EDI + 0x4]           ; 004a1fb0
    FMUL ST1                            ; 004a1fb3
    FSTP float ptr [ESP + 0x4]          ; 004a1fb5
    FMUL float ptr [EDI + 0x8]          ; 004a1fb9
    LEA EBX,[ESP + 0x18]                ; 004a1fbc
    LEA EAX,[ESP + 0x24]                ; 004a1fc0
    FLD float ptr [ESP]                 ; 004a1fc4
    FADD float ptr [ESP + 0xc]          ; 004a1fc7
    FLD float ptr [ESP + 0x4]           ; 004a1fcb
    FXCH                                ; 004a1fcf
    FSTP float ptr [ESP + 0x24]         ; 004a1fd1
    FADD float ptr [ESP + 0x10]         ; 004a1fd5
    FXCH                                ; 004a1fd9
    FST float ptr [ESP + 0x8]           ; 004a1fdb
    FADD float ptr [ESP + 0x14]         ; 004a1fdf
    FXCH                                ; 004a1fe3
    FSTP float ptr [ESP + 0x28]         ; 004a1fe5
    FSTP float ptr [ESP + 0x2c]         ; 004a1fe9
    FLD float ptr [EAX]                 ; 004a1fed
    FMUL float ptr [0x0065d44c]         ; 004a1fef | g_WorldToScreenScale2
    FISTP dword ptr [EBX]               ; 004a1ff5
    FLD float ptr [EAX + 0x4]           ; 004a1ff7
    FMUL float ptr [0x0065d44c]         ; 004a1ffa | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x4]         ; 004a2000
    FLD float ptr [EAX + 0x8]           ; 004a2003
    FMUL float ptr [0x0065d44c]         ; 004a2006 | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x8]         ; 004a200c
    LEA EAX,[ESP + 0x18]                ; 004a200f
    PUSH EAX                            ; 004a2013
    PUSH 0x1                            ; 004a2014
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004a2016
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 004a201b
    MOV ESI,0x688044                    ; 004a201e | g_RenderVertexBuffer[1].projected_vertex.transformed_x
    SUB ESP,0x30                        ; 004a2023
    MOV ECX,0xc                         ; 004a2026
    MOV EDI,ESP                         ; 004a202b
    MOVSD.REP ES:EDI,ESI                ; 004a202d | g_RenderVertexBuffer[1].projected_vertex.transformed_x | g_RenderVertexBuffer[1].projected_vertex.transformed_y
    SUB ESP,0x30                        ; 004a202f
    MOV ECX,0xc                         ; 004a2032
    MOV ESI,0x688014                    ; 004a2037 | g_RenderVertexBuffer
    MOV EDI,ESP                         ; 004a203c
    MOVSD.REP ES:EDI,ESI                ; 004a203e | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 004a2040
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 004a2045
    ADD ESP,0x30                        ; 004a2048
    POP EDI                             ; 004a204b
    POP ESI                             ; 004a204c
    POP EBX                             ; 004a204d
    RET                                 ; 004a204e

