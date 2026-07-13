; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00510710(undefined4 param_1,float *param_2,undefined4 param_3,float *param_4,undefined4 param_5)
;
; Local Variables:
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined        Stack[-0x1dc]:1  local_1dc
; undefined        Stack[-0x1d0]:1  local_1d0
; undefined        Stack[-0x1c4]:1  local_1c4
; undefined        Stack[-0x1b8]:1  local_1b8
; undefined        Stack[-0x1ac]:1  local_1ac
; undefined        Stack[-0x1a0]:1  local_1a0
; undefined        Stack[-0x194]:1  local_194
; undefined        Stack[-0x188]:1  local_188
; undefined        Stack[-0x150]:1  local_150
; undefined        Stack[-0x118]:1  local_118
; undefined        Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004ca240 at 004ca2cc
;   FUN_00510a40 at 00510ec2
;
; Referenced Globals:
;   undefined4 DAT_005993b0
;
; Called Functions:
;   FUN_0041cc70
;   FUN_0044da40
;   FUN_0046c5b0
;   FUN_0046cba0
;   FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510710
        ;   Label: FUN_00510710
    PUSH ESI                            ; 00510711
    PUSH EDI                            ; 00510712
    PUSH EBP                            ; 00510713
    SUB ESP,0x1d8                       ; 00510714
    MOV EDI,dword ptr [ESP + 0x1f8]     ; 0051071a
    MOV EBP,dword ptr [ESP + 0x1fc]     ; 00510721
    PUSH 0x5993b0                       ; 00510728 | DAT_005993b0
    PUSH 0x8                            ; 0051072d
    LEA EAX,[ESP + 0x8]                 ; 0051072f
    PUSH EAX                            ; 00510733
    LEA EBX,[ESP + 0xc]                 ; 00510734
    XOR ESI,ESI                         ; 00510738
    CALL FUN_005644a7                   ; 0051073a
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined FUN_005644a7()
    ADD ESP,0xc                         ; 0051073f
    PUSH ESI                            ; 00510742
        ;   Label: LAB_00510742
    LEA EAX,[ESP + 0x1b4]               ; 00510743
    PUSH EAX                            ; 0051074a
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0051074b
    PUSH EDX                            ; 00510752
    CALL FUN_0041cc70                   ; 00510753
        ;   XREF to: 0041cc70 (UNCONDITIONAL_CALL)  ; undefined FUN_0041cc70()
    ADD ESP,0xc                         ; 00510758
    PUSH EAX                            ; 0051075b
    LEA EAX,[ESP + 0x1c0]               ; 0051075c
    PUSH EAX                            ; 00510763
    PUSH EBP                            ; 00510764
    CALL FUN_0044da40                   ; 00510765
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined FUN_0044da40()
    FLD float ptr [EAX]                 ; 0051076a
    FADD float ptr [EDI]                ; 0051076c
    ADD ESP,0xc                         ; 0051076e
    FSTP float ptr [ESP + 0x1c8]        ; 00510771
    FLD float ptr [EAX + 0x4]           ; 00510778
    FADD float ptr [EDI + 0x4]          ; 0051077b
    FSTP float ptr [ESP + 0x1cc]        ; 0051077e
    FLD float ptr [EAX + 0x8]           ; 00510785
    FADD float ptr [EDI + 0x8]          ; 00510788
    LEA EAX,[ESP + 0x1c8]               ; 0051078b
    FSTP float ptr [ESP + 0x1d0]        ; 00510792
    CMP EBX,EAX                         ; 00510799
    JNZ 0x00510a1b                      ; 0051079b
        ;   XREF to: 00510a1b (CONDITIONAL_JUMP)  ; LAB_00510a1b
    INC ESI                             ; 005107a1
        ;   Label: LAB_005107a1
    ADD EBX,0xc                         ; 005107a2
    CMP ESI,0x8                         ; 005107a5
    JL 0x00510742                       ; 005107a8
        ;   XREF to: 00510742 (CONDITIONAL_JUMP)  ; LAB_00510742
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 005107aa
    MOV EAX,dword ptr [EAX]             ; 005107b1
    MOV dword ptr [ESP + 0x1d4],EAX     ; 005107b3
    LEA EAX,[ESP + 0x48]                ; 005107ba
    PUSH EAX                            ; 005107be
    LEA EAX,[ESP + 0x34]                ; 005107bf
    PUSH EAX                            ; 005107c3
    LEA EAX,[ESP + 0x8]                 ; 005107c4
    PUSH EAX                            ; 005107c8
    LEA EAX,[ESP + 0x184]               ; 005107c9
    PUSH EAX                            ; 005107d0
    CALL FUN_0046c5b0                   ; 005107d1
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 005107d6
    MOV ECX,dword ptr [ESP + 0x1f0]     ; 005107d9
    PUSH ECX                            ; 005107e0
    LEA EAX,[ESP + 0x17c]               ; 005107e1
    PUSH EAX                            ; 005107e8
    CALL FUN_0046cba0                   ; 005107e9
        ;   XREF to: 0046cba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cba0()
    ADD ESP,0x8                         ; 005107ee
    LEA EAX,[ESP + 0x18]                ; 005107f1
    PUSH EAX                            ; 005107f5
    LEA EAX,[ESP + 0x4c]                ; 005107f6
    PUSH EAX                            ; 005107fa
    LEA EAX,[ESP + 0x8]                 ; 005107fb
    PUSH EAX                            ; 005107ff
    LEA EAX,[ESP + 0x184]               ; 00510800
    PUSH EAX                            ; 00510807
    CALL FUN_0046c5b0                   ; 00510808
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 0051080d
    MOV EBX,dword ptr [ESP + 0x1f0]     ; 00510810
    PUSH EBX                            ; 00510817
    LEA EAX,[ESP + 0x17c]               ; 00510818
    PUSH EAX                            ; 0051081f
    CALL FUN_0046cba0                   ; 00510820
        ;   XREF to: 0046cba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cba0()
    ADD ESP,0x8                         ; 00510825
    LEA EAX,[ESP + 0x54]                ; 00510828
    PUSH EAX                            ; 0051082c
    LEA EAX,[ESP + 0x28]                ; 0051082d
    PUSH EAX                            ; 00510831
    LEA EAX,[ESP + 0x14]                ; 00510832
    PUSH EAX                            ; 00510836
    LEA EAX,[ESP + 0x6c]                ; 00510837
    PUSH EAX                            ; 0051083b
    CALL FUN_0046c5b0                   ; 0051083c
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 00510841
    PUSH EBX                            ; 00510844
    LEA EAX,[ESP + 0x64]                ; 00510845
    PUSH EAX                            ; 00510849
    CALL FUN_0046cba0                   ; 0051084a
        ;   XREF to: 0046cba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cba0()
    ADD ESP,0x8                         ; 0051084f
    LEA EAX,[ESP + 0x3c]                ; 00510852
    PUSH EAX                            ; 00510856
    LEA EAX,[ESP + 0x58]                ; 00510857
    PUSH EAX                            ; 0051085b
    LEA EAX,[ESP + 0x14]                ; 0051085c
    PUSH EAX                            ; 00510860
    LEA EAX,[ESP + 0x6c]                ; 00510861
    PUSH EAX                            ; 00510865
    CALL FUN_0046c5b0                   ; 00510866
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 0051086b
    PUSH EBX                            ; 0051086e
    LEA EAX,[ESP + 0x64]                ; 0051086f
    PUSH EAX                            ; 00510873
    CALL FUN_0046cba0                   ; 00510874
        ;   XREF to: 0046cba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cba0()
    ADD ESP,0x8                         ; 00510879
    LEA EAX,[ESP + 0x3c]                ; 0051087c
    PUSH EAX                            ; 00510880
    LEA EAX,[ESP + 0x10]                ; 00510881
    PUSH EAX                            ; 00510885
    LEA EAX,[ESP + 0x8]                 ; 00510886
    PUSH EAX                            ; 0051088a
    LEA EAX,[ESP + 0xa4]                ; 0051088b
    PUSH EAX                            ; 00510892
    CALL FUN_0046c5b0                   ; 00510893
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 00510898
    PUSH EBX                            ; 0051089b
    LEA EAX,[ESP + 0x9c]                ; 0051089c
    PUSH EAX                            ; 005108a3
    CALL FUN_0046cba0                   ; 005108a4
        ;   XREF to: 0046cba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cba0()
    ADD ESP,0x8                         ; 005108a9
    LEA EAX,[ESP + 0x30]                ; 005108ac
    PUSH EAX                            ; 005108b0
    LEA EAX,[ESP + 0x40]                ; 005108b1
    PUSH EAX                            ; 005108b5
    LEA EAX,[ESP + 0x8]                 ; 005108b6
    PUSH EAX                            ; 005108ba
    LEA EAX,[ESP + 0xa4]                ; 005108bb
    PUSH EAX                            ; 005108c2
    CALL FUN_0046c5b0                   ; 005108c3
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 005108c8
    PUSH EBX                            ; 005108cb
    LEA EAX,[ESP + 0x9c]                ; 005108cc
    PUSH EAX                            ; 005108d3
    CALL FUN_0046cba0                   ; 005108d4
        ;   XREF to: 0046cba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cba0()
    ADD ESP,0x8                         ; 005108d9
    LEA EAX,[ESP + 0x54]                ; 005108dc
    PUSH EAX                            ; 005108e0
    LEA EAX,[ESP + 0x4c]                ; 005108e1
    PUSH EAX                            ; 005108e5
    LEA EAX,[ESP + 0x20]                ; 005108e6
    PUSH EAX                            ; 005108ea
    LEA EAX,[ESP + 0xdc]                ; 005108eb
    PUSH EAX                            ; 005108f2
    CALL FUN_0046c5b0                   ; 005108f3
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 005108f8
    PUSH EBX                            ; 005108fb
    LEA EAX,[ESP + 0xd4]                ; 005108fc
    PUSH EAX                            ; 00510903
    CALL FUN_0046cba0                   ; 00510904
        ;   XREF to: 0046cba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cba0()
    ADD ESP,0x8                         ; 00510909
    LEA EAX,[ESP + 0x24]                ; 0051090c
    PUSH EAX                            ; 00510910
    LEA EAX,[ESP + 0x58]                ; 00510911
    PUSH EAX                            ; 00510915
    LEA EAX,[ESP + 0x20]                ; 00510916
    PUSH EAX                            ; 0051091a
    LEA EAX,[ESP + 0xdc]                ; 0051091b
    PUSH EAX                            ; 00510922
    CALL FUN_0046c5b0                   ; 00510923
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 00510928
    PUSH EBX                            ; 0051092b
    LEA EAX,[ESP + 0xd4]                ; 0051092c
    PUSH EAX                            ; 00510933
    CALL FUN_0046cba0                   ; 00510934
        ;   XREF to: 0046cba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cba0()
    ADD ESP,0x8                         ; 00510939
    LEA EAX,[ESP + 0x24]                ; 0051093c
    PUSH EAX                            ; 00510940
    LEA EAX,[ESP + 0x1c]                ; 00510941
    PUSH EAX                            ; 00510945
    LEA EAX,[ESP + 0x8]                 ; 00510946
    PUSH EAX                            ; 0051094a
    LEA EAX,[ESP + 0x114]               ; 0051094b
    PUSH EAX                            ; 00510952
    CALL FUN_0046c5b0                   ; 00510953
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 00510958
    PUSH EBX                            ; 0051095b
    LEA EAX,[ESP + 0x10c]               ; 0051095c
    PUSH EAX                            ; 00510963
    CALL FUN_0046cba0                   ; 00510964
        ;   XREF to: 0046cba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cba0()
    ADD ESP,0x8                         ; 00510969
    LEA EAX,[ESP + 0xc]                 ; 0051096c
    PUSH EAX                            ; 00510970
    LEA EAX,[ESP + 0x28]                ; 00510971
    PUSH EAX                            ; 00510975
    LEA EAX,[ESP + 0x8]                 ; 00510976
    PUSH EAX                            ; 0051097a
    LEA EAX,[ESP + 0x114]               ; 0051097b
    PUSH EAX                            ; 00510982
    CALL FUN_0046c5b0                   ; 00510983
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 00510988
    PUSH EBX                            ; 0051098b
    LEA EAX,[ESP + 0x10c]               ; 0051098c
    PUSH EAX                            ; 00510993
    CALL FUN_0046cba0                   ; 00510994
        ;   XREF to: 0046cba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cba0()
    ADD ESP,0x8                         ; 00510999
    LEA EAX,[ESP + 0x54]                ; 0051099c
    PUSH EAX                            ; 005109a0
    LEA EAX,[ESP + 0x40]                ; 005109a1
    PUSH EAX                            ; 005109a5
    LEA EAX,[ESP + 0x38]                ; 005109a6
    PUSH EAX                            ; 005109aa
    LEA EAX,[ESP + 0x14c]               ; 005109ab
    PUSH EAX                            ; 005109b2
    CALL FUN_0046c5b0                   ; 005109b3
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 005109b8
    PUSH EBX                            ; 005109bb
    LEA EAX,[ESP + 0x144]               ; 005109bc
    PUSH EAX                            ; 005109c3
    CALL FUN_0046cba0                   ; 005109c4
        ;   XREF to: 0046cba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cba0()
    ADD ESP,0x8                         ; 005109c9
    LEA EAX,[ESP + 0x48]                ; 005109cc
    PUSH EAX                            ; 005109d0
    LEA EAX,[ESP + 0x58]                ; 005109d1
    PUSH EAX                            ; 005109d5
    LEA EAX,[ESP + 0x38]                ; 005109d6
    PUSH EAX                            ; 005109da
    LEA EAX,[ESP + 0x14c]               ; 005109db
    PUSH EAX                            ; 005109e2
    CALL FUN_0046c5b0                   ; 005109e3
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 005109e8
    PUSH EBX                            ; 005109eb
    LEA EAX,[ESP + 0x144]               ; 005109ec
    PUSH EAX                            ; 005109f3
    CALL FUN_0046cba0                   ; 005109f4
        ;   XREF to: 0046cba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cba0()
    ADD ESP,0x8                         ; 005109f9
    FLD float ptr [EBX]                 ; 005109fc
    FCOMP float ptr [ESP + 0x1d4]       ; 005109fe
    FNSTSW AX                           ; 00510a05
    SAHF                                ; 00510a07
    SETC AL                             ; 00510a08
    AND EAX,0xff                        ; 00510a0b
    ADD ESP,0x1d8                       ; 00510a10
    POP EBP                             ; 00510a16
    POP EDI                             ; 00510a17
    POP ESI                             ; 00510a18
    POP EBX                             ; 00510a19
    RET                                 ; 00510a1a
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 00510a1b
        ;   Label: LAB_00510a1b
    MOV dword ptr [EBX],EAX             ; 00510a22
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 00510a24
    MOV dword ptr [EBX + 0x4],EAX       ; 00510a2b
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 00510a2e
    MOV dword ptr [EBX + 0x8],EAX       ; 00510a35
    JMP 0x005107a1                      ; 00510a38
        ;   XREF to: 005107a1 (UNCONDITIONAL_JUMP)  ; LAB_005107a1

