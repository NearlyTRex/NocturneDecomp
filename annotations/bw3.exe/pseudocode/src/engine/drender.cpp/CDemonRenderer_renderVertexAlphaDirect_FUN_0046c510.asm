; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[16]:
;   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0045add0 at 0045af42
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_0045dea0 at 0045e654
;   core_dlight.cpp_FUN_0045d530 at 0045daa0
;   core_dlight.cpp_FUN_0045e6a0 at 0045ece1
;   core_dlight.cpp_renderConeLightGeometry_FUN_0045f5a0 at 0045fa60
;   core_fire.cpp_CFirefly_render_FUN_00498b40 at 00498c7f
;   core_fire.cpp_CGunFlame_render_FUN_0049e500 at 0049ee54
;   core_fire.cpp_CLaserBeam_render_FUN_0049b1d0 at 0049b9f4
;   core_fire.cpp_CPopcorn_render_FUN_004a0cd0 at 004a1004
;   core_fire.cpp_CRainDrop_render_FUN_004a1040 at 004a13ae
;   ... and 6 more
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046c510
        ;   Label: engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
    PUSH ESI                            ; 0046c511
    PUSH EDI                            ; 0046c512
    PUSH EBP                            ; 0046c513
    MOV EBP,dword ptr [ESP + 0x14]      ; 0046c514
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046c518
    CMP dword ptr [EBP + 0xc],0x0       ; 0046c51c
    JNZ 0x0046c591                      ; 0046c520
        ;   XREF to: 0046c591 (CONDITIONAL_JUMP)  ; LAB_0046c591
    MOV ECX,0xffffffff                  ; 0046c526
        ;   Label: LAB_0046c526
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046c52b
    XOR EDX,EDX                         ; 0046c52e
    TEST EBX,EBX                        ; 0046c530
    JLE 0x0046c550                      ; 0046c532
        ;   XREF to: 0046c550 (CONDITIONAL_JUMP)  ; LAB_0046c550
    MOV EAX,ESI                         ; 0046c534
    MOV EDI,dword ptr [EBP]             ; 0046c536
    MOV EBX,dword ptr [EAX + 0x18]      ; 0046c539
        ;   Label: LAB_0046c539
    IMUL EBX,EBX,0x30                   ; 0046c53c
    INC EDX                             ; 0046c53f
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 0046c540
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046c544
    ADD EAX,0x4                         ; 0046c547
    CMP EDX,EBX                         ; 0046c54a
    JL 0x0046c539                       ; 0046c54c
        ;   XREF to: 0046c539 (CONDITIONAL_JUMP)  ; LAB_0046c539
    MOV EAX,EAX                         ; 0046c54e
    TEST ECX,0x80000000                 ; 0046c550
        ;   Label: LAB_0046c550
    JZ 0x0046c55d                       ; 0046c556
        ;   XREF to: 0046c55d (CONDITIONAL_JUMP)  ; LAB_0046c55d
    TEST CL,0x1f                        ; 0046c558
    JNZ 0x0046c58c                      ; 0046c55b
        ;   XREF to: 0046c58c (CONDITIONAL_JUMP)  ; LAB_0046c58c
    CMP dword ptr [EBP + 0x4],0x0       ; 0046c55d
        ;   Label: LAB_0046c55d
    JZ 0x0046c5a3                       ; 0046c561
        ;   XREF to: 0046c5a3 (CONDITIONAL_JUMP)  ; LAB_0046c5a3
    XOR EDX,EDX                         ; 0046c563
    MOV EAX,0x46f9a6                    ; 0046c565
    MOV dword ptr [0x01c6e2b4],EDX      ; 0046c56a | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDX      ; 0046c570 | DAT_01c6e2b8
    MOV [0x01c6b5cc],EAX                ; 0046c576 | DAT_01c6b5cc
    LEA EAX,[ESI + 0x18]                ; 0046c57b
        ;   Label: LAB_0046c57b
    PUSH EAX                            ; 0046c57e
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046c57f
    PUSH EBX                            ; 0046c582
    PUSH EBP                            ; 0046c583
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046c584
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046c589
    POP EBP                             ; 0046c58c
        ;   Label: LAB_0046c58c
    POP EDI                             ; 0046c58d
    POP ESI                             ; 0046c58e
    POP EBX                             ; 0046c58f
    RET                                 ; 0046c590
    LEA EAX,[ESI + 0x8]                 ; 0046c591
        ;   Label: LAB_0046c591
    PUSH EAX                            ; 0046c594
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046c595
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046c59a
    TEST EAX,EAX                        ; 0046c59d
    JZ 0x0046c58c                       ; 0046c59f
        ;   XREF to: 0046c58c (CONDITIONAL_JUMP)  ; LAB_0046c58c
    JMP 0x0046c526                      ; 0046c5a1
        ;   XREF to: 0046c526 (UNCONDITIONAL_JUMP)  ; LAB_0046c526
    CMP dword ptr [0x005fba20],0x20     ; 0046c5a3 | DAT_005fba20
        ;   Label: LAB_0046c5a3
    JNZ 0x0046c5ce                      ; 0046c5aa
        ;   XREF to: 0046c5ce (CONDITIONAL_JUMP)  ; LAB_0046c5ce
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046c5ac | DAT_01c6b5cc
    MOV EDI,0x6                         ; 0046c5b6
        ;   Label: LAB_0046c5b6
    MOV EBX,0x367                       ; 0046c5bb
    MOV dword ptr [0x01c6e2b8],EDI      ; 0046c5c0 | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],EBX      ; 0046c5c6 | DAT_01c6e2b4
    JMP 0x0046c57b                      ; 0046c5cc
        ;   XREF to: 0046c57b (UNCONDITIONAL_JUMP)  ; LAB_0046c57b
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046c5ce | DAT_01c6b5cc
        ;   Label: LAB_0046c5ce
    JMP 0x0046c5b6                      ; 0046c5d8
        ;   XREF to: 0046c5b6 (UNCONDITIONAL_JUMP)  ; LAB_0046c5b6

