; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00558450(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,undefined4 param_6,float param_7,float param_8)
;
; Local Variables:
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[7]:
;   FUN_0042d750 at 0042d9f1
;   FUN_00459100 at 0045a255
;   FUN_004712b0 at 00471763
;   FUN_004de330 at 004df179
;   FUN_0058d910 at 0058e00b
;   FUN_0059a370 at 0059aa12
;   FUN_005bafb0 at 005bc13e
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005f0e35
;   TerminatedCString s_info_keyFramedModelInsta_005f0e4a
;   TerminatedCString s_core_setcolid_cpp_005f0e96
;   TerminatedCString s_Invalid_collision_type_005f0eab
;   undefined4 DAT_005f0ec5
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01fe5c1c
;
; Called Functions:
;   FUN_00408ac0
;   FUN_00408b00
;   FUN_00408bb0
;   FUN_00408ec0
;   FUN_004215d0
;   FUN_00468160
;   FUN_00468900
;   FUN_0048c230
;   FUN_0048c300
;   FUN_005030e0
;   FUN_00557db0
;   FUN_005580d0
;   FUN_005593c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558450
        ;   Label: FUN_00558450
    PUSH ESI                            ; 00558451
    PUSH EDI                            ; 00558452
    PUSH EBP                            ; 00558453
    MOV EBP,ESP                         ; 00558454
    SUB ESP,0x2f0                       ; 00558456
    AND ESP,0xfffffff8                  ; 0055845c
    PUSH dword ptr [EBP + 0x30]         ; 0055845f
    PUSH dword ptr [EBP + 0x2c]         ; 00558462
    PUSH dword ptr [EBP + 0x28]         ; 00558465
    PUSH dword ptr [EBP + 0x24]         ; 00558468
    PUSH dword ptr [EBP + 0x20]         ; 0055846b
    PUSH dword ptr [EBP + 0x1c]         ; 0055846e
    LEA EAX,[ESP + 0x170]               ; 00558471
    PUSH dword ptr [EBP + 0x18]         ; 00558478
    PUSH EAX                            ; 0055847b
    CALL FUN_0048c230                   ; 0055847c
        ;   XREF to: 0048c230 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c230()
    ADD ESP,0x20                        ; 00558481
    TEST dword ptr [EBP + 0x20],0x7fffffff ; 00558484
    JNZ 0x00558496                      ; 0055848b
        ;   XREF to: 00558496 (CONDITIONAL_JUMP)  ; LAB_00558496
    TEST dword ptr [EBP + 0x24],0x7fffffff ; 0055848d
    JZ 0x005584ab                       ; 00558494
        ;   XREF to: 005584ab (CONDITIONAL_JUMP)  ; LAB_005584ab
    LEA EAX,[ESP + 0x158]               ; 00558496
        ;   Label: LAB_00558496
    PUSH EAX                            ; 0055849d
    PUSH 0x1fe5c1c                      ; 0055849e | DAT_01fe5c1c
    CALL FUN_0048c300                   ; 005584a3
        ;   XREF to: 0048c300 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c300()
    ADD ESP,0x8                         ; 005584a8
    MOV EAX,dword ptr [EBP + 0x14]      ; 005584ab
        ;   Label: LAB_005584ab
    MOV dword ptr [EAX + 0x14d134],0x1  ; 005584ae
    MOV dword ptr [EAX + 0x14d148],0xffffffff ; 005584b8
    MOV dword ptr [EAX + 0x14d14c],0xffffffff ; 005584c2
    MOV EBX,dword ptr [EAX + 0x15f6ac]  ; 005584cc
    MOV dword ptr [EAX + 0x14d144],0x0  ; 005584d2
    TEST EBX,EBX                        ; 005584dc
    JL 0x0055867c                       ; 005584de
        ;   XREF to: 0055867c (CONDITIONAL_JUMP)  ; LAB_0055867c
    FLD float ptr [ESP + 0x168]         ; 005584e4
    FLD ST0                             ; 005584eb
    FLD float ptr [ESP + 0x170]         ; 005584ed
    FLDZ                                ; 005584f4
    FXCH ST3                            ; 005584f6
    FSUB float ptr [ESP + 0x178]        ; 005584f8
    FXCH ST2                            ; 005584ff
    FADD float ptr [ESP + 0x178]        ; 00558501
    FXCH ST2                            ; 00558508
    FSTP float ptr [ESP + 0x224]        ; 0055850a
    FXCH                                ; 00558511
    FSTP float ptr [ESP + 0x230]        ; 00558513
    FXCH                                ; 0055851a
    FCOMPP                              ; 0055851c
    FNSTSW AX                           ; 0055851e
    SAHF                                ; 00558520
    JNC 0x00558705                      ; 00558521
        ;   XREF to: 00558705 (CONDITIONAL_JUMP)  ; LAB_00558705
    FLD float ptr [ESP + 0x230]         ; 00558527
    FADD float ptr [ESP + 0x170]        ; 0055852e
    FSTP float ptr [ESP + 0x230]        ; 00558535
    FLD float ptr [ESP + 0x16c]         ; 0055853c
        ;   Label: LAB_0055853c
    FLD ST0                             ; 00558543
    FLD float ptr [ESP + 0x174]         ; 00558545
    MOV EAX,dword ptr [ESP + 0x180]     ; 0055854c
    FLDZ                                ; 00558553
    MOV dword ptr [ESP + 0x228],EAX     ; 00558555
    FXCH ST3                            ; 0055855c
    FSUB float ptr [ESP + 0x178]        ; 0055855e
    FXCH ST2                            ; 00558565
    FADD float ptr [ESP + 0x178]        ; 00558567
    FXCH ST2                            ; 0055856e
    FSTP float ptr [ESP + 0x22c]        ; 00558570
    MOV EAX,dword ptr [ESP + 0x17c]     ; 00558577
    FXCH                                ; 0055857e
    FSTP float ptr [ESP + 0x238]        ; 00558580
    MOV dword ptr [ESP + 0x234],EAX     ; 00558587
    FXCH                                ; 0055858e
    FCOMPP                              ; 00558590
    FNSTSW AX                           ; 00558592
    SAHF                                ; 00558594
    JNC 0x0055871f                      ; 00558595
        ;   XREF to: 0055871f (CONDITIONAL_JUMP)  ; LAB_0055871f
    FLD float ptr [ESP + 0x238]         ; 0055859b
    FADD float ptr [ESP + 0x174]        ; 005585a2
    FSTP float ptr [ESP + 0x238]        ; 005585a9
    LEA EAX,[ESP + 0x1b4]               ; 005585b0
        ;   Label: LAB_005585b0
    PUSH EAX                            ; 005585b7
    CALL FUN_005593c0                   ; 005585b8
        ;   XREF to: 005593c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005593c0()
    ADD ESP,0x4                         ; 005585bd
    MOV EAX,dword ptr [EBP + 0x14]      ; 005585c0
    MOV EAX,dword ptr [EAX + 0x15f698]  ; 005585c3
    MOV dword ptr [ESP + 0x1b4],EAX     ; 005585c9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005585d0
    MOV EAX,dword ptr [EAX + 0x15f69c]  ; 005585d3
    MOV dword ptr [ESP + 0x1b8],EAX     ; 005585d9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005585e0
    MOV EAX,dword ptr [EAX + 0x15f6a0]  ; 005585e3
    MOV dword ptr [ESP + 0x1bc],EAX     ; 005585e9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005585f0
    MOV EAX,dword ptr [EAX + 0x15f6a4]  ; 005585f3
    MOV dword ptr [ESP + 0x1c0],EAX     ; 005585f9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00558600
    MOV EAX,dword ptr [EAX + 0x15f6a8]  ; 00558603
    MOV dword ptr [ESP + 0x1c4],EAX     ; 00558609
    MOV EAX,dword ptr [EBP + 0x14]      ; 00558610
    XOR ESI,ESI                         ; 00558613
    MOV EDI,dword ptr [EAX + 0x156db8]  ; 00558615
    MOV dword ptr [ESP + 0x2e4],ESI     ; 0055861b
    TEST EDI,EDI                        ; 00558622
    JLE 0x0055867c                      ; 00558624
        ;   XREF to: 0055867c (CONDITIONAL_JUMP)  ; LAB_0055867c
    MOV dword ptr [ESP + 0x2e8],EAX     ; 00558626
    MOV EBX,dword ptr [ESP + 0x2e8]     ; 0055862d
        ;   Label: LAB_0055862d
    MOV EBX,dword ptr [EBX + 0x156dbc]  ; 00558634
    PUSH EBX                            ; 0055863a
    MOV ESI,dword ptr [EBP + 0x14]      ; 0055863b
    PUSH ESI                            ; 0055863e
    CALL FUN_00557db0                   ; 0055863f
        ;   XREF to: 00557db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00557db0()
    ADD ESP,0x8                         ; 00558644
    TEST EAX,EAX                        ; 00558647
    JZ 0x00558739                       ; 00558649
        ;   XREF to: 00558739 (CONDITIONAL_JUMP)  ; LAB_00558739
    MOV EAX,dword ptr [ESP + 0x2e8]     ; 0055864f
        ;   Label: LAB_0055864f
    MOV EDX,dword ptr [ESP + 0x2e4]     ; 00558656
    MOV EBX,dword ptr [EBP + 0x14]      ; 0055865d
    ADD EAX,0x4                         ; 00558660
    INC EDX                             ; 00558663
    MOV ECX,dword ptr [EBX + 0x156db8]  ; 00558664
    MOV dword ptr [ESP + 0x2e8],EAX     ; 0055866a
    MOV dword ptr [ESP + 0x2e4],EDX     ; 00558671
    CMP EDX,ECX                         ; 00558678
    JL 0x0055862d                       ; 0055867a
        ;   XREF to: 0055862d (CONDITIONAL_JUMP)  ; LAB_0055862d
    FLD float ptr [ESP + 0x158]         ; 0055867c
        ;   Label: LAB_0055867c
    FLD1                                ; 00558683
    FCOMPP                              ; 00558685
    FNSTSW AX                           ; 00558687
    SAHF                                ; 00558689
    JC 0x005586f7                       ; 0055868a
        ;   XREF to: 005586f7 (CONDITIONAL_JUMP)  ; LAB_005586f7
    FLD float ptr [ESP + 0x15c]         ; 0055868c
    FMUL ST0                            ; 00558693
    FLD float ptr [ESP + 0x160]         ; 00558695
    FMUL ST0                            ; 0055869c
    FADDP                               ; 0055869e
    FLD float ptr [ESP + 0x164]         ; 005586a0
    FMUL ST0                            ; 005586a7
    FADDP                               ; 005586a9
    FSQRT                               ; 005586ab
    FLDZ                                ; 005586ad
    FXCH                                ; 005586af
    FSTP float ptr [ESP + 0x2e0]        ; 005586b1
    FCOMP float ptr [ESP + 0x2e0]       ; 005586b8
    FNSTSW AX                           ; 005586bf
    SAHF                                ; 005586c1
    JC 0x00558e3e                       ; 005586c2
        ;   XREF to: 00558e3e (CONDITIONAL_JUMP)  ; LAB_00558e3e
    XOR EBX,EBX                         ; 005586c8
    MOV dword ptr [ESP + 0x160],EBX     ; 005586ca
    MOV dword ptr [ESP + 0x15c],EBX     ; 005586d1
    MOV dword ptr [ESP + 0x164],EBX     ; 005586d8
    MOV EBX,dword ptr [EBP + 0x14]      ; 005586df
        ;   Label: LAB_005586df
    LEA EAX,[ESP + 0x15c]               ; 005586e2
    ADD EBX,0x14d128                    ; 005586e9
    CMP EBX,EAX                         ; 005586ef
    JNZ 0x00558e82                      ; 005586f1
        ;   XREF to: 00558e82 (CONDITIONAL_JUMP)  ; LAB_00558e82
    MOV EAX,dword ptr [ESP + 0x158]     ; 005586f7
        ;   Label: LAB_005586f7
    MOV ESP,EBP                         ; 005586fe
    POP EBP                             ; 00558700
    POP EDI                             ; 00558701
    POP ESI                             ; 00558702
    POP EBX                             ; 00558703
    RET                                 ; 00558704
    FLD float ptr [ESP + 0x224]         ; 00558705
        ;   Label: LAB_00558705
    FADD float ptr [ESP + 0x170]        ; 0055870c
    FSTP float ptr [ESP + 0x224]        ; 00558713
    JMP 0x0055853c                      ; 0055871a
        ;   XREF to: 0055853c (UNCONDITIONAL_JUMP)  ; LAB_0055853c
    FLD float ptr [ESP + 0x22c]         ; 0055871f
        ;   Label: LAB_0055871f
    FADD float ptr [ESP + 0x174]        ; 00558726
    FSTP float ptr [ESP + 0x22c]        ; 0055872d
    JMP 0x005585b0                      ; 00558734
        ;   XREF to: 005585b0 (UNCONDITIONAL_JUMP)  ; LAB_005585b0
    MOV dword ptr [ESP + 0x1d4],EAX     ; 00558739
        ;   Label: LAB_00558739
    MOV dword ptr [ESP + 0x1d8],EAX     ; 00558740
    LEA EAX,[ESP + 0x1b4]               ; 00558747
    PUSH EAX                            ; 0055874e
    MOV ESI,dword ptr [EBX + 0x154]     ; 0055874f
    PUSH EBX                            ; 00558755
    CALL dword ptr [ESI + 0x3c]         ; 00558756
    MOV dword ptr [ESP + 0x2f4],EAX     ; 00558759
    ADD ESP,0x8                         ; 00558760
    TEST EAX,EAX                        ; 00558763
    JZ 0x0055864f                       ; 00558765
        ;   XREF to: 0055864f (CONDITIONAL_JUMP)  ; LAB_0055864f
    PUSH EAX                            ; 0055876b
    LEA EAX,[ESP + 0x1b8]               ; 0055876c
    PUSH EAX                            ; 00558773
    PUSH EBX                            ; 00558774
    LEA ESI,[ESP + 0x248]               ; 00558775
    LEA EDI,[ESP + 0x218]               ; 0055877c
    CALL FUN_00408ec0                   ; 00558783
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ec0()
    ADD ESP,0xc                         ; 00558788
    LEA EAX,[ESP + 0x20c]               ; 0055878b
    MOV ECX,0x6                         ; 00558792
    PUSH EAX                            ; 00558797
    LEA EAX,[ESP + 0x228]               ; 00558798
    LEA ESI,[ESP + 0x240]               ; 0055879f
    PUSH EAX                            ; 005587a6
    MOVSD.REP ES:EDI,ESI                ; 005587a7
    CALL FUN_004215d0                   ; 005587a9
        ;   XREF to: 004215d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004215d0()
    ADD ESP,0x8                         ; 005587ae
    TEST EAX,EAX                        ; 005587b1
    JZ 0x0055864f                       ; 005587b3
        ;   XREF to: 0055864f (CONDITIONAL_JUMP)  ; LAB_0055864f
    MOV ESI,dword ptr [ESP + 0x1d8]     ; 005587b9
    TEST ESI,ESI                        ; 005587c0
    JZ 0x00558df1                       ; 005587c2
        ;   XREF to: 00558df1 (CONDITIONAL_JUMP)  ; LAB_00558df1
    PUSH ESI                            ; 005587c8
    CALL FUN_00468900                   ; 005587c9
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    ADD ESP,0x4                         ; 005587ce
    MOV EDI,dword ptr [EAX + 0x358]     ; 005587d1
    MOV ESI,EAX                         ; 005587d7
    TEST EDI,EDI                        ; 005587d9
    JNZ 0x00558801                      ; 005587db
        ;   XREF to: 00558801 (CONDITIONAL_JUMP)  ; LAB_00558801
    PUSH EAX                            ; 005587dd
    MOV EDX,0x5f0e35                    ; 005587de | = "..\\core\\setcolid.cpp"
    MOV ECX,0x389                       ; 005587e3
    PUSH 0x5f0e4a                       ; 005587e8 | = "info.keyFramedModelInstancePtr != NUL..."
    MOV dword ptr [0x01d1d400],EDX      ; 005587ed | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005587f3 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005587f9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 005587fe
    FLD float ptr [EBP + 0x30]          ; 00558801
        ;   Label: LAB_00558801
    SUB ESP,0x4                         ; 00558804
    FSUB float ptr [EBX + 0x24]         ; 00558807
    FLD float ptr [EBP + 0x2c]          ; 0055880a
    FXCH                                ; 0055880d
    FSTP float ptr [ESP]                ; 0055880f
    FSUB float ptr [EBX + 0x24]         ; 00558812
    SUB ESP,0x4                         ; 00558815
    FSTP float ptr [ESP]                ; 00558818
    PUSH dword ptr [EBP + 0x28]         ; 0055881b
    PUSH dword ptr [ESP + 0x180]        ; 0055881e
    FLD float ptr [ESP + 0x17c]         ; 00558825
    PUSH dword ptr [ESP + 0x180]        ; 0055882c
    FSUB float ptr [EBX + 0x28]         ; 00558833
    SUB ESP,0x4                         ; 00558836
    FSTP float ptr [ESP]                ; 00558839
    FLD float ptr [ESP + 0x180]         ; 0055883c
    SUB ESP,0x4                         ; 00558843
    FSUB float ptr [EBX + 0x20]         ; 00558846
    LEA EAX,[ESP + 0x118]               ; 00558849
    FSTP float ptr [ESP]                ; 00558850
    PUSH EAX                            ; 00558853
    CALL FUN_0048c230                   ; 00558854
        ;   XREF to: 0048c230 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c230()
    ADD ESP,0x20                        ; 00558859
    MOV EAX,dword ptr [ESP + 0x158]     ; 0055885c
    MOV dword ptr [ESP + 0xfc],EAX      ; 00558863
    LEA EAX,[EBX + 0x30]                ; 0055886a
    PUSH EAX                            ; 0055886d
    LEA EAX,[ESP + 0x100]               ; 0055886e
    PUSH EAX                            ; 00558875
    PUSH 0x0                            ; 00558876
    PUSH ESI                            ; 00558878
    CALL FUN_00468160                   ; 00558879
        ;   XREF to: 00468160 (UNCONDITIONAL_CALL)  ; undefined FUN_00468160()
    ADD ESP,0x10                        ; 0055887e
    FLD float ptr [ESP + 0xfc]          ; 00558881
    FCOMP float ptr [ESP + 0x158]       ; 00558888
    FNSTSW AX                           ; 0055888f
    SAHF                                ; 00558891
    JNC 0x0055864f                      ; 00558892
        ;   XREF to: 0055864f (CONDITIONAL_JUMP)  ; LAB_0055864f
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00558898
    LEA ESI,[ESP + 0x100]               ; 0055889f
    MOV dword ptr [ESP + 0x158],EAX     ; 005588a6
    LEA EAX,[ESP + 0x15c]               ; 005588ad
    CMP EAX,ESI                         ; 005588b4
    JZ 0x005588e2                       ; 005588b6
        ;   XREF to: 005588e2 (CONDITIONAL_JUMP)  ; LAB_005588e2
    MOV EAX,dword ptr [ESP + 0x100]     ; 005588b8
    MOV dword ptr [ESP + 0x15c],EAX     ; 005588bf
    MOV EAX,dword ptr [ESP + 0x104]     ; 005588c6
    MOV dword ptr [ESP + 0x160],EAX     ; 005588cd
    MOV EAX,dword ptr [ESP + 0x108]     ; 005588d4
    MOV dword ptr [ESP + 0x164],EAX     ; 005588db
    MOV EAX,dword ptr [EBP + 0x14]      ; 005588e2
        ;   Label: LAB_005588e2
    MOV dword ptr [EAX + 0x14d144],EBX  ; 005588e5
    JMP 0x0055864f                      ; 005588eb
        ;   XREF to: 0055864f (UNCONDITIONAL_JUMP)  ; LAB_0055864f
    LEA EAX,[EBX + 0x3c]                ; 005588f0
        ;   Label: LAB_005588f0
    PUSH EAX                            ; 005588f3
    LEA EAX,[EBX + 0x20]                ; 005588f4
    PUSH EAX                            ; 005588f7
    PUSH EBX                            ; 005588f8
    MOV EAX,dword ptr [EBX + 0x154]     ; 005588f9
    LEA ESI,[ESP + 0x1e8]               ; 005588ff
    CALL dword ptr [EAX + 0x1c]         ; 00558906
    ADD ESP,0x4                         ; 00558909
    LEA EAX,[ESP + 0x1fc]               ; 0055890c
    LEA EDI,[ESP + 0x1fc]               ; 00558913
    PUSH EAX                            ; 0055891a
    LEA EAX,[ESP + 0x164]               ; 0055891b
    MOV ECX,0x6                         ; 00558922
    PUSH EAX                            ; 00558927
    MOV EDX,dword ptr [EBP + 0x14]      ; 00558928
    LEA ESI,[ESP + 0x1ec]               ; 0055892b
    PUSH EDX                            ; 00558932
    MOVSD.REP ES:EDI,ESI                ; 00558933
    CALL FUN_005580d0                   ; 00558935
        ;   XREF to: 005580d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005580d0()
    ADD ESP,0x14                        ; 0055893a
    TEST EAX,EAX                        ; 0055893d
    JZ 0x0055864f                       ; 0055893f
        ;   XREF to: 0055864f (CONDITIONAL_JUMP)  ; LAB_0055864f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00558945
    MOV dword ptr [EAX + 0x14d144],EBX  ; 00558948
    JMP 0x0055864f                      ; 0055894e
        ;   XREF to: 0055864f (UNCONDITIONAL_JUMP)  ; LAB_0055864f
    FLD float ptr [ESP + 0x1c8]         ; 00558953
        ;   Label: LAB_00558953
    FADD float ptr [EBX + 0x24]         ; 0055895a
    FLD float ptr [ESP + 0x1cc]         ; 0055895d
    FXCH                                ; 00558964
    FSTP float ptr [ESP + 0x1c8]        ; 00558966
    FADD float ptr [EBX + 0x24]         ; 0055896d
    FSTP float ptr [ESP + 0x1cc]        ; 00558970
    MOV EAX,dword ptr [EBX + 0x20]      ; 00558977
    MOV dword ptr [ESP + 0x98],EAX      ; 0055897a
    MOV EAX,dword ptr [EBX + 0x28]      ; 00558981
    FLD float ptr [ESP + 0x17c]         ; 00558984
    MOV dword ptr [ESP + 0x9c],EAX      ; 0055898b
    FCOMP float ptr [ESP + 0x1c8]       ; 00558992
    FNSTSW AX                           ; 00558999
    SAHF                                ; 0055899b
    JBE 0x0055864f                      ; 0055899c
        ;   XREF to: 0055864f (CONDITIONAL_JUMP)  ; LAB_0055864f
    FLD float ptr [ESP + 0x180]         ; 005589a2
    FCOMP float ptr [ESP + 0x1cc]       ; 005589a9
    FNSTSW AX                           ; 005589b0
    SAHF                                ; 005589b2
    JNC 0x0055864f                      ; 005589b3
        ;   XREF to: 0055864f (CONDITIONAL_JUMP)  ; LAB_0055864f
    FLD float ptr [ESP + 0x98]          ; 005589b9
    FSUB float ptr [ESP + 0x168]        ; 005589c0
    FST double ptr [ESP + 0x50]         ; 005589c7
    FMUL double ptr [ESP + 0x50]        ; 005589cb
    FLD float ptr [ESP + 0x1d0]         ; 005589cf
    FLD float ptr [ESP + 0x9c]          ; 005589d6
    FSUB float ptr [ESP + 0x16c]        ; 005589dd
    FXCH                                ; 005589e4
    FADD float ptr [ESP + 0x178]        ; 005589e6
    FXCH                                ; 005589ed
    FST double ptr [ESP + 0x60]         ; 005589ef
    FMUL double ptr [ESP + 0x60]        ; 005589f3
    FXCH                                ; 005589f7
    FST double ptr [ESP + 0x78]         ; 005589f9
    FMUL double ptr [ESP + 0x78]        ; 005589fd
    FXCH                                ; 00558a01
    FADDP ST2,ST0                       ; 00558a03
    FSTP double ptr [ESP + 0x80]        ; 00558a05
    FST double ptr [ESP + 0x20]         ; 00558a0c
    FCOMP double ptr [ESP + 0x80]       ; 00558a10
    FNSTSW AX                           ; 00558a17
    SAHF                                ; 00558a19
    JNC 0x00558aa1                      ; 00558a1a
        ;   XREF to: 00558aa1 (CONDITIONAL_JUMP)  ; LAB_00558aa1
    FLD double ptr [ESP + 0x20]         ; 00558a20
    FSQRT                               ; 00558a24
    FSUB double ptr [ESP + 0x78]        ; 00558a26
    FST double ptr [ESP + 0x58]         ; 00558a2a
    FCOMP double ptr [0x005f0ec5]       ; 00558a2e | DAT_005f0ec5
    FNSTSW AX                           ; 00558a34
    SAHF                                ; 00558a36
    JBE 0x00558a4b                      ; 00558a37
        ;   XREF to: 00558a4b (CONDITIONAL_JUMP)  ; LAB_00558a4b
    MOV EAX,0xd2f1a9fc                  ; 00558a39
    MOV EDX,0xbf50624d                  ; 00558a3e
    MOV dword ptr [ESP + 0x58],EAX      ; 00558a43
    MOV dword ptr [ESP + 0x5c],EDX      ; 00558a47
    FLD float ptr [ESP + 0x158]         ; 00558a4b
        ;   Label: LAB_00558a4b
    FCOMP double ptr [ESP + 0x58]       ; 00558a52
    FNSTSW AX                           ; 00558a56
    SAHF                                ; 00558a58
    JBE 0x0055864f                      ; 00558a59
        ;   XREF to: 0055864f (CONDITIONAL_JUMP)  ; LAB_0055864f
    FLD double ptr [ESP + 0x58]         ; 00558a5f
    FLD double ptr [ESP + 0x50]         ; 00558a63
    FLD double ptr [ESP + 0x60]         ; 00558a67
    FXCH ST2                            ; 00558a6b
    FSTP float ptr [ESP + 0x158]        ; 00558a6d
    FCHS                                ; 00558a74
    FXCH                                ; 00558a76
    FCHS                                ; 00558a78
    XOR ECX,ECX                         ; 00558a7a
    FXCH                                ; 00558a7c
    FSTP float ptr [ESP + 0x15c]        ; 00558a7e
    FSTP float ptr [ESP + 0x164]        ; 00558a85
    MOV dword ptr [ESP + 0x160],ECX     ; 00558a8c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00558a93
    MOV dword ptr [EAX + 0x14d144],EBX  ; 00558a96
    JMP 0x0055864f                      ; 00558a9c
        ;   XREF to: 0055864f (UNCONDITIONAL_JUMP)  ; LAB_0055864f
    FLD double ptr [ESP + 0x50]         ; 00558aa1
        ;   Label: LAB_00558aa1
    FLD float ptr [ESP + 0x18c]         ; 00558aa5
    FSTP double ptr [ESP + 0x28]        ; 00558aac
    FMUL double ptr [ESP + 0x28]        ; 00558ab0
    FLD float ptr [ESP + 0x190]         ; 00558ab4
    FSTP double ptr [ESP + 0x30]        ; 00558abb
    FLD double ptr [ESP + 0x60]         ; 00558abf
    FMUL double ptr [ESP + 0x30]        ; 00558ac3
    FADDP                               ; 00558ac7
    FLDZ                                ; 00558ac9
    FXCH                                ; 00558acb
    FSTP double ptr [ESP + 0x38]        ; 00558acd
    FCOMP double ptr [ESP + 0x38]       ; 00558ad1
    FNSTSW AX                           ; 00558ad5
    SAHF                                ; 00558ad7
    JNC 0x0055864f                      ; 00558ad8
        ;   XREF to: 0055864f (CONDITIONAL_JUMP)  ; LAB_0055864f
    FLD double ptr [ESP + 0x38]         ; 00558ade
    FLD double ptr [ESP + 0x28]         ; 00558ae2
    FMUL ST1                            ; 00558ae6
    FLD double ptr [ESP + 0x30]         ; 00558ae8
    FMULP ST2                           ; 00558aec
    FLD float ptr [ESP + 0x168]         ; 00558aee
    FSTP double ptr [ESP + 0x40]        ; 00558af5
    FADD double ptr [ESP + 0x40]        ; 00558af9
    FLD float ptr [ESP + 0x98]          ; 00558afd
    FXCH                                ; 00558b04
    FSTP double ptr [ESP + 0x70]        ; 00558b06
    FSUB double ptr [ESP + 0x70]        ; 00558b0a
    FMUL ST0                            ; 00558b0e
    FLD float ptr [ESP + 0x16c]         ; 00558b10
    FSTP double ptr [ESP + 0x18]        ; 00558b17
    FXCH                                ; 00558b1b
    FADD double ptr [ESP + 0x18]        ; 00558b1d
    FLD float ptr [ESP + 0x9c]          ; 00558b21
    FXCH                                ; 00558b28
    FSTP double ptr [ESP + 0x8]         ; 00558b2a
    FSUB double ptr [ESP + 0x8]         ; 00558b2e
    FMUL ST0                            ; 00558b32
    FADDP                               ; 00558b34
    FST double ptr [ESP + 0x48]         ; 00558b36
    FCOMP double ptr [ESP + 0x80]       ; 00558b3a
    FNSTSW AX                           ; 00558b41
    SAHF                                ; 00558b43
    JNC 0x0055864f                      ; 00558b44
        ;   XREF to: 0055864f (CONDITIONAL_JUMP)  ; LAB_0055864f
    FLD float ptr [ESP + 0x170]         ; 00558b4a
    FST double ptr [ESP + 0x88]         ; 00558b51
    FABS                                ; 00558b58
    FLD double ptr [ESP + 0x80]         ; 00558b5a
    FSUB double ptr [ESP + 0x48]        ; 00558b61
    FSQRT                               ; 00558b65
    FLD float ptr [ESP + 0x174]         ; 00558b67
    FST double ptr [ESP]                ; 00558b6e
    FABS                                ; 00558b71
    FLD double ptr [ESP + 0x28]         ; 00558b73
    FMUL ST2                            ; 00558b77
    FLD double ptr [ESP + 0x30]         ; 00558b79
    FMULP ST3                           ; 00558b7d
    FLD double ptr [ESP + 0x8]          ; 00558b7f
    FLD double ptr [ESP + 0x70]         ; 00558b83
    FSUBRP ST2,ST0                      ; 00558b87
    FSUBRP ST3,ST0                      ; 00558b89
    FSTP double ptr [ESP + 0x68]        ; 00558b8b
    FXCH                                ; 00558b8f
    FSTP double ptr [ESP + 0x10]        ; 00558b91
    FCOMPP                              ; 00558b95
    FNSTSW AX                           ; 00558b97
    SAHF                                ; 00558b99
    JNC 0x00558c40                      ; 00558b9a
        ;   XREF to: 00558c40 (CONDITIONAL_JUMP)  ; LAB_00558c40
    FLD double ptr [ESP + 0x68]         ; 00558ba0
    FSUB double ptr [ESP + 0x40]        ; 00558ba4
    FDIV double ptr [ESP + 0x88]        ; 00558ba8
    FSTP double ptr [ESP + 0x90]        ; 00558baf
        ;   Label: LAB_00558baf
    FLDZ                                ; 00558bb6
    FCOMP double ptr [ESP + 0x90]       ; 00558bb8
    FNSTSW AX                           ; 00558bbf
    SAHF                                ; 00558bc1
    JA 0x0055864f                       ; 00558bc2
        ;   XREF to: 0055864f (CONDITIONAL_JUMP)  ; LAB_0055864f
    FLD float ptr [ESP + 0x158]         ; 00558bc8
    FCOMP double ptr [ESP + 0x90]       ; 00558bcf
    FNSTSW AX                           ; 00558bd6
    SAHF                                ; 00558bd8
    JBE 0x0055864f                      ; 00558bd9
        ;   XREF to: 0055864f (CONDITIONAL_JUMP)  ; LAB_0055864f
    FLD1                                ; 00558bdf
    FCOMP double ptr [ESP + 0x90]       ; 00558be1
    FNSTSW AX                           ; 00558be8
    SAHF                                ; 00558bea
    JC 0x0055864f                       ; 00558beb
        ;   XREF to: 0055864f (CONDITIONAL_JUMP)  ; LAB_0055864f
    FLD double ptr [ESP + 0x90]         ; 00558bf1
    FLD float ptr [ESP + 0x98]          ; 00558bf8
    FLD float ptr [ESP + 0x9c]          ; 00558bff
    FXCH ST2                            ; 00558c06
    FSTP float ptr [ESP + 0x158]        ; 00558c08
    XOR EDI,EDI                         ; 00558c0f
    FSUBR double ptr [ESP + 0x68]       ; 00558c11
    FXCH                                ; 00558c15
    FSUBR double ptr [ESP + 0x10]       ; 00558c17
    MOV dword ptr [ESP + 0x160],EDI     ; 00558c1b
    FXCH                                ; 00558c22
    FSTP float ptr [ESP + 0x15c]        ; 00558c24
    FSTP float ptr [ESP + 0x164]        ; 00558c2b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00558c32
    MOV dword ptr [EAX + 0x14d144],EBX  ; 00558c35
    JMP 0x0055864f                      ; 00558c3b
        ;   XREF to: 0055864f (UNCONDITIONAL_JUMP)  ; LAB_0055864f
    FLD double ptr [ESP + 0x10]         ; 00558c40
        ;   Label: LAB_00558c40
    FSUB double ptr [ESP + 0x18]        ; 00558c44
    FDIV double ptr [ESP]               ; 00558c48
    JMP 0x00558baf                      ; 00558c4b
        ;   XREF to: 00558baf (UNCONDITIONAL_JUMP)  ; LAB_00558baf
    MOV EAX,dword ptr [ESP + 0x168]     ; 00558c50
        ;   Label: LAB_00558c50
    MOV dword ptr [ESP + 0x260],EAX     ; 00558c57
    MOV EAX,dword ptr [ESP + 0x16c]     ; 00558c5e
    MOV dword ptr [ESP + 0x268],EAX     ; 00558c65
    LEA EAX,[ESP + 0x260]               ; 00558c6c
    PUSH EAX                            ; 00558c73
    PUSH EBX                            ; 00558c74
    MOV dword ptr [ESP + 0x26c],ESI     ; 00558c75
    LEA ESI,[ESP + 0x280]               ; 00558c7c
    CALL FUN_00408bb0                   ; 00558c83
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    ADD ESP,0x8                         ; 00558c88
    LEA EDI,[ESP + 0x254]               ; 00558c8b
    MOV EAX,dword ptr [ESP + 0x170]     ; 00558c92
    LEA ESI,[ESP + 0x278]               ; 00558c99
    MOV dword ptr [ESP + 0x2a8],EAX     ; 00558ca0
    MOV EAX,dword ptr [ESP + 0x174]     ; 00558ca7
    MOVSD ES:EDI,ESI                    ; 00558cae
    MOVSD ES:EDI,ESI                    ; 00558caf
    MOVSD ES:EDI,ESI                    ; 00558cb0
    MOV dword ptr [ESP + 0x2b0],EAX     ; 00558cb1
    LEA EAX,[ESP + 0x2a8]               ; 00558cb8
    XOR ESI,ESI                         ; 00558cbf
    PUSH EAX                            ; 00558cc1
    MOV dword ptr [ESP + 0x2b0],ESI     ; 00558cc2
    PUSH EBX                            ; 00558cc9
    LEA ESI,[ESP + 0x298]               ; 00558cca
    LEA EDI,[ESP + 0x28c]               ; 00558cd1
    CALL FUN_00408b00                   ; 00558cd8
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b00()
    ADD ESP,0x8                         ; 00558cdd
    LEA ESI,[ESP + 0x290]               ; 00558ce0
    FLD float ptr [EBP + 0x30]          ; 00558ce7
    MOVSD ES:EDI,ESI                    ; 00558cea
    MOVSD ES:EDI,ESI                    ; 00558ceb
    MOVSD ES:EDI,ESI                    ; 00558cec
    SUB ESP,0x4                         ; 00558ced
    FSUB float ptr [EBX + 0x24]         ; 00558cf0
    FLD float ptr [EBP + 0x2c]          ; 00558cf3
    FXCH                                ; 00558cf6
    FSTP float ptr [ESP]                ; 00558cf8
    FSUB float ptr [EBX + 0x24]         ; 00558cfb
    SUB ESP,0x4                         ; 00558cfe
    FSTP float ptr [ESP]                ; 00558d01
    PUSH dword ptr [EBP + 0x28]         ; 00558d04
    PUSH dword ptr [ESP + 0x298]        ; 00558d07
    PUSH dword ptr [ESP + 0x294]        ; 00558d0e
    PUSH dword ptr [ESP + 0x270]        ; 00558d15
    LEA EAX,[ESP + 0xb8]                ; 00558d1c
    PUSH dword ptr [ESP + 0x26c]        ; 00558d23
    PUSH EAX                            ; 00558d2a
    CALL FUN_0048c230                   ; 00558d2b
        ;   XREF to: 0048c230 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c230()
    ADD ESP,0x20                        ; 00558d30
    MOV EAX,dword ptr [ESP + 0x158]     ; 00558d33
    MOV dword ptr [ESP + 0xa0],EAX      ; 00558d3a
    LEA EAX,[ESP + 0xa0]                ; 00558d41
    PUSH EAX                            ; 00558d48
    MOV ESI,dword ptr [EBX + 0x154]     ; 00558d49
    PUSH EBX                            ; 00558d4f
    CALL dword ptr [ESI + 0xbc]         ; 00558d50
    ADD ESP,0x8                         ; 00558d56
    FLD float ptr [ESP + 0xa0]          ; 00558d59
    FCOMP float ptr [ESP + 0x158]       ; 00558d60
    FNSTSW AX                           ; 00558d67
    SAHF                                ; 00558d69
    JNC 0x0055864f                      ; 00558d6a
        ;   XREF to: 0055864f (CONDITIONAL_JUMP)  ; LAB_0055864f
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00558d70
    MOV dword ptr [ESP + 0x158],EAX     ; 00558d77
    LEA EAX,[ESP + 0xa4]                ; 00558d7e
    PUSH EAX                            ; 00558d85
    PUSH EBX                            ; 00558d86
    LEA ESI,[ESP + 0x274]               ; 00558d87
    LEA EDI,[ESP + 0x2a4]               ; 00558d8e
    CALL FUN_00408ac0                   ; 00558d95
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    LEA ESI,[ESP + 0x274]               ; 00558d9a
    ADD ESP,0x8                         ; 00558da1
    MOVSD ES:EDI,ESI                    ; 00558da4
    MOVSD ES:EDI,ESI                    ; 00558da5
    MOVSD ES:EDI,ESI                    ; 00558da6
    LEA EAX,[ESP + 0x29c]               ; 00558da7
    LEA ESI,[ESP + 0x15c]               ; 00558dae
    CMP ESI,EAX                         ; 00558db5
    JZ 0x00558de3                       ; 00558db7
        ;   XREF to: 00558de3 (CONDITIONAL_JUMP)  ; LAB_00558de3
    MOV EAX,dword ptr [ESP + 0x29c]     ; 00558db9
    MOV dword ptr [ESP + 0x15c],EAX     ; 00558dc0
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 00558dc7
    MOV dword ptr [ESP + 0x160],EAX     ; 00558dce
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 00558dd5
    MOV dword ptr [ESP + 0x164],EAX     ; 00558ddc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00558de3
        ;   Label: LAB_00558de3
    MOV dword ptr [EAX + 0x14d144],EBX  ; 00558de6
    JMP 0x0055864f                      ; 00558dec
        ;   XREF to: 0055864f (UNCONDITIONAL_JUMP)  ; LAB_0055864f
    MOV EDI,dword ptr [ESP + 0x2ec]     ; 00558df1
        ;   Label: LAB_00558df1
    CMP EDI,0x2                         ; 00558df8
    JNC 0x00558e08                      ; 00558dfb
        ;   XREF to: 00558e08 (CONDITIONAL_JUMP)  ; LAB_00558e08
    CMP EDI,0x1                         ; 00558dfd
    JZ 0x005588f0                       ; 00558e00
        ;   XREF to: 005588f0 (CONDITIONAL_JUMP)  ; LAB_005588f0
    JMP 0x00558e17                      ; 00558e06
        ;   XREF to: 00558e17 (UNCONDITIONAL_JUMP)  ; LAB_00558e17
    JBE 0x00558953                      ; 00558e08
        ;   XREF to: 00558953 (CONDITIONAL_JUMP)  ; LAB_00558953
        ;   Label: LAB_00558e08
    CMP EDI,0x3                         ; 00558e0e
    JZ 0x00558c50                       ; 00558e11
        ;   XREF to: 00558c50 (CONDITIONAL_JUMP)  ; LAB_00558c50
    MOV EDI,0x5f0e96                    ; 00558e17 | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_00558e17
    MOV EAX,0x3f1                       ; 00558e1c
    PUSH 0x5f0eab                       ; 00558e21 | = "Invalid collision type!"
    MOV dword ptr [0x01d1d400],EDI      ; 00558e26 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00558e2c | DAT_01d1d404
    CALL FUN_005030e0                   ; 00558e31
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00558e36
    JMP 0x0055864f                      ; 00558e39
        ;   XREF to: 0055864f (UNCONDITIONAL_JUMP)  ; LAB_0055864f
    FLD1                                ; 00558e3e
        ;   Label: LAB_00558e3e
    FLD float ptr [ESP + 0x15c]         ; 00558e40
    FXCH                                ; 00558e47
    FDIV float ptr [ESP + 0x2e0]        ; 00558e49
    FXCH                                ; 00558e50
    FMUL ST1                            ; 00558e52
    FLD float ptr [ESP + 0x160]         ; 00558e54
    FMUL ST2                            ; 00558e5b
    FLD float ptr [ESP + 0x164]         ; 00558e5d
    FMULP ST3                           ; 00558e64
    FXCH                                ; 00558e66
    FSTP float ptr [ESP + 0x15c]        ; 00558e68
    FSTP float ptr [ESP + 0x160]        ; 00558e6f
    FSTP float ptr [ESP + 0x164]        ; 00558e76
    JMP 0x005586df                      ; 00558e7d
        ;   XREF to: 005586df (UNCONDITIONAL_JUMP)  ; LAB_005586df
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00558e82
        ;   Label: LAB_00558e82
    MOV dword ptr [EBX],EAX             ; 00558e89
    MOV EAX,dword ptr [ESP + 0x160]     ; 00558e8b
    MOV dword ptr [EBX + 0x4],EAX       ; 00558e92
    MOV EAX,dword ptr [ESP + 0x164]     ; 00558e95
    MOV dword ptr [EBX + 0x8],EAX       ; 00558e9c
    MOV EAX,dword ptr [ESP + 0x158]     ; 00558e9f
    MOV ESP,EBP                         ; 00558ea6
    POP EBP                             ; 00558ea8
    POP EDI                             ; 00558ea9
    POP ESI                             ; 00558eaa
    POP EBX                             ; 00558eab
    RET                                 ; 00558eac

