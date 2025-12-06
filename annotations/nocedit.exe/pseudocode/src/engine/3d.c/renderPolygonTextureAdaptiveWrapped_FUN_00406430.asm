; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_renderPolygonTextureAdaptiveWrapped_FUN_00406430(SMRGLHeaderPrimitive * polygon_info)
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
    MOV EBP,dword ptr [0x00772a60]      ; 00406433 | uint g_ProcessedVertexOffset
    MOV EDI,dword ptr [ESP + 0x10]      ; 00406439
    LEA ESI,[EDI + 0x18]                ; 0040643d
    LEA EAX,[EDI + 0x8]                 ; 00406440
    PUSH EAX                            ; 00406443
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00406444 | int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00406449
    TEST EAX,EAX                        ; 0040644c
    JZ 0x004066a6                       ; 0040644e | LAB_004066a6
        ;   XREF to: 004066a6 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00406454
    MOV EDX,dword ptr [0x00772a74]      ; 00406455 | int g_TexturesDisabled
    MOV EBP,dword ptr [0x00772a60]      ; 0040645b | uint g_ProcessedVertexOffset
    TEST EDX,EDX                        ; 00406461
    JZ 0x00406524                       ; 00406463 | LAB_00406524
        ;   XREF to: 00406524 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 00406469 | BOOL g_MMXSupported
    JNZ 0x004064fd                      ; 00406470 | LAB_004064fd
        ;   XREF to: 004064fd (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00406476 | int g_BitsPerPixel
    JNZ 0x004064f1                      ; 0040647d | LAB_004064f1
        ;   XREF to: 004064f1 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 0040647f | RenderScanlineFunc * g_ScanlineRenderFunc
    XOR ECX,ECX                         ; 00406489
        ;   Label: LAB_00406489
    MOV dword ptr [0x00772a60],EBP      ; 0040648b | uint g_ProcessedVertexOffset
    MOV dword ptr [0x02d052a4],ECX      ; 00406491 | int g_RenderStateFlag2
    MOV dword ptr [0x02d052a0],ECX      ; 00406497 | int g_RenderStateFlags
        ;   Label: LAB_00406497
    MOV EBX,0x772a98                    ; 0040649d | int[24] g_ProcessedVertexIndices
        ;   Label: LAB_0040649d
    MOV EBP,dword ptr [0x00772a60]      ; 004064a2 | uint g_ProcessedVertexOffset
    MOV EAX,ESI                         ; 004064a8
    XOR ECX,ECX                         ; 004064aa
    MOV EDX,dword ptr [EDI + 0x4]       ; 004064ac
        ;   Label: LAB_004064ac
    LEA EDX,[EDX + EDX*0x2]             ; 004064af
    MOV dword ptr [0x00772a60],EBP      ; 004064b2 | uint g_ProcessedVertexOffset
    CMP ECX,EDX                         ; 004064b8
    JGE 0x00406694                      ; 004064ba | LAB_00406694
        ;   XREF to: 00406694 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 004064c0
    ADD EDX,EBP                         ; 004064c2
    MOV dword ptr [EBX],EDX             ; 004064c4 | int[24] g_ProcessedVertexIndices
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
    JMP 0x004064ac                      ; 004064ef | LAB_004064ac
        ;   XREF to: 004064ac (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b5322 ; 004064f1 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_004064f1
    JMP 0x00406489                      ; 004064fb | LAB_00406489
        ;   XREF to: 00406489 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 004064fd | int g_BitsPerPixel
        ;   Label: LAB_004064fd
    JNZ 0x00406515                      ; 00406504 | LAB_00406515
        ;   XREF to: 00406515 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00406506 | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x00406489                      ; 00406510 | LAB_00406489
        ;   XREF to: 00406489 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00406515 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00406515
    JMP 0x00406489                      ; 0040651f | LAB_00406489
        ;   XREF to: 00406489 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x00772a70],0x0      ; 00406524 | undefined4 DAT_00772a70
        ;   Label: LAB_00406524
    JNZ 0x00406602                      ; 0040652b | LAB_00406602
        ;   XREF to: 00406602 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 00406531 | BOOL g_MMXSupported
    JNZ 0x0040659a                      ; 00406538 | LAB_0040659a
        ;   XREF to: 0040659a (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 0040653a | int g_BitsPerPixel
    JNZ 0x0040658e                      ; 00406541 | LAB_0040658e
        ;   XREF to: 0040658e (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00406543 | RenderScanlineFunc * g_ScanlineRenderFunc
    CMP dword ptr [0x0066df80],0x0      ; 0040654d | int INT_0066df80
        ;   Label: LAB_0040654d
    JNZ 0x004065e8                      ; 00406554 | LAB_004065e8
        ;   XREF to: 004065e8 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 0040655a | BOOL g_MMXSupported
    JNZ 0x004065c7                      ; 00406561 | LAB_004065c7
        ;   XREF to: 004065c7 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00406563 | int g_BitsPerPixel
    JNZ 0x004065bb                      ; 0040656a | LAB_004065bb
        ;   XREF to: 004065bb (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 0040656c | RenderScanlineFunc * g_ScanlineRenderFunc
    XOR EDX,EDX                         ; 00406576
        ;   Label: LAB_00406576
    MOV dword ptr [0x02d052a4],EDX      ; 00406578 | int g_RenderStateFlag2
    MOV ECX,0xc1                        ; 0040657e
    MOV dword ptr [0x00772a60],EBP      ; 00406583 | uint g_ProcessedVertexOffset
    JMP 0x00406497                      ; 00406589 | LAB_00406497
        ;   XREF to: 00406497 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b5322 ; 0040658e | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_0040658e
    JMP 0x0040654d                      ; 00406598 | LAB_0040654d
        ;   XREF to: 0040654d (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 0040659a | int g_BitsPerPixel
        ;   Label: LAB_0040659a
    JNZ 0x004065af                      ; 004065a1 | LAB_004065af
        ;   XREF to: 004065af (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 004065a3 | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x0040654d                      ; 004065ad | LAB_0040654d
        ;   XREF to: 0040654d (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 004065af | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_004065af
    JMP 0x0040654d                      ; 004065b9 | LAB_0040654d
        ;   XREF to: 0040654d (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b5322 ; 004065bb | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_004065bb
    JMP 0x00406576                      ; 004065c5 | LAB_00406576
        ;   XREF to: 00406576 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 004065c7 | int g_BitsPerPixel
        ;   Label: LAB_004065c7
    JNZ 0x004065dc                      ; 004065ce | LAB_004065dc
        ;   XREF to: 004065dc (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 004065d0 | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x00406576                      ; 004065da | LAB_00406576
        ;   XREF to: 00406576 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 004065dc | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_004065dc
    JMP 0x00406576                      ; 004065e6 | LAB_00406576
        ;   XREF to: 00406576 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d052a4],0x1      ; 004065e8 | int g_RenderStateFlag2
        ;   Label: LAB_004065e8
    MOV ECX,0xc1                        ; 004065f2
    MOV dword ptr [0x00772a60],EBP      ; 004065f7 | uint g_ProcessedVertexOffset
    JMP 0x00406497                      ; 004065fd | LAB_00406497
        ;   XREF to: 00406497 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 00406602 | BOOL g_MMXSupported
        ;   Label: LAB_00406602
    JNZ 0x00406673                      ; 00406609 | LAB_00406673
        ;   XREF to: 00406673 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 0040660b | int g_BitsPerPixel
    JNZ 0x00406667                      ; 00406612 | LAB_00406667
        ;   XREF to: 00406667 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00406614 | RenderScanlineFunc * g_ScanlineRenderFunc
    MOV EAX,dword ptr [EDI + 0x10]      ; 0040661e
        ;   Label: LAB_0040661e
    MOV ECX,0xc0                        ; 00406621
    PUSH EAX                            ; 00406626
    MOV EDX,dword ptr [EDI + 0xc]       ; 00406627
    MOV dword ptr [0x02d052a0],ECX      ; 0040662a | int g_RenderStateFlags
    PUSH EDX                            ; 00406630
    MOV ECX,dword ptr [EDI + 0x8]       ; 00406631
    MOV EBX,0x1                         ; 00406634
    PUSH ECX                            ; 00406639
    MOV dword ptr [0x02d052a4],EBX      ; 0040663a | int g_RenderStateFlag2
    CALL engine_light.cpp_calculateLighting_FUN_00505780 ; 00406640 | int engine_light.cpp_calculateLighting_FUN_00505780(int normal_x, int normal_y, int normal_z)
        ;   XREF to: 00505780 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00406645
    MOV EBX,dword ptr [0x02d02574]      ; 00406648 | int g_CurrentLightingValue
    PUSH EBX                            ; 0040664e
    MOV EAX,[0x00772a5c]                ; 0040664f | int g_CurrentPolygonColor
    PUSH EAX                            ; 00406654
    CALL engine_3d.c_makeGrayscaleColor_FUN_004039c0 ; 00406655 | uint engine_3d.c_makeGrayscaleColor_FUN_004039c0(int intensity)
        ;   XREF to: 004039c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040665a
    MOV [0x02d02570],EAX                ; 0040665d | int g_ActiveRenderColor
    JMP 0x0040649d                      ; 00406662 | LAB_0040649d
        ;   XREF to: 0040649d (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00406667 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00406667
    JMP 0x0040661e                      ; 00406671 | LAB_0040661e
        ;   XREF to: 0040661e (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00406673 | int g_BitsPerPixel
        ;   Label: LAB_00406673
    JNZ 0x00406688                      ; 0040667a | LAB_00406688
        ;   XREF to: 00406688 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0040667c | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x0040661e                      ; 00406686 | LAB_0040661e
        ;   XREF to: 0040661e (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00406688 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00406688
    JMP 0x0040661e                      ; 00406692 | LAB_0040661e
        ;   XREF to: 0040661e (UNCONDITIONAL_JUMP)
    PUSH 0x772a98                       ; 00406694 | int[24] g_ProcessedVertexIndices
        ;   Label: LAB_00406694
    MOV ESI,dword ptr [EDI + 0x4]       ; 00406699
    PUSH ESI                            ; 0040669c
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 0040669d | void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004066a2
    POP EBX                             ; 004066a5
    MOV EDX,dword ptr [EDI + 0x4]       ; 004066a6
        ;   Label: LAB_004066a6
    LEA EAX,[EDX*0x4 + 0x0]             ; 004066a9
    SUB EAX,EDX                         ; 004066b0
    ADD EDI,0x18                        ; 004066b2
    SHL EAX,0x2                         ; 004066b5
    MOV EBP,dword ptr [0x00772a60]      ; 004066b8 | uint g_ProcessedVertexOffset
    ADD EAX,EDI                         ; 004066be
    POP EBP                             ; 004066c0
    POP EDI                             ; 004066c1
    POP ESI                             ; 004066c2
    RET                                 ; 004066c3

