; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_chain_cpp_FUN_005b56c0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00601260
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_set.cpp_CDemonSet_computeLighting_FUN_005317c0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880
;   engine_special.cpp_FUN_0055d9ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b56c0
        ;   Label: core_chain.cpp_FUN_005b56c0
    PUSH ESI                            ; 005b56c1
    PUSH EDI                            ; 005b56c2
    PUSH EBP                            ; 005b56c3
    SUB ESP,0xc4                        ; 005b56c4
    MOV EDX,dword ptr [0x0060b280]      ; 005b56ca | DAT_0060b280
    PUSH EDX                            ; 005b56d0
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 005b56d1
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005b56d6
    TEST EAX,EAX                        ; 005b56d9
    JZ 0x005b56ea                       ; 005b56db
        ;   XREF to: 005b56ea (CONDITIONAL_JUMP)  ; LAB_005b56ea
    XOR EAX,EAX                         ; 005b56dd
        ;   Label: LAB_005b56dd
    ADD ESP,0xc4                        ; 005b56df
    POP EBP                             ; 005b56e5
    POP EDI                             ; 005b56e6
    POP ESI                             ; 005b56e7
    POP EBX                             ; 005b56e8
    RET                                 ; 005b56e9
    MOV ECX,dword ptr [ESP + 0xd8]      ; 005b56ea
        ;   Label: LAB_005b56ea
    PUSH ECX                            ; 005b56f1
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 005b56f2
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005b56f7
    PUSH 0x0                            ; 005b56fa
    MOV EBX,dword ptr [ESP + 0xdc]      ; 005b56fc
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005b5703
    PUSH EBX                            ; 005b570a
    MOV EAX,dword ptr [EAX + 0x154]     ; 005b570b
    LEA ESI,[ESP + 0x30]                ; 005b5711
    LEA EDI,[ESP + 0x48]                ; 005b5715
    CALL dword ptr [EAX + 0x1c]         ; 005b5719
    MOV ECX,0x6                         ; 005b571c
    ADD ESP,0x4                         ; 005b5721
    LEA EAX,[ESP + 0x44]                ; 005b5724
    LEA ESI,[ESP + 0x2c]                ; 005b5728
    PUSH EAX                            ; 005b572c
    MOVSD.REP ES:EDI,ESI                ; 005b572d
    CALL core_box.cpp_FUN_0041a840      ; 005b572f
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 005b5734
    PUSH EBX                            ; 005b5737
    MOV dword ptr [EBX + 0x574],EAX     ; 005b5738
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 005b573e
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    MOV EDI,dword ptr [EBX + 0x574]     ; 005b5743
    ADD ESP,0x4                         ; 005b5749
    TEST EDI,EDI                        ; 005b574c
    JZ 0x005b56dd                       ; 005b574e
        ;   XREF to: 005b56dd (CONDITIONAL_JUMP)  ; LAB_005b56dd
    LEA EAX,[EBX + 0x16c]               ; 005b5750
    PUSH EAX                            ; 005b5756
    MOV EBP,dword ptr [0x0060b280]      ; 005b5757 | DAT_0060b280
    PUSH EBP                            ; 005b575d
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 005b575e
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 005b5763
    PUSH 0x0                            ; 005b5766
    MOV EAX,[0x0060b280]                ; 005b5768 | DAT_0060b280
    PUSH EAX                            ; 005b576d
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 005b576e
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    MOV EDX,0x4                         ; 005b5773
    MOV EAX,0x1                         ; 005b5778
    ADD ESP,0x8                         ; 005b577d
    MOV EBX,dword ptr [0x0060b280]      ; 005b5780 | DAT_0060b280
    XOR ECX,ECX                         ; 005b5786
    PUSH 0xffff                         ; 005b5788
    MOV dword ptr [ESP + 0x8],EDX       ; 005b578d
    MOV dword ptr [ESP + 0x18],ECX      ; 005b5791
    MOV dword ptr [ESP + 0x14],ECX      ; 005b5795
    MOV dword ptr [ESP + 0x10],ECX      ; 005b5799
    MOV dword ptr [ESP + 0xc],ECX       ; 005b579d
    MOV dword ptr [ESP + 0x1c],ECX      ; 005b57a1
    MOV dword ptr [ESP + 0x20],EAX      ; 005b57a5
    MOV EDX,0x2                         ; 005b57a9
    MOV ECX,0x3                         ; 005b57ae
    PUSH EBX                            ; 005b57b3
    MOV dword ptr [ESP + 0x28],EDX      ; 005b57b4
    MOV dword ptr [ESP + 0x2c],ECX      ; 005b57b8
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 005b57bc
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 005b57c1
    XOR ESI,ESI                         ; 005b57c4
    PUSH ESI                            ; 005b57c6
    MOV ESI,dword ptr [0x0060b280]      ; 005b57c7 | DAT_0060b280
    PUSH ESI                            ; 005b57cd
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 005b57ce
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005b57d3
    XOR EBP,EBP                         ; 005b57d6
    MOV EDI,dword ptr [ESP + 0xd8]      ; 005b57d8
    MOV ESI,dword ptr [ESP + 0xd8]      ; 005b57df
    ADD EDI,0x28c                       ; 005b57e6
    ADD ESI,0x2b0                       ; 005b57ec
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005b57f2
        ;   Label: LAB_005b57f2
    MOV EAX,dword ptr [EAX + 0x158]     ; 005b57f9
    DEC EAX                             ; 005b57ff
    CMP EBP,EAX                         ; 005b5800
    JGE 0x005b5c86                      ; 005b5802
        ;   XREF to: 005b5c86 (CONDITIONAL_JUMP)  ; LAB_005b5c86
    MOV EAX,[0x0060b280]                ; 005b5808 | DAT_0060b280
    LEA EBX,[ESP + 0x88]                ; 005b580d
    MOV EDX,dword ptr [EAX]             ; 005b5814
    MOV EAX,EDI                         ; 005b5816
    FLD float ptr [EAX]                 ; 005b5818
    FMUL float ptr [0x00601260]         ; 005b581a | DAT_00601260
    FISTP dword ptr [EBX]               ; 005b5820
    FLD float ptr [EAX + 0x4]           ; 005b5822
    FMUL float ptr [0x00601260]         ; 005b5825 | DAT_00601260
    FISTP dword ptr [EBX + 0x4]         ; 005b582b
    FLD float ptr [EAX + 0x8]           ; 005b582e
    FMUL float ptr [0x00601260]         ; 005b5831 | DAT_00601260
    FISTP dword ptr [EBX + 0x8]         ; 005b5837
    LEA EAX,[ESP + 0x88]                ; 005b583a
    PUSH EAX                            ; 005b5841
    PUSH EDX                            ; 005b5842
    CALL engine_special.cpp_FUN_0055d9ec ; 005b5843
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 005b5848 | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 005b584d
    ADD ESP,0x8                         ; 005b584f
    LEA EDX,[EAX + 0x30]                ; 005b5852
    LEA EBX,[ESP + 0x58]                ; 005b5855
    MOV EAX,EDI                         ; 005b5859
    FLD float ptr [EAX]                 ; 005b585b
    FMUL float ptr [0x00601260]         ; 005b585d | DAT_00601260
    FISTP dword ptr [EBX]               ; 005b5863
    FLD float ptr [EAX + 0x4]           ; 005b5865
    FMUL float ptr [0x00601260]         ; 005b5868 | DAT_00601260
    FISTP dword ptr [EBX + 0x4]         ; 005b586e
    FLD float ptr [EAX + 0x8]           ; 005b5871
    FMUL float ptr [0x00601260]         ; 005b5874 | DAT_00601260
    FISTP dword ptr [EBX + 0x8]         ; 005b587a
    LEA EAX,[ESP + 0x58]                ; 005b587d
    PUSH EAX                            ; 005b5881
    PUSH EDX                            ; 005b5882
    CALL engine_special.cpp_FUN_0055d9ec ; 005b5883
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 005b5888 | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 005b588d
    ADD ESP,0x8                         ; 005b588f
    LEA EDX,[EAX + 0x60]                ; 005b5892
    LEA EBX,[ESP + 0x7c]                ; 005b5895
    MOV EAX,ESI                         ; 005b5899
    FLD float ptr [EAX]                 ; 005b589b
    FMUL float ptr [0x00601260]         ; 005b589d | DAT_00601260
    FISTP dword ptr [EBX]               ; 005b58a3
    FLD float ptr [EAX + 0x4]           ; 005b58a5
    FMUL float ptr [0x00601260]         ; 005b58a8 | DAT_00601260
    FISTP dword ptr [EBX + 0x4]         ; 005b58ae
    FLD float ptr [EAX + 0x8]           ; 005b58b1
    FMUL float ptr [0x00601260]         ; 005b58b4 | DAT_00601260
    FISTP dword ptr [EBX + 0x8]         ; 005b58ba
    LEA EAX,[ESP + 0x7c]                ; 005b58bd
    PUSH EAX                            ; 005b58c1
    PUSH EDX                            ; 005b58c2
    CALL engine_special.cpp_FUN_0055d9ec ; 005b58c3
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 005b58c8 | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 005b58cd
    ADD ESP,0x8                         ; 005b58cf
    LEA EDX,[EAX + 0x90]                ; 005b58d2
    LEA EBX,[ESP + 0xac]                ; 005b58d8
    MOV EAX,ESI                         ; 005b58df
    FLD float ptr [EAX]                 ; 005b58e1
    FMUL float ptr [0x00601260]         ; 005b58e3 | DAT_00601260
    FISTP dword ptr [EBX]               ; 005b58e9
    FLD float ptr [EAX + 0x4]           ; 005b58eb
    FMUL float ptr [0x00601260]         ; 005b58ee | DAT_00601260
    FISTP dword ptr [EBX + 0x4]         ; 005b58f4
    FLD float ptr [EAX + 0x8]           ; 005b58f7
    FMUL float ptr [0x00601260]         ; 005b58fa | DAT_00601260
    FISTP dword ptr [EBX + 0x8]         ; 005b5900
    LEA EAX,[ESP + 0xac]                ; 005b5903
    PUSH EAX                            ; 005b590a
    PUSH EDX                            ; 005b590b
    CALL engine_special.cpp_FUN_0055d9ec ; 005b590c
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 005b5911 | DAT_0060b280
    MOV EBX,dword ptr [EAX]             ; 005b5916
    SUB dword ptr [EBX + 0x4],0x40      ; 005b5918
    MOV EBX,dword ptr [EAX]             ; 005b591c
    ADD dword ptr [EBX + 0x34],0x40     ; 005b591e
    MOV EBX,dword ptr [EAX]             ; 005b5922
    ADD dword ptr [EBX + 0x64],0x40     ; 005b5924
    MOV EBX,dword ptr [EAX]             ; 005b5928
    SUB dword ptr [EBX + 0x94],0x40     ; 005b592a
    MOV EDX,dword ptr [EAX]             ; 005b5931
    MOV dword ptr [EDX + 0x10],0x80000000 ; 005b5933
    MOV EDX,dword ptr [EAX]             ; 005b593a
    MOV dword ptr [EDX + 0x40],0x80000000 ; 005b593c
    MOV EDX,dword ptr [EAX]             ; 005b5943
    MOV dword ptr [EDX + 0x70],0x80000000 ; 005b5945
    MOV EDX,dword ptr [EAX]             ; 005b594c
    MOV dword ptr [EDX + 0xa0],0x80000000 ; 005b594e
    MOV EDX,dword ptr [EAX]             ; 005b5958
    MOV dword ptr [EDX + 0x18],0x80000  ; 005b595a
    MOV EDX,dword ptr [EAX]             ; 005b5961
    MOV dword ptr [EDX + 0x1c],0x80000  ; 005b5963
    MOV EDX,dword ptr [EAX]             ; 005b596a
    MOV dword ptr [EDX + 0x48],0x80000  ; 005b596c
    MOV EDX,dword ptr [EAX]             ; 005b5973
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 005b5975
    MOV EDX,dword ptr [EAX]             ; 005b597c
    MOV dword ptr [EDX + 0x78],0xf80000 ; 005b597e
    MOV EDX,dword ptr [EAX]             ; 005b5985
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 005b5987
    MOV EDX,dword ptr [EAX]             ; 005b598e
    MOV dword ptr [EDX + 0xa8],0xf80000 ; 005b5990
    MOV EAX,dword ptr [EAX]             ; 005b599a
    ADD ESP,0x8                         ; 005b599c
    LEA EBX,[ESP + 0x64]                ; 005b599f
    MOV dword ptr [EAX + 0xac],0x80000  ; 005b59a3
    MOV EAX,EDI                         ; 005b59ad
    FLD float ptr [EAX]                 ; 005b59af
    FMUL float ptr [0x00601260]         ; 005b59b1 | DAT_00601260
    FISTP dword ptr [EBX]               ; 005b59b7
    FLD float ptr [EAX + 0x4]           ; 005b59b9
    FMUL float ptr [0x00601260]         ; 005b59bc | DAT_00601260
    FISTP dword ptr [EBX + 0x4]         ; 005b59c2
    FLD float ptr [EAX + 0x8]           ; 005b59c5
    FMUL float ptr [0x00601260]         ; 005b59c8 | DAT_00601260
    FISTP dword ptr [EBX + 0x8]         ; 005b59ce
    PUSH 0x2                            ; 005b59d1
    PUSH 0x0                            ; 005b59d3
    PUSH 0x0                            ; 005b59d5
    LEA EAX,[ESP + 0x70]                ; 005b59d7
    PUSH EAX                            ; 005b59db
    MOV EBX,dword ptr [0x0061b5a8]      ; 005b59dc | g_CDemonSetPtr
    PUSH EBX                            ; 005b59e2
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_005317c0 ; 005b59e3
        ;   XREF to: 005317c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_005317c0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 005b59e8
    LEA EBX,[ESP + 0x64]                ; 005b59eb
    MOV EAX,ESI                         ; 005b59ef
    FLD float ptr [EAX]                 ; 005b59f1
    FMUL float ptr [0x00601260]         ; 005b59f3 | DAT_00601260
    FISTP dword ptr [EBX]               ; 005b59f9
    FLD float ptr [EAX + 0x4]           ; 005b59fb
    FMUL float ptr [0x00601260]         ; 005b59fe | DAT_00601260
    FISTP dword ptr [EBX + 0x4]         ; 005b5a04
    FLD float ptr [EAX + 0x8]           ; 005b5a07
    FMUL float ptr [0x00601260]         ; 005b5a0a | DAT_00601260
    FISTP dword ptr [EBX + 0x8]         ; 005b5a10
    PUSH 0x2                            ; 005b5a13
    PUSH 0x2                            ; 005b5a15
    PUSH 0x0                            ; 005b5a17
    LEA EAX,[ESP + 0x70]                ; 005b5a19
    PUSH EAX                            ; 005b5a1d
    MOV EAX,[0x0061b5a8]                ; 005b5a1e | g_CDemonSetPtr
    PUSH EAX                            ; 005b5a23
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_005317c0 ; 005b5a24
        ;   XREF to: 005317c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_005317c0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 005b5a29
    MOV EAX,ESP                         ; 005b5a2c
    PUSH EAX                            ; 005b5a2e
    MOV EDX,dword ptr [0x0060b280]      ; 005b5a2f | DAT_0060b280
    PUSH EDX                            ; 005b5a35
    LEA EBX,[ESP + 0x78]                ; 005b5a36
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 ; 005b5a3a
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EDX,dword ptr [0x0060b280]      ; 005b5a3f | DAT_0060b280
    ADD ESP,0x8                         ; 005b5a45
    MOV EAX,EDI                         ; 005b5a48
    MOV EDX,dword ptr [EDX]             ; 005b5a4a
    FLD float ptr [EAX]                 ; 005b5a4c
    FMUL float ptr [0x00601260]         ; 005b5a4e | DAT_00601260
    FISTP dword ptr [EBX]               ; 005b5a54
    FLD float ptr [EAX + 0x4]           ; 005b5a56
    FMUL float ptr [0x00601260]         ; 005b5a59 | DAT_00601260
    FISTP dword ptr [EBX + 0x4]         ; 005b5a5f
    FLD float ptr [EAX + 0x8]           ; 005b5a62
    FMUL float ptr [0x00601260]         ; 005b5a65 | DAT_00601260
    FISTP dword ptr [EBX + 0x8]         ; 005b5a6b
    LEA EAX,[ESP + 0x70]                ; 005b5a6e
    PUSH EAX                            ; 005b5a72
    PUSH EDX                            ; 005b5a73
    CALL engine_special.cpp_FUN_0055d9ec ; 005b5a74
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 005b5a79 | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 005b5a7e
    ADD ESP,0x8                         ; 005b5a80
    LEA EDX,[EAX + 0x30]                ; 005b5a83
    LEA EBX,[ESP + 0xa0]                ; 005b5a86
    MOV EAX,EDI                         ; 005b5a8d
    FLD float ptr [EAX]                 ; 005b5a8f
    FMUL float ptr [0x00601260]         ; 005b5a91 | DAT_00601260
    FISTP dword ptr [EBX]               ; 005b5a97
    FLD float ptr [EAX + 0x4]           ; 005b5a99
    FMUL float ptr [0x00601260]         ; 005b5a9c | DAT_00601260
    FISTP dword ptr [EBX + 0x4]         ; 005b5aa2
    FLD float ptr [EAX + 0x8]           ; 005b5aa5
    FMUL float ptr [0x00601260]         ; 005b5aa8 | DAT_00601260
    FISTP dword ptr [EBX + 0x8]         ; 005b5aae
    LEA EAX,[ESP + 0xa0]                ; 005b5ab1
    PUSH EAX                            ; 005b5ab8
    PUSH EDX                            ; 005b5ab9
    CALL engine_special.cpp_FUN_0055d9ec ; 005b5aba
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005b5abf
    MOV EAX,[0x0060b280]                ; 005b5ac2 | DAT_0060b280
    LEA EBX,[ESP + 0xb8]                ; 005b5ac7
    MOV EDX,dword ptr [EAX]             ; 005b5ace
    MOV EAX,ESI                         ; 005b5ad0
    FLD float ptr [EAX]                 ; 005b5ad2
    FMUL float ptr [0x00601260]         ; 005b5ad4 | DAT_00601260
    FISTP dword ptr [EBX]               ; 005b5ada
    FLD float ptr [EAX + 0x4]           ; 005b5adc
    FMUL float ptr [0x00601260]         ; 005b5adf | DAT_00601260
    FISTP dword ptr [EBX + 0x4]         ; 005b5ae5
    FLD float ptr [EAX + 0x8]           ; 005b5ae8
    FMUL float ptr [0x00601260]         ; 005b5aeb | DAT_00601260
    FISTP dword ptr [EBX + 0x8]         ; 005b5af1
    LEA EAX,[ESP + 0xb8]                ; 005b5af4
    PUSH EAX                            ; 005b5afb
    ADD EDX,0x60                        ; 005b5afc
    PUSH EDX                            ; 005b5aff
    CALL engine_special.cpp_FUN_0055d9ec ; 005b5b00
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 005b5b05 | DAT_0060b280
    LEA EBX,[ESP + 0x9c]                ; 005b5b0a
    ADD ESP,0x8                         ; 005b5b11
    MOV EDX,dword ptr [EAX]             ; 005b5b14
    MOV EAX,ESI                         ; 005b5b16
    FLD float ptr [EAX]                 ; 005b5b18
    FMUL float ptr [0x00601260]         ; 005b5b1a | DAT_00601260
    FISTP dword ptr [EBX]               ; 005b5b20
    FLD float ptr [EAX + 0x4]           ; 005b5b22
    FMUL float ptr [0x00601260]         ; 005b5b25 | DAT_00601260
    FISTP dword ptr [EBX + 0x4]         ; 005b5b2b
    FLD float ptr [EAX + 0x8]           ; 005b5b2e
    FMUL float ptr [0x00601260]         ; 005b5b31 | DAT_00601260
    FISTP dword ptr [EBX + 0x8]         ; 005b5b37
    LEA EAX,[ESP + 0x94]                ; 005b5b3a
    PUSH EAX                            ; 005b5b41
    ADD EDX,0x90                        ; 005b5b42
    PUSH EDX                            ; 005b5b48
    CALL engine_special.cpp_FUN_0055d9ec ; 005b5b49
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 005b5b4e | DAT_0060b280
    MOV EBX,dword ptr [EAX]             ; 005b5b53
    SUB dword ptr [EBX],0x40            ; 005b5b55
    MOV EBX,dword ptr [EAX]             ; 005b5b58
    ADD dword ptr [EBX + 0x30],0x40     ; 005b5b5a
    MOV EBX,dword ptr [EAX]             ; 005b5b5e
    ADD dword ptr [EBX + 0x60],0x40     ; 005b5b60
    MOV EBX,dword ptr [EAX]             ; 005b5b64
    SUB dword ptr [EBX + 0x90],0x40     ; 005b5b66
    MOV EDX,dword ptr [EAX]             ; 005b5b6d
    MOV dword ptr [EDX + 0x10],0x80000000 ; 005b5b6f
    MOV EDX,dword ptr [EAX]             ; 005b5b76
    MOV dword ptr [EDX + 0x40],0x80000000 ; 005b5b78
    MOV EDX,dword ptr [EAX]             ; 005b5b7f
    MOV dword ptr [EDX + 0x70],0x80000000 ; 005b5b81
    MOV EDX,dword ptr [EAX]             ; 005b5b88
    MOV dword ptr [EDX + 0xa0],0x80000000 ; 005b5b8a
    MOV EDX,dword ptr [EAX]             ; 005b5b94
    MOV dword ptr [EDX + 0x18],0x80000  ; 005b5b96
    MOV EDX,dword ptr [EAX]             ; 005b5b9d
    MOV dword ptr [EDX + 0x1c],0x80000  ; 005b5b9f
    MOV EDX,dword ptr [EAX]             ; 005b5ba6
    MOV dword ptr [EDX + 0x48],0x80000  ; 005b5ba8
    MOV EDX,dword ptr [EAX]             ; 005b5baf
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 005b5bb1
    MOV EDX,dword ptr [EAX]             ; 005b5bb8
    MOV dword ptr [EDX + 0x78],0xf80000 ; 005b5bba
    MOV EDX,dword ptr [EAX]             ; 005b5bc1
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 005b5bc3
    MOV EDX,dword ptr [EAX]             ; 005b5bca
    MOV dword ptr [EDX + 0xa8],0xf80000 ; 005b5bcc
    MOV EAX,dword ptr [EAX]             ; 005b5bd6
    ADD ESP,0x8                         ; 005b5bd8
    LEA EBX,[ESP + 0x64]                ; 005b5bdb
    MOV dword ptr [EAX + 0xac],0x80000  ; 005b5bdf
    MOV EAX,EDI                         ; 005b5be9
    FLD float ptr [EAX]                 ; 005b5beb
    FMUL float ptr [0x00601260]         ; 005b5bed | DAT_00601260
    FISTP dword ptr [EBX]               ; 005b5bf3
    FLD float ptr [EAX + 0x4]           ; 005b5bf5
    FMUL float ptr [0x00601260]         ; 005b5bf8 | DAT_00601260
    FISTP dword ptr [EBX + 0x4]         ; 005b5bfe
    FLD float ptr [EAX + 0x8]           ; 005b5c01
    FMUL float ptr [0x00601260]         ; 005b5c04 | DAT_00601260
    FISTP dword ptr [EBX + 0x8]         ; 005b5c0a
    PUSH 0x2                            ; 005b5c0d
    PUSH 0x0                            ; 005b5c0f
    PUSH 0x0                            ; 005b5c11
    LEA EAX,[ESP + 0x70]                ; 005b5c13
    PUSH EAX                            ; 005b5c17
    MOV ECX,dword ptr [0x0061b5a8]      ; 005b5c18 | g_CDemonSetPtr
    PUSH ECX                            ; 005b5c1e
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_005317c0 ; 005b5c1f
        ;   XREF to: 005317c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_005317c0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 005b5c24
    LEA EBX,[ESP + 0x64]                ; 005b5c27
    MOV EAX,ESI                         ; 005b5c2b
    FLD float ptr [EAX]                 ; 005b5c2d
    FMUL float ptr [0x00601260]         ; 005b5c2f | DAT_00601260
    FISTP dword ptr [EBX]               ; 005b5c35
    FLD float ptr [EAX + 0x4]           ; 005b5c37
    FMUL float ptr [0x00601260]         ; 005b5c3a | DAT_00601260
    FISTP dword ptr [EBX + 0x4]         ; 005b5c40
    FLD float ptr [EAX + 0x8]           ; 005b5c43
    FMUL float ptr [0x00601260]         ; 005b5c46 | DAT_00601260
    FISTP dword ptr [EBX + 0x8]         ; 005b5c4c
    PUSH 0x2                            ; 005b5c4f
    PUSH 0x2                            ; 005b5c51
    PUSH 0x0                            ; 005b5c53
    LEA EAX,[ESP + 0x70]                ; 005b5c55
    PUSH EAX                            ; 005b5c59
    MOV EBX,dword ptr [0x0061b5a8]      ; 005b5c5a | g_CDemonSetPtr
    PUSH EBX                            ; 005b5c60
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_005317c0 ; 005b5c61
        ;   XREF to: 005317c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_005317c0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 005b5c66
    MOV EAX,ESP                         ; 005b5c69
    PUSH EAX                            ; 005b5c6b
    MOV EAX,[0x0060b280]                ; 005b5c6c | DAT_0060b280
    ADD EDI,0x24                        ; 005b5c71
    PUSH EAX                            ; 005b5c74
    INC EBP                             ; 005b5c75
    ADD ESI,0x24                        ; 005b5c76
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 ; 005b5c79
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 005b5c7e
    JMP 0x005b57f2                      ; 005b5c81
        ;   XREF to: 005b57f2 (UNCONDITIONAL_JUMP)  ; LAB_005b57f2
    MOV EAX,0x1                         ; 005b5c86
        ;   Label: LAB_005b5c86
    ADD ESP,0xc4                        ; 005b5c8b
    POP EBP                             ; 005b5c91
    POP EDI                             ; 005b5c92
    POP ESI                             ; 005b5c93
    POP EBX                             ; 005b5c94
    RET                                 ; 005b5c95

