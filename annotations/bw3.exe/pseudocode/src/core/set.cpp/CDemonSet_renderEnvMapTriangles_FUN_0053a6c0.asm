; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_0053a6c0(CDemonSet *this_ptr,SInputFace *face_data,int count,int alpha)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SInputFace *     Stack[0x8]:4   face_data
; int              Stack[0xc]:4   count
; int              Stack[0x10]:4   alpha
; Local Variables:
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0053ac80 at 0053ace3
;
; Referenced Globals:
;   undefined4 DAT_005e3bc0
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fba38
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_00603e44
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6e24c
;   undefined4 g_CGameInstance.render_mode
;   undefined4 DAT_0207ffac
;   undefined4 DAT_0207ffb0
;   undefined4 DAT_0207ffb4
;   undefined4 DAT_020d4f70
;   undefined4 DAT_020d4f74
;   undefined4 DAT_020d4f78
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046c3b0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_drender.cpp_FUN_0046d1a0
;   engine_keyframe.c_calculateSurfaceNormal_FUN_004dece0
;   engine_matrix.c_normalizeVector3DFloat_FUN_004e61c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a6c0
        ;   Label: core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_0053a6c0
    PUSH ESI                            ; 0053a6c1
    PUSH EDI                            ; 0053a6c2
    PUSH EBP                            ; 0053a6c3
    MOV EBP,ESP                         ; 0053a6c4
    SUB ESP,0x108                       ; 0053a6c6
    AND ESP,0xfffffff8                  ; 0053a6cc
    PUSH 0x603e44                       ; 0053a6cf | DAT_00603e44
    MOV EDX,dword ptr [0x005f2afc]      ; 0053a6d4 | DAT_005f2afc
    PUSH EDX                            ; 0053a6da | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0053a6db
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x005fe9dc]                ; 0053a6e0 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x218]     ; 0053a6e5 | g_CGameInstance.render_mode
    ADD ESP,0x8                         ; 0053a6eb
    CMP ECX,0x2                         ; 0053a6ee
    JNZ 0x0053aa82                      ; 0053a6f1
        ;   XREF to: 0053aa82 (CONDITIONAL_JUMP)  ; LAB_0053aa82
    MOV EAX,[0x005fba38]                ; 0053a6f7 | DAT_005fba38
    SHL EAX,0x8                         ; 0053a6fc
    MOV dword ptr [EBP + 0x20],EAX      ; 0053a6ff
    MOV EAX,[0x005f2afc]                ; 0053a702 | DAT_005f2afc
        ;   Label: LAB_0053a702
    PUSH EAX                            ; 0053a707 | DAT_01bdd7e4
    LEA ESI,[ESP + 0xd8]                ; 0053a708
    CALL engine_drender.cpp_FUN_0046d1a0 ; 0053a70f
        ;   XREF to: 0046d1a0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046d1a0()
    ADD ESP,0x4                         ; 0053a714
    XOR EDX,EDX                         ; 0053a717
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0053a719
    MOV dword ptr [ESP + 0xf8],EDX      ; 0053a71c
    TEST ECX,ECX                        ; 0053a723
    JLE 0x0053aa7b                      ; 0053a725
        ;   XREF to: 0053aa7b (CONDITIONAL_JUMP)  ; LAB_0053aa7b
    XOR EDX,EDX                         ; 0053a72b
        ;   Label: LAB_0053a72b
    MOV EAX,0x3                         ; 0053a72d
    MOV dword ptr [ESP + 0x14],EDX      ; 0053a732
    MOV dword ptr [ESP + 0x10],EDX      ; 0053a736
    MOV dword ptr [ESP + 0xc],EDX       ; 0053a73a
    MOV dword ptr [ESP + 0x8],EDX       ; 0053a73e
    MOV EDX,dword ptr [EBP + 0x18]      ; 0053a742
    MOV dword ptr [ESP + 0x4],EAX       ; 0053a745
    XOR EAX,EAX                         ; 0053a749
    MOV AX,word ptr [EDX]               ; 0053a74b
    MOV dword ptr [ESP + 0x18],EAX      ; 0053a74e
    XOR EAX,EAX                         ; 0053a752
    MOV AX,word ptr [EDX + 0x2]         ; 0053a754
    MOV dword ptr [ESP + 0x24],EAX      ; 0053a758
    XOR EAX,EAX                         ; 0053a75c
    MOV AX,word ptr [EDX + 0x4]         ; 0053a75e
    MOV dword ptr [ESP + 0x30],EAX      ; 0053a762
    XOR EAX,EAX                         ; 0053a766
    MOV AX,word ptr [EDX + 0x6]         ; 0053a768
    SHL EAX,0x8                         ; 0053a76c
    MOV dword ptr [ESP + 0x1c],EAX      ; 0053a76f
    XOR EAX,EAX                         ; 0053a773
    MOV AX,word ptr [EDX + 0x8]         ; 0053a775
    SHL EAX,0x8                         ; 0053a779
    MOV dword ptr [ESP + 0x28],EAX      ; 0053a77c
    XOR EAX,EAX                         ; 0053a780
    MOV AX,word ptr [EDX + 0xa]         ; 0053a782
    SHL EAX,0x8                         ; 0053a786
    MOV dword ptr [ESP + 0x34],EAX      ; 0053a789
    XOR EAX,EAX                         ; 0053a78d
    MOV AX,word ptr [EDX + 0xc]         ; 0053a78f
    SHL EAX,0x8                         ; 0053a793
    MOV dword ptr [ESP + 0x20],EAX      ; 0053a796
    XOR EAX,EAX                         ; 0053a79a
    MOV AX,word ptr [EDX + 0xe]         ; 0053a79c
    SHL EAX,0x8                         ; 0053a7a0
    MOV dword ptr [ESP + 0x2c],EAX      ; 0053a7a3
    XOR EAX,EAX                         ; 0053a7a7
    MOV AX,word ptr [EDX + 0x10]        ; 0053a7a9
    SHL EAX,0x8                         ; 0053a7ad
    MOV dword ptr [ESP + 0x38],EAX      ; 0053a7b0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053a7b4
    CMP dword ptr [EAX + 0x15ae98],0x0  ; 0053a7b7
    JNZ 0x0053aabe                      ; 0053a7be
        ;   XREF to: 0053aabe (CONDITIONAL_JUMP)  ; LAB_0053aabe
    XOR EAX,EAX                         ; 0053a7c4
        ;   Label: LAB_0053a7c4
    MOV EDX,dword ptr [ESP + 0x4]       ; 0053a7c6
    MOV dword ptr [ESP + 0x100],EAX     ; 0053a7ca
    TEST EDX,EDX                        ; 0053a7d1
    JLE 0x0053a93f                      ; 0053a7d3
        ;   XREF to: 0053a93f (CONDITIONAL_JUMP)  ; LAB_0053a93f
    MOV dword ptr [ESP + 0xfc],EAX      ; 0053a7d9
    MOV dword ptr [ESP + 0x104],EAX     ; 0053a7e0
    MOV ECX,dword ptr [ESP + 0xfc]      ; 0053a7e7
        ;   Label: LAB_0053a7e7
    MOV ECX,dword ptr [ESP + ECX*0x1 + 0x18] ; 0053a7ee
    IMUL ECX,ECX,0xc                    ; 0053a7f2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053a7f5
    MOV EDX,0x20d4f70                   ; 0053a7f8
    MOV EBX,dword ptr [EAX + 0x15ae98]  ; 0053a7fd
    ADD EDX,ECX                         ; 0053a803
    TEST EBX,EBX                        ; 0053a805
    JZ 0x0053aad3                       ; 0053a807
        ;   XREF to: 0053aad3 (CONDITIONAL_JUMP)  ; LAB_0053aad3
    FLD float ptr [EDX]                 ; 0053a80d | DAT_020d4f70
    FABS                                ; 0053a80f
    FLD1                                ; 0053a811
    FCOMPP                              ; 0053a813
    FNSTSW AX                           ; 0053a815
    SAHF                                ; 0053a817
    JBE 0x0053aad3                      ; 0053a818
        ;   XREF to: 0053aad3 (CONDITIONAL_JUMP)  ; LAB_0053aad3
    FLD float ptr [EDX + 0x4]           ; 0053a81e | DAT_020d4f74
    FABS                                ; 0053a821
    FLD1                                ; 0053a823
    FCOMPP                              ; 0053a825
    FNSTSW AX                           ; 0053a827
    SAHF                                ; 0053a829
    JBE 0x0053aad3                      ; 0053a82a
        ;   XREF to: 0053aad3 (CONDITIONAL_JUMP)  ; LAB_0053aad3
    FLD float ptr [EDX + 0x8]           ; 0053a830 | DAT_020d4f78
    FABS                                ; 0053a833
    FLD1                                ; 0053a835
    FCOMPP                              ; 0053a837
    FNSTSW AX                           ; 0053a839
    SAHF                                ; 0053a83b
    JBE 0x0053aad3                      ; 0053a83c
        ;   XREF to: 0053aad3 (CONDITIONAL_JUMP)  ; LAB_0053aad3
    LEA EBX,[ESP + 0xc8]                ; 0053a842
    MOV EAX,0x207ffac                   ; 0053a849
    FLD float ptr [EAX]                 ; 0053a84e | DAT_0207ffac
    FMUL float ptr [0x005e3bc0]         ; 0053a850 | DAT_005e3bc0
    FISTP dword ptr [EBX]               ; 0053a856
    FLD float ptr [EAX + 0x4]           ; 0053a858 | DAT_0207ffb0
    FMUL float ptr [0x005e3bc0]         ; 0053a85b | DAT_005e3bc0
    FISTP dword ptr [EBX + 0x4]         ; 0053a861
    FLD float ptr [EAX + 0x8]           ; 0053a864 | DAT_0207ffb4
    FMUL float ptr [0x005e3bc0]         ; 0053a867 | DAT_005e3bc0
    FISTP dword ptr [EBX + 0x8]         ; 0053a86d
    MOV ESI,dword ptr [ESP + 0xc8]      ; 0053a870
    MOV EDI,dword ptr [ESP + 0xcc]      ; 0053a877
    MOV EAX,dword ptr [ECX + 0x208bb90] ; 0053a87e
    MOV EDX,dword ptr [ESP + 0xd0]      ; 0053a884
    SUB ESI,EAX                         ; 0053a88b
    MOV EAX,dword ptr [ECX + 0x208bb94] ; 0053a88d
    MOV dword ptr [ESP + 0xc8],ESI      ; 0053a893
    SUB EDI,EAX                         ; 0053a89a
    MOV EAX,dword ptr [ECX + 0x208bb98] ; 0053a89c
    LEA ESI,[ESP + 0xe0]                ; 0053a8a2
    SUB EDX,EAX                         ; 0053a8a9
    LEA EAX,[ESP + 0xc8]                ; 0053a8ab
    MOV dword ptr [ESP + 0xcc],EDI      ; 0053a8b2
    PUSH EAX                            ; 0053a8b9
    LEA EDI,[ESP + 0xf0]                ; 0053a8ba
    MOV dword ptr [ESP + 0xd4],EDX      ; 0053a8c1
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_004e61c0 ; 0053a8c8
        ;   XREF to: 004e61c0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_004e61c0()
    LEA ESI,[ESP + 0xe4]                ; 0053a8cd
    ADD ESP,0x4                         ; 0053a8d4
    MOVSD ES:EDI,ESI                    ; 0053a8d7
    MOVSD ES:EDI,ESI                    ; 0053a8d8
    MOVSD ES:EDI,ESI                    ; 0053a8d9
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0053a8da
        ;   Label: LAB_0053a8da
    MOV EDX,dword ptr [ESP + 0xec]      ; 0053a8e1
    MOV ECX,dword ptr [ESP + 0x104]     ; 0053a8e8
    MOV ESI,dword ptr [ESP + 0x100]     ; 0053a8ef
    MOV EDI,dword ptr [ESP + 0x4]       ; 0053a8f6
    NEG EAX                             ; 0053a8fa
    ADD EDX,0x8000                      ; 0053a8fc
    MOV EBX,ECX                         ; 0053a902
    INC ESI                             ; 0053a904
    ADD EAX,0x8000                      ; 0053a905
    ADD EBX,0x4                         ; 0053a90a
    MOV dword ptr [ESP + ECX*0x1 + 0x48],EDX ; 0053a90d
    MOV dword ptr [ESP + ECX*0x1 + 0x88],EAX ; 0053a911
    MOV ECX,dword ptr [ESP + 0xfc]      ; 0053a918
    MOV dword ptr [ESP + 0x100],ESI     ; 0053a91f
    ADD ECX,0xc                         ; 0053a926
    MOV dword ptr [ESP + 0x104],EBX     ; 0053a929
    MOV dword ptr [ESP + 0xfc],ECX      ; 0053a930
    CMP ESI,EDI                         ; 0053a937
    JL 0x0053a7e7                       ; 0053a939
        ;   XREF to: 0053a7e7 (CONDITIONAL_JUMP)  ; LAB_0053a7e7
    CMP dword ptr [ESP + 0x4],0x1       ; 0053a93f
        ;   Label: LAB_0053a93f
    JLE 0x0053a9e5                      ; 0053a944
        ;   XREF to: 0053a9e5 (CONDITIONAL_JUMP)  ; LAB_0053a9e5
    MOV ECX,dword ptr [ESP + 0x4]       ; 0053a94a
    MOV EAX,0x4                         ; 0053a94e
    SHL ECX,0x2                         ; 0053a953
    CMP dword ptr [ESP + 0x48],0x8000   ; 0053a956
        ;   Label: LAB_0053a956
    JLE 0x0053a96f                      ; 0053a95e
        ;   XREF to: 0053a96f (CONDITIONAL_JUMP)  ; LAB_0053a96f
    CMP dword ptr [ESP + EAX*0x1 + 0x48],0xffff8000 ; 0053a960
    JGE 0x0053a96f                      ; 0053a968
        ;   XREF to: 0053a96f (CONDITIONAL_JUMP)  ; LAB_0053a96f
    INC word ptr [ESP + EAX*0x1 + 0x4a] ; 0053a96a
    CMP dword ptr [ESP + 0x48],0xffff8000 ; 0053a96f
        ;   Label: LAB_0053a96f
    JGE 0x0053a98f                      ; 0053a977
        ;   XREF to: 0053a98f (CONDITIONAL_JUMP)  ; LAB_0053a98f
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x48] ; 0053a979
    CMP EBX,0x8000                      ; 0053a97d
    JLE 0x0053a98f                      ; 0053a983
        ;   XREF to: 0053a98f (CONDITIONAL_JUMP)  ; LAB_0053a98f
    LEA ESI,[EBX + 0xffff0000]          ; 0053a985
    MOV dword ptr [ESP + EAX*0x1 + 0x48],ESI ; 0053a98b
    CMP dword ptr [ESP + 0x88],0x8000   ; 0053a98f
        ;   Label: LAB_0053a98f
    JLE 0x0053a9b1                      ; 0053a99a
        ;   XREF to: 0053a9b1 (CONDITIONAL_JUMP)  ; LAB_0053a9b1
    CMP dword ptr [ESP + EAX*0x1 + 0x88],0xffff8000 ; 0053a99c
    JGE 0x0053a9b1                      ; 0053a9a7
        ;   XREF to: 0053a9b1 (CONDITIONAL_JUMP)  ; LAB_0053a9b1
    INC word ptr [ESP + EAX*0x1 + 0x8a] ; 0053a9a9
    CMP dword ptr [ESP + 0x88],0xffff8000 ; 0053a9b1
        ;   Label: LAB_0053a9b1
    JGE 0x0053a9da                      ; 0053a9bc
        ;   XREF to: 0053a9da (CONDITIONAL_JUMP)  ; LAB_0053a9da
    MOV ESI,dword ptr [ESP + EAX*0x1 + 0x88] ; 0053a9be
    CMP ESI,0x8000                      ; 0053a9c5
    JLE 0x0053a9da                      ; 0053a9cb
        ;   XREF to: 0053a9da (CONDITIONAL_JUMP)  ; LAB_0053a9da
    LEA EDI,[ESI + 0xffff0000]          ; 0053a9cd
    MOV dword ptr [ESP + EAX*0x1 + 0x88],EDI ; 0053a9d3
    ADD EAX,0x4                         ; 0053a9da
        ;   Label: LAB_0053a9da
    CMP EAX,ECX                         ; 0053a9dd
    JL 0x0053a956                       ; 0053a9df
        ;   XREF to: 0053a956 (CONDITIONAL_JUMP)  ; LAB_0053a956
    MOV EBX,dword ptr [ESP + 0x4]       ; 0053a9e5
        ;   Label: LAB_0053a9e5
    XOR ECX,ECX                         ; 0053a9e9
    TEST EBX,EBX                        ; 0053a9eb
    JLE 0x0053aa1b                      ; 0053a9ed
        ;   XREF to: 0053aa1b (CONDITIONAL_JUMP)  ; LAB_0053aa1b
    XOR EAX,EAX                         ; 0053a9ef
    XOR EDX,EDX                         ; 0053a9f1
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x48] ; 0053a9f3
        ;   Label: LAB_0053a9f3
    SHL EBX,0x8                         ; 0053a9f7
    MOV dword ptr [ESP + EDX*0x1 + 0x1c],EBX ; 0053a9fa
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x88] ; 0053a9fe
    ADD EDX,0xc                         ; 0053aa05
    SHL EBX,0x8                         ; 0053aa08
    MOV dword ptr [ESP + EDX*0x1 + 0x14],EBX ; 0053aa0b
    INC ECX                             ; 0053aa0f
    MOV EBX,dword ptr [ESP + 0x4]       ; 0053aa10
    ADD EAX,0x4                         ; 0053aa14
    CMP ECX,EBX                         ; 0053aa17
    JL 0x0053a9f3                       ; 0053aa19
        ;   XREF to: 0053a9f3 (CONDITIONAL_JUMP)  ; LAB_0053a9f3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053aa1b
        ;   Label: LAB_0053aa1b
    CMP dword ptr [EAX + 0x15ae98],0x0  ; 0053aa1e
    JZ 0x0053aa39                       ; 0053aa25
        ;   XREF to: 0053aa39 (CONDITIONAL_JUMP)  ; LAB_0053aa39
    XOR EDI,EDI                         ; 0053aa27
    MOV dword ptr [ESP + 0x10],EDI      ; 0053aa29
    MOV dword ptr [ESP + 0xc],EDI       ; 0053aa2d
    MOV dword ptr [ESP + 0x8],EDI       ; 0053aa31
    MOV dword ptr [ESP + 0x14],EDI      ; 0053aa35
    CMP dword ptr [EBP + 0x20],0xfde8   ; 0053aa39
        ;   Label: LAB_0053aa39
    JLE 0x0053aaf1                      ; 0053aa40
        ;   XREF to: 0053aaf1 (CONDITIONAL_JUMP)  ; LAB_0053aaf1
    MOV EAX,ESP                         ; 0053aa46
    PUSH EAX                            ; 0053aa48
    MOV EDI,dword ptr [0x005f2afc]      ; 0053aa49 | DAT_005f2afc
    PUSH EDI                            ; 0053aa4f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20 ; 0053aa50
        ;   XREF to: 0046bc20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0053aa55
        ;   Label: LAB_0053aa55
    MOV EBX,dword ptr [EBP + 0x18]      ; 0053aa58
    MOV ESI,dword ptr [ESP + 0xf8]      ; 0053aa5b
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0053aa62
    ADD EBX,0x12                        ; 0053aa65
    INC ESI                             ; 0053aa68
    MOV dword ptr [EBP + 0x18],EBX      ; 0053aa69
    MOV dword ptr [ESP + 0xf8],ESI      ; 0053aa6c
    CMP ESI,EDI                         ; 0053aa73
    JL 0x0053a72b                       ; 0053aa75
        ;   XREF to: 0053a72b (CONDITIONAL_JUMP)  ; LAB_0053a72b
    MOV ESP,EBP                         ; 0053aa7b
        ;   Label: LAB_0053aa7b
    POP EBP                             ; 0053aa7d
    POP EDI                             ; 0053aa7e
    POP ESI                             ; 0053aa7f
    POP EBX                             ; 0053aa80
    RET                                 ; 0053aa81
    MOV EAX,0xffff                      ; 0053aa82
        ;   Label: LAB_0053aa82
    MOV EBX,dword ptr [0x01c6e24c]      ; 0053aa87 | DAT_01c6e24c
    MOV EDX,dword ptr [EBP + 0x20]      ; 0053aa8d
    SUB EAX,EBX                         ; 0053aa90
    IMUL EDX                            ; 0053aa92
    SHRD EAX,EDX,0x10                   ; 0053aa94
    PUSH EAX                            ; 0053aa98
    MOV ESI,dword ptr [0x005f2afc]      ; 0053aa99 | DAT_005f2afc
    PUSH ESI                            ; 0053aa9f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0053aaa0
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0053aaa5
    PUSH 0x0                            ; 0053aaa8
    MOV EDI,dword ptr [0x005f2afc]      ; 0053aaaa | DAT_005f2afc
    PUSH EDI                            ; 0053aab0 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0053aab1
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0053aab6
    JMP 0x0053a702                      ; 0053aab9
        ;   XREF to: 0053a702 (UNCONDITIONAL_JUMP)  ; LAB_0053a702
    MOV EAX,ESP                         ; 0053aabe
        ;   Label: LAB_0053aabe
    PUSH EAX                            ; 0053aac0
    PUSH 0x208bb90                      ; 0053aac1
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_004dece0 ; 0053aac6
        ;   XREF to: 004dece0 (UNCONDITIONAL_CALL)  ; undefined engine_keyframe.c_calculateSurfaceNormal_FUN_004dece0()
    ADD ESP,0x8                         ; 0053aacb
    JMP 0x0053a7c4                      ; 0053aace
        ;   XREF to: 0053a7c4 (UNCONDITIONAL_JUMP)  ; LAB_0053a7c4
    LEA EBX,[ESP + 0xec]                ; 0053aad3
        ;   Label: LAB_0053aad3
    MOV EAX,EDX                         ; 0053aada
    FLD float ptr [EAX]                 ; 0053aadc | DAT_020d4f70
    FISTP dword ptr [EBX]               ; 0053aade
    FLD float ptr [EAX + 0x4]           ; 0053aae0 | DAT_020d4f74
    FISTP dword ptr [EBX + 0x4]         ; 0053aae3
    FLD float ptr [EAX + 0x8]           ; 0053aae6 | DAT_020d4f78
    FISTP dword ptr [EBX + 0x8]         ; 0053aae9
    JMP 0x0053a8da                      ; 0053aaec
        ;   XREF to: 0053a8da (UNCONDITIONAL_JUMP)  ; LAB_0053a8da
    MOV EAX,ESP                         ; 0053aaf1
        ;   Label: LAB_0053aaf1
    PUSH EAX                            ; 0053aaf3
    MOV ESI,dword ptr [0x005f2afc]      ; 0053aaf4 | DAT_005f2afc
    PUSH ESI                            ; 0053aafa | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046c3b0 ; 0053aafb
        ;   XREF to: 0046c3b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046c3b0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    JMP 0x0053aa55                      ; 0053ab00
        ;   XREF to: 0053aa55 (UNCONDITIONAL_JUMP)  ; LAB_0053aa55

