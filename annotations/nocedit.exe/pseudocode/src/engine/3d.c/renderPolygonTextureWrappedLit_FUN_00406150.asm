; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTextureWrappedLit_FUN_00406150(SMRGLHeaderPrimitive *polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   _BIT_INTEGER g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a00
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406150
        ;   Label: engine_3d.c_renderPolygonTextureWrappedLit_FUN_00406150
    PUSH ESI                            ; 00406151
    PUSH EBP                            ; 00406152
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406153
    LEA ESI,[EBX + 0x18]                ; 00406157
    LEA EAX,[EBX + 0x8]                 ; 0040615a
    PUSH EAX                            ; 0040615d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0040615e
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406163
    TEST EAX,EAX                        ; 00406166
    JZ 0x004061b4                       ; 00406168
        ;   XREF to: 004061b4 (CONDITIONAL_JUMP)  ; LAB_004061b4
    CMP dword ptr [0x02d05248],0x0      ; 0040616a | g_MMXSupported
    JNZ 0x004061cf                      ; 00406171
        ;   XREF to: 004061cf (CONDITIONAL_JUMP)  ; LAB_004061cf
    CMP dword ptr [0x0067939c],0x20     ; 00406173 | g_BitsPerPixel
    JNZ 0x004061c3                      ; 0040617a
        ;   XREF to: 004061c3 (CONDITIONAL_JUMP)  ; LAB_004061c3
    MOV dword ptr [0x02d0257c],0x5b50ec ; 0040617c | g_ScanlineRenderFunc
    PUSH EDI                            ; 00406186
        ;   Label: LAB_00406186
    MOV EDI,0xc1                        ; 00406187
    MOV EBP,0x1                         ; 0040618c
    PUSH EBX                            ; 00406191
    MOV dword ptr [0x02d052a0],EDI      ; 00406192 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00406198 | g_RenderStateFlag2
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 0040619e
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x4                         ; 004061a3
    PUSH ESI                            ; 004061a6
    MOV EAX,dword ptr [EBX + 0x4]       ; 004061a7
    PUSH EAX                            ; 004061aa
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 004061ab
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004061b0
    POP EDI                             ; 004061b3
    MOV EAX,dword ptr [EBX + 0x4]       ; 004061b4
        ;   Label: LAB_004061b4
    ADD EBX,0x18                        ; 004061b7
    SHL EAX,0x2                         ; 004061ba
    ADD EAX,EBX                         ; 004061bd
    POP EBP                             ; 004061bf
    POP ESI                             ; 004061c0
    POP EBX                             ; 004061c1
    RET                                 ; 004061c2
    MOV dword ptr [0x02d0257c],0x5b5322 ; 004061c3 | g_ScanlineRenderFunc
        ;   Label: LAB_004061c3
    JMP 0x00406186                      ; 004061cd
        ;   XREF to: 00406186 (UNCONDITIONAL_JUMP)  ; LAB_00406186
    CMP dword ptr [0x0067939c],0x20     ; 004061cf | g_BitsPerPixel
        ;   Label: LAB_004061cf
    JNZ 0x004061e4                      ; 004061d6
        ;   XREF to: 004061e4 (CONDITIONAL_JUMP)  ; LAB_004061e4
    MOV dword ptr [0x02d0257c],0x5b4031 ; 004061d8 | g_ScanlineRenderFunc
    JMP 0x00406186                      ; 004061e2
        ;   XREF to: 00406186 (UNCONDITIONAL_JUMP)  ; LAB_00406186
    MOV dword ptr [0x02d0257c],0x5b4823 ; 004061e4 | g_ScanlineRenderFunc
        ;   Label: LAB_004061e4
    JMP 0x00406186                      ; 004061ee
        ;   XREF to: 00406186 (UNCONDITIONAL_JUMP)  ; LAB_00406186

