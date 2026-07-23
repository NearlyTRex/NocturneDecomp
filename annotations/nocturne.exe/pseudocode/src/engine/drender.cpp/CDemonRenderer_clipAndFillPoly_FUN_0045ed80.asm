; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[23]:
;   engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0045f090 at 0045f130
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedDirect_FUN_0045f700 at 0045f73b
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0045f8d0 at 0045f951
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0045f790 at 0045f810
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 at 00460314
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370 at 0046040e
;   engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0 at 0045fa51
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190 at 0045f1f2
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendDirect_FUN_0045fe40 at 0045feb9
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0045ff20 at 0045ffce
;   ... and 13 more
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_0057db72
;   TerminatedCString s_CDemonRenderer_clipAndFi_0057db88
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a1
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_xform.cpp_transformAndClipGeometry_FUN_0055e040
;   engine_3d.c_rasterizeTriangle_FUN_005628c0
;   engine_clipper.c_clipPolygonToViewport_FUN_004349a0
;   engine_clipper.c_FUN_00432cd0
;   engine_drender.cpp_renderTriangleSimple_FUN_00458080
;   engine_drender.cpp_renderTriangleTextured_FUN_00457a00
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ed80
        ;   Label: engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
    PUSH ESI                            ; 0045ed81
    PUSH EDI                            ; 0045ed82
    PUSH EBP                            ; 0045ed83
    MOV EDI,dword ptr [ESP + 0x14]      ; 0045ed84
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045ed88
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045ed8c
    CMP dword ptr [EDI + 0x8],0x0       ; 0045ed90
    JNZ 0x0045edc3                      ; 0045ed94
        ;   XREF to: 0045edc3 (CONDITIONAL_JUMP)  ; LAB_0045edc3
    CMP dword ptr [EDI + 0x10],0x0      ; 0045ed96
        ;   Label: LAB_0045ed96
    JNZ 0x0045edf1                      ; 0045ed9a
        ;   XREF to: 0045edf1 (CONDITIONAL_JUMP)  ; LAB_0045edf1
    CMP dword ptr [EDI + 0x4],0x0       ; 0045ed9c
    JZ 0x0045edab                       ; 0045eda0
        ;   XREF to: 0045edab (CONDITIONAL_JUMP)  ; LAB_0045edab
    TEST byte ptr [0x01c039a0],0x1      ; 0045eda2 | DAT_01c039a0
    JZ 0x0045edb4                       ; 0045eda9
        ;   XREF to: 0045edb4 (CONDITIONAL_JUMP)  ; LAB_0045edb4
    TEST byte ptr [0x01c039a0],0x5      ; 0045edab | DAT_01c039a0
        ;   Label: LAB_0045edab
    JNZ 0x0045ede8                      ; 0045edb2
        ;   XREF to: 0045ede8 (CONDITIONAL_JUMP)  ; LAB_0045ede8
    PUSH EBX                            ; 0045edb4
        ;   Label: LAB_0045edb4
    PUSH ESI                            ; 0045edb5
    CALL engine_drender.cpp_renderTriangleSimple_FUN_00458080 ; 0045edb6
        ;   XREF to: 00458080 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_renderTriangleSimple_FUN_00458080()
    ADD ESP,0x8                         ; 0045edbb
        ;   Label: LAB_0045edbb
    POP EBP                             ; 0045edbe
        ;   Label: LAB_0045edbe
    POP EDI                             ; 0045edbf
    POP ESI                             ; 0045edc0
    POP EBX                             ; 0045edc1
    RET                                 ; 0045edc2
    MOV ECX,0x57db72                    ; 0045edc3 | = "..\\engine\\drender.cpp"
        ;   Label: LAB_0045edc3
    MOV EBP,0xac                        ; 0045edc8
    PUSH 0x57db88                       ; 0045edcd | = "CDemonRenderer::clipAndFillPoly - Bad..."
    MOV dword ptr [0x01cc4800],ECX      ; 0045edd2 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 0045edd8 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0045edde
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0045ede3
    JMP 0x0045ed96                      ; 0045ede6
        ;   XREF to: 0045ed96 (UNCONDITIONAL_JUMP)  ; LAB_0045ed96
    PUSH EBX                            ; 0045ede8
        ;   Label: LAB_0045ede8
    PUSH ESI                            ; 0045ede9
    CALL engine_drender.cpp_renderTriangleTextured_FUN_00457a00 ; 0045edea
        ;   XREF to: 00457a00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_renderTriangleTextured_FUN_00457a00()
    JMP 0x0045edbb                      ; 0045edef
        ;   XREF to: 0045edbb (UNCONDITIONAL_JUMP)  ; LAB_0045edbb
    CMP dword ptr [EDI + 0x4],0x0       ; 0045edf1
        ;   Label: LAB_0045edf1
    JZ 0x0045ee00                       ; 0045edf5
        ;   XREF to: 0045ee00 (CONDITIONAL_JUMP)  ; LAB_0045ee00
    TEST byte ptr [0x01c039a0],0x1      ; 0045edf7 | DAT_01c039a0
    JZ 0x0045ee21                       ; 0045edfe
        ;   XREF to: 0045ee21 (CONDITIONAL_JUMP)  ; LAB_0045ee21
    TEST byte ptr [0x01c039a0],0x5      ; 0045ee00 | DAT_01c039a0
        ;   Label: LAB_0045ee00
    JZ 0x0045ee21                       ; 0045ee07
        ;   XREF to: 0045ee21 (CONDITIONAL_JUMP)  ; LAB_0045ee21
    TEST byte ptr [0x01c039a1],0x2      ; 0045ee09 | DAT_01c039a1
    JZ 0x0045ee49                       ; 0045ee10
        ;   XREF to: 0045ee49 (CONDITIONAL_JUMP)  ; LAB_0045ee49
    PUSH ESI                            ; 0045ee12
    PUSH EBX                            ; 0045ee13
    CALL engine_clipper.c_clipPolygonToViewport_FUN_004349a0 ; 0045ee14
        ;   XREF to: 004349a0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_clipPolygonToViewport_FUN_004349a0()
    ADD ESP,0x8                         ; 0045ee19
    POP EBP                             ; 0045ee1c
    POP EDI                             ; 0045ee1d
    POP ESI                             ; 0045ee1e
    POP EBX                             ; 0045ee1f
    RET                                 ; 0045ee20
    PUSH ESI                            ; 0045ee21
        ;   Label: LAB_0045ee21
    PUSH EBX                            ; 0045ee22
    CALL core_xform.cpp_transformAndClipGeometry_FUN_0055e040 ; 0045ee23
        ;   XREF to: 0055e040 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformAndClipGeometry_FUN_0055e040()
    MOV ECX,dword ptr [0x00766c70]      ; 0045ee28 | DAT_00766c70
    ADD ESP,0x8                         ; 0045ee2e
    CMP ECX,0x2                         ; 0045ee31
    JLE 0x0045edbe                      ; 0045ee34
        ;   XREF to: 0045edbe (CONDITIONAL_JUMP)  ; LAB_0045edbe
    PUSH ECX                            ; 0045ee36
    PUSH 0x766c74                       ; 0045ee37 | DAT_00766c74
    CALL engine_3d.c_rasterizeTriangle_FUN_005628c0 ; 0045ee3c
        ;   XREF to: 005628c0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_rasterizeTriangle_FUN_005628c0()
    ADD ESP,0x8                         ; 0045ee41
    POP EBP                             ; 0045ee44
    POP EDI                             ; 0045ee45
    POP ESI                             ; 0045ee46
    POP EBX                             ; 0045ee47
    RET                                 ; 0045ee48
    PUSH ESI                            ; 0045ee49
        ;   Label: LAB_0045ee49
    PUSH EBX                            ; 0045ee4a
    CALL engine_clipper.c_FUN_00432cd0  ; 0045ee4b
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 0045ee50
    POP EBP                             ; 0045ee53
    POP EDI                             ; 0045ee54
    POP ESI                             ; 0045ee55
    POP EBX                             ; 0045ee56
    RET                                 ; 0045ee57

