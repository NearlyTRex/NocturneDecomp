; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   int[24] g_ProcessedVertexIndices
;   undefined4 DAT_00772a9c
;   int g_CurrentLightingValue
;   int g_AdvancedClippingEnabled
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_clipper.c_clipPolygonToViewport_FUN_00438420
;   engine_light.cpp_calculateLighting_FUN_00505780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407720
        ;   Label: engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720
    PUSH ESI                            ; 00407721
    PUSH EDI                            ; 00407722
    PUSH EBP                            ; 00407723
    MOV EDI,dword ptr [ESP + 0x14]      ; 00407724
    MOV EBX,dword ptr [ESP + 0x18]      ; 00407728
    LEA EAX,[EDI + 0x8]                 ; 0040772c
    PUSH EAX                            ; 0040772f
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00407730
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00407735
    TEST EAX,EAX                        ; 00407738
    JZ 0x004077fa                       ; 0040773a
        ;   XREF to: 004077fa (CONDITIONAL_JUMP)  ; LAB_004077fa
    CMP dword ptr [0x02d05248],0x0      ; 00407740 | g_MMXSupported
    JNZ 0x0040780e                      ; 00407747
        ;   XREF to: 0040780e (CONDITIONAL_JUMP)  ; LAB_0040780e
    CMP dword ptr [0x0067939c],0x20     ; 0040774d | g_BitsPerPixel
    JNZ 0x004077ff                      ; 00407754
        ;   XREF to: 004077ff (CONDITIONAL_JUMP)  ; LAB_004077ff
    MOV dword ptr [0x02d0257c],0x5b50ec ; 0040775a | g_ScanlineRenderFunc
    MOV dword ptr [0x02d052a0],EBX      ; 00407764 | g_RenderStateFlags
        ;   Label: LAB_00407764
    TEST BL,0x10                        ; 0040776a
    JZ 0x00407788                       ; 0040776d
        ;   XREF to: 00407788 (CONDITIONAL_JUMP)  ; LAB_00407788
    MOV ESI,dword ptr [EDI + 0x10]      ; 0040776f
    PUSH ESI                            ; 00407772
    MOV EBP,dword ptr [EDI + 0xc]       ; 00407773
    PUSH EBP                            ; 00407776
    MOV EAX,dword ptr [EDI + 0x8]       ; 00407777
    PUSH EAX                            ; 0040777a
    CALL engine_light.cpp_calculateLighting_FUN_00505780 ; 0040777b
        ;   XREF to: 00505780 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_00505780(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 00407780
    MOV [0x02d02574],EAX                ; 00407783 | g_CurrentLightingValue
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00407788
        ;   Label: LAB_00407788
    TEST EDX,EDX                        ; 0040778c
    JZ 0x00407835                       ; 0040778e
        ;   XREF to: 00407835 (CONDITIONAL_JUMP)  ; LAB_00407835
    MOV dword ptr [0x02d052a4],0x5      ; 00407794 | g_RenderStateFlag2
    MOV EBP,dword ptr [EDI + 0x4]       ; 0040779e
        ;   Label: LAB_0040779e
    XOR ECX,ECX                         ; 004077a1
    TEST EBP,EBP                        ; 004077a3
    JLE 0x004077e0                      ; 004077a5
        ;   XREF to: 004077e0 (CONDITIONAL_JUMP)  ; LAB_004077e0
    MOV EAX,EDI                         ; 004077a7
    XOR EDX,EDX                         ; 004077a9
    MOV EBX,dword ptr [EAX + 0x18]      ; 004077ab
        ;   Label: LAB_004077ab
    MOV dword ptr [EDX + 0x772a98],EBX  ; 004077ae | g_ProcessedVertexIndices | DAT_00772a9c
    IMUL EBX,EBX,0x30                   ; 004077b4
    MOV ESI,dword ptr [EAX + 0x1c]      ; 004077b7
    MOV dword ptr [EBX + 0x68802c],ESI  ; 004077ba | g_RenderVertexBuffer[0].u
    MOV ESI,dword ptr [EAX + 0x20]      ; 004077c0
    ADD EDX,0x4                         ; 004077c3
    MOV dword ptr [EBX + 0x688030],ESI  ; 004077c6 | g_RenderVertexBuffer[0].v
    INC ECX                             ; 004077cc
    MOV EBX,dword ptr [EDI + 0x4]       ; 004077cd
    ADD EAX,0xc                         ; 004077d0
    CMP ECX,EBX                         ; 004077d3
    JL 0x004077ab                       ; 004077d5
        ;   XREF to: 004077ab (CONDITIONAL_JUMP)  ; LAB_004077ab
    LEA EAX,[EAX]                       ; 004077d7
    LEA EDX,[EDX]                       ; 004077dd
    CMP dword ptr [0x02d02578],0x0      ; 004077e0 | g_AdvancedClippingEnabled
        ;   Label: LAB_004077e0
    JZ 0x00407854                       ; 004077e7
        ;   XREF to: 00407854 (CONDITIONAL_JUMP)  ; LAB_00407854
    PUSH 0x772a98                       ; 004077e9 | g_ProcessedVertexIndices
    MOV EAX,dword ptr [EDI + 0x4]       ; 004077ee
    PUSH EAX                            ; 004077f1
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 004077f2
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004077f7
    POP EBP                             ; 004077fa
        ;   Label: LAB_004077fa
    POP EDI                             ; 004077fb
    POP ESI                             ; 004077fc
    POP EBX                             ; 004077fd
    RET                                 ; 004077fe
    MOV dword ptr [0x02d0257c],0x5b5322 ; 004077ff | g_ScanlineRenderFunc
        ;   Label: LAB_004077ff
    JMP 0x00407764                      ; 00407809
        ;   XREF to: 00407764 (UNCONDITIONAL_JUMP)  ; LAB_00407764
    CMP dword ptr [0x0067939c],0x20     ; 0040780e | g_BitsPerPixel
        ;   Label: LAB_0040780e
    JNZ 0x00407826                      ; 00407815
        ;   XREF to: 00407826 (CONDITIONAL_JUMP)  ; LAB_00407826
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00407817 | g_ScanlineRenderFunc
    JMP 0x00407764                      ; 00407821
        ;   XREF to: 00407764 (UNCONDITIONAL_JUMP)  ; LAB_00407764
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00407826 | g_ScanlineRenderFunc
        ;   Label: LAB_00407826
    JMP 0x00407764                      ; 00407830
        ;   XREF to: 00407764 (UNCONDITIONAL_JUMP)  ; LAB_00407764
    TEST BL,0xc0                        ; 00407835
        ;   Label: LAB_00407835
    JZ 0x00407849                       ; 00407838
        ;   XREF to: 00407849 (CONDITIONAL_JUMP)  ; LAB_00407849
    MOV dword ptr [0x02d052a4],0x1      ; 0040783a | g_RenderStateFlag2
    JMP 0x0040779e                      ; 00407844
        ;   XREF to: 0040779e (UNCONDITIONAL_JUMP)  ; LAB_0040779e
    MOV dword ptr [0x02d052a4],EDX      ; 00407849 | g_RenderStateFlag2
        ;   Label: LAB_00407849
    JMP 0x0040779e                      ; 0040784f
        ;   XREF to: 0040779e (UNCONDITIONAL_JUMP)  ; LAB_0040779e
    PUSH 0x772a98                       ; 00407854 | g_ProcessedVertexIndices
        ;   Label: LAB_00407854
    MOV EBP,dword ptr [EDI + 0x4]       ; 00407859
    PUSH EBP                            ; 0040785c
    CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420 ; 0040785d
        ;   XREF to: 00438420 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_00438420(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00407862
    POP EBP                             ; 00407865
    POP EDI                             ; 00407866
    POP ESI                             ; 00407867
    POP EBX                             ; 00407868
    RET                                 ; 00407869

