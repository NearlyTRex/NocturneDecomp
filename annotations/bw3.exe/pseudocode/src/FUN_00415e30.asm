; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00415e30(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x200]:1  local_200
; undefined        Stack[-0x1d0]:1  local_1d0
; undefined        Stack[-0x1a0]:1  local_1a0
; undefined        Stack[-0x170]:1  local_170
; undefined        Stack[-0x140]:1  local_140
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined        Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00416330 at 004166a9
;
; Referenced Globals:
;   undefined4 DAT_005b6c8a
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   FUN_004088f0
;   FUN_00408b80
;   FUN_0045b550
;   FUN_0045b870
;   FUN_005833e0
;   FUN_00583800
;   FUN_00583940
;   FUN_00583b10
;   FUN_00583fb0
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415e30
        ;   Label: FUN_00415e30
    PUSH ESI                            ; 00415e31
    PUSH EDI                            ; 00415e32
    PUSH EBP                            ; 00415e33
    SUB ESP,0x1f0                       ; 00415e34
    MOV EDX,dword ptr [ESP + 0x208]     ; 00415e3a
    PUSH EDX                            ; 00415e41
    LEA EAX,[ESP + 0x124]               ; 00415e42
    PUSH EAX                            ; 00415e49
    CALL FUN_0045b550                   ; 00415e4a
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b550()
    ADD ESP,0x8                         ; 00415e4f
    FLD float ptr [ESP + 0x120]         ; 00415e52
    FMUL float ptr [0x005b6c8a]         ; 00415e59 | DAT_005b6c8a
    FLD float ptr [ESP + 0x124]         ; 00415e5f
    FMUL float ptr [0x005b6c8a]         ; 00415e66 | DAT_005b6c8a
    FLD float ptr [ESP + 0x128]         ; 00415e6c
    FMUL float ptr [0x005b6c8a]         ; 00415e73 | DAT_005b6c8a
    FLD float ptr [ESP + 0x12c]         ; 00415e79
    FMUL float ptr [0x005b6c8a]         ; 00415e80 | DAT_005b6c8a
    FLD float ptr [ESP + 0x130]         ; 00415e86
    FMUL float ptr [0x005b6c8a]         ; 00415e8d | DAT_005b6c8a
    FLD float ptr [ESP + 0x134]         ; 00415e93
    FMUL float ptr [0x005b6c8a]         ; 00415e9a | DAT_005b6c8a
    FLD float ptr [ESP + 0x138]         ; 00415ea0
    FMUL float ptr [0x005b6c8a]         ; 00415ea7 | DAT_005b6c8a
    FXCH ST6                            ; 00415ead
    CALL FUN_005a3120                   ; 00415eaf
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x1d0]       ; 00415eb4
    FLD float ptr [ESP + 0x13c]         ; 00415ebb
    FMUL float ptr [0x005b6c8a]         ; 00415ec2 | DAT_005b6c8a
    FXCH ST5                            ; 00415ec8
    CALL FUN_005a3120                   ; 00415eca
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x1c4]       ; 00415ecf
    FLD float ptr [ESP + 0x140]         ; 00415ed6
    FMUL float ptr [0x005b6c8a]         ; 00415edd | DAT_005b6c8a
    MOV EAX,dword ptr [ESP + 0x204]     ; 00415ee3
    XOR EDI,EDI                         ; 00415eea
    MOV ECX,dword ptr [EAX + 0x174]     ; 00415eec
    FXCH ST4                            ; 00415ef2
    CALL FUN_005a3120                   ; 00415ef4
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST3                            ; 00415ef9
    CALL FUN_005a3120                   ; 00415efb
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST2                            ; 00415f00
    CALL FUN_005a3120                   ; 00415f02
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 00415f07
    CALL FUN_005a3120                   ; 00415f09
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST6                            ; 00415f0e
    CALL FUN_005a3120                   ; 00415f10
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST5                            ; 00415f15
    CALL FUN_005a3120                   ; 00415f17
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST4                            ; 00415f1c
    CALL FUN_005a3120                   ; 00415f1e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST3                            ; 00415f23
    FISTP dword ptr [ESP + 0x1c8]       ; 00415f25
    FXCH                                ; 00415f2c
    FISTP dword ptr [ESP + 0x1cc]       ; 00415f2e
    FISTP dword ptr [ESP + 0x1dc]       ; 00415f35
    FXCH ST3                            ; 00415f3c
    FISTP dword ptr [ESP + 0x1e0]       ; 00415f3e
    FXCH                                ; 00415f45
    FISTP dword ptr [ESP + 0x1d4]       ; 00415f47
    FISTP dword ptr [ESP + 0x1d8]       ; 00415f4e
    FISTP dword ptr [ESP + 0x1e4]       ; 00415f55
    TEST ECX,ECX                        ; 00415f5c
    JLE 0x00416050                      ; 00415f5e
        ;   XREF to: 00416050 (CONDITIONAL_JUMP)  ; LAB_00416050
    XOR ESI,ESI                         ; 00415f64
    MOV ECX,dword ptr [ESP + 0x204]     ; 00415f66
        ;   Label: LAB_00415f66
    MOV ECX,dword ptr [ECX + 0x178]     ; 00415f6d
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 00415f73
    MOV EDX,dword ptr [ECX + ESI*0x1]   ; 00415f7a
    IMUL EDX                            ; 00415f7d
    SHRD EAX,EDX,0x10                   ; 00415f7f
    MOV EBX,EAX                         ; 00415f83
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4] ; 00415f85
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 00415f89
    IMUL EDX                            ; 00415f90
    SHRD EAX,EDX,0x10                   ; 00415f92
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x8] ; 00415f96
    ADD EBX,EAX                         ; 00415f9a
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 00415f9c
    IMUL EDX                            ; 00415fa3
    SHRD EAX,EDX,0x10                   ; 00415fa5
    MOV EDX,dword ptr [ECX + ESI*0x1]   ; 00415fa9
    LEA EBP,[EBX + EAX*0x1]             ; 00415fac
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 00415faf
    IMUL EDX                            ; 00415fb6
    SHRD EAX,EDX,0x10                   ; 00415fb8
    MOV EBX,EAX                         ; 00415fbc
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4] ; 00415fbe
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 00415fc2
    IMUL EDX                            ; 00415fc9
    SHRD EAX,EDX,0x10                   ; 00415fcb
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x8] ; 00415fcf
    ADD EBX,EAX                         ; 00415fd3
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 00415fd5
    IMUL EDX                            ; 00415fdc
    SHRD EAX,EDX,0x10                   ; 00415fde
    MOV EDX,dword ptr [ECX + ESI*0x1]   ; 00415fe2
    ADD EBX,EAX                         ; 00415fe5
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 00415fe7
    MOV dword ptr [ESP + 0x1c0],EBX     ; 00415fee
    IMUL EDX                            ; 00415ff5
    SHRD EAX,EDX,0x10                   ; 00415ff7
    MOV EBX,EAX                         ; 00415ffb
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4] ; 00415ffd
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 00416001
    IMUL EDX                            ; 00416008
    SHRD EAX,EDX,0x10                   ; 0041600a
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x8] ; 0041600e
    ADD EBX,EAX                         ; 00416012
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 00416014
    IMUL EDX                            ; 0041601b
    SHRD EAX,EDX,0x10                   ; 0041601d
    ADD EAX,EBX                         ; 00416021
    MOV dword ptr [ECX + ESI*0x1],EBP   ; 00416023
    MOV EDX,dword ptr [ESP + 0x1c0]     ; 00416026
    MOV dword ptr [ECX + ESI*0x1 + 0x8],EAX ; 0041602d
    MOV EAX,dword ptr [ESP + 0x204]     ; 00416031
    MOV dword ptr [ECX + ESI*0x1 + 0x4],EDX ; 00416038
    INC EDI                             ; 0041603c
    MOV EBX,dword ptr [EAX + 0x174]     ; 0041603d
    ADD ESI,0xc                         ; 00416043
    CMP EDI,EBX                         ; 00416046
    JL 0x00415f66                       ; 00416048
        ;   XREF to: 00415f66 (CONDITIONAL_JUMP)  ; LAB_00415f66
    MOV EAX,EAX                         ; 0041604e
    MOV EBX,dword ptr [ESP + 0x204]     ; 00416050
        ;   Label: LAB_00416050
    ADD EBX,0x30                        ; 00416057
    PUSH EBX                            ; 0041605a
    PUSH 0x2cfd900                      ; 0041605b | DAT_02cfd900
    LEA EAX,[ESP + 0xc8]                ; 00416060
    PUSH EAX                            ; 00416067
    CALL FUN_00583800                   ; 00416068
        ;   XREF to: 00583800 (UNCONDITIONAL_CALL)  ; undefined FUN_00583800()
    ADD ESP,0xc                         ; 0041606d
    MOV ESI,dword ptr [ESP + 0x208]     ; 00416070
    PUSH ESI                            ; 00416077
    PUSH 0x2cfd900                      ; 00416078 | DAT_02cfd900
    LEA EAX,[ESP + 0x98]                ; 0041607d
    PUSH EAX                            ; 00416084
    CALL FUN_00583800                   ; 00416085
        ;   XREF to: 00583800 (UNCONDITIONAL_CALL)  ; undefined FUN_00583800()
    ADD ESP,0xc                         ; 0041608a
    LEA EAX,[ESP + 0x90]                ; 0041608d
    PUSH EAX                            ; 00416094
    LEA EAX,[ESP + 0xc4]                ; 00416095
    PUSH EAX                            ; 0041609c
    LEA ESI,[ESP + 0xf8]                ; 0041609d
    LEA EDI,[ESP + 0x38]                ; 004160a4
    CALL FUN_005833e0                   ; 004160a8
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005833e0()
    MOV ECX,0xc                         ; 004160ad
    LEA ESI,[ESP + 0xf8]                ; 004160b2
    ADD ESP,0x8                         ; 004160b9
    LEA EAX,[ESP + 0x30]                ; 004160bc
    MOVSD.REP ES:EDI,ESI                ; 004160c0
    PUSH EAX                            ; 004160c2
    LEA ESI,[ESP + 0x170]               ; 004160c3
    LEA EDI,[ESP + 0x194]               ; 004160ca
    CALL FUN_00583fb0                   ; 004160d1
        ;   XREF to: 00583fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00583fb0()
    LEA ESI,[ESP + 0x170]               ; 004160d6
    ADD ESP,0x4                         ; 004160dd
    LEA EAX,[ESP + 0x190]               ; 004160e0
    MOVSD ES:EDI,ESI                    ; 004160e7
    MOVSD ES:EDI,ESI                    ; 004160e8
    MOVSD ES:EDI,ESI                    ; 004160e9
    CMP EBX,EAX                         ; 004160ea
    JZ 0x0041610b                       ; 004160ec
        ;   XREF to: 0041610b (CONDITIONAL_JUMP)  ; LAB_0041610b
    MOV EAX,dword ptr [ESP + 0x190]     ; 004160ee
    MOV dword ptr [EBX],EAX             ; 004160f5
    MOV EAX,dword ptr [ESP + 0x194]     ; 004160f7
    MOV dword ptr [EBX + 0x4],EAX       ; 004160fe
    MOV EAX,dword ptr [ESP + 0x198]     ; 00416101
    MOV dword ptr [EBX + 0x8],EAX       ; 00416108
    MOV EDI,dword ptr [ESP + 0x204]     ; 0041610b
        ;   Label: LAB_0041610b
    PUSH EDI                            ; 00416112
    XOR EBP,EBP                         ; 00416113
    CALL FUN_004088f0                   ; 00416115
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004088f0()
    MOV EDX,dword ptr [EDI + 0x74c]     ; 0041611a
    ADD ESP,0x4                         ; 00416120
    TEST EDX,EDX                        ; 00416123
    JLE 0x004161fa                      ; 00416125
        ;   XREF to: 004161fa (CONDITIONAL_JUMP)  ; LAB_004161fa
    LEA EBX,[EDI + 0x750]               ; 0041612b
    PUSH EBX                            ; 00416131
        ;   Label: LAB_00416131
    LEA EAX,[ESP + 0x124]               ; 00416132
    LEA ESI,[ESP + 0x1ac]               ; 00416139
    PUSH EAX                            ; 00416140
    LEA EDI,[ESP + 0x168]               ; 00416141
    MOV dword ptr [ESP + 0x1f0],EBX     ; 00416148
    CALL FUN_0045b870                   ; 0041614f
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b870()
    LEA ESI,[ESP + 0x1b0]               ; 00416154
    ADD ESP,0x8                         ; 0041615b
    LEA EAX,[ESP + 0x160]               ; 0041615e
    MOVSD ES:EDI,ESI                    ; 00416165
    MOVSD ES:EDI,ESI                    ; 00416166
    MOVSD ES:EDI,ESI                    ; 00416167
    CMP EBX,EAX                         ; 00416168
    JZ 0x00416189                       ; 0041616a
        ;   XREF to: 00416189 (CONDITIONAL_JUMP)  ; LAB_00416189
    MOV EAX,dword ptr [ESP + 0x160]     ; 0041616c
    MOV dword ptr [EBX],EAX             ; 00416173
    MOV EAX,dword ptr [ESP + 0x164]     ; 00416175
    MOV dword ptr [EBX + 0x4],EAX       ; 0041617c
    MOV EAX,dword ptr [ESP + 0x168]     ; 0041617f
    MOV dword ptr [EBX + 0x8],EAX       ; 00416186
    MOV ECX,dword ptr [ESP + 0x1e8]     ; 00416189
        ;   Label: LAB_00416189
    PUSH ECX                            ; 00416190
    MOV ESI,dword ptr [ESP + 0x208]     ; 00416191
    PUSH ESI                            ; 00416198
    LEA ESI,[ESP + 0x1a4]               ; 00416199
    LEA EDI,[ESP + 0x18c]               ; 004161a0
    CALL FUN_00408b80                   ; 004161a7
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x1a4]               ; 004161ac
    ADD ESP,0x8                         ; 004161b3
    MOVSD ES:EDI,ESI                    ; 004161b6
    MOVSD ES:EDI,ESI                    ; 004161b7
    MOVSD ES:EDI,ESI                    ; 004161b8
    MOV ECX,dword ptr [ESP + 0x1e8]     ; 004161b9
    MOV EAX,dword ptr [ESP + 0x184]     ; 004161c0
    MOV dword ptr [ECX + 0x2c],EAX      ; 004161c7
    MOV EAX,dword ptr [ESP + 0x188]     ; 004161ca
    MOV dword ptr [ECX + 0x30],EAX      ; 004161d1
    MOV EAX,dword ptr [ESP + 0x18c]     ; 004161d4
    MOV dword ptr [ECX + 0x34],EAX      ; 004161db
    MOV EAX,dword ptr [ESP + 0x204]     ; 004161de
    INC EBP                             ; 004161e5
    MOV EDI,dword ptr [EAX + 0x74c]     ; 004161e6
    ADD EBX,0x2b0                       ; 004161ec
    CMP EBP,EDI                         ; 004161f2
    JL 0x00416131                       ; 004161f4
        ;   XREF to: 00416131 (CONDITIONAL_JUMP)  ; LAB_00416131
    MOV EAX,dword ptr [ESP + 0x204]     ; 004161fa
        ;   Label: LAB_004161fa
    XOR EBP,EBP                         ; 00416201
    MOV EDX,dword ptr [EAX + 0x28c]     ; 00416203
    MOV dword ptr [ESP + 0x1ec],EBP     ; 00416209
    TEST EDX,EDX                        ; 00416210
    JLE 0x0041631b                      ; 00416212
        ;   XREF to: 0041631b (CONDITIONAL_JUMP)  ; LAB_0041631b
    LEA EBX,[EAX + 0x290]               ; 00416218
    PUSH EBX                            ; 0041621e
        ;   Label: LAB_0041621e
    LEA EAX,[ESP + 0x124]               ; 0041621f
    LEA ESI,[ESP + 0x1b8]               ; 00416226
    PUSH EAX                            ; 0041622d
    LEA EDI,[ESP + 0x180]               ; 0041622e
    MOV EBP,EBX                         ; 00416235
    CALL FUN_0045b870                   ; 00416237
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b870()
    LEA ESI,[ESP + 0x1bc]               ; 0041623c
    ADD ESP,0x8                         ; 00416243
    LEA EAX,[ESP + 0x178]               ; 00416246
    MOVSD ES:EDI,ESI                    ; 0041624d
    MOVSD ES:EDI,ESI                    ; 0041624e
    MOVSD ES:EDI,ESI                    ; 0041624f
    CMP EBX,EAX                         ; 00416250
    JZ 0x00416271                       ; 00416252
        ;   XREF to: 00416271 (CONDITIONAL_JUMP)  ; LAB_00416271
    MOV EAX,dword ptr [ESP + 0x178]     ; 00416254
    MOV dword ptr [EBX],EAX             ; 0041625b
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0041625d
    MOV dword ptr [EBX + 0x4],EAX       ; 00416264
    MOV EAX,dword ptr [ESP + 0x180]     ; 00416267
    MOV dword ptr [EBX + 0x8],EAX       ; 0041626e
    ADD EBP,0xc                         ; 00416271
        ;   Label: LAB_00416271
    PUSH EBP                            ; 00416274
    PUSH 0x2cfd900                      ; 00416275 | DAT_02cfd900
    LEA EAX,[ESP + 0x68]                ; 0041627a
    PUSH EAX                            ; 0041627e
    CALL FUN_00583940                   ; 0041627f
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined FUN_00583940()
    ADD ESP,0xc                         ; 00416284
    LEA EAX,[ESP + 0x90]                ; 00416287
    PUSH EAX                            ; 0041628e
    LEA EAX,[ESP + 0x64]                ; 0041628f
    PUSH EAX                            ; 00416293
    LEA ESI,[ESP + 0x8]                 ; 00416294
    CALL FUN_005833e0                   ; 00416298
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005833e0()
    ADD ESP,0x8                         ; 0041629d
    LEA EAX,[ESP + 0x90]                ; 004162a0
    PUSH EAX                            ; 004162a7
    LEA ESI,[ESP + 0x14c]               ; 004162a8
    LEA EDI,[ESP + 0x158]               ; 004162af
    CALL FUN_00583b10                   ; 004162b6
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00583b10()
    LEA ESI,[ESP + 0x14c]               ; 004162bb
    ADD ESP,0x4                         ; 004162c2
    LEA EAX,[ESP + 0x154]               ; 004162c5
    MOVSD ES:EDI,ESI                    ; 004162cc
    MOVSD ES:EDI,ESI                    ; 004162cd
    MOVSD ES:EDI,ESI                    ; 004162ce
    CMP EBP,EAX                         ; 004162cf
    JZ 0x004162f1                       ; 004162d1
        ;   XREF to: 004162f1 (CONDITIONAL_JUMP)  ; LAB_004162f1
    MOV EAX,dword ptr [ESP + 0x154]     ; 004162d3
    MOV dword ptr [EBP],EAX             ; 004162da
    MOV EAX,dword ptr [ESP + 0x158]     ; 004162dd
    MOV dword ptr [EBP + 0x4],EAX       ; 004162e4
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004162e7
    MOV dword ptr [EBP + 0x8],EAX       ; 004162ee
    MOV ECX,dword ptr [ESP + 0x1ec]     ; 004162f1
        ;   Label: LAB_004162f1
    MOV EDX,dword ptr [ESP + 0x204]     ; 004162f8
    ADD EBX,0x194                       ; 004162ff
    INC ECX                             ; 00416305
    MOV ESI,dword ptr [EDX + 0x28c]     ; 00416306
    MOV dword ptr [ESP + 0x1ec],ECX     ; 0041630c
    CMP ECX,ESI                         ; 00416313
    JL 0x0041621e                       ; 00416315
        ;   XREF to: 0041621e (CONDITIONAL_JUMP)  ; LAB_0041621e
    ADD ESP,0x1f0                       ; 0041631b
        ;   Label: LAB_0041631b
    POP EBP                             ; 00416321
    POP EDI                             ; 00416322
    POP ESI                             ; 00416323
    POP EBX                             ; 00416324
    RET                                 ; 00416325

