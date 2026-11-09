; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; int *            Stack[0xc]:4   vertex_indices
;
; XREF[25]:
;   engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0 at 00481e50
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_00482540 at 004825c0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 at 004830c4
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120 at 004831be
;   engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_00482780 at 00482801
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0 at 00481f17
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_00482cd0 at 00482d7e
;   engine_drender.cpp_CDemonRenderer_renderFullEffectsDirect_FUN_004829b0 at 00482a29
;   engine_drender.cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_00481fa0 at 00482051
;   engine_drender.cpp_CDemonRenderer_renderOverlayPoly_FUN_00483340 at 004833de
;   ... and 15 more
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_005db2c9
;   TerminatedCString s_CDemonRenderer_clipAndFi_005db2df
;   undefined4 DAT_007c7554
;   undefined4 DAT_007c7558
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d15
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dpart.cpp_FUN_0047a480
;   core_dpart.cpp_FUN_0047ab00
;   core_main.c_FUN_005030e0
;   core_xform.cpp_transformAndClipGeometry_FUN_005b9fc0
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;   engine_clipper.c_clipPolygonToViewport_FUN_0043de60
;   unkafter_zombie.cpp_FUN_005bf120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481aa0
        ;   Label: engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
    PUSH ESI                            ; 00481aa1
    PUSH EDI                            ; 00481aa2
    PUSH EBP                            ; 00481aa3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00481aa4
    MOV EBX,dword ptr [ESP + 0x18]      ; 00481aa8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00481aac
    CMP dword ptr [EDI + 0x8],0x0       ; 00481ab0
    JNZ 0x00481ae3                      ; 00481ab4
        ;   XREF to: 00481ae3 (CONDITIONAL_JUMP)  ; LAB_00481ae3
    CMP dword ptr [EDI + 0x10],0x0      ; 00481ab6
        ;   Label: LAB_00481ab6
    JNZ 0x00481b11                      ; 00481aba
        ;   XREF to: 00481b11 (CONDITIONAL_JUMP)  ; LAB_00481b11
    CMP dword ptr [EDI + 0x4],0x0       ; 00481abc
    JZ 0x00481acb                       ; 00481ac0
        ;   XREF to: 00481acb (CONDITIONAL_JUMP)  ; LAB_00481acb
    TEST byte ptr [0x01c51d14],0x1      ; 00481ac2 | DAT_01c51d14
    JZ 0x00481ad4                       ; 00481ac9
        ;   XREF to: 00481ad4 (CONDITIONAL_JUMP)  ; LAB_00481ad4
    TEST byte ptr [0x01c51d14],0x5      ; 00481acb | DAT_01c51d14
        ;   Label: LAB_00481acb
    JNZ 0x00481b08                      ; 00481ad2
        ;   XREF to: 00481b08 (CONDITIONAL_JUMP)  ; LAB_00481b08
    PUSH EBX                            ; 00481ad4
        ;   Label: LAB_00481ad4
    PUSH ESI                            ; 00481ad5
    CALL core_dpart.cpp_FUN_0047ab00    ; 00481ad6
        ;   XREF to: 0047ab00 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_FUN_0047ab00(CVector3i * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 00481adb
        ;   Label: LAB_00481adb
    POP EBP                             ; 00481ade
        ;   Label: LAB_00481ade
    POP EDI                             ; 00481adf
    POP ESI                             ; 00481ae0
    POP EBX                             ; 00481ae1
    RET                                 ; 00481ae2
    MOV ECX,0x5db2c9                    ; 00481ae3 | = "..\\engine\\drender.cpp"
        ;   Label: LAB_00481ae3
    MOV EBP,0xad                        ; 00481ae8
    PUSH 0x5db2df                       ; 00481aed | = "CDemonRenderer::clipAndFillPoly - Bad..."
    MOV dword ptr [0x01d1d400],ECX      ; 00481af2 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00481af8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00481afe
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00481b03
    JMP 0x00481ab6                      ; 00481b06
        ;   XREF to: 00481ab6 (UNCONDITIONAL_JUMP)  ; LAB_00481ab6
    PUSH EBX                            ; 00481b08
        ;   Label: LAB_00481b08
    PUSH ESI                            ; 00481b09
    CALL core_dpart.cpp_FUN_0047a480    ; 00481b0a
        ;   XREF to: 0047a480 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_FUN_0047a480(int * vertex_indices, int vertex_count)
    JMP 0x00481adb                      ; 00481b0f
        ;   XREF to: 00481adb (UNCONDITIONAL_JUMP)  ; LAB_00481adb
    CMP dword ptr [EDI + 0x4],0x0       ; 00481b11
        ;   Label: LAB_00481b11
    JZ 0x00481b20                       ; 00481b15
        ;   XREF to: 00481b20 (CONDITIONAL_JUMP)  ; LAB_00481b20
    TEST byte ptr [0x01c51d14],0x1      ; 00481b17 | DAT_01c51d14
    JZ 0x00481b41                       ; 00481b1e
        ;   XREF to: 00481b41 (CONDITIONAL_JUMP)  ; LAB_00481b41
    TEST byte ptr [0x01c51d14],0x5      ; 00481b20 | DAT_01c51d14
        ;   Label: LAB_00481b20
    JZ 0x00481b41                       ; 00481b27
        ;   XREF to: 00481b41 (CONDITIONAL_JUMP)  ; LAB_00481b41
    TEST byte ptr [0x01c51d15],0x2      ; 00481b29 | DAT_01c51d15
    JZ 0x00481b69                       ; 00481b30
        ;   XREF to: 00481b69 (CONDITIONAL_JUMP)  ; LAB_00481b69
    PUSH ESI                            ; 00481b32
    PUSH EBX                            ; 00481b33
    CALL engine_clipper.c_clipPolygonToViewport_FUN_0043de60 ; 00481b34
        ;   XREF to: 0043de60 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_0043de60(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00481b39
    POP EBP                             ; 00481b3c
    POP EDI                             ; 00481b3d
    POP ESI                             ; 00481b3e
    POP EBX                             ; 00481b3f
    RET                                 ; 00481b40
    PUSH ESI                            ; 00481b41
        ;   Label: LAB_00481b41
    PUSH EBX                            ; 00481b42
    CALL core_xform.cpp_transformAndClipGeometry_FUN_005b9fc0 ; 00481b43
        ;   XREF to: 005b9fc0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_transformAndClipGeometry_FUN_005b9fc0(int vertex_count, int * vertex_indices)
    MOV ECX,dword ptr [0x007c7554]      ; 00481b48 | DAT_007c7554
    ADD ESP,0x8                         ; 00481b4e
    CMP ECX,0x2                         ; 00481b51
    JLE 0x00481ade                      ; 00481b54
        ;   XREF to: 00481ade (CONDITIONAL_JUMP)  ; LAB_00481ade
    PUSH ECX                            ; 00481b56
    PUSH 0x7c7558                       ; 00481b57 | DAT_007c7558
    CALL unkafter_zombie.cpp_FUN_005bf120 ; 00481b5c
        ;   XREF to: 005bf120 (UNCONDITIONAL_CALL)  ; void unkafter_zombie.cpp_FUN_005bf120(SRenderVertex * vertex_buffer, int vertex_count)
    ADD ESP,0x8                         ; 00481b61
    POP EBP                             ; 00481b64
    POP EDI                             ; 00481b65
    POP ESI                             ; 00481b66
    POP EBX                             ; 00481b67
    RET                                 ; 00481b68
    PUSH ESI                            ; 00481b69
        ;   Label: LAB_00481b69
    PUSH EBX                            ; 00481b6a
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 00481b6b
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00481b70
    POP EBP                             ; 00481b73
    POP EDI                             ; 00481b74
    POP ESI                             ; 00481b75
    POP EBX                             ; 00481b76
    RET                                 ; 00481b77

