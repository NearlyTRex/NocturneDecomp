; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha,int stride)
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
;   core_set.cpp_CDemonSet_renderEnvMapBatchQuad_FUN_0050d670 at 0050d688
;   core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_0050d640 at 0050d658
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_005b763c
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   undefined4 DAT_005be680
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c038f4
;   undefined4 g_CGame_01c775ec.render_mode
;   undefined4 DAT_02045ab0
;   undefined4 DAT_02045ab4
;   undefined4 DAT_02045ab8
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0045f790
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0045ff20
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   engine_drender.cpp_FUN_00460d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d6a0
        ;   Label: core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0
    PUSH ESI                            ; 0050d6a1
    PUSH EDI                            ; 0050d6a2
    PUSH EBP                            ; 0050d6a3
    SUB ESP,0xe4                        ; 0050d6a4
    MOV EBP,dword ptr [ESP + 0xfc]      ; 0050d6aa
    PUSH 0x5be680                       ; 0050d6b1 | DAT_005be680
    MOV EDX,dword ptr [0x005ae704]      ; 0050d6b6 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 0050d6bc | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 0050d6bd
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x005b9354]                ; 0050d6c2 | g_CGame_PTR_005b9354
    MOV ECX,dword ptr [EAX + 0x1f4]     ; 0050d6c7 | g_CGame_01c775ec.render_mode
    ADD ESP,0x8                         ; 0050d6cd
    CMP ECX,0x2                         ; 0050d6d0
    JNZ 0x0050d8b9                      ; 0050d6d3
        ;   XREF to: 0050d8b9 (CONDITIONAL_JUMP)  ; LAB_0050d8b9
    MOV EAX,[0x005b763c]                ; 0050d6d9 | DAT_005b763c
    SHL EAX,0x8                         ; 0050d6de
    MOV dword ptr [ESP + 0x104],EAX     ; 0050d6e1
    MOV EAX,[0x005ae704]                ; 0050d6e8 | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_0050d6e8
    PUSH EAX                            ; 0050d6ed | DAT_01b4d738
    LEA ESI,[ESP + 0xd8]                ; 0050d6ee
    CALL engine_drender.cpp_FUN_00460d10 ; 0050d6f5
        ;   XREF to: 00460d10 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00460d10()
    ADD ESP,0x4                         ; 0050d6fa
    XOR EDX,EDX                         ; 0050d6fd
    MOV ECX,dword ptr [ESP + 0x100]     ; 0050d6ff
    MOV dword ptr [ESP + 0xe0],EDX      ; 0050d706
    TEST ECX,ECX                        ; 0050d70d
    JLE 0x0050d8ae                      ; 0050d70f
        ;   XREF to: 0050d8ae (CONDITIONAL_JUMP)  ; LAB_0050d8ae
    MOV ECX,0x12                        ; 0050d715
        ;   Label: LAB_0050d715
    MOV EDI,ESP                         ; 0050d71a
    MOV ESI,EBP                         ; 0050d71c
    MOVSD.REP ES:EDI,ESI                ; 0050d71e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050d720
    XOR ECX,ECX                         ; 0050d724
    TEST EAX,EAX                        ; 0050d726
    JLE 0x0050d786                      ; 0050d728
        ;   XREF to: 0050d786 (CONDITIONAL_JUMP)  ; LAB_0050d786
    XOR ESI,ESI                         ; 0050d72a
    XOR EDX,EDX                         ; 0050d72c
    MOV EAX,dword ptr [ESP + ESI*0x1 + 0x18] ; 0050d72e
        ;   Label: LAB_0050d72e
    IMUL EAX,EAX,0xc                    ; 0050d732
    LEA EBX,[ESP + 0xc8]                ; 0050d735
    ADD EDX,0x4                         ; 0050d73c
    ADD ESI,0xc                         ; 0050d73f
    ADD EAX,0x2045ab0                   ; 0050d742
    INC ECX                             ; 0050d747
    FLD float ptr [EAX]                 ; 0050d748 | DAT_02045ab0
    FISTP dword ptr [EBX]               ; 0050d74a
    FLD float ptr [EAX + 0x4]           ; 0050d74c | DAT_02045ab4
    FISTP dword ptr [EBX + 0x4]         ; 0050d74f
    FLD float ptr [EAX + 0x8]           ; 0050d752 | DAT_02045ab8
    FISTP dword ptr [EBX + 0x8]         ; 0050d755
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0050d758
    MOV EBX,dword ptr [ESP + 0xc8]      ; 0050d75f
    NEG EAX                             ; 0050d766
    ADD EBX,0x8000                      ; 0050d768
    ADD EAX,0x8000                      ; 0050d76e
    MOV dword ptr [ESP + EDX*0x1 + 0x84],EBX ; 0050d773
    MOV EBX,dword ptr [ESP + 0x4]       ; 0050d77a
    MOV dword ptr [ESP + EDX*0x1 + 0x44],EAX ; 0050d77e
    CMP ECX,EBX                         ; 0050d782
    JL 0x0050d72e                       ; 0050d784
        ;   XREF to: 0050d72e (CONDITIONAL_JUMP)  ; LAB_0050d72e
    MOV ESI,dword ptr [ESP + 0x4]       ; 0050d786
        ;   Label: LAB_0050d786
    CMP ESI,0x1                         ; 0050d78a
    JLE 0x0050d82e                      ; 0050d78d
        ;   XREF to: 0050d82e (CONDITIONAL_JUMP)  ; LAB_0050d82e
    MOV EAX,0x4                         ; 0050d793
    LEA ECX,[ESI*0x4 + 0x0]             ; 0050d798
    CMP dword ptr [ESP + 0x88],0x8000   ; 0050d79f
        ;   Label: LAB_0050d79f
    JLE 0x0050d7c1                      ; 0050d7aa
        ;   XREF to: 0050d7c1 (CONDITIONAL_JUMP)  ; LAB_0050d7c1
    CMP dword ptr [ESP + EAX*0x1 + 0x88],0xffff8000 ; 0050d7ac
    JGE 0x0050d7c1                      ; 0050d7b7
        ;   XREF to: 0050d7c1 (CONDITIONAL_JUMP)  ; LAB_0050d7c1
    INC word ptr [ESP + EAX*0x1 + 0x8a] ; 0050d7b9
    CMP dword ptr [ESP + 0x88],0xffff8000 ; 0050d7c1
        ;   Label: LAB_0050d7c1
    JGE 0x0050d7ea                      ; 0050d7cc
        ;   XREF to: 0050d7ea (CONDITIONAL_JUMP)  ; LAB_0050d7ea
    MOV EDI,dword ptr [ESP + EAX*0x1 + 0x88] ; 0050d7ce
    CMP EDI,0x8000                      ; 0050d7d5
    JLE 0x0050d7ea                      ; 0050d7db
        ;   XREF to: 0050d7ea (CONDITIONAL_JUMP)  ; LAB_0050d7ea
    LEA EDX,[EDI + 0xffff0000]          ; 0050d7dd
    MOV dword ptr [ESP + EAX*0x1 + 0x88],EDX ; 0050d7e3
    CMP dword ptr [ESP + 0x48],0x8000   ; 0050d7ea
        ;   Label: LAB_0050d7ea
    JLE 0x0050d803                      ; 0050d7f2
        ;   XREF to: 0050d803 (CONDITIONAL_JUMP)  ; LAB_0050d803
    CMP dword ptr [ESP + EAX*0x1 + 0x48],0xffff8000 ; 0050d7f4
    JGE 0x0050d803                      ; 0050d7fc
        ;   XREF to: 0050d803 (CONDITIONAL_JUMP)  ; LAB_0050d803
    INC word ptr [ESP + EAX*0x1 + 0x4a] ; 0050d7fe
    CMP dword ptr [ESP + 0x48],0xffff8000 ; 0050d803
        ;   Label: LAB_0050d803
    JGE 0x0050d823                      ; 0050d80b
        ;   XREF to: 0050d823 (CONDITIONAL_JUMP)  ; LAB_0050d823
    MOV EDX,dword ptr [ESP + EAX*0x1 + 0x48] ; 0050d80d
    CMP EDX,0x8000                      ; 0050d811
    JLE 0x0050d823                      ; 0050d817
        ;   XREF to: 0050d823 (CONDITIONAL_JUMP)  ; LAB_0050d823
    LEA EBX,[EDX + 0xffff0000]          ; 0050d819
    MOV dword ptr [ESP + EAX*0x1 + 0x48],EBX ; 0050d81f
    ADD EAX,0x4                         ; 0050d823
        ;   Label: LAB_0050d823
    CMP EAX,ECX                         ; 0050d826
    JL 0x0050d79f                       ; 0050d828
        ;   XREF to: 0050d79f (CONDITIONAL_JUMP)  ; LAB_0050d79f
    MOV EDI,dword ptr [ESP + 0x4]       ; 0050d82e
        ;   Label: LAB_0050d82e
    XOR ECX,ECX                         ; 0050d832
    TEST EDI,EDI                        ; 0050d834
    JLE 0x0050d864                      ; 0050d836
        ;   XREF to: 0050d864 (CONDITIONAL_JUMP)  ; LAB_0050d864
    XOR EAX,EAX                         ; 0050d838
    XOR EDX,EDX                         ; 0050d83a
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x88] ; 0050d83c
        ;   Label: LAB_0050d83c
    SHL EBX,0x8                         ; 0050d843
    MOV dword ptr [ESP + EDX*0x1 + 0x1c],EBX ; 0050d846
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x48] ; 0050d84a
    ADD EDX,0xc                         ; 0050d84e
    SHL EBX,0x8                         ; 0050d851
    MOV dword ptr [ESP + EDX*0x1 + 0x14],EBX ; 0050d854
    INC ECX                             ; 0050d858
    MOV ESI,dword ptr [ESP + 0x4]       ; 0050d859
    ADD EAX,0x4                         ; 0050d85d
    CMP ECX,ESI                         ; 0050d860
    JL 0x0050d83c                       ; 0050d862
        ;   XREF to: 0050d83c (CONDITIONAL_JUMP)  ; LAB_0050d83c
    CMP dword ptr [ESP + 0x104],0xfde8  ; 0050d864
        ;   Label: LAB_0050d864
    JLE 0x0050d8f9                      ; 0050d86f
        ;   XREF to: 0050d8f9 (CONDITIONAL_JUMP)  ; LAB_0050d8f9
    MOV EAX,ESP                         ; 0050d875
    PUSH EAX                            ; 0050d877
    MOV EDX,dword ptr [0x005ae704]      ; 0050d878 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 0050d87e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0045f790 ; 0050d87f
        ;   XREF to: 0045f790 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0045f790(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0050d884
        ;   Label: LAB_0050d884
    MOV EBX,dword ptr [ESP + 0x108]     ; 0050d887
    MOV ESI,dword ptr [ESP + 0xe0]      ; 0050d88e
    MOV EDI,dword ptr [ESP + 0x100]     ; 0050d895
    INC ESI                             ; 0050d89c
    ADD EBP,EBX                         ; 0050d89d
    MOV dword ptr [ESP + 0xe0],ESI      ; 0050d89f
    CMP ESI,EDI                         ; 0050d8a6
    JL 0x0050d715                       ; 0050d8a8
        ;   XREF to: 0050d715 (CONDITIONAL_JUMP)  ; LAB_0050d715
    ADD ESP,0xe4                        ; 0050d8ae
        ;   Label: LAB_0050d8ae
    POP EBP                             ; 0050d8b4
    POP EDI                             ; 0050d8b5
    POP ESI                             ; 0050d8b6
    POP EBX                             ; 0050d8b7
    RET                                 ; 0050d8b8
    MOV EAX,0xffff                      ; 0050d8b9
        ;   Label: LAB_0050d8b9
    MOV EBX,dword ptr [0x01c038f4]      ; 0050d8be | DAT_01c038f4
    MOV EDX,dword ptr [ESP + 0x104]     ; 0050d8c4
    SUB EAX,EBX                         ; 0050d8cb
    IMUL EDX                            ; 0050d8cd
    SHRD EAX,EDX,0x10                   ; 0050d8cf
    PUSH EAX                            ; 0050d8d3
    MOV ESI,dword ptr [0x005ae704]      ; 0050d8d4 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 0050d8da | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 0050d8db
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0050d8e0
    PUSH 0x0                            ; 0050d8e3
    MOV EDI,dword ptr [0x005ae704]      ; 0050d8e5 | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 0050d8eb | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0050d8ec
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0050d8f1
    JMP 0x0050d6e8                      ; 0050d8f4
        ;   XREF to: 0050d6e8 (UNCONDITIONAL_JUMP)  ; LAB_0050d6e8
    MOV EAX,ESP                         ; 0050d8f9
        ;   Label: LAB_0050d8f9
    PUSH EAX                            ; 0050d8fb
    MOV EAX,[0x005ae704]                ; 0050d8fc | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 0050d901 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0045ff20 ; 0050d902
        ;   XREF to: 0045ff20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0045ff20(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    JMP 0x0050d884                      ; 0050d907
        ;   XREF to: 0050d884 (UNCONDITIONAL_JUMP)  ; LAB_0050d884

