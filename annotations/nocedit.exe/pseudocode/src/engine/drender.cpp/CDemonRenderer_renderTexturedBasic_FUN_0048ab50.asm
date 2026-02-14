; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[5]:
;   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 at 00497cca
;   core_mirror.cpp_CMirror_renderMirrorQuad_FUN_00522670 at 005227d6
;   core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_005225a0 at 005225c9
;   core_set.cpp_CDemonSet_FUN_00570df0 at 00570e17
;   core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70 at 005ea2be
;
; Referenced Globals:
;   int g_RenderPixelBudget = 0x1
;   int g_RenderPixelCounter
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   int g_UseExternalRenderer
;   _BIT_INTEGER g_RenderStateFlags
;   int g_RenderStateFlag2
;   int g_RenderedTriangleCount
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ab50
        ;   Label: engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
    PUSH ESI                            ; 0048ab51
    PUSH EDI                            ; 0048ab52
    PUSH EBP                            ; 0048ab53
    MOV EBX,dword ptr [ESP + 0x14]      ; 0048ab54
    MOV ESI,dword ptr [ESP + 0x18]      ; 0048ab58
    MOV EDI,dword ptr [0x030e56b8]      ; 0048ab5c | g_RenderedTriangleCount
    XOR EDX,EDX                         ; 0048ab62
    MOV ECX,dword ptr [EBX + 0xc]       ; 0048ab64
    MOV dword ptr [0x02c6d5a4],EDX      ; 0048ab67 | g_RenderPixelCounter
    TEST ECX,ECX                        ; 0048ab6d
    JNZ 0x0048abf3                      ; 0048ab6f
        ;   XREF to: 0048abf3 (CONDITIONAL_JUMP)  ; LAB_0048abf3
    CMP dword ptr [EBX + 0x4],0x0       ; 0048ab75
        ;   Label: LAB_0048ab75
    JZ 0x0048ac0c                       ; 0048ab79
        ;   XREF to: 0048ac0c (CONDITIONAL_JUMP)  ; LAB_0048ac0c
    XOR EAX,EAX                         ; 0048ab7f
    MOV EBP,0x490cb5                    ; 0048ab81
    MOV [0x02d052a0],EAX                ; 0048ab86 | g_RenderStateFlags
    MOV [0x02d052a4],EAX                ; 0048ab8b | g_RenderStateFlag2
    MOV dword ptr [0x02d0257c],EBP      ; 0048ab90 | g_ScanlineRenderFunc
    MOV ECX,dword ptr [0x02d03e94]      ; 0048ab96 | g_UseExternalRenderer
        ;   Label: LAB_0048ab96
    MOV EBP,dword ptr [EBX + 0x4]       ; 0048ab9c
    TEST ECX,ECX                        ; 0048ab9f
    JZ 0x0048abae                       ; 0048aba1
        ;   XREF to: 0048abae (CONDITIONAL_JUMP)  ; LAB_0048abae
    PUSH 0x1                            ; 0048aba3
    PUSH EBX                            ; 0048aba5
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0 ; 0048aba6
        ;   XREF to: 0048cac0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 0048abab
    LEA EAX,[ESI + 0x18]                ; 0048abae
        ;   Label: LAB_0048abae
    PUSH EAX                            ; 0048abb1
    MOV EAX,dword ptr [ESI + 0x4]       ; 0048abb2
    PUSH EAX                            ; 0048abb5
    PUSH EBX                            ; 0048abb6
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048abb7
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    MOV EDX,dword ptr [0x02d03e94]      ; 0048abbc | g_UseExternalRenderer
    ADD ESP,0xc                         ; 0048abc2
    TEST EDX,EDX                        ; 0048abc5
    JZ 0x0048abd3                       ; 0048abc7
        ;   XREF to: 0048abd3 (CONDITIONAL_JUMP)  ; LAB_0048abd3
    PUSH EBP                            ; 0048abc9
    PUSH EBX                            ; 0048abca
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0 ; 0048abcb
        ;   XREF to: 0048cac0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 0048abd0
    MOV EAX,[0x02c6d5a4]                ; 0048abd3 | g_RenderPixelCounter
        ;   Label: LAB_0048abd3
    MOV ECX,dword ptr [0x006703f0]      ; 0048abd8 | g_RenderPixelBudget
    MOV dword ptr [0x030e56b8],EDI      ; 0048abde | g_RenderedTriangleCount
    CMP EAX,ECX                         ; 0048abe4
    SETGE AL                            ; 0048abe6
    AND EAX,0xff                        ; 0048abe9
    POP EBP                             ; 0048abee
    POP EDI                             ; 0048abef
    POP ESI                             ; 0048abf0
    POP EBX                             ; 0048abf1
    RET                                 ; 0048abf2
    LEA EAX,[ESI + 0x8]                 ; 0048abf3
        ;   Label: LAB_0048abf3
    PUSH EAX                            ; 0048abf6
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048abf7
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048abfc
    TEST EAX,EAX                        ; 0048abff
    JNZ 0x0048ab75                      ; 0048ac01
        ;   XREF to: 0048ab75 (CONDITIONAL_JUMP)  ; LAB_0048ab75
    POP EBP                             ; 0048ac07
    POP EDI                             ; 0048ac08
    POP ESI                             ; 0048ac09
    POP EBX                             ; 0048ac0a
    RET                                 ; 0048ac0b
    MOV EDX,0xc0                        ; 0048ac0c
        ;   Label: LAB_0048ac0c
    MOV ECX,0x6                         ; 0048ac11
    MOV EAX,0x490c37                    ; 0048ac16
    MOV dword ptr [0x02d052a0],EDX      ; 0048ac1b | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],ECX      ; 0048ac21 | g_RenderStateFlag2
    MOV [0x02d0257c],EAX                ; 0048ac27 | g_ScanlineRenderFunc
    JMP 0x0048ab96                      ; 0048ac2c
        ;   XREF to: 0048ab96 (UNCONDITIONAL_JUMP)  ; LAB_0048ab96

