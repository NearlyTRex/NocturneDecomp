; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00441800(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   FUN_00441ff0 at 00442046
;   FUN_004c9fa0 at 004c9fe5
;   FUN_00510620 at 00510749
;   FUN_00510910 at 00510994
;   FUN_00594340 at 0059448c
;   FUN_005a6b00 at 005a6b97
;
; Referenced Globals:
;   undefined4 DAT_005d6968
;   undefined4 DAT_00612560
;   undefined4 DAT_00622c18
;   undefined4 DAT_007c9c30
;   undefined4 DAT_007c9c34
;   undefined4 DAT_007c9c48
;   undefined4 DAT_007c9c4c
;   undefined4 DAT_007c9c50
;   undefined4 DAT_007c9c54
;   undefined4 DAT_007c9c58
;   undefined4 DAT_007c9c5c
;   undefined4 DAT_007c9c78
;   undefined4 DAT_007c9c7c
;   undefined4 DAT_007c9cc0
;   undefined4 DAT_01bc120c
;   ... and 1 more
;
; Called Functions:
;   FUN_00483d80
;   FUN_00483de0
;   FUN_00483e20
;   FUN_00483e60
;   FUN_00553140
;   FUN_00553440
;   FUN_005551f0
;   FUN_00597a20
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441800
        ;   Label: FUN_00441800
    PUSH ESI                            ; 00441801
    PUSH EDI                            ; 00441802
    PUSH EBP                            ; 00441803
    SUB ESP,0x14                        ; 00441804
    MOV EBP,dword ptr [ESP + 0x28]      ; 00441807
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0044180b
    MOV EDX,dword ptr [EBP + 0x10c]     ; 0044180f
    PUSH EDX                            ; 00441815
    MOV ECX,dword ptr [EBP + 0x104]     ; 00441816
    PUSH ECX                            ; 0044181c
    MOV ESI,dword ptr [0x00622c18]      ; 0044181d | DAT_00622c18
    PUSH ESI                            ; 00441823 | DAT_01e82168
    CALL FUN_00553140                   ; 00441824
        ;   XREF to: 00553140 (UNCONDITIONAL_CALL)  ; undefined FUN_00553140()
    ADD ESP,0xc                         ; 00441829
    PUSH 0x1                            ; 0044182c
    MOV EDI,dword ptr [0x00612560]      ; 0044182e | DAT_00612560
    PUSH EDI                            ; 00441834 | DAT_01bc120c
    CALL FUN_00483d80                   ; 00441835
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d80()
    ADD ESP,0x8                         ; 0044183a
    PUSH 0xffff                         ; 0044183d
    MOV EAX,[0x00612560]                ; 00441842 | DAT_00612560
    PUSH EAX                            ; 00441847 | DAT_01bc120c
    CALL FUN_00483de0                   ; 00441848
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483de0()
    ADD ESP,0x8                         ; 0044184d
    MOV EDX,dword ptr [0x00612560]      ; 00441850 | DAT_00612560
    PUSH EDX                            ; 00441856 | DAT_01bc120c
    CALL FUN_00483e60                   ; 00441857
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    FLD float ptr [EBP + 0x37b48]       ; 0044185c
    FMUL double ptr [0x005d6968]        ; 00441862 | DAT_005d6968
    ADD ESP,0x4                         ; 00441868
    CALL FUN_005c03a0                   ; 0044186b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x4]         ; 00441870
    MOV ECX,dword ptr [ESP + 0x4]       ; 00441874
    CMP ECX,0x3e8                       ; 00441878
    JL 0x00441a24                       ; 0044187e
        ;   XREF to: 00441a24 (CONDITIONAL_JUMP)  ; LAB_00441a24
    CMP ECX,0xf618                      ; 00441884
    JL 0x00441a2c                       ; 0044188a
        ;   XREF to: 00441a2c (CONDITIONAL_JUMP)  ; LAB_00441a2c
    LEA EAX,[EBP + 0x124]               ; 00441890
        ;   Label: LAB_00441890
    PUSH EAX                            ; 00441896
    CALL FUN_00597a20                   ; 00441897
        ;   XREF to: 00597a20 (UNCONDITIONAL_CALL)  ; undefined FUN_00597a20()
    MOV EDX,dword ptr [EBP + 0x37b44]   ; 0044189c
    ADD ESP,0x4                         ; 004418a2
    TEST EDX,EDX                        ; 004418a5
    JNZ 0x00441a96                      ; 004418a7
        ;   XREF to: 00441a96 (CONDITIONAL_JUMP)  ; LAB_00441a96
    MOV EAX,dword ptr [EBP + 0x110]     ; 004418ad
    PUSH EDX                            ; 004418b3
    MOV EDX,EAX                         ; 004418b4
    SAR EDX,0x1f                        ; 004418b6
    SUB EAX,EDX                         ; 004418b9
    SAR EAX,0x1                         ; 004418bb
    PUSH 0x4                            ; 004418bd
    MOV ESI,dword ptr [EBP + 0x10c]     ; 004418bf
    PUSH ESI                            ; 004418c5
    MOV EDI,dword ptr [EBP + 0x114]     ; 004418c6
    PUSH EDI                            ; 004418cc
    PUSH EAX                            ; 004418cd
    MOV EAX,dword ptr [EBP + 0x104]     ; 004418ce
    PUSH EAX                            ; 004418d4
    MOV EDX,dword ptr [0x00622c18]      ; 004418d5 | DAT_00622c18
    PUSH EDX                            ; 004418db | DAT_01e82168
    CALL FUN_00553440                   ; 004418dc
        ;   XREF to: 00553440 (UNCONDITIONAL_CALL)  ; undefined FUN_00553440()
    ADD ESP,0x1c                        ; 004418e1
    TEST EBX,EBX                        ; 004418e4
    JZ 0x00441940                       ; 004418e6
        ;   XREF to: 00441940 (CONDITIONAL_JUMP)  ; LAB_00441940
    MOV ECX,dword ptr [EBP + 0x39ce8]   ; 004418e8
    XOR EBX,EBX                         ; 004418ee
    TEST ECX,ECX                        ; 004418f0
    JLE 0x00441940                      ; 004418f2
        ;   XREF to: 00441940 (CONDITIONAL_JUMP)  ; LAB_00441940
    MOV EAX,EBP                         ; 004418f4
    MOV EDX,dword ptr [EAX + 0x39cec]   ; 004418f6
        ;   Label: LAB_004418f6
    IMUL EDX,EDX,0x30                   ; 004418fc
    MOV ECX,dword ptr [0x00612560]      ; 004418ff | DAT_00612560
    MOV ESI,dword ptr [ECX]             ; 00441905 | DAT_01bc120c
    ADD ESI,EDX                         ; 00441907
    MOV dword ptr [ESP],ESI             ; 00441909
    MOV EDI,dword ptr [ESP]             ; 0044190c
    MOV ESI,dword ptr [EAX + 0x3a64c]   ; 0044190f
    MOV dword ptr [EDI + 0x20],ESI      ; 00441915
    MOV ESI,dword ptr [ECX]             ; 00441918 | DAT_01bc120c
    MOV EDI,dword ptr [EAX + 0x3a7dc]   ; 0044191a
    MOV dword ptr [EDX + ESI*0x1 + 0x24],EDI ; 00441920
    MOV ECX,dword ptr [ECX]             ; 00441924 | DAT_01bc120c
    ADD EDX,ECX                         ; 00441926
    MOV ECX,dword ptr [EAX + 0x3a96c]   ; 00441928
    MOV dword ptr [EDX + 0x28],ECX      ; 0044192e
    INC EBX                             ; 00441931
    MOV ESI,dword ptr [EBP + 0x39ce8]   ; 00441932
    ADD EAX,0x4                         ; 00441938
    CMP EBX,ESI                         ; 0044193b
    JL 0x004418f6                       ; 0044193d
        ;   XREF to: 004418f6 (CONDITIONAL_JUMP)  ; LAB_004418f6
    NOP                                 ; 0044193f
    CMP dword ptr [ESP + 0x4],0xf618    ; 00441940
        ;   Label: LAB_00441940
    JGE 0x00441a40                      ; 00441948
        ;   XREF to: 00441a40 (CONDITIONAL_JUMP)  ; LAB_00441a40
    MOV EAX,dword ptr [EBP + 0x110]     ; 0044194e
    MOV EDX,EAX                         ; 00441954
    SAR EDX,0x1f                        ; 00441956
    SUB EAX,EDX                         ; 00441959
    SAR EAX,0x1                         ; 0044195b
    PUSH 0x267                          ; 0044195d
    PUSH EAX                            ; 00441962
    MOV ECX,dword ptr [EBP + 0x114]     ; 00441963
    PUSH ECX                            ; 00441969
    MOV EBX,dword ptr [0x00622c18]      ; 0044196a | DAT_00622c18
    PUSH EBX                            ; 00441970 | DAT_01e82168
    CALL FUN_005551f0                   ; 00441971
        ;   XREF to: 005551f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005551f0()
        ;   Label: LAB_00441971
    ADD ESP,0x10                        ; 00441976
    MOV EAX,dword ptr [EBP + 0x110]     ; 00441979
    MOV EDX,EAX                         ; 0044197f
    SAR EDX,0x1f                        ; 00441981
    SUB EAX,EDX                         ; 00441984
    SAR EAX,0x1                         ; 00441986
    PUSH 0x0                            ; 00441988
    MOV EDX,EAX                         ; 0044198a
    SHL EAX,0x3                         ; 0044198c
    MOV ESI,dword ptr [EBP + 0x10c]     ; 0044198f
    LEA ECX,[EDX + EAX*0x1]             ; 00441995
    PUSH 0x4                            ; 00441998
    SHL ECX,0x3                         ; 0044199a
    MOV EAX,dword ptr [EBP + 0x114]     ; 0044199d
    PUSH ESI                            ; 004419a3
    ADD EAX,ECX                         ; 004419a4
    PUSH EAX                            ; 004419a6
    PUSH EDX                            ; 004419a7
    MOV EDI,dword ptr [EBP + 0x104]     ; 004419a8
    PUSH EDI                            ; 004419ae
    MOV EAX,[0x00622c18]                ; 004419af | DAT_00622c18
    PUSH EAX                            ; 004419b4 | DAT_01e82168
    CALL FUN_00553440                   ; 004419b5
        ;   XREF to: 00553440 (UNCONDITIONAL_CALL)  ; undefined FUN_00553440()
    ADD ESP,0x1c                        ; 004419ba
    CMP dword ptr [ESP + 0x4],0xf618    ; 004419bd
    JGE 0x00441a65                      ; 004419c5
        ;   XREF to: 00441a65 (CONDITIONAL_JUMP)  ; LAB_00441a65
    MOV EAX,dword ptr [EBP + 0x110]     ; 004419cb
    MOV EDX,EAX                         ; 004419d1
    SAR EDX,0x1f                        ; 004419d3
    SUB EAX,EDX                         ; 004419d6
    SAR EAX,0x1                         ; 004419d8
    PUSH 0x267                          ; 004419da
    PUSH EAX                            ; 004419df
    MOV EDX,EAX                         ; 004419e0
    SHL EAX,0x3                         ; 004419e2
    ADD EDX,EAX                         ; 004419e5
    SHL EDX,0x3                         ; 004419e7
    MOV EAX,dword ptr [EBP + 0x114]     ; 004419ea
    ADD EAX,EDX                         ; 004419f0
    PUSH EAX                            ; 004419f2
    MOV EBX,dword ptr [0x00622c18]      ; 004419f3 | DAT_00622c18
        ;   Label: LAB_004419f3
    PUSH EBX                            ; 004419f9 | DAT_01e82168
    CALL FUN_005551f0                   ; 004419fa
        ;   XREF to: 005551f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005551f0()
        ;   Label: LAB_004419fa
    ADD ESP,0x10                        ; 004419ff
    PUSH 0x0                            ; 00441a02
    MOV ESI,dword ptr [0x00612560]      ; 00441a04 | DAT_00612560
    PUSH ESI                            ; 00441a0a | DAT_01bc120c
    CALL FUN_00483d80                   ; 00441a0b
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d80()
    ADD ESP,0x8                         ; 00441a10
    PUSH 0x1                            ; 00441a13
    MOV EDI,dword ptr [0x00612560]      ; 00441a15 | DAT_00612560
    PUSH EDI                            ; 00441a1b | DAT_01bc120c
    CALL FUN_00483e20                   ; 00441a1c
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e20()
    ADD ESP,0x8                         ; 00441a21
    ADD ESP,0x14                        ; 00441a24
        ;   Label: LAB_00441a24
    POP EBP                             ; 00441a27
    POP EDI                             ; 00441a28
    POP ESI                             ; 00441a29
    POP EBX                             ; 00441a2a
    RET                                 ; 00441a2b
    PUSH ECX                            ; 00441a2c
        ;   Label: LAB_00441a2c
    MOV EAX,[0x00612560]                ; 00441a2d | DAT_00612560
    PUSH EAX                            ; 00441a32 | DAT_01bc120c
    CALL FUN_00483de0                   ; 00441a33
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483de0()
    ADD ESP,0x8                         ; 00441a38
    JMP 0x00441890                      ; 00441a3b
        ;   XREF to: 00441890 (UNCONDITIONAL_JUMP)  ; LAB_00441890
    MOV EAX,dword ptr [EBP + 0x110]     ; 00441a40
        ;   Label: LAB_00441a40
    MOV EDX,EAX                         ; 00441a46
    SAR EDX,0x1f                        ; 00441a48
    SUB EAX,EDX                         ; 00441a4b
    SAR EAX,0x1                         ; 00441a4d
    PUSH -0x1                           ; 00441a4f
    PUSH EAX                            ; 00441a51
    MOV EAX,dword ptr [EBP + 0x114]     ; 00441a52
    PUSH EAX                            ; 00441a58
    MOV EDX,dword ptr [0x00622c18]      ; 00441a59 | DAT_00622c18
    PUSH EDX                            ; 00441a5f | DAT_01e82168
    JMP 0x00441971                      ; 00441a60
        ;   XREF to: 00441971 (UNCONDITIONAL_JUMP)  ; LAB_00441971
    MOV EAX,dword ptr [EBP + 0x110]     ; 00441a65
        ;   Label: LAB_00441a65
    MOV EDX,EAX                         ; 00441a6b
    SAR EDX,0x1f                        ; 00441a6d
    SUB EAX,EDX                         ; 00441a70
    SAR EAX,0x1                         ; 00441a72
    PUSH -0x1                           ; 00441a74
    PUSH EAX                            ; 00441a76
    MOV EDX,EAX                         ; 00441a77
    SHL EAX,0x3                         ; 00441a79
    ADD EAX,EDX                         ; 00441a7c
    SHL EAX,0x3                         ; 00441a7e
    MOV EDX,dword ptr [EBP + 0x114]     ; 00441a81
    ADD EAX,EDX                         ; 00441a87
    PUSH EAX                            ; 00441a89
    MOV ECX,dword ptr [0x00622c18]      ; 00441a8a | DAT_00622c18
    PUSH ECX                            ; 00441a90 | DAT_01e82168
    JMP 0x004419fa                      ; 00441a91
        ;   XREF to: 004419fa (UNCONDITIONAL_JUMP)  ; LAB_004419fa
    PUSH 0x0                            ; 00441a96
        ;   Label: LAB_00441a96
    PUSH 0x4                            ; 00441a98
    MOV ECX,dword ptr [EBP + 0x10c]     ; 00441a9a
    PUSH ECX                            ; 00441aa0
    MOV ESI,dword ptr [EBP + 0x114]     ; 00441aa1
    PUSH ESI                            ; 00441aa7
    MOV EDI,dword ptr [EBP + 0x110]     ; 00441aa8
    PUSH EDI                            ; 00441aae
    MOV EAX,dword ptr [EBP + 0x104]     ; 00441aaf
    PUSH EAX                            ; 00441ab5
    MOV EDX,dword ptr [0x00622c18]      ; 00441ab6 | DAT_00622c18
    PUSH EDX                            ; 00441abc | DAT_01e82168
    CALL FUN_00553440                   ; 00441abd
        ;   XREF to: 00553440 (UNCONDITIONAL_CALL)  ; undefined FUN_00553440()
    ADD ESP,0x1c                        ; 00441ac2
    TEST EBX,EBX                        ; 00441ac5
    JZ 0x00441b20                       ; 00441ac7
        ;   XREF to: 00441b20 (CONDITIONAL_JUMP)  ; LAB_00441b20
    MOV ECX,dword ptr [EBP + 0x39ce8]   ; 00441ac9
    XOR EBX,EBX                         ; 00441acf
    TEST ECX,ECX                        ; 00441ad1
    JLE 0x00441b20                      ; 00441ad3
        ;   XREF to: 00441b20 (CONDITIONAL_JUMP)  ; LAB_00441b20
    MOV EAX,EBP                         ; 00441ad5
    MOV ECX,dword ptr [EAX + 0x39cec]   ; 00441ad7
        ;   Label: LAB_00441ad7
    IMUL ECX,ECX,0x30                   ; 00441add
    MOV EDX,dword ptr [0x00612560]      ; 00441ae0 | DAT_00612560
    MOV EDI,dword ptr [EDX]             ; 00441ae6 | DAT_01bc120c
    MOV ESI,dword ptr [EAX + 0x3a64c]   ; 00441ae8
    MOV dword ptr [ECX + EDI*0x1 + 0x20],ESI ; 00441aee
    MOV ESI,dword ptr [EDX]             ; 00441af2 | DAT_01bc120c
    ADD ESI,ECX                         ; 00441af4
    MOV dword ptr [ESP],ESI             ; 00441af6
    MOV EDI,dword ptr [ESP]             ; 00441af9
    MOV ESI,dword ptr [EAX + 0x3a7dc]   ; 00441afc
    MOV dword ptr [EDI + 0x24],ESI      ; 00441b02
    MOV EDX,dword ptr [EDX]             ; 00441b05 | DAT_01bc120c
    ADD ECX,EDX                         ; 00441b07
    MOV EDX,dword ptr [EAX + 0x3a96c]   ; 00441b09
    MOV dword ptr [ECX + 0x28],EDX      ; 00441b0f
    INC EBX                             ; 00441b12
    MOV ESI,dword ptr [EBP + 0x39ce8]   ; 00441b13
    ADD EAX,0x4                         ; 00441b19
    CMP EBX,ESI                         ; 00441b1c
    JL 0x00441ad7                       ; 00441b1e
        ;   XREF to: 00441ad7 (CONDITIONAL_JUMP)  ; LAB_00441ad7
    CMP dword ptr [ESP + 0x4],0xf618    ; 00441b20
        ;   Label: LAB_00441b20
    JGE 0x00441c24                      ; 00441b28
        ;   XREF to: 00441c24 (CONDITIONAL_JUMP)  ; LAB_00441c24
    PUSH 0x267                          ; 00441b2e
    MOV EBX,dword ptr [EBP + 0x110]     ; 00441b33
    PUSH EBX                            ; 00441b39
    MOV ESI,dword ptr [EBP + 0x114]     ; 00441b3a
    PUSH ESI                            ; 00441b40
    MOV EDI,dword ptr [0x00622c18]      ; 00441b41 | DAT_00622c18
    PUSH EDI                            ; 00441b47 | DAT_01e82168
    CALL FUN_005551f0                   ; 00441b48
        ;   XREF to: 005551f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005551f0()
        ;   Label: LAB_00441b48
    ADD ESP,0x10                        ; 00441b4d
    MOV EAX,dword ptr [EBP + 0x110]     ; 00441b50
    MOV dword ptr [ESP + 0x8],EAX       ; 00441b56
    CMP EAX,0x3e8                       ; 00441b5a
    JLE 0x00441b69                      ; 00441b5f
        ;   XREF to: 00441b69 (CONDITIONAL_JUMP)  ; LAB_00441b69
    MOV dword ptr [ESP + 0x8],0x3e8     ; 00441b61
    XOR ECX,ECX                         ; 00441b69
        ;   Label: LAB_00441b69
    MOV EBX,dword ptr [ESP + 0x8]       ; 00441b6b
    MOV dword ptr [ESP + 0xc],ECX       ; 00441b6f
    TEST EBX,EBX                        ; 00441b73
    JLE 0x00441bdf                      ; 00441b75
        ;   XREF to: 00441bdf (CONDITIONAL_JUMP)  ; LAB_00441bdf
    MOV dword ptr [ESP + 0x10],0x7c9c30 ; 00441b77 | DAT_007c9c30
    IMUL EAX,dword ptr [ESP + 0xc],0x48 ; 00441b7f
        ;   Label: LAB_00441b7f
    MOV EDX,dword ptr [EBP + 0x114]     ; 00441b84
    ADD EDX,EAX                         ; 00441b8a
    MOV ECX,dword ptr [ESP + 0x10]      ; 00441b8c
    MOV EAX,dword ptr [EDX + 0x4]       ; 00441b90
    MOV dword ptr [ECX + 0x4],EAX       ; 00441b93 | DAT_007c9c34 | DAT_007c9c7c
    MOV ECX,dword ptr [EDX + 0x4]       ; 00441b96
    XOR EAX,EAX                         ; 00441b99
    TEST ECX,ECX                        ; 00441b9b
    JLE 0x00441bc3                      ; 00441b9d
        ;   XREF to: 00441bc3 (CONDITIONAL_JUMP)  ; LAB_00441bc3
    MOV ECX,dword ptr [ESP + 0x10]      ; 00441b9f
    MOV EBX,dword ptr [EDX + 0x4]       ; 00441ba3
        ;   Label: LAB_00441ba3
    SUB EBX,EAX                         ; 00441ba6
    DEC EBX                             ; 00441ba8
    IMUL EBX,EBX,0xc                    ; 00441ba9
    LEA ESI,[EDX + EBX*0x1]             ; 00441bac
    LEA EDI,[ECX + 0x18]                ; 00441baf | DAT_007c9c48
    LEA ESI,[ESI + 0x18]                ; 00441bb2
    MOVSD ES:EDI,ESI                    ; 00441bb5 | DAT_007c9c48 | DAT_007c9c54
    MOVSD ES:EDI,ESI                    ; 00441bb6 | DAT_007c9c4c | DAT_007c9c58
    MOVSD ES:EDI,ESI                    ; 00441bb7 | DAT_007c9c50 | DAT_007c9c5c
    INC EAX                             ; 00441bb8
    MOV EBX,dword ptr [EDX + 0x4]       ; 00441bb9
    ADD ECX,0xc                         ; 00441bbc
    CMP EAX,EBX                         ; 00441bbf
    JL 0x00441ba3                       ; 00441bc1
        ;   XREF to: 00441ba3 (CONDITIONAL_JUMP)  ; LAB_00441ba3
    MOV ESI,dword ptr [ESP + 0x10]      ; 00441bc3
        ;   Label: LAB_00441bc3
    MOV EDI,dword ptr [ESP + 0xc]       ; 00441bc7
    MOV EDX,dword ptr [ESP + 0x8]       ; 00441bcb
    ADD ESI,0x48                        ; 00441bcf
    INC EDI                             ; 00441bd2
    MOV dword ptr [ESP + 0x10],ESI      ; 00441bd3 | DAT_007c9c78 | DAT_007c9cc0
    MOV dword ptr [ESP + 0xc],EDI       ; 00441bd7
    CMP EDI,EDX                         ; 00441bdb
    JL 0x00441b7f                       ; 00441bdd
        ;   XREF to: 00441b7f (CONDITIONAL_JUMP)  ; LAB_00441b7f
    PUSH 0x0                            ; 00441bdf
        ;   Label: LAB_00441bdf
    PUSH 0x4                            ; 00441be1
    MOV ECX,dword ptr [EBP + 0x10c]     ; 00441be3
    PUSH ECX                            ; 00441be9
    PUSH 0x7c9c30                       ; 00441bea | DAT_007c9c30
    MOV EBX,dword ptr [ESP + 0x18]      ; 00441bef
    PUSH EBX                            ; 00441bf3
    MOV ESI,dword ptr [EBP + 0x104]     ; 00441bf4
    PUSH ESI                            ; 00441bfa
    MOV EDI,dword ptr [0x00622c18]      ; 00441bfb | DAT_00622c18
    PUSH EDI                            ; 00441c01 | DAT_01e82168
    CALL FUN_00553440                   ; 00441c02
        ;   XREF to: 00553440 (UNCONDITIONAL_CALL)  ; undefined FUN_00553440()
    ADD ESP,0x1c                        ; 00441c07
    CMP dword ptr [ESP + 0x4],0xf618    ; 00441c0a
    JGE 0x00441c40                      ; 00441c12
        ;   XREF to: 00441c40 (CONDITIONAL_JUMP)  ; LAB_00441c40
    PUSH 0x267                          ; 00441c14
    PUSH EBX                            ; 00441c19
    PUSH 0x7c9c30                       ; 00441c1a | DAT_007c9c30
    JMP 0x004419f3                      ; 00441c1f
        ;   XREF to: 004419f3 (UNCONDITIONAL_JUMP)  ; LAB_004419f3
    PUSH -0x1                           ; 00441c24
        ;   Label: LAB_00441c24
    MOV EAX,dword ptr [EBP + 0x110]     ; 00441c26
    PUSH EAX                            ; 00441c2c
    MOV EDX,dword ptr [EBP + 0x114]     ; 00441c2d
    PUSH EDX                            ; 00441c33
    MOV ECX,dword ptr [0x00622c18]      ; 00441c34 | DAT_00622c18
    PUSH ECX                            ; 00441c3a | DAT_01e82168
    JMP 0x00441b48                      ; 00441c3b
        ;   XREF to: 00441b48 (UNCONDITIONAL_JUMP)  ; LAB_00441b48
    PUSH -0x1                           ; 00441c40
        ;   Label: LAB_00441c40
    PUSH EBX                            ; 00441c42
    PUSH 0x7c9c30                       ; 00441c43 | DAT_007c9c30
    MOV EDX,dword ptr [0x00622c18]      ; 00441c48 | DAT_00622c18
    PUSH EDX                            ; 00441c4e | DAT_01e82168
    JMP 0x004419fa                      ; 00441c4f
        ;   XREF to: 004419fa (UNCONDITIONAL_JUMP)  ; LAB_004419fa

