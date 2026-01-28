; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_renderEnhancedQualityDirect_FUN_0048b650 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
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

    PUSH EBX                            ; 0048b650
        ;   Label: engine_drender.cpp_CDemonRenderer_renderEnhancedQualityDirect_FUN_0048b650
    PUSH ESI                            ; 0048b651
    PUSH EDI                            ; 0048b652
    PUSH EBP                            ; 0048b653
    MOV EBP,dword ptr [ESP + 0x14]      ; 0048b654
    MOV ESI,dword ptr [ESP + 0x18]      ; 0048b658
    CMP dword ptr [EBP + 0xc],0x0       ; 0048b65c
    JNZ 0x0048b6d6                      ; 0048b660
        ;   XREF to: 0048b6d6 (CONDITIONAL_JUMP)  ; LAB_0048b6d6
    MOV ECX,0xffffffff                  ; 0048b666
        ;   Label: LAB_0048b666
    MOV EBX,dword ptr [ESI + 0x4]       ; 0048b66b
    XOR EDX,EDX                         ; 0048b66e
    TEST EBX,EBX                        ; 0048b670
    JLE 0x0048b690                      ; 0048b672
        ;   XREF to: 0048b690 (CONDITIONAL_JUMP)  ; LAB_0048b690
    MOV EAX,ESI                         ; 0048b674
    MOV EDI,dword ptr [EBP]             ; 0048b676
    MOV EBX,dword ptr [EAX + 0x18]      ; 0048b679
        ;   Label: LAB_0048b679
    IMUL EBX,EBX,0x30                   ; 0048b67c
    INC EDX                             ; 0048b67f
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 0048b680
    MOV EBX,dword ptr [ESI + 0x4]       ; 0048b684
    ADD EAX,0x4                         ; 0048b687
    CMP EDX,EBX                         ; 0048b68a
    JL 0x0048b679                       ; 0048b68c
        ;   XREF to: 0048b679 (CONDITIONAL_JUMP)  ; LAB_0048b679
    MOV EAX,EAX                         ; 0048b68e
    TEST ECX,0x80000000                 ; 0048b690
        ;   Label: LAB_0048b690
    JZ 0x0048b69d                       ; 0048b696
        ;   XREF to: 0048b69d (CONDITIONAL_JUMP)  ; LAB_0048b69d
    TEST CL,0x1f                        ; 0048b698
    JNZ 0x0048b6d1                      ; 0048b69b
        ;   XREF to: 0048b6d1 (CONDITIONAL_JUMP)  ; LAB_0048b6d1
    CMP dword ptr [EBP + 0x4],0x0       ; 0048b69d
        ;   Label: LAB_0048b69d
    JZ 0x0048b6eb                       ; 0048b6a1
        ;   XREF to: 0048b6eb (CONDITIONAL_JUMP)  ; LAB_0048b6eb
    MOV EDX,0x1                         ; 0048b6a3
    MOV EAX,0x4907e7                    ; 0048b6a8
    XOR ECX,ECX                         ; 0048b6ad
    MOV dword ptr [0x02d052a0],EDX      ; 0048b6af | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],ECX      ; 0048b6b5 | g_RenderStateFlag2
    MOV [0x02d0257c],EAX                ; 0048b6bb | g_ScanlineRenderFunc
    LEA EAX,[ESI + 0x18]                ; 0048b6c0
        ;   Label: LAB_0048b6c0
    PUSH EAX                            ; 0048b6c3
    MOV EBX,dword ptr [ESI + 0x4]       ; 0048b6c4
    PUSH EBX                            ; 0048b6c7
    PUSH EBP                            ; 0048b6c8
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048b6c9
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048b6ce
    POP EBP                             ; 0048b6d1
        ;   Label: LAB_0048b6d1
    POP EDI                             ; 0048b6d2
    POP ESI                             ; 0048b6d3
    POP EBX                             ; 0048b6d4
    RET                                 ; 0048b6d5
    LEA EAX,[ESI + 0x8]                 ; 0048b6d6
        ;   Label: LAB_0048b6d6
    PUSH EAX                            ; 0048b6d9
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048b6da
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048b6df
    TEST EAX,EAX                        ; 0048b6e2
    JZ 0x0048b6d1                       ; 0048b6e4
        ;   XREF to: 0048b6d1 (CONDITIONAL_JUMP)  ; LAB_0048b6d1
    JMP 0x0048b666                      ; 0048b6e6
        ;   XREF to: 0048b666 (UNCONDITIONAL_JUMP)  ; LAB_0048b666
    CMP dword ptr [0x0067939c],0x20     ; 0048b6eb | g_BitsPerPixel
        ;   Label: LAB_0048b6eb
    JNZ 0x0048b716                      ; 0048b6f2
        ;   XREF to: 0048b716 (CONDITIONAL_JUMP)  ; LAB_0048b716
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048b6f4 | g_ScanlineRenderFunc
    MOV EDI,0x6                         ; 0048b6fe
        ;   Label: LAB_0048b6fe
    MOV EBX,0x3e7                       ; 0048b703
    MOV dword ptr [0x02d052a4],EDI      ; 0048b708 | g_RenderStateFlag2
    MOV dword ptr [0x02d052a0],EBX      ; 0048b70e | g_RenderStateFlags
    JMP 0x0048b6c0                      ; 0048b714
        ;   XREF to: 0048b6c0 (UNCONDITIONAL_JUMP)  ; LAB_0048b6c0
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048b716 | g_ScanlineRenderFunc
        ;   Label: LAB_0048b716
    JMP 0x0048b6fe                      ; 0048b720
        ;   XREF to: 0048b6fe (UNCONDITIONAL_JUMP)  ; LAB_0048b6fe

