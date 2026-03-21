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
    JMP 0x0060dda9                      ; 004a201e
        ;   XREF to: 0060dda9 (UNCONDITIONAL_JUMP)  ; LAB_0060dda9
    MOVSD.REP ES:EDI,ESI                ; 004a202d | g_RenderVertexBuffer[1].projected_vertex.transformed_x | g_RenderVertexBuffer[1].projected_vertex.transformed_y
        ;   Label: LAB_004a202d
    JMP 0x0060de03                      ; 004a202f
        ;   XREF to: 0060de03 (UNCONDITIONAL_JUMP)  ; LAB_0060de03
    MOVSD.REP ES:EDI,ESI                ; 004a203e | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
        ;   Label: LAB_004a203e
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 004a2040
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 004a2045
    ADD ESP,0x30                        ; 004a2048
    POP EDI                             ; 004a204b
    POP ESI                             ; 004a204c
    POP EBX                             ; 004a204d
    RET                                 ; 004a204e
    MOV ESI,0x688044                    ; 0060dda9
        ;   Label: LAB_0060dda9
    SUB ESP,0x30                        ; 0060ddae
    MOV ECX,0xc                         ; 0060ddb1
    MOV EDI,ESP                         ; 0060ddb6
    MOV ECX,dword ptr [ESI]             ; 0060ddb8
    MOV dword ptr [EDI],ECX             ; 0060ddba
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060ddbc
    MOV dword ptr [EDI + 0x4],ECX       ; 0060ddbf
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060ddc2
    MOV dword ptr [EDI + 0x8],ECX       ; 0060ddc5
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060ddc8
    MOV dword ptr [EDI + 0xc],ECX       ; 0060ddcb
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060ddce
    MOV dword ptr [EDI + 0x10],ECX      ; 0060ddd1
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060ddd4
    MOV dword ptr [EDI + 0x14],ECX      ; 0060ddd7
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060ddda
    MOV dword ptr [EDI + 0x18],ECX      ; 0060dddd
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060dde0
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060dde3
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060dde6
    MOV dword ptr [EDI + 0x20],ECX      ; 0060dde9
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060ddec
    MOV dword ptr [EDI + 0x24],ECX      ; 0060ddef
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060ddf2
    MOV dword ptr [EDI + 0x28],ECX      ; 0060ddf5
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060ddf8
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060ddfb
    JMP 0x004a202d                      ; 0060ddfe
        ;   XREF to: 004a202d (UNCONDITIONAL_JUMP)  ; LAB_004a202d
    SUB ESP,0x30                        ; 0060de03
        ;   Label: LAB_0060de03
    MOV ECX,0xc                         ; 0060de06
    MOV ESI,0x688014                    ; 0060de0b
    MOV EDI,ESP                         ; 0060de10
    MOV ECX,dword ptr [ESI]             ; 0060de12
    MOV dword ptr [EDI],ECX             ; 0060de14
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060de16
    MOV dword ptr [EDI + 0x4],ECX       ; 0060de19
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060de1c
    MOV dword ptr [EDI + 0x8],ECX       ; 0060de1f
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060de22
    MOV dword ptr [EDI + 0xc],ECX       ; 0060de25
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060de28
    MOV dword ptr [EDI + 0x10],ECX      ; 0060de2b
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060de2e
    MOV dword ptr [EDI + 0x14],ECX      ; 0060de31
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060de34
    MOV dword ptr [EDI + 0x18],ECX      ; 0060de37
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060de3a
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060de3d
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060de40
    MOV dword ptr [EDI + 0x20],ECX      ; 0060de43
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060de46
    MOV dword ptr [EDI + 0x24],ECX      ; 0060de49
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060de4c
    MOV dword ptr [EDI + 0x28],ECX      ; 0060de4f
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060de52
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060de55
    JMP 0x004a203e                      ; 0060de58
        ;   XREF to: 004a203e (UNCONDITIONAL_JUMP)  ; LAB_004a203e

