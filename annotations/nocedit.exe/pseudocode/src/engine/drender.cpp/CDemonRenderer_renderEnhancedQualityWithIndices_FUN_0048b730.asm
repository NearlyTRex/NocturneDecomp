; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_drender.cpp_CDemonRenderer_renderEnhancedQualityWithIndices_FUN_0048b730(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int[16] g_VertexIndexBuffer
;   undefined4 g_VertexIndexBuffer[1]
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b730
        ;   Label: engine_drender.cpp_CDemonRenderer_renderEnhancedQualityWithIndices_FUN_0048b730
    PUSH ESI                            ; 0048b731
    PUSH EDI                            ; 0048b732
    PUSH EBP                            ; 0048b733
    SUB ESP,0x4                         ; 0048b734
    MOV EBX,dword ptr [ESP + 0x18]      ; 0048b737
    CMP dword ptr [EBX + 0xc],0x0       ; 0048b73b
    JNZ 0x0048b7ee                      ; 0048b73f
        ;   XREF to: 0048b7ee (CONDITIONAL_JUMP)  ; LAB_0048b7ee
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048b745
        ;   Label: LAB_0048b745
    MOV ECX,0xffffffff                  ; 0048b749
    XOR EDX,EDX                         ; 0048b74e
    MOV ESI,dword ptr [EAX + 0x4]       ; 0048b750
    MOV dword ptr [ESP],ECX             ; 0048b753
    TEST ESI,ESI                        ; 0048b756
    JLE 0x0048b790                      ; 0048b758
        ;   XREF to: 0048b790 (CONDITIONAL_JUMP)  ; LAB_0048b790
    XOR ECX,ECX                         ; 0048b75a
    MOV ESI,dword ptr [EAX + 0x18]      ; 0048b75c
        ;   Label: LAB_0048b75c
    MOV dword ptr [ECX + 0x2c6d5ac],ESI ; 0048b75f | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
    IMUL ESI,ESI,0x30                   ; 0048b765
    MOV EDI,dword ptr [EBX]             ; 0048b768
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0048b76a
    MOV EDI,dword ptr [ESP]             ; 0048b76e
    ADD ECX,0x4                         ; 0048b771
    AND EDI,ESI                         ; 0048b774
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048b776
    ADD EAX,0xc                         ; 0048b77a
    INC EDX                             ; 0048b77d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048b77e
    MOV dword ptr [ESP],EDI             ; 0048b781
    CMP EDX,EBP                         ; 0048b784
    JL 0x0048b75c                       ; 0048b786
        ;   XREF to: 0048b75c (CONDITIONAL_JUMP)  ; LAB_0048b75c
    LEA EAX,[EAX]                       ; 0048b788
    MOV EDX,EDX                         ; 0048b78e
    TEST byte ptr [ESP + 0x3],0x80      ; 0048b790
        ;   Label: LAB_0048b790
    JZ 0x0048b79d                       ; 0048b795
        ;   XREF to: 0048b79d (CONDITIONAL_JUMP)  ; LAB_0048b79d
    TEST byte ptr [ESP],0x1f            ; 0048b797
    JNZ 0x0048b7e6                      ; 0048b79b
        ;   XREF to: 0048b7e6 (CONDITIONAL_JUMP)  ; LAB_0048b7e6
    CMP dword ptr [EBX + 0x4],0x0       ; 0048b79d
        ;   Label: LAB_0048b79d
    JZ 0x0048b807                       ; 0048b7a1
        ;   XREF to: 0048b807 (CONDITIONAL_JUMP)  ; LAB_0048b807
    MOV ESI,0x1                         ; 0048b7a3
    MOV ECX,0x4907e7                    ; 0048b7a8
    XOR EDI,EDI                         ; 0048b7ad
    MOV dword ptr [0x02d052a0],ESI      ; 0048b7af | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDI      ; 0048b7b5 | g_RenderStateFlag2
    MOV dword ptr [0x02d0257c],ECX      ; 0048b7bb | g_ScanlineRenderFunc
    LEA EAX,[EAX]                       ; 0048b7c1
    LEA EDX,[EDX]                       ; 0048b7c7
    LEA EAX,[EAX]                       ; 0048b7cd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048b7d0
        ;   Label: LAB_0048b7d0
    PUSH 0x2c6d5ac                      ; 0048b7d4 | g_VertexIndexBuffer
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048b7d9
    PUSH EDX                            ; 0048b7dc
    PUSH EBX                            ; 0048b7dd
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048b7de
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048b7e3
    ADD ESP,0x4                         ; 0048b7e6
        ;   Label: LAB_0048b7e6
    POP EBP                             ; 0048b7e9
    POP EDI                             ; 0048b7ea
    POP ESI                             ; 0048b7eb
    POP EBX                             ; 0048b7ec
    RET                                 ; 0048b7ed
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048b7ee
        ;   Label: LAB_0048b7ee
    ADD EAX,0x8                         ; 0048b7f2
    PUSH EAX                            ; 0048b7f5
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048b7f6
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048b7fb
    TEST EAX,EAX                        ; 0048b7fe
    JZ 0x0048b7e6                       ; 0048b800
        ;   XREF to: 0048b7e6 (CONDITIONAL_JUMP)  ; LAB_0048b7e6
    JMP 0x0048b745                      ; 0048b802
        ;   XREF to: 0048b745 (UNCONDITIONAL_JUMP)  ; LAB_0048b745
    CMP dword ptr [0x0067939c],0x20     ; 0048b807 | g_BitsPerPixel
        ;   Label: LAB_0048b807
    JNZ 0x0048b879                      ; 0048b80e
        ;   XREF to: 0048b879 (CONDITIONAL_JUMP)  ; LAB_0048b879
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048b810 | g_ScanlineRenderFunc
    MOV EBP,0x6                         ; 0048b81a
        ;   Label: LAB_0048b81a
    MOV EDI,0x3e7                       ; 0048b81f
    MOV EAX,dword ptr [EBX + 0x20]      ; 0048b824
    MOV dword ptr [0x02d052a4],EBP      ; 0048b827 | g_RenderStateFlag2
    MOV dword ptr [0x02d052a0],EDI      ; 0048b82d | g_RenderStateFlags
    TEST EAX,EAX                        ; 0048b833
    JNZ 0x0048b7d0                      ; 0048b835
        ;   XREF to: 0048b7d0 (CONDITIONAL_JUMP)  ; LAB_0048b7d0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048b837
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048b83b
    XOR ECX,ECX                         ; 0048b83e
    TEST EDX,EDX                        ; 0048b840
    JLE 0x0048b7d0                      ; 0048b842
        ;   XREF to: 0048b7d0 (CONDITIONAL_JUMP)  ; LAB_0048b7d0
    XOR EDX,EDX                         ; 0048b844
    MOV ESI,dword ptr [EDX + 0x2c6d5ac] ; 0048b846 | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
        ;   Label: LAB_0048b846
    IMUL ESI,ESI,0x30                   ; 0048b84c
    MOV EDI,dword ptr [EBX]             ; 0048b84f
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0048b851
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0048b854
    MOV EDI,dword ptr [EBX]             ; 0048b858
    ADD EDI,ESI                         ; 0048b85a
    MOV ESI,dword ptr [EAX + 0x20]      ; 0048b85c
    MOV dword ptr [EDI + 0x1c],ESI      ; 0048b85f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048b862
    ADD EAX,0xc                         ; 0048b866
    INC ECX                             ; 0048b869
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048b86a
    ADD EDX,0x4                         ; 0048b86d
    CMP ECX,EBP                         ; 0048b870
    JL 0x0048b846                       ; 0048b872
        ;   XREF to: 0048b846 (CONDITIONAL_JUMP)  ; LAB_0048b846
    JMP 0x0048b7d0                      ; 0048b874
        ;   XREF to: 0048b7d0 (UNCONDITIONAL_JUMP)  ; LAB_0048b7d0
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048b879 | g_ScanlineRenderFunc
        ;   Label: LAB_0048b879
    JMP 0x0048b81a                      ; 0048b883
        ;   XREF to: 0048b81a (UNCONDITIONAL_JUMP)  ; LAB_0048b81a

