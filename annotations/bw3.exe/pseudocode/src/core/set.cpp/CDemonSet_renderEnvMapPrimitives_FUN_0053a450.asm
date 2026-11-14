; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderEnvMapPrimitives_FUN_0053a450(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha,int stride)
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
;   core_set.cpp_CDemonSet_renderEnvMapBatchQuad_FUN_0053a420 at 0053a438
;   core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_0053a3f0 at 0053a408
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fba38
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_00603e44
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6e24c
;   undefined4 g_CGameInstance.render_mode
;   undefined4 DAT_020d4f70
;   undefined4 DAT_020d4f74
;   undefined4 DAT_020d4f78
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046d1a0
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046c3b0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a450
        ;   Label: core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0053a450
    PUSH ESI                            ; 0053a451
    PUSH EDI                            ; 0053a452
    PUSH EBP                            ; 0053a453
    SUB ESP,0xe4                        ; 0053a454
    MOV EBP,dword ptr [ESP + 0xfc]      ; 0053a45a
    PUSH 0x603e44                       ; 0053a461 | DAT_00603e44
    MOV EDX,dword ptr [0x005f2afc]      ; 0053a466 | DAT_005f2afc
    PUSH EDX                            ; 0053a46c | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0053a46d
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x005fe9dc]                ; 0053a472 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x218]     ; 0053a477 | g_CGameInstance.render_mode
    ADD ESP,0x8                         ; 0053a47d
    CMP ECX,0x2                         ; 0053a480
    JNZ 0x0053a669                      ; 0053a483
        ;   XREF to: 0053a669 (CONDITIONAL_JUMP)  ; LAB_0053a669
    MOV EAX,[0x005fba38]                ; 0053a489 | DAT_005fba38
    SHL EAX,0x8                         ; 0053a48e
    MOV dword ptr [ESP + 0x104],EAX     ; 0053a491
    MOV EAX,[0x005f2afc]                ; 0053a498 | DAT_005f2afc
        ;   Label: LAB_0053a498
    PUSH EAX                            ; 0053a49d | DAT_01bdd7e4
    LEA ESI,[ESP + 0xd8]                ; 0053a49e
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046d1a0 ; 0053a4a5
        ;   XREF to: 0046d1a0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046d1a0(CDemonRenderer * this_ptr, CVector3i * output)
    ADD ESP,0x4                         ; 0053a4aa
    XOR EDX,EDX                         ; 0053a4ad
    MOV ECX,dword ptr [ESP + 0x100]     ; 0053a4af
    MOV dword ptr [ESP + 0xe0],EDX      ; 0053a4b6
    TEST ECX,ECX                        ; 0053a4bd
    JLE 0x0053a65e                      ; 0053a4bf
        ;   XREF to: 0053a65e (CONDITIONAL_JUMP)  ; LAB_0053a65e
    MOV ECX,0x12                        ; 0053a4c5
        ;   Label: LAB_0053a4c5
    MOV EDI,ESP                         ; 0053a4ca
    MOV ESI,EBP                         ; 0053a4cc
    MOVSD.REP ES:EDI,ESI                ; 0053a4ce
    MOV EAX,dword ptr [ESP + 0x4]       ; 0053a4d0
    XOR ECX,ECX                         ; 0053a4d4
    TEST EAX,EAX                        ; 0053a4d6
    JLE 0x0053a536                      ; 0053a4d8
        ;   XREF to: 0053a536 (CONDITIONAL_JUMP)  ; LAB_0053a536
    XOR ESI,ESI                         ; 0053a4da
    XOR EDX,EDX                         ; 0053a4dc
    MOV EAX,dword ptr [ESP + ESI*0x1 + 0x18] ; 0053a4de
        ;   Label: LAB_0053a4de
    IMUL EAX,EAX,0xc                    ; 0053a4e2
    LEA EBX,[ESP + 0xc8]                ; 0053a4e5
    ADD EDX,0x4                         ; 0053a4ec
    ADD ESI,0xc                         ; 0053a4ef
    ADD EAX,0x20d4f70                   ; 0053a4f2
    INC ECX                             ; 0053a4f7
    FLD float ptr [EAX]                 ; 0053a4f8 | DAT_020d4f70
    FISTP dword ptr [EBX]               ; 0053a4fa
    FLD float ptr [EAX + 0x4]           ; 0053a4fc | DAT_020d4f74
    FISTP dword ptr [EBX + 0x4]         ; 0053a4ff
    FLD float ptr [EAX + 0x8]           ; 0053a502 | DAT_020d4f78
    FISTP dword ptr [EBX + 0x8]         ; 0053a505
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0053a508
    MOV EBX,dword ptr [ESP + 0xc8]      ; 0053a50f
    NEG EAX                             ; 0053a516
    ADD EBX,0x8000                      ; 0053a518
    ADD EAX,0x8000                      ; 0053a51e
    MOV dword ptr [ESP + EDX*0x1 + 0x84],EBX ; 0053a523
    MOV EBX,dword ptr [ESP + 0x4]       ; 0053a52a
    MOV dword ptr [ESP + EDX*0x1 + 0x44],EAX ; 0053a52e
    CMP ECX,EBX                         ; 0053a532
    JL 0x0053a4de                       ; 0053a534
        ;   XREF to: 0053a4de (CONDITIONAL_JUMP)  ; LAB_0053a4de
    MOV ESI,dword ptr [ESP + 0x4]       ; 0053a536
        ;   Label: LAB_0053a536
    CMP ESI,0x1                         ; 0053a53a
    JLE 0x0053a5de                      ; 0053a53d
        ;   XREF to: 0053a5de (CONDITIONAL_JUMP)  ; LAB_0053a5de
    MOV EAX,0x4                         ; 0053a543
    LEA ECX,[ESI*0x4 + 0x0]             ; 0053a548
    CMP dword ptr [ESP + 0x88],0x8000   ; 0053a54f
        ;   Label: LAB_0053a54f
    JLE 0x0053a571                      ; 0053a55a
        ;   XREF to: 0053a571 (CONDITIONAL_JUMP)  ; LAB_0053a571
    CMP dword ptr [ESP + EAX*0x1 + 0x88],0xffff8000 ; 0053a55c
    JGE 0x0053a571                      ; 0053a567
        ;   XREF to: 0053a571 (CONDITIONAL_JUMP)  ; LAB_0053a571
    INC word ptr [ESP + EAX*0x1 + 0x8a] ; 0053a569
    CMP dword ptr [ESP + 0x88],0xffff8000 ; 0053a571
        ;   Label: LAB_0053a571
    JGE 0x0053a59a                      ; 0053a57c
        ;   XREF to: 0053a59a (CONDITIONAL_JUMP)  ; LAB_0053a59a
    MOV EDI,dword ptr [ESP + EAX*0x1 + 0x88] ; 0053a57e
    CMP EDI,0x8000                      ; 0053a585
    JLE 0x0053a59a                      ; 0053a58b
        ;   XREF to: 0053a59a (CONDITIONAL_JUMP)  ; LAB_0053a59a
    LEA EDX,[EDI + 0xffff0000]          ; 0053a58d
    MOV dword ptr [ESP + EAX*0x1 + 0x88],EDX ; 0053a593
    CMP dword ptr [ESP + 0x48],0x8000   ; 0053a59a
        ;   Label: LAB_0053a59a
    JLE 0x0053a5b3                      ; 0053a5a2
        ;   XREF to: 0053a5b3 (CONDITIONAL_JUMP)  ; LAB_0053a5b3
    CMP dword ptr [ESP + EAX*0x1 + 0x48],0xffff8000 ; 0053a5a4
    JGE 0x0053a5b3                      ; 0053a5ac
        ;   XREF to: 0053a5b3 (CONDITIONAL_JUMP)  ; LAB_0053a5b3
    INC word ptr [ESP + EAX*0x1 + 0x4a] ; 0053a5ae
    CMP dword ptr [ESP + 0x48],0xffff8000 ; 0053a5b3
        ;   Label: LAB_0053a5b3
    JGE 0x0053a5d3                      ; 0053a5bb
        ;   XREF to: 0053a5d3 (CONDITIONAL_JUMP)  ; LAB_0053a5d3
    MOV EDX,dword ptr [ESP + EAX*0x1 + 0x48] ; 0053a5bd
    CMP EDX,0x8000                      ; 0053a5c1
    JLE 0x0053a5d3                      ; 0053a5c7
        ;   XREF to: 0053a5d3 (CONDITIONAL_JUMP)  ; LAB_0053a5d3
    LEA EBX,[EDX + 0xffff0000]          ; 0053a5c9
    MOV dword ptr [ESP + EAX*0x1 + 0x48],EBX ; 0053a5cf
    ADD EAX,0x4                         ; 0053a5d3
        ;   Label: LAB_0053a5d3
    CMP EAX,ECX                         ; 0053a5d6
    JL 0x0053a54f                       ; 0053a5d8
        ;   XREF to: 0053a54f (CONDITIONAL_JUMP)  ; LAB_0053a54f
    MOV EDI,dword ptr [ESP + 0x4]       ; 0053a5de
        ;   Label: LAB_0053a5de
    XOR ECX,ECX                         ; 0053a5e2
    TEST EDI,EDI                        ; 0053a5e4
    JLE 0x0053a614                      ; 0053a5e6
        ;   XREF to: 0053a614 (CONDITIONAL_JUMP)  ; LAB_0053a614
    XOR EAX,EAX                         ; 0053a5e8
    XOR EDX,EDX                         ; 0053a5ea
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x88] ; 0053a5ec
        ;   Label: LAB_0053a5ec
    SHL EBX,0x8                         ; 0053a5f3
    MOV dword ptr [ESP + EDX*0x1 + 0x1c],EBX ; 0053a5f6
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x48] ; 0053a5fa
    ADD EDX,0xc                         ; 0053a5fe
    SHL EBX,0x8                         ; 0053a601
    MOV dword ptr [ESP + EDX*0x1 + 0x14],EBX ; 0053a604
    INC ECX                             ; 0053a608
    MOV ESI,dword ptr [ESP + 0x4]       ; 0053a609
    ADD EAX,0x4                         ; 0053a60d
    CMP ECX,ESI                         ; 0053a610
    JL 0x0053a5ec                       ; 0053a612
        ;   XREF to: 0053a5ec (CONDITIONAL_JUMP)  ; LAB_0053a5ec
    CMP dword ptr [ESP + 0x104],0xfde8  ; 0053a614
        ;   Label: LAB_0053a614
    JLE 0x0053a6a9                      ; 0053a61f
        ;   XREF to: 0053a6a9 (CONDITIONAL_JUMP)  ; LAB_0053a6a9
    MOV EAX,ESP                         ; 0053a625
    PUSH EAX                            ; 0053a627
    MOV EDX,dword ptr [0x005f2afc]      ; 0053a628 | DAT_005f2afc
    PUSH EDX                            ; 0053a62e | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20 ; 0053a62f
        ;   XREF to: 0046bc20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0053a634
        ;   Label: LAB_0053a634
    MOV EBX,dword ptr [ESP + 0x108]     ; 0053a637
    MOV ESI,dword ptr [ESP + 0xe0]      ; 0053a63e
    MOV EDI,dword ptr [ESP + 0x100]     ; 0053a645
    INC ESI                             ; 0053a64c
    ADD EBP,EBX                         ; 0053a64d
    MOV dword ptr [ESP + 0xe0],ESI      ; 0053a64f
    CMP ESI,EDI                         ; 0053a656
    JL 0x0053a4c5                       ; 0053a658
        ;   XREF to: 0053a4c5 (CONDITIONAL_JUMP)  ; LAB_0053a4c5
    ADD ESP,0xe4                        ; 0053a65e
        ;   Label: LAB_0053a65e
    POP EBP                             ; 0053a664
    POP EDI                             ; 0053a665
    POP ESI                             ; 0053a666
    POP EBX                             ; 0053a667
    RET                                 ; 0053a668
    MOV EAX,0xffff                      ; 0053a669
        ;   Label: LAB_0053a669
    MOV EBX,dword ptr [0x01c6e24c]      ; 0053a66e | DAT_01c6e24c
    MOV EDX,dword ptr [ESP + 0x104]     ; 0053a674
    SUB EAX,EBX                         ; 0053a67b
    IMUL EDX                            ; 0053a67d
    SHRD EAX,EDX,0x10                   ; 0053a67f
    PUSH EAX                            ; 0053a683
    MOV ESI,dword ptr [0x005f2afc]      ; 0053a684 | DAT_005f2afc
    PUSH ESI                            ; 0053a68a | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0053a68b
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0053a690
    PUSH 0x0                            ; 0053a693
    MOV EDI,dword ptr [0x005f2afc]      ; 0053a695 | DAT_005f2afc
    PUSH EDI                            ; 0053a69b | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0053a69c
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0053a6a1
    JMP 0x0053a498                      ; 0053a6a4
        ;   XREF to: 0053a498 (UNCONDITIONAL_JUMP)  ; LAB_0053a498
    MOV EAX,ESP                         ; 0053a6a9
        ;   Label: LAB_0053a6a9
    PUSH EAX                            ; 0053a6ab
    MOV EAX,[0x005f2afc]                ; 0053a6ac | DAT_005f2afc
    PUSH EAX                            ; 0053a6b1 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046c3b0 ; 0053a6b2
        ;   XREF to: 0046c3b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046c3b0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    JMP 0x0053a634                      ; 0053a6b7
        ;   XREF to: 0053a634 (UNCONDITIONAL_JUMP)  ; LAB_0053a634

