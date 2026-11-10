; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderEnvMapPrimitives_FUN_00533810(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha,int stride)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prims
; int              Stack[0xc]:4   count
; int              Stack[0x10]:4   alpha
; int              Stack[0x14]:4   stride
; Local Variables:
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_set.cpp_CDemonSet_renderEnvMapBatchQuad_FUN_005337e0 at 005337f8
;   core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_005337b0 at 005337c8
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141d8
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_0061b8c4
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c38aec
;   undefined4 g_CGameInstance.render_mode
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046a030
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046a7d0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_matrix.c_FUN_0046b5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533810
        ;   Label: core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00533810
    PUSH ESI                            ; 00533811
    PUSH EDI                            ; 00533812
    PUSH EBP                            ; 00533813
    SUB ESP,0xe4                        ; 00533814
    MOV EBP,dword ptr [ESP + 0xfc]      ; 0053381a
    PUSH 0x61b8c4                       ; 00533821 | DAT_0061b8c4
    MOV EDX,dword ptr [0x0060b280]      ; 00533826 | DAT_0060b280
    PUSH EDX                            ; 0053382c | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0053382d
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x00616494]                ; 00533832 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x210]     ; 00533837 | g_CGameInstance.render_mode
    ADD ESP,0x8                         ; 0053383d
    CMP ECX,0x2                         ; 00533840
    JNZ 0x00533a29                      ; 00533843
        ;   XREF to: 00533a29 (CONDITIONAL_JUMP)  ; LAB_00533a29
    MOV EAX,[0x006141d8]                ; 00533849 | DAT_006141d8
    SHL EAX,0x8                         ; 0053384e
    MOV dword ptr [ESP + 0x104],EAX     ; 00533851
    MOV EAX,[0x0060b280]                ; 00533858 | DAT_0060b280
        ;   Label: LAB_00533858
    PUSH EAX                            ; 0053385d | DAT_01ba5c50
    LEA ESI,[ESP + 0xd8]                ; 0053385e
    CALL engine_matrix.c_FUN_0046b5c0   ; 00533865
        ;   XREF to: 0046b5c0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046b5c0()
    ADD ESP,0x4                         ; 0053386a
    XOR EDX,EDX                         ; 0053386d
    MOV ECX,dword ptr [ESP + 0x100]     ; 0053386f
    MOV dword ptr [ESP + 0xe0],EDX      ; 00533876
    TEST ECX,ECX                        ; 0053387d
    JLE 0x00533a1e                      ; 0053387f
        ;   XREF to: 00533a1e (CONDITIONAL_JUMP)  ; LAB_00533a1e
    MOV ECX,0x12                        ; 00533885
        ;   Label: LAB_00533885
    MOV EDI,ESP                         ; 0053388a
    MOV ESI,EBP                         ; 0053388c
    MOVSD.REP ES:EDI,ESI                ; 0053388e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00533890
    XOR ECX,ECX                         ; 00533894
    TEST EAX,EAX                        ; 00533896
    JLE 0x005338f6                      ; 00533898
        ;   XREF to: 005338f6 (CONDITIONAL_JUMP)  ; LAB_005338f6
    XOR ESI,ESI                         ; 0053389a
    XOR EDX,EDX                         ; 0053389c
    MOV EAX,dword ptr [ESP + ESI*0x1 + 0x18] ; 0053389e
        ;   Label: LAB_0053389e
    IMUL EAX,EAX,0xc                    ; 005338a2
    LEA EBX,[ESP + 0xc8]                ; 005338a5
    ADD EDX,0x4                         ; 005338ac
    ADD ESI,0xc                         ; 005338af
    ADD EAX,0x2054df4                   ; 005338b2
    INC ECX                             ; 005338b7
    FLD float ptr [EAX]                 ; 005338b8
    FISTP dword ptr [EBX]               ; 005338ba
    FLD float ptr [EAX + 0x4]           ; 005338bc
    FISTP dword ptr [EBX + 0x4]         ; 005338bf
    FLD float ptr [EAX + 0x8]           ; 005338c2
    FISTP dword ptr [EBX + 0x8]         ; 005338c5
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005338c8
    MOV EBX,dword ptr [ESP + 0xc8]      ; 005338cf
    NEG EAX                             ; 005338d6
    ADD EBX,0x8000                      ; 005338d8
    ADD EAX,0x8000                      ; 005338de
    MOV dword ptr [ESP + EDX*0x1 + 0x84],EBX ; 005338e3
    MOV EBX,dword ptr [ESP + 0x4]       ; 005338ea
    MOV dword ptr [ESP + EDX*0x1 + 0x44],EAX ; 005338ee
    CMP ECX,EBX                         ; 005338f2
    JL 0x0053389e                       ; 005338f4
        ;   XREF to: 0053389e (CONDITIONAL_JUMP)  ; LAB_0053389e
    MOV ESI,dword ptr [ESP + 0x4]       ; 005338f6
        ;   Label: LAB_005338f6
    CMP ESI,0x1                         ; 005338fa
    JLE 0x0053399e                      ; 005338fd
        ;   XREF to: 0053399e (CONDITIONAL_JUMP)  ; LAB_0053399e
    MOV EAX,0x4                         ; 00533903
    LEA ECX,[ESI*0x4 + 0x0]             ; 00533908
    CMP dword ptr [ESP + 0x88],0x8000   ; 0053390f
        ;   Label: LAB_0053390f
    JLE 0x00533931                      ; 0053391a
        ;   XREF to: 00533931 (CONDITIONAL_JUMP)  ; LAB_00533931
    CMP dword ptr [ESP + EAX*0x1 + 0x88],0xffff8000 ; 0053391c
    JGE 0x00533931                      ; 00533927
        ;   XREF to: 00533931 (CONDITIONAL_JUMP)  ; LAB_00533931
    INC word ptr [ESP + EAX*0x1 + 0x8a] ; 00533929
    CMP dword ptr [ESP + 0x88],0xffff8000 ; 00533931
        ;   Label: LAB_00533931
    JGE 0x0053395a                      ; 0053393c
        ;   XREF to: 0053395a (CONDITIONAL_JUMP)  ; LAB_0053395a
    MOV EDI,dword ptr [ESP + EAX*0x1 + 0x88] ; 0053393e
    CMP EDI,0x8000                      ; 00533945
    JLE 0x0053395a                      ; 0053394b
        ;   XREF to: 0053395a (CONDITIONAL_JUMP)  ; LAB_0053395a
    LEA EDX,[EDI + 0xffff0000]          ; 0053394d
    MOV dword ptr [ESP + EAX*0x1 + 0x88],EDX ; 00533953
    CMP dword ptr [ESP + 0x48],0x8000   ; 0053395a
        ;   Label: LAB_0053395a
    JLE 0x00533973                      ; 00533962
        ;   XREF to: 00533973 (CONDITIONAL_JUMP)  ; LAB_00533973
    CMP dword ptr [ESP + EAX*0x1 + 0x48],0xffff8000 ; 00533964
    JGE 0x00533973                      ; 0053396c
        ;   XREF to: 00533973 (CONDITIONAL_JUMP)  ; LAB_00533973
    INC word ptr [ESP + EAX*0x1 + 0x4a] ; 0053396e
    CMP dword ptr [ESP + 0x48],0xffff8000 ; 00533973
        ;   Label: LAB_00533973
    JGE 0x00533993                      ; 0053397b
        ;   XREF to: 00533993 (CONDITIONAL_JUMP)  ; LAB_00533993
    MOV EDX,dword ptr [ESP + EAX*0x1 + 0x48] ; 0053397d
    CMP EDX,0x8000                      ; 00533981
    JLE 0x00533993                      ; 00533987
        ;   XREF to: 00533993 (CONDITIONAL_JUMP)  ; LAB_00533993
    LEA EBX,[EDX + 0xffff0000]          ; 00533989
    MOV dword ptr [ESP + EAX*0x1 + 0x48],EBX ; 0053398f
    ADD EAX,0x4                         ; 00533993
        ;   Label: LAB_00533993
    CMP EAX,ECX                         ; 00533996
    JL 0x0053390f                       ; 00533998
        ;   XREF to: 0053390f (CONDITIONAL_JUMP)  ; LAB_0053390f
    MOV EDI,dword ptr [ESP + 0x4]       ; 0053399e
        ;   Label: LAB_0053399e
    XOR ECX,ECX                         ; 005339a2
    TEST EDI,EDI                        ; 005339a4
    JLE 0x005339d4                      ; 005339a6
        ;   XREF to: 005339d4 (CONDITIONAL_JUMP)  ; LAB_005339d4
    XOR EAX,EAX                         ; 005339a8
    XOR EDX,EDX                         ; 005339aa
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x88] ; 005339ac
        ;   Label: LAB_005339ac
    SHL EBX,0x8                         ; 005339b3
    MOV dword ptr [ESP + EDX*0x1 + 0x1c],EBX ; 005339b6
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x48] ; 005339ba
    ADD EDX,0xc                         ; 005339be
    SHL EBX,0x8                         ; 005339c1
    MOV dword ptr [ESP + EDX*0x1 + 0x14],EBX ; 005339c4
    INC ECX                             ; 005339c8
    MOV ESI,dword ptr [ESP + 0x4]       ; 005339c9
    ADD EAX,0x4                         ; 005339cd
    CMP ECX,ESI                         ; 005339d0
    JL 0x005339ac                       ; 005339d2
        ;   XREF to: 005339ac (CONDITIONAL_JUMP)  ; LAB_005339ac
    CMP dword ptr [ESP + 0x104],0xfde8  ; 005339d4
        ;   Label: LAB_005339d4
    JLE 0x00533a69                      ; 005339df
        ;   XREF to: 00533a69 (CONDITIONAL_JUMP)  ; LAB_00533a69
    MOV EAX,ESP                         ; 005339e5
    PUSH EAX                            ; 005339e7
    MOV EDX,dword ptr [0x0060b280]      ; 005339e8 | DAT_0060b280
    PUSH EDX                            ; 005339ee | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046a030 ; 005339ef
        ;   XREF to: 0046a030 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046a030(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 005339f4
        ;   Label: LAB_005339f4
    MOV EBX,dword ptr [ESP + 0x108]     ; 005339f7
    MOV ESI,dword ptr [ESP + 0xe0]      ; 005339fe
    MOV EDI,dword ptr [ESP + 0x100]     ; 00533a05
    INC ESI                             ; 00533a0c
    ADD EBP,EBX                         ; 00533a0d
    MOV dword ptr [ESP + 0xe0],ESI      ; 00533a0f
    CMP ESI,EDI                         ; 00533a16
    JL 0x00533885                       ; 00533a18
        ;   XREF to: 00533885 (CONDITIONAL_JUMP)  ; LAB_00533885
    ADD ESP,0xe4                        ; 00533a1e
        ;   Label: LAB_00533a1e
    POP EBP                             ; 00533a24
    POP EDI                             ; 00533a25
    POP ESI                             ; 00533a26
    POP EBX                             ; 00533a27
    RET                                 ; 00533a28
    MOV EAX,0xffff                      ; 00533a29
        ;   Label: LAB_00533a29
    MOV EBX,dword ptr [0x01c38aec]      ; 00533a2e | DAT_01c38aec
    MOV EDX,dword ptr [ESP + 0x104]     ; 00533a34
    SUB EAX,EBX                         ; 00533a3b
    IMUL EDX                            ; 00533a3d
    SHRD EAX,EDX,0x10                   ; 00533a3f
    PUSH EAX                            ; 00533a43
    MOV ESI,dword ptr [0x0060b280]      ; 00533a44 | DAT_0060b280
    PUSH ESI                            ; 00533a4a | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 00533a4b
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00533a50
    PUSH 0x0                            ; 00533a53
    MOV EDI,dword ptr [0x0060b280]      ; 00533a55 | DAT_0060b280
    PUSH EDI                            ; 00533a5b | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 00533a5c
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00533a61
    JMP 0x00533858                      ; 00533a64
        ;   XREF to: 00533858 (UNCONDITIONAL_JUMP)  ; LAB_00533858
    MOV EAX,ESP                         ; 00533a69
        ;   Label: LAB_00533a69
    PUSH EAX                            ; 00533a6b
    MOV EAX,[0x0060b280]                ; 00533a6c | DAT_0060b280
    PUSH EAX                            ; 00533a71 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046a7d0 ; 00533a72
        ;   XREF to: 0046a7d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046a7d0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    JMP 0x005339f4                      ; 00533a77
        ;   XREF to: 005339f4 (UNCONDITIONAL_JUMP)  ; LAB_005339f4

