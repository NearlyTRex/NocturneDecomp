; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[16]:
;   core_actor.cpp_CDemonActor_renderBoundingBoxSolid_FUN_0040dec0 at 0040e020
;   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0 at 00471752
;   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20 at 00473f32
;   core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210 at 00475834
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0 at 004751d5
;   core_dlight.cpp_renderConeLightGeometry_FUN_004760d0 at 00476590
;   core_fire.cpp_CFireball_render_FUN_004c0e70 at 004c1267
;   core_fire.cpp_CGunFlame_render_FUN_004c50b0 at 004c55ca
;   core_fire.cpp_CLaserBeam_render_FUN_004c25c0 at 004c2d37
;   core_fire.cpp_CPopcorn_render_FUN_004c64c0 at 004c67f4
;   ... and 6 more
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   MainScanlineFunc* g_ScanlineRenderFunc
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048bad0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
    PUSH ESI                            ; 0048bad1
    PUSH EDI                            ; 0048bad2
    PUSH EBP                            ; 0048bad3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0048bad4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0048bad8
    CMP dword ptr [EBP + 0xc],0x0       ; 0048badc
    JNZ 0x0048bb51                      ; 0048bae0
        ;   XREF to: 0048bb51 (CONDITIONAL_JUMP)  ; LAB_0048bb51
    MOV ECX,0xffffffff                  ; 0048bae6
        ;   Label: LAB_0048bae6
    MOV EBX,dword ptr [ESI + 0x4]       ; 0048baeb
    XOR EDX,EDX                         ; 0048baee
    TEST EBX,EBX                        ; 0048baf0
    JLE 0x0048bb10                      ; 0048baf2
        ;   XREF to: 0048bb10 (CONDITIONAL_JUMP)  ; LAB_0048bb10
    MOV EAX,ESI                         ; 0048baf4
    MOV EDI,dword ptr [EBP]             ; 0048baf6
    MOV EBX,dword ptr [EAX + 0x18]      ; 0048baf9
        ;   Label: LAB_0048baf9
    IMUL EBX,EBX,0x30                   ; 0048bafc
    INC EDX                             ; 0048baff
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 0048bb00
    MOV EBX,dword ptr [ESI + 0x4]       ; 0048bb04
    ADD EAX,0x4                         ; 0048bb07
    CMP EDX,EBX                         ; 0048bb0a
    JL 0x0048baf9                       ; 0048bb0c
        ;   XREF to: 0048baf9 (CONDITIONAL_JUMP)  ; LAB_0048baf9
    MOV EAX,EAX                         ; 0048bb0e
    TEST ECX,0x80000000                 ; 0048bb10
        ;   Label: LAB_0048bb10
    JZ 0x0048bb1d                       ; 0048bb16
        ;   XREF to: 0048bb1d (CONDITIONAL_JUMP)  ; LAB_0048bb1d
    TEST CL,0x1f                        ; 0048bb18
    JNZ 0x0048bb4c                      ; 0048bb1b
        ;   XREF to: 0048bb4c (CONDITIONAL_JUMP)  ; LAB_0048bb4c
    CMP dword ptr [EBP + 0x4],0x0       ; 0048bb1d
        ;   Label: LAB_0048bb1d
    JZ 0x0048bb63                       ; 0048bb21
        ;   XREF to: 0048bb63 (CONDITIONAL_JUMP)  ; LAB_0048bb63
    XOR EDX,EDX                         ; 0048bb23
    MOV EAX,0x49072f                    ; 0048bb25
    MOV dword ptr [0x02d052a0],EDX      ; 0048bb2a | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDX      ; 0048bb30 | g_VertexPreprocessMode
    MOV [0x02d0257c],EAX                ; 0048bb36 | g_ScanlineRenderFunc
    LEA EAX,[ESI + 0x18]                ; 0048bb3b
        ;   Label: LAB_0048bb3b
    PUSH EAX                            ; 0048bb3e
    MOV EBX,dword ptr [ESI + 0x4]       ; 0048bb3f
    PUSH EBX                            ; 0048bb42
    PUSH EBP                            ; 0048bb43
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048bb44
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048bb49
    POP EBP                             ; 0048bb4c
        ;   Label: LAB_0048bb4c
    POP EDI                             ; 0048bb4d
    POP ESI                             ; 0048bb4e
    POP EBX                             ; 0048bb4f
    RET                                 ; 0048bb50
    LEA EAX,[ESI + 0x8]                 ; 0048bb51
        ;   Label: LAB_0048bb51
    PUSH EAX                            ; 0048bb54
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048bb55
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048bb5a
    TEST EAX,EAX                        ; 0048bb5d
    JZ 0x0048bb4c                       ; 0048bb5f
        ;   XREF to: 0048bb4c (CONDITIONAL_JUMP)  ; LAB_0048bb4c
    JMP 0x0048bae6                      ; 0048bb61
        ;   XREF to: 0048bae6 (UNCONDITIONAL_JUMP)  ; LAB_0048bae6
    CMP dword ptr [0x0067939c],0x20     ; 0048bb63 | g_BitsPerPixel
        ;   Label: LAB_0048bb63
    JNZ 0x0048bb8e                      ; 0048bb6a
        ;   XREF to: 0048bb8e (CONDITIONAL_JUMP)  ; LAB_0048bb8e
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048bb6c | g_ScanlineRenderFunc
    MOV EDI,0x6                         ; 0048bb76
        ;   Label: LAB_0048bb76
    MOV EBX,0x367                       ; 0048bb7b
    MOV dword ptr [0x02d052a4],EDI      ; 0048bb80 | g_VertexPreprocessMode
    MOV dword ptr [0x02d052a0],EBX      ; 0048bb86 | g_RenderStateFlags
    JMP 0x0048bb3b                      ; 0048bb8c
        ;   XREF to: 0048bb3b (UNCONDITIONAL_JUMP)  ; LAB_0048bb3b
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048bb8e | g_ScanlineRenderFunc
        ;   Label: LAB_0048bb8e
    JMP 0x0048bb76                      ; 0048bb98
        ;   XREF to: 0048bb76 (UNCONDITIONAL_JUMP)  ; LAB_0048bb76

