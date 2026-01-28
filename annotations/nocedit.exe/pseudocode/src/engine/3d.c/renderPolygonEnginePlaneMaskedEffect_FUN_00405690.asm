; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690(SMRGLHeaderPrimitive *polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; XREF[1]:
;   engine_3d.c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0 at 00406f0c
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_AdvancedClippingEnabled
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_clipper.c_clipPolygonToViewport_FUN_00438420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405690
        ;   Label: engine_3d.c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690
    PUSH ESI                            ; 00405691
    PUSH EBP                            ; 00405692
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405693
    LEA ESI,[EBX + 0x18]                ; 00405697
    LEA EAX,[EBX + 0x8]                 ; 0040569a
    PUSH EAX                            ; 0040569d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0040569e
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 004056a3
    TEST EAX,EAX                        ; 004056a6
    JZ 0x004056f5                       ; 004056a8
        ;   XREF to: 004056f5 (CONDITIONAL_JUMP)  ; LAB_004056f5
    CMP dword ptr [0x02d02578],0x0      ; 004056aa | g_AdvancedClippingEnabled
    JZ 0x00405731                       ; 004056b1
        ;   XREF to: 00405731 (CONDITIONAL_JUMP)  ; LAB_00405731
    CMP dword ptr [0x02d05248],0x0      ; 004056b7 | g_MMXSupported
    JNZ 0x00405710                      ; 004056be
        ;   XREF to: 00405710 (CONDITIONAL_JUMP)  ; LAB_00405710
    CMP dword ptr [0x0067939c],0x20     ; 004056c0 | g_BitsPerPixel
    JNZ 0x00405704                      ; 004056c7
        ;   XREF to: 00405704 (CONDITIONAL_JUMP)  ; LAB_00405704
    MOV dword ptr [0x02d0257c],0x5b50ec ; 004056c9 | g_ScanlineRenderFunc
    MOV EBP,0xd                         ; 004056d3
        ;   Label: LAB_004056d3
    PUSH ESI                            ; 004056d8
    MOV EDX,dword ptr [EBX + 0x4]       ; 004056d9
    MOV EAX,0x4                         ; 004056dc
    PUSH EDX                            ; 004056e1
    MOV dword ptr [0x02d052a0],EBP      ; 004056e2 | g_RenderStateFlags
    MOV [0x02d052a4],EAX                ; 004056e8 | g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 004056ed
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004056f2
    MOV ESI,dword ptr [EBX + 0x4]       ; 004056f5
        ;   Label: LAB_004056f5
    LEA EAX,[EBX + 0x18]                ; 004056f8
    SHL ESI,0x2                         ; 004056fb
    ADD EAX,ESI                         ; 004056fe
    POP EBP                             ; 00405700
    POP ESI                             ; 00405701
    POP EBX                             ; 00405702
    RET                                 ; 00405703
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00405704 | g_ScanlineRenderFunc
        ;   Label: LAB_00405704
    JMP 0x004056d3                      ; 0040570e
        ;   XREF to: 004056d3 (UNCONDITIONAL_JUMP)  ; LAB_004056d3
    CMP dword ptr [0x0067939c],0x20     ; 00405710 | g_BitsPerPixel
        ;   Label: LAB_00405710
    JNZ 0x00405725                      ; 00405717
        ;   XREF to: 00405725 (CONDITIONAL_JUMP)  ; LAB_00405725
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00405719 | g_ScanlineRenderFunc
    JMP 0x004056d3                      ; 00405723
        ;   XREF to: 004056d3 (UNCONDITIONAL_JUMP)  ; LAB_004056d3
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00405725 | g_ScanlineRenderFunc
        ;   Label: LAB_00405725
    JMP 0x004056d3                      ; 0040572f
        ;   XREF to: 004056d3 (UNCONDITIONAL_JUMP)  ; LAB_004056d3
    CMP dword ptr [0x02d05248],0x0      ; 00405731 | g_MMXSupported
        ;   Label: LAB_00405731
    JNZ 0x00405787                      ; 00405738
        ;   XREF to: 00405787 (CONDITIONAL_JUMP)  ; LAB_00405787
    CMP dword ptr [0x0067939c],0x20     ; 0040573a | g_BitsPerPixel
    JNZ 0x0040577b                      ; 00405741
        ;   XREF to: 0040577b (CONDITIONAL_JUMP)  ; LAB_0040577b
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00405743 | g_ScanlineRenderFunc
    MOV EBP,0x20d                       ; 0040574d
        ;   Label: LAB_0040574d
    PUSH ESI                            ; 00405752
    MOV EDX,dword ptr [EBX + 0x4]       ; 00405753
    XOR EAX,EAX                         ; 00405756
    PUSH EDX                            ; 00405758
    MOV dword ptr [0x02d052a0],EBP      ; 00405759 | g_RenderStateFlags
    MOV [0x02d052a4],EAX                ; 0040575f | g_RenderStateFlag2
    CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420 ; 00405764
        ;   XREF to: 00438420 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_00438420(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405769
    MOV ESI,dword ptr [EBX + 0x4]       ; 0040576c
    LEA EAX,[EBX + 0x18]                ; 0040576f
    SHL ESI,0x2                         ; 00405772
    ADD EAX,ESI                         ; 00405775
    POP EBP                             ; 00405777
    POP ESI                             ; 00405778
    POP EBX                             ; 00405779
    RET                                 ; 0040577a
    MOV dword ptr [0x02d0257c],0x5b5322 ; 0040577b | g_ScanlineRenderFunc
        ;   Label: LAB_0040577b
    JMP 0x0040574d                      ; 00405785
        ;   XREF to: 0040574d (UNCONDITIONAL_JUMP)  ; LAB_0040574d
    CMP dword ptr [0x0067939c],0x20     ; 00405787 | g_BitsPerPixel
        ;   Label: LAB_00405787
    JNZ 0x0040579c                      ; 0040578e
        ;   XREF to: 0040579c (CONDITIONAL_JUMP)  ; LAB_0040579c
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00405790 | g_ScanlineRenderFunc
    JMP 0x0040574d                      ; 0040579a
        ;   XREF to: 0040574d (UNCONDITIONAL_JUMP)  ; LAB_0040574d
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0040579c | g_ScanlineRenderFunc
        ;   Label: LAB_0040579c
    JMP 0x0040574d                      ; 004057a6
        ;   XREF to: 0040574d (UNCONDITIONAL_JUMP)  ; LAB_0040574d

