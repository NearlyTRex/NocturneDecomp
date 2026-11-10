; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorReflection_FUN_005188e0(CMirrorReflection *this_ptr,CVector3f *camera_position,CVector3f *camera_rotation,float projection_scale)
;
; Parameters:
; CMirrorReflection * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   camera_position
; CVector3f *      Stack[0xc]:4   camera_rotation
; float            Stack[0x10]:4   projection_scale
; Local Variables:
; undefined8       Stack[-0x5b0]:8  local_5b0
; undefined8       Stack[-0x5a8]:8  local_5a8
; undefined8       Stack[-0x5a0]:8  local_5a0
; undefined4       Stack[-0x598]:4  local_598
; undefined4       Stack[-0x594]:4  local_594
; undefined4       Stack[-0x590]:4  local_590
; undefined        Stack[-0x58c]:1  local_58c
; undefined        Stack[-0x55c]:1  local_55c
; undefined        Stack[-0x52c]:1  local_52c
; undefined4       Stack[-0x520]:4  local_520
; undefined4       Stack[-0x510]:4  local_510
; undefined4       Stack[-0x500]:4  local_500
; undefined        Stack[-0x4fc]:1  local_4fc
; undefined4       Stack[-0x4d4]:4  local_4d4
; undefined        Stack[-0x4cc]:1  local_4cc
; undefined        Stack[-0x49c]:1  local_49c
; undefined        Stack[-0x46c]:1  local_46c
; undefined        Stack[-0x43c]:1  local_43c
; undefined4       Stack[-0x40c]:4  local_40c
; undefined4       Stack[-0x408]:4  local_408
; undefined4       Stack[-0x404]:4  local_404
; undefined4       Stack[-0x400]:4  local_400
; undefined4       Stack[-0x3fc]:4  local_3fc
; undefined4       Stack[-0x3f8]:4  local_3f8
; undefined4       Stack[-0x3f4]:4  local_3f4
; undefined4       Stack[-0x3f0]:4  local_3f0
; undefined4       Stack[-0x3ec]:4  local_3ec
; undefined4       Stack[-0x3e8]:4  local_3e8
; undefined4       Stack[-0x3e4]:4  local_3e4
; undefined4       Stack[-0x3e0]:4  local_3e0
; undefined        Stack[-0x3dc]:1  local_3dc
; undefined        Stack[-0x3ac]:1  local_3ac
; undefined        Stack[-0x37c]:1  local_37c
; undefined        Stack[-0x34c]:1  local_34c
; undefined        Stack[-0x31c]:1  local_31c
; undefined        Stack[-0x2ec]:1  local_2ec
; undefined        Stack[-0x2bc]:1  local_2bc
; undefined4       Stack[-0x28c]:4  local_28c
; undefined4       Stack[-0x288]:4  local_288
; undefined4       Stack[-0x284]:4  local_284
; undefined4       Stack[-0x27c]:4  local_27c
; undefined4       Stack[-0x278]:4  local_278
; undefined4       Stack[-0x274]:4  local_274
; undefined4       Stack[-0x270]:4  local_270
; undefined4       Stack[-0x26c]:4  local_26c
; undefined4       Stack[-0x268]:4  local_268
; undefined4       Stack[-0x264]:4  local_264
; undefined4       Stack[-0x260]:4  local_260
; undefined4       Stack[-0x25c]:4  local_25c
; undefined4       Stack[-0x258]:4  local_258
; undefined4       Stack[-0x254]:4  local_254
; undefined4       Stack[-0x250]:4  local_250
; undefined4       Stack[-0x24c]:4  local_24c
; undefined4       Stack[-0x248]:4  local_248
; undefined4       Stack[-0x244]:4  local_244
; undefined4       Stack[-0x240]:4  local_240
; undefined4       Stack[-0x23c]:4  local_23c
; undefined4       Stack[-0x238]:4  local_238
; undefined4       Stack[-0x234]:4  local_234
; undefined4       Stack[-0x230]:4  local_230
; undefined4       Stack[-0x22c]:4  local_22c
; undefined4       Stack[-0x228]:4  local_228
; undefined4       Stack[-0x224]:4  local_224
; undefined4       Stack[-0x220]:4  local_220
; undefined4       Stack[-0x21c]:4  local_21c
; undefined4       Stack[-0x218]:4  local_218
; undefined4       Stack[-0x214]:4  local_214
; undefined4       Stack[-0x210]:4  local_210
; undefined4       Stack[-0x20c]:4  local_20c
; undefined4       Stack[-0x208]:4  local_208
; undefined4       Stack[-0x204]:4  local_204
; undefined4       Stack[-0x200]:4  local_200
; undefined4       Stack[-0x1fc]:4  local_1fc
; undefined4       Stack[-0x1f8]:4  local_1f8
; undefined4       Stack[-0x1f4]:4  local_1f4
; undefined4       Stack[-0x1f0]:4  local_1f0
; undefined4       Stack[-0x1ec]:4  local_1ec
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1cc]:4  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined        Stack[-0x1bc]:1  local_1bc
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined        Stack[-0x174]:1  local_174
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined        Stack[-0x15c]:1  local_15c
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined        Stack[-0x108]:1  local_108
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined        Stack[-0xf0]:1  local_f0
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0xc0]:1  local_c0
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x90]:1  local_90
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460 at 00555539
;
; Referenced Globals:
;   undefined4 DAT_005e906b
;   undefined4 DAT_01c51d5c
;   undefined4 DAT_01c51d60
;   undefined4 DAT_01c51d64
;   undefined4 DAT_01c51d68
;   undefined4 DAT_01c51d6c
;   undefined4 DAT_01c51d70
;   undefined4 DAT_01c51d74
;   undefined4 DAT_01c51d78
;   undefined4 DAT_01c51d7c
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_005188a0
;   core_mirror.cpp_computePlaneFromTriangle_FUN_005183b0
;   core_xform.cpp_FUN_005b5080
;   core_xform.cpp_inverse_FUN_005b6380
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;   core_xform.cpp_setIdentityMatrix3x4_FUN_005b53f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005188e0
        ;   Label: core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_005188e0
    PUSH ESI                            ; 005188e1
    PUSH EDI                            ; 005188e2
    PUSH EBP                            ; 005188e3
    MOV EBP,ESP                         ; 005188e4
    SUB ESP,0x59c                       ; 005188e6
    AND ESP,0xfffffff8                  ; 005188ec
    MOV EBX,dword ptr [EBP + 0x14]      ; 005188ef
    LEA EAX,[EBX + 0x18]                ; 005188f2
    PUSH EAX                            ; 005188f5
    LEA EAX,[EBX + 0xc]                 ; 005188f6
    PUSH EAX                            ; 005188f9
    PUSH EBX                            ; 005188fa
    LEA EAX,[ESP + 0x330]               ; 005188fb
    PUSH EAX                            ; 00518902
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_005183b0 ; 00518903
        ;   XREF to: 005183b0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneFromTriangle_FUN_005183b0(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
    ADD ESP,0x10                        ; 00518908
    MOV EAX,dword ptr [ESP + 0x324]     ; 0051890b
    FLD float ptr [ESP + 0x324]         ; 00518912
    MOV dword ptr [ESP + 0x20],EAX      ; 00518919
    MOV EAX,dword ptr [ESP + 0x328]     ; 0051891d
    FSTP double ptr [ESP]               ; 00518924
    MOV dword ptr [ESP + 0x1c],EAX      ; 00518927
    MOV EAX,dword ptr [ESP + 0x32c]     ; 0051892b
    FLD double ptr [ESP]                ; 00518932
    MOV dword ptr [ESP + 0x18],EAX      ; 00518935
    FABS                                ; 00518939
    FLD float ptr [ESP + 0x328]         ; 0051893b
    FABS                                ; 00518942
    FXCH                                ; 00518944
    FSTP double ptr [ESP + 0x10]        ; 00518946
    FCOMP double ptr [ESP + 0x10]       ; 0051894a
    FNSTSW AX                           ; 0051894e
    SAHF                                ; 00518950
    JNC 0x00519874                      ; 00518951
        ;   XREF to: 00519874 (CONDITIONAL_JUMP)  ; LAB_00519874
    FLD float ptr [ESP + 0x32c]         ; 00518957
    FABS                                ; 0051895e
    FCOMP double ptr [ESP + 0x10]       ; 00518960
    FNSTSW AX                           ; 00518964
    SAHF                                ; 00518966
    JNC 0x00519874                      ; 00518967
        ;   XREF to: 00519874 (CONDITIONAL_JUMP)  ; LAB_00519874
    MOV ESI,0x3f800000                  ; 0051896d
    XOR ECX,ECX                         ; 00518972
    MOV dword ptr [ESP + 0x404],ESI     ; 00518974
    MOV dword ptr [ESP + 0x408],ECX     ; 0051897b
    MOV dword ptr [ESP + 0x400],ECX     ; 00518982
    FLD float ptr [ESP + 0x404]         ; 00518989
        ;   Label: LAB_00518989
    FMUL float ptr [ESP + 0x18]         ; 00518990
    FLD float ptr [ESP + 0x408]         ; 00518994
    FMUL float ptr [ESP + 0x20]         ; 0051899b
    FLD float ptr [ESP + 0x400]         ; 0051899f
    FMUL float ptr [ESP + 0x1c]         ; 005189a6
    FLD float ptr [ESP + 0x408]         ; 005189aa
    FMUL float ptr [ESP + 0x1c]         ; 005189b1
    FLD float ptr [ESP + 0x400]         ; 005189b5
    FMUL float ptr [ESP + 0x18]         ; 005189bc
    FLD float ptr [ESP + 0x404]         ; 005189c0
    FMUL float ptr [ESP + 0x20]         ; 005189c7
    MOV EAX,dword ptr [ESP + 0x20]      ; 005189cb
    LEA EDI,[ESP + 0x3b8]               ; 005189cf
    LEA ESI,[ESP + 0x3c4]               ; 005189d6
    MOV dword ptr [ESP + 0x46c],EAX     ; 005189dd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005189e4
    LEA EDX,[ESP + 0x3dc]               ; 005189e8
    MOV dword ptr [ESP + 0x470],EAX     ; 005189ef
    MOV EAX,dword ptr [ESP + 0x18]      ; 005189f6
    FXCH ST2                            ; 005189fa
    FSUBP ST5,ST0                       ; 005189fc
    FSUBP ST3,ST0                       ; 005189fe
    FSUBP                               ; 00518a00
    MOV dword ptr [ESP + 0x474],EAX     ; 00518a02
    FXCH ST2                            ; 00518a09
    FSTP float ptr [ESP + 0x3c4]        ; 00518a0b
    FSTP float ptr [ESP + 0x3c8]        ; 00518a12
    FSTP float ptr [ESP + 0x3cc]        ; 00518a19
    LEA EAX,[ESP + 0x3b8]               ; 00518a20
    MOVSD ES:EDI,ESI                    ; 00518a27
    MOVSD ES:EDI,ESI                    ; 00518a28
    MOVSD ES:EDI,ESI                    ; 00518a29
    CMP EDX,EAX                         ; 00518a2a
    JZ 0x00518a58                       ; 00518a2c
        ;   XREF to: 00518a58 (CONDITIONAL_JUMP)  ; LAB_00518a58
    MOV EAX,dword ptr [ESP + 0x3b8]     ; 00518a2e
    MOV dword ptr [ESP + 0x3dc],EAX     ; 00518a35
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 00518a3c
    MOV dword ptr [ESP + 0x3e0],EAX     ; 00518a43
    MOV EAX,dword ptr [ESP + 0x3c0]     ; 00518a4a
    MOV dword ptr [ESP + 0x3e4],EAX     ; 00518a51
    FLD float ptr [ESP + 0x3e0]         ; 00518a58
        ;   Label: LAB_00518a58
    FMUL ST0                            ; 00518a5f
    FLD float ptr [ESP + 0x3dc]         ; 00518a61
    FMUL ST0                            ; 00518a68
    FADDP                               ; 00518a6a
    FLD float ptr [ESP + 0x3e4]         ; 00518a6c
    FMUL ST0                            ; 00518a73
    FADDP                               ; 00518a75
    FSQRT                               ; 00518a77
    FLDZ                                ; 00518a79
    FXCH                                ; 00518a7b
    FSTP float ptr [ESP + 0x594]        ; 00518a7d
    FCOMP float ptr [ESP + 0x594]       ; 00518a84
    FNSTSW AX                           ; 00518a8b
    SAHF                                ; 00518a8d
    JNC 0x005198de                      ; 00518a8e
        ;   XREF to: 005198de (CONDITIONAL_JUMP)  ; LAB_005198de
    FLD1                                ; 00518a94
    FLD float ptr [ESP + 0x3dc]         ; 00518a96
    FXCH                                ; 00518a9d
    FDIV float ptr [ESP + 0x594]        ; 00518a9f
    FXCH                                ; 00518aa6
    FMUL ST1                            ; 00518aa8
    FLD float ptr [ESP + 0x3e0]         ; 00518aaa
    FMUL ST2                            ; 00518ab1
    FLD float ptr [ESP + 0x3e4]         ; 00518ab3
    FMULP ST3                           ; 00518aba
    FXCH                                ; 00518abc
    FSTP float ptr [ESP + 0x3dc]        ; 00518abe
    FSTP float ptr [ESP + 0x3e0]        ; 00518ac5
    FSTP float ptr [ESP + 0x3e4]        ; 00518acc
    FLD float ptr [ESP + 0x470]         ; 00518ad3
        ;   Label: LAB_00518ad3
    FMUL float ptr [ESP + 0x3e4]        ; 00518ada
    FLD float ptr [ESP + 0x474]         ; 00518ae1
    FMUL float ptr [ESP + 0x3dc]        ; 00518ae8
    FLD float ptr [ESP + 0x46c]         ; 00518aef
    FMUL float ptr [ESP + 0x3e0]        ; 00518af6
    FLD float ptr [ESP + 0x474]         ; 00518afd
    FMUL float ptr [ESP + 0x3e0]        ; 00518b04
    FLD float ptr [ESP + 0x46c]         ; 00518b0b
    FMUL float ptr [ESP + 0x3e4]        ; 00518b12
    FLD float ptr [ESP + 0x470]         ; 00518b19
    FMUL float ptr [ESP + 0x3dc]        ; 00518b20
    LEA EDI,[ESP + 0x3ac]               ; 00518b27
    LEA ESI,[ESP + 0x478]               ; 00518b2e
    LEA EAX,[ESP + 0x3ac]               ; 00518b35
    LEA EDX,[ESP + 0x400]               ; 00518b3c
    FXCH ST2                            ; 00518b43
    FSUBP ST5,ST0                       ; 00518b45
    FSUBP ST3,ST0                       ; 00518b47
    FSUBP                               ; 00518b49
    FXCH                                ; 00518b4b
    FSTP float ptr [ESP + 0x47c]        ; 00518b4d
    FSTP float ptr [ESP + 0x480]        ; 00518b54
    FSTP float ptr [ESP + 0x478]        ; 00518b5b
    MOVSD ES:EDI,ESI                    ; 00518b62
    MOVSD ES:EDI,ESI                    ; 00518b63
    MOVSD ES:EDI,ESI                    ; 00518b64
    CMP EDX,EAX                         ; 00518b65
    JZ 0x00518b93                       ; 00518b67
        ;   XREF to: 00518b93 (CONDITIONAL_JUMP)  ; LAB_00518b93
    MOV EAX,dword ptr [ESP + 0x3ac]     ; 00518b69
    MOV dword ptr [ESP + 0x400],EAX     ; 00518b70
    MOV EAX,dword ptr [ESP + 0x3b0]     ; 00518b77
    MOV dword ptr [ESP + 0x404],EAX     ; 00518b7e
    MOV EAX,dword ptr [ESP + 0x3b4]     ; 00518b85
    MOV dword ptr [ESP + 0x408],EAX     ; 00518b8c
    FLD float ptr [ESP + 0x404]         ; 00518b93
        ;   Label: LAB_00518b93
    FMUL ST0                            ; 00518b9a
    FLD float ptr [ESP + 0x400]         ; 00518b9c
    FMUL ST0                            ; 00518ba3
    FADDP                               ; 00518ba5
    FLD float ptr [ESP + 0x408]         ; 00518ba7
    FMUL ST0                            ; 00518bae
    FADDP                               ; 00518bb0
    FSQRT                               ; 00518bb2
    FLDZ                                ; 00518bb4
    FXCH                                ; 00518bb6
    FSTP float ptr [ESP + 0x598]        ; 00518bb8
    FCOMP float ptr [ESP + 0x598]       ; 00518bbf
    FNSTSW AX                           ; 00518bc6
    SAHF                                ; 00518bc8
    JNC 0x005198fa                      ; 00518bc9
        ;   XREF to: 005198fa (CONDITIONAL_JUMP)  ; LAB_005198fa
    FLD1                                ; 00518bcf
    FLD float ptr [ESP + 0x400]         ; 00518bd1
    FXCH                                ; 00518bd8
    FDIV float ptr [ESP + 0x598]        ; 00518bda
    FXCH                                ; 00518be1
    FMUL ST1                            ; 00518be3
    FLD float ptr [ESP + 0x404]         ; 00518be5
    FMUL ST2                            ; 00518bec
    FLD float ptr [ESP + 0x408]         ; 00518bee
    FMULP ST3                           ; 00518bf5
    FXCH                                ; 00518bf7
    FSTP float ptr [ESP + 0x400]        ; 00518bf9
    FSTP float ptr [ESP + 0x404]        ; 00518c00
    FSTP float ptr [ESP + 0x408]        ; 00518c07
    LEA EAX,[ESP + 0x84]                ; 00518c0e
        ;   Label: LAB_00518c0e
    PUSH EAX                            ; 00518c15
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005b53f0 ; 00518c16
        ;   XREF to: 005b53f0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_005b53f0()
    FLD float ptr [EBX]                 ; 00518c1b
    ADD ESP,0x4                         ; 00518c1d
    FCHS                                ; 00518c20
    FSTP float ptr [ESP + 0x90]         ; 00518c22
    MOV EAX,dword ptr [ESP + 0x3dc]     ; 00518c29
    FLD float ptr [EBX + 0x4]           ; 00518c30
    FCHS                                ; 00518c33
    FSTP float ptr [ESP + 0xa0]         ; 00518c35
    FLD float ptr [EBX + 0x8]           ; 00518c3c
    MOV dword ptr [ESP + 0x1a4],EAX     ; 00518c3f
    MOV EAX,dword ptr [ESP + 0x3e0]     ; 00518c46
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00518c4d
    MOV EAX,dword ptr [ESP + 0x3e4]     ; 00518c54
    MOV dword ptr [ESP + 0x1ac],EAX     ; 00518c5b
    MOV EAX,dword ptr [ESP + 0x400]     ; 00518c62
    MOV dword ptr [ESP + 0x1b4],EAX     ; 00518c69
    MOV EAX,dword ptr [ESP + 0x404]     ; 00518c70
    MOV dword ptr [ESP + 0x1b8],EAX     ; 00518c77
    MOV EAX,dword ptr [ESP + 0x408]     ; 00518c7e
    MOV dword ptr [ESP + 0x1bc],EAX     ; 00518c85
    MOV EAX,dword ptr [ESP + 0x46c]     ; 00518c8c
    XOR EDX,EDX                         ; 00518c93
    MOV dword ptr [ESP + 0x1c4],EAX     ; 00518c95
    MOV EAX,dword ptr [ESP + 0x470]     ; 00518c9c
    FCHS                                ; 00518ca3
    MOV dword ptr [ESP + 0x1c8],EAX     ; 00518ca5
    MOV EAX,dword ptr [ESP + 0x474]     ; 00518cac
    FSTP float ptr [ESP + 0xb0]         ; 00518cb3
    MOV dword ptr [ESP + 0x1cc],EAX     ; 00518cba
    LEA EAX,[ESP + 0xb4]                ; 00518cc1
    MOV dword ptr [ESP + 0x1b0],EDX     ; 00518cc8
    PUSH EAX                            ; 00518ccf
    MOV dword ptr [ESP + 0x1c4],EDX     ; 00518cd0
    MOV dword ptr [ESP + 0x1d4],EDX     ; 00518cd7
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005b53f0 ; 00518cde
        ;   XREF to: 005b53f0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_005b53f0()
    ADD ESP,0x4                         ; 00518ce3
    LEA EAX,[ESP + 0x84]                ; 00518ce6
    MOV EDI,0xbf800000                  ; 00518ced
    PUSH EAX                            ; 00518cf2
    LEA ESI,[ESP + 0x1d8]               ; 00518cf3
    MOV dword ptr [ESP + 0xe0],EDI      ; 00518cfa
    CALL core_xform.cpp_inverse_FUN_005b6380 ; 00518d01
        ;   XREF to: 005b6380 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_inverse_FUN_005b6380()
    MOV ECX,0xc                         ; 00518d06
    LEA EDI,[ESP + 0x58]                ; 00518d0b
    ADD ESP,0x4                         ; 00518d0f
    LEA EAX,[ESP + 0x54]                ; 00518d12
    LEA ESI,[ESP + 0x1d4]               ; 00518d16
    PUSH EAX                            ; 00518d1d
    LEA EAX,[ESP + 0x1a8]               ; 00518d1e
    MOVSD.REP ES:EDI,ESI                ; 00518d25
    PUSH EAX                            ; 00518d27
    LEA ESI,[ESP + 0x26c]               ; 00518d28
    CALL core_xform.cpp_inverse_FUN_005b6380 ; 00518d2f
        ;   XREF to: 005b6380 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_inverse_FUN_005b6380()
    ADD ESP,0x4                         ; 00518d34
    LEA EAX,[ESP + 0xe8]                ; 00518d37
    LEA EDI,[ESP + 0xe8]                ; 00518d3e
    PUSH EAX                            ; 00518d45
    LEA EAX,[ESP + 0xbc]                ; 00518d46
    MOV ECX,0xc                         ; 00518d4d
    PUSH EAX                            ; 00518d52
    LEA EAX,[ESP + 0x1b0]               ; 00518d53
    LEA ESI,[ESP + 0x270]               ; 00518d5a
    PUSH EAX                            ; 00518d61
    LEA EAX,[ESP + 0x94]                ; 00518d62
    MOVSD.REP ES:EDI,ESI                ; 00518d69
    PUSH EAX                            ; 00518d6b
    LEA ESI,[ESP + 0x158]               ; 00518d6c
    LEA EDI,[ESP + 0x38]                ; 00518d73
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00518d77
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 00518d7c
    LEA ESI,[ESP + 0x158]               ; 00518d81
    ADD ESP,0x8                         ; 00518d88
    LEA EAX,[ESP + 0x30]                ; 00518d8b
    MOVSD.REP ES:EDI,ESI                ; 00518d8f
    PUSH EAX                            ; 00518d91
    LEA ESI,[ESP + 0x124]               ; 00518d92
    LEA EDI,[ESP + 0x214]               ; 00518d99
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00518da0
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 00518da5
    LEA ESI,[ESP + 0x124]               ; 00518daa
    ADD ESP,0x8                         ; 00518db1
    LEA EAX,[ESP + 0x20c]               ; 00518db4
    MOVSD.REP ES:EDI,ESI                ; 00518dbb
    PUSH EAX                            ; 00518dbd
    LEA ESI,[ESP + 0x240]               ; 00518dbe
    LEA EDI,[ESP + 0x300]               ; 00518dc5
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00518dcc
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 00518dd1
    LEA ESI,[ESP + 0x240]               ; 00518dd6
    ADD ESP,0x8                         ; 00518ddd
    LEA EAX,[ESP + 0x2f8]               ; 00518de0
    MOVSD.REP ES:EDI,ESI                ; 00518de7
    PUSH EAX                            ; 00518de9
    LEA ESI,[ESP + 0x2cc]               ; 00518dea
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00518df1
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 00518df6
    LEA ESI,[ESP + 0x2cc]               ; 00518dfb
    ADD ESP,0x8                         ; 00518e02
    LEA EAX,[EBX + 0x30]                ; 00518e05
    LEA EDI,[EBX + 0x30]                ; 00518e08
    PUSH EAX                            ; 00518e0b
    MOV EAX,dword ptr [EBP + 0x18]      ; 00518e0c
    MOVSD.REP ES:EDI,ESI                ; 00518e0f
    PUSH EAX                            ; 00518e11
    LEA ESI,[ESP + 0x45c]               ; 00518e12
    LEA EDI,[ESP + 0x450]               ; 00518e19
    CALL core_xform.cpp_FUN_005b5080    ; 00518e20
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x45c]               ; 00518e25
    LEA EAX,[ESP + 0x450]               ; 00518e2c
    ADD ESP,0x8                         ; 00518e33
    LEA EDX,[EBX + 0x60]                ; 00518e36
    MOVSD ES:EDI,ESI                    ; 00518e39
    MOVSD ES:EDI,ESI                    ; 00518e3a
    MOVSD ES:EDI,ESI                    ; 00518e3b
    CMP EDX,EAX                         ; 00518e3c
    JZ 0x00518e5d                       ; 00518e3e
        ;   XREF to: 00518e5d (CONDITIONAL_JUMP)  ; LAB_00518e5d
    MOV EAX,dword ptr [ESP + 0x448]     ; 00518e40
    MOV dword ptr [EDX],EAX             ; 00518e47
    MOV EAX,dword ptr [ESP + 0x44c]     ; 00518e49
    MOV dword ptr [EDX + 0x4],EAX       ; 00518e50
    MOV EAX,dword ptr [ESP + 0x450]     ; 00518e53
    MOV dword ptr [EDX + 0x8],EAX       ; 00518e5a
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00518e5d
        ;   Label: LAB_00518e5d
    PUSH EDX                            ; 00518e60
    LEA EAX,[EBX + 0x70]                ; 00518e61
    PUSH EAX                            ; 00518e64
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 00518e65
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00518e6a
    MOV EAX,dword ptr [EBX + 0x74]      ; 00518e6d
    MOV dword ptr [ESP + 0x56c],EAX     ; 00518e70
    MOV EAX,dword ptr [EBX + 0x80]      ; 00518e77
    MOV dword ptr [ESP + 0x570],EAX     ; 00518e7d
    MOV EAX,dword ptr [EBX + 0x8c]      ; 00518e84
    MOV dword ptr [ESP + 0x590],EAX     ; 00518e8a
    MOV EAX,dword ptr [ESP + 0x56c]     ; 00518e91
    MOV dword ptr [ESP + 0x3e8],EAX     ; 00518e98
    MOV EAX,dword ptr [ESP + 0x570]     ; 00518e9f
    MOV dword ptr [ESP + 0x3ec],EAX     ; 00518ea6
    MOV EAX,dword ptr [ESP + 0x590]     ; 00518ead
    MOV dword ptr [ESP + 0x3f0],EAX     ; 00518eb4
    MOV EAX,dword ptr [EBX + 0x70]      ; 00518ebb
    MOV dword ptr [ESP + 0x574],EAX     ; 00518ebe
    MOV EAX,dword ptr [EBX + 0x7c]      ; 00518ec5
    MOV dword ptr [ESP + 0x578],EAX     ; 00518ec8
    MOV EAX,dword ptr [EBX + 0x88]      ; 00518ecf
    MOV dword ptr [ESP + 0x57c],EAX     ; 00518ed5
    MOV EAX,dword ptr [ESP + 0x574]     ; 00518edc
    MOV dword ptr [ESP + 0x4b4],EAX     ; 00518ee3
    MOV EAX,dword ptr [ESP + 0x578]     ; 00518eea
    MOV dword ptr [ESP + 0x4b8],EAX     ; 00518ef1
    MOV EAX,dword ptr [ESP + 0x57c]     ; 00518ef8
    MOV dword ptr [ESP + 0x4bc],EAX     ; 00518eff
    MOV EAX,dword ptr [EBX + 0x78]      ; 00518f06
    MOV dword ptr [ESP + 0x580],EAX     ; 00518f09
    MOV EAX,dword ptr [EBX + 0x84]      ; 00518f10
    LEA EDI,[ESP + 0x388]               ; 00518f16
    MOV dword ptr [ESP + 0x584],EAX     ; 00518f1d
    MOV EAX,dword ptr [EBX + 0x90]      ; 00518f24
    LEA ESI,[ESP + 0x424]               ; 00518f2a
    MOV dword ptr [ESP + 0x588],EAX     ; 00518f31
    MOV EAX,dword ptr [ESP + 0x580]     ; 00518f38
    LEA EDX,[ESP + 0x3e8]               ; 00518f3f
    MOV dword ptr [ESP + 0x4cc],EAX     ; 00518f46
    MOV EAX,dword ptr [ESP + 0x584]     ; 00518f4d
    FLD float ptr [ESP + 0x56c]         ; 00518f54
    MOV dword ptr [ESP + 0x4d0],EAX     ; 00518f5b
    MOV EAX,dword ptr [ESP + 0x588]     ; 00518f62
    FLD float ptr [ESP + 0x570]         ; 00518f69
    MOV dword ptr [ESP + 0x4d4],EAX     ; 00518f70
    MOV EAX,dword ptr [EBP + 0x18]      ; 00518f77
    FLD float ptr [ESP + 0x590]         ; 00518f7a
    FXCH ST2                            ; 00518f81
    FADD float ptr [EAX]                ; 00518f83
    FXCH                                ; 00518f85
    FADD float ptr [EAX + 0x4]          ; 00518f87
    FXCH ST2                            ; 00518f8a
    FADD float ptr [EAX + 0x8]          ; 00518f8c
    FXCH                                ; 00518f8f
    FSTP float ptr [ESP + 0x424]        ; 00518f91
    FXCH                                ; 00518f98
    FSTP float ptr [ESP + 0x428]        ; 00518f9a
    FSTP float ptr [ESP + 0x42c]        ; 00518fa1
    LEA EAX,[ESP + 0x388]               ; 00518fa8
    MOVSD ES:EDI,ESI                    ; 00518faf
    MOVSD ES:EDI,ESI                    ; 00518fb0
    MOVSD ES:EDI,ESI                    ; 00518fb1
    CMP EDX,EAX                         ; 00518fb2
    JZ 0x00518fe0                       ; 00518fb4
        ;   XREF to: 00518fe0 (CONDITIONAL_JUMP)  ; LAB_00518fe0
    MOV EAX,dword ptr [ESP + 0x388]     ; 00518fb6
    MOV dword ptr [ESP + 0x3e8],EAX     ; 00518fbd
    MOV EAX,dword ptr [ESP + 0x38c]     ; 00518fc4
    MOV dword ptr [ESP + 0x3ec],EAX     ; 00518fcb
    MOV EAX,dword ptr [ESP + 0x390]     ; 00518fd2
    MOV dword ptr [ESP + 0x3f0],EAX     ; 00518fd9
    FLD float ptr [ESP + 0x4b4]         ; 00518fe0
        ;   Label: LAB_00518fe0
    FLD float ptr [ESP + 0x4b8]         ; 00518fe7
    FLD float ptr [ESP + 0x4bc]         ; 00518fee
    MOV EAX,dword ptr [EBP + 0x18]      ; 00518ff5
    LEA EDI,[ESP + 0x508]               ; 00518ff8
    LEA ESI,[ESP + 0x49c]               ; 00518fff
    LEA EDX,[ESP + 0x4b4]               ; 00519006
    FXCH ST2                            ; 0051900d
    FADD float ptr [EAX]                ; 0051900f
    FXCH                                ; 00519011
    FADD float ptr [EAX + 0x4]          ; 00519013
    FXCH ST2                            ; 00519016
    FADD float ptr [EAX + 0x8]          ; 00519018
    FXCH ST2                            ; 0051901b
    FSTP float ptr [ESP + 0x4a0]        ; 0051901d
    FXCH                                ; 00519024
    FSTP float ptr [ESP + 0x4a4]        ; 00519026
    FSTP float ptr [ESP + 0x49c]        ; 0051902d
    LEA EAX,[ESP + 0x508]               ; 00519034
    MOVSD ES:EDI,ESI                    ; 0051903b
    MOVSD ES:EDI,ESI                    ; 0051903c
    MOVSD ES:EDI,ESI                    ; 0051903d
    CMP EDX,EAX                         ; 0051903e
    JZ 0x0051906c                       ; 00519040
        ;   XREF to: 0051906c (CONDITIONAL_JUMP)  ; LAB_0051906c
    MOV EAX,dword ptr [ESP + 0x508]     ; 00519042
    MOV dword ptr [ESP + 0x4b4],EAX     ; 00519049
    MOV EAX,dword ptr [ESP + 0x50c]     ; 00519050
    MOV dword ptr [ESP + 0x4b8],EAX     ; 00519057
    MOV EAX,dword ptr [ESP + 0x510]     ; 0051905e
    MOV dword ptr [ESP + 0x4bc],EAX     ; 00519065
    FLD float ptr [ESP + 0x4cc]         ; 0051906c
        ;   Label: LAB_0051906c
    FLD float ptr [ESP + 0x4d0]         ; 00519073
    FLD float ptr [ESP + 0x4d4]         ; 0051907a
    MOV EAX,dword ptr [EBP + 0x18]      ; 00519081
    LEA EDI,[ESP + 0x3d0]               ; 00519084
    LEA ESI,[ESP + 0x370]               ; 0051908b
    LEA EDX,[ESP + 0x4cc]               ; 00519092
    FXCH ST2                            ; 00519099
    FADD float ptr [EAX]                ; 0051909b
    FXCH                                ; 0051909d
    FADD float ptr [EAX + 0x4]          ; 0051909f
    FXCH ST2                            ; 005190a2
    FADD float ptr [EAX + 0x8]          ; 005190a4
    FXCH ST2                            ; 005190a7
    FSTP float ptr [ESP + 0x374]        ; 005190a9
    FXCH                                ; 005190b0
    FSTP float ptr [ESP + 0x378]        ; 005190b2
    FSTP float ptr [ESP + 0x370]        ; 005190b9
    LEA EAX,[ESP + 0x3d0]               ; 005190c0
    MOVSD ES:EDI,ESI                    ; 005190c7
    MOVSD ES:EDI,ESI                    ; 005190c8
    MOVSD ES:EDI,ESI                    ; 005190c9
    CMP EDX,EAX                         ; 005190ca
    JZ 0x005190f8                       ; 005190cc
        ;   XREF to: 005190f8 (CONDITIONAL_JUMP)  ; LAB_005190f8
    MOV EAX,dword ptr [ESP + 0x3d0]     ; 005190ce
    MOV dword ptr [ESP + 0x4cc],EAX     ; 005190d5
    MOV EAX,dword ptr [ESP + 0x3d4]     ; 005190dc
    MOV dword ptr [ESP + 0x4d0],EAX     ; 005190e3
    MOV EAX,dword ptr [ESP + 0x3d8]     ; 005190ea
    MOV dword ptr [ESP + 0x4d4],EAX     ; 005190f1
    LEA EAX,[EBX + 0x30]                ; 005190f8
        ;   Label: LAB_005190f8
    PUSH EAX                            ; 005190fb
    LEA EAX,[ESP + 0x3ec]               ; 005190fc
    PUSH EAX                            ; 00519103
    LEA ESI,[ESP + 0x4ec]               ; 00519104
    LEA EDI,[ESP + 0x420]               ; 0051910b
    CALL core_xform.cpp_FUN_005b5080    ; 00519112
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x4ec]               ; 00519117
    LEA EDX,[ESP + 0x420]               ; 0051911e
    ADD ESP,0x8                         ; 00519125
    LEA EAX,[ESP + 0x3e8]               ; 00519128
    MOVSD ES:EDI,ESI                    ; 0051912f
    MOVSD ES:EDI,ESI                    ; 00519130
    MOVSD ES:EDI,ESI                    ; 00519131
    CMP EAX,EDX                         ; 00519132
    JZ 0x00519160                       ; 00519134
        ;   XREF to: 00519160 (CONDITIONAL_JUMP)  ; LAB_00519160
    MOV EAX,dword ptr [ESP + 0x418]     ; 00519136
    MOV dword ptr [ESP + 0x3e8],EAX     ; 0051913d
    MOV EAX,dword ptr [ESP + 0x41c]     ; 00519144
    MOV dword ptr [ESP + 0x3ec],EAX     ; 0051914b
    MOV EAX,dword ptr [ESP + 0x420]     ; 00519152
    MOV dword ptr [ESP + 0x3f0],EAX     ; 00519159
    LEA EAX,[EBX + 0x30]                ; 00519160
        ;   Label: LAB_00519160
    PUSH EAX                            ; 00519163
    LEA EAX,[ESP + 0x4b8]               ; 00519164
    PUSH EAX                            ; 0051916b
    LEA ESI,[ESP + 0x498]               ; 0051916c
    LEA EDI,[ESP + 0x360]               ; 00519173
    CALL core_xform.cpp_FUN_005b5080    ; 0051917a
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x498]               ; 0051917f
    LEA EDX,[ESP + 0x360]               ; 00519186
    ADD ESP,0x8                         ; 0051918d
    LEA EAX,[ESP + 0x4b4]               ; 00519190
    MOVSD ES:EDI,ESI                    ; 00519197
    MOVSD ES:EDI,ESI                    ; 00519198
    MOVSD ES:EDI,ESI                    ; 00519199
    CMP EAX,EDX                         ; 0051919a
    JZ 0x005191c8                       ; 0051919c
        ;   XREF to: 005191c8 (CONDITIONAL_JUMP)  ; LAB_005191c8
    MOV EAX,dword ptr [ESP + 0x358]     ; 0051919e
    MOV dword ptr [ESP + 0x4b4],EAX     ; 005191a5
    MOV EAX,dword ptr [ESP + 0x35c]     ; 005191ac
    MOV dword ptr [ESP + 0x4b8],EAX     ; 005191b3
    MOV EAX,dword ptr [ESP + 0x360]     ; 005191ba
    MOV dword ptr [ESP + 0x4bc],EAX     ; 005191c1
    LEA EAX,[EBX + 0x30]                ; 005191c8
        ;   Label: LAB_005191c8
    PUSH EAX                            ; 005191cb
    LEA EAX,[ESP + 0x4d0]               ; 005191cc
    PUSH EAX                            ; 005191d3
    LEA ESI,[ESP + 0x4b0]               ; 005191d4
    LEA EDI,[ESP + 0x48c]               ; 005191db
    CALL core_xform.cpp_FUN_005b5080    ; 005191e2
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x4b0]               ; 005191e7
    LEA EDX,[ESP + 0x48c]               ; 005191ee
    ADD ESP,0x8                         ; 005191f5
    LEA EAX,[ESP + 0x4cc]               ; 005191f8
    MOVSD ES:EDI,ESI                    ; 005191ff
    MOVSD ES:EDI,ESI                    ; 00519200
    MOVSD ES:EDI,ESI                    ; 00519201
    CMP EAX,EDX                         ; 00519202
    JZ 0x00519230                       ; 00519204
        ;   XREF to: 00519230 (CONDITIONAL_JUMP)  ; LAB_00519230
    MOV EAX,dword ptr [ESP + 0x484]     ; 00519206
    MOV dword ptr [ESP + 0x4cc],EAX     ; 0051920d
    MOV EAX,dword ptr [ESP + 0x488]     ; 00519214
    MOV dword ptr [ESP + 0x4d0],EAX     ; 0051921b
    MOV EAX,dword ptr [ESP + 0x48c]     ; 00519222
    MOV dword ptr [ESP + 0x4d4],EAX     ; 00519229
    FLD float ptr [ESP + 0x3e8]         ; 00519230
        ;   Label: LAB_00519230
    FLD float ptr [ESP + 0x3ec]         ; 00519237
    FLD float ptr [ESP + 0x3f0]         ; 0051923e
    LEA EDI,[ESP + 0x430]               ; 00519245
    LEA EAX,[EBX + 0x60]                ; 0051924c
    LEA ESI,[ESP + 0x3a0]               ; 0051924f
    LEA EDX,[ESP + 0x3e8]               ; 00519256
    FXCH ST2                            ; 0051925d
    FSUB float ptr [EAX]                ; 0051925f
    FXCH                                ; 00519261
    FSUB float ptr [EAX + 0x4]          ; 00519263
    FXCH ST2                            ; 00519266
    FSUB float ptr [EAX + 0x8]          ; 00519268
    FXCH                                ; 0051926b
    FSTP float ptr [ESP + 0x3a0]        ; 0051926d
    FXCH                                ; 00519274
    FSTP float ptr [ESP + 0x3a4]        ; 00519276
    FSTP float ptr [ESP + 0x3a8]        ; 0051927d
    LEA EAX,[ESP + 0x430]               ; 00519284
    MOVSD ES:EDI,ESI                    ; 0051928b
    MOVSD ES:EDI,ESI                    ; 0051928c
    MOVSD ES:EDI,ESI                    ; 0051928d
    CMP EDX,EAX                         ; 0051928e
    JZ 0x005192bc                       ; 00519290
        ;   XREF to: 005192bc (CONDITIONAL_JUMP)  ; LAB_005192bc
    MOV EAX,dword ptr [ESP + 0x430]     ; 00519292
    MOV dword ptr [ESP + 0x3e8],EAX     ; 00519299
    MOV EAX,dword ptr [ESP + 0x434]     ; 005192a0
    MOV dword ptr [ESP + 0x3ec],EAX     ; 005192a7
    MOV EAX,dword ptr [ESP + 0x438]     ; 005192ae
    MOV dword ptr [ESP + 0x3f0],EAX     ; 005192b5
    FLD float ptr [ESP + 0x4b4]         ; 005192bc
        ;   Label: LAB_005192bc
    FLD float ptr [ESP + 0x4b8]         ; 005192c3
    FLD float ptr [ESP + 0x4bc]         ; 005192ca
    LEA EDI,[ESP + 0x550]               ; 005192d1
    LEA EAX,[EBX + 0x60]                ; 005192d8
    LEA ESI,[ESP + 0x460]               ; 005192db
    LEA EDX,[ESP + 0x4b4]               ; 005192e2
    FXCH ST2                            ; 005192e9
    FSUB float ptr [EAX]                ; 005192eb
    FXCH                                ; 005192ed
    FSUB float ptr [EAX + 0x4]          ; 005192ef
    FXCH ST2                            ; 005192f2
    FSUB float ptr [EAX + 0x8]          ; 005192f4
    FXCH                                ; 005192f7
    FSTP float ptr [ESP + 0x460]        ; 005192f9
    FXCH                                ; 00519300
    FSTP float ptr [ESP + 0x464]        ; 00519302
    FSTP float ptr [ESP + 0x468]        ; 00519309
    LEA EAX,[ESP + 0x550]               ; 00519310
    MOVSD ES:EDI,ESI                    ; 00519317
    MOVSD ES:EDI,ESI                    ; 00519318
    MOVSD ES:EDI,ESI                    ; 00519319
    CMP EDX,EAX                         ; 0051931a
    JZ 0x00519348                       ; 0051931c
        ;   XREF to: 00519348 (CONDITIONAL_JUMP)  ; LAB_00519348
    MOV EAX,dword ptr [ESP + 0x550]     ; 0051931e
    MOV dword ptr [ESP + 0x4b4],EAX     ; 00519325
    MOV EAX,dword ptr [ESP + 0x554]     ; 0051932c
    MOV dword ptr [ESP + 0x4b8],EAX     ; 00519333
    MOV EAX,dword ptr [ESP + 0x558]     ; 0051933a
    MOV dword ptr [ESP + 0x4bc],EAX     ; 00519341
    FLD float ptr [ESP + 0x4cc]         ; 00519348
        ;   Label: LAB_00519348
    FLD float ptr [ESP + 0x4d0]         ; 0051934f
    FLD float ptr [ESP + 0x4d4]         ; 00519356
    LEA EDI,[ESP + 0x394]               ; 0051935d
    LEA EAX,[EBX + 0x60]                ; 00519364
    LEA ESI,[ESP + 0x334]               ; 00519367
    LEA EDX,[ESP + 0x4cc]               ; 0051936e
    FXCH ST2                            ; 00519375
    FSUB float ptr [EAX]                ; 00519377
    FXCH                                ; 00519379
    FSUB float ptr [EAX + 0x4]          ; 0051937b
    FXCH ST2                            ; 0051937e
    FSUB float ptr [EAX + 0x8]          ; 00519380
    FXCH                                ; 00519383
    FSTP float ptr [ESP + 0x334]        ; 00519385
    FXCH                                ; 0051938c
    FSTP float ptr [ESP + 0x338]        ; 0051938e
    FSTP float ptr [ESP + 0x33c]        ; 00519395
    LEA EAX,[ESP + 0x394]               ; 0051939c
    MOVSD ES:EDI,ESI                    ; 005193a3
    MOVSD ES:EDI,ESI                    ; 005193a4
    MOVSD ES:EDI,ESI                    ; 005193a5
    CMP EDX,EAX                         ; 005193a6
    JZ 0x005193d4                       ; 005193a8
        ;   XREF to: 005193d4 (CONDITIONAL_JUMP)  ; LAB_005193d4
    MOV EAX,dword ptr [ESP + 0x394]     ; 005193aa
    MOV dword ptr [ESP + 0x4cc],EAX     ; 005193b1
    MOV EAX,dword ptr [ESP + 0x398]     ; 005193b8
    MOV dword ptr [ESP + 0x4d0],EAX     ; 005193bf
    MOV EAX,dword ptr [ESP + 0x39c]     ; 005193c6
    MOV dword ptr [ESP + 0x4d4],EAX     ; 005193cd
    MOV EAX,dword ptr [ESP + 0x4b4]     ; 005193d4
        ;   Label: LAB_005193d4
    MOV dword ptr [EBX + 0x70],EAX      ; 005193db
    MOV EAX,dword ptr [ESP + 0x4b8]     ; 005193de
    MOV dword ptr [EBX + 0x7c],EAX      ; 005193e5
    MOV EAX,dword ptr [ESP + 0x4bc]     ; 005193e8
    MOV dword ptr [EBX + 0x88],EAX      ; 005193ef
    MOV EAX,dword ptr [ESP + 0x3e8]     ; 005193f5
    MOV dword ptr [EBX + 0x74],EAX      ; 005193fc
    MOV EAX,dword ptr [ESP + 0x3ec]     ; 005193ff
    MOV dword ptr [EBX + 0x80],EAX      ; 00519406
    MOV EAX,dword ptr [ESP + 0x3f0]     ; 0051940c
    MOV dword ptr [EBX + 0x8c],EAX      ; 00519413
    MOV EAX,dword ptr [ESP + 0x4cc]     ; 00519419
    MOV dword ptr [EBX + 0x78],EAX      ; 00519420
    MOV EAX,dword ptr [ESP + 0x4d0]     ; 00519423
    MOV dword ptr [EBX + 0x84],EAX      ; 0051942a
    MOV EAX,dword ptr [ESP + 0x4d4]     ; 00519430
    MOV dword ptr [EBX + 0x90],EAX      ; 00519437
    MOV EAX,dword ptr [EBP + 0x20]      ; 0051943d
    PUSH EBX                            ; 00519440
    MOV dword ptr [EBX + 0x6c],EAX      ; 00519441
    CALL core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_005188a0 ; 00519444
        ;   XREF to: 005188a0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_005188a0(CMirrorReflection * this_ptr)
    ADD ESP,0x4                         ; 00519449
    LEA EAX,[ESP + 0x84]                ; 0051944c
    PUSH EAX                            ; 00519453
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005b53f0 ; 00519454
        ;   XREF to: 005b53f0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_005b53f0()
    FLD float ptr [EBX + 0x60]          ; 00519459
    LEA EAX,[ESP + 0x1a8]               ; 0051945c
    ADD ESP,0x4                         ; 00519463
    FCHS                                ; 00519466
    FSTP float ptr [ESP + 0x90]         ; 00519468
    PUSH EAX                            ; 0051946f
    FLD float ptr [EBX + 0x64]          ; 00519470
    FCHS                                ; 00519473
    FSTP float ptr [ESP + 0xa4]         ; 00519475
    FLD float ptr [EBX + 0x68]          ; 0051947c
    FCHS                                ; 0051947f
    FSTP float ptr [ESP + 0xb4]         ; 00519481
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005b53f0 ; 00519488
        ;   XREF to: 005b53f0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_005b53f0()
    FILD dword ptr [0x01c51d5c]         ; 0051948d | DAT_01c51d5c
    FMUL double ptr [0x005e906b]        ; 00519493 | DAT_005e906b
    FILD dword ptr [0x01c51d60]         ; 00519499 | DAT_01c51d60
    FMUL double ptr [0x005e906b]        ; 0051949f | DAT_005e906b
    FILD dword ptr [0x01c51d64]         ; 005194a5 | DAT_01c51d64
    FMUL double ptr [0x005e906b]        ; 005194ab | DAT_005e906b
    FILD dword ptr [0x01c51d68]         ; 005194b1 | DAT_01c51d68
    FMUL double ptr [0x005e906b]        ; 005194b7 | DAT_005e906b
    FILD dword ptr [0x01c51d6c]         ; 005194bd | DAT_01c51d6c
    FMUL double ptr [0x005e906b]        ; 005194c3 | DAT_005e906b
    FILD dword ptr [0x01c51d70]         ; 005194c9 | DAT_01c51d70
    FMUL double ptr [0x005e906b]        ; 005194cf | DAT_005e906b
    FILD dword ptr [0x01c51d74]         ; 005194d5 | DAT_01c51d74
    ADD ESP,0x4                         ; 005194db
    FMUL double ptr [0x005e906b]        ; 005194de | DAT_005e906b
    FXCH ST6                            ; 005194e4
    FSTP float ptr [ESP + 0x1a4]        ; 005194e6
    FILD dword ptr [0x01c51d78]         ; 005194ed | DAT_01c51d78
    FMUL double ptr [0x005e906b]        ; 005194f3 | DAT_005e906b
    FXCH ST5                            ; 005194f9
    FSTP float ptr [ESP + 0x1b4]        ; 005194fb
    FILD dword ptr [0x01c51d7c]         ; 00519502 | DAT_01c51d7c
    FMUL double ptr [0x005e906b]        ; 00519508 | DAT_005e906b
    LEA ESI,[ESP + 0x294]               ; 0051950e
    LEA EAX,[ESP + 0x1a4]               ; 00519515
    LEA EDI,[ESP + 0x174]               ; 0051951c
    PUSH EAX                            ; 00519523
    FXCH ST4                            ; 00519524
    FSTP float ptr [ESP + 0x1c8]        ; 00519526
    FXCH ST2                            ; 0051952d
    FSTP float ptr [ESP + 0x1ac]        ; 0051952f
    FSTP float ptr [ESP + 0x1bc]        ; 00519536
    FSTP float ptr [ESP + 0x1cc]        ; 0051953d
    FXCH ST2                            ; 00519544
    FSTP float ptr [ESP + 0x1b0]        ; 00519546
    LEA EAX,[ESP + 0x88]                ; 0051954d
    FSTP float ptr [ESP + 0x1c0]        ; 00519554
    PUSH EAX                            ; 0051955b
    FSTP float ptr [ESP + 0x1d4]        ; 0051955c
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00519563
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 00519568
    ADD ESP,0x8                         ; 0051956d
    LEA EAX,[ESP + 0x174]               ; 00519570
    LEA ESI,[ESP + 0x294]               ; 00519577
    PUSH EAX                            ; 0051957e
    MOVSD.REP ES:EDI,ESI                ; 0051957f
    PUSH EBX                            ; 00519581
    LEA ESI,[ESP + 0x444]               ; 00519582
    LEA EDI,[ESP + 0x354]               ; 00519589
    CALL core_xform.cpp_FUN_005b5080    ; 00519590
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x444]               ; 00519595
    LEA EDX,[ESP + 0x354]               ; 0051959c
    ADD ESP,0x8                         ; 005195a3
    LEA EAX,[ESP + 0x4d8]               ; 005195a6
    MOVSD ES:EDI,ESI                    ; 005195ad
    MOVSD ES:EDI,ESI                    ; 005195ae
    MOVSD ES:EDI,ESI                    ; 005195af
    CMP EAX,EDX                         ; 005195b0
    JZ 0x005195de                       ; 005195b2
        ;   XREF to: 005195de (CONDITIONAL_JUMP)  ; LAB_005195de
    MOV EAX,dword ptr [ESP + 0x34c]     ; 005195b4
    MOV dword ptr [ESP + 0x4d8],EAX     ; 005195bb
    MOV EAX,dword ptr [ESP + 0x350]     ; 005195c2
    MOV dword ptr [ESP + 0x4dc],EAX     ; 005195c9
    MOV EAX,dword ptr [ESP + 0x354]     ; 005195d0
    MOV dword ptr [ESP + 0x4e0],EAX     ; 005195d7
    LEA EAX,[ESP + 0x174]               ; 005195de
        ;   Label: LAB_005195de
    PUSH EAX                            ; 005195e5
    LEA EAX,[EBX + 0xc]                 ; 005195e6
    PUSH EAX                            ; 005195e9
    LEA ESI,[ESP + 0x4c8]               ; 005195ea
    LEA EDI,[ESP + 0x504]               ; 005195f1
    CALL core_xform.cpp_FUN_005b5080    ; 005195f8
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x4c8]               ; 005195fd
    LEA EAX,[ESP + 0x504]               ; 00519604
    ADD ESP,0x8                         ; 0051960b
    LEA EDX,[ESP + 0x55c]               ; 0051960e
    MOVSD ES:EDI,ESI                    ; 00519615
    MOVSD ES:EDI,ESI                    ; 00519616
    MOVSD ES:EDI,ESI                    ; 00519617
    CMP EDX,EAX                         ; 00519618
    JZ 0x00519646                       ; 0051961a
        ;   XREF to: 00519646 (CONDITIONAL_JUMP)  ; LAB_00519646
    MOV EAX,dword ptr [ESP + 0x4fc]     ; 0051961c
    MOV dword ptr [ESP + 0x55c],EAX     ; 00519623
    MOV EAX,dword ptr [ESP + 0x500]     ; 0051962a
    MOV dword ptr [ESP + 0x560],EAX     ; 00519631
    MOV EAX,dword ptr [ESP + 0x504]     ; 00519638
    MOV dword ptr [ESP + 0x564],EAX     ; 0051963f
    LEA EAX,[ESP + 0x174]               ; 00519646
        ;   Label: LAB_00519646
    PUSH EAX                            ; 0051964d
    LEA EAX,[EBX + 0x18]                ; 0051964e
    PUSH EAX                            ; 00519651
    LEA ESI,[ESP + 0x51c]               ; 00519652
    LEA EDI,[ESP + 0x348]               ; 00519659
    CALL core_xform.cpp_FUN_005b5080    ; 00519660
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x51c]               ; 00519665
    LEA EDX,[ESP + 0x348]               ; 0051966c
    ADD ESP,0x8                         ; 00519673
    LEA EAX,[ESP + 0x538]               ; 00519676
    MOVSD ES:EDI,ESI                    ; 0051967d
    MOVSD ES:EDI,ESI                    ; 0051967e
    MOVSD ES:EDI,ESI                    ; 0051967f
    CMP EAX,EDX                         ; 00519680
    JZ 0x005196ae                       ; 00519682
        ;   XREF to: 005196ae (CONDITIONAL_JUMP)  ; LAB_005196ae
    MOV EAX,dword ptr [ESP + 0x340]     ; 00519684
    MOV dword ptr [ESP + 0x538],EAX     ; 0051968b
    MOV EAX,dword ptr [ESP + 0x344]     ; 00519692
    MOV dword ptr [ESP + 0x53c],EAX     ; 00519699
    MOV EAX,dword ptr [ESP + 0x348]     ; 005196a0
    MOV dword ptr [ESP + 0x540],EAX     ; 005196a7
    LEA EAX,[ESP + 0x174]               ; 005196ae
        ;   Label: LAB_005196ae
    PUSH EAX                            ; 005196b5
    LEA EAX,[EBX + 0x24]                ; 005196b6
    PUSH EAX                            ; 005196b9
    LEA ESI,[ESP + 0x4f8]               ; 005196ba
    LEA EDI,[ESP + 0x36c]               ; 005196c1
    CALL core_xform.cpp_FUN_005b5080    ; 005196c8
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x4f8]               ; 005196cd
    LEA EAX,[ESP + 0x36c]               ; 005196d4
    ADD ESP,0x8                         ; 005196db
    LEA EDX,[ESP + 0x37c]               ; 005196de
    MOVSD ES:EDI,ESI                    ; 005196e5
    MOVSD ES:EDI,ESI                    ; 005196e6
    MOVSD ES:EDI,ESI                    ; 005196e7
    CMP EDX,EAX                         ; 005196e8
    JZ 0x00519716                       ; 005196ea
        ;   XREF to: 00519716 (CONDITIONAL_JUMP)  ; LAB_00519716
    MOV EAX,dword ptr [ESP + 0x364]     ; 005196ec
    MOV dword ptr [ESP + 0x37c],EAX     ; 005196f3
    MOV EAX,dword ptr [ESP + 0x368]     ; 005196fa
    MOV dword ptr [ESP + 0x380],EAX     ; 00519701
    MOV EAX,dword ptr [ESP + 0x36c]     ; 00519708
    MOV dword ptr [ESP + 0x384],EAX     ; 0051970f
    LEA EAX,[ESP + 0x174]               ; 00519716
        ;   Label: LAB_00519716
    PUSH EAX                            ; 0051971d
    LEA EAX,[EBX + 0x30]                ; 0051971e
    PUSH EAX                            ; 00519721
    MOV ECX,dword ptr [EBP + 0x18]      ; 00519722
    PUSH ECX                            ; 00519725
    LEA ESI,[ESP + 0x400]               ; 00519726
    LEA EDI,[ESP + 0x550]               ; 0051972d
    CALL core_xform.cpp_FUN_005b5080    ; 00519734
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x400]               ; 00519739
    ADD ESP,0x8                         ; 00519740
    LEA EAX,[ESP + 0x548]               ; 00519743
    MOVSD ES:EDI,ESI                    ; 0051974a
    MOVSD ES:EDI,ESI                    ; 0051974b
    MOVSD ES:EDI,ESI                    ; 0051974c
    PUSH EAX                            ; 0051974d
    LEA ESI,[ESP + 0x528]               ; 0051974e
    LEA EDI,[ESP + 0x414]               ; 00519755
    CALL core_xform.cpp_FUN_005b5080    ; 0051975c
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x528]               ; 00519761
    LEA EAX,[ESP + 0x414]               ; 00519768
    ADD ESP,0x8                         ; 0051976f
    LEA EDX,[ESP + 0x52c]               ; 00519772
    MOVSD ES:EDI,ESI                    ; 00519779
    MOVSD ES:EDI,ESI                    ; 0051977a
    MOVSD ES:EDI,ESI                    ; 0051977b
    CMP EDX,EAX                         ; 0051977c
    JZ 0x005197aa                       ; 0051977e
        ;   XREF to: 005197aa (CONDITIONAL_JUMP)  ; LAB_005197aa
    MOV EAX,dword ptr [ESP + 0x40c]     ; 00519780
    MOV dword ptr [ESP + 0x52c],EAX     ; 00519787
    MOV EAX,dword ptr [ESP + 0x410]     ; 0051978e
    MOV dword ptr [ESP + 0x530],EAX     ; 00519795
    MOV EAX,dword ptr [ESP + 0x414]     ; 0051979c
    MOV dword ptr [ESP + 0x534],EAX     ; 005197a3
    LEA EAX,[ESP + 0x538]               ; 005197aa
        ;   Label: LAB_005197aa
    PUSH EAX                            ; 005197b1
    LEA EAX,[ESP + 0x560]               ; 005197b2
    PUSH EAX                            ; 005197b9
    LEA EAX,[ESP + 0x4e0]               ; 005197ba
    PUSH EAX                            ; 005197c1
    LEA EAX,[EBX + 0x98]                ; 005197c2
    PUSH EAX                            ; 005197c8
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_005183b0 ; 005197c9
        ;   XREF to: 005183b0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneFromTriangle_FUN_005183b0(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
    ADD ESP,0x10                        ; 005197ce
    LEA EAX,[ESP + 0x55c]               ; 005197d1
    PUSH EAX                            ; 005197d8
    LEA EAX,[ESP + 0x4dc]               ; 005197d9
    PUSH EAX                            ; 005197e0
    LEA EAX,[ESP + 0x534]               ; 005197e1
    PUSH EAX                            ; 005197e8
    LEA EAX,[EBX + 0xa8]                ; 005197e9
    PUSH EAX                            ; 005197ef
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_005183b0 ; 005197f0
        ;   XREF to: 005183b0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneFromTriangle_FUN_005183b0(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
    ADD ESP,0x10                        ; 005197f5
    LEA EAX,[ESP + 0x538]               ; 005197f8
    PUSH EAX                            ; 005197ff
    LEA EAX,[ESP + 0x560]               ; 00519800
    PUSH EAX                            ; 00519807
    LEA EAX,[ESP + 0x534]               ; 00519808
    PUSH EAX                            ; 0051980f
    LEA EAX,[EBX + 0xb8]                ; 00519810
    PUSH EAX                            ; 00519816
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_005183b0 ; 00519817
        ;   XREF to: 005183b0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneFromTriangle_FUN_005183b0(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
    ADD ESP,0x10                        ; 0051981c
    LEA EAX,[ESP + 0x37c]               ; 0051981f
    PUSH EAX                            ; 00519826
    LEA EAX,[ESP + 0x53c]               ; 00519827
    PUSH EAX                            ; 0051982e
    LEA EAX,[ESP + 0x534]               ; 0051982f
    PUSH EAX                            ; 00519836
    LEA EAX,[EBX + 0xc8]                ; 00519837
    PUSH EAX                            ; 0051983d
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_005183b0 ; 0051983e
        ;   XREF to: 005183b0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneFromTriangle_FUN_005183b0(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
    ADD ESP,0x10                        ; 00519843
    LEA EAX,[ESP + 0x4d8]               ; 00519846
    PUSH EAX                            ; 0051984d
    LEA EAX,[ESP + 0x380]               ; 0051984e
    PUSH EAX                            ; 00519855
    LEA EAX,[ESP + 0x534]               ; 00519856
    PUSH EAX                            ; 0051985d
    ADD EBX,0xd8                        ; 0051985e
    PUSH EBX                            ; 00519864
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_005183b0 ; 00519865
        ;   XREF to: 005183b0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneFromTriangle_FUN_005183b0(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
    ADD ESP,0x10                        ; 0051986a
    MOV ESP,EBP                         ; 0051986d
    POP EBP                             ; 0051986f
    POP EDI                             ; 00519870
    POP ESI                             ; 00519871
    POP EBX                             ; 00519872
    RET                                 ; 00519873
    FLD float ptr [ESP + 0x20]          ; 00519874
        ;   Label: LAB_00519874
    FABS                                ; 00519878
    FLD float ptr [ESP + 0x1c]          ; 0051987a
    FABS                                ; 0051987e
    FSTP double ptr [ESP + 0x8]         ; 00519880
    FCOMP double ptr [ESP + 0x8]        ; 00519884
    FNSTSW AX                           ; 00519888
    SAHF                                ; 0051988a
    JNC 0x005198bd                      ; 0051988b
        ;   XREF to: 005198bd (CONDITIONAL_JUMP)  ; LAB_005198bd
    FLD float ptr [ESP + 0x18]          ; 0051988d
    FABS                                ; 00519891
    FCOMP double ptr [ESP + 0x8]        ; 00519893
    FNSTSW AX                           ; 00519897
    SAHF                                ; 00519899
    JNC 0x005198bd                      ; 0051989a
        ;   XREF to: 005198bd (CONDITIONAL_JUMP)  ; LAB_005198bd
    XOR EDI,EDI                         ; 0051989c
    MOV EDX,0x3f800000                  ; 0051989e
    MOV dword ptr [ESP + 0x404],EDI     ; 005198a3
    MOV dword ptr [ESP + 0x408],EDX     ; 005198aa
    MOV dword ptr [ESP + 0x400],EDI     ; 005198b1
    JMP 0x00518989                      ; 005198b8
        ;   XREF to: 00518989 (UNCONDITIONAL_JUMP)  ; LAB_00518989
    MOV ECX,0x3f800000                  ; 005198bd
        ;   Label: LAB_005198bd
    XOR EDX,EDX                         ; 005198c2
    MOV dword ptr [ESP + 0x404],ECX     ; 005198c4
    MOV dword ptr [ESP + 0x408],EDX     ; 005198cb
    MOV dword ptr [ESP + 0x400],EDX     ; 005198d2
    JMP 0x00518989                      ; 005198d9
        ;   XREF to: 00518989 (UNCONDITIONAL_JUMP)  ; LAB_00518989
    XOR EAX,EAX                         ; 005198de
        ;   Label: LAB_005198de
    MOV dword ptr [ESP + 0x3e0],EAX     ; 005198e0
    MOV dword ptr [ESP + 0x3dc],EAX     ; 005198e7
    MOV dword ptr [ESP + 0x3e4],EAX     ; 005198ee
    JMP 0x00518ad3                      ; 005198f5
        ;   XREF to: 00518ad3 (UNCONDITIONAL_JUMP)  ; LAB_00518ad3
    XOR ESI,ESI                         ; 005198fa
        ;   Label: LAB_005198fa
    MOV dword ptr [ESP + 0x404],ESI     ; 005198fc
    MOV dword ptr [ESP + 0x400],ESI     ; 00519903
    MOV dword ptr [ESP + 0x408],ESI     ; 0051990a
    JMP 0x00518c0e                      ; 00519911
        ;   XREF to: 00518c0e (UNCONDITIONAL_JUMP)  ; LAB_00518c0e

