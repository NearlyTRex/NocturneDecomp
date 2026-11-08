; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055e8b0(void)
;
; Local Variables:
; undefined8       Stack[-0x1e0]:8  local_1e0
; undefined8       Stack[-0x1d8]:8  local_1d8
; undefined8       Stack[-0x1d0]:8  local_1d0
; undefined8       Stack[-0x1c8]:8  local_1c8
; undefined8       Stack[-0x1c0]:8  local_1c0
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined        Stack[-0x1b4]:1  local_1b4
; undefined        Stack[-0x18c]:1  local_18c
; undefined        Stack[-0x164]:1  local_164
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined        Stack[-0x100]:1  local_100
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
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined        Stack[-0x7c]:1  local_7c
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
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   FUN_0055fd30 at 0055fd6d
;   FUN_0055ff40 at 0055ff7f
;
; Referenced Globals:
;   TerminatedCString s_castle_005d5147
;   undefined4 DAT_005d514f
;   undefined4 DAT_005d5157
;   undefined4 DAT_005d515f
;   undefined4 DAT_005d5167
;   undefined4 DAT_005d516f
;   undefined4 DAT_005d5173
;   undefined4 DAT_005d5177
;   undefined4 DAT_005d517f
;   undefined4 DAT_005d5187
;   undefined4 DAT_005d518f
;   undefined4 DAT_005d5197
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_00603b28
;   undefined4 DAT_01d1e364
;   ... and 16 more
;
; Called Functions:
;   FUN_00449eb0
;   FUN_00449f80
;   FUN_0045b800
;   FUN_0053cad0
;   FUN_00557020
;   FUN_00557080
;   FUN_005a3f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055e8b0
        ;   Label: FUN_0055e8b0
    PUSH ESI                            ; 0055e8b1
    PUSH EDI                            ; 0055e8b2
    PUSH EBP                            ; 0055e8b3
    MOV EBP,ESP                         ; 0055e8b4
    SUB ESP,0x1b4                       ; 0055e8b6
    AND ESP,0xfffffff8                  ; 0055e8bc
    MOV EAX,[0x005fe9dc]                ; 0055e8bf | DAT_005fe9dc
    CMP dword ptr [EAX + 0x264],0x0     ; 0055e8c4 | DAT_01d21570
    JNZ 0x0055eb52                      ; 0055e8cb
        ;   XREF to: 0055eb52 (CONDITIONAL_JUMP)  ; LAB_0055eb52
    LEA EDI,[ESP + 0xd4]                ; 0055e8d1
    MOV ESI,0x2038f50                   ; 0055e8d8
    MOVSD ES:EDI,ESI                    ; 0055e8dd | DAT_02038f50
    MOVSD ES:EDI,ESI                    ; 0055e8de | DAT_02038f54
    MOVSD ES:EDI,ESI                    ; 0055e8df | DAT_02038f58
    LEA EDI,[ESP + 0x17c]               ; 0055e8e0
    LEA ESI,[ESP + 0xd4]                ; 0055e8e7
    LEA EAX,[ESP + 0x17c]               ; 0055e8ee
    LEA EDX,[ESP + 0x170]               ; 0055e8f5
    MOVSD ES:EDI,ESI                    ; 0055e8fc
    MOVSD ES:EDI,ESI                    ; 0055e8fd
    MOVSD ES:EDI,ESI                    ; 0055e8fe
    CMP EDX,EAX                         ; 0055e8ff
    JZ 0x0055e92d                       ; 0055e901
        ;   XREF to: 0055e92d (CONDITIONAL_JUMP)  ; LAB_0055e92d
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0055e903
    MOV dword ptr [ESP + 0x170],EAX     ; 0055e90a
    MOV EAX,dword ptr [ESP + 0x180]     ; 0055e911
    MOV dword ptr [ESP + 0x174],EAX     ; 0055e918
    MOV EAX,dword ptr [ESP + 0x184]     ; 0055e91f
    MOV dword ptr [ESP + 0x178],EAX     ; 0055e926
    FLD float ptr [ESP + 0x170]         ; 0055e92d
        ;   Label: LAB_0055e92d
    FLD float ptr [ESP + 0x174]         ; 0055e934
    FLD float ptr [ESP + 0x178]         ; 0055e93b
    LEA EDI,[ESP + 0x158]               ; 0055e942
    LEA ESI,[ESP + 0xec]                ; 0055e949
    FXCH ST2                            ; 0055e950
    FSUB float ptr [0x02cf568c]         ; 0055e952 | DAT_02cf568c
    FXCH                                ; 0055e958
    FSUB float ptr [0x02cf5690]         ; 0055e95a | DAT_02cf5690
    FXCH ST2                            ; 0055e960
    FSUB float ptr [0x02cf5694]         ; 0055e962 | DAT_02cf5694
    FXCH                                ; 0055e968
    FSTP float ptr [ESP + 0xec]         ; 0055e96a
    FXCH                                ; 0055e971
    FSTP float ptr [ESP + 0xf0]         ; 0055e973
    FSTP float ptr [ESP + 0xf4]         ; 0055e97a
    MOVSD ES:EDI,ESI                    ; 0055e981
    MOVSD ES:EDI,ESI                    ; 0055e982
    MOVSD ES:EDI,ESI                    ; 0055e983
    FLD float ptr [ESP + 0x15c]         ; 0055e984
    FMUL ST0                            ; 0055e98b
    FLD float ptr [ESP + 0x158]         ; 0055e98d
    FMUL ST0                            ; 0055e994
    FADDP                               ; 0055e996
    FLD float ptr [ESP + 0x160]         ; 0055e998
    FMUL ST0                            ; 0055e99f
    FADDP                               ; 0055e9a1
    FSQRT                               ; 0055e9a3
    FCOMP double ptr [0x005d514f]       ; 0055e9a5 | DAT_005d514f
    FNSTSW AX                           ; 0055e9ab
    SAHF                                ; 0055e9ad
    JC 0x0055eb4b                       ; 0055e9ae
        ;   XREF to: 0055eb4b (CONDITIONAL_JUMP)  ; LAB_0055eb4b
    MOV ECX,0xa                         ; 0055e9b4
    LEA EDI,[ESP + 0x14]                ; 0055e9b9
    MOV ESI,0x2038f5c                   ; 0055e9bd
    MOVSD.REP ES:EDI,ESI                ; 0055e9c2 | DAT_02038f5c | DAT_02038f60
    MOV ECX,0xa                         ; 0055e9c4
    LEA EDI,[ESP + 0x64]                ; 0055e9c9
    LEA ESI,[ESP + 0x14]                ; 0055e9cd
    MOVSD.REP ES:EDI,ESI                ; 0055e9d1
        ;   Label: LAB_0055e9d1
    FLD float ptr [ESP + 0x178]         ; 0055e9d3
    SUB ESP,0x8                         ; 0055e9da
    FSTP double ptr [ESP]               ; 0055e9dd
    FLD float ptr [ESP + 0x17c]         ; 0055e9e0
    SUB ESP,0x8                         ; 0055e9e7
    LEA ESI,[ESP + 0xd8]                ; 0055e9ea
    FSTP double ptr [ESP]               ; 0055e9f1
    FLD float ptr [ESP + 0x180]         ; 0055e9f4
    SUB ESP,0x8                         ; 0055e9fb
    LEA EDI,[ESP + 0x128]               ; 0055e9fe
    FSTP double ptr [ESP]               ; 0055ea05
    XOR EBX,EBX                         ; 0055ea08
    CALL FUN_00557020                   ; 0055ea0a
        ;   XREF to: 00557020 (UNCONDITIONAL_CALL)  ; undefined FUN_00557020()
    ADD ESP,0x18                        ; 0055ea0f
    LEA EAX,[ESP + 0xe0]                ; 0055ea12
    MOV ECX,0x3f800000                  ; 0055ea19
    PUSH EAX                            ; 0055ea1e
    LEA EAX,[ESP + 0x68]                ; 0055ea1f
    MOV dword ptr [ESP + 0xe4],ECX      ; 0055ea23
    PUSH EAX                            ; 0055ea2a
    MOV dword ptr [ESP + 0xec],EBX      ; 0055ea2b
    MOV dword ptr [ESP + 0xf0],EBX      ; 0055ea32
    CALL FUN_0045b800                   ; 0055ea39
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    LEA ESI,[ESP + 0xd0]                ; 0055ea3e
    ADD ESP,0x8                         ; 0055ea45
    MOV EAX,0x3f800000                  ; 0055ea48
    MOV dword ptr [ESP + 0x140],EBX     ; 0055ea4d
    MOV dword ptr [ESP + 0x144],EAX     ; 0055ea54
    LEA EAX,[ESP + 0x140]               ; 0055ea5b
    MOV dword ptr [ESP + 0x148],EBX     ; 0055ea62
    PUSH EAX                            ; 0055ea69
    LEA EAX,[ESP + 0x68]                ; 0055ea6a
    MOVSD ES:EDI,ESI                    ; 0055ea6e
    MOVSD ES:EDI,ESI                    ; 0055ea6f
    MOVSD ES:EDI,ESI                    ; 0055ea70
    PUSH EAX                            ; 0055ea71
    LEA ESI,[ESP + 0x13c]               ; 0055ea72
    LEA EDI,[ESP + 0xc4]                ; 0055ea79
    CALL FUN_0045b800                   ; 0055ea80
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    LEA ESI,[ESP + 0x13c]               ; 0055ea85
    ADD ESP,0x8                         ; 0055ea8c
    LEA EAX,[ESP + 0x98]                ; 0055ea8f
    MOV dword ptr [ESP + 0x98],EBX      ; 0055ea96
    MOV dword ptr [ESP + 0x9c],EBX      ; 0055ea9d
    MOVSD ES:EDI,ESI                    ; 0055eaa4
    MOVSD ES:EDI,ESI                    ; 0055eaa5
    MOVSD ES:EDI,ESI                    ; 0055eaa6
    PUSH EAX                            ; 0055eaa7
    MOV ESI,0x3f800000                  ; 0055eaa8
    LEA EAX,[ESP + 0x68]                ; 0055eaad
    MOV dword ptr [ESP + 0xa4],ESI      ; 0055eab1
    PUSH EAX                            ; 0055eab8
    LEA ESI,[ESP + 0x10c]               ; 0055eab9
    LEA EDI,[ESP + 0xac]                ; 0055eac0
    CALL FUN_0045b800                   ; 0055eac7
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    LEA ESI,[ESP + 0x10c]               ; 0055eacc
    ADD ESP,0x8                         ; 0055ead3
    MOVSD ES:EDI,ESI                    ; 0055ead6
    MOVSD ES:EDI,ESI                    ; 0055ead7
    MOVSD ES:EDI,ESI                    ; 0055ead8
    PUSH dword ptr [ESP + 0xac]         ; 0055ead9
    PUSH dword ptr [ESP + 0xac]         ; 0055eae0
    PUSH dword ptr [ESP + 0xac]         ; 0055eae7
    PUSH dword ptr [ESP + 0xd0]         ; 0055eaee
    PUSH dword ptr [ESP + 0xd0]         ; 0055eaf5
    PUSH dword ptr [ESP + 0xd0]         ; 0055eafc
    PUSH dword ptr [ESP + 0x130]        ; 0055eb03
    PUSH dword ptr [ESP + 0x130]        ; 0055eb0a
    PUSH dword ptr [ESP + 0x130]        ; 0055eb11
    CALL FUN_00557080                   ; 0055eb18
        ;   XREF to: 00557080 (UNCONDITIONAL_CALL)  ; undefined FUN_00557080()
    MOV EAX,[0x005fe9dc]                ; 0055eb1d | DAT_005fe9dc
    ADD ESP,0x24                        ; 0055eb22
    MOV EDX,dword ptr [EAX + 0x264]     ; 0055eb25 | DAT_01d21570
    MOV dword ptr [0x02cf5698],EBX      ; 0055eb2b | DAT_02cf5698
    TEST EDX,EDX                        ; 0055eb31
    JZ 0x0055ebd0                       ; 0055eb33
        ;   XREF to: 0055ebd0 (CONDITIONAL_JUMP)  ; LAB_0055ebd0
    LEA EAX,[ESP + 0x170]               ; 0055eb39
        ;   Label: LAB_0055eb39
    CMP EAX,0x2cf568c                   ; 0055eb40
    JNZ 0x0055eefa                      ; 0055eb45
        ;   XREF to: 0055eefa (CONDITIONAL_JUMP)  ; LAB_0055eefa
    MOV ESP,EBP                         ; 0055eb4b
        ;   Label: LAB_0055eb4b
    POP EBP                             ; 0055eb4d
    POP EDI                             ; 0055eb4e
    POP ESI                             ; 0055eb4f
    POP EBX                             ; 0055eb50
    RET                                 ; 0055eb51
    LEA EDI,[ESP + 0x128]               ; 0055eb52
        ;   Label: LAB_0055eb52
    MOV ESI,0x1d1e364                   ; 0055eb59
    MOVSD ES:EDI,ESI                    ; 0055eb5e | DAT_01d1e364
    MOVSD ES:EDI,ESI                    ; 0055eb5f | DAT_01d1e368
    MOVSD ES:EDI,ESI                    ; 0055eb60 | DAT_01d1e36c
    LEA EDI,[ESP + 0x8c]                ; 0055eb61
    LEA ESI,[ESP + 0x128]               ; 0055eb68
    LEA EDX,[ESP + 0x8c]                ; 0055eb6f
    LEA EAX,[ESP + 0x170]               ; 0055eb76
    MOVSD ES:EDI,ESI                    ; 0055eb7d
    MOVSD ES:EDI,ESI                    ; 0055eb7e
    MOVSD ES:EDI,ESI                    ; 0055eb7f
    CMP EAX,EDX                         ; 0055eb80
    JZ 0x0055ebae                       ; 0055eb82
        ;   XREF to: 0055ebae (CONDITIONAL_JUMP)  ; LAB_0055ebae
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0055eb84
    MOV dword ptr [ESP + 0x170],EAX     ; 0055eb8b
    MOV EAX,dword ptr [ESP + 0x90]      ; 0055eb92
    MOV dword ptr [ESP + 0x174],EAX     ; 0055eb99
    MOV EAX,dword ptr [ESP + 0x94]      ; 0055eba0
    MOV dword ptr [ESP + 0x178],EAX     ; 0055eba7
    MOV ECX,0xa                         ; 0055ebae
        ;   Label: LAB_0055ebae
    LEA EDI,[ESP + 0x3c]                ; 0055ebb3
    MOV ESI,0x1d1e370                   ; 0055ebb7
    MOVSD.REP ES:EDI,ESI                ; 0055ebbc | DAT_01d1e370 | DAT_01d1e374
    MOV ECX,0xa                         ; 0055ebbe
    LEA EDI,[ESP + 0x64]                ; 0055ebc3
    LEA ESI,[ESP + 0x3c]                ; 0055ebc7
    JMP 0x0055e9d1                      ; 0055ebcb
        ;   XREF to: 0055e9d1 (UNCONDITIONAL_JUMP)  ; LAB_0055e9d1
    PUSH 0x6                            ; 0055ebd0
        ;   Label: LAB_0055ebd0
    MOV EAX,[0x00603b28]                ; 0055ebd2 | DAT_00603b28
    PUSH 0x5d5147                       ; 0055ebd7 | = "castle"
    ADD EAX,0x14d0f0                    ; 0055ebdc
    PUSH EAX                            ; 0055ebe1
    CALL FUN_005a3f90                   ; 0055ebe2
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f90()
    ADD ESP,0xc                         ; 0055ebe7
    TEST EAX,EAX                        ; 0055ebea
    JNZ 0x0055ecff                      ; 0055ebec
        ;   XREF to: 0055ecff (CONDITIONAL_JUMP)  ; LAB_0055ecff
    MOV dword ptr [ESP + 0x1a8],0x1     ; 0055ebf2
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 0055ebfd
        ;   Label: LAB_0055ebfd
    MOV EBX,0x1                         ; 0055ec04
    MOV dword ptr [ESP + 0x1ac],EAX     ; 0055ec09
    MOV EDX,dword ptr [0x02039090]      ; 0055ec10 | DAT_02039090
        ;   Label: LAB_0055ec10
    IMUL EDX,EBX                        ; 0055ec16
    MOV EAX,EDX                         ; 0055ec19
    SAR EDX,0x1f                        ; 0055ec1b
    SHL EDX,0x5                         ; 0055ec1e
    SBB EAX,EDX                         ; 0055ec21
    SAR EAX,0x5                         ; 0055ec23
    MOV EDI,dword ptr [ESP + 0x1ac]     ; 0055ec26
    MOV EDX,dword ptr [0x02039094]      ; 0055ec2d | DAT_02039094
    IMUL EDX,EDI                        ; 0055ec33
    MOV ESI,EAX                         ; 0055ec36
    MOV EAX,EDX                         ; 0055ec38
    SAR EDX,0x1f                        ; 0055ec3a
    SHL EDX,0x5                         ; 0055ec3d
    SBB EAX,EDX                         ; 0055ec40
    SAR EAX,0x5                         ; 0055ec42
    PUSH EAX                            ; 0055ec45
    PUSH ESI                            ; 0055ec46
    PUSH 0x2038f4c                      ; 0055ec47
    LEA ESI,[ESP + 0x104]               ; 0055ec4c
    LEA EDI,[ESP + 0x158]               ; 0055ec53
    CALL FUN_00449eb0                   ; 0055ec5a
        ;   XREF to: 00449eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00449eb0()
    LEA ESI,[ESP + 0x104]               ; 0055ec5f
    ADD ESP,0xc                         ; 0055ec66
    MOVSD ES:EDI,ESI                    ; 0055ec69
    MOVSD ES:EDI,ESI                    ; 0055ec6a
    MOVSD ES:EDI,ESI                    ; 0055ec6b
    XOR EAX,EAX                         ; 0055ec6c
    MOV EDX,dword ptr [ESP + 0x154]     ; 0055ec6e
    MOV dword ptr [ESP + 0x10],EAX      ; 0055ec75
    CMP EDX,0x7fffffff                  ; 0055ec79
    JL 0x0055ed4a                       ; 0055ec7f
        ;   XREF to: 0055ed4a (CONDITIONAL_JUMP)  ; LAB_0055ed4a
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 0055ec85
    FLD float ptr [ESP + 0x10]          ; 0055ec8d
        ;   Label: LAB_0055ec8d
    FLDZ                                ; 0055ec91
    FCOMPP                              ; 0055ec93
    FNSTSW AX                           ; 0055ec95
    SAHF                                ; 0055ec97
    JNC 0x0055eca8                      ; 0055ec98
        ;   XREF to: 0055eca8 (CONDITIONAL_JUMP)  ; LAB_0055eca8
    FLD float ptr [ESP + 0x10]          ; 0055ec9a
    FADD float ptr [0x005d5197]         ; 0055ec9e | DAT_005d5197
    FSTP float ptr [ESP + 0x10]         ; 0055eca4
    FLD float ptr [ESP + 0x10]          ; 0055eca8
        ;   Label: LAB_0055eca8
    FMUL ST0                            ; 0055ecac
    FST float ptr [ESP + 0x10]          ; 0055ecae
    FLD1                                ; 0055ecb2
    FCOMPP                              ; 0055ecb4
    FNSTSW AX                           ; 0055ecb6
    SAHF                                ; 0055ecb8
    JNC 0x0055ecc3                      ; 0055ecb9
        ;   XREF to: 0055ecc3 (CONDITIONAL_JUMP)  ; LAB_0055ecc3
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 0055ecbb
    FLD float ptr [ESP + 0x10]          ; 0055ecc3
        ;   Label: LAB_0055ecc3
    FMUL float ptr [0x005d516f]         ; 0055ecc7 | DAT_005d516f
    FADD float ptr [0x02cf5698]         ; 0055eccd | DAT_02cf5698
    ADD EBX,0x2                         ; 0055ecd3
    FSTP float ptr [0x02cf5698]         ; 0055ecd6 | DAT_02cf5698
    CMP EBX,0x21                        ; 0055ecdc
    JNZ 0x0055ec10                      ; 0055ecdf
        ;   XREF to: 0055ec10 (CONDITIONAL_JUMP)  ; LAB_0055ec10
    MOV EBX,dword ptr [ESP + 0x1a8]     ; 0055ece5
    ADD EBX,0x2                         ; 0055ecec
    MOV dword ptr [ESP + 0x1a8],EBX     ; 0055ecef
    CMP EBX,0x21                        ; 0055ecf6
    JNZ 0x0055ebfd                      ; 0055ecf9
        ;   XREF to: 0055ebfd (CONDITIONAL_JUMP)  ; LAB_0055ebfd
    FLD float ptr [0x02cf5698]          ; 0055ecff | DAT_02cf5698
        ;   Label: LAB_0055ecff
    FMUL ST0                            ; 0055ed05
    FST float ptr [0x02cf5698]          ; 0055ed07 | DAT_02cf5698
    FLDZ                                ; 0055ed0d
    FCOMPP                              ; 0055ed0f
    FNSTSW AX                           ; 0055ed11
    SAHF                                ; 0055ed13
    JNC 0x0055ed28                      ; 0055ed14
        ;   XREF to: 0055ed28 (CONDITIONAL_JUMP)  ; LAB_0055ed28
    FLD float ptr [0x02cf5698]          ; 0055ed16 | DAT_02cf5698
    FADD float ptr [0x005d5173]         ; 0055ed1c | DAT_005d5173
    FSTP float ptr [0x02cf5698]         ; 0055ed22 | DAT_02cf5698
    FLD float ptr [0x02cf5698]          ; 0055ed28 | DAT_02cf5698
        ;   Label: LAB_0055ed28
    FLD1                                ; 0055ed2e
    FCOMPP                              ; 0055ed30
    FNSTSW AX                           ; 0055ed32
    SAHF                                ; 0055ed34
    JNC 0x0055eb39                      ; 0055ed35
        ;   XREF to: 0055eb39 (CONDITIONAL_JUMP)  ; LAB_0055eb39
    MOV dword ptr [0x02cf5698],0x3f800000 ; 0055ed3b | DAT_02cf5698
    JMP 0x0055eb39                      ; 0055ed45
        ;   XREF to: 0055eb39 (UNCONDITIONAL_JUMP)  ; LAB_0055eb39
    LEA ECX,[EDX + 0xfffffd00]          ; 0055ed4a
        ;   Label: LAB_0055ed4a
    MOV dword ptr [ESP + 0x154],ECX     ; 0055ed50
    CMP ECX,0x1                         ; 0055ed57
    JGE 0x0055ed67                      ; 0055ed5a
        ;   XREF to: 0055ed67 (CONDITIONAL_JUMP)  ; LAB_0055ed67
    MOV dword ptr [ESP + 0x154],0x1     ; 0055ed5c
    LEA EAX,[ESP + 0x14c]               ; 0055ed67
        ;   Label: LAB_0055ed67
    PUSH EAX                            ; 0055ed6e
    PUSH 0x2038f4c                      ; 0055ed6f
    LEA ESI,[ESP + 0x19c]               ; 0055ed74
    LEA EDI,[ESP + 0xb8]                ; 0055ed7b
    CALL FUN_00449f80                   ; 0055ed82
        ;   XREF to: 00449f80 (UNCONDITIONAL_CALL)  ; undefined FUN_00449f80()
    LEA ESI,[ESP + 0x19c]               ; 0055ed87
    ADD ESP,0x8                         ; 0055ed8e
    MOVSD ES:EDI,ESI                    ; 0055ed91
    MOVSD ES:EDI,ESI                    ; 0055ed92
    MOVSD ES:EDI,ESI                    ; 0055ed93
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0055ed94
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0055ed9b
    FILD dword ptr [ESP + 0x1b0]        ; 0055eda2
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0055eda9
    FLD double ptr [0x005d5157]         ; 0055edb0 | DAT_005d5157
    FXCH                                ; 0055edb6
    FMUL ST1                            ; 0055edb8
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0055edba
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0055edc1
    FILD dword ptr [ESP + 0x1b0]        ; 0055edc8
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0055edcf
    FMUL ST2                            ; 0055edd6
    FILD dword ptr [ESP + 0x1b0]        ; 0055edd8
    FMULP ST3                           ; 0055eddf
    LEA EDI,[ESP + 0x188]               ; 0055ede1
    LEA ESI,[ESP + 0x164]               ; 0055ede8
    FXCH                                ; 0055edef
    FST float ptr [ESP + 0x11c]         ; 0055edf1
    FXCH                                ; 0055edf8
    FSTP float ptr [ESP + 0x120]        ; 0055edfa
    FSUB float ptr [ESP + 0x170]        ; 0055ee01
    FLD float ptr [ESP + 0x120]         ; 0055ee08
    FXCH                                ; 0055ee0f
    FSTP float ptr [ESP + 0x164]        ; 0055ee11
    FXCH                                ; 0055ee18
    FSTP float ptr [ESP + 0x124]        ; 0055ee1a
    FSUB float ptr [ESP + 0x174]        ; 0055ee21
    FLD float ptr [ESP + 0x124]         ; 0055ee28
    FSUB float ptr [ESP + 0x178]        ; 0055ee2f
    FXCH                                ; 0055ee36
    FSTP float ptr [ESP + 0x168]        ; 0055ee38
    FSTP float ptr [ESP + 0x16c]        ; 0055ee3f
    MOVSD ES:EDI,ESI                    ; 0055ee46
    MOVSD ES:EDI,ESI                    ; 0055ee47
    MOVSD ES:EDI,ESI                    ; 0055ee48
    FLD float ptr [ESP + 0x18c]         ; 0055ee49
    FMUL ST0                            ; 0055ee50
    FLD float ptr [ESP + 0x188]         ; 0055ee52
    FMUL ST0                            ; 0055ee59
    FADDP                               ; 0055ee5b
    FLD float ptr [ESP + 0x190]         ; 0055ee5d
    FMUL ST0                            ; 0055ee64
    FADDP                               ; 0055ee66
    FSQRT                               ; 0055ee68
    FST double ptr [ESP + 0x8]          ; 0055ee6a
    FCOMP double ptr [0x005d5177]       ; 0055ee6e | DAT_005d5177
    FNSTSW AX                           ; 0055ee74
    SAHF                                ; 0055ee76
    JBE 0x0055ee91                      ; 0055ee77
        ;   XREF to: 0055ee91 (CONDITIONAL_JUMP)  ; LAB_0055ee91
    FLD double ptr [ESP + 0x8]          ; 0055ee79
    FADD double ptr [0x005d517f]        ; 0055ee7d | DAT_005d517f
    FMUL double ptr [0x005d515f]        ; 0055ee83 | DAT_005d515f
    FADD float ptr [ESP + 0x10]         ; 0055ee89
    FSTP float ptr [ESP + 0x10]         ; 0055ee8d
    LEA EAX,[ESP + 0x11c]               ; 0055ee91
        ;   Label: LAB_0055ee91
    FLD1                                ; 0055ee98
    PUSH EAX                            ; 0055ee9a
    MOV EAX,[0x00603b28]                ; 0055ee9b | DAT_00603b28
    FADD float ptr [ESP + 0x124]        ; 0055eea0
    PUSH EAX                            ; 0055eea7
    FSTP float ptr [ESP + 0x128]        ; 0055eea8
    CALL FUN_0053cad0                   ; 0055eeaf
        ;   XREF to: 0053cad0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053cad0()
    MOV dword ptr [ESP + 0x1b8],EAX     ; 0055eeb4
    FLD float ptr [ESP + 0x1b8]         ; 0055eebb
    ADD ESP,0x8                         ; 0055eec2
    FSUB float ptr [ESP + 0x120]        ; 0055eec5
    FST double ptr [ESP]                ; 0055eecc
    FCOMP double ptr [0x005d5187]       ; 0055eecf | DAT_005d5187
    FNSTSW AX                           ; 0055eed5
    SAHF                                ; 0055eed7
    JBE 0x0055ec8d                      ; 0055eed8
        ;   XREF to: 0055ec8d (CONDITIONAL_JUMP)  ; LAB_0055ec8d
    FLD double ptr [ESP]                ; 0055eede
    FADD double ptr [0x005d518f]        ; 0055eee1 | DAT_005d518f
    FMUL double ptr [0x005d5167]        ; 0055eee7 | DAT_005d5167
    FADD float ptr [ESP + 0x10]         ; 0055eeed
    FSTP float ptr [ESP + 0x10]         ; 0055eef1
    JMP 0x0055ec8d                      ; 0055eef5
        ;   XREF to: 0055ec8d (UNCONDITIONAL_JUMP)  ; LAB_0055ec8d
    MOV EAX,dword ptr [ESP + 0x170]     ; 0055eefa
        ;   Label: LAB_0055eefa
    MOV [0x02cf568c],EAX                ; 0055ef01 | DAT_02cf568c
    MOV EAX,dword ptr [ESP + 0x174]     ; 0055ef06
    MOV [0x02cf5690],EAX                ; 0055ef0d | DAT_02cf5690
    MOV EAX,dword ptr [ESP + 0x178]     ; 0055ef12
    MOV [0x02cf5694],EAX                ; 0055ef19 | DAT_02cf5694
    MOV ESP,EBP                         ; 0055ef1e
    POP EBP                             ; 0055ef20
    POP EDI                             ; 0055ef21
    POP ESI                             ; 0055ef22
    POP EBX                             ; 0055ef23
    RET                                 ; 0055ef24

