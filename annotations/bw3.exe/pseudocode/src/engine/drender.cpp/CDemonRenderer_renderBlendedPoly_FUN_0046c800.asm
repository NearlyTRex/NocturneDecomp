; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_curtain.cpp_CCurtain_renderMesh_FUN_00448060 at 00448222
;   core_fire.cpp_CLaserBeam_render_FUN_0049b1d0 at 0049c186
;   core_glass.cpp_CGlass_renderOpaque_FUN_004ca5a0 at 004ca73a
;   core_glass.cpp_CGlass_renderTransparent_FUN_004ca770 at 004ca909
;   core_water.cpp_CWater_render_FUN_00577760 at 00577bff
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

    PUSH EBX                            ; 0046c800
        ;   Label: engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800
    PUSH ESI                            ; 0046c801
    PUSH EDI                            ; 0046c802
    PUSH EBP                            ; 0046c803
    SUB ESP,0x4                         ; 0046c804
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046c807
    CMP dword ptr [EBX + 0xc],0x0       ; 0046c80b
    JNZ 0x0046c8ae                      ; 0046c80f
        ;   XREF to: 0046c8ae (CONDITIONAL_JUMP)  ; LAB_0046c8ae
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c815
        ;   Label: LAB_0046c815
    MOV ECX,0xffffffff                  ; 0046c819
    XOR EDX,EDX                         ; 0046c81e
    MOV ESI,dword ptr [EAX + 0x4]       ; 0046c820
    MOV dword ptr [ESP],ECX             ; 0046c823
    TEST ESI,ESI                        ; 0046c826
    JLE 0x0046c860                      ; 0046c828
        ;   XREF to: 0046c860 (CONDITIONAL_JUMP)  ; LAB_0046c860
    XOR ECX,ECX                         ; 0046c82a
    MOV ESI,dword ptr [EAX + 0x18]      ; 0046c82c
        ;   Label: LAB_0046c82c
    MOV dword ptr [ECX + 0x1bdd818],ESI ; 0046c82f | DAT_01bdd818 | DAT_01bdd81c
    IMUL ESI,ESI,0x30                   ; 0046c835
    MOV EDI,dword ptr [EBX]             ; 0046c838
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0046c83a
    MOV EDI,dword ptr [ESP]             ; 0046c83e
    ADD ECX,0x4                         ; 0046c841
    AND EDI,ESI                         ; 0046c844
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046c846
    ADD EAX,0xc                         ; 0046c84a
    INC EDX                             ; 0046c84d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046c84e
    MOV dword ptr [ESP],EDI             ; 0046c851
    CMP EDX,EBP                         ; 0046c854
    JL 0x0046c82c                       ; 0046c856
        ;   XREF to: 0046c82c (CONDITIONAL_JUMP)  ; LAB_0046c82c
    LEA EAX,[EAX]                       ; 0046c858
    MOV EDX,EDX                         ; 0046c85e
    TEST byte ptr [ESP + 0x3],0x80      ; 0046c860
        ;   Label: LAB_0046c860
    JZ 0x0046c86d                       ; 0046c865
        ;   XREF to: 0046c86d (CONDITIONAL_JUMP)  ; LAB_0046c86d
    TEST byte ptr [ESP],0x1f            ; 0046c867
    JNZ 0x0046c8a6                      ; 0046c86b
        ;   XREF to: 0046c8a6 (CONDITIONAL_JUMP)  ; LAB_0046c8a6
    CMP dword ptr [EBX + 0x4],0x0       ; 0046c86d
        ;   Label: LAB_0046c86d
    JZ 0x0046c8c7                       ; 0046c871
        ;   XREF to: 0046c8c7 (CONDITIONAL_JUMP)  ; LAB_0046c8c7
    XOR ESI,ESI                         ; 0046c873
    MOV ECX,0x46f9a6                    ; 0046c875
    MOV dword ptr [0x01c6e2b4],ESI      ; 0046c87a | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],ESI      ; 0046c880 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],ECX      ; 0046c886 | DAT_01c6b5cc
    LEA EAX,[EAX]                       ; 0046c88c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c890
        ;   Label: LAB_0046c890
    PUSH 0x1bdd818                      ; 0046c894 | DAT_01bdd818
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046c899
    PUSH EDX                            ; 0046c89c
    PUSH EBX                            ; 0046c89d
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046c89e
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046c8a3
    ADD ESP,0x4                         ; 0046c8a6
        ;   Label: LAB_0046c8a6
    POP EBP                             ; 0046c8a9
    POP EDI                             ; 0046c8aa
    POP ESI                             ; 0046c8ab
    POP EBX                             ; 0046c8ac
    RET                                 ; 0046c8ad
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c8ae
        ;   Label: LAB_0046c8ae
    ADD EAX,0x8                         ; 0046c8b2
    PUSH EAX                            ; 0046c8b5
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046c8b6
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0046c8bb
    TEST EAX,EAX                        ; 0046c8be
    JZ 0x0046c8a6                       ; 0046c8c0
        ;   XREF to: 0046c8a6 (CONDITIONAL_JUMP)  ; LAB_0046c8a6
    JMP 0x0046c815                      ; 0046c8c2
        ;   XREF to: 0046c815 (UNCONDITIONAL_JUMP)  ; LAB_0046c815
    CMP dword ptr [0x005fba20],0x20     ; 0046c8c7 | DAT_005fba20
        ;   Label: LAB_0046c8c7
    JNZ 0x0046c939                      ; 0046c8ce
        ;   XREF to: 0046c939 (CONDITIONAL_JUMP)  ; LAB_0046c939
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046c8d0 | DAT_01c6b5cc
    MOV EBP,0x6                         ; 0046c8da
        ;   Label: LAB_0046c8da
    MOV EDI,0x267                       ; 0046c8df
    MOV EAX,dword ptr [EBX + 0x20]      ; 0046c8e4
    MOV dword ptr [0x01c6e2b8],EBP      ; 0046c8e7 | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],EDI      ; 0046c8ed | DAT_01c6e2b4
    TEST EAX,EAX                        ; 0046c8f3
    JNZ 0x0046c890                      ; 0046c8f5
        ;   XREF to: 0046c890 (CONDITIONAL_JUMP)  ; LAB_0046c890
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c8f7
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046c8fb
    XOR ECX,ECX                         ; 0046c8fe
    TEST EDX,EDX                        ; 0046c900
    JLE 0x0046c890                      ; 0046c902
        ;   XREF to: 0046c890 (CONDITIONAL_JUMP)  ; LAB_0046c890
    XOR EDX,EDX                         ; 0046c904
    MOV ESI,dword ptr [EDX + 0x1bdd818] ; 0046c906 | DAT_01bdd818 | DAT_01bdd81c
        ;   Label: LAB_0046c906
    IMUL ESI,ESI,0x30                   ; 0046c90c
    MOV EDI,dword ptr [EBX]             ; 0046c90f
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0046c911
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0046c914
    MOV EDI,dword ptr [EBX]             ; 0046c918
    ADD EDI,ESI                         ; 0046c91a
    MOV ESI,dword ptr [EAX + 0x20]      ; 0046c91c
    MOV dword ptr [EDI + 0x1c],ESI      ; 0046c91f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046c922
    ADD EAX,0xc                         ; 0046c926
    INC ECX                             ; 0046c929
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046c92a
    ADD EDX,0x4                         ; 0046c92d
    CMP ECX,EBP                         ; 0046c930
    JL 0x0046c906                       ; 0046c932
        ;   XREF to: 0046c906 (CONDITIONAL_JUMP)  ; LAB_0046c906
    JMP 0x0046c890                      ; 0046c934
        ;   XREF to: 0046c890 (UNCONDITIONAL_JUMP)  ; LAB_0046c890
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046c939 | DAT_01c6b5cc
        ;   Label: LAB_0046c939
    JMP 0x0046c8da                      ; 0046c943
        ;   XREF to: 0046c8da (UNCONDITIONAL_JUMP)  ; LAB_0046c8da

