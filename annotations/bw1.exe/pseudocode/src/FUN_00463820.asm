; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00463820(int param_1)
;
; Local Variables:
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
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x70]:1  local_70
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
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00550580 at 00550cb2
;
; Referenced Globals:
;   undefined4 DAT_005d9184
;   undefined4 DAT_005d918c
;   undefined4 DAT_005febd0
;   undefined4 DAT_006122c0
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c51cac
;
; Called Functions:
;   FUN_00464190
;   FUN_00482e30
;   FUN_004837b0
;   FUN_00483850
;   FUN_00483ac0
;   FUN_00483b70
;   FUN_00483dd0
;   FUN_00484f00
;   FUN_00580173
;   FUN_005c03a0
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463820
        ;   Label: FUN_00463820
    PUSH ESI                            ; 00463821
    PUSH EDI                            ; 00463822
    PUSH EBP                            ; 00463823
    MOV EBP,ESP                         ; 00463824
    SUB ESP,0xe4                        ; 00463826
    AND ESP,0xfffffff8                  ; 0046382c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046382f
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 00463832
    JNZ 0x00463851                      ; 00463839
        ;   XREF to: 00463851 (CONDITIONAL_JUMP)  ; LAB_00463851
    MOV ESP,EBP                         ; 0046383b
    POP EBP                             ; 0046383d
    POP EDI                             ; 0046383e
    POP ESI                             ; 0046383f
    POP EBX                             ; 00463840
    LEA EAX,[EAX]                       ; 00463841
    LEA EDX,[EDX]                       ; 00463847
    LEA EAX,[EAX]                       ; 0046384d
    LEA EBX,[EAX + 0x4]                 ; 00463851
        ;   Label: LAB_00463851
    PUSH EBX                            ; 00463854
    MOV ECX,dword ptr [0x00612560]      ; 00463855 | DAT_00612560
    PUSH ECX                            ; 0046385b | DAT_01bc120c
    CALL FUN_004837b0                   ; 0046385c
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 00463861
    MOV ESI,dword ptr [0x00612560]      ; 00463864 | DAT_00612560
    PUSH ESI                            ; 0046386a | DAT_01bc120c
    LEA ESI,[ESP + 0x8c]                ; 0046386b
    LEA EDI,[ESP + 0x50]                ; 00463872
    CALL FUN_00483b70                   ; 00463876
        ;   XREF to: 00483b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00483b70()
    ADD ESP,0x4                         ; 0046387b
    LEA ESI,[ESP + 0x88]                ; 0046387e
    LEA EAX,[ESP + 0x4c]                ; 00463885
    PUSH 0x0                            ; 00463889
    MOVSD ES:EDI,ESI                    ; 0046388b
    MOVSD ES:EDI,ESI                    ; 0046388c
    MOVSD ES:EDI,ESI                    ; 0046388d
    PUSH EAX                            ; 0046388e
    MOV EDI,dword ptr [0x00612560]      ; 0046388f | DAT_00612560
    PUSH EDI                            ; 00463895 | DAT_01bc120c
    CALL FUN_00483850                   ; 00463896
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 0046389b
    MOV EAX,[0x00612560]                ; 0046389e | DAT_00612560
    PUSH EAX                            ; 004638a3 | DAT_01bc120c
    LEA ESI,[ESP + 0x80]                ; 004638a4
    LEA EDI,[ESP + 0x98]                ; 004638ab
    CALL FUN_00483ac0                   ; 004638b2
        ;   XREF to: 00483ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483ac0()
    LEA ESI,[ESP + 0x80]                ; 004638b7
    ADD ESP,0x4                         ; 004638be
    MOVSD ES:EDI,ESI                    ; 004638c1
    MOVSD ES:EDI,ESI                    ; 004638c2
    MOVSD ES:EDI,ESI                    ; 004638c3
    MOV EAX,dword ptr [ESP + 0x94]      ; 004638c4
    MOV dword ptr [ESP + 0xe0],EAX      ; 004638cb
    FILD dword ptr [ESP + 0xe0]         ; 004638d2
    MOV EAX,dword ptr [ESP + 0x98]      ; 004638d9
    FLD double ptr [0x005d9184]         ; 004638e0 | DAT_005d9184
    FXCH                                ; 004638e6
    FMUL ST1                            ; 004638e8
    MOV dword ptr [ESP + 0xe0],EAX      ; 004638ea
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004638f1
    FILD dword ptr [ESP + 0xe0]         ; 004638f8
    MOV dword ptr [ESP + 0xe0],EAX      ; 004638ff
    FMUL ST2                            ; 00463906
    FILD dword ptr [ESP + 0xe0]         ; 00463908
    FMULP ST3                           ; 0046390f
    LEA EDX,[ESP + 0x58]                ; 00463911
    FLD float ptr [EBX]                 ; 00463915
    FLD float ptr [EBX + 0x4]           ; 00463917
    FLD float ptr [EBX + 0x8]           ; 0046391a
    LEA EDI,[ESP + 0xb8]                ; 0046391d
    LEA ESI,[ESP + 0x64]                ; 00463924
    FXCH ST4                            ; 00463928
    FSTP float ptr [ESP + 0x70]         ; 0046392a
    FXCH                                ; 0046392e
    FSUB float ptr [ESP + 0x70]         ; 00463930
    FXCH ST2                            ; 00463934
    FSTP float ptr [ESP + 0x74]         ; 00463936
    FXCH                                ; 0046393a
    FSTP float ptr [ESP + 0x64]         ; 0046393c
    LEA EAX,[ESP + 0xb8]                ; 00463940
    FSUB float ptr [ESP + 0x74]         ; 00463947
    FXCH ST2                            ; 0046394b
    FSTP float ptr [ESP + 0x78]         ; 0046394d
    FSUB float ptr [ESP + 0x78]         ; 00463951
    FXCH                                ; 00463955
    FSTP float ptr [ESP + 0x68]         ; 00463957
    FSTP float ptr [ESP + 0x6c]         ; 0046395b
    MOVSD ES:EDI,ESI                    ; 0046395f
    MOVSD ES:EDI,ESI                    ; 00463960
    MOVSD ES:EDI,ESI                    ; 00463961
    CMP EDX,EAX                         ; 00463962
    JZ 0x00463987                       ; 00463964
        ;   XREF to: 00463987 (CONDITIONAL_JUMP)  ; LAB_00463987
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00463966
    MOV dword ptr [ESP + 0x58],EAX      ; 0046396d
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00463971
    MOV dword ptr [ESP + 0x5c],EAX      ; 00463978
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0046397c
    MOV dword ptr [ESP + 0x60],EAX      ; 00463983
    FLD float ptr [ESP + 0x5c]          ; 00463987
        ;   Label: LAB_00463987
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046398b
    FMUL float ptr [ESP + 0x5c]         ; 0046398e
    MOV EAX,dword ptr [EAX + 0x18]      ; 00463992
    FLD float ptr [ESP + 0x58]          ; 00463995
    FMUL ST0                            ; 00463999
    MOV dword ptr [ESP + 0xac],EAX      ; 0046399b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004639a2
    FADDP                               ; 004639a5
    MOV EAX,dword ptr [EAX + 0x24]      ; 004639a7
    FLD float ptr [ESP + 0x60]          ; 004639aa
    MOV dword ptr [ESP + 0xb0],EAX      ; 004639ae
    MOV EAX,dword ptr [EBP + 0x14]      ; 004639b5
    FMUL float ptr [ESP + 0x60]         ; 004639b8
    MOV EAX,dword ptr [EAX + 0x30]      ; 004639bc
    FADDP                               ; 004639bf
    MOV dword ptr [ESP + 0xb4],EAX      ; 004639c1
    FSQRT                               ; 004639c8
    FLDZ                                ; 004639ca
    FXCH                                ; 004639cc
    FSTP float ptr [ESP + 0xdc]         ; 004639ce
    FCOMP float ptr [ESP + 0xdc]        ; 004639d5
    FNSTSW AX                           ; 004639dc
    SAHF                                ; 004639de
    JNC 0x00463dca                      ; 004639df
        ;   XREF to: 00463dca (CONDITIONAL_JUMP)  ; LAB_00463dca
    FLD1                                ; 004639e5
    FLD float ptr [ESP + 0x58]          ; 004639e7
    FXCH                                ; 004639eb
    FDIV float ptr [ESP + 0xdc]         ; 004639ed
    FXCH                                ; 004639f4
    FMUL ST1                            ; 004639f6
    FLD float ptr [ESP + 0x5c]          ; 004639f8
    FMUL ST2                            ; 004639fc
    FLD float ptr [ESP + 0x60]          ; 004639fe
    FMULP ST3                           ; 00463a02
    FXCH                                ; 00463a04
    FSTP float ptr [ESP + 0x58]         ; 00463a06
    FSTP float ptr [ESP + 0x5c]         ; 00463a0a
    FSTP float ptr [ESP + 0x60]         ; 00463a0e
    MOV EAX,[0x01c51cac]                ; 00463a12 | DAT_01c51cac
        ;   Label: LAB_00463a12
    MOV EDX,EAX                         ; 00463a17
    SAR EDX,0x1f                        ; 00463a19
    SUB EAX,EDX                         ; 00463a1c
    SAR EAX,0x1                         ; 00463a1e
    FLD float ptr [ESP + 0x5c]          ; 00463a20
    FMUL float ptr [ESP + 0xb0]         ; 00463a24
    FLD float ptr [ESP + 0x58]          ; 00463a2b
    FMUL float ptr [ESP + 0xac]         ; 00463a2f
    FADDP                               ; 00463a36
    FLD float ptr [ESP + 0x60]          ; 00463a38
    FMUL float ptr [ESP + 0xb4]         ; 00463a3c
    FADDP                               ; 00463a43
    FCHS                                ; 00463a45
    FST float ptr [ESP + 0xd0]          ; 00463a47
    FMUL float ptr [ESP + 0xd0]         ; 00463a4e
    FMUL float ptr [ESP + 0xd0]         ; 00463a55
    FMUL float ptr [ESP + 0xd0]         ; 00463a5c
    FMUL double ptr [0x005d918c]        ; 00463a63 | DAT_005d918c
    MOV EDX,0xffff                      ; 00463a69
    CALL FUN_005c03a0                   ; 00463a6e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    SUB EDX,EAX                         ; 00463a73
    FISTP dword ptr [ESP + 0xd8]        ; 00463a75
    MOV EAX,EDX                         ; 00463a7c
    MOV EDX,dword ptr [ESP + 0xd8]      ; 00463a7e
    IMUL EDX                            ; 00463a85
    SHRD EAX,EDX,0x10                   ; 00463a87
    FLDZ                                ; 00463a8b
    MOV ESI,EAX                         ; 00463a8d
    FCOMP float ptr [ESP + 0xd0]        ; 00463a8f
    FNSTSW AX                           ; 00463a96
    SAHF                                ; 00463a98
    JNC 0x00463d98                      ; 00463a99
        ;   XREF to: 00463d98 (CONDITIONAL_JUMP)  ; LAB_00463d98
    MOV EDI,0x40000000                  ; 00463a9f
    MOV EDX,0xbf000000                  ; 00463aa4
    LEA EBX,[ESP + 0x28]                ; 00463aa9
    LEA EAX,[ESP + 0xa0]                ; 00463aad
    MOV dword ptr [ESP + 0xa0],EDI      ; 00463ab4
    MOV dword ptr [ESP + 0xa4],EDI      ; 00463abb
    MOV dword ptr [ESP + 0xa8],EDX      ; 00463ac2
    MOV EDX,dword ptr [0x00612560]      ; 00463ac9 | DAT_00612560
    FLD float ptr [EAX]                 ; 00463acf
    FMUL float ptr [0x005febd0]         ; 00463ad1 | DAT_005febd0
    FISTP dword ptr [EBX]               ; 00463ad7
    FLD float ptr [EAX + 0x4]           ; 00463ad9
    FMUL float ptr [0x005febd0]         ; 00463adc | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00463ae2
    FLD float ptr [EAX + 0x8]           ; 00463ae5
    FMUL float ptr [0x005febd0]         ; 00463ae8 | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 00463aee
    LEA EAX,[ESP + 0x28]                ; 00463af1
    PUSH EAX                            ; 00463af5
    MOV EAX,dword ptr [EDX]             ; 00463af6 | DAT_01bc120c
    PUSH EAX                            ; 00463af8
    CALL FUN_00580173                   ; 00463af9
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    MOV ECX,0xc0000000                  ; 00463afe
    LEA EBX,[ESP + 0x48]                ; 00463b03
    LEA EAX,[ESP + 0xa8]                ; 00463b07
    ADD ESP,0x8                         ; 00463b0e
    MOV EDX,dword ptr [0x00612560]      ; 00463b11 | DAT_00612560
    MOV dword ptr [ESP + 0xa4],EDI      ; 00463b17
    MOV EDI,0xbf000000                  ; 00463b1e
    MOV dword ptr [ESP + 0xa0],ECX      ; 00463b23
    MOV dword ptr [ESP + 0xa8],EDI      ; 00463b2a
    FLD float ptr [EAX]                 ; 00463b31
    FMUL float ptr [0x005febd0]         ; 00463b33 | DAT_005febd0
    FISTP dword ptr [EBX]               ; 00463b39
    FLD float ptr [EAX + 0x4]           ; 00463b3b
    FMUL float ptr [0x005febd0]         ; 00463b3e | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00463b44
    FLD float ptr [EAX + 0x8]           ; 00463b47
    FMUL float ptr [0x005febd0]         ; 00463b4a | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 00463b50
    LEA EAX,[ESP + 0x40]                ; 00463b53
    PUSH EAX                            ; 00463b57
    MOV EAX,dword ptr [EDX]             ; 00463b58 | DAT_01bc120c
    ADD EAX,0x30                        ; 00463b5a
    PUSH EAX                            ; 00463b5d
    CALL FUN_00580173                   ; 00463b5e
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    MOV EAX,0xc0000000                  ; 00463b63
    LEA EBX,[ESP + 0x3c]                ; 00463b68
    ADD ESP,0x8                         ; 00463b6c
    MOV EDX,dword ptr [0x00612560]      ; 00463b6f | DAT_00612560
    MOV dword ptr [ESP + 0xa0],EAX      ; 00463b75
    MOV dword ptr [ESP + 0xa4],EAX      ; 00463b7c
    LEA EAX,[ESP + 0xa0]                ; 00463b83
    MOV dword ptr [ESP + 0xa8],EDI      ; 00463b8a
    FLD float ptr [EAX]                 ; 00463b91
    FMUL float ptr [0x005febd0]         ; 00463b93 | DAT_005febd0
    FISTP dword ptr [EBX]               ; 00463b99
    FLD float ptr [EAX + 0x4]           ; 00463b9b
    FMUL float ptr [0x005febd0]         ; 00463b9e | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00463ba4
    FLD float ptr [EAX + 0x8]           ; 00463ba7
    FMUL float ptr [0x005febd0]         ; 00463baa | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 00463bb0
    LEA EAX,[ESP + 0x34]                ; 00463bb3
    PUSH EAX                            ; 00463bb7
    MOV EAX,dword ptr [EDX]             ; 00463bb8 | DAT_01bc120c
    ADD EAX,0x60                        ; 00463bba
    PUSH EAX                            ; 00463bbd
    MOV EDI,0xc0000000                  ; 00463bbe
    CALL FUN_00580173                   ; 00463bc3
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    MOV EBX,0x40000000                  ; 00463bc8
    MOV EAX,0xbf000000                  ; 00463bcd
    ADD ESP,0x8                         ; 00463bd2
    MOV EDX,dword ptr [0x00612560]      ; 00463bd5 | DAT_00612560
    MOV dword ptr [ESP + 0xa0],EBX      ; 00463bdb
    MOV dword ptr [ESP + 0xa8],EAX      ; 00463be2
    LEA EBX,[ESP + 0xc4]                ; 00463be9
    LEA EAX,[ESP + 0xa0]                ; 00463bf0
    MOV dword ptr [ESP + 0xa4],EDI      ; 00463bf7
    FLD float ptr [EAX]                 ; 00463bfe
    FMUL float ptr [0x005febd0]         ; 00463c00 | DAT_005febd0
    FISTP dword ptr [EBX]               ; 00463c06
    FLD float ptr [EAX + 0x4]           ; 00463c08
    FMUL float ptr [0x005febd0]         ; 00463c0b | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00463c11
    FLD float ptr [EAX + 0x8]           ; 00463c14
    FMUL float ptr [0x005febd0]         ; 00463c17 | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 00463c1d
    LEA EAX,[ESP + 0xc4]                ; 00463c20
    PUSH EAX                            ; 00463c27
    MOV EAX,dword ptr [EDX]             ; 00463c28 | DAT_01bc120c
    ADD EAX,0x90                        ; 00463c2a
    PUSH EAX                            ; 00463c2f
    CALL FUN_00580173                   ; 00463c30
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    ADD ESP,0x8                         ; 00463c35
    MOV EAX,[0x00612560]                ; 00463c38 | DAT_00612560
    MOV EBX,dword ptr [EAX]             ; 00463c3d | DAT_01bc120c
    MOV dword ptr [EBX + 0x18],0xf80000 ; 00463c3f
    MOV EBX,dword ptr [EAX]             ; 00463c46 | DAT_01bc120c
    MOV dword ptr [EBX + 0x1c],0xf80000 ; 00463c48
    MOV EBX,dword ptr [EAX]             ; 00463c4f | DAT_01bc120c
    MOV dword ptr [EBX + 0x2c],ESI      ; 00463c51
    MOV EBX,dword ptr [EAX]             ; 00463c54 | DAT_01bc120c
    MOV dword ptr [EBX + 0x48],0x80000  ; 00463c56
    MOV EDX,dword ptr [EAX]             ; 00463c5d | DAT_01bc120c
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 00463c5f
    MOV EDX,dword ptr [EAX]             ; 00463c66 | DAT_01bc120c
    MOV dword ptr [EDX + 0x5c],ESI      ; 00463c68
    MOV EBX,dword ptr [EAX]             ; 00463c6b | DAT_01bc120c
    MOV dword ptr [EBX + 0x78],0x80000  ; 00463c6d
    MOV EBX,dword ptr [EAX]             ; 00463c74 | DAT_01bc120c
    MOV dword ptr [EBX + 0x7c],0x80000  ; 00463c76
    MOV EBX,dword ptr [EAX]             ; 00463c7d | DAT_01bc120c
    MOV dword ptr [EBX + 0x8c],ESI      ; 00463c7f
    MOV EBX,dword ptr [EAX]             ; 00463c85 | DAT_01bc120c
    MOV dword ptr [EBX + 0xa8],0xf80000 ; 00463c87
    MOV EDX,dword ptr [EAX]             ; 00463c91 | DAT_01bc120c
    MOV dword ptr [EDX + 0xac],0x80000  ; 00463c93
    MOV EDX,dword ptr [EAX]             ; 00463c9d | DAT_01bc120c
    MOV dword ptr [EDX + 0xbc],ESI      ; 00463c9f
    MOV EBX,dword ptr [EAX]             ; 00463ca5 | DAT_01bc120c
    MOV dword ptr [EBX + 0x20],0xffff   ; 00463ca7
    MOV EDX,dword ptr [EAX]             ; 00463cae | DAT_01bc120c
    MOV dword ptr [EDX + 0x24],0xffff   ; 00463cb0
    MOV EDX,dword ptr [EAX]             ; 00463cb7 | DAT_01bc120c
    MOV dword ptr [EDX + 0x28],0xffff   ; 00463cb9
    MOV EBX,dword ptr [EAX]             ; 00463cc0 | DAT_01bc120c
    MOV dword ptr [EBX + 0x50],0xffff   ; 00463cc2
    MOV EDX,dword ptr [EAX]             ; 00463cc9 | DAT_01bc120c
    MOV dword ptr [EDX + 0x54],0xffff   ; 00463ccb
    MOV EDX,dword ptr [EAX]             ; 00463cd2 | DAT_01bc120c
    MOV dword ptr [EDX + 0x58],0xffff   ; 00463cd4
    MOV EDX,dword ptr [EAX]             ; 00463cdb | DAT_01bc120c
    MOV dword ptr [EDX + 0x80],0xffff   ; 00463cdd
    MOV EDX,dword ptr [EAX]             ; 00463ce7 | DAT_01bc120c
    MOV dword ptr [EDX + 0x84],0xffff   ; 00463ce9
    MOV EDX,dword ptr [EAX]             ; 00463cf3 | DAT_01bc120c
    MOV dword ptr [EDX + 0x88],0xffff   ; 00463cf5
    MOV EBX,dword ptr [EAX]             ; 00463cff | DAT_01bc120c
    MOV dword ptr [EBX + 0xb0],0xffff   ; 00463d01
    MOV EDX,dword ptr [EAX]             ; 00463d0b | DAT_01bc120c
    MOV dword ptr [EDX + 0xb4],0xffff   ; 00463d0d
    PUSH 0x6122c0                       ; 00463d17 | DAT_006122c0
    MOV EDX,dword ptr [EAX]             ; 00463d1c | DAT_01bc120c
    PUSH EAX                            ; 00463d1e | DAT_01bc120c
    MOV dword ptr [EDX + 0xb8],0xffff   ; 00463d1f
    CALL FUN_00484f00                   ; 00463d29
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD ESP,0x8                         ; 00463d2e
    PUSH 0x1                            ; 00463d31
    MOV EDX,dword ptr [0x00612560]      ; 00463d33 | DAT_00612560
    MOV EDI,0xffff0001                  ; 00463d39
    PUSH EDX                            ; 00463d3e | DAT_01bc120c
    MOV ESI,0x3                         ; 00463d3f
    XOR EBX,EBX                         ; 00463d44
    CALL FUN_00483dd0                   ; 00463d46
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483dd0()
    MOV ECX,0x4                         ; 00463d4b
    ADD ESP,0x8                         ; 00463d50
    MOV EAX,0xfffe0002                  ; 00463d53
    MOV dword ptr [ESP + 0x4],ECX       ; 00463d58
    MOV dword ptr [ESP + 0x8],EBX       ; 00463d5c
    MOV dword ptr [ESP + 0xc],EBX       ; 00463d60
    MOV dword ptr [ESP + 0x10],EDI      ; 00463d64
    MOV dword ptr [ESP + 0x14],EAX      ; 00463d68
    MOV dword ptr [ESP + 0x18],EBX      ; 00463d6c
    MOV dword ptr [ESP + 0x24],ESI      ; 00463d70
    MOV EAX,ESP                         ; 00463d74
    MOV ECX,0x1                         ; 00463d76
    PUSH EAX                            ; 00463d7b
    MOV EDI,dword ptr [0x00612560]      ; 00463d7c | DAT_00612560
    MOV EBX,0x2                         ; 00463d82
    PUSH EDI                            ; 00463d87 | DAT_01bc120c
    MOV dword ptr [ESP + 0x24],ECX      ; 00463d88
    MOV dword ptr [ESP + 0x28],EBX      ; 00463d8c
    CALL FUN_00482e30                   ; 00463d90
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00482e30()
    ADD ESP,0x8                         ; 00463d95
    PUSH 0x0                            ; 00463d98
        ;   Label: LAB_00463d98
    MOV EAX,[0x00612560]                ; 00463d9a | DAT_00612560
    PUSH EAX                            ; 00463d9f | DAT_01bc120c
    CALL FUN_00483dd0                   ; 00463da0
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483dd0()
    ADD ESP,0x8                         ; 00463da5
    MOV EDX,dword ptr [0x00612560]      ; 00463da8 | DAT_00612560
    PUSH EDX                            ; 00463dae | DAT_01bc120c
    CALL thunk_FUN_005084b0             ; 00463daf
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 00463db4
    MOV ECX,dword ptr [EBP + 0x14]      ; 00463db7
    PUSH ECX                            ; 00463dba
    CALL FUN_00464190                   ; 00463dbb
        ;   XREF to: 00464190 (UNCONDITIONAL_CALL)  ; undefined FUN_00464190()
    ADD ESP,0x4                         ; 00463dc0
    MOV ESP,EBP                         ; 00463dc3
    POP EBP                             ; 00463dc5
    POP EDI                             ; 00463dc6
    POP ESI                             ; 00463dc7
    POP EBX                             ; 00463dc8
    RET                                 ; 00463dc9
    XOR EDX,EDX                         ; 00463dca
        ;   Label: LAB_00463dca
    MOV dword ptr [ESP + 0x5c],EDX      ; 00463dcc
    MOV dword ptr [ESP + 0x58],EDX      ; 00463dd0
    MOV dword ptr [ESP + 0x60],EDX      ; 00463dd4
    JMP 0x00463a12                      ; 00463dd8
        ;   XREF to: 00463a12 (UNCONDITIONAL_JUMP)  ; LAB_00463a12

