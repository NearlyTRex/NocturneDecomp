; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_00473c10(CDemonActor *param_1,float param_2,int param_3)
;
; Local Variables:
; undefined8       Stack[-0x178]:8  local_178
; undefined8       Stack[-0x170]:8  local_170
; undefined8       Stack[-0x168]:8  local_168
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined        Stack[-0xf4]:1  local_f4
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_doc.cpp_FUN_00469550 at 0046a2da
;
; Referenced Globals:
;   undefined4 DAT_005da3d4
;   undefined4 DAT_005da3dc
;   undefined4 DAT_005da3e4
;   undefined4 DAT_005da3ec
;   undefined4 DAT_005fecac
;   undefined4 DAT_005fecb0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01b68818
;   undefined4 DAT_01b6881c
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1372328_0x14f0a8
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_FUN_00557300
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0
;   core_skeleton.cpp_FUN_00569040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473c10
        ;   Label: core_doc.cpp_FUN_00473c10
    PUSH ESI                            ; 00473c11
    PUSH EDI                            ; 00473c12
    PUSH EBP                            ; 00473c13
    MOV EBP,ESP                         ; 00473c14
    SUB ESP,0x164                       ; 00473c16
    AND ESP,0xfffffff8                  ; 00473c1c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00473c1f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473c22
    MOV EDX,dword ptr [EAX + 0x20004]   ; 00473c25
    TEST EDX,EDX                        ; 00473c2b
    JNZ 0x00473cd1                      ; 00473c2d
        ;   XREF to: 00473cd1 (CONDITIONAL_JUMP)  ; LAB_00473cd1
    XOR EBX,EBX                         ; 00473c33
    XOR EDI,EDI                         ; 00473c35
        ;   Label: LAB_00473c35
    MOV dword ptr [ESP + 0x20],EDI      ; 00473c37
    TEST EBX,EBX                        ; 00473c3b
    JZ 0x00474183                       ; 00473c3d
        ;   XREF to: 00474183 (CONDITIONAL_JUMP)  ; LAB_00474183
    MOV dword ptr [ESP + 0x158],EDI     ; 00473c43
    MOV dword ptr [ESP + 0x15c],EDI     ; 00473c4a
    MOV EAX,[0x00622c18]                ; 00473c51 | g_CDemonSetPtr
        ;   Label: LAB_00473c51
    MOV EBX,dword ptr [ESP + 0x158]     ; 00473c56
    CMP EBX,dword ptr [EAX + 0x14f0a8]  ; 00473c5d | g_CDemonSetInstance.field1372328_0x14f0a8
    JGE 0x00473dae                      ; 00473c63
        ;   XREF to: 00473dae (CONDITIONAL_JUMP)  ; LAB_00473dae
    ADD EAX,dword ptr [ESP + 0x15c]     ; 00473c69
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 00473c70
    LEA EAX,[EBX + 0x20]                ; 00473c76
    PUSH EAX                            ; 00473c79
    MOV ECX,dword ptr [EBP + 0x14]      ; 00473c7a
    PUSH ECX                            ; 00473c7d
    LEA ESI,[ESP + 0x110]               ; 00473c7e
    LEA EDI,[ESP + 0x80]                ; 00473c85
    CALL core_actor.cpp_FUN_00408bb0    ; 00473c8c
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x110]               ; 00473c91
    ADD ESP,0x8                         ; 00473c98
    MOVSD ES:EDI,ESI                    ; 00473c9b
    MOVSD ES:EDI,ESI                    ; 00473c9c
    MOVSD ES:EDI,ESI                    ; 00473c9d
    FLD float ptr [ESP + 0x78]          ; 00473c9e
    FABS                                ; 00473ca2
    FCOMP double ptr [0x005da3dc]       ; 00473ca4 | DAT_005da3dc
    FNSTSW AX                           ; 00473caa
    SAHF                                ; 00473cac
    JBE 0x00473cf1                      ; 00473cad
        ;   XREF to: 00473cf1 (CONDITIONAL_JUMP)  ; LAB_00473cf1
    MOV ECX,dword ptr [ESP + 0x158]     ; 00473caf
        ;   Label: LAB_00473caf
    MOV EDX,dword ptr [ESP + 0x15c]     ; 00473cb6
    INC ECX                             ; 00473cbd
    ADD EDX,0x4                         ; 00473cbe
    MOV dword ptr [ESP + 0x158],ECX     ; 00473cc1
    MOV dword ptr [ESP + 0x15c],EDX     ; 00473cc8
    JMP 0x00473c51                      ; 00473ccf
        ;   XREF to: 00473c51 (UNCONDITIONAL_JUMP)  ; LAB_00473c51
    MOV ECX,dword ptr [EDX + 0x2e0]     ; 00473cd1
        ;   Label: LAB_00473cd1
    MOV EAX,EDX                         ; 00473cd7
    TEST ECX,ECX                        ; 00473cd9
    JNZ 0x00473ce7                      ; 00473cdb
        ;   XREF to: 00473ce7 (CONDITIONAL_JUMP)  ; LAB_00473ce7
    MOV EBX,0x1                         ; 00473cdd
        ;   Label: LAB_00473cdd
    JMP 0x00473c35                      ; 00473ce2
        ;   XREF to: 00473c35 (UNCONDITIONAL_JUMP)  ; LAB_00473c35
    CMP ECX,0x5                         ; 00473ce7
        ;   Label: LAB_00473ce7
    JZ 0x00473cdd                       ; 00473cea
        ;   XREF to: 00473cdd (CONDITIONAL_JUMP)  ; LAB_00473cdd
    JMP 0x00473c35                      ; 00473cec
        ;   XREF to: 00473c35 (UNCONDITIONAL_JUMP)  ; LAB_00473c35
    FLD float ptr [ESP + 0x7c]          ; 00473cf1
        ;   Label: LAB_00473cf1
    FABS                                ; 00473cf5
    FCOMP double ptr [0x005da3e4]       ; 00473cf7 | DAT_005da3e4
    FNSTSW AX                           ; 00473cfd
    SAHF                                ; 00473cff
    JA 0x00473caf                       ; 00473d00
        ;   XREF to: 00473caf (CONDITIONAL_JUMP)  ; LAB_00473caf
    FLDZ                                ; 00473d02
    FCOMP float ptr [ESP + 0x80]        ; 00473d04
    FNSTSW AX                           ; 00473d0b
    SAHF                                ; 00473d0d
    JA 0x00473caf                       ; 00473d0e
        ;   XREF to: 00473caf (CONDITIONAL_JUMP)  ; LAB_00473caf
    CMP dword ptr [ESP + 0x80],0x40c00000 ; 00473d10
    JG 0x00473caf                       ; 00473d1b
        ;   XREF to: 00473caf (CONDITIONAL_JUMP)  ; LAB_00473caf
    CMP EBX,dword ptr [EBP + 0x14]      ; 00473d1d
    JZ 0x00473caf                       ; 00473d20
        ;   XREF to: 00473caf (CONDITIONAL_JUMP)  ; LAB_00473caf
    PUSH EBX                            ; 00473d22
    MOV EAX,dword ptr [EBX + 0x154]     ; 00473d23
    CALL dword ptr [EAX + 0x10c]        ; 00473d29
    ADD ESP,0x4                         ; 00473d2f
    TEST EAX,EAX                        ; 00473d32
    JNZ 0x00473caf                      ; 00473d34
        ;   XREF to: 00473caf (CONDITIONAL_JUMP)  ; LAB_00473caf
    LEA EAX,[ESP + 0x2c]                ; 00473d3a
    PUSH EAX                            ; 00473d3e
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0 ; 00473d3f
        ;   XREF to: 005593c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 00473d44
    LEA ESI,[ESP + 0x2c]                ; 00473d47
    PUSH ESI                            ; 00473d4b
    MOV EAX,dword ptr [EBX + 0x154]     ; 00473d4c
    PUSH EBX                            ; 00473d52
    CALL dword ptr [EAX + 0x3c]         ; 00473d53
    ADD ESP,0x8                         ; 00473d56
    CMP EAX,0x2                         ; 00473d59
    JNZ 0x00473caf                      ; 00473d5c
        ;   XREF to: 00473caf (CONDITIONAL_JUMP)  ; LAB_00473caf
    FLD float ptr [ESP + 0x80]          ; 00473d62
    FSUB float ptr [ESP + 0x48]         ; 00473d69
    FADD double ptr [0x005da3ec]        ; 00473d6d | DAT_005da3ec
    FMUL double ptr [0x005da3d4]        ; 00473d73 | DAT_005da3d4
    FLD1                                ; 00473d79
    FSUBRP                              ; 00473d7b
    FST float ptr [ESP + 0x28]          ; 00473d7d
    FCOMP float ptr [ESP + 0x20]        ; 00473d81
    FNSTSW AX                           ; 00473d85
    SAHF                                ; 00473d87
    JC 0x00473caf                       ; 00473d88
        ;   XREF to: 00473caf (CONDITIONAL_JUMP)  ; LAB_00473caf
    FLD float ptr [ESP + 0x28]          ; 00473d8e
    FLDZ                                ; 00473d92
    FCOMPP                              ; 00473d94
    FNSTSW AX                           ; 00473d96
    SAHF                                ; 00473d98
    JBE 0x00473da1                      ; 00473d99
        ;   XREF to: 00473da1 (CONDITIONAL_JUMP)  ; LAB_00473da1
    XOR EAX,EAX                         ; 00473d9b
    MOV dword ptr [ESP + 0x28],EAX      ; 00473d9d
    MOV EAX,dword ptr [ESP + 0x28]      ; 00473da1
        ;   Label: LAB_00473da1
    MOV dword ptr [ESP + 0x20],EAX      ; 00473da5
    JMP 0x00473caf                      ; 00473da9
        ;   XREF to: 00473caf (UNCONDITIONAL_JUMP)  ; LAB_00473caf
    PUSH EAX                            ; 00473dae | g_CDemonSetInstance
        ;   Label: LAB_00473dae
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00473daf
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00473db4
    MOV EBX,dword ptr [EBP + 0x14]      ; 00473db7
    PUSH EBX                            ; 00473dba
    MOV ESI,dword ptr [0x00622c18]      ; 00473dbb | g_CDemonSetPtr
    PUSH ESI                            ; 00473dc1 | g_CDemonSetInstance
    MOV EDI,0x40600000                  ; 00473dc2
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00473dc7
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EAX,0x3fc00000                  ; 00473dcc
    LEA ESI,[ESP + 0xd4]                ; 00473dd1
    ADD ESP,0x8                         ; 00473dd8
    XOR EDX,EDX                         ; 00473ddb
    MOV dword ptr [ESP + 0x150],EAX     ; 00473ddd
    LEA EAX,[ESP + 0xc0]                ; 00473de4
    MOV dword ptr [ESP + 0x154],EDI     ; 00473deb
    PUSH EAX                            ; 00473df2
    MOV dword ptr [ESP + 0xc4],EDX      ; 00473df3
    MOV dword ptr [ESP + 0xc8],EDX      ; 00473dfa
    PUSH EBX                            ; 00473e01
    MOV dword ptr [ESP + 0xd0],EDI      ; 00473e02
    LEA EDI,[ESP + 0x134]               ; 00473e09
    CALL core_actor.cpp_FUN_00408ac0    ; 00473e10
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0xd4]                ; 00473e15
    LEA EBX,[ESP + 0x134]               ; 00473e1c
    ADD ESP,0x8                         ; 00473e23
    LEA EAX,[ESP + 0xfc]                ; 00473e26
    MOVSD ES:EDI,ESI                    ; 00473e2d
    MOVSD ES:EDI,ESI                    ; 00473e2e
    MOVSD ES:EDI,ESI                    ; 00473e2f
    CMP EAX,EBX                         ; 00473e30
    JZ 0x00473e5e                       ; 00473e32
        ;   XREF to: 00473e5e (CONDITIONAL_JUMP)  ; LAB_00473e5e
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00473e34
    MOV dword ptr [ESP + 0xfc],EAX      ; 00473e3b
    MOV EAX,dword ptr [ESP + 0x130]     ; 00473e42
    MOV dword ptr [ESP + 0x100],EAX     ; 00473e49
    MOV EAX,dword ptr [ESP + 0x134]     ; 00473e50
    MOV dword ptr [ESP + 0x104],EAX     ; 00473e57
    MOV EDI,dword ptr [0x01b68818]      ; 00473e5e | DAT_01b68818
        ;   Label: LAB_00473e5e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473e64
    PUSH EDI                            ; 00473e67
    ADD EAX,0x158                       ; 00473e68
    LEA ESI,[ESP + 0xac]                ; 00473e6d
    PUSH EAX                            ; 00473e74
    LEA EBX,[ESP + 0x5c]                ; 00473e75
    LEA EDI,[ESP + 0x8c]                ; 00473e79
    CALL core_skeleton.cpp_FUN_00569040 ; 00473e80
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 00473e85
    LEA EAX,[ESP + 0x84]                ; 00473e88
    LEA ESI,[ESP + 0xa8]                ; 00473e8f
    PUSH EAX                            ; 00473e96
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473e97
    MOVSD ES:EDI,ESI                    ; 00473e9a
    MOVSD ES:EDI,ESI                    ; 00473e9b
    MOVSD ES:EDI,ESI                    ; 00473e9c
    PUSH EAX                            ; 00473e9d
    LEA ESI,[ESP + 0x140]               ; 00473e9e
    LEA EDI,[ESP + 0x68]                ; 00473ea5
    CALL core_actor.cpp_FUN_00408b40    ; 00473ea9
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x140]               ; 00473eae
    ADD ESP,0x8                         ; 00473eb5
    LEA EAX,[ESP + 0x60]                ; 00473eb8
    MOVSD ES:EDI,ESI                    ; 00473ebc
    MOVSD ES:EDI,ESI                    ; 00473ebd
    MOVSD ES:EDI,ESI                    ; 00473ebe
    CMP EBX,EAX                         ; 00473ebf
    JZ 0x00473edb                       ; 00473ec1
        ;   XREF to: 00473edb (CONDITIONAL_JUMP)  ; LAB_00473edb
    MOV EAX,dword ptr [ESP + 0x60]      ; 00473ec3
    MOV dword ptr [ESP + 0x54],EAX      ; 00473ec7
    MOV EAX,dword ptr [ESP + 0x64]      ; 00473ecb
    MOV dword ptr [ESP + 0x58],EAX      ; 00473ecf
    MOV EAX,dword ptr [ESP + 0x68]      ; 00473ed3
    MOV dword ptr [ESP + 0x5c],EAX      ; 00473ed7
    FLD float ptr [ESP + 0x54]          ; 00473edb
        ;   Label: LAB_00473edb
    FLD float ptr [ESP + 0x58]          ; 00473edf
    FLD float ptr [ESP + 0x5c]          ; 00473ee3
    LEA EDI,[ESP + 0x114]               ; 00473ee7
    LEA ESI,[ESP + 0x9c]                ; 00473eee
    LEA EAX,[ESP + 0x114]               ; 00473ef5
    LEA EBX,[ESP + 0xe4]                ; 00473efc
    FXCH ST2                            ; 00473f03
    FADD float ptr [ESP + 0xfc]         ; 00473f05
    FXCH                                ; 00473f0c
    FADD float ptr [ESP + 0x100]        ; 00473f0e
    FXCH ST2                            ; 00473f15
    FADD float ptr [ESP + 0x104]        ; 00473f17
    FXCH ST2                            ; 00473f1e
    FSTP float ptr [ESP + 0xa0]         ; 00473f20
    FXCH                                ; 00473f27
    FSTP float ptr [ESP + 0xa4]         ; 00473f29
    FSTP float ptr [ESP + 0x9c]         ; 00473f30
    MOVSD ES:EDI,ESI                    ; 00473f37
    MOVSD ES:EDI,ESI                    ; 00473f38
    MOVSD ES:EDI,ESI                    ; 00473f39
    CMP EBX,EAX                         ; 00473f3a
    JZ 0x00473f68                       ; 00473f3c
        ;   XREF to: 00473f68 (CONDITIONAL_JUMP)  ; LAB_00473f68
    MOV EAX,dword ptr [ESP + 0x114]     ; 00473f3e
    MOV dword ptr [ESP + 0xe4],EAX      ; 00473f45
    MOV EAX,dword ptr [ESP + 0x118]     ; 00473f4c
    MOV dword ptr [ESP + 0xe8],EAX      ; 00473f53
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00473f5a
    MOV dword ptr [ESP + 0xec],EAX      ; 00473f61
    LEA EAX,[ESP + 0xe4]                ; 00473f68
        ;   Label: LAB_00473f68
    PUSH EAX                            ; 00473f6f
    LEA EAX,[ESP + 0x58]                ; 00473f70
    PUSH EAX                            ; 00473f74
    MOV EDX,dword ptr [0x00622c18]      ; 00473f75 | g_CDemonSetPtr
    PUSH EDX                            ; 00473f7b | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 00473f7c
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x16c],EAX     ; 00473f81
    FLD float ptr [ESP + 0x16c]         ; 00473f88
    ADD ESP,0xc                         ; 00473f8f
    FLDZ                                ; 00473f92
    FXCH                                ; 00473f94
    FST float ptr [ESP + 0x24]          ; 00473f96
    FSTP double ptr [ESP + 0x8]         ; 00473f9a
    FCOMP double ptr [ESP + 0x8]        ; 00473f9e
    FNSTSW AX                           ; 00473fa2
    SAHF                                ; 00473fa4
    JA 0x00473fe9                       ; 00473fa5
        ;   XREF to: 00473fe9 (CONDITIONAL_JUMP)  ; LAB_00473fe9
    FLD1                                ; 00473fa7
    FCOMP double ptr [ESP + 0x8]        ; 00473fa9
    FNSTSW AX                           ; 00473fad
    SAHF                                ; 00473faf
    JBE 0x00473fe9                      ; 00473fb0
        ;   XREF to: 00473fe9 (CONDITIONAL_JUMP)  ; LAB_00473fe9
    FLD float ptr [ESP + 0x154]         ; 00473fb2
    FLD float ptr [ESP + 0x24]          ; 00473fb9
    FMUL ST1                            ; 00473fbd
    FLD float ptr [ESP + 0x150]         ; 00473fbf
    FXCH                                ; 00473fc6
    FSUB ST0,ST1                        ; 00473fc8
    FXCH ST2                            ; 00473fca
    FSUBRP                              ; 00473fcc
    FDIVP                               ; 00473fce
    FLD1                                ; 00473fd0
    FSUBRP                              ; 00473fd2
    FST float ptr [ESP + 0x24]          ; 00473fd4
    FCOMP float ptr [ESP + 0x20]        ; 00473fd8
    FNSTSW AX                           ; 00473fdc
    SAHF                                ; 00473fde
    JBE 0x00473fe9                      ; 00473fdf
        ;   XREF to: 00473fe9 (CONDITIONAL_JUMP)  ; LAB_00473fe9
    MOV EAX,dword ptr [ESP + 0x24]      ; 00473fe1
    MOV dword ptr [ESP + 0x20],EAX      ; 00473fe5
    MOV ECX,dword ptr [0x01b6881c]      ; 00473fe9 | DAT_01b6881c
        ;   Label: LAB_00473fe9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473fef
    PUSH ECX                            ; 00473ff2
    ADD EAX,0x158                       ; 00473ff3
    PUSH EAX                            ; 00473ff8
    LEA ESI,[ESP + 0x128]               ; 00473ff9
    LEA EDI,[ESP + 0xf8]                ; 00474000
    CALL core_skeleton.cpp_FUN_00569040 ; 00474007
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA ESI,[ESP + 0x128]               ; 0047400c
    ADD ESP,0x8                         ; 00474013
    LEA EAX,[ESP + 0xf0]                ; 00474016
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047401d
    PUSH EAX                            ; 00474020
    MOVSD ES:EDI,ESI                    ; 00474021
    MOVSD ES:EDI,ESI                    ; 00474022
    MOVSD ES:EDI,ESI                    ; 00474023
    PUSH EBX                            ; 00474024
    LEA ESI,[ESP + 0xbc]                ; 00474025
    LEA EDI,[ESP + 0xe0]                ; 0047402c
    CALL core_actor.cpp_FUN_00408b40    ; 00474033
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0xbc]                ; 00474038
    LEA EBX,[ESP + 0xe0]                ; 0047403f
    ADD ESP,0x8                         ; 00474046
    LEA EAX,[ESP + 0x54]                ; 00474049
    MOVSD ES:EDI,ESI                    ; 0047404d
    MOVSD ES:EDI,ESI                    ; 0047404e
    MOVSD ES:EDI,ESI                    ; 0047404f
    CMP EAX,EBX                         ; 00474050
    JZ 0x00474075                       ; 00474052
        ;   XREF to: 00474075 (CONDITIONAL_JUMP)  ; LAB_00474075
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00474054
    MOV dword ptr [ESP + 0x54],EAX      ; 0047405b
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0047405f
    MOV dword ptr [ESP + 0x58],EAX      ; 00474066
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0047406a
    MOV dword ptr [ESP + 0x5c],EAX      ; 00474071
    FLD float ptr [ESP + 0x54]          ; 00474075
        ;   Label: LAB_00474075
    FLD float ptr [ESP + 0x58]          ; 00474079
    FLD float ptr [ESP + 0x5c]          ; 0047407d
    LEA EDI,[ESP + 0x90]                ; 00474081
    LEA ESI,[ESP + 0x6c]                ; 00474088
    LEA EAX,[ESP + 0x90]                ; 0047408c
    LEA EBX,[ESP + 0xe4]                ; 00474093
    FXCH ST2                            ; 0047409a
    FADD float ptr [ESP + 0xfc]         ; 0047409c
    FXCH                                ; 004740a3
    FADD float ptr [ESP + 0x100]        ; 004740a5
    FXCH ST2                            ; 004740ac
    FADD float ptr [ESP + 0x104]        ; 004740ae
    FXCH ST2                            ; 004740b5
    FSTP float ptr [ESP + 0x70]         ; 004740b7
    FXCH                                ; 004740bb
    FSTP float ptr [ESP + 0x74]         ; 004740bd
    FSTP float ptr [ESP + 0x6c]         ; 004740c1
    MOVSD ES:EDI,ESI                    ; 004740c5
    MOVSD ES:EDI,ESI                    ; 004740c6
    MOVSD ES:EDI,ESI                    ; 004740c7
    CMP EBX,EAX                         ; 004740c8
    JZ 0x004740f6                       ; 004740ca
        ;   XREF to: 004740f6 (CONDITIONAL_JUMP)  ; LAB_004740f6
    MOV EAX,dword ptr [ESP + 0x90]      ; 004740cc
    MOV dword ptr [ESP + 0xe4],EAX      ; 004740d3
    MOV EAX,dword ptr [ESP + 0x94]      ; 004740da
    MOV dword ptr [ESP + 0xe8],EAX      ; 004740e1
    MOV EAX,dword ptr [ESP + 0x98]      ; 004740e8
    MOV dword ptr [ESP + 0xec],EAX      ; 004740ef
    LEA EAX,[ESP + 0xe4]                ; 004740f6
        ;   Label: LAB_004740f6
    PUSH EAX                            ; 004740fd
    LEA EAX,[ESP + 0x58]                ; 004740fe
    PUSH EAX                            ; 00474102
    MOV ESI,dword ptr [0x00622c18]      ; 00474103 | g_CDemonSetPtr
    PUSH ESI                            ; 00474109 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 0047410a
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x16c],EAX     ; 0047410f
    FLD float ptr [ESP + 0x16c]         ; 00474116
    ADD ESP,0xc                         ; 0047411d
    FLDZ                                ; 00474120
    FXCH                                ; 00474122
    FST float ptr [ESP + 0x18]          ; 00474124
    FSTP double ptr [ESP]               ; 00474128
    FCOMP double ptr [ESP]              ; 0047412b
    FNSTSW AX                           ; 0047412e
    SAHF                                ; 00474130
    JA 0x00474174                       ; 00474131
        ;   XREF to: 00474174 (CONDITIONAL_JUMP)  ; LAB_00474174
    FLD1                                ; 00474133
    FCOMP double ptr [ESP]              ; 00474135
    FNSTSW AX                           ; 00474138
    SAHF                                ; 0047413a
    JBE 0x00474174                      ; 0047413b
        ;   XREF to: 00474174 (CONDITIONAL_JUMP)  ; LAB_00474174
    FLD float ptr [ESP + 0x154]         ; 0047413d
    FLD float ptr [ESP + 0x18]          ; 00474144
    FMUL ST1                            ; 00474148
    FLD float ptr [ESP + 0x150]         ; 0047414a
    FXCH                                ; 00474151
    FSUB ST0,ST1                        ; 00474153
    FXCH ST2                            ; 00474155
    FSUBRP                              ; 00474157
    FDIVP                               ; 00474159
    FLD1                                ; 0047415b
    FSUBRP                              ; 0047415d
    FST float ptr [ESP + 0x18]          ; 0047415f
    FCOMP float ptr [ESP + 0x20]        ; 00474163
    FNSTSW AX                           ; 00474167
    SAHF                                ; 00474169
    JBE 0x00474174                      ; 0047416a
        ;   XREF to: 00474174 (CONDITIONAL_JUMP)  ; LAB_00474174
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047416c
    MOV dword ptr [ESP + 0x20],EAX      ; 00474170
    MOV EDI,dword ptr [0x00622c18]      ; 00474174 | g_CDemonSetPtr
        ;   Label: LAB_00474174
    PUSH EDI                            ; 0047417a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0047417b
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00474180
    FLD float ptr [ESP + 0x20]          ; 00474183
        ;   Label: LAB_00474183
    FLD1                                ; 00474187
    FCOMPP                              ; 00474189
    FNSTSW AX                           ; 0047418b
    SAHF                                ; 0047418d
    JNC 0x00474198                      ; 0047418e
        ;   XREF to: 00474198 (CONDITIONAL_JUMP)  ; LAB_00474198
    MOV dword ptr [ESP + 0x20],0x3f800000 ; 00474190
    MOV EAX,dword ptr [EBP + 0x14]      ; 00474198
        ;   Label: LAB_00474198
    FLD float ptr [ESP + 0x20]          ; 0047419b
    FSUB float ptr [EAX + 0x20060]      ; 0047419f
    FLDZ                                ; 004741a5
    FXCH                                ; 004741a7
    FST float ptr [ESP + 0x1c]          ; 004741a9
    FSTP double ptr [ESP + 0x10]        ; 004741ad
    FCOMP double ptr [ESP + 0x10]       ; 004741b1
    FNSTSW AX                           ; 004741b5
    SAHF                                ; 004741b7
    JBE 0x00474217                      ; 004741b8
        ;   XREF to: 00474217 (CONDITIONAL_JUMP)  ; LAB_00474217
    FLD1                                ; 004741ba
    FDIV float ptr [0x005fecb0]         ; 004741bc | DAT_005fecb0
    FLD float ptr [EBP + 0x18]          ; 004741c2
    FCHS                                ; 004741c5
    FXCH                                ; 004741c7
    FSTP float ptr [ESP + 0x144]        ; 004741c9
    FMUL float ptr [ESP + 0x144]        ; 004741d0
    FLD float ptr [ESP + 0x1c]          ; 004741d7
    FXCH                                ; 004741db
    FSTP float ptr [ESP + 0x14c]        ; 004741dd
    FCOMP float ptr [ESP + 0x14c]       ; 004741e4
    FNSTSW AX                           ; 004741eb
    SAHF                                ; 004741ed
    JC 0x0047420a                       ; 004741ee
        ;   XREF to: 0047420a (CONDITIONAL_JUMP)  ; LAB_0047420a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004741f0
        ;   Label: LAB_004741f0
    FLD float ptr [EAX + 0x20060]       ; 004741f3
    FADD float ptr [ESP + 0x1c]         ; 004741f9
    FSTP float ptr [EAX + 0x20060]      ; 004741fd
    MOV ESP,EBP                         ; 00474203
    POP EBP                             ; 00474205
    POP EDI                             ; 00474206
    POP ESI                             ; 00474207
    POP EBX                             ; 00474208
    RET                                 ; 00474209
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0047420a
        ;   Label: LAB_0047420a
    MOV dword ptr [ESP + 0x1c],EAX      ; 00474211
    JMP 0x004741f0                      ; 00474215
        ;   XREF to: 004741f0 (UNCONDITIONAL_JUMP)  ; LAB_004741f0
    JNC 0x004741f0                      ; 00474217
        ;   XREF to: 004741f0 (CONDITIONAL_JUMP)  ; LAB_004741f0
        ;   Label: LAB_00474217
    FLD float ptr [EBP + 0x18]          ; 00474219
    FDIV float ptr [0x005fecac]         ; 0047421c | DAT_005fecac
    FLD float ptr [ESP + 0x1c]          ; 00474222
    FXCH                                ; 00474226
    FSTP float ptr [ESP + 0x148]        ; 00474228
    FCOMP float ptr [ESP + 0x148]       ; 0047422f
    FNSTSW AX                           ; 00474236
    SAHF                                ; 00474238
    JBE 0x004741f0                      ; 00474239
        ;   XREF to: 004741f0 (CONDITIONAL_JUMP)  ; LAB_004741f0
    MOV EAX,dword ptr [ESP + 0x148]     ; 0047423b
    MOV dword ptr [ESP + 0x1c],EAX      ; 00474242
    JMP 0x004741f0                      ; 00474246
        ;   XREF to: 004741f0 (UNCONDITIONAL_JUMP)  ; LAB_004741f0

