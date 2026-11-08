; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ae890(int *param_1)
;
; Local Variables:
; undefined        Stack[-0xfc]:1  local_fc
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
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
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
; undefined        Stack[-0x74]:1  local_74
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
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_00550580 at 00550986
;
; Referenced Globals:
;   undefined4 DAT_00607f90
;   undefined4 DAT_00612560
;   undefined4 DAT_00622c18
;   undefined4 DAT_00626050
;   undefined4 DAT_00626068
;   undefined4 DAT_00626080
;   undefined4 DAT_00780000
;   undefined4 DAT_01bc120c
;   undefined4 DAT_02c997f8
;   undefined4 DAT_02c997fc
;   undefined4 DAT_02c99800
;   undefined4 DAT_02c99804
;   undefined4 DAT_02c99808
;   undefined4 DAT_02c9980c
;
; Called Functions:
;   FUN_00483050
;   FUN_004837b0
;   FUN_00483850
;   FUN_00483b70
;   FUN_00483dd0
;   FUN_00483de0
;   FUN_00484f00
;   FUN_00484fd0
;   FUN_00551c30
;   FUN_00552a70
;   FUN_00580173
;   FUN_0058043c
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005ae890
        ;   Label: FUN_005ae890
    PUSH EDI                            ; 005ae891
    PUSH EBP                            ; 005ae892
    SUB ESP,0xf0                        ; 005ae893
    MOV EAX,dword ptr [ESP + 0x100]     ; 005ae899
    CMP dword ptr [EAX],0x0             ; 005ae8a0
    JNZ 0x005ae8af                      ; 005ae8a3
        ;   XREF to: 005ae8af (CONDITIONAL_JUMP)  ; LAB_005ae8af
    ADD ESP,0xf0                        ; 005ae8a5
    POP EBP                             ; 005ae8ab
    POP EDI                             ; 005ae8ac
    POP ESI                             ; 005ae8ad
    RET                                 ; 005ae8ae
    MOV ECX,dword ptr [0x00612560]      ; 005ae8af | DAT_00612560
        ;   Label: LAB_005ae8af
    PUSH ECX                            ; 005ae8b5 | DAT_01bc120c
    LEA ESI,[ESP + 0x8c]                ; 005ae8b6
    LEA EDI,[ESP + 0x2c]                ; 005ae8bd
    CALL FUN_00483b70                   ; 005ae8c1
        ;   XREF to: 00483b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00483b70()
    ADD ESP,0x4                         ; 005ae8c6
    LEA ESI,[ESP + 0x88]                ; 005ae8c9
    MOV EAX,dword ptr [ESP + 0x100]     ; 005ae8d0
    MOVSD ES:EDI,ESI                    ; 005ae8d7
    MOVSD ES:EDI,ESI                    ; 005ae8d8
    MOVSD ES:EDI,ESI                    ; 005ae8d9
    CMP dword ptr [EAX],0x1             ; 005ae8da
    JNZ 0x005ae8e5                      ; 005ae8dd
        ;   XREF to: 005ae8e5 (CONDITIONAL_JUMP)  ; LAB_005ae8e5
    XOR ESI,ESI                         ; 005ae8df
    MOV dword ptr [ESP + 0x28],ESI      ; 005ae8e1
    MOV EAX,dword ptr [ESP + 0x100]     ; 005ae8e5
        ;   Label: LAB_005ae8e5
    CMP dword ptr [EAX],0x1             ; 005ae8ec
    JNZ 0x005aed9e                      ; 005ae8ef
        ;   XREF to: 005aed9e (CONDITIONAL_JUMP)  ; LAB_005aed9e
    PUSH 0x626050                       ; 005ae8f5 | DAT_00626050
    MOV EAX,[0x00612560]                ; 005ae8fa | DAT_00612560
    PUSH EAX                            ; 005ae8ff | DAT_01bc120c
    CALL FUN_00484f00                   ; 005ae900
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    MOV EAX,[0x00612560]                ; 005ae905 | DAT_00612560
    MOV EDX,dword ptr [EAX]             ; 005ae90a | DAT_01bc120c
    MOV dword ptr [EDX + 0x18],0x80000  ; 005ae90c
    MOV EDX,dword ptr [EAX]             ; 005ae913 | DAT_01bc120c
    MOV dword ptr [EDX + 0x1c],0x80000  ; 005ae915
    MOV EDX,dword ptr [EAX]             ; 005ae91c | DAT_01bc120c
    MOV dword ptr [EDX + 0x48],0x780000 ; 005ae91e | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 005ae925 | DAT_01bc120c
    MOV dword ptr [EDX + 0x4c],0x80000  ; 005ae927
    MOV EDX,dword ptr [EAX]             ; 005ae92e | DAT_01bc120c
    MOV dword ptr [EDX + 0x78],0x780000 ; 005ae930 | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 005ae937 | DAT_01bc120c
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 005ae939
    MOV EDX,dword ptr [EAX]             ; 005ae940 | DAT_01bc120c
    MOV dword ptr [EDX + 0xa8],0x80000  ; 005ae942
    MOV EAX,dword ptr [EAX]             ; 005ae94c | DAT_01bc120c
    ADD ESP,0x8                         ; 005ae94e
    MOV dword ptr [EAX + 0xac],0xf80000 ; 005ae951
    PUSH 0x0                            ; 005ae95b
        ;   Label: LAB_005ae95b
    PUSH 0x0                            ; 005ae95d
    PUSH 0x0                            ; 005ae95f
    PUSH 0x0                            ; 005ae961
    PUSH 0x0                            ; 005ae963
    MOV EDX,dword ptr [0x00622c18]      ; 005ae965 | DAT_00622c18
    PUSH EDX                            ; 005ae96b
    CALL FUN_00551c30                   ; 005ae96c
        ;   XREF to: 00551c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00551c30()
    ADD ESP,0x18                        ; 005ae971
    MOV ECX,0x3dcccccd                  ; 005ae974
    MOV EAX,dword ptr [ESP + 0x100]     ; 005ae979
    MOV dword ptr [ESP + 0xe0],ECX      ; 005ae980
    MOV ESI,dword ptr [EAX]             ; 005ae987
    MOV dword ptr [ESP + 0xe4],ECX      ; 005ae989
    CMP ESI,0x1                         ; 005ae990
    JZ 0x005aedb7                       ; 005ae993
        ;   XREF to: 005aedb7 (CONDITIONAL_JUMP)  ; LAB_005aedb7
    PUSH EBX                            ; 005ae999
        ;   Label: LAB_005ae999
    MOV EAX,0x4                         ; 005ae99a
    MOV EBP,0x1                         ; 005ae99f
    MOV ECX,dword ptr [0x00612560]      ; 005ae9a4 | DAT_00612560
    XOR EDX,EDX                         ; 005ae9aa
    MOV dword ptr [ESP + 0x8],EAX       ; 005ae9ac
    MOV dword ptr [ESP + 0x18],EDX      ; 005ae9b0
    MOV dword ptr [ESP + 0x14],EDX      ; 005ae9b4
    MOV dword ptr [ESP + 0x10],EDX      ; 005ae9b8
    MOV dword ptr [ESP + 0xc],EDX       ; 005ae9bc
    MOV dword ptr [ESP + 0x1c],EDX      ; 005ae9c0
    MOV dword ptr [ESP + 0x20],EBP      ; 005ae9c4
    PUSH EBP                            ; 005ae9c8
    MOV EAX,0x2                         ; 005ae9c9
    MOV EDX,0x3                         ; 005ae9ce
    PUSH ECX                            ; 005ae9d3 | DAT_01bc120c
    MOV dword ptr [ESP + 0x2c],EAX      ; 005ae9d4
    MOV dword ptr [ESP + 0x30],EDX      ; 005ae9d8
    CALL FUN_00483dd0                   ; 005ae9dc
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483dd0()
    ADD ESP,0x8                         ; 005ae9e1
    PUSH 0x8000                         ; 005ae9e4
    MOV EBX,dword ptr [0x00612560]      ; 005ae9e9 | DAT_00612560
    PUSH EBX                            ; 005ae9ef | DAT_01bc120c
    MOV ESI,0x2c997f8                   ; 005ae9f0
    XOR EDI,EDI                         ; 005ae9f5
    CALL FUN_00483de0                   ; 005ae9f7
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483de0()
    ADD ESP,0x8                         ; 005ae9fc
    MOV EBP,dword ptr [0x00612560]      ; 005ae9ff | DAT_00612560
        ;   Label: LAB_005ae9ff
    LEA EBX,[ESP + 0x5c]                ; 005aea05
    MOV EAX,ESI                         ; 005aea09
    MOV EBP,dword ptr [EBP]             ; 005aea0b | DAT_01bc120c
    FLD float ptr [EAX]                 ; 005aea0e | DAT_02c997f8 | DAT_02c99804
    FMUL float ptr [0x00607f90]         ; 005aea10 | DAT_00607f90
    FISTP dword ptr [EBX]               ; 005aea16
    FLD float ptr [EAX + 0x4]           ; 005aea18 | DAT_02c997fc | DAT_02c99808
    FMUL float ptr [0x00607f90]         ; 005aea1b | DAT_00607f90
    FISTP dword ptr [EBX + 0x4]         ; 005aea21
    FLD float ptr [EAX + 0x8]           ; 005aea24 | DAT_02c99800 | DAT_02c9980c
    FMUL float ptr [0x00607f90]         ; 005aea27 | DAT_00607f90
    FISTP dword ptr [EBX + 0x8]         ; 005aea2d
    LEA EAX,[ESP + 0x5c]                ; 005aea30
    PUSH EAX                            ; 005aea34
    PUSH EBP                            ; 005aea35
    CALL FUN_0058043c                   ; 005aea36
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; undefined FUN_0058043c()
    ADD ESP,0x8                         ; 005aea3b
    PUSH EBP                            ; 005aea3e
    MOV EBP,dword ptr [0x00612560]      ; 005aea3f | DAT_00612560
    PUSH EBP                            ; 005aea45 | DAT_01bc120c
    CALL FUN_00484fd0                   ; 005aea46
        ;   XREF to: 00484fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00484fd0()
    ADD ESP,0x8                         ; 005aea4b
    TEST EAX,EAX                        ; 005aea4e
    JZ 0x005aecb3                       ; 005aea50
        ;   XREF to: 005aecb3 (CONDITIONAL_JUMP)  ; LAB_005aecb3
    PUSH ESI                            ; 005aea56 | DAT_02c997f8
    MOV EAX,[0x00612560]                ; 005aea57 | DAT_00612560
    PUSH EAX                            ; 005aea5c | DAT_01bc120c
    CALL FUN_004837b0                   ; 005aea5d
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 005aea62
    PUSH 0x0                            ; 005aea65
    LEA EAX,[ESP + 0x30]                ; 005aea67
    PUSH EAX                            ; 005aea6b
    MOV EDX,dword ptr [0x00612560]      ; 005aea6c | DAT_00612560
    PUSH EDX                            ; 005aea72 | DAT_01bc120c
    CALL FUN_00483850                   ; 005aea73
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 005aea78
    LEA EBX,[ESP + 0xb0]                ; 005aea7b
    MOV EAX,ESI                         ; 005aea82
    FLD float ptr [EAX]                 ; 005aea84 | DAT_02c997f8
    FMUL float ptr [0x00607f90]         ; 005aea86 | DAT_00607f90
    FISTP dword ptr [EBX]               ; 005aea8c
    FLD float ptr [EAX + 0x4]           ; 005aea8e | DAT_02c997fc
    FMUL float ptr [0x00607f90]         ; 005aea91 | DAT_00607f90
    FISTP dword ptr [EBX + 0x4]         ; 005aea97
    FLD float ptr [EAX + 0x8]           ; 005aea9a | DAT_02c99800
    FMUL float ptr [0x00607f90]         ; 005aea9d | DAT_00607f90
    FISTP dword ptr [EBX + 0x8]         ; 005aeaa3
    PUSH 0x4                            ; 005aeaa6
    PUSH 0x0                            ; 005aeaa8
    PUSH 0x0                            ; 005aeaaa
    LEA EAX,[ESP + 0xbc]                ; 005aeaac
    PUSH EAX                            ; 005aeab3
    MOV ECX,dword ptr [0x00622c18]      ; 005aeab4 | DAT_00622c18
    PUSH ECX                            ; 005aeaba
    CALL FUN_00552a70                   ; 005aeabb
        ;   XREF to: 00552a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00552a70()
    ADD ESP,0x14                        ; 005aeac0
    MOV EAX,dword ptr [ESP + 0x104]     ; 005aeac3
    CMP dword ptr [EAX],0x2             ; 005aeaca
    JNZ 0x005aeb3b                      ; 005aeacd
        ;   XREF to: 005aeb3b (CONDITIONAL_JUMP)  ; LAB_005aeb3b
    MOV EAX,[0x00612560]                ; 005aeacf | DAT_00612560
    MOV EBX,EDI                         ; 005aead4
    MOV EBP,EDI                         ; 005aead6
    AND EBX,0x3                         ; 005aead8
    AND EBP,0xc                         ; 005aeadb
    MOV EDX,dword ptr [EAX]             ; 005aeade | DAT_01bc120c
    SHL EBX,0x16                        ; 005aeae0
    SAR EBP,0x2                         ; 005aeae3
    LEA ECX,[EBX + 0x80000]             ; 005aeae6
    SHL EBP,0x16                        ; 005aeaec
    MOV dword ptr [EDX + 0x18],ECX      ; 005aeaef
    MOV dword ptr [ESP + 0xe0],ECX      ; 005aeaf2
    MOV ECX,dword ptr [EAX]             ; 005aeaf9 | DAT_01bc120c
    LEA EDX,[EBP + 0x80000]             ; 005aeafb
    MOV dword ptr [ECX + 0x1c],EDX      ; 005aeb01
    MOV ECX,dword ptr [EAX]             ; 005aeb04 | DAT_01bc120c
    ADD EBX,0x380000                    ; 005aeb06
    MOV dword ptr [ECX + 0x48],EBX      ; 005aeb0c
    MOV ECX,dword ptr [EAX]             ; 005aeb0f | DAT_01bc120c
    MOV dword ptr [ECX + 0x4c],EDX      ; 005aeb11
    MOV EDX,dword ptr [EAX]             ; 005aeb14 | DAT_01bc120c
    MOV dword ptr [EDX + 0x78],EBX      ; 005aeb16
    MOV EDX,dword ptr [EAX]             ; 005aeb19 | DAT_01bc120c
    ADD EBP,0x380000                    ; 005aeb1b
    MOV dword ptr [EDX + 0x7c],EBP      ; 005aeb21
    MOV EDX,dword ptr [EAX]             ; 005aeb24 | DAT_01bc120c
    MOV ECX,dword ptr [ESP + 0xe0]      ; 005aeb26
    MOV dword ptr [EDX + 0xa8],ECX      ; 005aeb2d
    MOV EAX,dword ptr [EAX]             ; 005aeb33 | DAT_01bc120c
    MOV dword ptr [EAX + 0xac],EBP      ; 005aeb35
    FLD float ptr [ESP + 0xe8]          ; 005aeb3b
        ;   Label: LAB_005aeb3b
    MOV EAX,dword ptr [ESP + 0xe4]      ; 005aeb42
    LEA EBX,[ESP + 0xd4]                ; 005aeb49
    MOV EDX,dword ptr [0x00612560]      ; 005aeb50 | DAT_00612560
    FCHS                                ; 005aeb56
    XOR EBP,EBP                         ; 005aeb58
    FSTP float ptr [ESP + 0x48]         ; 005aeb5a
    MOV dword ptr [ESP + 0x44],EAX      ; 005aeb5e
    LEA EAX,[ESP + 0x44]                ; 005aeb62
    MOV dword ptr [ESP + 0x4c],EBP      ; 005aeb66
    FLD float ptr [EAX]                 ; 005aeb6a
    FMUL float ptr [0x00607f90]         ; 005aeb6c | DAT_00607f90
    FISTP dword ptr [EBX]               ; 005aeb72
    FLD float ptr [EAX + 0x4]           ; 005aeb74
    FMUL float ptr [0x00607f90]         ; 005aeb77 | DAT_00607f90
    FISTP dword ptr [EBX + 0x4]         ; 005aeb7d
    FLD float ptr [EAX + 0x8]           ; 005aeb80
    FMUL float ptr [0x00607f90]         ; 005aeb83 | DAT_00607f90
    FISTP dword ptr [EBX + 0x8]         ; 005aeb89
    LEA EAX,[ESP + 0xd4]                ; 005aeb8c
    PUSH EAX                            ; 005aeb93
    MOV EAX,dword ptr [EDX]             ; 005aeb94 | DAT_01bc120c
    PUSH EAX                            ; 005aeb96
    CALL FUN_00580173                   ; 005aeb97
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    ADD ESP,0x8                         ; 005aeb9c
    MOV AH,byte ptr [ESP + 0x47]        ; 005aeb9f
    XOR AH,0x80                         ; 005aeba3
    LEA EBX,[ESP + 0x50]                ; 005aeba6
    MOV byte ptr [ESP + 0x47],AH        ; 005aebaa
    LEA EAX,[ESP + 0x44]                ; 005aebae
    MOV EDX,dword ptr [0x00612560]      ; 005aebb2 | DAT_00612560
    FLD float ptr [EAX]                 ; 005aebb8
    FMUL float ptr [0x00607f90]         ; 005aebba | DAT_00607f90
    FISTP dword ptr [EBX]               ; 005aebc0
    FLD float ptr [EAX + 0x4]           ; 005aebc2
    FMUL float ptr [0x00607f90]         ; 005aebc5 | DAT_00607f90
    FISTP dword ptr [EBX + 0x4]         ; 005aebcb
    FLD float ptr [EAX + 0x8]           ; 005aebce
    FMUL float ptr [0x00607f90]         ; 005aebd1 | DAT_00607f90
    FISTP dword ptr [EBX + 0x8]         ; 005aebd7
    LEA EAX,[ESP + 0x50]                ; 005aebda
    PUSH EAX                            ; 005aebde
    MOV EAX,dword ptr [EDX]             ; 005aebdf | DAT_01bc120c
    ADD EAX,0x30                        ; 005aebe1
    PUSH EAX                            ; 005aebe4
    CALL FUN_00580173                   ; 005aebe5
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    ADD ESP,0x8                         ; 005aebea
    MOV DL,byte ptr [ESP + 0x4b]        ; 005aebed
    LEA EBX,[ESP + 0x74]                ; 005aebf1
    XOR DL,0x80                         ; 005aebf5
    LEA EAX,[ESP + 0x44]                ; 005aebf8
    MOV byte ptr [ESP + 0x4b],DL        ; 005aebfc
    MOV EDX,dword ptr [0x00612560]      ; 005aec00 | DAT_00612560
    FLD float ptr [EAX]                 ; 005aec06
    FMUL float ptr [0x00607f90]         ; 005aec08 | DAT_00607f90
    FISTP dword ptr [EBX]               ; 005aec0e
    FLD float ptr [EAX + 0x4]           ; 005aec10
    FMUL float ptr [0x00607f90]         ; 005aec13 | DAT_00607f90
    FISTP dword ptr [EBX + 0x4]         ; 005aec19
    FLD float ptr [EAX + 0x8]           ; 005aec1c
    FMUL float ptr [0x00607f90]         ; 005aec1f | DAT_00607f90
    FISTP dword ptr [EBX + 0x8]         ; 005aec25
    LEA EAX,[ESP + 0x74]                ; 005aec28
    PUSH EAX                            ; 005aec2c
    MOV EAX,dword ptr [EDX]             ; 005aec2d | DAT_01bc120c
    ADD EAX,0x60                        ; 005aec2f
    PUSH EAX                            ; 005aec32
    CALL FUN_00580173                   ; 005aec33
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    ADD ESP,0x8                         ; 005aec38
    MOV DH,byte ptr [ESP + 0x47]        ; 005aec3b
    LEA EBX,[ESP + 0x98]                ; 005aec3f
    XOR DH,0x80                         ; 005aec46
    LEA EAX,[ESP + 0x44]                ; 005aec49
    MOV byte ptr [ESP + 0x47],DH        ; 005aec4d
    MOV EDX,dword ptr [0x00612560]      ; 005aec51 | DAT_00612560
    FLD float ptr [EAX]                 ; 005aec57
    FMUL float ptr [0x00607f90]         ; 005aec59 | DAT_00607f90
    FISTP dword ptr [EBX]               ; 005aec5f
    FLD float ptr [EAX + 0x4]           ; 005aec61
    FMUL float ptr [0x00607f90]         ; 005aec64 | DAT_00607f90
    FISTP dword ptr [EBX + 0x4]         ; 005aec6a
    FLD float ptr [EAX + 0x8]           ; 005aec6d
    FMUL float ptr [0x00607f90]         ; 005aec70 | DAT_00607f90
    FISTP dword ptr [EBX + 0x8]         ; 005aec76
    LEA EAX,[ESP + 0x98]                ; 005aec79
    PUSH EAX                            ; 005aec80
    MOV EAX,dword ptr [EDX]             ; 005aec81 | DAT_01bc120c
    ADD EAX,0x90                        ; 005aec83
    PUSH EAX                            ; 005aec88
    CALL FUN_00580173                   ; 005aec89
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    ADD ESP,0x8                         ; 005aec8e
    LEA EAX,[ESP + 0x4]                 ; 005aec91
    PUSH EAX                            ; 005aec95
    MOV EAX,[0x00612560]                ; 005aec96 | DAT_00612560
    PUSH EAX                            ; 005aec9b | DAT_01bc120c
    CALL FUN_00483050                   ; 005aec9c
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; undefined FUN_00483050()
    ADD ESP,0x8                         ; 005aeca1
    MOV EDX,dword ptr [0x00612560]      ; 005aeca4 | DAT_00612560
    PUSH EDX                            ; 005aecaa | DAT_01bc120c
    CALL thunk_FUN_005084b0             ; 005aecab
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 005aecb0
    INC EDI                             ; 005aecb3
        ;   Label: LAB_005aecb3
    ADD ESI,0xc                         ; 005aecb4
    CMP EDI,0xc8                        ; 005aecb7
    JL 0x005ae9ff                       ; 005aecbd
        ;   XREF to: 005ae9ff (CONDITIONAL_JUMP)  ; LAB_005ae9ff
    MOV EAX,dword ptr [ESP + 0x104]     ; 005aecc3
    CMP dword ptr [EAX],0x1             ; 005aecca
    JNZ 0x005aed82                      ; 005aeccd
        ;   XREF to: 005aed82 (CONDITIONAL_JUMP)  ; LAB_005aed82
    PUSH 0x626068                       ; 005aecd3 | DAT_00626068
    MOV EBX,dword ptr [0x00612560]      ; 005aecd8 | DAT_00612560
    PUSH EBX                            ; 005aecde | DAT_01bc120c
    CALL FUN_00484f00                   ; 005aecdf
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    MOV EAX,[0x00612560]                ; 005aece4 | DAT_00612560
    MOV EDX,dword ptr [EAX]             ; 005aece9 | DAT_01bc120c
    MOV dword ptr [EDX + 0x18],0x80000  ; 005aeceb
    MOV EDX,dword ptr [EAX]             ; 005aecf2 | DAT_01bc120c
    MOV dword ptr [EDX + 0x1c],0x80000  ; 005aecf4
    MOV EDX,dword ptr [EAX]             ; 005aecfb | DAT_01bc120c
    MOV dword ptr [EDX + 0x48],0x780000 ; 005aecfd | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 005aed04 | DAT_01bc120c
    MOV dword ptr [EDX + 0x4c],0x80000  ; 005aed06
    MOV EDX,dword ptr [EAX]             ; 005aed0d | DAT_01bc120c
    MOV dword ptr [EDX + 0x78],0x780000 ; 005aed0f | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 005aed16 | DAT_01bc120c
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 005aed18
    MOV EDX,dword ptr [EAX]             ; 005aed1f | DAT_01bc120c
    XOR EBP,EBP                         ; 005aed21
    MOV dword ptr [EDX + 0xa8],0x80000  ; 005aed23
    ADD ESP,0x8                         ; 005aed2d
    MOV EAX,dword ptr [EAX]             ; 005aed30 | DAT_01bc120c
    MOV dword ptr [ESP + 0xf0],EBP      ; 005aed32
    MOV dword ptr [ESP + 0xec],EBP      ; 005aed39
    MOV dword ptr [EAX + 0xac],0xf80000 ; 005aed40
    CMP byte ptr [EBP + 0x2c9a478],0x0  ; 005aed4a
        ;   Label: LAB_005aed4a
    JNZ 0x005aedd4                      ; 005aed51
        ;   XREF to: 005aedd4 (CONDITIONAL_JUMP)  ; LAB_005aedd4
    MOV EBX,dword ptr [ESP + 0xec]      ; 005aed57
        ;   Label: LAB_005aed57
    MOV ECX,dword ptr [ESP + 0xf0]      ; 005aed5e
    INC EBP                             ; 005aed65
    ADD EBX,0xc                         ; 005aed66
    ADD ECX,0x4                         ; 005aed69
    MOV dword ptr [ESP + 0xec],EBX      ; 005aed6c
    MOV dword ptr [ESP + 0xf0],ECX      ; 005aed73
    CMP EBP,0xc8                        ; 005aed7a
    JL 0x005aed4a                       ; 005aed80
        ;   XREF to: 005aed4a (CONDITIONAL_JUMP)  ; LAB_005aed4a
    PUSH 0x0                            ; 005aed82
        ;   Label: LAB_005aed82
    MOV ESI,dword ptr [0x00612560]      ; 005aed84 | DAT_00612560
    PUSH ESI                            ; 005aed8a | DAT_01bc120c
    CALL FUN_00483dd0                   ; 005aed8b
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483dd0()
    ADD ESP,0x8                         ; 005aed90
    POP EBX                             ; 005aed93
    ADD ESP,0xf0                        ; 005aed94
    POP EBP                             ; 005aed9a
    POP EDI                             ; 005aed9b
    POP ESI                             ; 005aed9c
    RET                                 ; 005aed9d
    PUSH 0x626080                       ; 005aed9e | DAT_00626080
        ;   Label: LAB_005aed9e
    MOV EBP,dword ptr [0x00612560]      ; 005aeda3 | DAT_00612560
    PUSH EBP                            ; 005aeda9 | DAT_01bc120c
    CALL FUN_00484f00                   ; 005aedaa
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD ESP,0x8                         ; 005aedaf
    JMP 0x005ae95b                      ; 005aedb2
        ;   XREF to: 005ae95b (UNCONDITIONAL_JUMP)  ; LAB_005ae95b
    MOV EBP,0xbecccccd                  ; 005aedb7
        ;   Label: LAB_005aedb7
    MOV EDI,0x3d4ccccd                  ; 005aedbc
    MOV dword ptr [ESP + 0xe4],EBP      ; 005aedc1
    MOV dword ptr [ESP + 0xe0],EDI      ; 005aedc8
    JMP 0x005ae999                      ; 005aedcf
        ;   XREF to: 005ae999 (UNCONDITIONAL_JUMP)  ; LAB_005ae999
    MOV ESI,dword ptr [ESP + 0xec]      ; 005aedd4
        ;   Label: LAB_005aedd4
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005aeddb
    LEA EDI,[ESP + 0x38]                ; 005aede2
    LEA ESI,[ESI + 0x2c997f8]           ; 005aede6
    MOV EAX,dword ptr [EAX + 0x2c9a158] ; 005aedec
    MOVSD ES:EDI,ESI                    ; 005aedf2 | DAT_02c99804
    MOVSD ES:EDI,ESI                    ; 005aedf3 | DAT_02c99808
    MOVSD ES:EDI,ESI                    ; 005aedf4 | DAT_02c9980c
    MOV dword ptr [ESP + 0x3c],EAX      ; 005aedf5
    LEA EAX,[ESP + 0x38]                ; 005aedf9
    PUSH EAX                            ; 005aedfd
    MOV EAX,[0x00612560]                ; 005aedfe | DAT_00612560
    PUSH EAX                            ; 005aee03 | DAT_01bc120c
    CALL FUN_004837b0                   ; 005aee04
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 005aee09
    PUSH 0x0                            ; 005aee0c
    LEA EAX,[ESP + 0x30]                ; 005aee0e
    PUSH EAX                            ; 005aee12
    MOV EDX,dword ptr [0x00612560]      ; 005aee13 | DAT_00612560
    PUSH EDX                            ; 005aee19 | DAT_01bc120c
    XOR EBX,EBX                         ; 005aee1a
    CALL FUN_00483850                   ; 005aee1c
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    MOV ECX,0x3e4ccccd                  ; 005aee21
    LEA EAX,[ESP + 0xc8]                ; 005aee26
    ADD ESP,0xc                         ; 005aee2d
    MOV EDX,dword ptr [0x00612560]      ; 005aee30 | DAT_00612560
    MOV dword ptr [ESP + 0xc0],EBX      ; 005aee36
    MOV dword ptr [ESP + 0xc4],EBX      ; 005aee3d
    LEA EBX,[ESP + 0x80]                ; 005aee44
    MOV dword ptr [ESP + 0xbc],ECX      ; 005aee4b
    FLD float ptr [EAX]                 ; 005aee52
    FMUL float ptr [0x00607f90]         ; 005aee54 | DAT_00607f90
    FISTP dword ptr [EBX]               ; 005aee5a
    FLD float ptr [EAX + 0x4]           ; 005aee5c
    FMUL float ptr [0x00607f90]         ; 005aee5f | DAT_00607f90
    FISTP dword ptr [EBX + 0x4]         ; 005aee65
    FLD float ptr [EAX + 0x8]           ; 005aee68
    FMUL float ptr [0x00607f90]         ; 005aee6b | DAT_00607f90
    FISTP dword ptr [EBX + 0x8]         ; 005aee71
    LEA EAX,[ESP + 0x80]                ; 005aee74
    PUSH EAX                            ; 005aee7b
    MOV EAX,dword ptr [EDX]             ; 005aee7c | DAT_01bc120c
    PUSH EAX                            ; 005aee7e
    CALL FUN_00580173                   ; 005aee7f
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    ADD ESP,0x8                         ; 005aee84
    MOV BH,byte ptr [ESP + 0xbf]        ; 005aee87
    XOR BH,0x80                         ; 005aee8e
    LEA EAX,[ESP + 0xbc]                ; 005aee91
    MOV byte ptr [ESP + 0xbf],BH        ; 005aee98
    LEA EBX,[ESP + 0xa4]                ; 005aee9f
    MOV EDX,dword ptr [0x00612560]      ; 005aeea6 | DAT_00612560
    FLD float ptr [EAX]                 ; 005aeeac
    FMUL float ptr [0x00607f90]         ; 005aeeae | DAT_00607f90
    FISTP dword ptr [EBX]               ; 005aeeb4
    FLD float ptr [EAX + 0x4]           ; 005aeeb6
    FMUL float ptr [0x00607f90]         ; 005aeeb9 | DAT_00607f90
    FISTP dword ptr [EBX + 0x4]         ; 005aeebf
    FLD float ptr [EAX + 0x8]           ; 005aeec2
    FMUL float ptr [0x00607f90]         ; 005aeec5 | DAT_00607f90
    FISTP dword ptr [EBX + 0x8]         ; 005aeecb
    LEA EAX,[ESP + 0xa4]                ; 005aeece
    PUSH EAX                            ; 005aeed5
    MOV EAX,dword ptr [EDX]             ; 005aeed6 | DAT_01bc120c
    ADD EAX,0x30                        ; 005aeed8
    PUSH EAX                            ; 005aeedb
    MOV EDI,0x3ecccccd                  ; 005aeedc
    CALL FUN_00580173                   ; 005aeee1
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    LEA EBX,[ESP + 0xd0]                ; 005aeee6
    LEA EAX,[ESP + 0xc4]                ; 005aeeed
    ADD ESP,0x8                         ; 005aeef4
    MOV EDX,dword ptr [0x00612560]      ; 005aeef7 | DAT_00612560
    MOV dword ptr [ESP + 0xc0],EDI      ; 005aeefd
    FLD float ptr [EAX]                 ; 005aef04
    FMUL float ptr [0x00607f90]         ; 005aef06 | DAT_00607f90
    FISTP dword ptr [EBX]               ; 005aef0c
    FLD float ptr [EAX + 0x4]           ; 005aef0e
    FMUL float ptr [0x00607f90]         ; 005aef11 | DAT_00607f90
    FISTP dword ptr [EBX + 0x4]         ; 005aef17
    FLD float ptr [EAX + 0x8]           ; 005aef1a
    FMUL float ptr [0x00607f90]         ; 005aef1d | DAT_00607f90
    FISTP dword ptr [EBX + 0x8]         ; 005aef23
    LEA EAX,[ESP + 0xc8]                ; 005aef26
    PUSH EAX                            ; 005aef2d
    MOV EAX,dword ptr [EDX]             ; 005aef2e | DAT_01bc120c
    ADD EAX,0x60                        ; 005aef30
    PUSH EAX                            ; 005aef33
    CALL FUN_00580173                   ; 005aef34
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    ADD ESP,0x8                         ; 005aef39
    LEA EBX,[ESP + 0x68]                ; 005aef3c
    MOV CL,byte ptr [ESP + 0xbf]        ; 005aef40
    LEA EAX,[ESP + 0xbc]                ; 005aef47
    XOR CL,0x80                         ; 005aef4e
    MOV EDX,dword ptr [0x00612560]      ; 005aef51 | DAT_00612560
    MOV byte ptr [ESP + 0xbf],CL        ; 005aef57
    FLD float ptr [EAX]                 ; 005aef5e
    FMUL float ptr [0x00607f90]         ; 005aef60 | DAT_00607f90
    FISTP dword ptr [EBX]               ; 005aef66
    FLD float ptr [EAX + 0x4]           ; 005aef68
    FMUL float ptr [0x00607f90]         ; 005aef6b | DAT_00607f90
    FISTP dword ptr [EBX + 0x4]         ; 005aef71
    FLD float ptr [EAX + 0x8]           ; 005aef74
    FMUL float ptr [0x00607f90]         ; 005aef77 | DAT_00607f90
    FISTP dword ptr [EBX + 0x8]         ; 005aef7d
    LEA EAX,[ESP + 0x68]                ; 005aef80
    PUSH EAX                            ; 005aef84
    MOV EAX,dword ptr [EDX]             ; 005aef85 | DAT_01bc120c
    ADD EAX,0x90                        ; 005aef87
    PUSH EAX                            ; 005aef8c
    CALL FUN_00580173                   ; 005aef8d
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    ADD ESP,0x8                         ; 005aef92
    LEA EAX,[ESP + 0x4]                 ; 005aef95
    PUSH EAX                            ; 005aef99
    MOV EAX,[0x00612560]                ; 005aef9a | DAT_00612560
    PUSH EAX                            ; 005aef9f | DAT_01bc120c
    CALL FUN_00483050                   ; 005aefa0
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; undefined FUN_00483050()
    ADD ESP,0x8                         ; 005aefa5
    MOV EDX,dword ptr [0x00612560]      ; 005aefa8 | DAT_00612560
    PUSH EDX                            ; 005aefae | DAT_01bc120c
    CALL thunk_FUN_005084b0             ; 005aefaf
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 005aefb4
    JMP 0x005aed57                      ; 005aefb7
        ;   XREF to: 005aed57 (UNCONDITIONAL_JUMP)  ; LAB_005aed57

