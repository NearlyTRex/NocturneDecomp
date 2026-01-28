; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonVertexLit_FUN_00404120(SMRGLHeaderPrimitive *polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404120
        ;   Label: engine_3d.c_renderPolygonVertexLit_FUN_00404120
    PUSH ESI                            ; 00404121
    PUSH EBP                            ; 00404122
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404123
    LEA ESI,[EBX + 0x18]                ; 00404127
    LEA EAX,[EBX + 0x8]                 ; 0040412a
    PUSH EAX                            ; 0040412d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0040412e
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00404133
    TEST EAX,EAX                        ; 00404136
    JZ 0x00404185                       ; 00404138
        ;   XREF to: 00404185 (CONDITIONAL_JUMP)  ; LAB_00404185
    CMP dword ptr [0x02d05248],0x0      ; 0040413a | g_MMXSupported
    JNZ 0x004041a0                      ; 00404141
        ;   XREF to: 004041a0 (CONDITIONAL_JUMP)  ; LAB_004041a0
    CMP dword ptr [0x0067939c],0x20     ; 00404143 | g_BitsPerPixel
    JNZ 0x00404194                      ; 0040414a
        ;   XREF to: 00404194 (CONDITIONAL_JUMP)  ; LAB_00404194
    MOV dword ptr [0x02d0257c],0x5b50ec ; 0040414c | g_ScanlineRenderFunc
    PUSH EDI                            ; 00404156
        ;   Label: LAB_00404156
    MOV EDI,0x3                         ; 00404157
    PUSH 0xffff                         ; 0040415c
    MOV dword ptr [0x02d052a0],EDI      ; 00404161 | g_RenderStateFlags
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 00404167
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 0040416c
    PUSH ESI                            ; 0040416f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404170
    XOR EBP,EBP                         ; 00404173
    PUSH EAX                            ; 00404175
    MOV dword ptr [0x02d052a4],EBP      ; 00404176 | g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 0040417c
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404181
    POP EDI                             ; 00404184
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404185
        ;   Label: LAB_00404185
    ADD EBX,0x18                        ; 00404188
    SHL EAX,0x2                         ; 0040418b
    ADD EAX,EBX                         ; 0040418e
    POP EBP                             ; 00404190
    POP ESI                             ; 00404191
    POP EBX                             ; 00404192
    RET                                 ; 00404193
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00404194 | g_ScanlineRenderFunc
        ;   Label: LAB_00404194
    JMP 0x00404156                      ; 0040419e
        ;   XREF to: 00404156 (UNCONDITIONAL_JUMP)  ; LAB_00404156
    CMP dword ptr [0x0067939c],0x20     ; 004041a0 | g_BitsPerPixel
        ;   Label: LAB_004041a0
    JNZ 0x004041b5                      ; 004041a7
        ;   XREF to: 004041b5 (CONDITIONAL_JUMP)  ; LAB_004041b5
    MOV dword ptr [0x02d0257c],0x5b4031 ; 004041a9 | g_ScanlineRenderFunc
    JMP 0x00404156                      ; 004041b3
        ;   XREF to: 00404156 (UNCONDITIONAL_JUMP)  ; LAB_00404156
    MOV dword ptr [0x02d0257c],0x5b4823 ; 004041b5 | g_ScanlineRenderFunc
        ;   Label: LAB_004041b5
    JMP 0x00404156                      ; 004041bf
        ;   XREF to: 00404156 (UNCONDITIONAL_JUMP)  ; LAB_00404156

