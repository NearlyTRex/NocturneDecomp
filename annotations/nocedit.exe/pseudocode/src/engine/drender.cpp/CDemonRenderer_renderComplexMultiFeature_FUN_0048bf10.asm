; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   polygon_info
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 at 004746d0
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   _BIT_INTEGER g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048bf10
        ;   Label: engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10
    PUSH ESI                            ; 0048bf11
    PUSH EDI                            ; 0048bf12
    PUSH EBP                            ; 0048bf13
    MOV EBP,dword ptr [ESP + 0x14]      ; 0048bf14
    MOV ESI,dword ptr [ESP + 0x18]      ; 0048bf18
    CMP dword ptr [EBP + 0xc],0x0       ; 0048bf1c
    JNZ 0x0048bf91                      ; 0048bf20
        ;   XREF to: 0048bf91 (CONDITIONAL_JUMP)  ; LAB_0048bf91
    MOV ECX,0xffffffff                  ; 0048bf26
        ;   Label: LAB_0048bf26
    MOV EBX,dword ptr [ESI + 0x4]       ; 0048bf2b
    XOR EDX,EDX                         ; 0048bf2e
    TEST EBX,EBX                        ; 0048bf30
    JLE 0x0048bf50                      ; 0048bf32
        ;   XREF to: 0048bf50 (CONDITIONAL_JUMP)  ; LAB_0048bf50
    MOV EAX,ESI                         ; 0048bf34
    MOV EDI,dword ptr [EBP]             ; 0048bf36
    MOV EBX,dword ptr [EAX + 0x18]      ; 0048bf39
        ;   Label: LAB_0048bf39
    IMUL EBX,EBX,0x30                   ; 0048bf3c
    INC EDX                             ; 0048bf3f
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 0048bf40
    MOV EBX,dword ptr [ESI + 0x4]       ; 0048bf44
    ADD EAX,0x4                         ; 0048bf47
    CMP EDX,EBX                         ; 0048bf4a
    JL 0x0048bf39                       ; 0048bf4c
        ;   XREF to: 0048bf39 (CONDITIONAL_JUMP)  ; LAB_0048bf39
    MOV EAX,EAX                         ; 0048bf4e
    TEST ECX,0x80000000                 ; 0048bf50
        ;   Label: LAB_0048bf50
    JZ 0x0048bf5d                       ; 0048bf56
        ;   XREF to: 0048bf5d (CONDITIONAL_JUMP)  ; LAB_0048bf5d
    TEST CL,0x1f                        ; 0048bf58
    JNZ 0x0048bf8c                      ; 0048bf5b
        ;   XREF to: 0048bf8c (CONDITIONAL_JUMP)  ; LAB_0048bf8c
    CMP dword ptr [EBP + 0x4],0x0       ; 0048bf5d
        ;   Label: LAB_0048bf5d
    JZ 0x0048bfa3                       ; 0048bf61
        ;   XREF to: 0048bfa3 (CONDITIONAL_JUMP)  ; LAB_0048bfa3
    XOR EDX,EDX                         ; 0048bf63
    MOV EAX,0x49072f                    ; 0048bf65
    MOV dword ptr [0x02d052a0],EDX      ; 0048bf6a | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDX      ; 0048bf70 | g_RenderStateFlag2
    MOV [0x02d0257c],EAX                ; 0048bf76 | g_ScanlineRenderFunc
    LEA EAX,[ESI + 0x18]                ; 0048bf7b
        ;   Label: LAB_0048bf7b
    PUSH EAX                            ; 0048bf7e
    MOV EBX,dword ptr [ESI + 0x4]       ; 0048bf7f
    PUSH EBX                            ; 0048bf82
    PUSH EBP                            ; 0048bf83
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048bf84
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048bf89
    POP EBP                             ; 0048bf8c
        ;   Label: LAB_0048bf8c
    POP EDI                             ; 0048bf8d
    POP ESI                             ; 0048bf8e
    POP EBX                             ; 0048bf8f
    RET                                 ; 0048bf90
    LEA EAX,[ESI + 0x8]                 ; 0048bf91
        ;   Label: LAB_0048bf91
    PUSH EAX                            ; 0048bf94
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048bf95
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048bf9a
    TEST EAX,EAX                        ; 0048bf9d
    JZ 0x0048bf8c                       ; 0048bf9f
        ;   XREF to: 0048bf8c (CONDITIONAL_JUMP)  ; LAB_0048bf8c
    JMP 0x0048bf26                      ; 0048bfa1
        ;   XREF to: 0048bf26 (UNCONDITIONAL_JUMP)  ; LAB_0048bf26
    CMP dword ptr [0x0067939c],0x20     ; 0048bfa3 | g_BitsPerPixel
        ;   Label: LAB_0048bfa3
    JNZ 0x0048bfcb                      ; 0048bfaa
        ;   XREF to: 0048bfcb (CONDITIONAL_JUMP)  ; LAB_0048bfcb
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048bfac | g_ScanlineRenderFunc
    XOR EDI,EDI                         ; 0048bfb6
        ;   Label: LAB_0048bfb6
    MOV EBX,0x327                       ; 0048bfb8
    MOV dword ptr [0x02d052a4],EDI      ; 0048bfbd | g_RenderStateFlag2
    MOV dword ptr [0x02d052a0],EBX      ; 0048bfc3 | g_RenderStateFlags
    JMP 0x0048bf7b                      ; 0048bfc9
        ;   XREF to: 0048bf7b (UNCONDITIONAL_JUMP)  ; LAB_0048bf7b
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048bfcb | g_ScanlineRenderFunc
        ;   Label: LAB_0048bfcb
    JMP 0x0048bfb6                      ; 0048bfd5
        ;   XREF to: 0048bfb6 (UNCONDITIONAL_JUMP)  ; LAB_0048bfb6

