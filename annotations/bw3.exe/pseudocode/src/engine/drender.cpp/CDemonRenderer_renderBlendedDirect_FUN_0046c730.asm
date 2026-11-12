; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[13]:
;   core_chain.cpp_CChain_renderTransparent_FUN_0042a280 at 0042a5fa
;   core_fire.cpp_CBulletHole_render_FUN_00497610 at 0049789d
;   core_fire.cpp_CCrater_render_FUN_0049d980 at 0049db8a
;   core_fire.cpp_CGlassParticle_render_FUN_0049a9f0 at 0049abe5
;   core_fire.cpp_CSmokeParticle_render_FUN_00496f60 at 0049726f
;   core_fire.cpp_CTrail_render_FUN_004a0680 at 004a0931
;   core_fire.cpp_FUN_0049f520 at 0049f847
;   core_gore.cpp_FUN_004ccbe0 at 004ccf70
;   core_gore.cpp_FUN_004cd690 at 004cd952
;   core_gore.cpp_FUN_004cdd30 at 004cdf9f
;   ... and 3 more
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

    PUSH EBX                            ; 0046c730
        ;   Label: engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
    PUSH ESI                            ; 0046c731
    PUSH EDI                            ; 0046c732
    PUSH EBP                            ; 0046c733
    MOV EBP,dword ptr [ESP + 0x14]      ; 0046c734
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046c738
    CMP dword ptr [EBP + 0xc],0x0       ; 0046c73c
    JNZ 0x0046c7b1                      ; 0046c740
        ;   XREF to: 0046c7b1 (CONDITIONAL_JUMP)  ; LAB_0046c7b1
    MOV ECX,0xffffffff                  ; 0046c746
        ;   Label: LAB_0046c746
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046c74b
    XOR EDX,EDX                         ; 0046c74e
    TEST EBX,EBX                        ; 0046c750
    JLE 0x0046c770                      ; 0046c752
        ;   XREF to: 0046c770 (CONDITIONAL_JUMP)  ; LAB_0046c770
    MOV EAX,ESI                         ; 0046c754
    MOV EDI,dword ptr [EBP]             ; 0046c756
    MOV EBX,dword ptr [EAX + 0x18]      ; 0046c759
        ;   Label: LAB_0046c759
    IMUL EBX,EBX,0x30                   ; 0046c75c
    INC EDX                             ; 0046c75f
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 0046c760
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046c764
    ADD EAX,0x4                         ; 0046c767
    CMP EDX,EBX                         ; 0046c76a
    JL 0x0046c759                       ; 0046c76c
        ;   XREF to: 0046c759 (CONDITIONAL_JUMP)  ; LAB_0046c759
    MOV EAX,EAX                         ; 0046c76e
    TEST ECX,0x80000000                 ; 0046c770
        ;   Label: LAB_0046c770
    JZ 0x0046c77d                       ; 0046c776
        ;   XREF to: 0046c77d (CONDITIONAL_JUMP)  ; LAB_0046c77d
    TEST CL,0x1f                        ; 0046c778
    JNZ 0x0046c7ac                      ; 0046c77b
        ;   XREF to: 0046c7ac (CONDITIONAL_JUMP)  ; LAB_0046c7ac
    CMP dword ptr [EBP + 0x4],0x0       ; 0046c77d
        ;   Label: LAB_0046c77d
    JZ 0x0046c7c3                       ; 0046c781
        ;   XREF to: 0046c7c3 (CONDITIONAL_JUMP)  ; LAB_0046c7c3
    XOR EDX,EDX                         ; 0046c783
    MOV EAX,0x46f9a6                    ; 0046c785
    MOV dword ptr [0x01c6e2b4],EDX      ; 0046c78a | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDX      ; 0046c790 | DAT_01c6e2b8
    MOV [0x01c6b5cc],EAX                ; 0046c796 | DAT_01c6b5cc
    LEA EAX,[ESI + 0x18]                ; 0046c79b
        ;   Label: LAB_0046c79b
    PUSH EAX                            ; 0046c79e
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046c79f
    PUSH EBX                            ; 0046c7a2
    PUSH EBP                            ; 0046c7a3
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046c7a4
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046c7a9
    POP EBP                             ; 0046c7ac
        ;   Label: LAB_0046c7ac
    POP EDI                             ; 0046c7ad
    POP ESI                             ; 0046c7ae
    POP EBX                             ; 0046c7af
    RET                                 ; 0046c7b0
    LEA EAX,[ESI + 0x8]                 ; 0046c7b1
        ;   Label: LAB_0046c7b1
    PUSH EAX                            ; 0046c7b4
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046c7b5
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046c7ba
    TEST EAX,EAX                        ; 0046c7bd
    JZ 0x0046c7ac                       ; 0046c7bf
        ;   XREF to: 0046c7ac (CONDITIONAL_JUMP)  ; LAB_0046c7ac
    JMP 0x0046c746                      ; 0046c7c1
        ;   XREF to: 0046c746 (UNCONDITIONAL_JUMP)  ; LAB_0046c746
    CMP dword ptr [0x005fba20],0x20     ; 0046c7c3 | DAT_005fba20
        ;   Label: LAB_0046c7c3
    JNZ 0x0046c7ee                      ; 0046c7ca
        ;   XREF to: 0046c7ee (CONDITIONAL_JUMP)  ; LAB_0046c7ee
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046c7cc | DAT_01c6b5cc
    MOV EDI,0x6                         ; 0046c7d6
        ;   Label: LAB_0046c7d6
    MOV EBX,0x267                       ; 0046c7db
    MOV dword ptr [0x01c6e2b8],EDI      ; 0046c7e0 | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],EBX      ; 0046c7e6 | DAT_01c6e2b4
    JMP 0x0046c79b                      ; 0046c7ec
        ;   XREF to: 0046c79b (UNCONDITIONAL_JUMP)  ; LAB_0046c79b
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046c7ee | DAT_01c6b5cc
        ;   Label: LAB_0046c7ee
    JMP 0x0046c7d6                      ; 0046c7f8
        ;   XREF to: 0046c7d6 (UNCONDITIONAL_JUMP)  ; LAB_0046c7d6

