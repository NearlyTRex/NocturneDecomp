; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderEnvMapPrimitives_FUN_00554ac0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha,int stride)
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
;   core_set.cpp_CDemonSet_renderEnvMapBatchQuad_FUN_00554a90 at 00554aa8
;   core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_00554a60 at 00554a78
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b4b8
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_00622f34
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c51cac
;   undefined4 g_CGameInstance.field480_0x210
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_00482540
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_00482cd0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_matrix.c_FUN_00483ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554ac0
        ;   Label: core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00554ac0
    PUSH ESI                            ; 00554ac1
    PUSH EDI                            ; 00554ac2
    PUSH EBP                            ; 00554ac3
    SUB ESP,0xe4                        ; 00554ac4
    MOV EBP,dword ptr [ESP + 0xfc]      ; 00554aca
    PUSH 0x622f34                       ; 00554ad1 | DAT_00622f34
    MOV EDX,dword ptr [0x00612560]      ; 00554ad6 | DAT_00612560
    PUSH EDX                            ; 00554adc | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 00554add
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x0061d95c]                ; 00554ae2 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x210]     ; 00554ae7 | g_CGameInstance.field480_0x210
    ADD ESP,0x8                         ; 00554aed
    CMP ECX,0x2                         ; 00554af0
    JNZ 0x00554cd9                      ; 00554af3
        ;   XREF to: 00554cd9 (CONDITIONAL_JUMP)  ; LAB_00554cd9
    MOV EAX,[0x0061b4b8]                ; 00554af9 | DAT_0061b4b8
    SHL EAX,0x8                         ; 00554afe
    MOV dword ptr [ESP + 0x104],EAX     ; 00554b01
    MOV EAX,[0x00612560]                ; 00554b08 | DAT_00612560
        ;   Label: LAB_00554b08
    PUSH EAX                            ; 00554b0d | DAT_01bc120c
    LEA ESI,[ESP + 0xd8]                ; 00554b0e
    CALL engine_matrix.c_FUN_00483ac0   ; 00554b15
        ;   XREF to: 00483ac0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483ac0()
    ADD ESP,0x4                         ; 00554b1a
    XOR EDX,EDX                         ; 00554b1d
    MOV ECX,dword ptr [ESP + 0x100]     ; 00554b1f
    MOV dword ptr [ESP + 0xe0],EDX      ; 00554b26
    TEST ECX,ECX                        ; 00554b2d
    JLE 0x00554cce                      ; 00554b2f
        ;   XREF to: 00554cce (CONDITIONAL_JUMP)  ; LAB_00554cce
    MOV ECX,0x12                        ; 00554b35
        ;   Label: LAB_00554b35
    MOV EDI,ESP                         ; 00554b3a
    MOV ESI,EBP                         ; 00554b3c
    MOVSD.REP ES:EDI,ESI                ; 00554b3e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00554b40
    XOR ECX,ECX                         ; 00554b44
    TEST EAX,EAX                        ; 00554b46
    JLE 0x00554ba6                      ; 00554b48
        ;   XREF to: 00554ba6 (CONDITIONAL_JUMP)  ; LAB_00554ba6
    XOR ESI,ESI                         ; 00554b4a
    XOR EDX,EDX                         ; 00554b4c
    MOV EAX,dword ptr [ESP + ESI*0x1 + 0x18] ; 00554b4e
        ;   Label: LAB_00554b4e
    IMUL EAX,EAX,0xc                    ; 00554b52
    LEA EBX,[ESP + 0xc8]                ; 00554b55
    ADD EDX,0x4                         ; 00554b5c
    ADD ESI,0xc                         ; 00554b5f
    ADD EAX,0x2070da8                   ; 00554b62
    INC ECX                             ; 00554b67
    FLD float ptr [EAX]                 ; 00554b68
    FISTP dword ptr [EBX]               ; 00554b6a
    FLD float ptr [EAX + 0x4]           ; 00554b6c
    FISTP dword ptr [EBX + 0x4]         ; 00554b6f
    FLD float ptr [EAX + 0x8]           ; 00554b72
    FISTP dword ptr [EBX + 0x8]         ; 00554b75
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00554b78
    MOV EBX,dword ptr [ESP + 0xc8]      ; 00554b7f
    NEG EAX                             ; 00554b86
    ADD EBX,0x8000                      ; 00554b88
    ADD EAX,0x8000                      ; 00554b8e
    MOV dword ptr [ESP + EDX*0x1 + 0x84],EBX ; 00554b93
    MOV EBX,dword ptr [ESP + 0x4]       ; 00554b9a
    MOV dword ptr [ESP + EDX*0x1 + 0x44],EAX ; 00554b9e
    CMP ECX,EBX                         ; 00554ba2
    JL 0x00554b4e                       ; 00554ba4
        ;   XREF to: 00554b4e (CONDITIONAL_JUMP)  ; LAB_00554b4e
    MOV ESI,dword ptr [ESP + 0x4]       ; 00554ba6
        ;   Label: LAB_00554ba6
    CMP ESI,0x1                         ; 00554baa
    JLE 0x00554c4e                      ; 00554bad
        ;   XREF to: 00554c4e (CONDITIONAL_JUMP)  ; LAB_00554c4e
    MOV EAX,0x4                         ; 00554bb3
    LEA ECX,[ESI*0x4 + 0x0]             ; 00554bb8
    CMP dword ptr [ESP + 0x88],0x8000   ; 00554bbf
        ;   Label: LAB_00554bbf
    JLE 0x00554be1                      ; 00554bca
        ;   XREF to: 00554be1 (CONDITIONAL_JUMP)  ; LAB_00554be1
    CMP dword ptr [ESP + EAX*0x1 + 0x88],0xffff8000 ; 00554bcc
    JGE 0x00554be1                      ; 00554bd7
        ;   XREF to: 00554be1 (CONDITIONAL_JUMP)  ; LAB_00554be1
    INC word ptr [ESP + EAX*0x1 + 0x8a] ; 00554bd9
    CMP dword ptr [ESP + 0x88],0xffff8000 ; 00554be1
        ;   Label: LAB_00554be1
    JGE 0x00554c0a                      ; 00554bec
        ;   XREF to: 00554c0a (CONDITIONAL_JUMP)  ; LAB_00554c0a
    MOV EDI,dword ptr [ESP + EAX*0x1 + 0x88] ; 00554bee
    CMP EDI,0x8000                      ; 00554bf5
    JLE 0x00554c0a                      ; 00554bfb
        ;   XREF to: 00554c0a (CONDITIONAL_JUMP)  ; LAB_00554c0a
    LEA EDX,[EDI + 0xffff0000]          ; 00554bfd
    MOV dword ptr [ESP + EAX*0x1 + 0x88],EDX ; 00554c03
    CMP dword ptr [ESP + 0x48],0x8000   ; 00554c0a
        ;   Label: LAB_00554c0a
    JLE 0x00554c23                      ; 00554c12
        ;   XREF to: 00554c23 (CONDITIONAL_JUMP)  ; LAB_00554c23
    CMP dword ptr [ESP + EAX*0x1 + 0x48],0xffff8000 ; 00554c14
    JGE 0x00554c23                      ; 00554c1c
        ;   XREF to: 00554c23 (CONDITIONAL_JUMP)  ; LAB_00554c23
    INC word ptr [ESP + EAX*0x1 + 0x4a] ; 00554c1e
    CMP dword ptr [ESP + 0x48],0xffff8000 ; 00554c23
        ;   Label: LAB_00554c23
    JGE 0x00554c43                      ; 00554c2b
        ;   XREF to: 00554c43 (CONDITIONAL_JUMP)  ; LAB_00554c43
    MOV EDX,dword ptr [ESP + EAX*0x1 + 0x48] ; 00554c2d
    CMP EDX,0x8000                      ; 00554c31
    JLE 0x00554c43                      ; 00554c37
        ;   XREF to: 00554c43 (CONDITIONAL_JUMP)  ; LAB_00554c43
    LEA EBX,[EDX + 0xffff0000]          ; 00554c39
    MOV dword ptr [ESP + EAX*0x1 + 0x48],EBX ; 00554c3f
    ADD EAX,0x4                         ; 00554c43
        ;   Label: LAB_00554c43
    CMP EAX,ECX                         ; 00554c46
    JL 0x00554bbf                       ; 00554c48
        ;   XREF to: 00554bbf (CONDITIONAL_JUMP)  ; LAB_00554bbf
    MOV EDI,dword ptr [ESP + 0x4]       ; 00554c4e
        ;   Label: LAB_00554c4e
    XOR ECX,ECX                         ; 00554c52
    TEST EDI,EDI                        ; 00554c54
    JLE 0x00554c84                      ; 00554c56
        ;   XREF to: 00554c84 (CONDITIONAL_JUMP)  ; LAB_00554c84
    XOR EAX,EAX                         ; 00554c58
    XOR EDX,EDX                         ; 00554c5a
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x88] ; 00554c5c
        ;   Label: LAB_00554c5c
    SHL EBX,0x8                         ; 00554c63
    MOV dword ptr [ESP + EDX*0x1 + 0x1c],EBX ; 00554c66
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x48] ; 00554c6a
    ADD EDX,0xc                         ; 00554c6e
    SHL EBX,0x8                         ; 00554c71
    MOV dword ptr [ESP + EDX*0x1 + 0x14],EBX ; 00554c74
    INC ECX                             ; 00554c78
    MOV ESI,dword ptr [ESP + 0x4]       ; 00554c79
    ADD EAX,0x4                         ; 00554c7d
    CMP ECX,ESI                         ; 00554c80
    JL 0x00554c5c                       ; 00554c82
        ;   XREF to: 00554c5c (CONDITIONAL_JUMP)  ; LAB_00554c5c
    CMP dword ptr [ESP + 0x104],0xfde8  ; 00554c84
        ;   Label: LAB_00554c84
    JLE 0x00554d19                      ; 00554c8f
        ;   XREF to: 00554d19 (CONDITIONAL_JUMP)  ; LAB_00554d19
    MOV EAX,ESP                         ; 00554c95
    PUSH EAX                            ; 00554c97
    MOV EDX,dword ptr [0x00612560]      ; 00554c98 | DAT_00612560
    PUSH EDX                            ; 00554c9e | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_00482540 ; 00554c9f
        ;   XREF to: 00482540 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_00482540(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00554ca4
        ;   Label: LAB_00554ca4
    MOV EBX,dword ptr [ESP + 0x108]     ; 00554ca7
    MOV ESI,dword ptr [ESP + 0xe0]      ; 00554cae
    MOV EDI,dword ptr [ESP + 0x100]     ; 00554cb5
    INC ESI                             ; 00554cbc
    ADD EBP,EBX                         ; 00554cbd
    MOV dword ptr [ESP + 0xe0],ESI      ; 00554cbf
    CMP ESI,EDI                         ; 00554cc6
    JL 0x00554b35                       ; 00554cc8
        ;   XREF to: 00554b35 (CONDITIONAL_JUMP)  ; LAB_00554b35
    ADD ESP,0xe4                        ; 00554cce
        ;   Label: LAB_00554cce
    POP EBP                             ; 00554cd4
    POP EDI                             ; 00554cd5
    POP ESI                             ; 00554cd6
    POP EBX                             ; 00554cd7
    RET                                 ; 00554cd8
    MOV EAX,0xffff                      ; 00554cd9
        ;   Label: LAB_00554cd9
    MOV EBX,dword ptr [0x01c51cac]      ; 00554cde | DAT_01c51cac
    MOV EDX,dword ptr [ESP + 0x104]     ; 00554ce4
    SUB EAX,EBX                         ; 00554ceb
    IMUL EDX                            ; 00554ced
    SHRD EAX,EDX,0x10                   ; 00554cef
    PUSH EAX                            ; 00554cf3
    MOV ESI,dword ptr [0x00612560]      ; 00554cf4 | DAT_00612560
    PUSH ESI                            ; 00554cfa | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 00554cfb
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00554d00
    PUSH 0x0                            ; 00554d03
    MOV EDI,dword ptr [0x00612560]      ; 00554d05 | DAT_00612560
    PUSH EDI                            ; 00554d0b | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 00554d0c
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00554d11
    JMP 0x00554b08                      ; 00554d14
        ;   XREF to: 00554b08 (UNCONDITIONAL_JUMP)  ; LAB_00554b08
    MOV EAX,ESP                         ; 00554d19
        ;   Label: LAB_00554d19
    PUSH EAX                            ; 00554d1b
    MOV EAX,[0x00612560]                ; 00554d1c | DAT_00612560
    PUSH EAX                            ; 00554d21 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_00482cd0 ; 00554d22
        ;   XREF to: 00482cd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_00482cd0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    JMP 0x00554ca4                      ; 00554d27
        ;   XREF to: 00554ca4 (UNCONDITIONAL_JUMP)  ; LAB_00554ca4

