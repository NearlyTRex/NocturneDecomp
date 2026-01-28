; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTextureAdaptiveWrapped_FUN_00406430(SMRGLHeaderPrimitive *polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; Referenced Globals:
;   int INT_0066df80 = 0x1
;   int g_BitsPerPixel = 0x8
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   int g_CurrentPolygonColor
;   uint g_ProcessedVertexOffset
;   undefined4 DAT_00772a70
;   int g_TexturesDisabled
;   int[24] g_ProcessedVertexIndices
;   undefined4 DAT_00772a9c
;   int g_ActiveRenderColor
;   int g_CurrentLightingValue
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   int g_RenderStateFlags
;   ... and 1 more
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_3d.c_makeGrayscaleColor_FUN_004039c0
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_light.cpp_calculateLighting_FUN_00505780
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00406430
        ;   Label: engine_3d.c_renderPolygonTextureAdaptiveWrapped_FUN_00406430
    PUSH EDI                            ; 00406431
    PUSH EBP                            ; 00406432
    MOV EBP,dword ptr [0x00772a60]      ; 00406433 | g_ProcessedVertexOffset
    MOV EDI,dword ptr [ESP + 0x10]      ; 00406439
    LEA ESI,[EDI + 0x18]                ; 0040643d
    LEA EAX,[EDI + 0x8]                 ; 00406440
    PUSH EAX                            ; 00406443
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00406444
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406449
    TEST EAX,EAX                        ; 0040644c
    JZ 0x004066a6                       ; 0040644e
        ;   XREF to: 004066a6 (CONDITIONAL_JUMP)  ; LAB_004066a6
    PUSH EBX                            ; 00406454
    MOV EDX,dword ptr [0x00772a74]      ; 00406455 | g_TexturesDisabled
    MOV EBP,dword ptr [0x00772a60]      ; 0040645b | g_ProcessedVertexOffset
    TEST EDX,EDX                        ; 00406461
    JZ 0x00406524                       ; 00406463
        ;   XREF to: 00406524 (CONDITIONAL_JUMP)  ; LAB_00406524
    CMP dword ptr [0x02d05248],0x0      ; 00406469 | g_MMXSupported
    JNZ 0x004064fd                      ; 00406470
        ;   XREF to: 004064fd (CONDITIONAL_JUMP)  ; LAB_004064fd
    CMP dword ptr [0x0067939c],0x20     ; 00406476 | g_BitsPerPixel
    JNZ 0x004064f1                      ; 0040647d
        ;   XREF to: 004064f1 (CONDITIONAL_JUMP)  ; LAB_004064f1
    MOV dword ptr [0x02d0257c],0x5b50ec ; 0040647f | g_ScanlineRenderFunc
    XOR ECX,ECX                         ; 00406489
        ;   Label: LAB_00406489
    MOV dword ptr [0x00772a60],EBP      ; 0040648b | g_ProcessedVertexOffset
    MOV dword ptr [0x02d052a4],ECX      ; 00406491 | g_RenderStateFlag2
    MOV dword ptr [0x02d052a0],ECX      ; 00406497 | g_RenderStateFlags
        ;   Label: LAB_00406497
    MOV EBX,0x772a98                    ; 0040649d | g_ProcessedVertexIndices
        ;   Label: LAB_0040649d
    MOV EBP,dword ptr [0x00772a60]      ; 004064a2 | g_ProcessedVertexOffset
    MOV EAX,ESI                         ; 004064a8
    XOR ECX,ECX                         ; 004064aa
    MOV EDX,dword ptr [EDI + 0x4]       ; 004064ac
        ;   Label: LAB_004064ac
    LEA EDX,[EDX + EDX*0x2]             ; 004064af
    MOV dword ptr [0x00772a60],EBP      ; 004064b2 | g_ProcessedVertexOffset
    CMP ECX,EDX                         ; 004064b8
    JGE 0x00406694                      ; 004064ba
        ;   XREF to: 00406694 (CONDITIONAL_JUMP)  ; LAB_00406694
    MOV EDX,dword ptr [EAX]             ; 004064c0
    ADD EDX,EBP                         ; 004064c2
    MOV dword ptr [EBX],EDX             ; 004064c4 | g_ProcessedVertexIndices | DAT_00772a9c
    MOV EDX,dword ptr [EAX]             ; 004064c6
    ADD EDX,EBP                         ; 004064c8
    IMUL ESI,EDX,0x30                   ; 004064ca
    MOV EDX,dword ptr [EAX + 0x4]       ; 004064cd
    MOV dword ptr [ESI + 0x68802c],EDX  ; 004064d0 | g_RenderVertexBuffer[0].u
    MOV EDX,dword ptr [EAX]             ; 004064d6
    ADD EDX,EBP                         ; 004064d8
    IMUL ESI,EDX,0x30                   ; 004064da
    ADD EAX,0xc                         ; 004064dd
    ADD EBX,0x4                         ; 004064e0 | DAT_00772a9c
    MOV EDX,dword ptr [EAX + -0x4]      ; 004064e3
    ADD ECX,0x3                         ; 004064e6
    MOV dword ptr [ESI + 0x688030],EDX  ; 004064e9 | g_RenderVertexBuffer[0].v
    JMP 0x004064ac                      ; 004064ef
        ;   XREF to: 004064ac (UNCONDITIONAL_JUMP)  ; LAB_004064ac
    MOV dword ptr [0x02d0257c],0x5b5322 ; 004064f1 | g_ScanlineRenderFunc
        ;   Label: LAB_004064f1
    JMP 0x00406489                      ; 004064fb
        ;   XREF to: 00406489 (UNCONDITIONAL_JUMP)  ; LAB_00406489
    CMP dword ptr [0x0067939c],0x20     ; 004064fd | g_BitsPerPixel
        ;   Label: LAB_004064fd
    JNZ 0x00406515                      ; 00406504
        ;   XREF to: 00406515 (CONDITIONAL_JUMP)  ; LAB_00406515
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00406506 | g_ScanlineRenderFunc
    JMP 0x00406489                      ; 00406510
        ;   XREF to: 00406489 (UNCONDITIONAL_JUMP)  ; LAB_00406489
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00406515 | g_ScanlineRenderFunc
        ;   Label: LAB_00406515
    JMP 0x00406489                      ; 0040651f
        ;   XREF to: 00406489 (UNCONDITIONAL_JUMP)  ; LAB_00406489
    CMP dword ptr [0x00772a70],0x0      ; 00406524 | DAT_00772a70
        ;   Label: LAB_00406524
    JNZ 0x00406602                      ; 0040652b
        ;   XREF to: 00406602 (CONDITIONAL_JUMP)  ; LAB_00406602
    CMP dword ptr [0x02d05248],0x0      ; 00406531 | g_MMXSupported
    JNZ 0x0040659a                      ; 00406538
        ;   XREF to: 0040659a (CONDITIONAL_JUMP)  ; LAB_0040659a
    CMP dword ptr [0x0067939c],0x20     ; 0040653a | g_BitsPerPixel
    JNZ 0x0040658e                      ; 00406541
        ;   XREF to: 0040658e (CONDITIONAL_JUMP)  ; LAB_0040658e
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00406543 | g_ScanlineRenderFunc
    CMP dword ptr [0x0066df80],0x0      ; 0040654d | INT_0066df80
        ;   Label: LAB_0040654d
    JNZ 0x004065e8                      ; 00406554
        ;   XREF to: 004065e8 (CONDITIONAL_JUMP)  ; LAB_004065e8
    CMP dword ptr [0x02d05248],0x0      ; 0040655a | g_MMXSupported
    JNZ 0x004065c7                      ; 00406561
        ;   XREF to: 004065c7 (CONDITIONAL_JUMP)  ; LAB_004065c7
    CMP dword ptr [0x0067939c],0x20     ; 00406563 | g_BitsPerPixel
    JNZ 0x004065bb                      ; 0040656a
        ;   XREF to: 004065bb (CONDITIONAL_JUMP)  ; LAB_004065bb
    MOV dword ptr [0x02d0257c],0x5b50ec ; 0040656c | g_ScanlineRenderFunc
    XOR EDX,EDX                         ; 00406576
        ;   Label: LAB_00406576
    MOV dword ptr [0x02d052a4],EDX      ; 00406578 | g_RenderStateFlag2
    MOV ECX,0xc1                        ; 0040657e
    MOV dword ptr [0x00772a60],EBP      ; 00406583 | g_ProcessedVertexOffset
    JMP 0x00406497                      ; 00406589
        ;   XREF to: 00406497 (UNCONDITIONAL_JUMP)  ; LAB_00406497
    MOV dword ptr [0x02d0257c],0x5b5322 ; 0040658e | g_ScanlineRenderFunc
        ;   Label: LAB_0040658e
    JMP 0x0040654d                      ; 00406598
        ;   XREF to: 0040654d (UNCONDITIONAL_JUMP)  ; LAB_0040654d
    CMP dword ptr [0x0067939c],0x20     ; 0040659a | g_BitsPerPixel
        ;   Label: LAB_0040659a
    JNZ 0x004065af                      ; 004065a1
        ;   XREF to: 004065af (CONDITIONAL_JUMP)  ; LAB_004065af
    MOV dword ptr [0x02d0257c],0x5b4031 ; 004065a3 | g_ScanlineRenderFunc
    JMP 0x0040654d                      ; 004065ad
        ;   XREF to: 0040654d (UNCONDITIONAL_JUMP)  ; LAB_0040654d
    MOV dword ptr [0x02d0257c],0x5b4823 ; 004065af | g_ScanlineRenderFunc
        ;   Label: LAB_004065af
    JMP 0x0040654d                      ; 004065b9
        ;   XREF to: 0040654d (UNCONDITIONAL_JUMP)  ; LAB_0040654d
    MOV dword ptr [0x02d0257c],0x5b5322 ; 004065bb | g_ScanlineRenderFunc
        ;   Label: LAB_004065bb
    JMP 0x00406576                      ; 004065c5
        ;   XREF to: 00406576 (UNCONDITIONAL_JUMP)  ; LAB_00406576
    CMP dword ptr [0x0067939c],0x20     ; 004065c7 | g_BitsPerPixel
        ;   Label: LAB_004065c7
    JNZ 0x004065dc                      ; 004065ce
        ;   XREF to: 004065dc (CONDITIONAL_JUMP)  ; LAB_004065dc
    MOV dword ptr [0x02d0257c],0x5b4031 ; 004065d0 | g_ScanlineRenderFunc
    JMP 0x00406576                      ; 004065da
        ;   XREF to: 00406576 (UNCONDITIONAL_JUMP)  ; LAB_00406576
    MOV dword ptr [0x02d0257c],0x5b4823 ; 004065dc | g_ScanlineRenderFunc
        ;   Label: LAB_004065dc
    JMP 0x00406576                      ; 004065e6
        ;   XREF to: 00406576 (UNCONDITIONAL_JUMP)  ; LAB_00406576
    MOV dword ptr [0x02d052a4],0x1      ; 004065e8 | g_RenderStateFlag2
        ;   Label: LAB_004065e8
    MOV ECX,0xc1                        ; 004065f2
    MOV dword ptr [0x00772a60],EBP      ; 004065f7 | g_ProcessedVertexOffset
    JMP 0x00406497                      ; 004065fd
        ;   XREF to: 00406497 (UNCONDITIONAL_JUMP)  ; LAB_00406497
    CMP dword ptr [0x02d05248],0x0      ; 00406602 | g_MMXSupported
        ;   Label: LAB_00406602
    JNZ 0x00406673                      ; 00406609
        ;   XREF to: 00406673 (CONDITIONAL_JUMP)  ; LAB_00406673
    CMP dword ptr [0x0067939c],0x20     ; 0040660b | g_BitsPerPixel
    JNZ 0x00406667                      ; 00406612
        ;   XREF to: 00406667 (CONDITIONAL_JUMP)  ; LAB_00406667
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00406614 | g_ScanlineRenderFunc
    MOV EAX,dword ptr [EDI + 0x10]      ; 0040661e
        ;   Label: LAB_0040661e
    MOV ECX,0xc0                        ; 00406621
    PUSH EAX                            ; 00406626
    MOV EDX,dword ptr [EDI + 0xc]       ; 00406627
    MOV dword ptr [0x02d052a0],ECX      ; 0040662a | g_RenderStateFlags
    PUSH EDX                            ; 00406630
    MOV ECX,dword ptr [EDI + 0x8]       ; 00406631
    MOV EBX,0x1                         ; 00406634
    PUSH ECX                            ; 00406639
    MOV dword ptr [0x02d052a4],EBX      ; 0040663a | g_RenderStateFlag2
    CALL engine_light.cpp_calculateLighting_FUN_00505780 ; 00406640
        ;   XREF to: 00505780 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_00505780(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 00406645
    MOV EBX,dword ptr [0x02d02574]      ; 00406648 | g_CurrentLightingValue
    PUSH EBX                            ; 0040664e
    MOV EAX,[0x00772a5c]                ; 0040664f | g_CurrentPolygonColor
    PUSH EAX                            ; 00406654
    CALL engine_3d.c_makeGrayscaleColor_FUN_004039c0 ; 00406655
        ;   XREF to: 004039c0 (UNCONDITIONAL_CALL)  ; uint engine_3d.c_makeGrayscaleColor_FUN_004039c0(int intensity)
    ADD ESP,0x8                         ; 0040665a
    MOV [0x02d02570],EAX                ; 0040665d | g_ActiveRenderColor
    JMP 0x0040649d                      ; 00406662
        ;   XREF to: 0040649d (UNCONDITIONAL_JUMP)  ; LAB_0040649d
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00406667 | g_ScanlineRenderFunc
        ;   Label: LAB_00406667
    JMP 0x0040661e                      ; 00406671
        ;   XREF to: 0040661e (UNCONDITIONAL_JUMP)  ; LAB_0040661e
    CMP dword ptr [0x0067939c],0x20     ; 00406673 | g_BitsPerPixel
        ;   Label: LAB_00406673
    JNZ 0x00406688                      ; 0040667a
        ;   XREF to: 00406688 (CONDITIONAL_JUMP)  ; LAB_00406688
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0040667c | g_ScanlineRenderFunc
    JMP 0x0040661e                      ; 00406686
        ;   XREF to: 0040661e (UNCONDITIONAL_JUMP)  ; LAB_0040661e
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00406688 | g_ScanlineRenderFunc
        ;   Label: LAB_00406688
    JMP 0x0040661e                      ; 00406692
        ;   XREF to: 0040661e (UNCONDITIONAL_JUMP)  ; LAB_0040661e
    PUSH 0x772a98                       ; 00406694 | g_ProcessedVertexIndices
        ;   Label: LAB_00406694
    MOV ESI,dword ptr [EDI + 0x4]       ; 00406699
    PUSH ESI                            ; 0040669c
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 0040669d
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004066a2
    POP EBX                             ; 004066a5
    MOV EDX,dword ptr [EDI + 0x4]       ; 004066a6
        ;   Label: LAB_004066a6
    LEA EAX,[EDX*0x4 + 0x0]             ; 004066a9
    SUB EAX,EDX                         ; 004066b0
    ADD EDI,0x18                        ; 004066b2
    SHL EAX,0x2                         ; 004066b5
    MOV EBP,dword ptr [0x00772a60]      ; 004066b8 | g_ProcessedVertexOffset
    ADD EAX,EDI                         ; 004066be
    POP EBP                             ; 004066c0
    POP EDI                             ; 004066c1
    POP ESI                             ; 004066c2
    RET                                 ; 004066c3

