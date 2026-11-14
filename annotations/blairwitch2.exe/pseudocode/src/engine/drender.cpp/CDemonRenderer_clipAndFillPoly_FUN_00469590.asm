; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; int *            Stack[0xc]:4   vertex_indices
;
; XREF[25]:
;   engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_004698a0 at 00469940
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046a030 at 0046a0b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 at 0046abc4
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046ac20 at 0046acbe
;   engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0046a270 at 0046a2f1
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0 at 00469a07
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendDirect_FUN_0046a6f0 at 0046a769
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046a7d0 at 0046a87e
;   engine_drender.cpp_CDemonRenderer_renderFullEffectsDirect_FUN_0046a4a0 at 0046a519
;   engine_drender.cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_00469a90 at 00469b41
;   ... and 15 more
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_005d14d0
;   TerminatedCString s_CDemonRenderer_clipAndFi_005d14e6
;   undefined4 DAT_007bee30
;   undefined4 DAT_007bee34
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b55
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dpart.cpp_FUN_00461f70
;   core_dpart.cpp_FUN_004625f0
;   core_main.c_FUN_004e4500
;   core_xform.cpp_transformAndClipGeometry_FUN_00594f40
;   core_zombie.cpp_FUN_0059a0b0
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;   engine_clipper.c_clipPolygonToViewport_FUN_00433000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469590
        ;   Label: engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
    PUSH ESI                            ; 00469591
    PUSH EDI                            ; 00469592
    PUSH EBP                            ; 00469593
    MOV EDI,dword ptr [ESP + 0x14]      ; 00469594
    MOV EBX,dword ptr [ESP + 0x18]      ; 00469598
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046959c
    CMP dword ptr [EDI + 0x8],0x0       ; 004695a0
    JNZ 0x004695d3                      ; 004695a4
        ;   XREF to: 004695d3 (CONDITIONAL_JUMP)  ; LAB_004695d3
    CMP dword ptr [EDI + 0x10],0x0      ; 004695a6
        ;   Label: LAB_004695a6
    JNZ 0x00469601                      ; 004695aa
        ;   XREF to: 00469601 (CONDITIONAL_JUMP)  ; LAB_00469601
    CMP dword ptr [EDI + 0x4],0x0       ; 004695ac
    JZ 0x004695bb                       ; 004695b0
        ;   XREF to: 004695bb (CONDITIONAL_JUMP)  ; LAB_004695bb
    TEST byte ptr [0x01c38b54],0x1      ; 004695b2 | DAT_01c38b54
    JZ 0x004695c4                       ; 004695b9
        ;   XREF to: 004695c4 (CONDITIONAL_JUMP)  ; LAB_004695c4
    TEST byte ptr [0x01c38b54],0x5      ; 004695bb | DAT_01c38b54
        ;   Label: LAB_004695bb
    JNZ 0x004695f8                      ; 004695c2
        ;   XREF to: 004695f8 (CONDITIONAL_JUMP)  ; LAB_004695f8
    PUSH EBX                            ; 004695c4
        ;   Label: LAB_004695c4
    PUSH ESI                            ; 004695c5
    CALL core_dpart.cpp_FUN_004625f0    ; 004695c6
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_FUN_004625f0(CVector3i * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 004695cb
        ;   Label: LAB_004695cb
    POP EBP                             ; 004695ce
        ;   Label: LAB_004695ce
    POP EDI                             ; 004695cf
    POP ESI                             ; 004695d0
    POP EBX                             ; 004695d1
    RET                                 ; 004695d2
    MOV ECX,0x5d14d0                    ; 004695d3 | = "..\\engine\\drender.cpp"
        ;   Label: LAB_004695d3
    MOV EBP,0xad                        ; 004695d8
    PUSH 0x5d14e6                       ; 004695dd | = "CDemonRenderer::clipAndFillPoly - Bad..."
    MOV dword ptr [0x01d046a0],ECX      ; 004695e2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004695e8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004695ee
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004695f3
    JMP 0x004695a6                      ; 004695f6
        ;   XREF to: 004695a6 (UNCONDITIONAL_JUMP)  ; LAB_004695a6
    PUSH EBX                            ; 004695f8
        ;   Label: LAB_004695f8
    PUSH ESI                            ; 004695f9
    CALL core_dpart.cpp_FUN_00461f70    ; 004695fa
        ;   XREF to: 00461f70 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_FUN_00461f70(int * vertex_indices, int vertex_count)
    JMP 0x004695cb                      ; 004695ff
        ;   XREF to: 004695cb (UNCONDITIONAL_JUMP)  ; LAB_004695cb
    CMP dword ptr [EDI + 0x4],0x0       ; 00469601
        ;   Label: LAB_00469601
    JZ 0x00469610                       ; 00469605
        ;   XREF to: 00469610 (CONDITIONAL_JUMP)  ; LAB_00469610
    TEST byte ptr [0x01c38b54],0x1      ; 00469607 | DAT_01c38b54
    JZ 0x00469631                       ; 0046960e
        ;   XREF to: 00469631 (CONDITIONAL_JUMP)  ; LAB_00469631
    TEST byte ptr [0x01c38b54],0x5      ; 00469610 | DAT_01c38b54
        ;   Label: LAB_00469610
    JZ 0x00469631                       ; 00469617
        ;   XREF to: 00469631 (CONDITIONAL_JUMP)  ; LAB_00469631
    TEST byte ptr [0x01c38b55],0x2      ; 00469619 | DAT_01c38b55
    JZ 0x00469659                       ; 00469620
        ;   XREF to: 00469659 (CONDITIONAL_JUMP)  ; LAB_00469659
    PUSH ESI                            ; 00469622
    PUSH EBX                            ; 00469623
    CALL engine_clipper.c_clipPolygonToViewport_FUN_00433000 ; 00469624
        ;   XREF to: 00433000 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_00433000(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00469629
    POP EBP                             ; 0046962c
    POP EDI                             ; 0046962d
    POP ESI                             ; 0046962e
    POP EBX                             ; 0046962f
    RET                                 ; 00469630
    PUSH ESI                            ; 00469631
        ;   Label: LAB_00469631
    PUSH EBX                            ; 00469632
    CALL core_xform.cpp_transformAndClipGeometry_FUN_00594f40 ; 00469633
        ;   XREF to: 00594f40 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_transformAndClipGeometry_FUN_00594f40(int vertex_count, int * vertex_indices)
    MOV ECX,dword ptr [0x007bee30]      ; 00469638 | DAT_007bee30
    ADD ESP,0x8                         ; 0046963e
    CMP ECX,0x2                         ; 00469641
    JLE 0x004695ce                      ; 00469644
        ;   XREF to: 004695ce (CONDITIONAL_JUMP)  ; LAB_004695ce
    PUSH ECX                            ; 00469646
    PUSH 0x7bee34                       ; 00469647 | DAT_007bee34
    CALL core_zombie.cpp_FUN_0059a0b0   ; 0046964c
        ;   XREF to: 0059a0b0 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_0059a0b0(SRenderVertex * vertex_buffer, int vertex_count)
    ADD ESP,0x8                         ; 00469651
    POP EBP                             ; 00469654
    POP EDI                             ; 00469655
    POP ESI                             ; 00469656
    POP EBX                             ; 00469657
    RET                                 ; 00469658
    PUSH ESI                            ; 00469659
        ;   Label: LAB_00469659
    PUSH EBX                            ; 0046965a
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 0046965b
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00469660
    POP EBP                             ; 00469663
    POP EDI                             ; 00469664
    POP ESI                             ; 00469665
    POP EBX                             ; 00469666
    RET                                 ; 00469667

