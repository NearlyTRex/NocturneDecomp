; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_00538dd0(float *param_1,float *param_2,int param_3,ushort *param_4,int param_5,int param_6,int *param_7)
;
; Local Variables:
; undefined        Stack[-0x178]:1  local_178
; undefined        Stack[-0x16c]:1  local_16c
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined        Stack[-0x154]:1  local_154
; undefined        Stack[-0x148]:1  local_148
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined        Stack[-0x130]:1  local_130
; undefined        Stack[-0x124]:1  local_124
; undefined4       Stack[-0x118]:4  local_118
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
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[8]:
;   FUN_00414a60 at 00414ab4
;   FUN_0043f460 at 0043f53c
;   FUN_00448060 at 004481e4
;   FUN_00460fa0 at 00461007
;   FUN_004ca5a0 at 004ca6f3
;   FUN_004ca770 at 004ca8bf
;   FUN_004fa490 at 004fa69f
;   FUN_00548bd0 at 00548bfd
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005d071e
;   TerminatedCString s_CDemonSet_lightVerticies_005d072e
;   TerminatedCString s_core_set_cpp_005d0783
;   TerminatedCString s_Too_many_normals_on_this_005d0793
;   TerminatedCString s_core_set_cpp_005d07bc
;   TerminatedCString s_Need_more_normals_for_pa_005d07cc
;   undefined4 DAT_005d07f7
;   undefined4 DAT_005d07ff
;   undefined4 DAT_005f2afc
;   undefined4 DAT_0060b014
;   undefined4 DAT_0060b018
;   undefined4 DAT_0060b01c
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   ... and 44 more
;
; Called Functions:
;   FUN_0046d540
;   FUN_004e4330
;   FUN_005380a0
;   FUN_00538ba0
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538dd0
        ;   Label: FUN_00538dd0
    PUSH ESI                            ; 00538dd1
    PUSH EDI                            ; 00538dd2
    PUSH EBP                            ; 00538dd3
    MOV EBP,ESP                         ; 00538dd4
    SUB ESP,0x164                       ; 00538dd6
    AND ESP,0xfffffff8                  ; 00538ddc
    MOV EDX,dword ptr [EBP + 0x18]      ; 00538ddf
    CMP EDX,0x61a8                      ; 00538de2
    JLE 0x00538e13                      ; 00538de8
        ;   XREF to: 00538e13 (CONDITIONAL_JUMP)  ; LAB_00538e13
    PUSH 0x61a8                         ; 00538dea
    PUSH EDX                            ; 00538def
    MOV ECX,0x5d071e                    ; 00538df0 | = "..\\core\\set.cpp"
    MOV EBX,0xefd                       ; 00538df5
    PUSH 0x5d072e                       ; 00538dfa | = "CDemonSet::lightVerticies - tried to ..."
    MOV dword ptr [0x01d71de0],ECX      ; 00538dff | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00538e05 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00538e0b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0xc                         ; 00538e10
    MOV EDI,dword ptr [0x005f2afc]      ; 00538e13 | DAT_005f2afc
        ;   Label: LAB_00538e13
    PUSH EDI                            ; 00538e19 | DAT_01bdd7e4
    CALL FUN_0046d540                   ; 00538e1a
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 00538e1f
    TEST EAX,EAX                        ; 00538e22
    JNZ 0x00538e90                      ; 00538e24
        ;   XREF to: 00538e90 (CONDITIONAL_JUMP)  ; LAB_00538e90
    MOV EDX,dword ptr [EBP + 0x18]      ; 00538e2a
    LEA EDI,[EDX*0x4 + 0x0]             ; 00538e2d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00538e34
    SUB EDI,EDX                         ; 00538e37
    MOV EDX,dword ptr [EAX + 0x15ac90]  ; 00538e39
    SHL EDI,0x4                         ; 00538e3f
    TEST EDX,EDX                        ; 00538e42
    JZ 0x00538f88                       ; 00538e44
        ;   XREF to: 00538f88 (CONDITIONAL_JUMP)  ; LAB_00538f88
    CMP dword ptr [0x0207baa4],0x0      ; 00538e4a | DAT_0207baa4
    JZ 0x00538e97                       ; 00538e51
        ;   XREF to: 00538e97 (CONDITIONAL_JUMP)  ; LAB_00538e97
    CMP dword ptr [EBP + 0x18],0x0      ; 00538e53
    JLE 0x00538e80                      ; 00538e57
        ;   XREF to: 00538e80 (CONDITIONAL_JUMP)  ; LAB_00538e80
    MOV EDX,EDI                         ; 00538e59
    XOR EAX,EAX                         ; 00538e5b
    ADD EAX,0x30                        ; 00538e5d
        ;   Label: LAB_00538e5d
    XOR EBX,EBX                         ; 00538e60
    MOV dword ptr [EAX + 0x60b004],EBX  ; 00538e62 | DAT_0060b034 | DAT_0060b064
    MOV dword ptr [EAX + 0x60b008],EBX  ; 00538e68 | DAT_0060b038 | DAT_0060b068
    MOV dword ptr [EAX + 0x60b00c],EBX  ; 00538e6e | DAT_0060b03c | DAT_0060b06c
    MOV dword ptr [EAX + 0x60b010],EBX  ; 00538e74 | DAT_0060b040 | DAT_0060b070
    CMP EAX,EDX                         ; 00538e7a
    JL 0x00538e5d                       ; 00538e7c
        ;   XREF to: 00538e5d (CONDITIONAL_JUMP)  ; LAB_00538e5d
    MOV EAX,EAX                         ; 00538e7e
    XOR EBX,EBX                         ; 00538e80
        ;   Label: LAB_00538e80
    MOV dword ptr [0x01c6e24c],EBX      ; 00538e82 | DAT_01c6e24c
    LEA EAX,[EAX]                       ; 00538e88
    MOV EDX,EDX                         ; 00538e8e
    MOV ESP,EBP                         ; 00538e90
        ;   Label: LAB_00538e90
    POP EBP                             ; 00538e92
    POP EDI                             ; 00538e93
    POP ESI                             ; 00538e94
    POP EBX                             ; 00538e95
    RET                                 ; 00538e96
    MOV EAX,dword ptr [EBP + 0x14]      ; 00538e97
        ;   Label: LAB_00538e97
    MOV EDX,dword ptr [EAX + 0x15ac90]  ; 00538e9a
    CMP EDX,0x2                         ; 00538ea0
    JNZ 0x00538eef                      ; 00538ea3
        ;   XREF to: 00538eef (CONDITIONAL_JUMP)  ; LAB_00538eef
    MOV EDI,dword ptr [EBP + 0x18]      ; 00538ea5
    XOR EBX,EBX                         ; 00538ea8
    TEST EDI,EDI                        ; 00538eaa
    JLE 0x00538ee0                      ; 00538eac
        ;   XREF to: 00538ee0 (CONDITIONAL_JUMP)  ; LAB_00538ee0
    MOV ESI,dword ptr [EBP + 0x24]      ; 00538eae
    XOR EDI,EDI                         ; 00538eb1
    PUSH 0x1                            ; 00538eb3
        ;   Label: LAB_00538eb3
    PUSH EBX                            ; 00538eb5
    XOR ECX,ECX                         ; 00538eb6
    PUSH ECX                            ; 00538eb8
    PUSH ESI                            ; 00538eb9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00538eba
    ADD EDI,0x30                        ; 00538ebd
    PUSH EAX                            ; 00538ec0
    MOV dword ptr [EDI + 0x60b010],ECX  ; 00538ec1 | DAT_0060b040 | DAT_0060b070
    CALL FUN_005380a0                   ; 00538ec7
        ;   XREF to: 005380a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005380a0()
    ADD ESP,0x14                        ; 00538ecc
    INC EBX                             ; 00538ecf
    MOV EDX,dword ptr [EBP + 0x18]      ; 00538ed0
    ADD ESI,0xc                         ; 00538ed3
    CMP EBX,EDX                         ; 00538ed6
    JL 0x00538eb3                       ; 00538ed8
        ;   XREF to: 00538eb3 (CONDITIONAL_JUMP)  ; LAB_00538eb3
    LEA EAX,[EAX]                       ; 00538eda
    XOR ECX,ECX                         ; 00538ee0
        ;   Label: LAB_00538ee0
    MOV dword ptr [0x01c6e24c],ECX      ; 00538ee2 | DAT_01c6e24c
    MOV ESP,EBP                         ; 00538ee8
    POP EBP                             ; 00538eea
    POP EDI                             ; 00538eeb
    POP ESI                             ; 00538eec
    POP EBX                             ; 00538eed
    RET                                 ; 00538eee
    CMP EDX,0x3                         ; 00538eef
        ;   Label: LAB_00538eef
    JNZ 0x00538f49                      ; 00538ef2
        ;   XREF to: 00538f49 (CONDITIONAL_JUMP)  ; LAB_00538f49
    CMP dword ptr [EBP + 0x18],0x0      ; 00538ef4
    JLE 0x00538ee0                      ; 00538ef8
        ;   XREF to: 00538ee0 (CONDITIONAL_JUMP)  ; LAB_00538ee0
    MOV ECX,EDI                         ; 00538efa
    XOR EAX,EAX                         ; 00538efc
    MOV EDX,dword ptr [EBP + 0x14]      ; 00538efe
        ;   Label: LAB_00538efe
    MOV EDX,dword ptr [EDX + 0x15ae9c]  ; 00538f01
    MOV dword ptr [EAX + 0x60b034],EDX  ; 00538f07 | DAT_0060b034 | DAT_0060b064
    MOV EDX,dword ptr [EBP + 0x14]      ; 00538f0d
    MOV EDX,dword ptr [EDX + 0x15aea0]  ; 00538f10
    MOV dword ptr [EAX + 0x60b038],EDX  ; 00538f16 | DAT_0060b038 | DAT_0060b068
    MOV EDX,dword ptr [EBP + 0x14]      ; 00538f1c
    ADD EAX,0x30                        ; 00538f1f
    MOV EDX,dword ptr [EDX + 0x15aea4]  ; 00538f22
    MOV dword ptr [EAX + 0x60b00c],EDX  ; 00538f28 | DAT_0060b03c | DAT_0060b06c
    XOR EDX,EDX                         ; 00538f2e
    MOV dword ptr [EAX + 0x60b010],EDX  ; 00538f30 | DAT_0060b040 | DAT_0060b070
    CMP EAX,ECX                         ; 00538f36
    JL 0x00538efe                       ; 00538f38
        ;   XREF to: 00538efe (CONDITIONAL_JUMP)  ; LAB_00538efe
    XOR ECX,ECX                         ; 00538f3a
    MOV dword ptr [0x01c6e24c],ECX      ; 00538f3c | DAT_01c6e24c
    MOV ESP,EBP                         ; 00538f42
    POP EBP                             ; 00538f44
    POP EDI                             ; 00538f45
    POP ESI                             ; 00538f46
    POP EBX                             ; 00538f47
    RET                                 ; 00538f48
    CMP dword ptr [EBP + 0x18],0x0      ; 00538f49
        ;   Label: LAB_00538f49
    JLE 0x00538ee0                      ; 00538f4d
        ;   XREF to: 00538ee0 (CONDITIONAL_JUMP)  ; LAB_00538ee0
    MOV ECX,0xffff                      ; 00538f4f
    MOV EDX,EDI                         ; 00538f54
    XOR EAX,EAX                         ; 00538f56
    ADD EAX,0x30                        ; 00538f58
        ;   Label: LAB_00538f58
    MOV dword ptr [EAX + 0x60b004],ECX  ; 00538f5b | DAT_0060b034 | DAT_0060b064
    MOV dword ptr [EAX + 0x60b008],ECX  ; 00538f61 | DAT_0060b038 | DAT_0060b068
    XOR EDI,EDI                         ; 00538f67
    MOV dword ptr [EAX + 0x60b00c],ECX  ; 00538f69 | DAT_0060b03c | DAT_0060b06c
    MOV dword ptr [EAX + 0x60b010],EDI  ; 00538f6f | DAT_0060b040 | DAT_0060b070
    CMP EAX,EDX                         ; 00538f75
    JL 0x00538f58                       ; 00538f77
        ;   XREF to: 00538f58 (CONDITIONAL_JUMP)  ; LAB_00538f58
    XOR ECX,ECX                         ; 00538f79
    MOV dword ptr [0x01c6e24c],ECX      ; 00538f7b | DAT_01c6e24c
    MOV ESP,EBP                         ; 00538f81
    POP EBP                             ; 00538f83
    POP EDI                             ; 00538f84
    POP ESI                             ; 00538f85
    POP EBX                             ; 00538f86
    RET                                 ; 00538f87
    MOV ECX,dword ptr [EAX + 0x161670]  ; 00538f88
        ;   Label: LAB_00538f88
    TEST ECX,ECX                        ; 00538f8e
    JZ 0x00538fdb                       ; 00538f90
        ;   XREF to: 00538fdb (CONDITIONAL_JUMP)  ; LAB_00538fdb
    CMP dword ptr [EBP + 0x18],0x0      ; 00538f92
    JLE 0x00538e90                      ; 00538f96
        ;   XREF to: 00538e90 (CONDITIONAL_JUMP)  ; LAB_00538e90
    MOV ECX,EDI                         ; 00538f9c
    XOR EAX,EAX                         ; 00538f9e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00538fa0
        ;   Label: LAB_00538fa0
    MOV EDX,dword ptr [EDX + 0x161674]  ; 00538fa3
    MOV dword ptr [EAX + 0x60b034],EDX  ; 00538fa9 | DAT_0060b034 | DAT_0060b064
    MOV EDX,dword ptr [EBP + 0x14]      ; 00538faf
    MOV EDX,dword ptr [EDX + 0x161678]  ; 00538fb2
    MOV dword ptr [EAX + 0x60b038],EDX  ; 00538fb8 | DAT_0060b038 | DAT_0060b068
    MOV EDX,dword ptr [EBP + 0x14]      ; 00538fbe
    ADD EAX,0x30                        ; 00538fc1
    MOV EDX,dword ptr [EDX + 0x16167c]  ; 00538fc4
    MOV dword ptr [EAX + 0x60b00c],EDX  ; 00538fca | DAT_0060b03c | DAT_0060b06c
    CMP EAX,ECX                         ; 00538fd0
    JL 0x00538fa0                       ; 00538fd2
        ;   XREF to: 00538fa0 (CONDITIONAL_JUMP)  ; LAB_00538fa0
    MOV ESP,EBP                         ; 00538fd4
    POP EBP                             ; 00538fd6
    POP EDI                             ; 00538fd7
    POP ESI                             ; 00538fd8
    POP EBX                             ; 00538fd9
    RET                                 ; 00538fda
    MOV EBX,dword ptr [EAX + 0x15ac98]  ; 00538fdb
        ;   Label: LAB_00538fdb
    TEST EBX,EBX                        ; 00538fe1
    JZ 0x0053908f                       ; 00538fe3
        ;   XREF to: 0053908f (CONDITIONAL_JUMP)  ; LAB_0053908f
    MOV EBX,dword ptr [EBP + 0x18]      ; 00538fe9
    MOV dword ptr [ESP + 0x13c],EDX     ; 00538fec
    TEST EBX,EBX                        ; 00538ff3
    JLE 0x00538e90                      ; 00538ff5
        ;   XREF to: 00538e90 (CONDITIONAL_JUMP)  ; LAB_00538e90
    XOR EBX,EBX                         ; 00538ffb
    MOV EAX,dword ptr [EBX + 0x60b014]  ; 00538ffd | DAT_0060b014 | DAT_0060b044
        ;   Label: LAB_00538ffd
    MOV dword ptr [ESP + 0x84],EAX      ; 00539003
    MOV EAX,dword ptr [EBX + 0x60b018]  ; 0053900a | DAT_0060b018 | DAT_0060b048
    MOV dword ptr [ESP + 0x88],EAX      ; 00539010
    MOV EAX,dword ptr [EBX + 0x60b01c]  ; 00539017 | DAT_0060b01c | DAT_0060b04c
    MOV dword ptr [ESP + 0x8c],EAX      ; 0053901d
    LEA EAX,[ESP + 0x84]                ; 00539024
    PUSH EAX                            ; 0053902b
    LEA ESI,[ESP + 0x58]                ; 0053902c
    CALL FUN_00538ba0                   ; 00539030
        ;   XREF to: 00538ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_00538ba0()
    ADD ESP,0x4                         ; 00539035
    PUSH 0x0                            ; 00539038
    MOV ECX,dword ptr [ESP + 0x140]     ; 0053903a
    LEA EDI,[ESP + 0x10]                ; 00539041
    PUSH ECX                            ; 00539045
    LEA ESI,[ESP + 0x5c]                ; 00539046
    LEA EAX,[ESP + 0x14]                ; 0053904a
    PUSH 0x0                            ; 0053904e
    MOVSD ES:EDI,ESI                    ; 00539050
    MOVSD ES:EDI,ESI                    ; 00539051
    MOVSD ES:EDI,ESI                    ; 00539052
    PUSH EAX                            ; 00539053
    MOV ESI,dword ptr [EBP + 0x14]      ; 00539054
    PUSH ESI                            ; 00539057
    ADD EBX,0x30                        ; 00539058
    CALL FUN_005380a0                   ; 0053905b
        ;   XREF to: 005380a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005380a0()
    ADD ESP,0x14                        ; 00539060
    MOV EAX,[0x01c6e24c]                ; 00539063 | DAT_01c6e24c
    MOV EDI,dword ptr [ESP + 0x13c]     ; 00539068
    MOV EDX,dword ptr [EBP + 0x18]      ; 0053906f
    INC EDI                             ; 00539072
    MOV dword ptr [EBX + 0x60b010],EAX  ; 00539073 | DAT_0060b040
    MOV dword ptr [ESP + 0x13c],EDI     ; 00539079
    CMP EDI,EDX                         ; 00539080
    JL 0x00538ffd                       ; 00539082
        ;   XREF to: 00538ffd (CONDITIONAL_JUMP)  ; LAB_00538ffd
    MOV ESP,EBP                         ; 00539088
    POP EBP                             ; 0053908a
    POP EDI                             ; 0053908b
    POP ESI                             ; 0053908c
    POP EBX                             ; 0053908d
    RET                                 ; 0053908e
    CMP dword ptr [EBP + 0x2c],0x0      ; 0053908f
        ;   Label: LAB_0053908f
    JZ 0x00539349                       ; 00539093
        ;   XREF to: 00539349 (CONDITIONAL_JUMP)  ; LAB_00539349
    CMP dword ptr [EAX + 0x15ae84],0x0  ; 00539099
    JZ 0x00539130                       ; 005390a0
        ;   XREF to: 00539130 (CONDITIONAL_JUMP)  ; LAB_00539130
    MOV EDX,dword ptr [EBP + 0x18]      ; 005390a6
    XOR EAX,EAX                         ; 005390a9
    TEST EDX,EDX                        ; 005390ab
    JLE 0x005390d0                      ; 005390ad
        ;   XREF to: 005390d0 (CONDITIONAL_JUMP)  ; LAB_005390d0
    MOV ECX,dword ptr [EBP + 0x2c]      ; 005390af
    IMUL ESI,EAX,0xc                    ; 005390b2
        ;   Label: LAB_005390b2
    LEA EDI,[ESI + 0x20d4f70]           ; 005390b5
    MOV ESI,ECX                         ; 005390bb
    MOVSD ES:EDI,ESI                    ; 005390bd | DAT_020d4f7c
    MOVSD ES:EDI,ESI                    ; 005390be | DAT_020d4f80
    MOVSD ES:EDI,ESI                    ; 005390bf | DAT_020d4f84
    INC EAX                             ; 005390c0
    MOV EDI,dword ptr [EBP + 0x18]      ; 005390c1
    ADD ECX,0xc                         ; 005390c4
    CMP EAX,EDI                         ; 005390c7
    JL 0x005390b2                       ; 005390c9
        ;   XREF to: 005390b2 (CONDITIONAL_JUMP)  ; LAB_005390b2
    LEA EAX,[EAX]                       ; 005390cb
    MOV ECX,ECX                         ; 005390ce
    MOV EAX,dword ptr [EBP + 0x18]      ; 005390d0
        ;   Label: LAB_005390d0
    XOR EBX,EBX                         ; 005390d3
    TEST EAX,EAX                        ; 005390d5
    JLE 0x00538e90                      ; 005390d7
        ;   XREF to: 00538e90 (CONDITIONAL_JUMP)  ; LAB_00538e90
    MOV ESI,0x208bb90                   ; 005390dd
    MOV EDI,0x20d4f70                   ; 005390e2
    MOV dword ptr [ESP + 0x114],EBX     ; 005390e7
    PUSH 0x0                            ; 005390ee
        ;   Label: LAB_005390ee
    PUSH EBX                            ; 005390f0
    PUSH EDI                            ; 005390f1
    PUSH ESI                            ; 005390f2
    MOV EDX,dword ptr [EBP + 0x14]      ; 005390f3
    PUSH EDX                            ; 005390f6
    INC EBX                             ; 005390f7
    ADD EDI,0xc                         ; 005390f8
    CALL FUN_005380a0                   ; 005390fb
        ;   XREF to: 005380a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005380a0()
    ADD ESP,0x14                        ; 00539100
    ADD ESI,0xc                         ; 00539103
    MOV EDX,dword ptr [ESP + 0x114]     ; 00539106
    MOV EAX,[0x01c6e24c]                ; 0053910d | DAT_01c6e24c
    LEA ECX,[EDX + 0x30]                ; 00539112
    MOV dword ptr [EDX + 0x60b040],EAX  ; 00539115 | DAT_0060b040
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053911b
    MOV dword ptr [ESP + 0x114],ECX     ; 0053911e
    CMP EBX,EAX                         ; 00539125
    JL 0x005390ee                       ; 00539127
        ;   XREF to: 005390ee (CONDITIONAL_JUMP)  ; LAB_005390ee
    MOV ESP,EBP                         ; 00539129
    POP EBP                             ; 0053912b
    POP EDI                             ; 0053912c
    POP ESI                             ; 0053912d
    POP EBX                             ; 0053912e
    RET                                 ; 0053912f
    CMP dword ptr [EBP + 0x18],0x0      ; 00539130
        ;   Label: LAB_00539130
    JLE 0x005391b0                      ; 00539134
        ;   XREF to: 005391b0 (CONDITIONAL_JUMP)  ; LAB_005391b0
    MOV dword ptr [ESP + 0x108],EDI     ; 0053913a
    MOV dword ptr [ESP + 0x128],EDX     ; 00539141
    MOV EAX,dword ptr [EBX + 0x60b014]  ; 00539148 | DAT_0060b014 | DAT_0060b044
        ;   Label: LAB_00539148
    MOV dword ptr [ESP + 0x18],EAX      ; 0053914e
    MOV EAX,dword ptr [EBX + 0x60b018]  ; 00539152 | DAT_0060b018 | DAT_0060b048
    MOV dword ptr [ESP + 0x1c],EAX      ; 00539158
    MOV EAX,dword ptr [EBX + 0x60b01c]  ; 0053915c | DAT_0060b01c | DAT_0060b04c
    MOV dword ptr [ESP + 0x20],EAX      ; 00539162
    LEA EAX,[ESP + 0x18]                ; 00539166
    PUSH EAX                            ; 0053916a
    LEA ESI,[ESP + 0x4]                 ; 0053916b
    CALL FUN_00538ba0                   ; 0053916f
        ;   XREF to: 00538ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_00538ba0()
    ADD ESP,0x4                         ; 00539174
    MOV EDI,dword ptr [ESP + 0x128]     ; 00539177
    MOV ESI,ESP                         ; 0053917e
    LEA EDI,[EDI + 0x208bb90]           ; 00539180
    MOVSD ES:EDI,ESI                    ; 00539186
    MOVSD ES:EDI,ESI                    ; 00539187
    MOVSD ES:EDI,ESI                    ; 00539188
    MOV ESI,dword ptr [ESP + 0x128]     ; 00539189
    ADD EBX,0x30                        ; 00539190
    ADD ESI,0xc                         ; 00539193
    MOV EDI,dword ptr [ESP + 0x108]     ; 00539196
    MOV dword ptr [ESP + 0x128],ESI     ; 0053919d
    CMP EBX,EDI                         ; 005391a4
    JL 0x00539148                       ; 005391a6
        ;   XREF to: 00539148 (CONDITIONAL_JUMP)  ; LAB_00539148
    LEA EAX,[EAX]                       ; 005391a8
    MOV EDX,EDX                         ; 005391ae
    MOV EAX,dword ptr [EBP + 0x18]      ; 005391b0
        ;   Label: LAB_005391b0
    XOR EBX,EBX                         ; 005391b3
    TEST EAX,EAX                        ; 005391b5
    JLE 0x005390d0                      ; 005391b7
        ;   XREF to: 005390d0 (CONDITIONAL_JUMP)  ; LAB_005390d0
    MOV ECX,dword ptr [EBP + 0x2c]      ; 005391bd
    IMUL EDI,EBX,0xc                    ; 005391c0
        ;   Label: LAB_005391c0
    MOV EAX,[0x01c6e2fc]                ; 005391c3 | DAT_01c6e2fc
    MOV EDX,dword ptr [ECX]             ; 005391c8
    IMUL EDX                            ; 005391ca
    SHRD EAX,EDX,0x10                   ; 005391cc
    MOV ESI,EAX                         ; 005391d0
    MOV EDX,dword ptr [ECX + 0x4]       ; 005391d2
    MOV EAX,[0x01c6e308]                ; 005391d5 | DAT_01c6e308
    IMUL EDX                            ; 005391da
    SHRD EAX,EDX,0x10                   ; 005391dc
    MOV EDX,dword ptr [ECX + 0x8]       ; 005391e0
    ADD ESI,EAX                         ; 005391e3
    MOV EAX,[0x01c6e314]                ; 005391e5 | DAT_01c6e314
    IMUL EDX                            ; 005391ea
    SHRD EAX,EDX,0x10                   ; 005391ec
    MOV EDX,dword ptr [ECX]             ; 005391f0
    ADD ESI,EAX                         ; 005391f2
    MOV EAX,[0x01c6e300]                ; 005391f4 | DAT_01c6e300
    MOV dword ptr [ESP + 0x9c],ESI      ; 005391f9
    IMUL EDX                            ; 00539200
    SHRD EAX,EDX,0x10                   ; 00539202
    MOV ESI,EAX                         ; 00539206
    MOV EDX,dword ptr [ECX + 0x4]       ; 00539208
    MOV EAX,[0x01c6e30c]                ; 0053920b | DAT_01c6e30c
    IMUL EDX                            ; 00539210
    SHRD EAX,EDX,0x10                   ; 00539212
    MOV EDX,dword ptr [ECX + 0x8]       ; 00539216
    ADD ESI,EAX                         ; 00539219
    MOV EAX,[0x01c6e318]                ; 0053921b | DAT_01c6e318
    IMUL EDX                            ; 00539220
    SHRD EAX,EDX,0x10                   ; 00539222
    MOV EDX,dword ptr [ECX]             ; 00539226
    ADD ESI,EAX                         ; 00539228
    MOV EAX,[0x01c6e304]                ; 0053922a | DAT_01c6e304
    MOV dword ptr [ESP + 0xa0],ESI      ; 0053922f
    IMUL EDX                            ; 00539236
    SHRD EAX,EDX,0x10                   ; 00539238
    MOV ESI,EAX                         ; 0053923c
    MOV EDX,dword ptr [ECX + 0x4]       ; 0053923e
    MOV EAX,[0x01c6e310]                ; 00539241 | DAT_01c6e310
    IMUL EDX                            ; 00539246
    SHRD EAX,EDX,0x10                   ; 00539248
    MOV EDX,dword ptr [ECX + 0x8]       ; 0053924c
    ADD ESI,EAX                         ; 0053924f
    MOV EAX,[0x01c6e31c]                ; 00539251 | DAT_01c6e31c
    IMUL EDX                            ; 00539256
    SHRD EAX,EDX,0x10                   ; 00539258
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0053925c
    ADD ESI,EAX                         ; 00539263
    MOV EAX,[0x01d72644]                ; 00539265 | DAT_01d72644
    MOV dword ptr [ESP + 0xa4],ESI      ; 0053926a
    IMUL EDX                            ; 00539271
    SHRD EAX,EDX,0x10                   ; 00539273
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00539277
    MOV ESI,EAX                         ; 0053927e
    MOV EAX,[0x01d72650]                ; 00539280 | DAT_01d72650
    IMUL EDX                            ; 00539285
    SHRD EAX,EDX,0x10                   ; 00539287
    MOV EDX,dword ptr [ESP + 0xa4]      ; 0053928b
    ADD ESI,EAX                         ; 00539292
    MOV EAX,[0x01d7265c]                ; 00539294 | DAT_01d7265c
    IMUL EDX                            ; 00539299
    SHRD EAX,EDX,0x10                   ; 0053929b
    ADD ESI,EAX                         ; 0053929f
    MOV dword ptr [ESP + 0x78],ESI      ; 005392a1
    MOV EDX,dword ptr [ESP + 0x9c]      ; 005392a5
    MOV EAX,[0x01d72648]                ; 005392ac | DAT_01d72648
    IMUL EDX                            ; 005392b1
    SHRD EAX,EDX,0x10                   ; 005392b3
    MOV EDX,dword ptr [ESP + 0xa0]      ; 005392b7
    MOV ESI,EAX                         ; 005392be
    MOV EAX,[0x01d72654]                ; 005392c0 | DAT_01d72654
    IMUL EDX                            ; 005392c5
    SHRD EAX,EDX,0x10                   ; 005392c7
    MOV EDX,dword ptr [ESP + 0xa4]      ; 005392cb
    ADD ESI,EAX                         ; 005392d2
    MOV EAX,[0x01d72660]                ; 005392d4 | DAT_01d72660
    IMUL EDX                            ; 005392d9
    SHRD EAX,EDX,0x10                   ; 005392db
    MOV EDX,dword ptr [ESP + 0x9c]      ; 005392df
    ADD ESI,EAX                         ; 005392e6
    MOV EAX,[0x01d7264c]                ; 005392e8 | DAT_01d7264c
    MOV dword ptr [ESP + 0x7c],ESI      ; 005392ed
    IMUL EDX                            ; 005392f1
    SHRD EAX,EDX,0x10                   ; 005392f3
    MOV EDX,dword ptr [ESP + 0xa0]      ; 005392f7
    MOV ESI,EAX                         ; 005392fe
    MOV EAX,[0x01d72658]                ; 00539300 | DAT_01d72658
    IMUL EDX                            ; 00539305
    SHRD EAX,EDX,0x10                   ; 00539307
    MOV EDX,dword ptr [ESP + 0xa4]      ; 0053930b
    ADD ESI,EAX                         ; 00539312
    MOV EAX,[0x01d72664]                ; 00539314 | DAT_01d72664
    IMUL EDX                            ; 00539319
    SHRD EAX,EDX,0x10                   ; 0053931b
    ADD ESI,EAX                         ; 0053931f
    LEA EDI,[EDI + 0x20d4f70]           ; 00539321
    MOV dword ptr [ESP + 0x80],ESI      ; 00539327
    LEA ESI,[ESP + 0x78]                ; 0053932e
    MOVSD ES:EDI,ESI                    ; 00539332
    MOVSD ES:EDI,ESI                    ; 00539333
    MOVSD ES:EDI,ESI                    ; 00539334
    INC EBX                             ; 00539335
    MOV ESI,dword ptr [EBP + 0x18]      ; 00539336
    ADD ECX,0xc                         ; 00539339
    CMP EBX,ESI                         ; 0053933c
    JGE 0x005390d0                      ; 0053933e
        ;   XREF to: 005390d0 (CONDITIONAL_JUMP)  ; LAB_005390d0
    JMP 0x005391c0                      ; 00539344
        ;   XREF to: 005391c0 (UNCONDITIONAL_JUMP)  ; LAB_005391c0
    CMP dword ptr [EBP + 0x1c],0x0      ; 00539349
        ;   Label: LAB_00539349
    JNZ 0x005393e4                      ; 0053934d
        ;   XREF to: 005393e4 (CONDITIONAL_JUMP)  ; LAB_005393e4
    MOV EBX,dword ptr [EBP + 0x18]      ; 00539353
    MOV dword ptr [ESP + 0x138],EDX     ; 00539356
    TEST EBX,EBX                        ; 0053935d
    JLE 0x00538e90                      ; 0053935f
        ;   XREF to: 00538e90 (CONDITIONAL_JUMP)  ; LAB_00538e90
    XOR EBX,EBX                         ; 00539365
    MOV EAX,dword ptr [EBX + 0x60b014]  ; 00539367 | DAT_0060b014 | DAT_0060b044
        ;   Label: LAB_00539367
    MOV dword ptr [ESP + 0x3c],EAX      ; 0053936d
    MOV EAX,dword ptr [EBX + 0x60b018]  ; 00539371 | DAT_0060b018 | DAT_0060b048
    MOV dword ptr [ESP + 0x40],EAX      ; 00539377
    MOV EAX,dword ptr [EBX + 0x60b01c]  ; 0053937b | DAT_0060b01c | DAT_0060b04c
    MOV dword ptr [ESP + 0x44],EAX      ; 00539381
    LEA EAX,[ESP + 0x3c]                ; 00539385
    PUSH EAX                            ; 00539389
    LEA ESI,[ESP + 0x34]                ; 0053938a
    LEA EDI,[ESP + 0x28]                ; 0053938e
    CALL FUN_00538ba0                   ; 00539392
        ;   XREF to: 00538ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_00538ba0()
    LEA ESI,[ESP + 0x34]                ; 00539397
    ADD ESP,0x4                         ; 0053939b
    MOVSD ES:EDI,ESI                    ; 0053939e
    MOVSD ES:EDI,ESI                    ; 0053939f
    MOVSD ES:EDI,ESI                    ; 005393a0
    PUSH 0x0                            ; 005393a1
    MOV EDI,dword ptr [ESP + 0x13c]     ; 005393a3
    PUSH EDI                            ; 005393aa
    PUSH 0x0                            ; 005393ab
    LEA EAX,[ESP + 0x30]                ; 005393ad
    PUSH EAX                            ; 005393b1
    MOV EAX,dword ptr [EBP + 0x14]      ; 005393b2
    PUSH EAX                            ; 005393b5
    ADD EBX,0x30                        ; 005393b6
    CALL FUN_005380a0                   ; 005393b9
        ;   XREF to: 005380a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005380a0()
    MOV EAX,[0x01c6e24c]                ; 005393be | DAT_01c6e24c
    ADD ESP,0x14                        ; 005393c3
    LEA EDX,[EDI + 0x1]                 ; 005393c6
    MOV ECX,dword ptr [EBP + 0x18]      ; 005393c9
    MOV dword ptr [ESP + 0x138],EDX     ; 005393cc
    MOV dword ptr [EBX + 0x60b010],EAX  ; 005393d3 | DAT_0060b040
    CMP EDX,ECX                         ; 005393d9
    JL 0x00539367                       ; 005393db
        ;   XREF to: 00539367 (CONDITIONAL_JUMP)  ; LAB_00539367
    MOV ESP,EBP                         ; 005393dd
    POP EBP                             ; 005393df
    POP EDI                             ; 005393e0
    POP ESI                             ; 005393e1
    POP EBX                             ; 005393e2
    RET                                 ; 005393e3
    CMP dword ptr [EBP + 0x18],0x0      ; 005393e4
        ;   Label: LAB_005393e4
    JLE 0x00539460                      ; 005393e8
        ;   XREF to: 00539460 (CONDITIONAL_JUMP)  ; LAB_00539460
    MOV dword ptr [ESP + 0x10c],EDI     ; 005393ee
    MOV dword ptr [ESP + 0x11c],ECX     ; 005393f5
    MOV EAX,dword ptr [EBX + 0x60b014]  ; 005393fc | DAT_0060b014 | DAT_0060b044
        ;   Label: LAB_005393fc
    MOV dword ptr [ESP + 0x60],EAX      ; 00539402
    MOV EAX,dword ptr [EBX + 0x60b018]  ; 00539406 | DAT_0060b018 | DAT_0060b048
    MOV dword ptr [ESP + 0x64],EAX      ; 0053940c
    MOV EAX,dword ptr [EBX + 0x60b01c]  ; 00539410 | DAT_0060b01c | DAT_0060b04c
    MOV dword ptr [ESP + 0x68],EAX      ; 00539416
    LEA EAX,[ESP + 0x60]                ; 0053941a
    PUSH EAX                            ; 0053941e
    LEA ESI,[ESP + 0x4c]                ; 0053941f
    CALL FUN_00538ba0                   ; 00539423
        ;   XREF to: 00538ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_00538ba0()
    ADD ESP,0x4                         ; 00539428
    ADD EBX,0x30                        ; 0053942b
    MOV EDI,dword ptr [ESP + 0x11c]     ; 0053942e
    MOV EDX,dword ptr [ESP + 0x11c]     ; 00539435
    LEA ESI,[ESP + 0x48]                ; 0053943c
    ADD EDX,0xc                         ; 00539440
    LEA EDI,[EDI + 0x208bb90]           ; 00539443
    MOV ECX,dword ptr [ESP + 0x10c]     ; 00539449
    MOV dword ptr [ESP + 0x11c],EDX     ; 00539450
    MOVSD ES:EDI,ESI                    ; 00539457
    MOVSD ES:EDI,ESI                    ; 00539458
    MOVSD ES:EDI,ESI                    ; 00539459
    CMP EBX,ECX                         ; 0053945a
    JL 0x005393fc                       ; 0053945c
        ;   XREF to: 005393fc (CONDITIONAL_JUMP)  ; LAB_005393fc
    MOV EAX,EAX                         ; 0053945e
    CMP dword ptr [EBP + 0x28],0x0      ; 00539460
        ;   Label: LAB_00539460
    JLE 0x005397ab                      ; 00539464
        ;   XREF to: 005397ab (CONDITIONAL_JUMP)  ; LAB_005397ab
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0053946a
    MOV EAX,dword ptr [EBP + 0x20]      ; 0053946d
    XOR ESI,ESI                         ; 00539470
    TEST EDX,EDX                        ; 00539472
    JLE 0x005395d3                      ; 00539474
        ;   XREF to: 005395d3 (CONDITIONAL_JUMP)  ; LAB_005395d3
    MOV EDX,dword ptr [EAX + 0x24]      ; 0053947a
        ;   Label: LAB_0053947a
    IMUL EDX,EDX,0xc                    ; 0053947d
    MOV EBX,dword ptr [EAX + 0x18]      ; 00539480
    IMUL EBX,EBX,0xc                    ; 00539483
    MOV ECX,0x208bb90                   ; 00539486
    ADD ECX,EDX                         ; 0053948b
    MOV EDX,0x208bb90                   ; 0053948d
    ADD EDX,EBX                         ; 00539492
    MOV EBX,dword ptr [ECX]             ; 00539494
    SUB EBX,dword ptr [EDX]             ; 00539496
    MOV dword ptr [ESP + 0x158],EBX     ; 00539498
    MOV EBX,dword ptr [ECX + 0x4]       ; 0053949f
    SUB EBX,dword ptr [EDX + 0x4]       ; 005394a2
    MOV dword ptr [ESP + 0x160],EBX     ; 005394a5
    MOV EBX,dword ptr [ECX + 0x8]       ; 005394ac
    SUB EBX,dword ptr [EDX + 0x8]       ; 005394af
    MOV EDI,dword ptr [EAX + 0x30]      ; 005394b2
    MOV dword ptr [ESP + 0x15c],EBX     ; 005394b5
    IMUL EBX,EDI,0xc                    ; 005394bc
    ADD EBX,0x208bb90                   ; 005394bf
    MOV EDI,dword ptr [ECX]             ; 005394c5
    MOV EDX,dword ptr [EBX]             ; 005394c7
    SUB EDX,EDI                         ; 005394c9
    FILD dword ptr [ESP + 0x15c]        ; 005394cb
    MOV dword ptr [ESP + 0x15c],EDX     ; 005394d2
    MOV EDI,dword ptr [ECX + 0x4]       ; 005394d9
    FILD dword ptr [ESP + 0x15c]        ; 005394dc
    MOV EDX,dword ptr [EBX + 0x4]       ; 005394e3
    FST float ptr [ESP + 0xb4]          ; 005394e6
    SUB EDX,EDI                         ; 005394ed
    FMUL ST1                            ; 005394ef
    MOV dword ptr [ESP + 0x15c],EDX     ; 005394f1
    MOV EDX,dword ptr [EBX + 0x8]       ; 005394f8
    SUB EDX,dword ptr [ECX + 0x8]       ; 005394fb
    FILD dword ptr [ESP + 0x160]        ; 005394fe
    MOV dword ptr [ESP + 0x160],EDX     ; 00539505
    FST float ptr [ESP + 0xac]          ; 0053950c
    FILD dword ptr [ESP + 0x160]        ; 00539513
    FSTP float ptr [ESP + 0xbc]         ; 0053951a
    FMUL float ptr [ESP + 0xbc]         ; 00539521
    FILD dword ptr [ESP + 0x158]        ; 00539528
    FILD dword ptr [ESP + 0x15c]        ; 0053952f
    FLD ST1                             ; 00539536
    FMUL ST1                            ; 00539538
    FXCH                                ; 0053953a
    FMULP ST5                           ; 0053953c
    FXCH                                ; 0053953e
    FMUL float ptr [ESP + 0xbc]         ; 00539540
    FXCH ST4                            ; 00539547
    FSUBP ST2,ST0                       ; 00539549
    FLD ST1                             ; 0053954b
    FMUL ST2                            ; 0053954d
    FXCH ST4                            ; 0053954f
    FSUBP ST3,ST0                       ; 00539551
    FLD ST2                             ; 00539553
    FMUL ST3                            ; 00539555
    FLD float ptr [ESP + 0xb4]          ; 00539557
    FMUL float ptr [ESP + 0xac]         ; 0053955e
    FXCH                                ; 00539565
    FADDP ST5,ST0                       ; 00539567
    FSUBP                               ; 00539569
    FLD ST0                             ; 0053956b
    FMUL ST1                            ; 0053956d
    FADDP ST4,ST0                       ; 0053956f
    FXCH ST3                            ; 00539571
    FSTP float ptr [ESP + 0xc0]         ; 00539573
    MOV EDX,dword ptr [ESP + 0xc0]      ; 0053957a
    MOV ECX,dword ptr [0x01d1a0a8]      ; 00539581 | DAT_01d1a0a8
    SAR EDX,0x1                         ; 00539587
    SUB ECX,EDX                         ; 00539589
    MOV dword ptr [ESP + 0xc4],ECX      ; 0053958b
    FLD float ptr [ESP + 0xc4]          ; 00539592
    FMUL double ptr [0x005d07f7]        ; 00539599 | DAT_005d07f7
    FXCH                                ; 0053959f
    FMUL ST1                            ; 005395a1
    FXCH ST2                            ; 005395a3
    FMUL ST1                            ; 005395a5
    FXCH ST3                            ; 005395a7
    FMULP                               ; 005395a9
    MOV EDI,dword ptr [EBP + 0x28]      ; 005395ab
    FXCH                                ; 005395ae
    FSTP float ptr [EAX + 0x8]          ; 005395b0
    FXCH                                ; 005395b3
    FSTP float ptr [EAX + 0xc]          ; 005395b5
    FSTP float ptr [EAX + 0x10]         ; 005395b8
    CMP EDI,0x4                         ; 005395bb
    JNZ 0x0053979b                      ; 005395be
        ;   XREF to: 0053979b (CONDITIONAL_JUMP)  ; LAB_0053979b
    ADD EAX,0x48                        ; 005395c4
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005395c7
        ;   Label: LAB_005395c7
    INC ESI                             ; 005395ca
    CMP ESI,EDX                         ; 005395cb
    JL 0x0053947a                       ; 005395cd
        ;   XREF to: 0053947a (CONDITIONAL_JUMP)  ; LAB_0053947a
    MOV EDX,dword ptr [EBP + 0x18]      ; 005395d3
        ;   Label: LAB_005395d3
    LEA EAX,[EDX*0x4 + 0x0]             ; 005395d6
    SUB EAX,EDX                         ; 005395dd
    SHL EAX,0x2                         ; 005395df
    PUSH EAX                            ; 005395e2
    PUSH 0x0                            ; 005395e3
    PUSH 0x20d4f70                      ; 005395e5 | DAT_020d4f70
    CALL FUN_005a28f0                   ; 005395ea
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 005395ef
    XOR EBX,EBX                         ; 005395f2
    MOV ESI,dword ptr [EBP + 0x1c]      ; 005395f4
    MOV ECX,dword ptr [EBP + 0x20]      ; 005395f7
    TEST ESI,ESI                        ; 005395fa
    JLE 0x005396b0                      ; 005395fc
        ;   XREF to: 005396b0 (CONDITIONAL_JUMP)  ; LAB_005396b0
    IMUL EAX,dword ptr [ECX + 0x18],0xc ; 00539602
        ;   Label: LAB_00539602
    LEA ESI,[ECX + 0x8]                 ; 00539606
    ADD EAX,0x20d4f70                   ; 00539609
    FLD float ptr [ESI]                 ; 0053960e
    FADD float ptr [EAX]                ; 00539610 | DAT_020d4f70
    FSTP float ptr [EAX]                ; 00539612 | DAT_020d4f70
    FLD float ptr [ESI + 0x4]           ; 00539614
    FADD float ptr [EAX + 0x4]          ; 00539617 | DAT_020d4f74
    FSTP float ptr [EAX + 0x4]          ; 0053961a | DAT_020d4f74
    FLD float ptr [ESI + 0x8]           ; 0053961d
    FADD float ptr [EAX + 0x8]          ; 00539620 | DAT_020d4f78
    FSTP float ptr [EAX + 0x8]          ; 00539623 | DAT_020d4f78
    IMUL EAX,dword ptr [ECX + 0x24],0xc ; 00539626
    ADD EAX,0x20d4f70                   ; 0053962a
    FLD float ptr [ESI]                 ; 0053962f
    FADD float ptr [EAX]                ; 00539631 | DAT_020d4f70
    FSTP float ptr [EAX]                ; 00539633 | DAT_020d4f70
    FLD float ptr [ESI + 0x4]           ; 00539635
    FADD float ptr [EAX + 0x4]          ; 00539638
    FSTP float ptr [EAX + 0x4]          ; 0053963b
    FLD float ptr [ESI + 0x8]           ; 0053963e
    FADD float ptr [EAX + 0x8]          ; 00539641
    FSTP float ptr [EAX + 0x8]          ; 00539644
    IMUL EAX,dword ptr [ECX + 0x30],0xc ; 00539647
    ADD EAX,0x20d4f70                   ; 0053964b
    FLD float ptr [ESI]                 ; 00539650
    FADD float ptr [EAX]                ; 00539652
    FSTP float ptr [EAX]                ; 00539654
    FLD float ptr [ESI + 0x4]           ; 00539656
    FADD float ptr [EAX + 0x4]          ; 00539659
    FSTP float ptr [EAX + 0x4]          ; 0053965c
    FLD float ptr [ESI + 0x8]           ; 0053965f
    FADD float ptr [EAX + 0x8]          ; 00539662
    FSTP float ptr [EAX + 0x8]          ; 00539665
    CMP dword ptr [ECX + 0x4],0x4       ; 00539668
    JNZ 0x0053968f                      ; 0053966c
        ;   XREF to: 0053968f (CONDITIONAL_JUMP)  ; LAB_0053968f
    IMUL EAX,dword ptr [ECX + 0x3c],0xc ; 0053966e
    ADD EAX,0x20d4f70                   ; 00539672
    FLD float ptr [ESI]                 ; 00539677
    FADD float ptr [EAX]                ; 00539679
    FSTP float ptr [EAX]                ; 0053967b
    FLD float ptr [ESI + 0x4]           ; 0053967d
    FADD float ptr [EAX + 0x4]          ; 00539680
    FSTP float ptr [EAX + 0x4]          ; 00539683
    FLD float ptr [ESI + 0x8]           ; 00539686
    FADD float ptr [EAX + 0x8]          ; 00539689
    FSTP float ptr [EAX + 0x8]          ; 0053968c
    CMP dword ptr [EBP + 0x28],0x4      ; 0053968f
        ;   Label: LAB_0053968f
    JNZ 0x005397a3                      ; 00539693
        ;   XREF to: 005397a3 (CONDITIONAL_JUMP)  ; LAB_005397a3
    ADD ECX,0x48                        ; 00539699
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0053969c
        ;   Label: LAB_0053969c
    INC EBX                             ; 0053969f
    CMP EBX,EAX                         ; 005396a0
    JL 0x00539602                       ; 005396a2
        ;   XREF to: 00539602 (CONDITIONAL_JUMP)  ; LAB_00539602
    LEA EAX,[EAX]                       ; 005396a8
    MOV EDX,EDX                         ; 005396ae
    MOV EAX,dword ptr [EBP + 0x14]      ; 005396b0
        ;   Label: LAB_005396b0
    MOV EDI,dword ptr [EAX + 0x15ae98]  ; 005396b3
    TEST EDI,EDI                        ; 005396b9
    JZ 0x00539b5b                       ; 005396bb
        ;   XREF to: 00539b5b (CONDITIONAL_JUMP)  ; LAB_00539b5b
    MOV EDX,dword ptr [EBP + 0x18]      ; 005396c1
    XOR EDI,EDI                         ; 005396c4
    TEST EDX,EDX                        ; 005396c6
    JLE 0x00538e90                      ; 005396c8
        ;   XREF to: 00538e90 (CONDITIONAL_JUMP)  ; LAB_00538e90
    MOV ESI,0x20d4f70                   ; 005396ce
    MOV EAX,0x208bb90                   ; 005396d3
    MOV dword ptr [ESP + 0x118],EDI     ; 005396d8
    MOV dword ptr [ESP + 0x140],ESI     ; 005396df | DAT_020d4f70
    MOV dword ptr [ESP + 0x110],EAX     ; 005396e6
    MOV ESI,dword ptr [ESP + 0x140]     ; 005396ed
        ;   Label: LAB_005396ed
    FLD float ptr [ESI]                 ; 005396f4 | DAT_020d4f70 | DAT_020d4f7c
    FABS                                ; 005396f6
    IMUL EBX,EDI,0xc                    ; 005396f8
    FLD1                                ; 005396fb
    FCOMPP                              ; 005396fd
    FNSTSW AX                           ; 005396ff
    SAHF                                ; 00539701
    JBE 0x00539ad0                      ; 00539702
        ;   XREF to: 00539ad0 (CONDITIONAL_JUMP)  ; LAB_00539ad0
    FLD float ptr [ESI + 0x4]           ; 00539708 | DAT_020d4f74 | DAT_020d4f80
    FABS                                ; 0053970b
    FLD1                                ; 0053970d
    FCOMPP                              ; 0053970f
    FNSTSW AX                           ; 00539711
    SAHF                                ; 00539713
    JBE 0x00539ad0                      ; 00539714
        ;   XREF to: 00539ad0 (CONDITIONAL_JUMP)  ; LAB_00539ad0
    FLD float ptr [ESI + 0x8]           ; 0053971a | DAT_020d4f78 | DAT_020d4f84
    FABS                                ; 0053971d
    FLD1                                ; 0053971f
    FCOMPP                              ; 00539721
    FNSTSW AX                           ; 00539723
    SAHF                                ; 00539725
    JBE 0x00539ad0                      ; 00539726
        ;   XREF to: 00539ad0 (CONDITIONAL_JUMP)  ; LAB_00539ad0
    PUSH 0x0                            ; 0053972c
    PUSH EDI                            ; 0053972e
    MOV EAX,0x208bb90                   ; 0053972f
    PUSH 0x0                            ; 00539734
    ADD EAX,EBX                         ; 00539736
    PUSH EAX                            ; 00539738
    MOV ESI,dword ptr [EBP + 0x14]      ; 00539739
    PUSH ESI                            ; 0053973c
    CALL FUN_005380a0                   ; 0053973d
        ;   XREF to: 005380a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005380a0()
        ;   Label: LAB_0053973d
    ADD ESP,0x14                        ; 00539742
    MOV EDX,dword ptr [ESP + 0x118]     ; 00539745
    MOV ECX,dword ptr [ESP + 0x118]     ; 0053974c
    MOV EBX,dword ptr [EBP + 0x18]      ; 00539753
    MOV EAX,[0x01c6e24c]                ; 00539756 | DAT_01c6e24c
    INC EDI                             ; 0053975b
    ADD ECX,0x30                        ; 0053975c
    MOV dword ptr [EDX + 0x60b040],EAX  ; 0053975f | DAT_0060b040 | DAT_0060b070
    MOV EAX,dword ptr [ESP + 0x140]     ; 00539765
    MOV EDX,dword ptr [ESP + 0x110]     ; 0053976c
    MOV dword ptr [ESP + 0x118],ECX     ; 00539773
    ADD EAX,0xc                         ; 0053977a | DAT_020d4f7c
    ADD EDX,0xc                         ; 0053977d
    MOV dword ptr [ESP + 0x140],EAX     ; 00539780 | DAT_020d4f7c
    MOV dword ptr [ESP + 0x110],EDX     ; 00539787
    CMP EDI,EBX                         ; 0053978e
    JGE 0x00538e90                      ; 00539790
        ;   XREF to: 00538e90 (CONDITIONAL_JUMP)  ; LAB_00538e90
    JMP 0x005396ed                      ; 00539796
        ;   XREF to: 005396ed (UNCONDITIONAL_JUMP)  ; LAB_005396ed
    ADD EAX,0x3c                        ; 0053979b
        ;   Label: LAB_0053979b
    JMP 0x005395c7                      ; 0053979e
        ;   XREF to: 005395c7 (UNCONDITIONAL_JUMP)  ; LAB_005395c7
    ADD ECX,0x3c                        ; 005397a3
        ;   Label: LAB_005397a3
    JMP 0x0053969c                      ; 005397a6
        ;   XREF to: 0053969c (UNCONDITIONAL_JUMP)  ; LAB_0053969c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 005397ab
        ;   Label: LAB_005397ab
    MOV EBX,dword ptr [EBP + 0x20]      ; 005397ae
    CMP ESI,0xfa0                       ; 005397b1
    JLE 0x005397db                      ; 005397b7
        ;   XREF to: 005397db (CONDITIONAL_JUMP)  ; LAB_005397db
    MOV EDI,0x5d0783                    ; 005397b9 | = "..\\core\\set.cpp"
    MOV EAX,0xfc4                       ; 005397be
    PUSH 0x5d0793                       ; 005397c3 | = "Too many normals on this packed tri list"
    MOV dword ptr [0x01d71de0],EDI      ; 005397c8 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 005397ce | DAT_01d71de4
    CALL FUN_004e4330                   ; 005397d3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 005397d8
    CMP dword ptr [EBP + 0x1c],0xfa0    ; 005397db
        ;   Label: LAB_005397db
    JLE 0x00539807                      ; 005397e2
        ;   XREF to: 00539807 (CONDITIONAL_JUMP)  ; LAB_00539807
    MOV ECX,0x5d07bc                    ; 005397e4 | = "..\\core\\set.cpp"
    MOV ESI,0xfc6                       ; 005397e9
    PUSH 0x5d07cc                       ; 005397ee | = "Need more normals for packed models"
    MOV dword ptr [0x01d71de0],ECX      ; 005397f3 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 005397f9 | DAT_01d71de4
    CALL FUN_004e4330                   ; 005397ff
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00539804
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00539807
        ;   Label: LAB_00539807
    XOR EDI,EDI                         ; 0053980a
    TEST EAX,EAX                        ; 0053980c
    JLE 0x00539a18                      ; 0053980e
        ;   XREF to: 00539a18 (CONDITIONAL_JUMP)  ; LAB_00539a18
    FLD float ptr [ESP + 0x130]         ; 00539814
    FLD float ptr [ESP + 0x134]         ; 0053981b
    MOV ECX,0x2080010                   ; 00539822
    XOR ESI,ESI                         ; 00539827
        ;   Label: LAB_00539827
    MOV SI,word ptr [EBX]               ; 00539829
    IMUL ESI,ESI,0xc                    ; 0053982c
    XOR EAX,EAX                         ; 0053982f
    XOR EDX,EDX                         ; 00539831
    MOV AX,word ptr [EBX + 0x4]         ; 00539833
    MOV DX,word ptr [EBX + 0x2]         ; 00539837
    MOV dword ptr [ESP + 0xe4],EAX      ; 0053983b
    IMUL EAX,EDX,0xc                    ; 00539842
    MOV EDX,0x208bb90                   ; 00539845
    ADD EAX,0x208bb90                   ; 0053984a
    ADD EDX,ESI                         ; 0053984f
    MOV ESI,dword ptr [EAX]             ; 00539851
    MOV dword ptr [ESP + 0x154],ESI     ; 00539853
    MOV ESI,dword ptr [EDX]             ; 0053985a
    SUB dword ptr [ESP + 0x154],ESI     ; 0053985c
    MOV ESI,dword ptr [ESP + 0x154]     ; 00539863
    MOV dword ptr [ESP + 0x154],ESI     ; 0053986a
    MOV ESI,dword ptr [EAX + 0x4]       ; 00539871
    MOV dword ptr [ESP + 0x158],ESI     ; 00539874
    MOV ESI,dword ptr [EDX + 0x4]       ; 0053987b
    SUB dword ptr [ESP + 0x158],ESI     ; 0053987e
    MOV ESI,dword ptr [ESP + 0x158]     ; 00539885
    MOV dword ptr [ESP + 0x160],ESI     ; 0053988c
    MOV ESI,dword ptr [EAX + 0x8]       ; 00539893
    MOV EDX,dword ptr [EDX + 0x8]       ; 00539896
    SUB ESI,EDX                         ; 00539899
    MOV EDX,dword ptr [ESP + 0xe4]      ; 0053989b
    MOV dword ptr [ESP + 0x15c],ESI     ; 005398a2
    IMUL ESI,EDX,0xc                    ; 005398a9
    ADD ESI,0x208bb90                   ; 005398ac
    MOV EDX,dword ptr [ESI]             ; 005398b2
    MOV dword ptr [ESP + 0x158],EDX     ; 005398b4
    MOV EDX,dword ptr [EAX]             ; 005398bb
    SUB dword ptr [ESP + 0x158],EDX     ; 005398bd
    MOV EDX,dword ptr [ESP + 0x158]     ; 005398c4
    MOV dword ptr [ESP + 0x158],EDX     ; 005398cb
    FILD dword ptr [ESP + 0x15c]        ; 005398d2
    FILD dword ptr [ESP + 0x158]        ; 005398d9
    MOV EDX,dword ptr [ESI + 0x4]       ; 005398e0
    FST float ptr [ESP + 0xd4]          ; 005398e3
    FXCH                                ; 005398ea
    FSTP float ptr [ESP + 0xd0]         ; 005398ec
    FMUL float ptr [ESP + 0xd0]         ; 005398f3
    MOV dword ptr [ESP + 0x158],EDX     ; 005398fa
    MOV EDX,dword ptr [EAX + 0x4]       ; 00539901
    SUB dword ptr [ESP + 0x158],EDX     ; 00539904
    MOV EDX,dword ptr [ESP + 0x158]     ; 0053990b
    MOV dword ptr [ESP + 0x15c],EDX     ; 00539912
    MOV EDX,dword ptr [ESI + 0x8]       ; 00539919
    MOV ESI,dword ptr [EAX + 0x8]       ; 0053991c
    MOV EAX,EDX                         ; 0053991f
    FILD dword ptr [ESP + 0x160]        ; 00539921
    SUB EAX,ESI                         ; 00539928
    FSTP float ptr [ESP + 0xcc]         ; 0053992a
    MOV dword ptr [ESP + 0x158],EAX     ; 00539931
    FLD float ptr [ESP + 0xcc]          ; 00539938
    FILD dword ptr [ESP + 0x158]        ; 0053993f
    FSTP float ptr [ESP + 0xdc]         ; 00539946
    FMUL float ptr [ESP + 0xdc]         ; 0053994d
    FILD dword ptr [ESP + 0x154]        ; 00539954
    FILD dword ptr [ESP + 0x15c]        ; 0053995b
    FLD ST1                             ; 00539962
    FMUL ST1                            ; 00539964
    FXCH                                ; 00539966
    FMUL float ptr [ESP + 0xd0]         ; 00539968
    FXCH ST2                            ; 0053996f
    FMUL float ptr [ESP + 0xdc]         ; 00539971
    FXCH ST2                            ; 00539978
    FSUBP ST3,ST0                       ; 0053997a
    FXCH ST2                            ; 0053997c
    FST ST4                             ; 0053997e
    FMUL ST4                            ; 00539980
    FXCH                                ; 00539982
    FSUBP ST3,ST0                       ; 00539984
    FXCH ST2                            ; 00539986
    FST ST4                             ; 00539988
    FMUL ST4                            ; 0053998a
    FLD float ptr [ESP + 0xd4]          ; 0053998c
    FMUL float ptr [ESP + 0xcc]         ; 00539993
    FXCH                                ; 0053999a
    FADDP ST3,ST0                       ; 0053999c
    FSUBP                               ; 0053999e
    FST float ptr [ESP + 0x12c]         ; 005399a0
    FMUL float ptr [ESP + 0x12c]        ; 005399a7
    FADDP                               ; 005399ae
    FSTP float ptr [ESP + 0xe8]         ; 005399b0
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005399b7
    MOV EDX,dword ptr [0x01d1a0a8]      ; 005399be | DAT_01d1a0a8
    SAR EAX,0x1                         ; 005399c4
    SUB EDX,EAX                         ; 005399c6
    MOV dword ptr [ESP + 0xec],EDX      ; 005399c8
    FLD float ptr [ESP + 0xec]          ; 005399cf
    FMUL double ptr [0x005d07f7]        ; 005399d6 | DAT_005d07f7
    FLD ST1                             ; 005399dc
    FMUL ST1                            ; 005399de
    FLD ST3                             ; 005399e0
    FMUL ST2                            ; 005399e2
    FLD float ptr [ESP + 0x12c]         ; 005399e4
    FMULP ST3                           ; 005399eb
    ADD EBX,0x12                        ; 005399ed
    ADD ECX,0xc                         ; 005399f0
    INC EDI                             ; 005399f3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005399f4
    FXCH                                ; 005399f7
    FSTP float ptr [ECX + -0xc]         ; 005399f9 | DAT_02080010
    FSTP float ptr [ECX + -0x8]         ; 005399fc | DAT_02080014
    FSTP float ptr [ECX + -0x4]         ; 005399ff | DAT_02080018
    CMP EDI,EAX                         ; 00539a02
    JL 0x00539827                       ; 00539a04
        ;   XREF to: 00539827 (CONDITIONAL_JUMP)  ; LAB_00539827
    FSTP float ptr [ESP + 0x134]        ; 00539a0a
    FSTP float ptr [ESP + 0x130]        ; 00539a11
    MOV EDX,dword ptr [EBP + 0x18]      ; 00539a18
        ;   Label: LAB_00539a18
    LEA EAX,[EDX*0x4 + 0x0]             ; 00539a1b
    SUB EAX,EDX                         ; 00539a22
    SHL EAX,0x2                         ; 00539a24
    PUSH EAX                            ; 00539a27
    PUSH 0x0                            ; 00539a28
    PUSH 0x20d4f70                      ; 00539a2a | DAT_020d4f70
    CALL FUN_005a28f0                   ; 00539a2f
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 00539a34
    XOR ESI,ESI                         ; 00539a37
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00539a39
    MOV EBX,dword ptr [EBP + 0x20]      ; 00539a3c
    TEST EDX,EDX                        ; 00539a3f
    JLE 0x005396b0                      ; 00539a41
        ;   XREF to: 005396b0 (CONDITIONAL_JUMP)  ; LAB_005396b0
    MOV ECX,0x2080010                   ; 00539a47
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00539a4c
    XOR EAX,EAX                         ; 00539a4f
        ;   Label: LAB_00539a4f
    MOV AX,word ptr [EBX]               ; 00539a51
    IMUL EAX,EAX,0xc                    ; 00539a54
    ADD EAX,0x20d4f70                   ; 00539a57
    FLD float ptr [ECX]                 ; 00539a5c | DAT_02080010 | DAT_0208001c
    FADD float ptr [EAX]                ; 00539a5e | DAT_020d4f70
    FSTP float ptr [EAX]                ; 00539a60 | DAT_020d4f70
    FLD float ptr [ECX + 0x4]           ; 00539a62 | DAT_02080014 | DAT_02080020
    FADD float ptr [EAX + 0x4]          ; 00539a65 | DAT_020d4f74
    FSTP float ptr [EAX + 0x4]          ; 00539a68 | DAT_020d4f74
    FLD float ptr [ECX + 0x8]           ; 00539a6b | DAT_02080018 | DAT_02080024
    FADD float ptr [EAX + 0x8]          ; 00539a6e | DAT_020d4f78
    FSTP float ptr [EAX + 0x8]          ; 00539a71 | DAT_020d4f78
    XOR EAX,EAX                         ; 00539a74
    MOV AX,word ptr [EBX + 0x2]         ; 00539a76
    IMUL EAX,EAX,0xc                    ; 00539a7a
    ADD EAX,0x20d4f70                   ; 00539a7d
    FLD float ptr [ECX]                 ; 00539a82 | DAT_02080010
    FADD float ptr [EAX]                ; 00539a84 | DAT_020d4f70
    FSTP float ptr [EAX]                ; 00539a86 | DAT_020d4f70
    FLD float ptr [ECX + 0x4]           ; 00539a88 | DAT_02080014
    FADD float ptr [EAX + 0x4]          ; 00539a8b | DAT_020d4f74
    FSTP float ptr [EAX + 0x4]          ; 00539a8e | DAT_020d4f74
    FLD float ptr [ECX + 0x8]           ; 00539a91 | DAT_02080018
    FADD float ptr [EAX + 0x8]          ; 00539a94 | DAT_020d4f78
    FSTP float ptr [EAX + 0x8]          ; 00539a97 | DAT_020d4f78
    XOR EAX,EAX                         ; 00539a9a
    MOV AX,word ptr [EBX + 0x4]         ; 00539a9c
    IMUL EAX,EAX,0xc                    ; 00539aa0
    ADD EAX,0x20d4f70                   ; 00539aa3
    FLD float ptr [ECX]                 ; 00539aa8 | DAT_02080010
    FADD float ptr [EAX]                ; 00539aaa | DAT_020d4f70
    ADD EBX,0x12                        ; 00539aac
    FSTP float ptr [EAX]                ; 00539aaf | DAT_020d4f70
    FLD float ptr [ECX + 0x4]           ; 00539ab1 | DAT_02080014
    FADD float ptr [EAX + 0x4]          ; 00539ab4 | DAT_020d4f74
    ADD ECX,0xc                         ; 00539ab7
    FSTP float ptr [EAX + 0x4]          ; 00539aba | DAT_020d4f74
    FLD float ptr [ECX + -0x4]          ; 00539abd | DAT_02080018
    FADD float ptr [EAX + 0x8]          ; 00539ac0 | DAT_020d4f78
    INC ESI                             ; 00539ac3
    FSTP float ptr [EAX + 0x8]          ; 00539ac4 | DAT_020d4f78
    CMP ESI,EDI                         ; 00539ac7
    JL 0x00539a4f                       ; 00539ac9
        ;   XREF to: 00539a4f (CONDITIONAL_JUMP)  ; LAB_00539a4f
    JMP 0x005396b0                      ; 00539acb
        ;   XREF to: 005396b0 (UNCONDITIONAL_JUMP)  ; LAB_005396b0
    FLD float ptr [ESI + 0x4]           ; 00539ad0 | DAT_020d4f80 | DAT_020d4f74
        ;   Label: LAB_00539ad0
    FMUL ST0                            ; 00539ad3
    FLD float ptr [ESI]                 ; 00539ad5 | DAT_020d4f7c | DAT_020d4f70
    FMUL ST0                            ; 00539ad7
    FADDP                               ; 00539ad9
    FLD float ptr [ESI + 0x8]           ; 00539adb | DAT_020d4f84 | DAT_020d4f78
    FMUL ST0                            ; 00539ade
    FADDP                               ; 00539ae0
    FSTP float ptr [ESP + 0xf4]         ; 00539ae2
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00539ae9
    MOV EDX,dword ptr [0x01d1a0a8]      ; 00539af0 | DAT_01d1a0a8
    SAR EAX,0x1                         ; 00539af6
    SUB EDX,EAX                         ; 00539af8
    MOV dword ptr [ESP + 0xf8],EDX      ; 00539afa
    FLD float ptr [ESP + 0xf8]          ; 00539b01
    FMUL float ptr [0x005d07ff]         ; 00539b08 | DAT_005d07ff
    FLD float ptr [ESI]                 ; 00539b0e | DAT_020d4f7c | DAT_020d4f70
    FMUL ST1                            ; 00539b10
    FLD float ptr [ESI + 0x4]           ; 00539b12 | DAT_020d4f80
    FMUL ST2                            ; 00539b15
    FLD float ptr [ESI + 0x8]           ; 00539b17 | DAT_020d4f84
    FMULP ST3                           ; 00539b1a
    LEA EBX,[ESP + 0x90]                ; 00539b1c
    MOV EAX,ESI                         ; 00539b23
    FXCH                                ; 00539b25
    FSTP float ptr [ESI]                ; 00539b27 | DAT_020d4f7c
    FSTP float ptr [ESI + 0x4]          ; 00539b29 | DAT_020d4f80
    FSTP float ptr [ESI + 0x8]          ; 00539b2c | DAT_020d4f84
    FLD float ptr [EAX]                 ; 00539b2f | DAT_020d4f7c
    FISTP dword ptr [EBX]               ; 00539b31
    FLD float ptr [EAX + 0x4]           ; 00539b33 | DAT_020d4f80
    FISTP dword ptr [EBX + 0x4]         ; 00539b36
    FLD float ptr [EAX + 0x8]           ; 00539b39 | DAT_020d4f84
    FISTP dword ptr [EBX + 0x8]         ; 00539b3c
    PUSH 0x0                            ; 00539b3f
    PUSH EDI                            ; 00539b41
    LEA EAX,[ESP + 0x98]                ; 00539b42
    PUSH EAX                            ; 00539b49
    MOV ECX,dword ptr [ESP + 0x11c]     ; 00539b4a
    PUSH ECX                            ; 00539b51
    MOV EBX,dword ptr [EBP + 0x14]      ; 00539b52
    PUSH EBX                            ; 00539b55
    JMP 0x0053973d                      ; 00539b56
        ;   XREF to: 0053973d (UNCONDITIONAL_JUMP)  ; LAB_0053973d
    CMP dword ptr [EBP + 0x18],0x0      ; 00539b5b
        ;   Label: LAB_00539b5b
    JLE 0x00538e90                      ; 00539b5f
        ;   XREF to: 00538e90 (CONDITIONAL_JUMP)  ; LAB_00538e90
    MOV ESI,0x208bb90                   ; 00539b65
    MOV dword ptr [ESP + 0x120],EDI     ; 00539b6a
    MOV dword ptr [ESP + 0x124],ESI     ; 00539b71
    MOV ESI,0x20d4f70                   ; 00539b78
    FLD float ptr [ESI + 0x4]           ; 00539b7d | DAT_020d4f74 | DAT_020d4f80
        ;   Label: LAB_00539b7d
    FMUL ST0                            ; 00539b80
    FLD float ptr [ESI]                 ; 00539b82 | DAT_020d4f70 | DAT_020d4f7c
    FMUL ST0                            ; 00539b84
    FADDP                               ; 00539b86
    FLD float ptr [ESI + 0x8]           ; 00539b88 | DAT_020d4f78 | DAT_020d4f84
    FMUL ST0                            ; 00539b8b
    FADDP                               ; 00539b8d
    FSTP float ptr [ESP + 0x100]        ; 00539b8f
    MOV EAX,dword ptr [ESP + 0x100]     ; 00539b96
    MOV EDX,dword ptr [0x01d1a0a8]      ; 00539b9d | DAT_01d1a0a8
    SAR EAX,0x1                         ; 00539ba3
    SUB EDX,EAX                         ; 00539ba5
    MOV dword ptr [ESP + 0x104],EDX     ; 00539ba7
    FLD float ptr [ESP + 0x104]         ; 00539bae
    FMUL float ptr [0x005d07ff]         ; 00539bb5 | DAT_005d07ff
    FLD float ptr [ESI]                 ; 00539bbb | DAT_020d4f70 | DAT_020d4f7c
    FMUL ST1                            ; 00539bbd
    FLD float ptr [ESI + 0x4]           ; 00539bbf | DAT_020d4f74
    FMUL ST2                            ; 00539bc2
    FLD float ptr [ESI + 0x8]           ; 00539bc4 | DAT_020d4f78
    FMULP ST3                           ; 00539bc7
    LEA EBX,[ESP + 0x6c]                ; 00539bc9
    MOV EAX,ESI                         ; 00539bcd
    FXCH                                ; 00539bcf
    FSTP float ptr [ESI]                ; 00539bd1 | DAT_020d4f70
    FSTP float ptr [ESI + 0x4]          ; 00539bd3 | DAT_020d4f74
    FSTP float ptr [ESI + 0x8]          ; 00539bd6 | DAT_020d4f78
    FLD float ptr [EAX]                 ; 00539bd9 | DAT_020d4f70
    FISTP dword ptr [EBX]               ; 00539bdb
    FLD float ptr [EAX + 0x4]           ; 00539bdd | DAT_020d4f74
    FISTP dword ptr [EBX + 0x4]         ; 00539be0
    FLD float ptr [EAX + 0x8]           ; 00539be3 | DAT_020d4f78
    FISTP dword ptr [EBX + 0x8]         ; 00539be6
    PUSH 0x0                            ; 00539be9
    PUSH EDI                            ; 00539beb
    LEA EAX,[ESP + 0x74]                ; 00539bec
    PUSH EAX                            ; 00539bf0
    MOV ECX,dword ptr [ESP + 0x130]     ; 00539bf1
    PUSH ECX                            ; 00539bf8
    MOV EBX,dword ptr [EBP + 0x14]      ; 00539bf9
    PUSH EBX                            ; 00539bfc
    CALL FUN_005380a0                   ; 00539bfd
        ;   XREF to: 005380a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005380a0()
    ADD ESP,0x14                        ; 00539c02
    MOV EDX,dword ptr [ESP + 0x120]     ; 00539c05
    MOV EAX,[0x01c6e24c]                ; 00539c0c | DAT_01c6e24c
    ADD ESI,0xc                         ; 00539c11
    MOV dword ptr [EDX + 0x60b040],EAX  ; 00539c14 | DAT_0060b040
    LEA EAX,[EDX + 0x30]                ; 00539c1a
    INC EDI                             ; 00539c1d
    MOV EDX,dword ptr [ESP + 0x124]     ; 00539c1e
    MOV ECX,dword ptr [EBP + 0x18]      ; 00539c25
    ADD EDX,0xc                         ; 00539c28
    MOV dword ptr [ESP + 0x120],EAX     ; 00539c2b
    MOV dword ptr [ESP + 0x124],EDX     ; 00539c32
    CMP EDI,ECX                         ; 00539c39
    JL 0x00539b7d                       ; 00539c3b
        ;   XREF to: 00539b7d (CONDITIONAL_JUMP)  ; LAB_00539b7d
    MOV ESP,EBP                         ; 00539c41
    POP EBP                             ; 00539c43
    POP EDI                             ; 00539c44
    POP ESI                             ; 00539c45
    POP EBX                             ; 00539c46
    RET                                 ; 00539c47

