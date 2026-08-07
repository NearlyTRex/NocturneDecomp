; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedLitOp48_FUN_00407690(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   MainScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00404710
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_clipper.c_clipAndRasterize_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407690
        ;   Label: engine_3d.c_renderPolygonSolidTexturedLitOp48_FUN_00407690
    PUSH ESI                            ; 00407691
    PUSH EBP                            ; 00407692
    MOV EBX,dword ptr [ESP + 0x10]      ; 00407693
    LEA ESI,[EBX + 0x18]                ; 00407697
    LEA EAX,[EBX + 0x8]                 ; 0040769a
    PUSH EAX                            ; 0040769d
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0040769e
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 004076a3
    TEST EAX,EAX                        ; 004076a6
    JZ 0x00407701                       ; 004076a8
        ;   XREF to: 00407701 (CONDITIONAL_JUMP)  ; LAB_00407701
    CMP dword ptr [0x01c03948],0x0      ; 004076aa | g_MMXSupported
    JNZ 0x0040771c                      ; 004076b1
        ;   XREF to: 0040771c (CONDITIONAL_JUMP)  ; LAB_0040771c
    CMP dword ptr [0x005b7624],0x20     ; 004076b3 | g_BitsPerPixel
    JNZ 0x00407710                      ; 004076ba
        ;   XREF to: 00407710 (CONDITIONAL_JUMP)  ; LAB_00407710
    MOV dword ptr [0x01c00c7c],0x5300ec ; 004076bc | g_ScanlineRenderFunc
    PUSH EDI                            ; 004076c6
        ;   Label: LAB_004076c6
    MOV EDI,0xc3                        ; 004076c7
    PUSH 0xffff                         ; 004076cc
    MOV dword ptr [0x01c039a0],EDI      ; 004076d1 | g_RenderStateFlags
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 004076d7
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00408370(int alpha_color_value)
    ADD ESP,0x4                         ; 004076dc
    MOV EBP,0x1                         ; 004076df
    PUSH EBX                            ; 004076e4
    MOV dword ptr [0x01c039a4],EBP      ; 004076e5 | g_VertexPreprocessMode
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 004076eb
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 004076f0
    PUSH ESI                            ; 004076f3
    MOV EAX,dword ptr [EBX + 0x4]       ; 004076f4
    PUSH EAX                            ; 004076f7
    CALL engine_clipper.c_clipAndRasterize_FUN_00432cd0 ; 004076f8
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00432cd0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004076fd
    POP EDI                             ; 00407700
    MOV EAX,dword ptr [EBX + 0x4]       ; 00407701
        ;   Label: LAB_00407701
    ADD EBX,0x18                        ; 00407704
    SHL EAX,0x2                         ; 00407707
    ADD EAX,EBX                         ; 0040770a
    POP EBP                             ; 0040770c
    POP ESI                             ; 0040770d
    POP EBX                             ; 0040770e
    RET                                 ; 0040770f
    MOV dword ptr [0x01c00c7c],0x530322 ; 00407710 | g_ScanlineRenderFunc
        ;   Label: LAB_00407710
    JMP 0x004076c6                      ; 0040771a
        ;   XREF to: 004076c6 (UNCONDITIONAL_JUMP)  ; LAB_004076c6
    CMP dword ptr [0x005b7624],0x20     ; 0040771c | g_BitsPerPixel
        ;   Label: LAB_0040771c
    JNZ 0x00407731                      ; 00407723
        ;   XREF to: 00407731 (CONDITIONAL_JUMP)  ; LAB_00407731
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00407725 | g_ScanlineRenderFunc
    JMP 0x004076c6                      ; 0040772f
        ;   XREF to: 004076c6 (UNCONDITIONAL_JUMP)  ; LAB_004076c6
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00407731 | g_ScanlineRenderFunc
        ;   Label: LAB_00407731
    JMP 0x004076c6                      ; 0040773b
        ;   XREF to: 004076c6 (UNCONDITIONAL_JUMP)  ; LAB_004076c6

