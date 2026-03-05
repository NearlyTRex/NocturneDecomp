; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturePerspectiveCorrect_FUN_00406290(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_CurrentTextureDimension = 0x100
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   int[24] g_ProcessedVertexIndices
;   undefined4 DAT_00772a9c
;   undefined4 DAT_00fbffff
;   undefined4 DAT_00feffff
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00406290
        ;   Label: engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_00406290
    MOV EAX,dword ptr [ESP + 0x8]       ; 00406291
    ADD EAX,0x8                         ; 00406295
    MOV EBP,dword ptr [ESP + 0x8]       ; 00406298
    PUSH EAX                            ; 0040629c
    ADD EBP,0x18                        ; 0040629d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 004062a0
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 004062a5
    TEST EAX,EAX                        ; 004062a8
    JZ 0x00406405                       ; 004062aa
        ;   XREF to: 00406405 (CONDITIONAL_JUMP)  ; LAB_00406405
    CMP dword ptr [0x02d05248],0x0      ; 004062b0 | g_MMXSupported
    JNZ 0x0040638b                      ; 004062b7
        ;   XREF to: 0040638b (CONDITIONAL_JUMP)  ; LAB_0040638b
    CMP dword ptr [0x0067939c],0x20     ; 004062bd | g_BitsPerPixel
    JNZ 0x0040637c                      ; 004062c4
        ;   XREF to: 0040637c (CONDITIONAL_JUMP)  ; LAB_0040637c
    MOV dword ptr [0x02d0257c],0x5b50ec ; 004062ca | g_ScanlineRenderFunc
    PUSH EDI                            ; 004062d4
        ;   Label: LAB_004062d4
    PUSH ESI                            ; 004062d5
    PUSH EBX                            ; 004062d6
    MOV ECX,0xc3                        ; 004062d7
    PUSH 0xffff                         ; 004062dc
    MOV EBX,0x1                         ; 004062e1
    XOR EDI,EDI                         ; 004062e6
    XOR ESI,ESI                         ; 004062e8
    MOV dword ptr [0x02d052a0],ECX      ; 004062ea | g_RenderStateFlags
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 004062f0
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 004062f5
    MOV dword ptr [0x02d052a4],EBX      ; 004062f8 | g_RenderStateFlag2
    MOV ECX,EBP                         ; 004062fe
    XOR EBX,EBX                         ; 00406300
    MOV EAX,dword ptr [ESP + 0x14]      ; 00406302
        ;   Label: LAB_00406302
    MOV EAX,dword ptr [EAX + 0x4]       ; 00406306
    LEA EAX,[EAX + EAX*0x2]             ; 00406309
    CMP ESI,EAX                         ; 0040630c
    JGE 0x004063f4                      ; 0040630e
        ;   XREF to: 004063f4 (CONDITIONAL_JUMP)  ; LAB_004063f4
    MOV EAX,dword ptr [ECX]             ; 00406314
    MOV dword ptr [EBX + 0x772a98],EAX  ; 00406316 | g_ProcessedVertexIndices | DAT_00772a9c
    MOV EBP,dword ptr [0x006793a4]      ; 0040631c | g_CurrentTextureDimension
    MOV EAX,dword ptr [ECX + 0x4]       ; 00406322
    MOV EDX,dword ptr [ECX + 0x8]       ; 00406325
    CMP EBP,0x40                        ; 00406328
    JG 0x004063b9                       ; 0040632b
        ;   XREF to: 004063b9 (CONDITIONAL_JUMP)  ; LAB_004063b9
    CMP EAX,0x40000                     ; 00406331
    JGE 0x0040633d                      ; 00406336
        ;   XREF to: 0040633d (CONDITIONAL_JUMP)  ; LAB_0040633d
    MOV EAX,0x40000                     ; 00406338
    CMP EDX,0x40000                     ; 0040633d
        ;   Label: LAB_0040633d
    JGE 0x0040634a                      ; 00406343
        ;   XREF to: 0040634a (CONDITIONAL_JUMP)  ; LAB_0040634a
    MOV EDX,0x40000                     ; 00406345
    CMP EAX,0xfbffff                    ; 0040634a | DAT_00fbffff
        ;   Label: LAB_0040634a
    JLE 0x00406356                      ; 0040634f
        ;   XREF to: 00406356 (CONDITIONAL_JUMP)  ; LAB_00406356
    MOV EAX,0xfbffff                    ; 00406351 | DAT_00fbffff
    CMP EDX,0xfbffff                    ; 00406356 | DAT_00fbffff
        ;   Label: LAB_00406356
    JG 0x004063b2                       ; 0040635c
        ;   XREF to: 004063b2 (CONDITIONAL_JUMP)  ; LAB_004063b2
    IMUL EBP,dword ptr [ECX],0x30       ; 0040635e
        ;   Label: LAB_0040635e
    MOV dword ptr [EBP + 0x68802c],EAX  ; 00406361 | g_RenderVertexBuffer[0].u | DAT_00fbffff
    IMUL EAX,dword ptr [ECX],0x30       ; 00406367
    ADD EBX,0x4                         ; 0040636a
    INC EDI                             ; 0040636d
    ADD ESI,0x3                         ; 0040636e
    ADD ECX,0xc                         ; 00406371
    MOV dword ptr [EAX + 0x688030],EDX  ; 00406374 | g_RenderVertexBuffer[0].v | DAT_00fbffff | DAT_00feffff
    JMP 0x00406302                      ; 0040637a
        ;   XREF to: 00406302 (UNCONDITIONAL_JUMP)  ; LAB_00406302
    MOV dword ptr [0x02d0257c],0x5b5322 ; 0040637c | g_ScanlineRenderFunc
        ;   Label: LAB_0040637c
    JMP 0x004062d4                      ; 00406386
        ;   XREF to: 004062d4 (UNCONDITIONAL_JUMP)  ; LAB_004062d4
    CMP dword ptr [0x0067939c],0x20     ; 0040638b | g_BitsPerPixel
        ;   Label: LAB_0040638b
    JNZ 0x004063a3                      ; 00406392
        ;   XREF to: 004063a3 (CONDITIONAL_JUMP)  ; LAB_004063a3
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00406394 | g_ScanlineRenderFunc
    JMP 0x004062d4                      ; 0040639e
        ;   XREF to: 004062d4 (UNCONDITIONAL_JUMP)  ; LAB_004062d4
    MOV dword ptr [0x02d0257c],0x5b4823 ; 004063a3 | g_ScanlineRenderFunc
        ;   Label: LAB_004063a3
    JMP 0x004062d4                      ; 004063ad
        ;   XREF to: 004062d4 (UNCONDITIONAL_JUMP)  ; LAB_004062d4
    MOV EDX,0xfbffff                    ; 004063b2 | DAT_00fbffff
        ;   Label: LAB_004063b2
    JMP 0x0040635e                      ; 004063b7
        ;   XREF to: 0040635e (UNCONDITIONAL_JUMP)  ; LAB_0040635e
    CMP EAX,0x10000                     ; 004063b9
        ;   Label: LAB_004063b9
    JGE 0x004063c5                      ; 004063be
        ;   XREF to: 004063c5 (CONDITIONAL_JUMP)  ; LAB_004063c5
    MOV EAX,0x10000                     ; 004063c0
    CMP EDX,0x10000                     ; 004063c5
        ;   Label: LAB_004063c5
    JGE 0x004063d2                      ; 004063cb
        ;   XREF to: 004063d2 (CONDITIONAL_JUMP)  ; LAB_004063d2
    MOV EDX,0x10000                     ; 004063cd
    CMP EAX,0xfeffff                    ; 004063d2 | DAT_00feffff
        ;   Label: LAB_004063d2
    JLE 0x004063de                      ; 004063d7
        ;   XREF to: 004063de (CONDITIONAL_JUMP)  ; LAB_004063de
    MOV EAX,0xfeffff                    ; 004063d9 | DAT_00feffff
    CMP EDX,0xfeffff                    ; 004063de | DAT_00feffff
        ;   Label: LAB_004063de
    JLE 0x0040635e                      ; 004063e4
        ;   XREF to: 0040635e (CONDITIONAL_JUMP)  ; LAB_0040635e
    MOV EDX,0xfeffff                    ; 004063ea | DAT_00feffff
    JMP 0x0040635e                      ; 004063ef
        ;   XREF to: 0040635e (UNCONDITIONAL_JUMP)  ; LAB_0040635e
    PUSH 0x772a98                       ; 004063f4 | g_ProcessedVertexIndices
        ;   Label: LAB_004063f4
    PUSH EDI                            ; 004063f9
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 004063fa
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004063ff
    POP EBX                             ; 00406402
    POP ESI                             ; 00406403
    POP EDI                             ; 00406404
    MOV EDX,dword ptr [ESP + 0x8]       ; 00406405
        ;   Label: LAB_00406405
    MOV EDX,dword ptr [EDX + 0x4]       ; 00406409
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040640c
    SUB EAX,EDX                         ; 00406413
    MOV EDX,dword ptr [ESP + 0x8]       ; 00406415
    SHL EAX,0x2                         ; 00406419
    ADD EDX,0x18                        ; 0040641c
    ADD EAX,EDX                         ; 0040641f
    POP EBP                             ; 00406421
    RET                                 ; 00406422

