; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_setcolid_cpp_FUN_005578b0(CDemonSet *param_1,float param_2,CBoundingBox3D *param_3,float *param_4,float param_5)
;
; Local Variables:
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[4]:
;   core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00557110 at 005571de
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230 at 00557277
;   core_setcolid.cpp_FUN_00557300 at 005573b3
;   core_setcolid.cpp_FUN_005574c0 at 00557528
;
; Called Functions:
;   core_actor.cpp_FUN_00409170
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420500
;   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00557db0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005578b0
        ;   Label: core_setcolid.cpp_FUN_005578b0
    PUSH ESI                            ; 005578b1
    PUSH EDI                            ; 005578b2
    PUSH EBP                            ; 005578b3
    MOV EBP,ESP                         ; 005578b4
    SUB ESP,0x108                       ; 005578b6
    AND ESP,0xfffffff8                  ; 005578bc
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005578bf
    MOV EAX,dword ptr [EBP + 0x14]      ; 005578c2
    MOV dword ptr [EAX + 0x14d148],0xffffffff ; 005578c5
    MOV dword ptr [EAX + 0x14d14c],0xffffffff ; 005578cf
    MOV EDX,dword ptr [EAX + 0x15f6ac]  ; 005578d9
    MOV dword ptr [EAX + 0x14d144],0x0  ; 005578df
    TEST EDX,EDX                        ; 005578e9
    JL 0x00557b32                       ; 005578eb
        ;   XREF to: 00557b32 (CONDITIONAL_JUMP)  ; LAB_00557b32
    FLD float ptr [EBP + 0x24]          ; 005578f1
    FLDZ                                ; 005578f4
    FCOMPP                              ; 005578f6
    FNSTSW AX                           ; 005578f8
    SAHF                                ; 005578fa
    JNC 0x00557b4a                      ; 005578fb
        ;   XREF to: 00557b4a (CONDITIONAL_JUMP)  ; LAB_00557b4a
    FLD float ptr [EBP + 0x18]          ; 00557901
    FLDZ                                ; 00557904
    FCOMPP                              ; 00557906
    FNSTSW AX                           ; 00557908
    SAHF                                ; 0055790a
    JA 0x00557b61                       ; 0055790b
        ;   XREF to: 00557b61 (CONDITIONAL_JUMP)  ; LAB_00557b61
    FLD float ptr [EBP + 0x24]          ; 00557911
        ;   Label: LAB_00557911
    MOV EAX,dword ptr [EBP + 0x24]      ; 00557914
    FLD1                                ; 00557917
    MOV dword ptr [ESP + 0xf4],EAX      ; 00557919
    FCOMPP                              ; 00557920
    FNSTSW AX                           ; 00557922
    SAHF                                ; 00557924
    JNC 0x00557932                      ; 00557925
        ;   XREF to: 00557932 (CONDITIONAL_JUMP)  ; LAB_00557932
    MOV dword ptr [ESP + 0xf4],0x3f800000 ; 00557927
    MOV EAX,dword ptr [EBP + 0x20]      ; 00557932
        ;   Label: LAB_00557932
    LEA EDI,[ESP + 0x78]                ; 00557935
    LEA ESI,[ESP + 0x6c]                ; 00557939
    FLD float ptr [EAX]                 ; 0055793d
    FLD float ptr [EAX + 0x4]           ; 0055793f
    FLD float ptr [EAX + 0x8]           ; 00557942
    FXCH ST2                            ; 00557945
    FSUB float ptr [EBX]                ; 00557947
    FXCH                                ; 00557949
    FSUB float ptr [EBX + 0x4]          ; 0055794b
    FXCH ST2                            ; 0055794e
    FSUB float ptr [EBX + 0x8]          ; 00557950
    FXCH                                ; 00557953
    FSTP float ptr [ESP + 0x6c]         ; 00557955
    FXCH                                ; 00557959
    FSTP float ptr [ESP + 0x70]         ; 0055795b
    FSTP float ptr [ESP + 0x74]         ; 0055795f
    MOVSD ES:EDI,ESI                    ; 00557963
    MOVSD ES:EDI,ESI                    ; 00557964
    MOVSD ES:EDI,ESI                    ; 00557965
    FLD float ptr [ESP + 0xf4]          ; 00557966
    FLD float ptr [ESP + 0x78]          ; 0055796d
    FMUL ST1                            ; 00557971
    FLD float ptr [ESP + 0x7c]          ; 00557973
    FMUL ST2                            ; 00557977
    FLD float ptr [ESP + 0x80]          ; 00557979
    FMULP ST3                           ; 00557980
    MOV EDX,EBX                         ; 00557982
    LEA EAX,[ESP + 0x48]                ; 00557984
    LEA EDI,[ESP + 0xa8]                ; 00557988
    LEA ESI,[ESP + 0x84]                ; 0055798f
    FXCH                                ; 00557996
    FSTP float ptr [ESP + 0x84]         ; 00557998
    FSTP float ptr [ESP + 0x88]         ; 0055799f
    FSTP float ptr [ESP + 0x8c]         ; 005579a6
    MOVSD ES:EDI,ESI                    ; 005579ad
    MOVSD ES:EDI,ESI                    ; 005579ae
    MOVSD ES:EDI,ESI                    ; 005579af
    CMP EAX,EBX                         ; 005579b0
    JZ 0x005579c8                       ; 005579b2
        ;   XREF to: 005579c8 (CONDITIONAL_JUMP)  ; LAB_005579c8
    MOV EAX,dword ptr [EBX]             ; 005579b4
    MOV dword ptr [ESP + 0x48],EAX      ; 005579b6
    MOV EAX,dword ptr [EBX + 0x4]       ; 005579ba
    MOV dword ptr [ESP + 0x4c],EAX      ; 005579bd
    MOV EAX,dword ptr [EBX + 0x8]       ; 005579c1
    MOV dword ptr [ESP + 0x50],EAX      ; 005579c4
    LEA EAX,[ESP + 0x54]                ; 005579c8
        ;   Label: LAB_005579c8
    CMP EAX,EDX                         ; 005579cc
    JZ 0x005579e4                       ; 005579ce
        ;   XREF to: 005579e4 (CONDITIONAL_JUMP)  ; LAB_005579e4
    MOV EAX,dword ptr [EDX]             ; 005579d0
    MOV dword ptr [ESP + 0x54],EAX      ; 005579d2
    MOV EAX,dword ptr [EDX + 0x4]       ; 005579d6
    MOV dword ptr [ESP + 0x58],EAX      ; 005579d9
    MOV EAX,dword ptr [EDX + 0x8]       ; 005579dd
    MOV dword ptr [ESP + 0x5c],EAX      ; 005579e0
    FLD float ptr [EBX]                 ; 005579e4
        ;   Label: LAB_005579e4
    FLD float ptr [EBX + 0x4]           ; 005579e6
    FLD float ptr [EBX + 0x8]           ; 005579e9
    LEA EDI,[ESP + 0xb4]                ; 005579ec
    LEA ESI,[ESP + 0x9c]                ; 005579f3
    LEA EAX,[ESP + 0xb4]                ; 005579fa
    FXCH ST2                            ; 00557a01
    FADD float ptr [ESP + 0xa8]         ; 00557a03
    FXCH                                ; 00557a0a
    FADD float ptr [ESP + 0xac]         ; 00557a0c
    FXCH ST2                            ; 00557a13
    FADD float ptr [ESP + 0xb0]         ; 00557a15
    PUSH EAX                            ; 00557a1c
    FXCH                                ; 00557a1d
    FSTP float ptr [ESP + 0xa0]         ; 00557a1f
    FXCH                                ; 00557a26
    FSTP float ptr [ESP + 0xa4]         ; 00557a28
    LEA EAX,[ESP + 0x4c]                ; 00557a2f
    FSTP float ptr [ESP + 0xa8]         ; 00557a33
    PUSH EAX                            ; 00557a3a
    MOVSD ES:EDI,ESI                    ; 00557a3b
    MOVSD ES:EDI,ESI                    ; 00557a3c
    MOVSD ES:EDI,ESI                    ; 00557a3d
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420500 ; 00557a3e
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00557a43
    LEA EAX,[ESP + 0x4]                 ; 00557a46
    PUSH EAX                            ; 00557a4a
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0 ; 00557a4b
        ;   XREF to: 005593c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 00557a50
    MOV EAX,dword ptr [EBP + 0x14]      ; 00557a53
    MOV EAX,dword ptr [EAX + 0x15f698]  ; 00557a56
    MOV dword ptr [ESP + 0x4],EAX       ; 00557a5c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00557a60
    MOV EAX,dword ptr [EAX + 0x15f69c]  ; 00557a63
    MOV dword ptr [ESP + 0x8],EAX       ; 00557a69
    MOV EAX,dword ptr [EBP + 0x14]      ; 00557a6d
    MOV EAX,dword ptr [EAX + 0x15f6a0]  ; 00557a70
    MOV dword ptr [ESP + 0xc],EAX       ; 00557a76
    MOV EAX,dword ptr [EBP + 0x14]      ; 00557a7a
    MOV EAX,dword ptr [EAX + 0x15f6a4]  ; 00557a7d
    MOV dword ptr [ESP + 0x10],EAX      ; 00557a83
    MOV EAX,dword ptr [EBP + 0x14]      ; 00557a87
    MOV EAX,dword ptr [EAX + 0x15f6a8]  ; 00557a8a
    MOV dword ptr [ESP + 0x14],EAX      ; 00557a90
    MOV EAX,dword ptr [EBP + 0x14]      ; 00557a94
    XOR EDI,EDI                         ; 00557a97
    MOV EDX,dword ptr [EAX + 0x156db8]  ; 00557a99
    MOV dword ptr [ESP + 0xf8],EDI      ; 00557a9f
    TEST EDX,EDX                        ; 00557aa6
    JLE 0x00557b0f                      ; 00557aa8
        ;   XREF to: 00557b0f (CONDITIONAL_JUMP)  ; LAB_00557b0f
    ADD EAX,0x14d128                    ; 00557aaa
    MOV dword ptr [ESP + 0x100],EAX     ; 00557aaf
    MOV EAX,dword ptr [EBP + 0x14]      ; 00557ab6
    MOV dword ptr [ESP + 0xfc],EAX      ; 00557ab9
    MOV ESI,dword ptr [ESP + 0xfc]      ; 00557ac0
        ;   Label: LAB_00557ac0
    MOV ESI,dword ptr [ESI + 0x156dbc]  ; 00557ac7
    PUSH ESI                            ; 00557acd
    MOV EDI,dword ptr [EBP + 0x14]      ; 00557ace
    PUSH EDI                            ; 00557ad1
    CALL core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00557db0 ; 00557ad2
        ;   XREF to: 00557db0 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00557db0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00557ad7
    TEST EAX,EAX                        ; 00557ada
    JZ 0x00557b6b                       ; 00557adc
        ;   XREF to: 00557b6b (CONDITIONAL_JUMP)  ; LAB_00557b6b
    MOV ESI,dword ptr [ESP + 0xfc]      ; 00557ae2
        ;   Label: LAB_00557ae2
    MOV EDI,dword ptr [ESP + 0xf8]      ; 00557ae9
    MOV EDX,dword ptr [EBP + 0x14]      ; 00557af0
    ADD ESI,0x4                         ; 00557af3
    INC EDI                             ; 00557af6
    MOV ECX,dword ptr [EDX + 0x156db8]  ; 00557af7
    MOV dword ptr [ESP + 0xfc],ESI      ; 00557afd
    MOV dword ptr [ESP + 0xf8],EDI      ; 00557b04
    CMP EDI,ECX                         ; 00557b0b
    JL 0x00557ac0                       ; 00557b0d
        ;   XREF to: 00557ac0 (CONDITIONAL_JUMP)  ; LAB_00557ac0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00557b0f
        ;   Label: LAB_00557b0f
    MOV EBX,dword ptr [EAX + 0x14d144]  ; 00557b12
    TEST EBX,EBX                        ; 00557b18
    JZ 0x00557b32                       ; 00557b1a
        ;   XREF to: 00557b32 (CONDITIONAL_JUMP)  ; LAB_00557b32
    PUSH EBX                            ; 00557b1c
    MOV EDX,dword ptr [EBX + 0x154]     ; 00557b1d
    CALL dword ptr [EDX + 0x44]         ; 00557b23
    ADD ESP,0x4                         ; 00557b26
    MOV EDX,dword ptr [EBP + 0x14]      ; 00557b29
    MOV dword ptr [EDX + 0x14d134],EAX  ; 00557b2c
    MOV EAX,dword ptr [EBP + 0x24]      ; 00557b32
        ;   Label: LAB_00557b32
    MOV dword ptr [ESP + 0xf0],EAX      ; 00557b35
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00557b3c
    MOV ESP,EBP                         ; 00557b43
    POP EBP                             ; 00557b45
    POP EDI                             ; 00557b46
    POP ESI                             ; 00557b47
    POP EBX                             ; 00557b48
    RET                                 ; 00557b49
    XOR ECX,ECX                         ; 00557b4a
        ;   Label: LAB_00557b4a
    MOV dword ptr [ESP + 0xf0],ECX      ; 00557b4c
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00557b53
    MOV ESP,EBP                         ; 00557b5a
    POP EBP                             ; 00557b5c
    POP EDI                             ; 00557b5d
    POP ESI                             ; 00557b5e
    POP EBX                             ; 00557b5f
    RET                                 ; 00557b60
    XOR ECX,ECX                         ; 00557b61
        ;   Label: LAB_00557b61
    MOV dword ptr [EBP + 0x18],ECX      ; 00557b63
    JMP 0x00557911                      ; 00557b66
        ;   XREF to: 00557911 (UNCONDITIONAL_JUMP)  ; LAB_00557911
    MOV dword ptr [ESP + 0x24],EAX      ; 00557b6b
        ;   Label: LAB_00557b6b
    MOV dword ptr [ESP + 0x28],EAX      ; 00557b6f
    LEA EAX,[ESP + 0x4]                 ; 00557b73
    PUSH EAX                            ; 00557b77
    MOV EDX,dword ptr [ESI + 0x154]     ; 00557b78
    PUSH ESI                            ; 00557b7e
    CALL dword ptr [EDX + 0x3c]         ; 00557b7f
    ADD ESP,0x8                         ; 00557b82
    TEST EAX,EAX                        ; 00557b85
    JZ 0x00557ae2                       ; 00557b87
        ;   XREF to: 00557ae2 (CONDITIONAL_JUMP)  ; LAB_00557ae2
    LEA EDX,[ESP + 0x48]                ; 00557b8d
    PUSH EDX                            ; 00557b91
    PUSH EAX                            ; 00557b92
    LEA EAX,[ESP + 0xc]                 ; 00557b93
    PUSH EAX                            ; 00557b97
    LEA EAX,[ESP + 0x38]                ; 00557b98
    PUSH EAX                            ; 00557b9c
    LEA EAX,[ESP + 0xb8]                ; 00557b9d
    PUSH EAX                            ; 00557ba4
    PUSH EBX                            ; 00557ba5
    PUSH ESI                            ; 00557ba6
    CALL core_actor.cpp_FUN_00409170    ; 00557ba7
        ;   XREF to: 00409170 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409170()
    MOV dword ptr [ESP + 0x120],EAX     ; 00557bac
    FLD float ptr [ESP + 0x120]         ; 00557bb3
    ADD ESP,0x1c                        ; 00557bba
    FST float ptr [ESP]                 ; 00557bbd
    FLD1                                ; 00557bc0
    FCOMPP                              ; 00557bc2
    FNSTSW AX                           ; 00557bc4
    SAHF                                ; 00557bc6
    JC 0x00557ae2                       ; 00557bc7
        ;   XREF to: 00557ae2 (CONDITIONAL_JUMP)  ; LAB_00557ae2
    FLD float ptr [ESP]                 ; 00557bcd
    FMUL float ptr [ESP + 0xf4]         ; 00557bd0
    FST float ptr [ESP]                 ; 00557bd7
    FCOMP float ptr [EBP + 0x24]        ; 00557bda
    FNSTSW AX                           ; 00557bdd
    SAHF                                ; 00557bdf
    JNC 0x00557ae2                      ; 00557be0
        ;   XREF to: 00557ae2 (CONDITIONAL_JUMP)  ; LAB_00557ae2
    FLD float ptr [ESP]                 ; 00557be6
    FCOMP float ptr [EBP + 0x18]        ; 00557be9
    FNSTSW AX                           ; 00557bec
    SAHF                                ; 00557bee
    JBE 0x00557ae2                      ; 00557bef
        ;   XREF to: 00557ae2 (CONDITIONAL_JUMP)  ; LAB_00557ae2
    MOV EAX,dword ptr [ESP]             ; 00557bf5
    MOV ECX,dword ptr [ESP + 0x100]     ; 00557bf8
    MOV dword ptr [EBP + 0x24],EAX      ; 00557bff
    LEA EAX,[ESP + 0x2c]                ; 00557c02
    CMP EAX,ECX                         ; 00557c06
    JZ 0x00557c1e                       ; 00557c08
        ;   XREF to: 00557c1e (CONDITIONAL_JUMP)  ; LAB_00557c1e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00557c0a
    MOV dword ptr [ECX],EAX             ; 00557c0e
    MOV EAX,dword ptr [ESP + 0x30]      ; 00557c10
    MOV dword ptr [ECX + 0x4],EAX       ; 00557c14
    MOV EAX,dword ptr [ESP + 0x34]      ; 00557c17
    MOV dword ptr [ECX + 0x8],EAX       ; 00557c1b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00557c1e
        ;   Label: LAB_00557c1e
    MOV dword ptr [EAX + 0x14d144],ESI  ; 00557c21
    MOV EDX,dword ptr [EBP + 0x14]      ; 00557c27
    MOV EAX,dword ptr [ESP + 0x38]      ; 00557c2a
    MOV dword ptr [EDX + 0x14d148],EAX  ; 00557c2e
    MOV EAX,dword ptr [ESP + 0x44]      ; 00557c34
    MOV dword ptr [EDX + 0x14d14c],EAX  ; 00557c38
    MOV EAX,dword ptr [EBP + 0x24]      ; 00557c3e
    MOV dword ptr [ESP + 0xf4],EAX      ; 00557c41
    MOV EAX,dword ptr [EBP + 0x20]      ; 00557c48
    LEA EDI,[ESP + 0xe4]                ; 00557c4b
    LEA ESI,[ESP + 0xcc]                ; 00557c52
    FLD float ptr [EAX]                 ; 00557c59
    FLD float ptr [EAX + 0x4]           ; 00557c5b
    FLD float ptr [EAX + 0x8]           ; 00557c5e
    FXCH ST2                            ; 00557c61
    FSUB float ptr [EBX]                ; 00557c63
    FXCH                                ; 00557c65
    FSUB float ptr [EBX + 0x4]          ; 00557c67
    FXCH ST2                            ; 00557c6a
    FSUB float ptr [EBX + 0x8]          ; 00557c6c
    FXCH                                ; 00557c6f
    FSTP float ptr [ESP + 0xcc]         ; 00557c71
    FXCH                                ; 00557c78
    FSTP float ptr [ESP + 0xd0]         ; 00557c7a
    FSTP float ptr [ESP + 0xd4]         ; 00557c81
    MOVSD ES:EDI,ESI                    ; 00557c88
    MOVSD ES:EDI,ESI                    ; 00557c89
    MOVSD ES:EDI,ESI                    ; 00557c8a
    FLD float ptr [ESP + 0xe4]          ; 00557c8b
    FMUL float ptr [EBP + 0x24]         ; 00557c92
    FLD float ptr [ESP + 0xe8]          ; 00557c95
    FMUL float ptr [EBP + 0x24]         ; 00557c9c
    FLD float ptr [ESP + 0xec]          ; 00557c9f
    FMUL float ptr [EBP + 0x24]         ; 00557ca6
    LEA EDI,[ESP + 0xd8]                ; 00557ca9
    LEA ESI,[ESP + 0x60]                ; 00557cb0
    FXCH ST2                            ; 00557cb4
    FSTP float ptr [ESP + 0x60]         ; 00557cb6
    FSTP float ptr [ESP + 0x64]         ; 00557cba
    FSTP float ptr [ESP + 0x68]         ; 00557cbe
    MOVSD ES:EDI,ESI                    ; 00557cc2
    MOVSD ES:EDI,ESI                    ; 00557cc3
    MOVSD ES:EDI,ESI                    ; 00557cc4
    LEA EAX,[ESP + 0xd8]                ; 00557cc5
    LEA ESI,[ESP + 0xa8]                ; 00557ccc
    CMP ESI,EAX                         ; 00557cd3
    JZ 0x00557d01                       ; 00557cd5
        ;   XREF to: 00557d01 (CONDITIONAL_JUMP)  ; LAB_00557d01
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00557cd7
    MOV dword ptr [ESP + 0xa8],EAX      ; 00557cde
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00557ce5
    MOV dword ptr [ESP + 0xac],EAX      ; 00557cec
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00557cf3
    MOV dword ptr [ESP + 0xb0],EAX      ; 00557cfa
    LEA EAX,[ESP + 0x48]                ; 00557d01
        ;   Label: LAB_00557d01
    MOV ESI,EBX                         ; 00557d05
    CMP EAX,EBX                         ; 00557d07
    JZ 0x00557d1f                       ; 00557d09
        ;   XREF to: 00557d1f (CONDITIONAL_JUMP)  ; LAB_00557d1f
    MOV EAX,dword ptr [EBX]             ; 00557d0b
    MOV dword ptr [ESP + 0x48],EAX      ; 00557d0d
    MOV EAX,dword ptr [EBX + 0x4]       ; 00557d11
    MOV dword ptr [ESP + 0x4c],EAX      ; 00557d14
    MOV EAX,dword ptr [EBX + 0x8]       ; 00557d18
    MOV dword ptr [ESP + 0x50],EAX      ; 00557d1b
    LEA EAX,[ESP + 0x54]                ; 00557d1f
        ;   Label: LAB_00557d1f
    CMP EAX,ESI                         ; 00557d23
    JZ 0x00557d3b                       ; 00557d25
        ;   XREF to: 00557d3b (CONDITIONAL_JUMP)  ; LAB_00557d3b
    MOV EAX,dword ptr [ESI]             ; 00557d27
    MOV dword ptr [ESP + 0x54],EAX      ; 00557d29
    MOV EAX,dword ptr [ESI + 0x4]       ; 00557d2d
    MOV dword ptr [ESP + 0x58],EAX      ; 00557d30
    MOV EAX,dword ptr [ESI + 0x8]       ; 00557d34
    MOV dword ptr [ESP + 0x5c],EAX      ; 00557d37
    FLD float ptr [EBX]                 ; 00557d3b
        ;   Label: LAB_00557d3b
    FLD float ptr [EBX + 0x4]           ; 00557d3d
    FLD float ptr [EBX + 0x8]           ; 00557d40
    LEA EDI,[ESP + 0x90]                ; 00557d43
    LEA ESI,[ESP + 0xc0]                ; 00557d4a
    LEA EAX,[ESP + 0x90]                ; 00557d51
    FXCH ST2                            ; 00557d58
    FADD float ptr [ESP + 0xa8]         ; 00557d5a
    FXCH                                ; 00557d61
    FADD float ptr [ESP + 0xac]         ; 00557d63
    FXCH ST2                            ; 00557d6a
    FADD float ptr [ESP + 0xb0]         ; 00557d6c
    PUSH EAX                            ; 00557d73
    FXCH                                ; 00557d74
    FSTP float ptr [ESP + 0xc4]         ; 00557d76
    FXCH                                ; 00557d7d
    FSTP float ptr [ESP + 0xc8]         ; 00557d7f
    LEA EAX,[ESP + 0x4c]                ; 00557d86
    FSTP float ptr [ESP + 0xcc]         ; 00557d8a
    PUSH EAX                            ; 00557d91
    MOVSD ES:EDI,ESI                    ; 00557d92
    MOVSD ES:EDI,ESI                    ; 00557d93
    MOVSD ES:EDI,ESI                    ; 00557d94
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420500 ; 00557d95
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00557d9a
    JMP 0x00557ae2                      ; 00557d9d
        ;   XREF to: 00557ae2 (UNCONDITIONAL_JUMP)  ; LAB_00557ae2

