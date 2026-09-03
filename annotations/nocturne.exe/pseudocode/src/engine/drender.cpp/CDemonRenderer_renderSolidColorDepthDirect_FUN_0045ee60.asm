; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[5]:
;   core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004d76e0 at 004d7709
;   core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004d7760 at 004d77dc
;   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_0050df40 at 0050dfaf
;   core_setdir.cpp_CDemonSet_FUN_005125a0 at 0051340b
;   core_setdir.cpp_testCameraVisibility_FUN_00511d80 at 0051248c
;
; Referenced Globals:
;   MainScanlineFunc* g_ScanlineRenderFunc
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ee60
        ;   Label: engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
    PUSH ESI                            ; 0045ee61
    PUSH EBP                            ; 0045ee62
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045ee63
    MOV ESI,dword ptr [ESP + 0x14]      ; 0045ee67
    CMP dword ptr [EBX + 0xc],0x0       ; 0045ee6b
    JNZ 0x0045eea5                      ; 0045ee6f
        ;   XREF to: 0045eea5 (CONDITIONAL_JUMP)  ; LAB_0045eea5
    CMP dword ptr [EBX + 0x4],0x0       ; 0045ee71
        ;   Label: LAB_0045ee71
    JZ 0x0045eeb7                       ; 0045ee75
        ;   XREF to: 0045eeb7 (CONDITIONAL_JUMP)  ; LAB_0045eeb7
    XOR ECX,ECX                         ; 0045ee77
    MOV EDX,0x463a79                    ; 0045ee79
    MOV dword ptr [0x01c039a0],ECX      ; 0045ee7e | g_RenderStateFlags
    MOV dword ptr [0x01c039a4],ECX      ; 0045ee84 | g_VertexPreprocessMode
    MOV dword ptr [0x01c00c7c],EDX      ; 0045ee8a | g_ScanlineRenderFunc
    LEA EAX,[ESI + 0x18]                ; 0045ee90
        ;   Label: LAB_0045ee90
    PUSH EAX                            ; 0045ee93
    MOV EBP,dword ptr [ESI + 0x4]       ; 0045ee94
    PUSH EBP                            ; 0045ee97
    PUSH EBX                            ; 0045ee98
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0045ee99
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0045ee9e
    POP EBP                             ; 0045eea1
        ;   Label: LAB_0045eea1
    POP ESI                             ; 0045eea2
    POP EBX                             ; 0045eea3
    RET                                 ; 0045eea4
    LEA EAX,[ESI + 0x8]                 ; 0045eea5
        ;   Label: LAB_0045eea5
    PUSH EAX                            ; 0045eea8
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0045eea9
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 0045eeae
    TEST EAX,EAX                        ; 0045eeb1
    JZ 0x0045eea1                       ; 0045eeb3
        ;   XREF to: 0045eea1 (CONDITIONAL_JUMP)  ; LAB_0045eea1
    JMP 0x0045ee71                      ; 0045eeb5
        ;   XREF to: 0045ee71 (UNCONDITIONAL_JUMP)  ; LAB_0045ee71
    PUSH EDI                            ; 0045eeb7
        ;   Label: LAB_0045eeb7
    MOV EBP,0xc0                        ; 0045eeb8
    MOV EAX,0x6                         ; 0045eebd
    MOV EDI,0x463d98                    ; 0045eec2
    MOV dword ptr [0x01c039a0],EBP      ; 0045eec7 | g_RenderStateFlags
    MOV [0x01c039a4],EAX                ; 0045eecd | g_VertexPreprocessMode
    MOV dword ptr [0x01c00c7c],EDI      ; 0045eed2 | g_ScanlineRenderFunc
    POP EDI                             ; 0045eed8
    JMP 0x0045ee90                      ; 0045eed9
        ;   XREF to: 0045ee90 (UNCONDITIONAL_JUMP)  ; LAB_0045ee90

