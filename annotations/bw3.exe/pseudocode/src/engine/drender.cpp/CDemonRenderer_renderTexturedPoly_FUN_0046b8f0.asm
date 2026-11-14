; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; int              Stack[0xc]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[7]:
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00414a60 at 00414ba5
;   core_dskybox.cpp_renderSkyDome_FUN_0046f480 at 0046f7ab
;   core_flies.cpp_CFlies_renderOpaque_FUN_004addd0 at 004ae1ab
;   core_glass.cpp_CGlass_renderBackground_FUN_004cab40 at 004cac93
;   core_morph.cpp_CMorphModel_renderFaces_FUN_004fa6d0 at 004fa799
;   core_wateract.cpp_CWaterActor_renderTransparent_FUN_005787f0 at 00578a52
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046d960 at 0046d987
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
;   engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0046e200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b8f0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0
    PUSH EDI                            ; 0046b8f1
    PUSH EBP                            ; 0046b8f2
    SUB ESP,0x4                         ; 0046b8f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046b8f6
    CMP dword ptr [ESP + 0x1c],-0x1     ; 0046b8fa
    JZ 0x0046b98f                       ; 0046b8ff
        ;   XREF to: 0046b98f (CONDITIONAL_JUMP)  ; LAB_0046b98f
    CMP dword ptr [EBX + 0x1c],0x0      ; 0046b905
        ;   Label: LAB_0046b905
    JNZ 0x0046b99c                      ; 0046b909
        ;   XREF to: 0046b99c (CONDITIONAL_JUMP)  ; LAB_0046b99c
    CMP dword ptr [EBX + 0xc],0x0       ; 0046b90f
    JNZ 0x0046b9b6                      ; 0046b913
        ;   XREF to: 0046b9b6 (CONDITIONAL_JUMP)  ; LAB_0046b9b6
    PUSH ESI                            ; 0046b919
        ;   Label: LAB_0046b919
    CMP dword ptr [EBX + 0x4],0x0       ; 0046b91a
    JZ 0x0046b9cf                       ; 0046b91e
        ;   XREF to: 0046b9cf (CONDITIONAL_JUMP)  ; LAB_0046b9cf
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046b924
    MOV ESI,dword ptr [EAX + 0x4]       ; 0046b928
    XOR ECX,ECX                         ; 0046b92b
    TEST ESI,ESI                        ; 0046b92d
    JLE 0x0046b950                      ; 0046b92f
        ;   XREF to: 0046b950 (CONDITIONAL_JUMP)  ; LAB_0046b950
    XOR EDX,EDX                         ; 0046b931
    MOV ESI,dword ptr [EAX + 0x18]      ; 0046b933
        ;   Label: LAB_0046b933
    MOV dword ptr [EDX + 0x1bdd818],ESI ; 0046b936 | DAT_01bdd818 | DAT_01bdd81c
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046b93c
    ADD EDX,0x4                         ; 0046b940
    INC ECX                             ; 0046b943
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046b944
    ADD EAX,0xc                         ; 0046b947
    CMP ECX,EBP                         ; 0046b94a
    JL 0x0046b933                       ; 0046b94c
        ;   XREF to: 0046b933 (CONDITIONAL_JUMP)  ; LAB_0046b933
    MOV EAX,EAX                         ; 0046b94e
    CMP dword ptr [EBX + 0x4],0x0       ; 0046b950
        ;   Label: LAB_0046b950
    JZ 0x0046ba2a                       ; 0046b954
        ;   XREF to: 0046ba2a (CONDITIONAL_JUMP)  ; LAB_0046ba2a
    XOR EAX,EAX                         ; 0046b95a
    MOV EBP,0x46f9a6                    ; 0046b95c
    MOV [0x01c6e2b4],EAX                ; 0046b961 | DAT_01c6e2b4
    MOV [0x01c6e2b8],EAX                ; 0046b966 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],EBP      ; 0046b96b | DAT_01c6b5cc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046b971
        ;   Label: LAB_0046b971
    PUSH 0x1bdd818                      ; 0046b975 | DAT_01bdd818
    MOV ECX,dword ptr [EAX + 0x4]       ; 0046b97a
    PUSH ECX                            ; 0046b97d
    PUSH EBX                            ; 0046b97e
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046b97f
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046b984
    POP ESI                             ; 0046b987
    ADD ESP,0x4                         ; 0046b988
        ;   Label: LAB_0046b988
    POP EBP                             ; 0046b98b
    POP EDI                             ; 0046b98c
    POP EBX                             ; 0046b98d
    RET                                 ; 0046b98e
    MOV dword ptr [ESP + 0x1c],0x2cd    ; 0046b98f
        ;   Label: LAB_0046b98f
    JMP 0x0046b905                      ; 0046b997
        ;   XREF to: 0046b905 (UNCONDITIONAL_JUMP)  ; LAB_0046b905
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0046b99c
        ;   Label: LAB_0046b99c
    PUSH EDI                            ; 0046b9a0
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0046b9a1
    PUSH EBP                            ; 0046b9a5
    PUSH EBX                            ; 0046b9a6
    CALL engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0046e200 ; 0046b9a7
        ;   XREF to: 0046e200 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0046e200(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * quad_primitive, int render_flags)
    ADD ESP,0xc                         ; 0046b9ac
    ADD ESP,0x4                         ; 0046b9af
    POP EBP                             ; 0046b9b2
    POP EDI                             ; 0046b9b3
    POP EBX                             ; 0046b9b4
    RET                                 ; 0046b9b5
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046b9b6
        ;   Label: LAB_0046b9b6
    ADD EAX,0x8                         ; 0046b9ba
    PUSH EAX                            ; 0046b9bd
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046b9be
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046b9c3
    TEST EAX,EAX                        ; 0046b9c6
    JZ 0x0046b988                       ; 0046b9c8
        ;   XREF to: 0046b988 (CONDITIONAL_JUMP)  ; LAB_0046b988
    JMP 0x0046b919                      ; 0046b9ca
        ;   XREF to: 0046b919 (UNCONDITIONAL_JUMP)  ; LAB_0046b919
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046b9cf
        ;   Label: LAB_0046b9cf
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046b9d3
    XOR ECX,ECX                         ; 0046b9d6
    TEST EDX,EDX                        ; 0046b9d8
    JLE 0x0046b950                      ; 0046b9da
        ;   XREF to: 0046b950 (CONDITIONAL_JUMP)  ; LAB_0046b950
    XOR EDX,EDX                         ; 0046b9e0
    MOV ESI,dword ptr [EAX + 0x18]      ; 0046b9e2
        ;   Label: LAB_0046b9e2
    MOV EBP,dword ptr [EBX + 0x20]      ; 0046b9e5
    MOV dword ptr [ESP + 0x4],ESI       ; 0046b9e8
    TEST EBP,EBP                        ; 0046b9ec
    JZ 0x0046ba12                       ; 0046b9ee
        ;   XREF to: 0046ba12 (CONDITIONAL_JUMP)  ; LAB_0046ba12
    MOV ESI,dword ptr [ESP + 0x4]       ; 0046b9f0
        ;   Label: LAB_0046b9f0
    MOV dword ptr [EDX + 0x1bdd818],ESI ; 0046b9f4 | DAT_01bdd818 | DAT_01bdd81c
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046b9fa
    ADD EAX,0xc                         ; 0046b9fe
    INC ECX                             ; 0046ba01
    MOV EDI,dword ptr [ESI + 0x4]       ; 0046ba02
    ADD EDX,0x4                         ; 0046ba05
    CMP ECX,EDI                         ; 0046ba08
    JGE 0x0046b950                      ; 0046ba0a
        ;   XREF to: 0046b950 (CONDITIONAL_JUMP)  ; LAB_0046b950
    JMP 0x0046b9e2                      ; 0046ba10
        ;   XREF to: 0046b9e2 (UNCONDITIONAL_JUMP)  ; LAB_0046b9e2
    IMUL ESI,ESI,0x30                   ; 0046ba12
        ;   Label: LAB_0046ba12
    MOV EDI,dword ptr [EBX]             ; 0046ba15
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0046ba17
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0046ba1a
    MOV EDI,dword ptr [EBX]             ; 0046ba1e
    ADD EDI,ESI                         ; 0046ba20
    MOV ESI,dword ptr [EAX + 0x20]      ; 0046ba22
    MOV dword ptr [EDI + 0x1c],ESI      ; 0046ba25
    JMP 0x0046b9f0                      ; 0046ba28
        ;   XREF to: 0046b9f0 (UNCONDITIONAL_JUMP)  ; LAB_0046b9f0
    CMP dword ptr [0x005fba20],0x20     ; 0046ba2a | DAT_005fba20
        ;   Label: LAB_0046ba2a
    JNZ 0x0046ba56                      ; 0046ba31
        ;   XREF to: 0046ba56 (CONDITIONAL_JUMP)  ; LAB_0046ba56
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046ba33 | DAT_01c6b5cc
    MOV EDI,0x6                         ; 0046ba3d
        ;   Label: LAB_0046ba3d
    MOV EAX,dword ptr [ESP + 0x20]      ; 0046ba42
    MOV dword ptr [0x01c6e2b8],EDI      ; 0046ba46 | DAT_01c6e2b8
    MOV [0x01c6e2b4],EAX                ; 0046ba4c | DAT_01c6e2b4
    JMP 0x0046b971                      ; 0046ba51
        ;   XREF to: 0046b971 (UNCONDITIONAL_JUMP)  ; LAB_0046b971
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046ba56 | DAT_01c6b5cc
        ;   Label: LAB_0046ba56
    JMP 0x0046ba3d                      ; 0046ba60
        ;   XREF to: 0046ba3d (UNCONDITIONAL_JUMP)  ; LAB_0046ba3d

