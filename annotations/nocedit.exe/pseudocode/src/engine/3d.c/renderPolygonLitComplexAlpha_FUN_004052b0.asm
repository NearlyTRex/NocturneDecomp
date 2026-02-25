; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitComplexAlpha_FUN_004052b0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004052b0
        ;   Label: engine_3d.c_renderPolygonLitComplexAlpha_FUN_004052b0
    PUSH ESI                            ; 004052b1
    PUSH EBP                            ; 004052b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004052b3
    LEA ESI,[EBX + 0x18]                ; 004052b7
    LEA EAX,[EBX + 0x8]                 ; 004052ba
    PUSH EAX                            ; 004052bd
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 004052be
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 004052c3
    TEST EAX,EAX                        ; 004052c6
    JZ 0x00405308                       ; 004052c8
        ;   XREF to: 00405308 (CONDITIONAL_JUMP)  ; LAB_00405308
    CMP dword ptr [0x02d05248],0x0      ; 004052ca | g_MMXSupported
    JNZ 0x00405323                      ; 004052d1
        ;   XREF to: 00405323 (CONDITIONAL_JUMP)  ; LAB_00405323
    CMP dword ptr [0x0067939c],0x20     ; 004052d3 | g_BitsPerPixel
    JNZ 0x00405317                      ; 004052da
        ;   XREF to: 00405317 (CONDITIONAL_JUMP)  ; LAB_00405317
    MOV dword ptr [0x02d0257c],0x5b50ec ; 004052dc | g_ScanlineRenderFunc
    PUSH EDI                            ; 004052e6
        ;   Label: LAB_004052e6
    MOV EDI,0x23                        ; 004052e7
    PUSH ESI                            ; 004052ec
    MOV EAX,dword ptr [EBX + 0x4]       ; 004052ed
    XOR EBP,EBP                         ; 004052f0
    PUSH EAX                            ; 004052f2
    MOV dword ptr [0x02d052a0],EDI      ; 004052f3 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 004052f9 | g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 004052ff
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405304
    POP EDI                             ; 00405307
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405308
        ;   Label: LAB_00405308
    ADD EBX,0x18                        ; 0040530b
    SHL EAX,0x2                         ; 0040530e
    ADD EAX,EBX                         ; 00405311
    POP EBP                             ; 00405313
    POP ESI                             ; 00405314
    POP EBX                             ; 00405315
    RET                                 ; 00405316
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00405317 | g_ScanlineRenderFunc
        ;   Label: LAB_00405317
    JMP 0x004052e6                      ; 00405321
        ;   XREF to: 004052e6 (UNCONDITIONAL_JUMP)  ; LAB_004052e6
    CMP dword ptr [0x0067939c],0x20     ; 00405323 | g_BitsPerPixel
        ;   Label: LAB_00405323
    JNZ 0x00405338                      ; 0040532a
        ;   XREF to: 00405338 (CONDITIONAL_JUMP)  ; LAB_00405338
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0040532c | g_ScanlineRenderFunc
    JMP 0x004052e6                      ; 00405336
        ;   XREF to: 004052e6 (UNCONDITIONAL_JUMP)  ; LAB_004052e6
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00405338 | g_ScanlineRenderFunc
        ;   Label: LAB_00405338
    JMP 0x004052e6                      ; 00405342
        ;   XREF to: 004052e6 (UNCONDITIONAL_JUMP)  ; LAB_004052e6

