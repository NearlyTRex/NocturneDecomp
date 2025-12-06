; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_renderPolygonUVTextureNormalized_FUN_004061f0(SMRGLHeaderPrimitive * polygon_info)
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
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004061f0
        ;   Label: engine_3d.c_renderPolygonUVTextureNormalized_FUN_004061f0
    PUSH ESI                            ; 004061f1
    PUSH EBP                            ; 004061f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004061f3
    LEA ESI,[EBX + 0x18]                ; 004061f7
    LEA EAX,[EBX + 0x8]                 ; 004061fa
    PUSH EAX                            ; 004061fd
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 004061fe | int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00406203
    TEST EAX,EAX                        ; 00406206
    JZ 0x0040624b                       ; 00406208 | LAB_0040624b
        ;   XREF to: 0040624b (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 0040620a | BOOL g_MMXSupported
    JNZ 0x00406266                      ; 00406211 | LAB_00406266
        ;   XREF to: 00406266 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00406213 | int g_BitsPerPixel
    JNZ 0x0040625a                      ; 0040621a | LAB_0040625a
        ;   XREF to: 0040625a (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 0040621c | RenderScanlineFunc * g_ScanlineRenderFunc
    PUSH EDI                            ; 00406226
        ;   Label: LAB_00406226
    MOV EDI,0x1                         ; 00406227
    PUSH ESI                            ; 0040622c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040622d
    MOV EBP,0x2                         ; 00406230
    PUSH EAX                            ; 00406235
    MOV dword ptr [0x02d052a0],EDI      ; 00406236 | int g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 0040623c | int g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00406242 | void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00406247
    POP EDI                             ; 0040624a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040624b
        ;   Label: LAB_0040624b
    ADD EBX,0x18                        ; 0040624e
    SHL EAX,0x2                         ; 00406251
    ADD EAX,EBX                         ; 00406254
    POP EBP                             ; 00406256
    POP ESI                             ; 00406257
    POP EBX                             ; 00406258
    RET                                 ; 00406259
    MOV dword ptr [0x02d0257c],0x5b5322 ; 0040625a | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_0040625a
    JMP 0x00406226                      ; 00406264 | LAB_00406226
        ;   XREF to: 00406226 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00406266 | int g_BitsPerPixel
        ;   Label: LAB_00406266
    JNZ 0x0040627b                      ; 0040626d | LAB_0040627b
        ;   XREF to: 0040627b (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0040626f | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x00406226                      ; 00406279 | LAB_00406226
        ;   XREF to: 00406226 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0040627b | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_0040627b
    JMP 0x00406226                      ; 00406285 | LAB_00406226
        ;   XREF to: 00406226 (UNCONDITIONAL_JUMP)

