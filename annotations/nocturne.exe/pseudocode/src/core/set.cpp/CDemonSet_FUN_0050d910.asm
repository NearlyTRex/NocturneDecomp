; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_FUN_0050d910(CDemonSet *this_ptr,SInputFace *face_data,int count,int alpha)
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
;   core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0 at 0050df33
;
; Referenced Globals:
;   undefined4 DAT_005a18f0
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   int g_CurrentAlphaValue = 0xff
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   undefined4 DAT_005be680
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c038f4
;   undefined4 g_CGame_01c775ec.render_mode
;   undefined4 DAT_01fff54c
;   undefined4 DAT_01fff550
;   undefined4 DAT_01fff554
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
;   engine_keyframe.c_calculateSurfaceNormal_FUN_004c3920
;   engine_matrix.c_normalizeVector3DFloat_FUN_004cde90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d910
        ;   Label: core_set.cpp_CDemonSet_FUN_0050d910
    PUSH ESI                            ; 0050d911
    PUSH EDI                            ; 0050d912
    PUSH EBP                            ; 0050d913
    MOV EBP,ESP                         ; 0050d914
    SUB ESP,0x108                       ; 0050d916
    AND ESP,0xfffffff8                  ; 0050d91c
    PUSH 0x5be680                       ; 0050d91f | DAT_005be680
    MOV EDX,dword ptr [0x005ae704]      ; 0050d924 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 0050d92a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 0050d92b
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x005b9354]                ; 0050d930 | g_CGame_PTR_005b9354
    MOV ECX,dword ptr [EAX + 0x1f4]     ; 0050d935 | g_CGame_01c775ec.render_mode
    ADD ESP,0x8                         ; 0050d93b
    CMP ECX,0x2                         ; 0050d93e
    JNZ 0x0050dcd2                      ; 0050d941
        ;   XREF to: 0050dcd2 (CONDITIONAL_JUMP)  ; LAB_0050dcd2
    MOV EAX,[0x005b763c]                ; 0050d947 | g_CurrentAlphaValue
    SHL EAX,0x8                         ; 0050d94c
    MOV dword ptr [EBP + 0x20],EAX      ; 0050d94f
    MOV EAX,[0x005ae704]                ; 0050d952 | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_0050d952
    PUSH EAX                            ; 0050d957 | DAT_01b4d738
    LEA ESI,[ESP + 0xd8]                ; 0050d958
    CALL engine_drender.cpp_FUN_00460d10 ; 0050d95f
        ;   XREF to: 00460d10 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00460d10()
    ADD ESP,0x4                         ; 0050d964
    XOR EDX,EDX                         ; 0050d967
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0050d969
    MOV dword ptr [ESP + 0xf8],EDX      ; 0050d96c
    TEST ECX,ECX                        ; 0050d973
    JLE 0x0050dccb                      ; 0050d975
        ;   XREF to: 0050dccb (CONDITIONAL_JUMP)  ; LAB_0050dccb
    XOR EDX,EDX                         ; 0050d97b
        ;   Label: LAB_0050d97b
    MOV EAX,0x3                         ; 0050d97d
    MOV dword ptr [ESP + 0x14],EDX      ; 0050d982
    MOV dword ptr [ESP + 0x10],EDX      ; 0050d986
    MOV dword ptr [ESP + 0xc],EDX       ; 0050d98a
    MOV dword ptr [ESP + 0x8],EDX       ; 0050d98e
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050d992
    MOV dword ptr [ESP + 0x4],EAX       ; 0050d995
    XOR EAX,EAX                         ; 0050d999
    MOV AX,word ptr [EDX]               ; 0050d99b
    MOV dword ptr [ESP + 0x18],EAX      ; 0050d99e
    XOR EAX,EAX                         ; 0050d9a2
    MOV AX,word ptr [EDX + 0x2]         ; 0050d9a4
    MOV dword ptr [ESP + 0x24],EAX      ; 0050d9a8
    XOR EAX,EAX                         ; 0050d9ac
    MOV AX,word ptr [EDX + 0x4]         ; 0050d9ae
    MOV dword ptr [ESP + 0x30],EAX      ; 0050d9b2
    XOR EAX,EAX                         ; 0050d9b6
    MOV AX,word ptr [EDX + 0x6]         ; 0050d9b8
    SHL EAX,0x8                         ; 0050d9bc
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050d9bf
    XOR EAX,EAX                         ; 0050d9c3
    MOV AX,word ptr [EDX + 0x8]         ; 0050d9c5
    SHL EAX,0x8                         ; 0050d9c9
    MOV dword ptr [ESP + 0x28],EAX      ; 0050d9cc
    XOR EAX,EAX                         ; 0050d9d0
    MOV AX,word ptr [EDX + 0xa]         ; 0050d9d2
    SHL EAX,0x8                         ; 0050d9d6
    MOV dword ptr [ESP + 0x34],EAX      ; 0050d9d9
    XOR EAX,EAX                         ; 0050d9dd
    MOV AX,word ptr [EDX + 0xc]         ; 0050d9df
    SHL EAX,0x8                         ; 0050d9e3
    MOV dword ptr [ESP + 0x20],EAX      ; 0050d9e6
    XOR EAX,EAX                         ; 0050d9ea
    MOV AX,word ptr [EDX + 0xe]         ; 0050d9ec
    SHL EAX,0x8                         ; 0050d9f0
    MOV dword ptr [ESP + 0x2c],EAX      ; 0050d9f3
    XOR EAX,EAX                         ; 0050d9f7
    MOV AX,word ptr [EDX + 0x10]        ; 0050d9f9
    SHL EAX,0x8                         ; 0050d9fd
    MOV dword ptr [ESP + 0x38],EAX      ; 0050da00
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050da04
    CMP dword ptr [EAX + 0x15aa9c],0x0  ; 0050da07
    JNZ 0x0050dd0e                      ; 0050da0e
        ;   XREF to: 0050dd0e (CONDITIONAL_JUMP)  ; LAB_0050dd0e
    XOR EAX,EAX                         ; 0050da14
        ;   Label: LAB_0050da14
    MOV EDX,dword ptr [ESP + 0x4]       ; 0050da16
    MOV dword ptr [ESP + 0x100],EAX     ; 0050da1a
    TEST EDX,EDX                        ; 0050da21
    JLE 0x0050db8f                      ; 0050da23
        ;   XREF to: 0050db8f (CONDITIONAL_JUMP)  ; LAB_0050db8f
    MOV dword ptr [ESP + 0xfc],EAX      ; 0050da29
    MOV dword ptr [ESP + 0x104],EAX     ; 0050da30
    MOV ECX,dword ptr [ESP + 0xfc]      ; 0050da37
        ;   Label: LAB_0050da37
    MOV ECX,dword ptr [ESP + ECX*0x1 + 0x18] ; 0050da3e
    IMUL ECX,ECX,0xc                    ; 0050da42
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050da45
    MOV EDX,0x2045ab0                   ; 0050da48
    MOV EBX,dword ptr [EAX + 0x15aa9c]  ; 0050da4d
    ADD EDX,ECX                         ; 0050da53
    TEST EBX,EBX                        ; 0050da55
    JZ 0x0050dd23                       ; 0050da57
        ;   XREF to: 0050dd23 (CONDITIONAL_JUMP)  ; LAB_0050dd23
    FLD float ptr [EDX]                 ; 0050da5d | DAT_02045ab0
    FABS                                ; 0050da5f
    FLD1                                ; 0050da61
    FCOMPP                              ; 0050da63
    FNSTSW AX                           ; 0050da65
    SAHF                                ; 0050da67
    JBE 0x0050dd23                      ; 0050da68
        ;   XREF to: 0050dd23 (CONDITIONAL_JUMP)  ; LAB_0050dd23
    FLD float ptr [EDX + 0x4]           ; 0050da6e | DAT_02045ab4
    FABS                                ; 0050da71
    FLD1                                ; 0050da73
    FCOMPP                              ; 0050da75
    FNSTSW AX                           ; 0050da77
    SAHF                                ; 0050da79
    JBE 0x0050dd23                      ; 0050da7a
        ;   XREF to: 0050dd23 (CONDITIONAL_JUMP)  ; LAB_0050dd23
    FLD float ptr [EDX + 0x8]           ; 0050da80 | DAT_02045ab8
    FABS                                ; 0050da83
    FLD1                                ; 0050da85
    FCOMPP                              ; 0050da87
    FNSTSW AX                           ; 0050da89
    SAHF                                ; 0050da8b
    JBE 0x0050dd23                      ; 0050da8c
        ;   XREF to: 0050dd23 (CONDITIONAL_JUMP)  ; LAB_0050dd23
    LEA EBX,[ESP + 0xc8]                ; 0050da92
    MOV EAX,0x1fff54c                   ; 0050da99
    FLD float ptr [EAX]                 ; 0050da9e | DAT_01fff54c
    FMUL float ptr [0x005a18f0]         ; 0050daa0 | DAT_005a18f0
    FISTP dword ptr [EBX]               ; 0050daa6
    FLD float ptr [EAX + 0x4]           ; 0050daa8 | DAT_01fff550
    FMUL float ptr [0x005a18f0]         ; 0050daab | DAT_005a18f0
    FISTP dword ptr [EBX + 0x4]         ; 0050dab1
    FLD float ptr [EAX + 0x8]           ; 0050dab4 | DAT_01fff554
    FMUL float ptr [0x005a18f0]         ; 0050dab7 | DAT_005a18f0
    FISTP dword ptr [EBX + 0x8]         ; 0050dabd
    MOV ESI,dword ptr [ESP + 0xc8]      ; 0050dac0
    MOV EDI,dword ptr [ESP + 0xcc]      ; 0050dac7
    MOV EAX,dword ptr [ECX + 0x200b130] ; 0050dace
    MOV EDX,dword ptr [ESP + 0xd0]      ; 0050dad4
    SUB ESI,EAX                         ; 0050dadb
    MOV EAX,dword ptr [ECX + 0x200b134] ; 0050dadd
    MOV dword ptr [ESP + 0xc8],ESI      ; 0050dae3
    SUB EDI,EAX                         ; 0050daea
    MOV EAX,dword ptr [ECX + 0x200b138] ; 0050daec
    LEA ESI,[ESP + 0xe0]                ; 0050daf2
    SUB EDX,EAX                         ; 0050daf9
    LEA EAX,[ESP + 0xc8]                ; 0050dafb
    MOV dword ptr [ESP + 0xcc],EDI      ; 0050db02
    PUSH EAX                            ; 0050db09
    LEA EDI,[ESP + 0xf0]                ; 0050db0a
    MOV dword ptr [ESP + 0xd4],EDX      ; 0050db11
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_004cde90 ; 0050db18
        ;   XREF to: 004cde90 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_normalizeVector3DFloat_FUN_004cde90(CVector3i * input_vector, CVector3i * output_vector)
    LEA ESI,[ESP + 0xe4]                ; 0050db1d
    ADD ESP,0x4                         ; 0050db24
    MOVSD ES:EDI,ESI                    ; 0050db27
    MOVSD ES:EDI,ESI                    ; 0050db28
    MOVSD ES:EDI,ESI                    ; 0050db29
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0050db2a
        ;   Label: LAB_0050db2a
    MOV EDX,dword ptr [ESP + 0xec]      ; 0050db31
    MOV ECX,dword ptr [ESP + 0x104]     ; 0050db38
    MOV ESI,dword ptr [ESP + 0x100]     ; 0050db3f
    MOV EDI,dword ptr [ESP + 0x4]       ; 0050db46
    NEG EAX                             ; 0050db4a
    ADD EDX,0x8000                      ; 0050db4c
    MOV EBX,ECX                         ; 0050db52
    INC ESI                             ; 0050db54
    ADD EAX,0x8000                      ; 0050db55
    ADD EBX,0x4                         ; 0050db5a
    MOV dword ptr [ESP + ECX*0x1 + 0x48],EDX ; 0050db5d
    MOV dword ptr [ESP + ECX*0x1 + 0x88],EAX ; 0050db61
    MOV ECX,dword ptr [ESP + 0xfc]      ; 0050db68
    MOV dword ptr [ESP + 0x100],ESI     ; 0050db6f
    ADD ECX,0xc                         ; 0050db76
    MOV dword ptr [ESP + 0x104],EBX     ; 0050db79
    MOV dword ptr [ESP + 0xfc],ECX      ; 0050db80
    CMP ESI,EDI                         ; 0050db87
    JL 0x0050da37                       ; 0050db89
        ;   XREF to: 0050da37 (CONDITIONAL_JUMP)  ; LAB_0050da37
    CMP dword ptr [ESP + 0x4],0x1       ; 0050db8f
        ;   Label: LAB_0050db8f
    JLE 0x0050dc35                      ; 0050db94
        ;   XREF to: 0050dc35 (CONDITIONAL_JUMP)  ; LAB_0050dc35
    MOV ECX,dword ptr [ESP + 0x4]       ; 0050db9a
    MOV EAX,0x4                         ; 0050db9e
    SHL ECX,0x2                         ; 0050dba3
    CMP dword ptr [ESP + 0x48],0x8000   ; 0050dba6
        ;   Label: LAB_0050dba6
    JLE 0x0050dbbf                      ; 0050dbae
        ;   XREF to: 0050dbbf (CONDITIONAL_JUMP)  ; LAB_0050dbbf
    CMP dword ptr [ESP + EAX*0x1 + 0x48],0xffff8000 ; 0050dbb0
    JGE 0x0050dbbf                      ; 0050dbb8
        ;   XREF to: 0050dbbf (CONDITIONAL_JUMP)  ; LAB_0050dbbf
    INC word ptr [ESP + EAX*0x1 + 0x4a] ; 0050dbba
    CMP dword ptr [ESP + 0x48],0xffff8000 ; 0050dbbf
        ;   Label: LAB_0050dbbf
    JGE 0x0050dbdf                      ; 0050dbc7
        ;   XREF to: 0050dbdf (CONDITIONAL_JUMP)  ; LAB_0050dbdf
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x48] ; 0050dbc9
    CMP EBX,0x8000                      ; 0050dbcd
    JLE 0x0050dbdf                      ; 0050dbd3
        ;   XREF to: 0050dbdf (CONDITIONAL_JUMP)  ; LAB_0050dbdf
    LEA ESI,[EBX + 0xffff0000]          ; 0050dbd5
    MOV dword ptr [ESP + EAX*0x1 + 0x48],ESI ; 0050dbdb
    CMP dword ptr [ESP + 0x88],0x8000   ; 0050dbdf
        ;   Label: LAB_0050dbdf
    JLE 0x0050dc01                      ; 0050dbea
        ;   XREF to: 0050dc01 (CONDITIONAL_JUMP)  ; LAB_0050dc01
    CMP dword ptr [ESP + EAX*0x1 + 0x88],0xffff8000 ; 0050dbec
    JGE 0x0050dc01                      ; 0050dbf7
        ;   XREF to: 0050dc01 (CONDITIONAL_JUMP)  ; LAB_0050dc01
    INC word ptr [ESP + EAX*0x1 + 0x8a] ; 0050dbf9
    CMP dword ptr [ESP + 0x88],0xffff8000 ; 0050dc01
        ;   Label: LAB_0050dc01
    JGE 0x0050dc2a                      ; 0050dc0c
        ;   XREF to: 0050dc2a (CONDITIONAL_JUMP)  ; LAB_0050dc2a
    MOV ESI,dword ptr [ESP + EAX*0x1 + 0x88] ; 0050dc0e
    CMP ESI,0x8000                      ; 0050dc15
    JLE 0x0050dc2a                      ; 0050dc1b
        ;   XREF to: 0050dc2a (CONDITIONAL_JUMP)  ; LAB_0050dc2a
    LEA EDI,[ESI + 0xffff0000]          ; 0050dc1d
    MOV dword ptr [ESP + EAX*0x1 + 0x88],EDI ; 0050dc23
    ADD EAX,0x4                         ; 0050dc2a
        ;   Label: LAB_0050dc2a
    CMP EAX,ECX                         ; 0050dc2d
    JL 0x0050dba6                       ; 0050dc2f
        ;   XREF to: 0050dba6 (CONDITIONAL_JUMP)  ; LAB_0050dba6
    MOV EBX,dword ptr [ESP + 0x4]       ; 0050dc35
        ;   Label: LAB_0050dc35
    XOR ECX,ECX                         ; 0050dc39
    TEST EBX,EBX                        ; 0050dc3b
    JLE 0x0050dc6b                      ; 0050dc3d
        ;   XREF to: 0050dc6b (CONDITIONAL_JUMP)  ; LAB_0050dc6b
    XOR EAX,EAX                         ; 0050dc3f
    XOR EDX,EDX                         ; 0050dc41
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x48] ; 0050dc43
        ;   Label: LAB_0050dc43
    SHL EBX,0x8                         ; 0050dc47
    MOV dword ptr [ESP + EDX*0x1 + 0x1c],EBX ; 0050dc4a
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x88] ; 0050dc4e
    ADD EDX,0xc                         ; 0050dc55
    SHL EBX,0x8                         ; 0050dc58
    MOV dword ptr [ESP + EDX*0x1 + 0x14],EBX ; 0050dc5b
    INC ECX                             ; 0050dc5f
    MOV EBX,dword ptr [ESP + 0x4]       ; 0050dc60
    ADD EAX,0x4                         ; 0050dc64
    CMP ECX,EBX                         ; 0050dc67
    JL 0x0050dc43                       ; 0050dc69
        ;   XREF to: 0050dc43 (CONDITIONAL_JUMP)  ; LAB_0050dc43
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050dc6b
        ;   Label: LAB_0050dc6b
    CMP dword ptr [EAX + 0x15aa9c],0x0  ; 0050dc6e
    JZ 0x0050dc89                       ; 0050dc75
        ;   XREF to: 0050dc89 (CONDITIONAL_JUMP)  ; LAB_0050dc89
    XOR EDI,EDI                         ; 0050dc77
    MOV dword ptr [ESP + 0x10],EDI      ; 0050dc79
    MOV dword ptr [ESP + 0xc],EDI       ; 0050dc7d
    MOV dword ptr [ESP + 0x8],EDI       ; 0050dc81
    MOV dword ptr [ESP + 0x14],EDI      ; 0050dc85
    CMP dword ptr [EBP + 0x20],0xfde8   ; 0050dc89
        ;   Label: LAB_0050dc89
    JLE 0x0050dd41                      ; 0050dc90
        ;   XREF to: 0050dd41 (CONDITIONAL_JUMP)  ; LAB_0050dd41
    MOV EAX,ESP                         ; 0050dc96
    PUSH EAX                            ; 0050dc98
    MOV EDI,dword ptr [0x005ae704]      ; 0050dc99 | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 0050dc9f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0045f790 ; 0050dca0
        ;   XREF to: 0045f790 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0045f790(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0050dca5
        ;   Label: LAB_0050dca5
    MOV EBX,dword ptr [EBP + 0x18]      ; 0050dca8
    MOV ESI,dword ptr [ESP + 0xf8]      ; 0050dcab
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0050dcb2
    ADD EBX,0x12                        ; 0050dcb5
    INC ESI                             ; 0050dcb8
    MOV dword ptr [EBP + 0x18],EBX      ; 0050dcb9
    MOV dword ptr [ESP + 0xf8],ESI      ; 0050dcbc
    CMP ESI,EDI                         ; 0050dcc3
    JL 0x0050d97b                       ; 0050dcc5
        ;   XREF to: 0050d97b (CONDITIONAL_JUMP)  ; LAB_0050d97b
    MOV ESP,EBP                         ; 0050dccb
        ;   Label: LAB_0050dccb
    POP EBP                             ; 0050dccd
    POP EDI                             ; 0050dcce
    POP ESI                             ; 0050dccf
    POP EBX                             ; 0050dcd0
    RET                                 ; 0050dcd1
    MOV EAX,0xffff                      ; 0050dcd2
        ;   Label: LAB_0050dcd2
    MOV EBX,dword ptr [0x01c038f4]      ; 0050dcd7 | DAT_01c038f4
    MOV EDX,dword ptr [EBP + 0x20]      ; 0050dcdd
    SUB EAX,EBX                         ; 0050dce0
    IMUL EDX                            ; 0050dce2
    SHRD EAX,EDX,0x10                   ; 0050dce4
    PUSH EAX                            ; 0050dce8
    MOV ESI,dword ptr [0x005ae704]      ; 0050dce9 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 0050dcef | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 0050dcf0
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0050dcf5
    PUSH 0x0                            ; 0050dcf8
    MOV EDI,dword ptr [0x005ae704]      ; 0050dcfa | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 0050dd00 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0050dd01
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0050dd06
    JMP 0x0050d952                      ; 0050dd09
        ;   XREF to: 0050d952 (UNCONDITIONAL_JUMP)  ; LAB_0050d952
    MOV EAX,ESP                         ; 0050dd0e
        ;   Label: LAB_0050dd0e
    PUSH EAX                            ; 0050dd10
    PUSH 0x200b130                      ; 0050dd11
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_004c3920 ; 0050dd16
        ;   XREF to: 004c3920 (UNCONDITIONAL_CALL)  ; void engine_keyframe.c_calculateSurfaceNormal_FUN_004c3920(CVector3i * vertex_data, SMRGLPrimitiveTriangle * texture)
    ADD ESP,0x8                         ; 0050dd1b
    JMP 0x0050da14                      ; 0050dd1e
        ;   XREF to: 0050da14 (UNCONDITIONAL_JUMP)  ; LAB_0050da14
    LEA EBX,[ESP + 0xec]                ; 0050dd23
        ;   Label: LAB_0050dd23
    MOV EAX,EDX                         ; 0050dd2a
    FLD float ptr [EAX]                 ; 0050dd2c | DAT_02045ab0
    FISTP dword ptr [EBX]               ; 0050dd2e
    FLD float ptr [EAX + 0x4]           ; 0050dd30 | DAT_02045ab4
    FISTP dword ptr [EBX + 0x4]         ; 0050dd33
    FLD float ptr [EAX + 0x8]           ; 0050dd36 | DAT_02045ab8
    FISTP dword ptr [EBX + 0x8]         ; 0050dd39
    JMP 0x0050db2a                      ; 0050dd3c
        ;   XREF to: 0050db2a (UNCONDITIONAL_JUMP)  ; LAB_0050db2a
    MOV EAX,ESP                         ; 0050dd41
        ;   Label: LAB_0050dd41
    PUSH EAX                            ; 0050dd43
    MOV ESI,dword ptr [0x005ae704]      ; 0050dd44 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 0050dd4a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0045ff20 ; 0050dd4b
        ;   XREF to: 0045ff20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0045ff20(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    JMP 0x0050dca5                      ; 0050dd50
        ;   XREF to: 0050dca5 (UNCONDITIONAL_JUMP)  ; LAB_0050dca5

