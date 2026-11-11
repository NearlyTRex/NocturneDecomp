; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_00554d30(CDemonSet *this_ptr,SInputFace *face_data,int count,int alpha)
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
;   core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_005552f0 at 00555353
;
; Referenced Globals:
;   undefined4 DAT_00605000
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b4b8
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_00622f34
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c51cac
;   undefined4 g_CGameInstance.render_mode
;   undefined4 DAT_0202a844
;   undefined4 DAT_0202a848
;   undefined4 DAT_0202a84c
;   undefined4 DAT_02070da8
;   undefined4 DAT_02070dac
;   undefined4 DAT_02070db0
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_00482540
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_00482cd0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_keyframe.c_calculateSurfaceNormal_FUN_004fc9c0
;   engine_matrix.c_FUN_00483ac0
;   engine_matrix.c_normalizeVector3DFloat_FUN_00508780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554d30
        ;   Label: core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_00554d30
    PUSH ESI                            ; 00554d31
    PUSH EDI                            ; 00554d32
    PUSH EBP                            ; 00554d33
    MOV EBP,ESP                         ; 00554d34
    SUB ESP,0x108                       ; 00554d36
    AND ESP,0xfffffff8                  ; 00554d3c
    PUSH 0x622f34                       ; 00554d3f | DAT_00622f34
    MOV EDX,dword ptr [0x00612560]      ; 00554d44 | DAT_00612560
    PUSH EDX                            ; 00554d4a | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 00554d4b
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x0061d95c]                ; 00554d50 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x210]     ; 00554d55 | g_CGameInstance.render_mode
    ADD ESP,0x8                         ; 00554d5b
    CMP ECX,0x2                         ; 00554d5e
    JNZ 0x005550f2                      ; 00554d61
        ;   XREF to: 005550f2 (CONDITIONAL_JUMP)  ; LAB_005550f2
    MOV EAX,[0x0061b4b8]                ; 00554d67 | DAT_0061b4b8
    SHL EAX,0x8                         ; 00554d6c
    MOV dword ptr [EBP + 0x20],EAX      ; 00554d6f
    MOV EAX,[0x00612560]                ; 00554d72 | DAT_00612560
        ;   Label: LAB_00554d72
    PUSH EAX                            ; 00554d77 | DAT_01bc120c
    LEA ESI,[ESP + 0xd8]                ; 00554d78
    CALL engine_matrix.c_FUN_00483ac0   ; 00554d7f
        ;   XREF to: 00483ac0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483ac0()
    ADD ESP,0x4                         ; 00554d84
    XOR EDX,EDX                         ; 00554d87
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00554d89
    MOV dword ptr [ESP + 0xf8],EDX      ; 00554d8c
    TEST ECX,ECX                        ; 00554d93
    JLE 0x005550eb                      ; 00554d95
        ;   XREF to: 005550eb (CONDITIONAL_JUMP)  ; LAB_005550eb
    XOR EDX,EDX                         ; 00554d9b
        ;   Label: LAB_00554d9b
    MOV EAX,0x3                         ; 00554d9d
    MOV dword ptr [ESP + 0x14],EDX      ; 00554da2
    MOV dword ptr [ESP + 0x10],EDX      ; 00554da6
    MOV dword ptr [ESP + 0xc],EDX       ; 00554daa
    MOV dword ptr [ESP + 0x8],EDX       ; 00554dae
    MOV EDX,dword ptr [EBP + 0x18]      ; 00554db2
    MOV dword ptr [ESP + 0x4],EAX       ; 00554db5
    XOR EAX,EAX                         ; 00554db9
    MOV AX,word ptr [EDX]               ; 00554dbb
    MOV dword ptr [ESP + 0x18],EAX      ; 00554dbe
    XOR EAX,EAX                         ; 00554dc2
    MOV AX,word ptr [EDX + 0x2]         ; 00554dc4
    MOV dword ptr [ESP + 0x24],EAX      ; 00554dc8
    XOR EAX,EAX                         ; 00554dcc
    MOV AX,word ptr [EDX + 0x4]         ; 00554dce
    MOV dword ptr [ESP + 0x30],EAX      ; 00554dd2
    XOR EAX,EAX                         ; 00554dd6
    MOV AX,word ptr [EDX + 0x6]         ; 00554dd8
    SHL EAX,0x8                         ; 00554ddc
    MOV dword ptr [ESP + 0x1c],EAX      ; 00554ddf
    XOR EAX,EAX                         ; 00554de3
    MOV AX,word ptr [EDX + 0x8]         ; 00554de5
    SHL EAX,0x8                         ; 00554de9
    MOV dword ptr [ESP + 0x28],EAX      ; 00554dec
    XOR EAX,EAX                         ; 00554df0
    MOV AX,word ptr [EDX + 0xa]         ; 00554df2
    SHL EAX,0x8                         ; 00554df6
    MOV dword ptr [ESP + 0x34],EAX      ; 00554df9
    XOR EAX,EAX                         ; 00554dfd
    MOV AX,word ptr [EDX + 0xc]         ; 00554dff
    SHL EAX,0x8                         ; 00554e03
    MOV dword ptr [ESP + 0x20],EAX      ; 00554e06
    XOR EAX,EAX                         ; 00554e0a
    MOV AX,word ptr [EDX + 0xe]         ; 00554e0c
    SHL EAX,0x8                         ; 00554e10
    MOV dword ptr [ESP + 0x2c],EAX      ; 00554e13
    XOR EAX,EAX                         ; 00554e17
    MOV AX,word ptr [EDX + 0x10]        ; 00554e19
    SHL EAX,0x8                         ; 00554e1d
    MOV dword ptr [ESP + 0x38],EAX      ; 00554e20
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554e24
    CMP dword ptr [EAX + 0x15ae98],0x0  ; 00554e27
    JNZ 0x0055512e                      ; 00554e2e
        ;   XREF to: 0055512e (CONDITIONAL_JUMP)  ; LAB_0055512e
    XOR EAX,EAX                         ; 00554e34
        ;   Label: LAB_00554e34
    MOV EDX,dword ptr [ESP + 0x4]       ; 00554e36
    MOV dword ptr [ESP + 0x100],EAX     ; 00554e3a
    TEST EDX,EDX                        ; 00554e41
    JLE 0x00554faf                      ; 00554e43
        ;   XREF to: 00554faf (CONDITIONAL_JUMP)  ; LAB_00554faf
    MOV dword ptr [ESP + 0xfc],EAX      ; 00554e49
    MOV dword ptr [ESP + 0x104],EAX     ; 00554e50
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00554e57
        ;   Label: LAB_00554e57
    MOV ECX,dword ptr [ESP + ECX*0x1 + 0x18] ; 00554e5e
    IMUL ECX,ECX,0xc                    ; 00554e62
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554e65
    MOV EDX,0x2070da8                   ; 00554e68
    MOV EBX,dword ptr [EAX + 0x15ae98]  ; 00554e6d
    ADD EDX,ECX                         ; 00554e73
    TEST EBX,EBX                        ; 00554e75
    JZ 0x00555143                       ; 00554e77
        ;   XREF to: 00555143 (CONDITIONAL_JUMP)  ; LAB_00555143
    FLD float ptr [EDX]                 ; 00554e7d | DAT_02070da8
    FABS                                ; 00554e7f
    FLD1                                ; 00554e81
    FCOMPP                              ; 00554e83
    FNSTSW AX                           ; 00554e85
    SAHF                                ; 00554e87
    JBE 0x00555143                      ; 00554e88
        ;   XREF to: 00555143 (CONDITIONAL_JUMP)  ; LAB_00555143
    FLD float ptr [EDX + 0x4]           ; 00554e8e | DAT_02070dac
    FABS                                ; 00554e91
    FLD1                                ; 00554e93
    FCOMPP                              ; 00554e95
    FNSTSW AX                           ; 00554e97
    SAHF                                ; 00554e99
    JBE 0x00555143                      ; 00554e9a
        ;   XREF to: 00555143 (CONDITIONAL_JUMP)  ; LAB_00555143
    FLD float ptr [EDX + 0x8]           ; 00554ea0 | DAT_02070db0
    FABS                                ; 00554ea3
    FLD1                                ; 00554ea5
    FCOMPP                              ; 00554ea7
    FNSTSW AX                           ; 00554ea9
    SAHF                                ; 00554eab
    JBE 0x00555143                      ; 00554eac
        ;   XREF to: 00555143 (CONDITIONAL_JUMP)  ; LAB_00555143
    LEA EBX,[ESP + 0xc8]                ; 00554eb2
    MOV EAX,0x202a844                   ; 00554eb9
    FLD float ptr [EAX]                 ; 00554ebe | DAT_0202a844
    FMUL float ptr [0x00605000]         ; 00554ec0 | DAT_00605000
    FISTP dword ptr [EBX]               ; 00554ec6
    FLD float ptr [EAX + 0x4]           ; 00554ec8 | DAT_0202a848
    FMUL float ptr [0x00605000]         ; 00554ecb | DAT_00605000
    FISTP dword ptr [EBX + 0x4]         ; 00554ed1
    FLD float ptr [EAX + 0x8]           ; 00554ed4 | DAT_0202a84c
    FMUL float ptr [0x00605000]         ; 00554ed7 | DAT_00605000
    FISTP dword ptr [EBX + 0x8]         ; 00554edd
    MOV ESI,dword ptr [ESP + 0xc8]      ; 00554ee0
    MOV EDI,dword ptr [ESP + 0xcc]      ; 00554ee7
    MOV EAX,dword ptr [ECX + 0x2036428] ; 00554eee
    MOV EDX,dword ptr [ESP + 0xd0]      ; 00554ef4
    SUB ESI,EAX                         ; 00554efb
    MOV EAX,dword ptr [ECX + 0x203642c] ; 00554efd
    MOV dword ptr [ESP + 0xc8],ESI      ; 00554f03
    SUB EDI,EAX                         ; 00554f0a
    MOV EAX,dword ptr [ECX + 0x2036430] ; 00554f0c
    LEA ESI,[ESP + 0xe0]                ; 00554f12
    SUB EDX,EAX                         ; 00554f19
    LEA EAX,[ESP + 0xc8]                ; 00554f1b
    MOV dword ptr [ESP + 0xcc],EDI      ; 00554f22
    PUSH EAX                            ; 00554f29
    LEA EDI,[ESP + 0xf0]                ; 00554f2a
    MOV dword ptr [ESP + 0xd4],EDX      ; 00554f31
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_00508780 ; 00554f38
        ;   XREF to: 00508780 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_00508780()
    LEA ESI,[ESP + 0xe4]                ; 00554f3d
    ADD ESP,0x4                         ; 00554f44
    MOVSD ES:EDI,ESI                    ; 00554f47
    MOVSD ES:EDI,ESI                    ; 00554f48
    MOVSD ES:EDI,ESI                    ; 00554f49
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00554f4a
        ;   Label: LAB_00554f4a
    MOV EDX,dword ptr [ESP + 0xec]      ; 00554f51
    MOV ECX,dword ptr [ESP + 0x104]     ; 00554f58
    MOV ESI,dword ptr [ESP + 0x100]     ; 00554f5f
    MOV EDI,dword ptr [ESP + 0x4]       ; 00554f66
    NEG EAX                             ; 00554f6a
    ADD EDX,0x8000                      ; 00554f6c
    MOV EBX,ECX                         ; 00554f72
    INC ESI                             ; 00554f74
    ADD EAX,0x8000                      ; 00554f75
    ADD EBX,0x4                         ; 00554f7a
    MOV dword ptr [ESP + ECX*0x1 + 0x48],EDX ; 00554f7d
    MOV dword ptr [ESP + ECX*0x1 + 0x88],EAX ; 00554f81
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00554f88
    MOV dword ptr [ESP + 0x100],ESI     ; 00554f8f
    ADD ECX,0xc                         ; 00554f96
    MOV dword ptr [ESP + 0x104],EBX     ; 00554f99
    MOV dword ptr [ESP + 0xfc],ECX      ; 00554fa0
    CMP ESI,EDI                         ; 00554fa7
    JL 0x00554e57                       ; 00554fa9
        ;   XREF to: 00554e57 (CONDITIONAL_JUMP)  ; LAB_00554e57
    CMP dword ptr [ESP + 0x4],0x1       ; 00554faf
        ;   Label: LAB_00554faf
    JLE 0x00555055                      ; 00554fb4
        ;   XREF to: 00555055 (CONDITIONAL_JUMP)  ; LAB_00555055
    MOV ECX,dword ptr [ESP + 0x4]       ; 00554fba
    MOV EAX,0x4                         ; 00554fbe
    SHL ECX,0x2                         ; 00554fc3
    CMP dword ptr [ESP + 0x48],0x8000   ; 00554fc6
        ;   Label: LAB_00554fc6
    JLE 0x00554fdf                      ; 00554fce
        ;   XREF to: 00554fdf (CONDITIONAL_JUMP)  ; LAB_00554fdf
    CMP dword ptr [ESP + EAX*0x1 + 0x48],0xffff8000 ; 00554fd0
    JGE 0x00554fdf                      ; 00554fd8
        ;   XREF to: 00554fdf (CONDITIONAL_JUMP)  ; LAB_00554fdf
    INC word ptr [ESP + EAX*0x1 + 0x4a] ; 00554fda
    CMP dword ptr [ESP + 0x48],0xffff8000 ; 00554fdf
        ;   Label: LAB_00554fdf
    JGE 0x00554fff                      ; 00554fe7
        ;   XREF to: 00554fff (CONDITIONAL_JUMP)  ; LAB_00554fff
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x48] ; 00554fe9
    CMP EBX,0x8000                      ; 00554fed
    JLE 0x00554fff                      ; 00554ff3
        ;   XREF to: 00554fff (CONDITIONAL_JUMP)  ; LAB_00554fff
    LEA ESI,[EBX + 0xffff0000]          ; 00554ff5
    MOV dword ptr [ESP + EAX*0x1 + 0x48],ESI ; 00554ffb
    CMP dword ptr [ESP + 0x88],0x8000   ; 00554fff
        ;   Label: LAB_00554fff
    JLE 0x00555021                      ; 0055500a
        ;   XREF to: 00555021 (CONDITIONAL_JUMP)  ; LAB_00555021
    CMP dword ptr [ESP + EAX*0x1 + 0x88],0xffff8000 ; 0055500c
    JGE 0x00555021                      ; 00555017
        ;   XREF to: 00555021 (CONDITIONAL_JUMP)  ; LAB_00555021
    INC word ptr [ESP + EAX*0x1 + 0x8a] ; 00555019
    CMP dword ptr [ESP + 0x88],0xffff8000 ; 00555021
        ;   Label: LAB_00555021
    JGE 0x0055504a                      ; 0055502c
        ;   XREF to: 0055504a (CONDITIONAL_JUMP)  ; LAB_0055504a
    MOV ESI,dword ptr [ESP + EAX*0x1 + 0x88] ; 0055502e
    CMP ESI,0x8000                      ; 00555035
    JLE 0x0055504a                      ; 0055503b
        ;   XREF to: 0055504a (CONDITIONAL_JUMP)  ; LAB_0055504a
    LEA EDI,[ESI + 0xffff0000]          ; 0055503d
    MOV dword ptr [ESP + EAX*0x1 + 0x88],EDI ; 00555043
    ADD EAX,0x4                         ; 0055504a
        ;   Label: LAB_0055504a
    CMP EAX,ECX                         ; 0055504d
    JL 0x00554fc6                       ; 0055504f
        ;   XREF to: 00554fc6 (CONDITIONAL_JUMP)  ; LAB_00554fc6
    MOV EBX,dword ptr [ESP + 0x4]       ; 00555055
        ;   Label: LAB_00555055
    XOR ECX,ECX                         ; 00555059
    TEST EBX,EBX                        ; 0055505b
    JLE 0x0055508b                      ; 0055505d
        ;   XREF to: 0055508b (CONDITIONAL_JUMP)  ; LAB_0055508b
    XOR EAX,EAX                         ; 0055505f
    XOR EDX,EDX                         ; 00555061
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x48] ; 00555063
        ;   Label: LAB_00555063
    SHL EBX,0x8                         ; 00555067
    MOV dword ptr [ESP + EDX*0x1 + 0x1c],EBX ; 0055506a
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x88] ; 0055506e
    ADD EDX,0xc                         ; 00555075
    SHL EBX,0x8                         ; 00555078
    MOV dword ptr [ESP + EDX*0x1 + 0x14],EBX ; 0055507b
    INC ECX                             ; 0055507f
    MOV EBX,dword ptr [ESP + 0x4]       ; 00555080
    ADD EAX,0x4                         ; 00555084
    CMP ECX,EBX                         ; 00555087
    JL 0x00555063                       ; 00555089
        ;   XREF to: 00555063 (CONDITIONAL_JUMP)  ; LAB_00555063
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055508b
        ;   Label: LAB_0055508b
    CMP dword ptr [EAX + 0x15ae98],0x0  ; 0055508e
    JZ 0x005550a9                       ; 00555095
        ;   XREF to: 005550a9 (CONDITIONAL_JUMP)  ; LAB_005550a9
    XOR EDI,EDI                         ; 00555097
    MOV dword ptr [ESP + 0x10],EDI      ; 00555099
    MOV dword ptr [ESP + 0xc],EDI       ; 0055509d
    MOV dword ptr [ESP + 0x8],EDI       ; 005550a1
    MOV dword ptr [ESP + 0x14],EDI      ; 005550a5
    CMP dword ptr [EBP + 0x20],0xfde8   ; 005550a9
        ;   Label: LAB_005550a9
    JLE 0x00555161                      ; 005550b0
        ;   XREF to: 00555161 (CONDITIONAL_JUMP)  ; LAB_00555161
    MOV EAX,ESP                         ; 005550b6
    PUSH EAX                            ; 005550b8
    MOV EDI,dword ptr [0x00612560]      ; 005550b9 | DAT_00612560
    PUSH EDI                            ; 005550bf | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_00482540 ; 005550c0
        ;   XREF to: 00482540 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_00482540(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 005550c5
        ;   Label: LAB_005550c5
    MOV EBX,dword ptr [EBP + 0x18]      ; 005550c8
    MOV ESI,dword ptr [ESP + 0xf8]      ; 005550cb
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005550d2
    ADD EBX,0x12                        ; 005550d5
    INC ESI                             ; 005550d8
    MOV dword ptr [EBP + 0x18],EBX      ; 005550d9
    MOV dword ptr [ESP + 0xf8],ESI      ; 005550dc
    CMP ESI,EDI                         ; 005550e3
    JL 0x00554d9b                       ; 005550e5
        ;   XREF to: 00554d9b (CONDITIONAL_JUMP)  ; LAB_00554d9b
    MOV ESP,EBP                         ; 005550eb
        ;   Label: LAB_005550eb
    POP EBP                             ; 005550ed
    POP EDI                             ; 005550ee
    POP ESI                             ; 005550ef
    POP EBX                             ; 005550f0
    RET                                 ; 005550f1
    MOV EAX,0xffff                      ; 005550f2
        ;   Label: LAB_005550f2
    MOV EBX,dword ptr [0x01c51cac]      ; 005550f7 | DAT_01c51cac
    MOV EDX,dword ptr [EBP + 0x20]      ; 005550fd
    SUB EAX,EBX                         ; 00555100
    IMUL EDX                            ; 00555102
    SHRD EAX,EDX,0x10                   ; 00555104
    PUSH EAX                            ; 00555108
    MOV ESI,dword ptr [0x00612560]      ; 00555109 | DAT_00612560
    PUSH ESI                            ; 0055510f | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 00555110
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00555115
    PUSH 0x0                            ; 00555118
    MOV EDI,dword ptr [0x00612560]      ; 0055511a | DAT_00612560
    PUSH EDI                            ; 00555120 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 00555121
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00555126
    JMP 0x00554d72                      ; 00555129
        ;   XREF to: 00554d72 (UNCONDITIONAL_JUMP)  ; LAB_00554d72
    MOV EAX,ESP                         ; 0055512e
        ;   Label: LAB_0055512e
    PUSH EAX                            ; 00555130
    PUSH 0x2036428                      ; 00555131
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_004fc9c0 ; 00555136
        ;   XREF to: 004fc9c0 (UNCONDITIONAL_CALL)  ; undefined engine_keyframe.c_calculateSurfaceNormal_FUN_004fc9c0()
    ADD ESP,0x8                         ; 0055513b
    JMP 0x00554e34                      ; 0055513e
        ;   XREF to: 00554e34 (UNCONDITIONAL_JUMP)  ; LAB_00554e34
    LEA EBX,[ESP + 0xec]                ; 00555143
        ;   Label: LAB_00555143
    MOV EAX,EDX                         ; 0055514a
    FLD float ptr [EAX]                 ; 0055514c | DAT_02070da8
    FISTP dword ptr [EBX]               ; 0055514e
    FLD float ptr [EAX + 0x4]           ; 00555150 | DAT_02070dac
    FISTP dword ptr [EBX + 0x4]         ; 00555153
    FLD float ptr [EAX + 0x8]           ; 00555156 | DAT_02070db0
    FISTP dword ptr [EBX + 0x8]         ; 00555159
    JMP 0x00554f4a                      ; 0055515c
        ;   XREF to: 00554f4a (UNCONDITIONAL_JUMP)  ; LAB_00554f4a
    MOV EAX,ESP                         ; 00555161
        ;   Label: LAB_00555161
    PUSH EAX                            ; 00555163
    MOV ESI,dword ptr [0x00612560]      ; 00555164 | DAT_00612560
    PUSH ESI                            ; 0055516a | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_00482cd0 ; 0055516b
        ;   XREF to: 00482cd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_00482cd0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    JMP 0x005550c5                      ; 00555170
        ;   XREF to: 005550c5 (UNCONDITIONAL_JUMP)  ; LAB_005550c5

