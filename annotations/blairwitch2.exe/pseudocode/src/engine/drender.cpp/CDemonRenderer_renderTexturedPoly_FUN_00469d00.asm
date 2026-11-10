; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; int              Stack[0xc]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[9]:
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_004159e0 at 00415b32
;   core_dskybox.cpp_renderSkyDome_FUN_0046e410 at 0046e73b
;   core_flies.cpp_CFlies_renderOpaque_FUN_004a70b0 at 004a748b
;   core_glass.cpp_CGlass_renderBackground_FUN_004c5840 at 004c5993
;   core_inv.cpp_FUN_004da130 at 004da6da
;   core_inv.cpp_FUN_004dd9b0 at 004de9a1
;   core_morph.cpp_CMorphModel_renderFaces_FUN_005b6c90 at 005b6d59
;   core_wateract.cpp_CWaterActor_renderTransparent_FUN_00587400 at 0058762f
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046bd80 at 0046bda7
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01ba5c84
;   undefined4 DAT_01ba5c88
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
;   engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0046c620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469d00
        ;   Label: engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00
    PUSH EDI                            ; 00469d01
    PUSH EBP                            ; 00469d02
    SUB ESP,0x4                         ; 00469d03
    MOV EBX,dword ptr [ESP + 0x14]      ; 00469d06
    CMP dword ptr [ESP + 0x1c],-0x1     ; 00469d0a
    JZ 0x00469d9f                       ; 00469d0f
        ;   XREF to: 00469d9f (CONDITIONAL_JUMP)  ; LAB_00469d9f
    CMP dword ptr [EBX + 0x1c],0x0      ; 00469d15
        ;   Label: LAB_00469d15
    JNZ 0x00469dac                      ; 00469d19
        ;   XREF to: 00469dac (CONDITIONAL_JUMP)  ; LAB_00469dac
    CMP dword ptr [EBX + 0xc],0x0       ; 00469d1f
    JNZ 0x00469dc6                      ; 00469d23
        ;   XREF to: 00469dc6 (CONDITIONAL_JUMP)  ; LAB_00469dc6
    PUSH ESI                            ; 00469d29
        ;   Label: LAB_00469d29
    CMP dword ptr [EBX + 0x4],0x0       ; 00469d2a
    JZ 0x00469ddf                       ; 00469d2e
        ;   XREF to: 00469ddf (CONDITIONAL_JUMP)  ; LAB_00469ddf
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00469d34
    MOV ESI,dword ptr [EAX + 0x4]       ; 00469d38
    XOR ECX,ECX                         ; 00469d3b
    TEST ESI,ESI                        ; 00469d3d
    JLE 0x00469d60                      ; 00469d3f
        ;   XREF to: 00469d60 (CONDITIONAL_JUMP)  ; LAB_00469d60
    XOR EDX,EDX                         ; 00469d41
    MOV ESI,dword ptr [EAX + 0x18]      ; 00469d43
        ;   Label: LAB_00469d43
    MOV dword ptr [EDX + 0x1ba5c84],ESI ; 00469d46 | DAT_01ba5c84 | DAT_01ba5c88
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00469d4c
    ADD EDX,0x4                         ; 00469d50
    INC ECX                             ; 00469d53
    MOV EBP,dword ptr [ESI + 0x4]       ; 00469d54
    ADD EAX,0xc                         ; 00469d57
    CMP ECX,EBP                         ; 00469d5a
    JL 0x00469d43                       ; 00469d5c
        ;   XREF to: 00469d43 (CONDITIONAL_JUMP)  ; LAB_00469d43
    MOV EAX,EAX                         ; 00469d5e
    CMP dword ptr [EBX + 0x4],0x0       ; 00469d60
        ;   Label: LAB_00469d60
    JZ 0x00469e3a                       ; 00469d64
        ;   XREF to: 00469e3a (CONDITIONAL_JUMP)  ; LAB_00469e3a
    XOR EAX,EAX                         ; 00469d6a
    MOV EBP,0x46e936                    ; 00469d6c
    MOV [0x01c38b54],EAX                ; 00469d71 | DAT_01c38b54
    MOV [0x01c38b58],EAX                ; 00469d76 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],EBP      ; 00469d7b | DAT_01c35e6c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00469d81
        ;   Label: LAB_00469d81
    PUSH 0x1ba5c84                      ; 00469d85 | DAT_01ba5c84
    MOV ECX,dword ptr [EAX + 0x4]       ; 00469d8a
    PUSH ECX                            ; 00469d8d
    PUSH EBX                            ; 00469d8e
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 00469d8f
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00469d94
    POP ESI                             ; 00469d97
    ADD ESP,0x4                         ; 00469d98
        ;   Label: LAB_00469d98
    POP EBP                             ; 00469d9b
    POP EDI                             ; 00469d9c
    POP EBX                             ; 00469d9d
    RET                                 ; 00469d9e
    MOV dword ptr [ESP + 0x1c],0x2cd    ; 00469d9f
        ;   Label: LAB_00469d9f
    JMP 0x00469d15                      ; 00469da7
        ;   XREF to: 00469d15 (UNCONDITIONAL_JUMP)  ; LAB_00469d15
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00469dac
        ;   Label: LAB_00469dac
    PUSH EDI                            ; 00469db0
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00469db1
    PUSH EBP                            ; 00469db5
    PUSH EBX                            ; 00469db6
    CALL engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0046c620 ; 00469db7
        ;   XREF to: 0046c620 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0046c620(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * quad_primitive, int render_flags)
    ADD ESP,0xc                         ; 00469dbc
    ADD ESP,0x4                         ; 00469dbf
    POP EBP                             ; 00469dc2
    POP EDI                             ; 00469dc3
    POP EBX                             ; 00469dc4
    RET                                 ; 00469dc5
    MOV EAX,dword ptr [ESP + 0x18]      ; 00469dc6
        ;   Label: LAB_00469dc6
    ADD EAX,0x8                         ; 00469dca
    PUSH EAX                            ; 00469dcd
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00469dce
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 00469dd3
    TEST EAX,EAX                        ; 00469dd6
    JZ 0x00469d98                       ; 00469dd8
        ;   XREF to: 00469d98 (CONDITIONAL_JUMP)  ; LAB_00469d98
    JMP 0x00469d29                      ; 00469dda
        ;   XREF to: 00469d29 (UNCONDITIONAL_JUMP)  ; LAB_00469d29
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00469ddf
        ;   Label: LAB_00469ddf
    MOV EDX,dword ptr [EAX + 0x4]       ; 00469de3
    XOR ECX,ECX                         ; 00469de6
    TEST EDX,EDX                        ; 00469de8
    JLE 0x00469d60                      ; 00469dea
        ;   XREF to: 00469d60 (CONDITIONAL_JUMP)  ; LAB_00469d60
    XOR EDX,EDX                         ; 00469df0
    MOV ESI,dword ptr [EAX + 0x18]      ; 00469df2
        ;   Label: LAB_00469df2
    MOV EBP,dword ptr [EBX + 0x20]      ; 00469df5
    MOV dword ptr [ESP + 0x4],ESI       ; 00469df8
    TEST EBP,EBP                        ; 00469dfc
    JZ 0x00469e22                       ; 00469dfe
        ;   XREF to: 00469e22 (CONDITIONAL_JUMP)  ; LAB_00469e22
    MOV ESI,dword ptr [ESP + 0x4]       ; 00469e00
        ;   Label: LAB_00469e00
    MOV dword ptr [EDX + 0x1ba5c84],ESI ; 00469e04 | DAT_01ba5c84 | DAT_01ba5c88
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00469e0a
    ADD EAX,0xc                         ; 00469e0e
    INC ECX                             ; 00469e11
    MOV EDI,dword ptr [ESI + 0x4]       ; 00469e12
    ADD EDX,0x4                         ; 00469e15
    CMP ECX,EDI                         ; 00469e18
    JGE 0x00469d60                      ; 00469e1a
        ;   XREF to: 00469d60 (CONDITIONAL_JUMP)  ; LAB_00469d60
    JMP 0x00469df2                      ; 00469e20
        ;   XREF to: 00469df2 (UNCONDITIONAL_JUMP)  ; LAB_00469df2
    IMUL ESI,ESI,0x30                   ; 00469e22
        ;   Label: LAB_00469e22
    MOV EDI,dword ptr [EBX]             ; 00469e25
    MOV EBP,dword ptr [EAX + 0x1c]      ; 00469e27
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 00469e2a
    MOV EDI,dword ptr [EBX]             ; 00469e2e
    ADD EDI,ESI                         ; 00469e30
    MOV ESI,dword ptr [EAX + 0x20]      ; 00469e32
    MOV dword ptr [EDI + 0x1c],ESI      ; 00469e35
    JMP 0x00469e00                      ; 00469e38
        ;   XREF to: 00469e00 (UNCONDITIONAL_JUMP)  ; LAB_00469e00
    CMP dword ptr [0x006141c0],0x20     ; 00469e3a | DAT_006141c0
        ;   Label: LAB_00469e3a
    JNZ 0x00469e66                      ; 00469e41
        ;   XREF to: 00469e66 (CONDITIONAL_JUMP)  ; LAB_00469e66
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00469e43 | DAT_01c35e6c
    MOV EDI,0x6                         ; 00469e4d
        ;   Label: LAB_00469e4d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00469e52
    MOV dword ptr [0x01c38b58],EDI      ; 00469e56 | DAT_01c38b58
    MOV [0x01c38b54],EAX                ; 00469e5c | DAT_01c38b54
    JMP 0x00469d81                      ; 00469e61
        ;   XREF to: 00469d81 (UNCONDITIONAL_JUMP)  ; LAB_00469d81
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00469e66 | DAT_01c35e6c
        ;   Label: LAB_00469e66
    JMP 0x00469e4d                      ; 00469e70
        ;   XREF to: 00469e4d (UNCONDITIONAL_JUMP)  ; LAB_00469e4d

