; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedHardwareOp53_FUN_00407070(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   undefined4 DAT_006b0270
;   undefined4 DAT_006b0288
;   MainScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_rasterizePolygonHardware_FUN_00494260
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_clipper.c_clipAndRasterize_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407070
        ;   Label: engine_3d.c_renderPolygonSolidTexturedHardwareOp53_FUN_00407070
    PUSH ESI                            ; 00407071
    PUSH EDI                            ; 00407072
    PUSH EBP                            ; 00407073
    MOV ESI,dword ptr [ESP + 0x14]      ; 00407074
    MOV EDX,dword ptr [0x01c03948]      ; 00407078 | g_MMXSupported
    LEA EBX,[ESI + 0x18]                ; 0040707e
    TEST EDX,EDX                        ; 00407081
    JNZ 0x004070e4                      ; 00407083
        ;   XREF to: 004070e4 (CONDITIONAL_JUMP)  ; LAB_004070e4
    CMP dword ptr [0x005b7624],0x20     ; 00407085 | g_BitsPerPixel
    JNZ 0x004070d8                      ; 0040708c
        ;   XREF to: 004070d8 (CONDITIONAL_JUMP)  ; LAB_004070d8
    MOV dword ptr [0x01c00c7c],0x5300ec ; 0040708e | g_ScanlineRenderFunc
    MOV EDI,0x3                         ; 00407098
        ;   Label: LAB_00407098
    PUSH 0xffff                         ; 0040709d
    XOR EBP,EBP                         ; 004070a2
    MOV dword ptr [0x01c039a0],EDI      ; 004070a4 | g_RenderStateFlags
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 004070aa
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00408370(int alpha_color_value)
    MOV EAX,[0x006b0270]                ; 004070af | DAT_006b0270
    ADD ESP,0x4                         ; 004070b4
    MOV dword ptr [0x01c039a4],EBP      ; 004070b7 | g_VertexPreprocessMode
    TEST EAX,EAX                        ; 004070bd
    JZ 0x00407105                       ; 004070bf
        ;   XREF to: 00407105 (CONDITIONAL_JUMP)  ; LAB_00407105
    MOV ECX,dword ptr [ESI + 0x4]       ; 004070c1
    PUSH ECX                            ; 004070c4
    PUSH EBX                            ; 004070c5
    CALL engine_3d.c_rasterizePolygonHardware_FUN_00494260 ; 004070c6
        ;   XREF to: 00494260 (UNCONDITIONAL_CALL)  ; void engine_3d.c_rasterizePolygonHardware_FUN_00494260(SRenderVertex * * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004070cb
    MOV EAX,0x6b0288                    ; 004070ce | DAT_006b0288
    POP EBP                             ; 004070d3
    POP EDI                             ; 004070d4
    POP ESI                             ; 004070d5
    POP EBX                             ; 004070d6
    RET                                 ; 004070d7
    MOV dword ptr [0x01c00c7c],0x530322 ; 004070d8 | g_ScanlineRenderFunc
        ;   Label: LAB_004070d8
    JMP 0x00407098                      ; 004070e2
        ;   XREF to: 00407098 (UNCONDITIONAL_JUMP)  ; LAB_00407098
    CMP dword ptr [0x005b7624],0x20     ; 004070e4 | g_BitsPerPixel
        ;   Label: LAB_004070e4
    JNZ 0x004070f9                      ; 004070eb
        ;   XREF to: 004070f9 (CONDITIONAL_JUMP)  ; LAB_004070f9
    MOV dword ptr [0x01c00c7c],0x52f031 ; 004070ed | g_ScanlineRenderFunc
    JMP 0x00407098                      ; 004070f7
        ;   XREF to: 00407098 (UNCONDITIONAL_JUMP)  ; LAB_00407098
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004070f9 | g_ScanlineRenderFunc
        ;   Label: LAB_004070f9
    JMP 0x00407098                      ; 00407103
        ;   XREF to: 00407098 (UNCONDITIONAL_JUMP)  ; LAB_00407098
    PUSH EBX                            ; 00407105
        ;   Label: LAB_00407105
    MOV EDX,dword ptr [ESI + 0x4]       ; 00407106
    PUSH EDX                            ; 00407109
    CALL engine_clipper.c_clipAndRasterize_FUN_00432cd0 ; 0040710a
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00432cd0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0040710f
    MOV EAX,0x6b0288                    ; 00407112 | DAT_006b0288
    POP EBP                             ; 00407117
    POP EDI                             ; 00407118
    POP ESI                             ; 00407119
    POP EBX                             ; 0040711a
    RET                                 ; 0040711b

