; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_3d_c_renderPrimitivePlaneMaskedComplex_FUN_004046c0(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
;
; XREF[1]:
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 at 00407c39
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   uint g_ProcessedVertexOffset
;   int[24] g_ProcessedVertexIndices
;   undefined4 DAT_00772a9c
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   float g_PerspectiveReciprocal
;   BOOL g_MMXSupported
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a00
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004046c0
        ;   Label: engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0
    PUSH EDI                            ; 004046c1
    PUSH EBP                            ; 004046c2
    MOV EBP,dword ptr [0x00772a60]      ; 004046c3 | g_ProcessedVertexOffset
    MOV EDI,dword ptr [ESP + 0x10]      ; 004046c9
    LEA ESI,[EDI + 0x18]                ; 004046cd
    LEA EAX,[EDI + 0x8]                 ; 004046d0
    PUSH EAX                            ; 004046d3
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 004046d4
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 004046d9
    TEST EAX,EAX                        ; 004046dc
    JNZ 0x00404702                      ; 004046de
        ;   XREF to: 00404702 (CONDITIONAL_JUMP)  ; LAB_00404702
    MOV EDX,dword ptr [EDI + 0x4]       ; 004046e0
        ;   Label: LAB_004046e0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004046e3
    SUB EAX,EDX                         ; 004046ea
    LEA EDX,[EAX*0x4 + 0x0]             ; 004046ec
    LEA EAX,[EDI + 0x18]                ; 004046f3
    MOV EBP,dword ptr [0x00772a60]      ; 004046f6 | g_ProcessedVertexOffset
    ADD EAX,EDX                         ; 004046fc
    POP EBP                             ; 004046fe
    POP EDI                             ; 004046ff
    POP ESI                             ; 00404700
    RET                                 ; 00404701
    PUSH EDI                            ; 00404702
        ;   Label: LAB_00404702
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 00404703
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * polygon_info)
    MOV EDX,dword ptr [0x02d051f4]      ; 00404708 | g_PerspectiveReciprocal
    ADD ESP,0x4                         ; 0040470e
    TEST EDX,EDX                        ; 00404711
    JZ 0x004047d7                       ; 00404713
        ;   XREF to: 004047d7 (CONDITIONAL_JUMP)  ; LAB_004047d7
    MOV EDX,dword ptr [0x02d05248]      ; 00404719 | g_MMXSupported
    MOV EBP,dword ptr [0x00772a60]      ; 0040471f | g_ProcessedVertexOffset
    TEST EDX,EDX                        ; 00404725
    JNZ 0x004047b0                      ; 00404727
        ;   XREF to: 004047b0 (CONDITIONAL_JUMP)  ; LAB_004047b0
    CMP dword ptr [0x0067939c],0x20     ; 0040472d | g_BitsPerPixel
    JNZ 0x004047a4                      ; 00404734
        ;   XREF to: 004047a4 (CONDITIONAL_JUMP)  ; LAB_004047a4
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00404736 | g_ScanlineRenderFunc
        ;   Label: LAB_00404736
    PUSH EBX                            ; 00404740
        ;   Label: LAB_00404740
    MOV EAX,0x1                         ; 00404741
    MOV EDX,0xd9                        ; 00404746
    MOV EBX,0x772a98                    ; 0040474b | g_ProcessedVertexIndices
    XOR ECX,ECX                         ; 00404750
    MOV [0x02d052a4],EAX                ; 00404752 | g_RenderStateFlag2
    MOV dword ptr [0x02d052a0],EDX      ; 00404757 | g_RenderStateFlags
    MOV EAX,ESI                         ; 0040475d
    MOV EDX,dword ptr [EDI + 0x4]       ; 0040475f
        ;   Label: LAB_0040475f
    LEA EDX,[EDX + EDX*0x2]             ; 00404762
    MOV dword ptr [0x00772a60],EBP      ; 00404765 | g_ProcessedVertexOffset
    CMP ECX,EDX                         ; 0040476b
    JGE 0x0040481b                      ; 0040476d
        ;   XREF to: 0040481b (CONDITIONAL_JUMP)  ; LAB_0040481b
    MOV EDX,dword ptr [EAX]             ; 00404773
    ADD EDX,EBP                         ; 00404775
    MOV dword ptr [EBX],EDX             ; 00404777 | g_ProcessedVertexIndices | DAT_00772a9c
    MOV EDX,dword ptr [EAX]             ; 00404779
    ADD EDX,EBP                         ; 0040477b
    IMUL EDX,EDX,0x30                   ; 0040477d
    MOV ESI,dword ptr [EAX + 0x4]       ; 00404780
    MOV dword ptr [EDX + 0x68802c],ESI  ; 00404783 | g_RenderVertexBuffer[0].u
    MOV EDX,dword ptr [EAX]             ; 00404789
    ADD EDX,EBP                         ; 0040478b
    IMUL ESI,EDX,0x30                   ; 0040478d
    ADD EAX,0xc                         ; 00404790
    ADD EBX,0x4                         ; 00404793 | DAT_00772a9c
    MOV EDX,dword ptr [EAX + -0x4]      ; 00404796
    ADD ECX,0x3                         ; 00404799
    MOV dword ptr [ESI + 0x688030],EDX  ; 0040479c | g_RenderVertexBuffer[0].v
    JMP 0x0040475f                      ; 004047a2
        ;   XREF to: 0040475f (UNCONDITIONAL_JUMP)  ; LAB_0040475f
    MOV dword ptr [0x02d0257c],0x5b5322 ; 004047a4 | g_ScanlineRenderFunc
        ;   Label: LAB_004047a4
    JMP 0x00404740                      ; 004047ae
        ;   XREF to: 00404740 (UNCONDITIONAL_JUMP)  ; LAB_00404740
    CMP dword ptr [0x0067939c],0x20     ; 004047b0 | g_BitsPerPixel
        ;   Label: LAB_004047b0
    JNZ 0x004047c8                      ; 004047b7
        ;   XREF to: 004047c8 (CONDITIONAL_JUMP)  ; LAB_004047c8
    MOV dword ptr [0x02d0257c],0x5b4031 ; 004047b9 | g_ScanlineRenderFunc
    JMP 0x00404740                      ; 004047c3
        ;   XREF to: 00404740 (UNCONDITIONAL_JUMP)  ; LAB_00404740
    MOV dword ptr [0x02d0257c],0x5b4823 ; 004047c8 | g_ScanlineRenderFunc
        ;   Label: LAB_004047c8
    JMP 0x00404740                      ; 004047d2
        ;   XREF to: 00404740 (UNCONDITIONAL_JUMP)  ; LAB_00404740
    MOV ECX,dword ptr [0x02d05248]      ; 004047d7 | g_MMXSupported
        ;   Label: LAB_004047d7
    MOV EBP,dword ptr [0x00772a60]      ; 004047dd | g_ProcessedVertexOffset
    TEST ECX,ECX                        ; 004047e3
    JNZ 0x00404803                      ; 004047e5
        ;   XREF to: 00404803 (CONDITIONAL_JUMP)  ; LAB_00404803
    CMP dword ptr [0x0067939c],0x20     ; 004047e7 | g_BitsPerPixel
    JZ 0x00404736                       ; 004047ee
        ;   XREF to: 00404736 (CONDITIONAL_JUMP)  ; LAB_00404736
    MOV dword ptr [0x02d0257c],0x5b5322 ; 004047f4 | g_ScanlineRenderFunc
    JMP 0x00404740                      ; 004047fe
        ;   XREF to: 00404740 (UNCONDITIONAL_JUMP)  ; LAB_00404740
    CMP dword ptr [0x0067939c],0x20     ; 00404803 | g_BitsPerPixel
        ;   Label: LAB_00404803
    JNZ 0x004047c8                      ; 0040480a
        ;   XREF to: 004047c8 (CONDITIONAL_JUMP)  ; LAB_004047c8
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0040480c | g_ScanlineRenderFunc
    JMP 0x00404740                      ; 00404816
        ;   XREF to: 00404740 (UNCONDITIONAL_JUMP)  ; LAB_00404740
    PUSH 0x772a98                       ; 0040481b | g_ProcessedVertexIndices
        ;   Label: LAB_0040481b
    MOV ECX,dword ptr [EDI + 0x4]       ; 00404820
    PUSH ECX                            ; 00404823
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00404824
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404829
    POP EBX                             ; 0040482c
    JMP 0x004046e0                      ; 0040482d
        ;   XREF to: 004046e0 (UNCONDITIONAL_JUMP)  ; LAB_004046e0

