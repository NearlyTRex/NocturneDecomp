; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_00533a80(CDemonSet *this_ptr,SInputFace *face_data,int count,int alpha)
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
;   core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00534040 at 005340a3
;
; Referenced Globals:
;   undefined4 DAT_005fb210
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141d8
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_0061b8c4
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c38aec
;   undefined4 g_CGameInstance.render_mode
;   undefined4 DAT_0200e890
;   undefined4 DAT_0200e894
;   undefined4 DAT_0200e898
;   undefined4 DAT_02054df4
;   undefined4 DAT_02054df8
;   undefined4 DAT_02054dfc
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046a030
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046a7d0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_drender.cpp_FUN_0046b5c0
;   engine_keyframe.c_calculateSurfaceNormal_FUN_004df5f0
;   engine_matrix.c_normalizeVector3DFloat_FUN_004e9ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533a80
        ;   Label: core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_00533a80
    PUSH ESI                            ; 00533a81
    PUSH EDI                            ; 00533a82
    PUSH EBP                            ; 00533a83
    MOV EBP,ESP                         ; 00533a84
    SUB ESP,0x108                       ; 00533a86
    AND ESP,0xfffffff8                  ; 00533a8c
    PUSH 0x61b8c4                       ; 00533a8f | DAT_0061b8c4
    MOV EDX,dword ptr [0x0060b280]      ; 00533a94 | DAT_0060b280
    PUSH EDX                            ; 00533a9a | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 00533a9b
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x00616494]                ; 00533aa0 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x210]     ; 00533aa5 | g_CGameInstance.render_mode
    ADD ESP,0x8                         ; 00533aab
    CMP ECX,0x2                         ; 00533aae
    JNZ 0x00533e42                      ; 00533ab1
        ;   XREF to: 00533e42 (CONDITIONAL_JUMP)  ; LAB_00533e42
    MOV EAX,[0x006141d8]                ; 00533ab7 | DAT_006141d8
    SHL EAX,0x8                         ; 00533abc
    MOV dword ptr [EBP + 0x20],EAX      ; 00533abf
    MOV EAX,[0x0060b280]                ; 00533ac2 | DAT_0060b280
        ;   Label: LAB_00533ac2
    PUSH EAX                            ; 00533ac7 | DAT_01ba5c50
    LEA ESI,[ESP + 0xd8]                ; 00533ac8
    CALL engine_drender.cpp_FUN_0046b5c0 ; 00533acf
        ;   XREF to: 0046b5c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b5c0()
    ADD ESP,0x4                         ; 00533ad4
    XOR EDX,EDX                         ; 00533ad7
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00533ad9
    MOV dword ptr [ESP + 0xf8],EDX      ; 00533adc
    TEST ECX,ECX                        ; 00533ae3
    JLE 0x00533e3b                      ; 00533ae5
        ;   XREF to: 00533e3b (CONDITIONAL_JUMP)  ; LAB_00533e3b
    XOR EDX,EDX                         ; 00533aeb
        ;   Label: LAB_00533aeb
    MOV EAX,0x3                         ; 00533aed
    MOV dword ptr [ESP + 0x14],EDX      ; 00533af2
    MOV dword ptr [ESP + 0x10],EDX      ; 00533af6
    MOV dword ptr [ESP + 0xc],EDX       ; 00533afa
    MOV dword ptr [ESP + 0x8],EDX       ; 00533afe
    MOV EDX,dword ptr [EBP + 0x18]      ; 00533b02
    MOV dword ptr [ESP + 0x4],EAX       ; 00533b05
    XOR EAX,EAX                         ; 00533b09
    MOV AX,word ptr [EDX]               ; 00533b0b
    MOV dword ptr [ESP + 0x18],EAX      ; 00533b0e
    XOR EAX,EAX                         ; 00533b12
    MOV AX,word ptr [EDX + 0x2]         ; 00533b14
    MOV dword ptr [ESP + 0x24],EAX      ; 00533b18
    XOR EAX,EAX                         ; 00533b1c
    MOV AX,word ptr [EDX + 0x4]         ; 00533b1e
    MOV dword ptr [ESP + 0x30],EAX      ; 00533b22
    XOR EAX,EAX                         ; 00533b26
    MOV AX,word ptr [EDX + 0x6]         ; 00533b28
    SHL EAX,0x8                         ; 00533b2c
    MOV dword ptr [ESP + 0x1c],EAX      ; 00533b2f
    XOR EAX,EAX                         ; 00533b33
    MOV AX,word ptr [EDX + 0x8]         ; 00533b35
    SHL EAX,0x8                         ; 00533b39
    MOV dword ptr [ESP + 0x28],EAX      ; 00533b3c
    XOR EAX,EAX                         ; 00533b40
    MOV AX,word ptr [EDX + 0xa]         ; 00533b42
    SHL EAX,0x8                         ; 00533b46
    MOV dword ptr [ESP + 0x34],EAX      ; 00533b49
    XOR EAX,EAX                         ; 00533b4d
    MOV AX,word ptr [EDX + 0xc]         ; 00533b4f
    SHL EAX,0x8                         ; 00533b53
    MOV dword ptr [ESP + 0x20],EAX      ; 00533b56
    XOR EAX,EAX                         ; 00533b5a
    MOV AX,word ptr [EDX + 0xe]         ; 00533b5c
    SHL EAX,0x8                         ; 00533b60
    MOV dword ptr [ESP + 0x2c],EAX      ; 00533b63
    XOR EAX,EAX                         ; 00533b67
    MOV AX,word ptr [EDX + 0x10]        ; 00533b69
    SHL EAX,0x8                         ; 00533b6d
    MOV dword ptr [ESP + 0x38],EAX      ; 00533b70
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533b74
    CMP dword ptr [EAX + 0x15ae98],0x0  ; 00533b77
    JNZ 0x00533e7e                      ; 00533b7e
        ;   XREF to: 00533e7e (CONDITIONAL_JUMP)  ; LAB_00533e7e
    XOR EAX,EAX                         ; 00533b84
        ;   Label: LAB_00533b84
    MOV EDX,dword ptr [ESP + 0x4]       ; 00533b86
    MOV dword ptr [ESP + 0x100],EAX     ; 00533b8a
    TEST EDX,EDX                        ; 00533b91
    JLE 0x00533cff                      ; 00533b93
        ;   XREF to: 00533cff (CONDITIONAL_JUMP)  ; LAB_00533cff
    MOV dword ptr [ESP + 0xfc],EAX      ; 00533b99
    MOV dword ptr [ESP + 0x104],EAX     ; 00533ba0
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00533ba7
        ;   Label: LAB_00533ba7
    MOV ECX,dword ptr [ESP + ECX*0x1 + 0x18] ; 00533bae
    IMUL ECX,ECX,0xc                    ; 00533bb2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533bb5
    MOV EDX,0x2054df4                   ; 00533bb8
    MOV EBX,dword ptr [EAX + 0x15ae98]  ; 00533bbd
    ADD EDX,ECX                         ; 00533bc3
    TEST EBX,EBX                        ; 00533bc5
    JZ 0x00533e93                       ; 00533bc7
        ;   XREF to: 00533e93 (CONDITIONAL_JUMP)  ; LAB_00533e93
    FLD float ptr [EDX]                 ; 00533bcd | DAT_02054df4
    FABS                                ; 00533bcf
    FLD1                                ; 00533bd1
    FCOMPP                              ; 00533bd3
    FNSTSW AX                           ; 00533bd5
    SAHF                                ; 00533bd7
    JBE 0x00533e93                      ; 00533bd8
        ;   XREF to: 00533e93 (CONDITIONAL_JUMP)  ; LAB_00533e93
    FLD float ptr [EDX + 0x4]           ; 00533bde | DAT_02054df8
    FABS                                ; 00533be1
    FLD1                                ; 00533be3
    FCOMPP                              ; 00533be5
    FNSTSW AX                           ; 00533be7
    SAHF                                ; 00533be9
    JBE 0x00533e93                      ; 00533bea
        ;   XREF to: 00533e93 (CONDITIONAL_JUMP)  ; LAB_00533e93
    FLD float ptr [EDX + 0x8]           ; 00533bf0 | DAT_02054dfc
    FABS                                ; 00533bf3
    FLD1                                ; 00533bf5
    FCOMPP                              ; 00533bf7
    FNSTSW AX                           ; 00533bf9
    SAHF                                ; 00533bfb
    JBE 0x00533e93                      ; 00533bfc
        ;   XREF to: 00533e93 (CONDITIONAL_JUMP)  ; LAB_00533e93
    LEA EBX,[ESP + 0xc8]                ; 00533c02
    MOV EAX,0x200e890                   ; 00533c09
    FLD float ptr [EAX]                 ; 00533c0e | DAT_0200e890
    FMUL float ptr [0x005fb210]         ; 00533c10 | DAT_005fb210
    FISTP dword ptr [EBX]               ; 00533c16
    FLD float ptr [EAX + 0x4]           ; 00533c18 | DAT_0200e894
    FMUL float ptr [0x005fb210]         ; 00533c1b | DAT_005fb210
    FISTP dword ptr [EBX + 0x4]         ; 00533c21
    FLD float ptr [EAX + 0x8]           ; 00533c24 | DAT_0200e898
    FMUL float ptr [0x005fb210]         ; 00533c27 | DAT_005fb210
    FISTP dword ptr [EBX + 0x8]         ; 00533c2d
    MOV ESI,dword ptr [ESP + 0xc8]      ; 00533c30
    MOV EDI,dword ptr [ESP + 0xcc]      ; 00533c37
    MOV EAX,dword ptr [ECX + 0x201a474] ; 00533c3e
    MOV EDX,dword ptr [ESP + 0xd0]      ; 00533c44
    SUB ESI,EAX                         ; 00533c4b
    MOV EAX,dword ptr [ECX + 0x201a478] ; 00533c4d
    MOV dword ptr [ESP + 0xc8],ESI      ; 00533c53
    SUB EDI,EAX                         ; 00533c5a
    MOV EAX,dword ptr [ECX + 0x201a47c] ; 00533c5c
    LEA ESI,[ESP + 0xe0]                ; 00533c62
    SUB EDX,EAX                         ; 00533c69
    LEA EAX,[ESP + 0xc8]                ; 00533c6b
    MOV dword ptr [ESP + 0xcc],EDI      ; 00533c72
    PUSH EAX                            ; 00533c79
    LEA EDI,[ESP + 0xf0]                ; 00533c7a
    MOV dword ptr [ESP + 0xd4],EDX      ; 00533c81
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_004e9ae0 ; 00533c88
        ;   XREF to: 004e9ae0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_004e9ae0()
    LEA ESI,[ESP + 0xe4]                ; 00533c8d
    ADD ESP,0x4                         ; 00533c94
    MOVSD ES:EDI,ESI                    ; 00533c97
    MOVSD ES:EDI,ESI                    ; 00533c98
    MOVSD ES:EDI,ESI                    ; 00533c99
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00533c9a
        ;   Label: LAB_00533c9a
    MOV EDX,dword ptr [ESP + 0xec]      ; 00533ca1
    MOV ECX,dword ptr [ESP + 0x104]     ; 00533ca8
    MOV ESI,dword ptr [ESP + 0x100]     ; 00533caf
    MOV EDI,dword ptr [ESP + 0x4]       ; 00533cb6
    NEG EAX                             ; 00533cba
    ADD EDX,0x8000                      ; 00533cbc
    MOV EBX,ECX                         ; 00533cc2
    INC ESI                             ; 00533cc4
    ADD EAX,0x8000                      ; 00533cc5
    ADD EBX,0x4                         ; 00533cca
    MOV dword ptr [ESP + ECX*0x1 + 0x48],EDX ; 00533ccd
    MOV dword ptr [ESP + ECX*0x1 + 0x88],EAX ; 00533cd1
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00533cd8
    MOV dword ptr [ESP + 0x100],ESI     ; 00533cdf
    ADD ECX,0xc                         ; 00533ce6
    MOV dword ptr [ESP + 0x104],EBX     ; 00533ce9
    MOV dword ptr [ESP + 0xfc],ECX      ; 00533cf0
    CMP ESI,EDI                         ; 00533cf7
    JL 0x00533ba7                       ; 00533cf9
        ;   XREF to: 00533ba7 (CONDITIONAL_JUMP)  ; LAB_00533ba7
    CMP dword ptr [ESP + 0x4],0x1       ; 00533cff
        ;   Label: LAB_00533cff
    JLE 0x00533da5                      ; 00533d04
        ;   XREF to: 00533da5 (CONDITIONAL_JUMP)  ; LAB_00533da5
    MOV ECX,dword ptr [ESP + 0x4]       ; 00533d0a
    MOV EAX,0x4                         ; 00533d0e
    SHL ECX,0x2                         ; 00533d13
    CMP dword ptr [ESP + 0x48],0x8000   ; 00533d16
        ;   Label: LAB_00533d16
    JLE 0x00533d2f                      ; 00533d1e
        ;   XREF to: 00533d2f (CONDITIONAL_JUMP)  ; LAB_00533d2f
    CMP dword ptr [ESP + EAX*0x1 + 0x48],0xffff8000 ; 00533d20
    JGE 0x00533d2f                      ; 00533d28
        ;   XREF to: 00533d2f (CONDITIONAL_JUMP)  ; LAB_00533d2f
    INC word ptr [ESP + EAX*0x1 + 0x4a] ; 00533d2a
    CMP dword ptr [ESP + 0x48],0xffff8000 ; 00533d2f
        ;   Label: LAB_00533d2f
    JGE 0x00533d4f                      ; 00533d37
        ;   XREF to: 00533d4f (CONDITIONAL_JUMP)  ; LAB_00533d4f
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x48] ; 00533d39
    CMP EBX,0x8000                      ; 00533d3d
    JLE 0x00533d4f                      ; 00533d43
        ;   XREF to: 00533d4f (CONDITIONAL_JUMP)  ; LAB_00533d4f
    LEA ESI,[EBX + 0xffff0000]          ; 00533d45
    MOV dword ptr [ESP + EAX*0x1 + 0x48],ESI ; 00533d4b
    CMP dword ptr [ESP + 0x88],0x8000   ; 00533d4f
        ;   Label: LAB_00533d4f
    JLE 0x00533d71                      ; 00533d5a
        ;   XREF to: 00533d71 (CONDITIONAL_JUMP)  ; LAB_00533d71
    CMP dword ptr [ESP + EAX*0x1 + 0x88],0xffff8000 ; 00533d5c
    JGE 0x00533d71                      ; 00533d67
        ;   XREF to: 00533d71 (CONDITIONAL_JUMP)  ; LAB_00533d71
    INC word ptr [ESP + EAX*0x1 + 0x8a] ; 00533d69
    CMP dword ptr [ESP + 0x88],0xffff8000 ; 00533d71
        ;   Label: LAB_00533d71
    JGE 0x00533d9a                      ; 00533d7c
        ;   XREF to: 00533d9a (CONDITIONAL_JUMP)  ; LAB_00533d9a
    MOV ESI,dword ptr [ESP + EAX*0x1 + 0x88] ; 00533d7e
    CMP ESI,0x8000                      ; 00533d85
    JLE 0x00533d9a                      ; 00533d8b
        ;   XREF to: 00533d9a (CONDITIONAL_JUMP)  ; LAB_00533d9a
    LEA EDI,[ESI + 0xffff0000]          ; 00533d8d
    MOV dword ptr [ESP + EAX*0x1 + 0x88],EDI ; 00533d93
    ADD EAX,0x4                         ; 00533d9a
        ;   Label: LAB_00533d9a
    CMP EAX,ECX                         ; 00533d9d
    JL 0x00533d16                       ; 00533d9f
        ;   XREF to: 00533d16 (CONDITIONAL_JUMP)  ; LAB_00533d16
    MOV EBX,dword ptr [ESP + 0x4]       ; 00533da5
        ;   Label: LAB_00533da5
    XOR ECX,ECX                         ; 00533da9
    TEST EBX,EBX                        ; 00533dab
    JLE 0x00533ddb                      ; 00533dad
        ;   XREF to: 00533ddb (CONDITIONAL_JUMP)  ; LAB_00533ddb
    XOR EAX,EAX                         ; 00533daf
    XOR EDX,EDX                         ; 00533db1
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x48] ; 00533db3
        ;   Label: LAB_00533db3
    SHL EBX,0x8                         ; 00533db7
    MOV dword ptr [ESP + EDX*0x1 + 0x1c],EBX ; 00533dba
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x88] ; 00533dbe
    ADD EDX,0xc                         ; 00533dc5
    SHL EBX,0x8                         ; 00533dc8
    MOV dword ptr [ESP + EDX*0x1 + 0x14],EBX ; 00533dcb
    INC ECX                             ; 00533dcf
    MOV EBX,dword ptr [ESP + 0x4]       ; 00533dd0
    ADD EAX,0x4                         ; 00533dd4
    CMP ECX,EBX                         ; 00533dd7
    JL 0x00533db3                       ; 00533dd9
        ;   XREF to: 00533db3 (CONDITIONAL_JUMP)  ; LAB_00533db3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533ddb
        ;   Label: LAB_00533ddb
    CMP dword ptr [EAX + 0x15ae98],0x0  ; 00533dde
    JZ 0x00533df9                       ; 00533de5
        ;   XREF to: 00533df9 (CONDITIONAL_JUMP)  ; LAB_00533df9
    XOR EDI,EDI                         ; 00533de7
    MOV dword ptr [ESP + 0x10],EDI      ; 00533de9
    MOV dword ptr [ESP + 0xc],EDI       ; 00533ded
    MOV dword ptr [ESP + 0x8],EDI       ; 00533df1
    MOV dword ptr [ESP + 0x14],EDI      ; 00533df5
    CMP dword ptr [EBP + 0x20],0xfde8   ; 00533df9
        ;   Label: LAB_00533df9
    JLE 0x00533eb1                      ; 00533e00
        ;   XREF to: 00533eb1 (CONDITIONAL_JUMP)  ; LAB_00533eb1
    MOV EAX,ESP                         ; 00533e06
    PUSH EAX                            ; 00533e08
    MOV EDI,dword ptr [0x0060b280]      ; 00533e09 | DAT_0060b280
    PUSH EDI                            ; 00533e0f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046a030 ; 00533e10
        ;   XREF to: 0046a030 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046a030(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00533e15
        ;   Label: LAB_00533e15
    MOV EBX,dword ptr [EBP + 0x18]      ; 00533e18
    MOV ESI,dword ptr [ESP + 0xf8]      ; 00533e1b
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00533e22
    ADD EBX,0x12                        ; 00533e25
    INC ESI                             ; 00533e28
    MOV dword ptr [EBP + 0x18],EBX      ; 00533e29
    MOV dword ptr [ESP + 0xf8],ESI      ; 00533e2c
    CMP ESI,EDI                         ; 00533e33
    JL 0x00533aeb                       ; 00533e35
        ;   XREF to: 00533aeb (CONDITIONAL_JUMP)  ; LAB_00533aeb
    MOV ESP,EBP                         ; 00533e3b
        ;   Label: LAB_00533e3b
    POP EBP                             ; 00533e3d
    POP EDI                             ; 00533e3e
    POP ESI                             ; 00533e3f
    POP EBX                             ; 00533e40
    RET                                 ; 00533e41
    MOV EAX,0xffff                      ; 00533e42
        ;   Label: LAB_00533e42
    MOV EBX,dword ptr [0x01c38aec]      ; 00533e47 | DAT_01c38aec
    MOV EDX,dword ptr [EBP + 0x20]      ; 00533e4d
    SUB EAX,EBX                         ; 00533e50
    IMUL EDX                            ; 00533e52
    SHRD EAX,EDX,0x10                   ; 00533e54
    PUSH EAX                            ; 00533e58
    MOV ESI,dword ptr [0x0060b280]      ; 00533e59 | DAT_0060b280
    PUSH ESI                            ; 00533e5f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 00533e60
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00533e65
    PUSH 0x0                            ; 00533e68
    MOV EDI,dword ptr [0x0060b280]      ; 00533e6a | DAT_0060b280
    PUSH EDI                            ; 00533e70 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 00533e71
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00533e76
    JMP 0x00533ac2                      ; 00533e79
        ;   XREF to: 00533ac2 (UNCONDITIONAL_JUMP)  ; LAB_00533ac2
    MOV EAX,ESP                         ; 00533e7e
        ;   Label: LAB_00533e7e
    PUSH EAX                            ; 00533e80
    PUSH 0x201a474                      ; 00533e81
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_004df5f0 ; 00533e86
        ;   XREF to: 004df5f0 (UNCONDITIONAL_CALL)  ; undefined engine_keyframe.c_calculateSurfaceNormal_FUN_004df5f0()
    ADD ESP,0x8                         ; 00533e8b
    JMP 0x00533b84                      ; 00533e8e
        ;   XREF to: 00533b84 (UNCONDITIONAL_JUMP)  ; LAB_00533b84
    LEA EBX,[ESP + 0xec]                ; 00533e93
        ;   Label: LAB_00533e93
    MOV EAX,EDX                         ; 00533e9a
    FLD float ptr [EAX]                 ; 00533e9c | DAT_02054df4
    FISTP dword ptr [EBX]               ; 00533e9e
    FLD float ptr [EAX + 0x4]           ; 00533ea0 | DAT_02054df8
    FISTP dword ptr [EBX + 0x4]         ; 00533ea3
    FLD float ptr [EAX + 0x8]           ; 00533ea6 | DAT_02054dfc
    FISTP dword ptr [EBX + 0x8]         ; 00533ea9
    JMP 0x00533c9a                      ; 00533eac
        ;   XREF to: 00533c9a (UNCONDITIONAL_JUMP)  ; LAB_00533c9a
    MOV EAX,ESP                         ; 00533eb1
        ;   Label: LAB_00533eb1
    PUSH EAX                            ; 00533eb3
    MOV ESI,dword ptr [0x0060b280]      ; 00533eb4 | DAT_0060b280
    PUSH ESI                            ; 00533eba | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046a7d0 ; 00533ebb
        ;   XREF to: 0046a7d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046a7d0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    JMP 0x00533e15                      ; 00533ec0
        ;   XREF to: 00533e15 (UNCONDITIONAL_JUMP)  ; LAB_00533e15

