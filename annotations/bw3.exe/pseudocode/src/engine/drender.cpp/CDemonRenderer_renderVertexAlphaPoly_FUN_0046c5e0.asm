; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046c5e0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_fire.cpp_CLaserBeam_render_FUN_0049b1d0 at 0049c0c6
;   core_path.cpp_CPathMap_renderPathMap_FUN_0050c980 at 0050cd4c
;   core_path.cpp_renderGridQuad_FUN_0050c750 at 0050c966
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01bdd818
;   undefined4 DAT_01bdd81c
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

    PUSH EBX                            ; 0046c5e0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046c5e0
    PUSH ESI                            ; 0046c5e1
    PUSH EDI                            ; 0046c5e2
    PUSH EBP                            ; 0046c5e3
    SUB ESP,0x4                         ; 0046c5e4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046c5e7
    CMP dword ptr [EBX + 0xc],0x0       ; 0046c5eb
    JNZ 0x0046c68e                      ; 0046c5ef
        ;   XREF to: 0046c68e (CONDITIONAL_JUMP)  ; LAB_0046c68e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c5f5
        ;   Label: LAB_0046c5f5
    MOV ECX,0xffffffff                  ; 0046c5f9
    XOR EDX,EDX                         ; 0046c5fe
    MOV ESI,dword ptr [EAX + 0x4]       ; 0046c600
    MOV dword ptr [ESP],ECX             ; 0046c603
    TEST ESI,ESI                        ; 0046c606
    JLE 0x0046c640                      ; 0046c608
        ;   XREF to: 0046c640 (CONDITIONAL_JUMP)  ; LAB_0046c640
    XOR ECX,ECX                         ; 0046c60a
    MOV ESI,dword ptr [EAX + 0x18]      ; 0046c60c
        ;   Label: LAB_0046c60c
    MOV dword ptr [ECX + 0x1bdd818],ESI ; 0046c60f | DAT_01bdd818 | DAT_01bdd81c
    IMUL ESI,ESI,0x30                   ; 0046c615
    MOV EDI,dword ptr [EBX]             ; 0046c618
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0046c61a
    MOV EDI,dword ptr [ESP]             ; 0046c61e
    ADD ECX,0x4                         ; 0046c621
    AND EDI,ESI                         ; 0046c624
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046c626
    ADD EAX,0xc                         ; 0046c62a
    INC EDX                             ; 0046c62d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046c62e
    MOV dword ptr [ESP],EDI             ; 0046c631
    CMP EDX,EBP                         ; 0046c634
    JL 0x0046c60c                       ; 0046c636
        ;   XREF to: 0046c60c (CONDITIONAL_JUMP)  ; LAB_0046c60c
    LEA EAX,[EAX]                       ; 0046c638
    MOV EDX,EDX                         ; 0046c63e
    TEST byte ptr [ESP + 0x3],0x80      ; 0046c640
        ;   Label: LAB_0046c640
    JZ 0x0046c64d                       ; 0046c645
        ;   XREF to: 0046c64d (CONDITIONAL_JUMP)  ; LAB_0046c64d
    TEST byte ptr [ESP],0x1f            ; 0046c647
    JNZ 0x0046c686                      ; 0046c64b
        ;   XREF to: 0046c686 (CONDITIONAL_JUMP)  ; LAB_0046c686
    CMP dword ptr [EBX + 0x4],0x0       ; 0046c64d
        ;   Label: LAB_0046c64d
    JZ 0x0046c6a7                       ; 0046c651
        ;   XREF to: 0046c6a7 (CONDITIONAL_JUMP)  ; LAB_0046c6a7
    XOR ESI,ESI                         ; 0046c653
    MOV ECX,0x46f9a6                    ; 0046c655
    MOV dword ptr [0x01c6e2b4],ESI      ; 0046c65a | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],ESI      ; 0046c660 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],ECX      ; 0046c666 | DAT_01c6b5cc
    LEA EAX,[EAX]                       ; 0046c66c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c670
        ;   Label: LAB_0046c670
    PUSH 0x1bdd818                      ; 0046c674 | DAT_01bdd818
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046c679
    PUSH EDX                            ; 0046c67c
    PUSH EBX                            ; 0046c67d
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046c67e
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046c683
    ADD ESP,0x4                         ; 0046c686
        ;   Label: LAB_0046c686
    POP EBP                             ; 0046c689
    POP EDI                             ; 0046c68a
    POP ESI                             ; 0046c68b
    POP EBX                             ; 0046c68c
    RET                                 ; 0046c68d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c68e
        ;   Label: LAB_0046c68e
    ADD EAX,0x8                         ; 0046c692
    PUSH EAX                            ; 0046c695
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046c696
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0046c69b
    TEST EAX,EAX                        ; 0046c69e
    JZ 0x0046c686                       ; 0046c6a0
        ;   XREF to: 0046c686 (CONDITIONAL_JUMP)  ; LAB_0046c686
    JMP 0x0046c5f5                      ; 0046c6a2
        ;   XREF to: 0046c5f5 (UNCONDITIONAL_JUMP)  ; LAB_0046c5f5
    CMP dword ptr [0x005fba20],0x20     ; 0046c6a7 | DAT_005fba20
        ;   Label: LAB_0046c6a7
    JNZ 0x0046c719                      ; 0046c6ae
        ;   XREF to: 0046c719 (CONDITIONAL_JUMP)  ; LAB_0046c719
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046c6b0 | DAT_01c6b5cc
    MOV EBP,0x6                         ; 0046c6ba
        ;   Label: LAB_0046c6ba
    MOV EDI,0x367                       ; 0046c6bf
    MOV EAX,dword ptr [EBX + 0x20]      ; 0046c6c4
    MOV dword ptr [0x01c6e2b8],EBP      ; 0046c6c7 | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],EDI      ; 0046c6cd | DAT_01c6e2b4
    TEST EAX,EAX                        ; 0046c6d3
    JNZ 0x0046c670                      ; 0046c6d5
        ;   XREF to: 0046c670 (CONDITIONAL_JUMP)  ; LAB_0046c670
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c6d7
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046c6db
    XOR ECX,ECX                         ; 0046c6de
    TEST EDX,EDX                        ; 0046c6e0
    JLE 0x0046c670                      ; 0046c6e2
        ;   XREF to: 0046c670 (CONDITIONAL_JUMP)  ; LAB_0046c670
    XOR EDX,EDX                         ; 0046c6e4
    MOV ESI,dword ptr [EDX + 0x1bdd818] ; 0046c6e6 | DAT_01bdd818 | DAT_01bdd81c
        ;   Label: LAB_0046c6e6
    IMUL ESI,ESI,0x30                   ; 0046c6ec
    MOV EDI,dword ptr [EBX]             ; 0046c6ef
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0046c6f1
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0046c6f4
    MOV EDI,dword ptr [EBX]             ; 0046c6f8
    ADD EDI,ESI                         ; 0046c6fa
    MOV ESI,dword ptr [EAX + 0x20]      ; 0046c6fc
    MOV dword ptr [EDI + 0x1c],ESI      ; 0046c6ff
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046c702
    ADD EAX,0xc                         ; 0046c706
    INC ECX                             ; 0046c709
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046c70a
    ADD EDX,0x4                         ; 0046c70d
    CMP ECX,EBP                         ; 0046c710
    JL 0x0046c6e6                       ; 0046c712
        ;   XREF to: 0046c6e6 (CONDITIONAL_JUMP)  ; LAB_0046c6e6
    JMP 0x0046c670                      ; 0046c714
        ;   XREF to: 0046c670 (UNCONDITIONAL_JUMP)  ; LAB_0046c670
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046c719 | DAT_01c6b5cc
        ;   Label: LAB_0046c719
    JMP 0x0046c6ba                      ; 0046c723
        ;   XREF to: 0046c6ba (UNCONDITIONAL_JUMP)  ; LAB_0046c6ba

