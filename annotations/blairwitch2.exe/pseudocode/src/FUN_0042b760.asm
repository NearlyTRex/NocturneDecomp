; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042b760(int param_1,float *param_2)
;
; Local Variables:
; undefined8       Stack[-0x160]:8  local_160
; undefined8       Stack[-0x158]:8  local_158
; undefined4       Stack[-0x150]:4  local_150
; undefined        Stack[-0x14c]:1  local_14c
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
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
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
;   FUN_0042b620 at 0042b6ea
;
; Referenced Globals:
;   undefined4 DAT_005cd336
;   undefined4 DAT_005cd33a
;   undefined4 DAT_005cd33e
;   undefined4 DAT_005f4060
;   undefined4 DAT_00609ae4
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_0046a930
;   FUN_0046b8d0
;   FUN_0046ca00
;   FUN_0055d723
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b760
        ;   Label: FUN_0042b760
    PUSH ESI                            ; 0042b761
    PUSH EDI                            ; 0042b762
    PUSH EBP                            ; 0042b763
    MOV EBP,ESP                         ; 0042b764
    SUB ESP,0x14c                       ; 0042b766
    AND ESP,0xfffffff8                  ; 0042b76c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042b76f
    FLD float ptr [EAX + 0x10a38]       ; 0042b772
    FDIV float ptr [EAX + 0x10a34]      ; 0042b778
    FLD1                                ; 0042b77e
    FSUBRP                              ; 0042b780
    FLD float ptr [EAX + 0x10a30]       ; 0042b782
    FSUB float ptr [EAX + 0x10a2c]      ; 0042b788
    FMULP                               ; 0042b78e
    MOV EDX,0x3f800000                  ; 0042b790
    MOV ECX,0x3dcccccd                  ; 0042b795
    LEA EDI,[ESP + 0x78]                ; 0042b79a
    LEA ESI,[ESP + 0xc0]                ; 0042b79e
    MOV dword ptr [ESP + 0x148],EDX     ; 0042b7a5
    MOV dword ptr [ESP + 0x140],ECX     ; 0042b7ac
    FLD float ptr [EAX + 0x10a2c]       ; 0042b7b3
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042b7b9
    MOV dword ptr [ESP + 0x13c],ECX     ; 0042b7bc
    LEA EDX,[ESP + 0x3c]                ; 0042b7c3
    FLD float ptr [EAX + 0x4]           ; 0042b7c7
    FLD float ptr [EAX]                 ; 0042b7ca
    MOV EAX,dword ptr [EAX + 0x8]       ; 0042b7cc
    FLD float ptr [0x005cd336]          ; 0042b7cf | DAT_005cd336
    FXCH                                ; 0042b7d5
    FADD ST0,ST1                        ; 0042b7d7
    FXCH ST2                            ; 0042b7d9
    FADDP                               ; 0042b7db
    FXCH                                ; 0042b7dd
    FSTP float ptr [ESP + 0xc0]         ; 0042b7df
    MOV dword ptr [ESP + 0xc8],EAX      ; 0042b7e6
    FSTP float ptr [ESP + 0xc4]         ; 0042b7ed
    MOVSD ES:EDI,ESI                    ; 0042b7f4
    MOVSD ES:EDI,ESI                    ; 0042b7f5
    MOVSD ES:EDI,ESI                    ; 0042b7f6
    FADDP                               ; 0042b7f7
    MOV EAX,dword ptr [ESP + 0x78]      ; 0042b7f9
    FSTP float ptr [ESP + 0x10]         ; 0042b7fd
    MOV dword ptr [ESP + 0x84],EAX      ; 0042b801
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0042b808
    LEA EDI,[ESP + 0x60]                ; 0042b80c
    MOV dword ptr [ESP + 0x88],EAX      ; 0042b810
    MOV EAX,dword ptr [ESP + 0x80]      ; 0042b817
    LEA ESI,[ESP + 0x84]                ; 0042b81e
    MOV dword ptr [ESP + 0x8c],EAX      ; 0042b825
    LEA EAX,[ESP + 0x60]                ; 0042b82c
    MOVSD ES:EDI,ESI                    ; 0042b830
    MOVSD ES:EDI,ESI                    ; 0042b831
    MOVSD ES:EDI,ESI                    ; 0042b832
    CMP EDX,EAX                         ; 0042b833
    JZ 0x0042b84f                       ; 0042b835
        ;   XREF to: 0042b84f (CONDITIONAL_JUMP)  ; LAB_0042b84f
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042b837
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042b83b
    MOV EAX,dword ptr [ESP + 0x64]      ; 0042b83f
    MOV dword ptr [ESP + 0x40],EAX      ; 0042b843
    MOV EAX,dword ptr [ESP + 0x68]      ; 0042b847
    MOV dword ptr [ESP + 0x44],EAX      ; 0042b84b
    LEA EBX,[ESP + 0xfc]                ; 0042b84f
        ;   Label: LAB_0042b84f
    LEA EAX,[ESP + 0x3c]                ; 0042b856
    MOV EDX,dword ptr [0x0060b280]      ; 0042b85a | DAT_0060b280
    FLD float ptr [EAX]                 ; 0042b860
    FMUL float ptr [0x005f4060]         ; 0042b862 | DAT_005f4060
    FISTP dword ptr [EBX]               ; 0042b868
    FLD float ptr [EAX + 0x4]           ; 0042b86a
    FMUL float ptr [0x005f4060]         ; 0042b86d | DAT_005f4060
    FISTP dword ptr [EBX + 0x4]         ; 0042b873
    FLD float ptr [EAX + 0x8]           ; 0042b876
    FMUL float ptr [0x005f4060]         ; 0042b879 | DAT_005f4060
    FISTP dword ptr [EBX + 0x8]         ; 0042b87f
    LEA EAX,[ESP + 0xfc]                ; 0042b882
    PUSH EAX                            ; 0042b889
    MOV EAX,dword ptr [EDX]             ; 0042b88a | DAT_01ba5c50
    PUSH EAX                            ; 0042b88c
    LEA EDI,[ESP + 0x50]                ; 0042b88d
    CALL FUN_0055d723                   ; 0042b891
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 0042b896
    LEA ESI,[ESP + 0x114]               ; 0042b899
    FLD float ptr [ESP + 0x140]         ; 0042b8a0
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042b8a7
    FCHS                                ; 0042b8aa
    FADD float ptr [EAX]                ; 0042b8ac
    FLD float ptr [EAX + 0x4]           ; 0042b8ae
    FXCH                                ; 0042b8b1
    FSTP float ptr [ESP + 0x114]        ; 0042b8b3
    MOV EAX,dword ptr [EAX + 0x8]       ; 0042b8ba
    FADD float ptr [ESP + 0x13c]        ; 0042b8bd
    MOV dword ptr [ESP + 0x11c],EAX     ; 0042b8c4
    FSTP float ptr [ESP + 0x118]        ; 0042b8cb
    MOVSD ES:EDI,ESI                    ; 0042b8d2
    MOVSD ES:EDI,ESI                    ; 0042b8d3
    MOVSD ES:EDI,ESI                    ; 0042b8d4
    FLD float ptr [ESP + 0x148]         ; 0042b8d5
    FLD float ptr [ESP + 0x48]          ; 0042b8dc
    FMUL ST1                            ; 0042b8e0
    FLD float ptr [ESP + 0x4c]          ; 0042b8e2
    FMUL ST2                            ; 0042b8e6
    FLD float ptr [ESP + 0x50]          ; 0042b8e8
    FMULP ST3                           ; 0042b8ec
    LEA EDX,[ESP + 0x3c]                ; 0042b8ee
    LEA EAX,[ESP + 0xa8]                ; 0042b8f2
    LEA EDI,[ESP + 0xa8]                ; 0042b8f9
    LEA ESI,[ESP + 0xd8]                ; 0042b900
    FXCH                                ; 0042b907
    FSTP float ptr [ESP + 0xd8]         ; 0042b909
    FSTP float ptr [ESP + 0xdc]         ; 0042b910
    FSTP float ptr [ESP + 0xe0]         ; 0042b917
    MOVSD ES:EDI,ESI                    ; 0042b91e
    MOVSD ES:EDI,ESI                    ; 0042b91f
    MOVSD ES:EDI,ESI                    ; 0042b920
    CMP EDX,EAX                         ; 0042b921
    JZ 0x0042b946                       ; 0042b923
        ;   XREF to: 0042b946 (CONDITIONAL_JUMP)  ; LAB_0042b946
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0042b925
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042b92c
    MOV EAX,dword ptr [ESP + 0xac]      ; 0042b930
    MOV dword ptr [ESP + 0x40],EAX      ; 0042b937
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0042b93b
    MOV dword ptr [ESP + 0x44],EAX      ; 0042b942
    LEA EBX,[ESP + 0x90]                ; 0042b946
        ;   Label: LAB_0042b946
    LEA EAX,[ESP + 0x3c]                ; 0042b94d
    MOV EDX,dword ptr [0x0060b280]      ; 0042b951 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0042b957
    FMUL float ptr [0x005f4060]         ; 0042b959 | DAT_005f4060
    FISTP dword ptr [EBX]               ; 0042b95f
    FLD float ptr [EAX + 0x4]           ; 0042b961
    FMUL float ptr [0x005f4060]         ; 0042b964 | DAT_005f4060
    FISTP dword ptr [EBX + 0x4]         ; 0042b96a
    FLD float ptr [EAX + 0x8]           ; 0042b96d
    FMUL float ptr [0x005f4060]         ; 0042b970 | DAT_005f4060
    FISTP dword ptr [EBX + 0x8]         ; 0042b976
    LEA EAX,[ESP + 0x90]                ; 0042b979
    PUSH EAX                            ; 0042b980
    MOV EAX,dword ptr [EDX]             ; 0042b981 | DAT_01ba5c50
    ADD EAX,0x30                        ; 0042b983
    PUSH EAX                            ; 0042b986
    LEA EDI,[ESP + 0x134]               ; 0042b987
    CALL FUN_0055d723                   ; 0042b98e
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 0042b993
    LEA ESI,[ESP + 0x6c]                ; 0042b996
    FLD float ptr [ESP + 0x13c]         ; 0042b99a
    FLD float ptr [ESP + 0x140]         ; 0042b9a1
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042b9a8
    FXCH                                ; 0042b9ab
    FCHS                                ; 0042b9ad
    FXCH                                ; 0042b9af
    FCHS                                ; 0042b9b1
    FADD float ptr [EAX]                ; 0042b9b3
    FLD float ptr [EAX + 0x4]           ; 0042b9b5
    FXCH                                ; 0042b9b8
    FSTP float ptr [ESP + 0x6c]         ; 0042b9ba
    MOV EAX,dword ptr [EAX + 0x8]       ; 0042b9be
    FADDP                               ; 0042b9c1
    MOV dword ptr [ESP + 0x74],EAX      ; 0042b9c3
    FSTP float ptr [ESP + 0x70]         ; 0042b9c7
    MOVSD ES:EDI,ESI                    ; 0042b9cb
    MOVSD ES:EDI,ESI                    ; 0042b9cc
    MOVSD ES:EDI,ESI                    ; 0042b9cd
    FLD float ptr [ESP + 0x148]         ; 0042b9ce
    FLD float ptr [ESP + 0x12c]         ; 0042b9d5
    FMUL ST1                            ; 0042b9dc
    FLD float ptr [ESP + 0x130]         ; 0042b9de
    FMUL ST2                            ; 0042b9e5
    FLD float ptr [ESP + 0x134]         ; 0042b9e7
    FMULP ST3                           ; 0042b9ee
    LEA EDX,[ESP + 0x3c]                ; 0042b9f0
    LEA EAX,[ESP + 0x120]               ; 0042b9f4
    LEA EDI,[ESP + 0x120]               ; 0042b9fb
    LEA ESI,[ESP + 0xe4]                ; 0042ba02
    FXCH                                ; 0042ba09
    FSTP float ptr [ESP + 0xe4]         ; 0042ba0b
    FSTP float ptr [ESP + 0xe8]         ; 0042ba12
    FSTP float ptr [ESP + 0xec]         ; 0042ba19
    MOVSD ES:EDI,ESI                    ; 0042ba20
    MOVSD ES:EDI,ESI                    ; 0042ba21
    MOVSD ES:EDI,ESI                    ; 0042ba22
    CMP EDX,EAX                         ; 0042ba23
    JZ 0x0042ba48                       ; 0042ba25
        ;   XREF to: 0042ba48 (CONDITIONAL_JUMP)  ; LAB_0042ba48
    MOV EAX,dword ptr [ESP + 0x120]     ; 0042ba27
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042ba2e
    MOV EAX,dword ptr [ESP + 0x124]     ; 0042ba32
    MOV dword ptr [ESP + 0x40],EAX      ; 0042ba39
    MOV EAX,dword ptr [ESP + 0x128]     ; 0042ba3d
    MOV dword ptr [ESP + 0x44],EAX      ; 0042ba44
    LEA EBX,[ESP + 0xf0]                ; 0042ba48
        ;   Label: LAB_0042ba48
    LEA EAX,[ESP + 0x3c]                ; 0042ba4f
    MOV EDX,dword ptr [0x0060b280]      ; 0042ba53 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0042ba59
    FMUL float ptr [0x005f4060]         ; 0042ba5b | DAT_005f4060
    FISTP dword ptr [EBX]               ; 0042ba61
    FLD float ptr [EAX + 0x4]           ; 0042ba63
    FMUL float ptr [0x005f4060]         ; 0042ba66 | DAT_005f4060
    FISTP dword ptr [EBX + 0x4]         ; 0042ba6c
    FLD float ptr [EAX + 0x8]           ; 0042ba6f
    FMUL float ptr [0x005f4060]         ; 0042ba72 | DAT_005f4060
    FISTP dword ptr [EBX + 0x8]         ; 0042ba78
    LEA EAX,[ESP + 0xf0]                ; 0042ba7b
    PUSH EAX                            ; 0042ba82
    MOV EAX,dword ptr [EDX]             ; 0042ba83 | DAT_01ba5c50
    ADD EAX,0x60                        ; 0042ba85
    PUSH EAX                            ; 0042ba88
    LEA EDI,[ESP + 0x110]               ; 0042ba89
    CALL FUN_0055d723                   ; 0042ba90
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 0042ba95
    LEA ESI,[ESP + 0xcc]                ; 0042ba98
    FLD float ptr [ESP + 0x13c]         ; 0042ba9f
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042baa6
    FCHS                                ; 0042baa9
    FLD float ptr [EAX + 0x4]           ; 0042baab
    FLD float ptr [EAX]                 ; 0042baae
    MOV EAX,dword ptr [EAX + 0x8]       ; 0042bab0
    FADD float ptr [ESP + 0x140]        ; 0042bab3
    FXCH                                ; 0042baba
    FADDP ST2,ST0                       ; 0042babc
    FSTP float ptr [ESP + 0xcc]         ; 0042babe
    MOV dword ptr [ESP + 0xd4],EAX      ; 0042bac5
    FSTP float ptr [ESP + 0xd0]         ; 0042bacc
    MOVSD ES:EDI,ESI                    ; 0042bad3
    MOVSD ES:EDI,ESI                    ; 0042bad4
    MOVSD ES:EDI,ESI                    ; 0042bad5
    FLD float ptr [ESP + 0x148]         ; 0042bad6
    FLD float ptr [ESP + 0x108]         ; 0042badd
    FMUL ST1                            ; 0042bae4
    FLD float ptr [ESP + 0x10c]         ; 0042bae6
    FMUL ST2                            ; 0042baed
    FLD float ptr [ESP + 0x110]         ; 0042baef
    FMULP ST3                           ; 0042baf6
    LEA EDX,[ESP + 0x3c]                ; 0042baf8
    LEA EAX,[ESP + 0x9c]                ; 0042bafc
    LEA EDI,[ESP + 0x9c]                ; 0042bb03
    LEA ESI,[ESP + 0x54]                ; 0042bb0a
    FXCH                                ; 0042bb0e
    FSTP float ptr [ESP + 0x54]         ; 0042bb10
    FSTP float ptr [ESP + 0x58]         ; 0042bb14
    FSTP float ptr [ESP + 0x5c]         ; 0042bb18
    MOVSD ES:EDI,ESI                    ; 0042bb1c
    MOVSD ES:EDI,ESI                    ; 0042bb1d
    MOVSD ES:EDI,ESI                    ; 0042bb1e
    CMP EDX,EAX                         ; 0042bb1f
    JZ 0x0042bb44                       ; 0042bb21
        ;   XREF to: 0042bb44 (CONDITIONAL_JUMP)  ; LAB_0042bb44
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0042bb23
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042bb2a
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0042bb2e
    MOV dword ptr [ESP + 0x40],EAX      ; 0042bb35
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0042bb39
    MOV dword ptr [ESP + 0x44],EAX      ; 0042bb40
    LEA EBX,[ESP + 0xb4]                ; 0042bb44
        ;   Label: LAB_0042bb44
    LEA EAX,[ESP + 0x3c]                ; 0042bb4b
    MOV EDX,dword ptr [0x0060b280]      ; 0042bb4f | DAT_0060b280
    FLD float ptr [EAX]                 ; 0042bb55
    FMUL float ptr [0x005f4060]         ; 0042bb57 | DAT_005f4060
    FISTP dword ptr [EBX]               ; 0042bb5d
    FLD float ptr [EAX + 0x4]           ; 0042bb5f
    FMUL float ptr [0x005f4060]         ; 0042bb62 | DAT_005f4060
    FISTP dword ptr [EBX + 0x4]         ; 0042bb68
    FLD float ptr [EAX + 0x8]           ; 0042bb6b
    FMUL float ptr [0x005f4060]         ; 0042bb6e | DAT_005f4060
    FISTP dword ptr [EBX + 0x8]         ; 0042bb74
    LEA EAX,[ESP + 0xb4]                ; 0042bb77
    PUSH EAX                            ; 0042bb7e
    MOV EAX,dword ptr [EDX]             ; 0042bb7f | DAT_01ba5c50
    ADD EAX,0x90                        ; 0042bb81
    PUSH EAX                            ; 0042bb86
    CALL FUN_0055d723                   ; 0042bb87
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 0042bb8c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042bb8f
    MOV EDX,dword ptr [0x0060b280]      ; 0042bb92 | DAT_0060b280
    FLD float ptr [0x005cd33a]          ; 0042bb98 | DAT_005cd33a
    FLD float ptr [EAX + 0x10a3c]       ; 0042bb9e
    FMUL ST1                            ; 0042bba4
    MOV EBX,dword ptr [EDX]             ; 0042bba6 | DAT_01ba5c50
    CALL FUN_005b7ff0                   ; 0042bba8
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x138]       ; 0042bbad
    MOV EAX,dword ptr [ESP + 0x138]     ; 0042bbb4
    MOV dword ptr [EBX + 0x20],EAX      ; 0042bbbb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042bbbe
    FLD float ptr [EAX + 0x10a40]       ; 0042bbc1
    FMUL ST1                            ; 0042bbc7
    MOV EBX,dword ptr [EDX]             ; 0042bbc9
    CALL FUN_005b7ff0                   ; 0042bbcb
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x138]       ; 0042bbd0
    MOV EAX,dword ptr [ESP + 0x138]     ; 0042bbd7
    MOV dword ptr [EBX + 0x24],EAX      ; 0042bbde
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042bbe1
    FLD float ptr [EAX + 0x10a44]       ; 0042bbe4
    FMUL ST1                            ; 0042bbea
    MOV EBX,dword ptr [EDX]             ; 0042bbec
    CALL FUN_005b7ff0                   ; 0042bbee
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x138]       ; 0042bbf3
    MOV EAX,dword ptr [ESP + 0x138]     ; 0042bbfa
    MOV dword ptr [EBX + 0x28],EAX      ; 0042bc01
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042bc04
    FLD float ptr [EAX + 0x10a3c]       ; 0042bc07
    FMUL ST1                            ; 0042bc0d
    MOV EBX,dword ptr [EDX]             ; 0042bc0f
    CALL FUN_005b7ff0                   ; 0042bc11
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x138]       ; 0042bc16
    MOV EAX,dword ptr [ESP + 0x138]     ; 0042bc1d
    MOV dword ptr [EBX + 0x50],EAX      ; 0042bc24
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042bc27
    FLD float ptr [EAX + 0x10a40]       ; 0042bc2a
    FMUL ST1                            ; 0042bc30
    MOV EBX,dword ptr [EDX]             ; 0042bc32
    CALL FUN_005b7ff0                   ; 0042bc34
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x138]       ; 0042bc39
    MOV EAX,dword ptr [ESP + 0x138]     ; 0042bc40
    MOV dword ptr [EBX + 0x54],EAX      ; 0042bc47
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042bc4a
    FLD float ptr [EAX + 0x10a44]       ; 0042bc4d
    FMUL ST1                            ; 0042bc53
    MOV EBX,dword ptr [EDX]             ; 0042bc55
    CALL FUN_005b7ff0                   ; 0042bc57
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x138]       ; 0042bc5c
    MOV EAX,dword ptr [ESP + 0x138]     ; 0042bc63
    MOV dword ptr [EBX + 0x58],EAX      ; 0042bc6a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042bc6d
    FLD float ptr [EAX + 0x10a3c]       ; 0042bc70
    FMUL ST1                            ; 0042bc76
    MOV EBX,dword ptr [EDX]             ; 0042bc78
    CALL FUN_005b7ff0                   ; 0042bc7a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x138]       ; 0042bc7f
    MOV EAX,dword ptr [ESP + 0x138]     ; 0042bc86
    MOV dword ptr [EBX + 0x80],EAX      ; 0042bc8d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042bc93
    FLD float ptr [EAX + 0x10a40]       ; 0042bc96
    FMUL ST1                            ; 0042bc9c
    MOV EBX,dword ptr [EDX]             ; 0042bc9e
    CALL FUN_005b7ff0                   ; 0042bca0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x138]       ; 0042bca5
    MOV EAX,dword ptr [ESP + 0x138]     ; 0042bcac
    MOV dword ptr [EBX + 0x84],EAX      ; 0042bcb3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042bcb9
    FLD float ptr [EAX + 0x10a44]       ; 0042bcbc
    FMUL ST1                            ; 0042bcc2
    MOV EBX,dword ptr [EDX]             ; 0042bcc4
    CALL FUN_005b7ff0                   ; 0042bcc6
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x138]       ; 0042bccb
    MOV EAX,dword ptr [ESP + 0x138]     ; 0042bcd2
    MOV dword ptr [EBX + 0x88],EAX      ; 0042bcd9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042bcdf
    FLD float ptr [EAX + 0x10a3c]       ; 0042bce2
    FMUL ST1                            ; 0042bce8
    MOV EBX,dword ptr [EDX]             ; 0042bcea
    CALL FUN_005b7ff0                   ; 0042bcec
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x138]       ; 0042bcf1
    MOV EAX,dword ptr [ESP + 0x138]     ; 0042bcf8
    MOV dword ptr [EBX + 0xb0],EAX      ; 0042bcff
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042bd05
    FLD float ptr [EAX + 0x10a40]       ; 0042bd08
    FMUL ST1                            ; 0042bd0e
    FLD float ptr [ESP + 0x10]          ; 0042bd10
    FSTP double ptr [ESP]               ; 0042bd14
    MOV EBX,dword ptr [EDX]             ; 0042bd17
    CALL FUN_005b7ff0                   ; 0042bd19
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x138]       ; 0042bd1e
    MOV EAX,dword ptr [ESP + 0x138]     ; 0042bd25
    FLD double ptr [ESP]                ; 0042bd2c
    MOV dword ptr [EBX + 0xb4],EAX      ; 0042bd2f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042bd35
    FMUL double ptr [0x005cd33e]        ; 0042bd38 | DAT_005cd33e
    FLD float ptr [EAX + 0x10a44]       ; 0042bd3e
    FMULP ST2                           ; 0042bd44
    FSTP double ptr [ESP + 0x8]         ; 0042bd46
    MOV EBX,dword ptr [EDX]             ; 0042bd4a
    CALL FUN_005b7ff0                   ; 0042bd4c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x138]       ; 0042bd51
    MOV EAX,dword ptr [ESP + 0x138]     ; 0042bd58
    FLD double ptr [ESP + 0x8]          ; 0042bd5f
    MOV dword ptr [EBX + 0xb8],EAX      ; 0042bd63
    CALL FUN_005b7ff0                   ; 0042bd69
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    MOV EBX,dword ptr [EDX]             ; 0042bd6e
    FISTP dword ptr [ESP + 0x144]       ; 0042bd70
    MOV EAX,dword ptr [ESP + 0x144]     ; 0042bd77
    MOV dword ptr [EBX + 0x2c],EAX      ; 0042bd7e
    MOV EBX,dword ptr [EDX]             ; 0042bd81
    MOV dword ptr [EBX + 0x5c],EAX      ; 0042bd83
    MOV EBX,dword ptr [EDX]             ; 0042bd86
    MOV dword ptr [EBX + 0x8c],EAX      ; 0042bd88
    MOV EBX,dword ptr [EDX]             ; 0042bd8e
    MOV dword ptr [EBX + 0xbc],EAX      ; 0042bd90
    MOV EAX,dword ptr [EDX]             ; 0042bd96
    MOV dword ptr [EAX + 0x18],0x0      ; 0042bd98
    MOV EAX,dword ptr [EDX]             ; 0042bd9f
    MOV dword ptr [EAX + 0x1c],0xff0000 ; 0042bda1
    MOV EAX,dword ptr [EDX]             ; 0042bda8
    MOV dword ptr [EAX + 0x48],0xff0000 ; 0042bdaa
    MOV EAX,dword ptr [EDX]             ; 0042bdb1
    MOV dword ptr [EAX + 0x4c],0xff0000 ; 0042bdb3
    MOV EAX,dword ptr [EDX]             ; 0042bdba
    MOV dword ptr [EAX + 0x78],0xff0000 ; 0042bdbc
    MOV EAX,dword ptr [EDX]             ; 0042bdc3
    MOV dword ptr [EAX + 0x7c],0x0      ; 0042bdc5
    MOV EAX,dword ptr [EDX]             ; 0042bdcc
    MOV ESI,0x4                         ; 0042bdce
    MOV ECX,0x3                         ; 0042bdd3
    MOV dword ptr [EAX + 0xa8],0x0      ; 0042bdd8
    PUSH 0x609ae4                       ; 0042bde2 | DAT_00609ae4
    MOV EAX,dword ptr [EDX]             ; 0042bde7
    XOR EDI,EDI                         ; 0042bde9
    PUSH EDX                            ; 0042bdeb
    MOV dword ptr [EAX + 0xac],0x0      ; 0042bdec
    MOV EAX,0x2                         ; 0042bdf6
    MOV dword ptr [ESP + 0x20],ESI      ; 0042bdfb
    MOV dword ptr [ESP + 0x30],EDI      ; 0042bdff
    MOV dword ptr [ESP + 0x2c],EDI      ; 0042be03
    MOV dword ptr [ESP + 0x28],EDI      ; 0042be07
    MOV dword ptr [ESP + 0x24],EDI      ; 0042be0b
    MOV dword ptr [ESP + 0x34],EDI      ; 0042be0f
    MOV dword ptr [ESP + 0x40],ECX      ; 0042be13
    MOV EDI,0x1                         ; 0042be17
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042be1c
    MOV dword ptr [ESP + 0x38],EDI      ; 0042be20
    CALL FUN_0046ca00                   ; 0042be24
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESP,0x8                         ; 0042be29
    PUSH EDI                            ; 0042be2c
    MOV EBX,dword ptr [0x0060b280]      ; 0042be2d | DAT_0060b280
    PUSH EBX                            ; 0042be33 | DAT_01ba5c50
    CALL FUN_0046b8d0                   ; 0042be34
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8d0()
    ADD ESP,0x8                         ; 0042be39
    LEA EAX,[ESP + 0x14]                ; 0042be3c
    PUSH EAX                            ; 0042be40
    MOV ESI,dword ptr [0x0060b280]      ; 0042be41 | DAT_0060b280
    PUSH ESI                            ; 0042be47 | DAT_01ba5c50
    CALL FUN_0046a930                   ; 0042be48
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; undefined FUN_0046a930()
    ADD ESP,0x8                         ; 0042be4d
    PUSH 0x0                            ; 0042be50
    MOV EDI,dword ptr [0x0060b280]      ; 0042be52 | DAT_0060b280
    PUSH EDI                            ; 0042be58 | DAT_01ba5c50
    CALL FUN_0046b8d0                   ; 0042be59
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8d0()
    ADD ESP,0x8                         ; 0042be5e
    MOV ESP,EBP                         ; 0042be61
    POP EBP                             ; 0042be63
    POP EDI                             ; 0042be64
    POP ESI                             ; 0042be65
    POP EBX                             ; 0042be66
    RET                                 ; 0042be67

