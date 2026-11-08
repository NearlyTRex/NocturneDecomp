; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005114f0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_005114dc = 00511541
;   undefined4 DAT_005cc28b
;   undefined4 DAT_005cc293
;   undefined4 DAT_005cc29b
;   undefined4 DAT_005fba60
;   undefined4 DAT_00603b28
;   undefined4 DAT_006045f8
;   undefined4 DAT_01ed78c8
;   undefined4 DAT_02024a2c
;   undefined4 DAT_02024a30
;   undefined4 DAT_02026970
;   undefined4 DAT_02026974
;   undefined4 DAT_02032780
;
; Called Functions:
;   FUN_00408b80
;   FUN_00408bf0
;   FUN_0040cfa0
;   FUN_0041ee30
;   FUN_00491aa0
;   FUN_00511340
;   FUN_00512020
;   FUN_005127f0
;   FUN_00512be0
;   FUN_00535360
;   FUN_0053ed80
;   FUN_00540ba0
;   FUN_00540bc0
;   FUN_00560af0
;   FUN_00560b00
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005114f0
        ;   Label: FUN_005114f0
    PUSH ESI                            ; 005114f1
    PUSH EDI                            ; 005114f2
    PUSH EBP                            ; 005114f3
    MOV EBP,ESP                         ; 005114f4
    SUB ESP,0x39c                       ; 005114f6
    AND ESP,0xfffffff8                  ; 005114fc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005114ff
    CMP dword ptr [EAX + 0x4c0],0x2     ; 00511502
    JGE 0x0051200e                      ; 00511509
        ;   XREF to: 0051200e (CONDITIONAL_JUMP)  ; LAB_0051200e
    MOV EAX,dword ptr [EAX + 0x2dc]     ; 0051150f
    XOR EBX,EBX                         ; 00511515
    MOV dword ptr [ESP + 0x378],EAX     ; 00511517
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051151e
    MOV dword ptr [ESP + 0x380],EBX     ; 00511521
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 00511528
    MOV dword ptr [ESP + 0x37c],EBX     ; 0051152e
    CMP EAX,0x4                         ; 00511535
    JA 0x0051158f                       ; 00511538
        ;   XREF to: 0051158f (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5114dc]  ; 0051153a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511541
        ;   Label: caseD_0
    ADD EAX,0x3b8                       ; 00511544
    PUSH EAX                            ; 00511549
    MOV EAX,[0x005fba60]                ; 0051154a | DAT_005fba60
    PUSH EAX                            ; 0051154f
    CALL FUN_00491aa0                   ; 00511550
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 00511555
    TEST EAX,EAX                        ; 00511558
    JZ 0x00511582                       ; 0051155a
        ;   XREF to: 00511582 (CONDITIONAL_JUMP)  ; LAB_00511582
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051155c
    FLD float ptr [EAX + 0x2e8]         ; 0051155f
    FLD1                                ; 00511565
    FDIVRP                              ; 00511567
    SUB ESP,0x4                         ; 00511569
    FSTP float ptr [ESP]                ; 0051156c
    PUSH 0x3f800000                     ; 0051156f
    PUSH EAX                            ; 00511574
    MOV EBX,0x1                         ; 00511575
    CALL FUN_00512020                   ; 0051157a
        ;   XREF to: 00512020 (UNCONDITIONAL_CALL)  ; undefined FUN_00512020()
    ADD ESP,0xc                         ; 0051157f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511582
        ;   Label: LAB_00511582
    MOV dword ptr [EAX + 0x2dc],0x0     ; 00511585
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051158f
        ;   Label: default
    CMP dword ptr [EAX + 0x4c8],0x0     ; 00511592
    JZ 0x00511689                       ; 00511599
        ;   XREF to: 00511689 (CONDITIONAL_JUMP)  ; LAB_00511689
    TEST EBX,EBX                        ; 0051159f
    JZ 0x00511670                       ; 005115a1
        ;   XREF to: 00511670 (CONDITIONAL_JUMP)  ; LAB_00511670
    LEA EDI,[ESP + 0xc]                 ; 005115a7
    LEA ESI,[EAX + 0x4cc]               ; 005115ab
    LEA EBX,[ESP + 0xc]                 ; 005115b1
    PUSH EDI                            ; 005115b5
    MOV AL,byte ptr [ESI]               ; 005115b6
        ;   Label: LAB_005115b6
    MOV byte ptr [EDI],AL               ; 005115b8
    CMP AL,0x0                          ; 005115ba
    JZ 0x005115ce                       ; 005115bc
        ;   XREF to: 005115ce (CONDITIONAL_JUMP)  ; LAB_005115ce
    MOV AL,byte ptr [ESI + 0x1]         ; 005115be
    ADD ESI,0x2                         ; 005115c1
    MOV byte ptr [EDI + 0x1],AL         ; 005115c4
    ADD EDI,0x2                         ; 005115c7
    CMP AL,0x0                          ; 005115ca
    JNZ 0x005115b6                      ; 005115cc
        ;   XREF to: 005115b6 (CONDITIONAL_JUMP)  ; LAB_005115b6
    POP EDI                             ; 005115ce
        ;   Label: LAB_005115ce
    MOV CL,byte ptr [ESP + 0xc]         ; 005115cf
    LEA ESI,[ESP + 0xc]                 ; 005115d3
    TEST CL,CL                          ; 005115d7
    JZ 0x00511630                       ; 005115d9
        ;   XREF to: 00511630 (CONDITIONAL_JUMP)  ; LAB_00511630
    CMP byte ptr [EBX],0x3b             ; 005115db
        ;   Label: LAB_005115db
    JNZ 0x00511a6b                      ; 005115de
        ;   XREF to: 00511a6b (CONDITIONAL_JUMP)  ; LAB_00511a6b
    PUSH ESI                            ; 005115e4
    MOV EDI,dword ptr [0x00603b28]      ; 005115e5 | DAT_00603b28
    PUSH EDI                            ; 005115eb | DAT_01ed78c8
    MOV byte ptr [EBX],0x0              ; 005115ec
    CALL FUN_00535360                   ; 005115ef
        ;   XREF to: 00535360 (UNCONDITIONAL_CALL)  ; undefined FUN_00535360()
    ADD ESP,0x8                         ; 005115f4
    CMP EAX,-0x1                        ; 005115f7
    JZ 0x00511a5a                       ; 005115fa
        ;   XREF to: 00511a5a (CONDITIONAL_JUMP)  ; LAB_00511a5a
    MOV EDX,dword ptr [0x00603b28]      ; 00511600 | DAT_00603b28
    MOV ECX,dword ptr [EDX + 0x15aeb8]  ; 00511606 | DAT_02032780
    CMP EAX,ECX                         ; 0051160c
    JZ 0x00511a5a                       ; 0051160e
        ;   XREF to: 00511a5a (CONDITIONAL_JUMP)  ; LAB_00511a5a
    PUSH 0x4479c000                     ; 00511614
    PUSH EAX                            ; 00511619
    PUSH EDX                            ; 0051161a | DAT_01ed78c8
    CALL FUN_00540ba0                   ; 0051161b
        ;   XREF to: 00540ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_00540ba0()
    ADD ESP,0xc                         ; 00511620
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511623
    MOV dword ptr [EAX + 0x724],0x0     ; 00511626
    PUSH ESI                            ; 00511630
        ;   Label: LAB_00511630
    MOV EAX,[0x00603b28]                ; 00511631 | DAT_00603b28
    PUSH EAX                            ; 00511636 | DAT_01ed78c8
    CALL FUN_00535360                   ; 00511637
        ;   XREF to: 00535360 (UNCONDITIONAL_CALL)  ; undefined FUN_00535360()
    ADD ESP,0x8                         ; 0051163c
    CMP EAX,-0x1                        ; 0051163f
    JZ 0x00511670                       ; 00511642
        ;   XREF to: 00511670 (CONDITIONAL_JUMP)  ; LAB_00511670
    MOV EDX,dword ptr [0x00603b28]      ; 00511644 | DAT_00603b28
    MOV ECX,dword ptr [EDX + 0x15aeb8]  ; 0051164a | DAT_02032780
    CMP EAX,ECX                         ; 00511650
    JZ 0x00511670                       ; 00511652
        ;   XREF to: 00511670 (CONDITIONAL_JUMP)  ; LAB_00511670
    PUSH 0x4479c000                     ; 00511654
    PUSH EAX                            ; 00511659
    PUSH EDX                            ; 0051165a | DAT_01ed78c8
    CALL FUN_00540ba0                   ; 0051165b
        ;   XREF to: 00540ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_00540ba0()
    ADD ESP,0xc                         ; 00511660
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511663
    MOV dword ptr [EAX + 0x724],0x0     ; 00511666
    CMP dword ptr [ESP + 0x380],0x0     ; 00511670
        ;   Label: LAB_00511670
    JZ 0x00511689                       ; 00511678
        ;   XREF to: 00511689 (CONDITIONAL_JUMP)  ; LAB_00511689
    MOV ECX,dword ptr [0x00603b28]      ; 0051167a | DAT_00603b28
    PUSH ECX                            ; 00511680 | DAT_01ed78c8
    CALL FUN_00540bc0                   ; 00511681
        ;   XREF to: 00540bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00540bc0()
    ADD ESP,0x4                         ; 00511686
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511689
        ;   Label: LAB_00511689
    FLD float ptr [EAX + 0x2dc]         ; 0051168c
    FCOMP float ptr [ESP + 0x378]       ; 00511692
    FNSTSW AX                           ; 00511699
    SAHF                                ; 0051169b
    JZ 0x0051200e                       ; 0051169c
        ;   XREF to: 0051200e (CONDITIONAL_JUMP)  ; LAB_0051200e
    CMP dword ptr [ESP + 0x37c],0x0     ; 005116a2
    JZ 0x00511aa1                       ; 005116aa
        ;   XREF to: 00511aa1 (CONDITIONAL_JUMP)  ; LAB_00511aa1
    MOV EAX,dword ptr [EBP + 0x14]      ; 005116b0
    CMP byte ptr [EAX + 0x4a8],0x0      ; 005116b3
    JZ 0x00511aa1                       ; 005116ba
        ;   XREF to: 00511aa1 (CONDITIONAL_JUMP)  ; LAB_00511aa1
    MOV EDX,dword ptr [EAX + 0x4bc]     ; 005116c0
    PUSH EDX                            ; 005116c6
    MOV ECX,dword ptr [0x006045f8]      ; 005116c7 | DAT_006045f8
    PUSH ECX                            ; 005116cd
    CALL FUN_00560af0                   ; 005116ce
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00560af0()
    ADD ESP,0x8                         ; 005116d3
    TEST EAX,EAX                        ; 005116d6
    JZ 0x00511a7a                       ; 005116d8
        ;   XREF to: 00511a7a (CONDITIONAL_JUMP)  ; LAB_00511a7a
    MOV EBX,dword ptr [EBP + 0x14]      ; 005116de
        ;   Label: LAB_005116de
    MOV EAX,dword ptr [EBP + 0x14]      ; 005116e1
    ADD EBX,0x30                        ; 005116e4
    MOV ESI,dword ptr [EBP + 0x14]      ; 005116e7
    PUSH EBX                            ; 005116ea
    ADD ESI,0x20                        ; 005116eb
    MOV EAX,dword ptr [EAX + 0x24]      ; 005116ee
    PUSH ESI                            ; 005116f1
    MOV dword ptr [ESP + 0x37c],EAX     ; 005116f2
    LEA EAX,[ESP + 0x144]               ; 005116f9
    PUSH EAX                            ; 00511700
    CALL FUN_00583800                   ; 00511701
        ;   XREF to: 00583800 (UNCONDITIONAL_CALL)  ; undefined FUN_00583800()
    ADD ESP,0xc                         ; 00511706
    MOV EDI,dword ptr [EBP + 0x14]      ; 00511709
    PUSH EDI                            ; 0051170c
    CALL FUN_00511340                   ; 0051170d
        ;   XREF to: 00511340 (UNCONDITIONAL_CALL)  ; undefined FUN_00511340()
    ADD ESP,0x4                         ; 00511712
    PUSH EBX                            ; 00511715
    PUSH ESI                            ; 00511716
    LEA EAX,[ESP + 0x114]               ; 00511717
    PUSH EAX                            ; 0051171e
    CALL FUN_00583940                   ; 0051171f
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined FUN_00583940()
    ADD ESP,0xc                         ; 00511724
    MOV EAX,dword ptr [EDI + 0x154]     ; 00511727
    PUSH EDI                            ; 0051172d
    LEA ESI,[ESP + 0x288]               ; 0051172e
    CALL dword ptr [EAX + 0x1c]         ; 00511735
    MOV ECX,0x6                         ; 00511738
    LEA EDI,[ESP + 0x2a0]               ; 0051173d
    LEA ESI,[ESP + 0x288]               ; 00511744
    ADD ESP,0x4                         ; 0051174b
    MOVSD.REP ES:EDI,ESI                ; 0051174e
    XOR ECX,ECX                         ; 00511750
    MOV dword ptr [ESP + 0x390],ECX     ; 00511752
    MOV dword ptr [ESP + 0x388],ECX     ; 00511759
    MOV EAX,[0x00603b28]                ; 00511760 | DAT_00603b28
        ;   Label: LAB_00511760
    MOV EDX,dword ptr [ESP + 0x390]     ; 00511765
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 0051176c | DAT_02026970
    JL 0x00511abf                       ; 00511772
        ;   XREF to: 00511abf (CONDITIONAL_JUMP)  ; LAB_00511abf
    XOR EDI,EDI                         ; 00511778
    MOV dword ptr [ESP + 0x38c],EDI     ; 0051177a
    MOV dword ptr [ESP + 0x384],EDI     ; 00511781
        ;   Label: LAB_00511781
    MOV EAX,[0x00603b28]                ; 00511788 | DAT_00603b28
    MOV EDX,dword ptr [ESP + 0x38c]     ; 0051178d
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 00511794 | DAT_02024a2c
    JGE 0x00512002                      ; 0051179a
        ;   XREF to: 00512002 (CONDITIONAL_JUMP)  ; LAB_00512002
    ADD EAX,dword ptr [ESP + 0x384]     ; 005117a0
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 005117a7 | DAT_02024a30
    MOV ECX,dword ptr [EBP + 0x14]      ; 005117ad
    CMP ECX,dword ptr [EBX + 0xdc]      ; 005117b0
    JZ 0x00511e51                       ; 005117b6
        ;   XREF to: 00511e51 (CONDITIONAL_JUMP)  ; LAB_00511e51
    MOV EAX,dword ptr [ESP + 0x38c]     ; 005117bc
        ;   Label: LAB_005117bc
    MOV EDI,dword ptr [ESP + 0x384]     ; 005117c3
    INC EAX                             ; 005117ca
    ADD EDI,0x4                         ; 005117cb
    MOV dword ptr [ESP + 0x38c],EAX     ; 005117ce
    JMP 0x00511781                      ; 005117d5
        ;   XREF to: 00511781 (UNCONDITIONAL_JUMP)  ; LAB_00511781
    MOV EAX,dword ptr [EBP + 0x14]      ; 005117d7
        ;   Label: caseD_1
    ADD EAX,0x354                       ; 005117da
    PUSH EAX                            ; 005117df
    MOV ESI,dword ptr [0x005fba60]      ; 005117e0 | DAT_005fba60
    PUSH ESI                            ; 005117e6
    CALL FUN_00491aa0                   ; 005117e7
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 005117ec
    TEST EAX,EAX                        ; 005117ef
    JZ 0x00511816                       ; 005117f1
        ;   XREF to: 00511816 (CONDITIONAL_JUMP)  ; LAB_00511816
    MOV EAX,dword ptr [EBP + 0x14]      ; 005117f3
    FLD float ptr [EAX + 0x2ec]         ; 005117f6
    FLD1                                ; 005117fc
    FDIVRP                              ; 005117fe
    SUB ESP,0x4                         ; 00511800
    FSTP float ptr [ESP]                ; 00511803
    PUSH 0x0                            ; 00511806
    PUSH EAX                            ; 00511808
    MOV EBX,0x1                         ; 00511809
    CALL FUN_00512020                   ; 0051180e
        ;   XREF to: 00512020 (UNCONDITIONAL_CALL)  ; undefined FUN_00512020()
    ADD ESP,0xc                         ; 00511813
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511816
        ;   Label: LAB_00511816
    MOV dword ptr [EAX + 0x2dc],0x3f800000 ; 00511819
    JMP 0x0051158f                      ; 00511823
        ;   XREF to: 0051158f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511828
        ;   Label: caseD_2
    ADD EAX,0x3b8                       ; 0051182b
    PUSH EAX                            ; 00511830
    MOV EDI,dword ptr [0x005fba60]      ; 00511831 | DAT_005fba60
    PUSH EDI                            ; 00511837
    CALL FUN_00491aa0                   ; 00511838
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 0051183d
    TEST EAX,EAX                        ; 00511840
    JZ 0x0051186a                       ; 00511842
        ;   XREF to: 0051186a (CONDITIONAL_JUMP)  ; LAB_0051186a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511844
    FLD float ptr [EAX + 0x2e8]         ; 00511847
    FLD1                                ; 0051184d
    FDIVRP                              ; 0051184f
    SUB ESP,0x4                         ; 00511851
    FSTP float ptr [ESP]                ; 00511854
    PUSH 0x3f800000                     ; 00511857
    PUSH EAX                            ; 0051185c
    CALL FUN_00512020                   ; 0051185d
        ;   XREF to: 00512020 (UNCONDITIONAL_CALL)  ; undefined FUN_00512020()
    ADD ESP,0xc                         ; 00511862
    JMP 0x0051158f                      ; 00511865
        ;   XREF to: 0051158f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051186a
        ;   Label: LAB_0051186a
    ADD EAX,0x354                       ; 0051186d
    PUSH EAX                            ; 00511872
    MOV EAX,[0x005fba60]                ; 00511873 | DAT_005fba60
    PUSH EAX                            ; 00511878
    CALL FUN_00491aa0                   ; 00511879
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 0051187e
    TEST EAX,EAX                        ; 00511881
    JZ 0x0051158f                       ; 00511883
        ;   XREF to: 0051158f (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511889
    FLD float ptr [EAX + 0x2ec]         ; 0051188c
    FLD1                                ; 00511892
    FDIVRP                              ; 00511894
    SUB ESP,0x4                         ; 00511896
    FSTP float ptr [ESP]                ; 00511899
    PUSH 0x0                            ; 0051189c
    PUSH EAX                            ; 0051189e
    CALL FUN_00512020                   ; 0051189f
        ;   XREF to: 00512020 (UNCONDITIONAL_CALL)  ; undefined FUN_00512020()
    ADD ESP,0xc                         ; 005118a4
    JMP 0x0051158f                      ; 005118a7
        ;   XREF to: 0051158f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 005118ac
        ;   Label: caseD_3
    ADD EAX,0x41c                       ; 005118af
    PUSH EAX                            ; 005118b4
    MOV EDI,dword ptr [0x005fba60]      ; 005118b5 | DAT_005fba60
    PUSH EDI                            ; 005118bb
    CALL FUN_00491aa0                   ; 005118bc
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 005118c1
    TEST EAX,EAX                        ; 005118c4
    JZ 0x005118fe                       ; 005118c6
        ;   XREF to: 005118fe (CONDITIONAL_JUMP)  ; LAB_005118fe
    MOV EAX,dword ptr [EBP + 0x14]      ; 005118c8
    MOV DH,byte ptr [EAX + 0x494]       ; 005118cb
    MOV dword ptr [EAX + 0x2d4],0x2     ; 005118d1
    TEST DH,DH                          ; 005118db
    JZ 0x0051158f                       ; 005118dd
        ;   XREF to: 0051158f (CONDITIONAL_JUMP)  ; default
    ADD EAX,0x494                       ; 005118e3
    PUSH EAX                            ; 005118e8
    MOV ESI,dword ptr [EBP + 0x14]      ; 005118e9
    MOV EDX,dword ptr [EAX + 0xfffffcc0] ; 005118ec
    PUSH ESI                            ; 005118f2
    CALL dword ptr [EDX + 0x2c]         ; 005118f3
    ADD ESP,0x8                         ; 005118f6
    JMP 0x0051158f                      ; 005118f9
        ;   XREF to: 0051158f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 005118fe
        ;   Label: LAB_005118fe
    FLD float ptr [EBP + 0x18]          ; 00511901
    FMUL float ptr [EAX + 0x2e4]        ; 00511904
    FADD float ptr [EAX + 0x2dc]        ; 0051190a
    FST float ptr [EAX + 0x2dc]         ; 00511910
    FCOMP float ptr [EAX + 0x2e0]       ; 00511916
    FNSTSW AX                           ; 0051191c
    SAHF                                ; 0051191e
    JBE 0x00511982                      ; 0051191f
        ;   XREF to: 00511982 (CONDITIONAL_JUMP)  ; LAB_00511982
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511921
    MOV EDX,dword ptr [EAX + 0x2e0]     ; 00511924
    MOV dword ptr [EAX + 0x2dc],EDX     ; 0051192a
    FLD float ptr [EAX + 0x2dc]         ; 00511930
    FLD1                                ; 00511936
    FCOMPP                              ; 00511938
    FNSTSW AX                           ; 0051193a
    SAHF                                ; 0051193c
    JA 0x00511970                       ; 0051193d
        ;   XREF to: 00511970 (CONDITIONAL_JUMP)  ; LAB_00511970
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051193f
    MOV EDX,dword ptr [EAX + 0x4c0]     ; 00511942
    MOV dword ptr [EAX + 0x2d4],0x1     ; 00511948
    TEST EDX,EDX                        ; 00511952
    JZ 0x00511960                       ; 00511954
        ;   XREF to: 00511960 (CONDITIONAL_JUMP)  ; LAB_00511960
    MOV dword ptr [EAX + 0x4c0],0x2     ; 00511956
    MOV dword ptr [ESP + 0x380],0x1     ; 00511960
        ;   Label: LAB_00511960
    JMP 0x0051158f                      ; 0051196b
        ;   XREF to: 0051158f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511970
        ;   Label: LAB_00511970
    MOV dword ptr [EAX + 0x2d4],0x2     ; 00511973
    JMP 0x0051158f                      ; 0051197d
        ;   XREF to: 0051158f (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESP + 0x37c],0x1     ; 00511982
        ;   Label: LAB_00511982
    JMP 0x0051158f                      ; 0051198d
        ;   XREF to: 0051158f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511992
        ;   Label: caseD_4
    ADD EAX,0x41c                       ; 00511995
    PUSH EAX                            ; 0051199a
    MOV EDI,dword ptr [0x005fba60]      ; 0051199b | DAT_005fba60
    PUSH EDI                            ; 005119a1
    CALL FUN_00491aa0                   ; 005119a2
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 005119a7
    TEST EAX,EAX                        ; 005119aa
    JZ 0x005119e4                       ; 005119ac
        ;   XREF to: 005119e4 (CONDITIONAL_JUMP)  ; LAB_005119e4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005119ae
    MOV DL,byte ptr [EAX + 0x494]       ; 005119b1
    MOV dword ptr [EAX + 0x2d4],0x2     ; 005119b7
    TEST DL,DL                          ; 005119c1
    JZ 0x0051158f                       ; 005119c3
        ;   XREF to: 0051158f (CONDITIONAL_JUMP)  ; default
    ADD EAX,0x494                       ; 005119c9
    PUSH EAX                            ; 005119ce
    MOV ESI,dword ptr [EBP + 0x14]      ; 005119cf
    MOV EDX,dword ptr [EAX + 0xfffffcc0] ; 005119d2
    PUSH ESI                            ; 005119d8
    CALL dword ptr [EDX + 0x2c]         ; 005119d9
    ADD ESP,0x8                         ; 005119dc
    JMP 0x0051158f                      ; 005119df
        ;   XREF to: 0051158f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 005119e4
        ;   Label: LAB_005119e4
    FLD float ptr [EBP + 0x18]          ; 005119e7
    FMUL float ptr [EAX + 0x2e4]        ; 005119ea
    FSUBR float ptr [EAX + 0x2dc]       ; 005119f0
    FST float ptr [EAX + 0x2dc]         ; 005119f6
    FCOMP float ptr [EAX + 0x2e0]       ; 005119fc
    FNSTSW AX                           ; 00511a02
    SAHF                                ; 00511a04
    JNC 0x00511982                      ; 00511a05
        ;   XREF to: 00511982 (CONDITIONAL_JUMP)  ; LAB_00511982
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511a0b
    MOV EDX,dword ptr [EAX + 0x2e0]     ; 00511a0e
    MOV dword ptr [EAX + 0x2dc],EDX     ; 00511a14
    FLD float ptr [EAX + 0x2dc]         ; 00511a1a
    FLDZ                                ; 00511a20
    FCOMPP                              ; 00511a22
    FNSTSW AX                           ; 00511a24
    SAHF                                ; 00511a26
    JC 0x00511970                       ; 00511a27
        ;   XREF to: 00511970 (CONDITIONAL_JUMP)  ; LAB_00511970
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511a2d
    MOV EDX,dword ptr [EAX + 0x4c0]     ; 00511a30
    MOV dword ptr [EAX + 0x2d4],EBX     ; 00511a36
    TEST EDX,EDX                        ; 00511a3c
    JZ 0x00511a4a                       ; 00511a3e
        ;   XREF to: 00511a4a (CONDITIONAL_JUMP)  ; LAB_00511a4a
    MOV dword ptr [EAX + 0x4c0],0x2     ; 00511a40
    MOV dword ptr [ESP + 0x380],0x1     ; 00511a4a
        ;   Label: LAB_00511a4a
    JMP 0x0051158f                      ; 00511a55
        ;   XREF to: 0051158f (UNCONDITIONAL_JUMP)  ; default
    INC EBX                             ; 00511a5a
        ;   Label: LAB_00511a5a
    MOV ESI,EBX                         ; 00511a5b
    CMP byte ptr [EBX],0x0              ; 00511a5d
    JNZ 0x005115db                      ; 00511a60
        ;   XREF to: 005115db (CONDITIONAL_JUMP)  ; LAB_005115db
    JMP 0x00511630                      ; 00511a66
        ;   XREF to: 00511630 (UNCONDITIONAL_JUMP)  ; LAB_00511630
    INC EBX                             ; 00511a6b
        ;   Label: LAB_00511a6b
    CMP byte ptr [EBX],0x0              ; 00511a6c
    JNZ 0x005115db                      ; 00511a6f
        ;   XREF to: 005115db (CONDITIONAL_JUMP)  ; LAB_005115db
    JMP 0x00511630                      ; 00511a75
        ;   XREF to: 00511630 (UNCONDITIONAL_JUMP)  ; LAB_00511630
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511a7a
        ;   Label: LAB_00511a7a
    ADD EAX,0x4a8                       ; 00511a7d
    MOV EDX,dword ptr [EBP + 0x14]      ; 00511a82
    PUSH EAX                            ; 00511a85
    MOV EBX,dword ptr [EBP + 0x14]      ; 00511a86
    MOV EDX,dword ptr [EDX + 0x154]     ; 00511a89
    PUSH EBX                            ; 00511a8f
    CALL dword ptr [EDX + 0x30]         ; 00511a90
    ADD ESP,0x8                         ; 00511a93
    MOV dword ptr [EBX + 0x4bc],EAX     ; 00511a96
    JMP 0x005116de                      ; 00511a9c
        ;   XREF to: 005116de (UNCONDITIONAL_JUMP)  ; LAB_005116de
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511aa1
        ;   Label: LAB_00511aa1
    MOV ESI,dword ptr [EAX + 0x4bc]     ; 00511aa4
    PUSH ESI                            ; 00511aaa
    MOV EDI,dword ptr [0x006045f8]      ; 00511aab | DAT_006045f8
    PUSH EDI                            ; 00511ab1
    CALL FUN_00560b00                   ; 00511ab2
        ;   XREF to: 00560b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00560b00()
    ADD ESP,0x8                         ; 00511ab7
    JMP 0x005116de                      ; 00511aba
        ;   XREF to: 005116de (UNCONDITIONAL_JUMP)  ; LAB_005116de
    ADD EAX,dword ptr [ESP + 0x388]     ; 00511abf
        ;   Label: LAB_00511abf
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 00511ac6 | DAT_02026974
    PUSH EBX                            ; 00511acc
    MOV EAX,dword ptr [EBX + 0x154]     ; 00511acd
    CALL dword ptr [EAX + 0x10c]        ; 00511ad3
    ADD ESP,0x4                         ; 00511ad9
    TEST EAX,EAX                        ; 00511adc
    JG 0x00511e2c                       ; 00511ade
        ;   XREF to: 00511e2c (CONDITIONAL_JUMP)  ; LAB_00511e2c
    PUSH EBX                            ; 00511ae4
    MOV EAX,dword ptr [EBX + 0x154]     ; 00511ae5
    CALL dword ptr [EAX + 0x70]         ; 00511aeb
    ADD ESP,0x4                         ; 00511aee
    TEST EAX,EAX                        ; 00511af1
    JNZ 0x00511e2c                      ; 00511af3
        ;   XREF to: 00511e2c (CONDITIONAL_JUMP)  ; LAB_00511e2c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511af9
    CMP dword ptr [EAX + 0x510],0x0     ; 00511afc
    JZ 0x00511df3                       ; 00511b03
        ;   XREF to: 00511df3 (CONDITIONAL_JUMP)  ; LAB_00511df3
    LEA EAX,[EBX + 0x20]                ; 00511b09
    PUSH EAX                            ; 00511b0c
    MOV EDI,dword ptr [EBP + 0x14]      ; 00511b0d
    PUSH EDI                            ; 00511b10
    LEA ESI,[ESP + 0x31c]               ; 00511b11
    CALL FUN_00408bf0                   ; 00511b18
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    LEA EDI,[ESP + 0x2ec]               ; 00511b1d
    LEA ESI,[ESP + 0x31c]               ; 00511b24
    ADD ESP,0x8                         ; 00511b2b
    MOVSD ES:EDI,ESI                    ; 00511b2e
    MOVSD ES:EDI,ESI                    ; 00511b2f
    MOVSD ES:EDI,ESI                    ; 00511b30
    FLD float ptr [ESP + 0x2e8]         ; 00511b31
    FCOMP float ptr [ESP + 0x2ac]       ; 00511b38
    FNSTSW AX                           ; 00511b3f
    SAHF                                ; 00511b41
    JA 0x00511e2c                       ; 00511b42
        ;   XREF to: 00511e2c (CONDITIONAL_JUMP)  ; LAB_00511e2c
    FLD float ptr [ESP + 0x2a0]         ; 00511b48
    FADD double ptr [0x005cc28b]        ; 00511b4f | DAT_005cc28b
    FLD float ptr [ESP + 0x2e8]         ; 00511b55
    FCOMPP                              ; 00511b5c
    FNSTSW AX                           ; 00511b5e
    SAHF                                ; 00511b60
    JC 0x00511e2c                       ; 00511b61
        ;   XREF to: 00511e2c (CONDITIONAL_JUMP)  ; LAB_00511e2c
    LEA EAX,[ESP + 0x2e4]               ; 00511b67
    PUSH EAX                            ; 00511b6e
    LEA EAX,[ESP + 0x2a0]               ; 00511b6f
    PUSH EAX                            ; 00511b76
    LEA ESI,[ESP + 0x2f8]               ; 00511b77
    LEA EDI,[ESP + 0x304]               ; 00511b7e
    CALL FUN_0041ee30                   ; 00511b85
        ;   XREF to: 0041ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ee30()
    ADD ESP,0x8                         ; 00511b8a
    LEA ESI,[ESP + 0x2f0]               ; 00511b8d
    FLD float ptr [ESP + 0x2e4]         ; 00511b94
    FLD float ptr [ESP + 0x2e8]         ; 00511b9b
    MOVSD ES:EDI,ESI                    ; 00511ba2
    MOVSD ES:EDI,ESI                    ; 00511ba3
    MOVSD ES:EDI,ESI                    ; 00511ba4
    FLD float ptr [ESP + 0x2ec]         ; 00511ba5
    LEA EDI,[ESP + 0x35c]               ; 00511bac
    LEA ESI,[ESP + 0x2c0]               ; 00511bb3
    FXCH ST2                            ; 00511bba
    FSUB float ptr [ESP + 0x2fc]        ; 00511bbc
    FXCH                                ; 00511bc3
    FSUB float ptr [ESP + 0x300]        ; 00511bc5
    FXCH ST2                            ; 00511bcc
    FSUB float ptr [ESP + 0x304]        ; 00511bce
    FXCH                                ; 00511bd5
    FSTP float ptr [ESP + 0x2c0]        ; 00511bd7
    FXCH                                ; 00511bde
    FSTP float ptr [ESP + 0x2c4]        ; 00511be0
    FSTP float ptr [ESP + 0x2c8]        ; 00511be7
    MOVSD ES:EDI,ESI                    ; 00511bee
    MOVSD ES:EDI,ESI                    ; 00511bef
    MOVSD ES:EDI,ESI                    ; 00511bf0
    FLD float ptr [ESP + 0x35c]         ; 00511bf1
    FABS                                ; 00511bf8
    FCOMP double ptr [0x005cc293]       ; 00511bfa | DAT_005cc293
    FNSTSW AX                           ; 00511c00
    SAHF                                ; 00511c02
    JA 0x00511e2c                       ; 00511c03
        ;   XREF to: 00511e2c (CONDITIONAL_JUMP)  ; LAB_00511e2c
    FLD float ptr [ESP + 0x364]         ; 00511c09
    FABS                                ; 00511c10
    FCOMP double ptr [0x005cc293]       ; 00511c12 | DAT_005cc293
    FNSTSW AX                           ; 00511c18
    SAHF                                ; 00511c1a
    JA 0x00511e2c                       ; 00511c1b
        ;   XREF to: 00511e2c (CONDITIONAL_JUMP)  ; LAB_00511e2c
    XOR EAX,EAX                         ; 00511c21
    MOV dword ptr [ESP + 0x360],EAX     ; 00511c23
    LEA EAX,[ESP + 0x25c]               ; 00511c2a
    PUSH EAX                            ; 00511c31
    CALL FUN_0053ed80                   ; 00511c32
        ;   XREF to: 0053ed80 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ed80()
    ADD ESP,0x4                         ; 00511c37
    LEA EAX,[ESP + 0x25c]               ; 00511c3a
    XOR EDX,EDX                         ; 00511c41
    PUSH EAX                            ; 00511c43
    MOV dword ptr [ESP + 0x260],EDX     ; 00511c44
    PUSH EBX                            ; 00511c4b
    MOV EDX,dword ptr [EBX + 0x154]     ; 00511c4c
    CALL dword ptr [EDX + 0x3c]         ; 00511c52
    ADD ESP,0x8                         ; 00511c55
    CMP EAX,0x2                         ; 00511c58
    JNZ 0x00511e2c                      ; 00511c5b
        ;   XREF to: 00511e2c (CONDITIONAL_JUMP)  ; LAB_00511e2c
    FLD float ptr [ESP + 0x2e8]         ; 00511c61
    FADD float ptr [ESP + 0x270]        ; 00511c68
    FCOMP float ptr [ESP + 0x2ac]       ; 00511c6f
    FNSTSW AX                           ; 00511c76
    SAHF                                ; 00511c78
    JA 0x00511e2c                       ; 00511c79
        ;   XREF to: 00511e2c (CONDITIONAL_JUMP)  ; LAB_00511e2c
    FLD float ptr [ESP + 0x2e8]         ; 00511c7f
    FADD float ptr [ESP + 0x274]        ; 00511c86
    FCOMP float ptr [ESP + 0x2a0]       ; 00511c8d
    FNSTSW AX                           ; 00511c94
    SAHF                                ; 00511c96
    JC 0x00511e2c                       ; 00511c97
        ;   XREF to: 00511e2c (CONDITIONAL_JUMP)  ; LAB_00511e2c
    FLD float ptr [ESP + 0x364]         ; 00511c9d
    FMUL ST0                            ; 00511ca4
    FLD float ptr [ESP + 0x35c]         ; 00511ca6
    FMUL ST0                            ; 00511cad
    FLD float ptr [ESP + 0x278]         ; 00511caf
    FXCH                                ; 00511cb6
    FADDP ST2,ST0                       ; 00511cb8
    FMUL float ptr [ESP + 0x278]        ; 00511cba
    FXCH                                ; 00511cc1
    FSTP float ptr [ESP + 0x8]          ; 00511cc3
    FCOMP float ptr [ESP + 0x8]         ; 00511cc7
    FNSTSW AX                           ; 00511ccb
    SAHF                                ; 00511ccd
    JC 0x00511e2c                       ; 00511cce
        ;   XREF to: 00511e2c (CONDITIONAL_JUMP)  ; LAB_00511e2c
    FLD float ptr [ESP + 0x8]           ; 00511cd4
    FSQRT                               ; 00511cd8
    FLDZ                                ; 00511cda
    FXCH                                ; 00511cdc
    FST float ptr [ESP + 0x8]           ; 00511cde
    FSTP double ptr [ESP]               ; 00511ce2
    FCOMP double ptr [ESP]              ; 00511ce5
    FNSTSW AX                           ; 00511ce8
    SAHF                                ; 00511cea
    JNC 0x00511e2c                      ; 00511ceb
        ;   XREF to: 00511e2c (CONDITIONAL_JUMP)  ; LAB_00511e2c
    FLD float ptr [ESP + 0x278]         ; 00511cf1
    FADD double ptr [0x005cc29b]        ; 00511cf8 | DAT_005cc29b
    FDIV double ptr [ESP]               ; 00511cfe
    FLD float ptr [ESP + 0x35c]         ; 00511d01
    FXCH                                ; 00511d08
    FSTP float ptr [ESP + 0x394]        ; 00511d0a
    FMUL float ptr [ESP + 0x394]        ; 00511d11
    FLDZ                                ; 00511d18
    FMUL float ptr [ESP + 0x394]        ; 00511d1a
    FLD float ptr [ESP + 0x364]         ; 00511d21
    FMUL float ptr [ESP + 0x394]        ; 00511d28
    FLD float ptr [ESP + 0x2fc]         ; 00511d2f
    FLD float ptr [ESP + 0x300]         ; 00511d36
    FLD float ptr [ESP + 0x304]         ; 00511d3d
    LEA EDI,[ESP + 0x308]               ; 00511d44
    LEA ESI,[ESP + 0x338]               ; 00511d4b
    LEA EAX,[ESP + 0x308]               ; 00511d52
    MOV ECX,dword ptr [EBP + 0x14]      ; 00511d59
    PUSH EAX                            ; 00511d5c
    FXCH ST5                            ; 00511d5d
    FSTP float ptr [ESP + 0x360]        ; 00511d5f
    FXCH ST3                            ; 00511d66
    FSTP float ptr [ESP + 0x364]        ; 00511d68
    FXCH                                ; 00511d6f
    FSTP float ptr [ESP + 0x368]        ; 00511d71
    FADD float ptr [ESP + 0x360]        ; 00511d78
    FXCH                                ; 00511d7f
    FADD float ptr [ESP + 0x364]        ; 00511d81
    FXCH ST2                            ; 00511d88
    FADD float ptr [ESP + 0x368]        ; 00511d8a
    FXCH                                ; 00511d91
    FSTP float ptr [ESP + 0x33c]        ; 00511d93
    FXCH                                ; 00511d9a
    FSTP float ptr [ESP + 0x340]        ; 00511d9c
    FSTP float ptr [ESP + 0x344]        ; 00511da3
    MOVSD ES:EDI,ESI                    ; 00511daa
    MOVSD ES:EDI,ESI                    ; 00511dab
    MOVSD ES:EDI,ESI                    ; 00511dac
    PUSH ECX                            ; 00511dad
    LEA ESI,[ESP + 0x370]               ; 00511dae
    LEA EDI,[ESP + 0x328]               ; 00511db5
    CALL FUN_00408b80                   ; 00511dbc
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x370]               ; 00511dc1
    ADD ESP,0x8                         ; 00511dc8
    MOVSD ES:EDI,ESI                    ; 00511dcb
    MOVSD ES:EDI,ESI                    ; 00511dcc
    MOVSD ES:EDI,ESI                    ; 00511dcd
    MOV EAX,dword ptr [EBX + 0x24]      ; 00511dce
    MOV dword ptr [ESP + 0x324],EAX     ; 00511dd1
    LEA EAX,[EBX + 0x30]                ; 00511dd8
    PUSH EAX                            ; 00511ddb
    LEA EAX,[ESP + 0x324]               ; 00511ddc
    PUSH EAX                            ; 00511de3
    MOV EDX,dword ptr [EBX + 0x154]     ; 00511de4
    PUSH EBX                            ; 00511dea
    CALL dword ptr [EDX + 0x68]         ; 00511deb
    ADD ESP,0xc                         ; 00511dee
    JMP 0x00511e2c                      ; 00511df1
        ;   XREF to: 00511e2c (UNCONDITIONAL_JUMP)  ; LAB_00511e2c
    FLD float ptr [EAX + 0x24]          ; 00511df3
        ;   Label: LAB_00511df3
    FCOMP float ptr [ESP + 0x374]       ; 00511df6
    FNSTSW AX                           ; 00511dfd
    SAHF                                ; 00511dff
    JNC 0x00511e2c                      ; 00511e00
        ;   XREF to: 00511e2c (CONDITIONAL_JUMP)  ; LAB_00511e2c
    PUSH EBX                            ; 00511e02
    MOV ESI,dword ptr [EBP + 0x14]      ; 00511e03
    PUSH ESI                            ; 00511e06
    CALL FUN_005127f0                   ; 00511e07
        ;   XREF to: 005127f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005127f0()
    ADD ESP,0x8                         ; 00511e0c
    TEST EAX,EAX                        ; 00511e0f
    JZ 0x00511e2c                       ; 00511e11
        ;   XREF to: 00511e2c (CONDITIONAL_JUMP)  ; LAB_00511e2c
    PUSH 0xbf800000                     ; 00511e13
    PUSH 0x0                            ; 00511e18
    PUSH 0x8                            ; 00511e1a
    MOV EAX,dword ptr [EBX + 0x154]     ; 00511e1c
    PUSH EBX                            ; 00511e22
    CALL dword ptr [EAX + 0xdc]         ; 00511e23
    ADD ESP,0x10                        ; 00511e29
    MOV ESI,dword ptr [ESP + 0x390]     ; 00511e2c
        ;   Label: LAB_00511e2c
    MOV EBX,dword ptr [ESP + 0x388]     ; 00511e33
    INC ESI                             ; 00511e3a
    ADD EBX,0x4                         ; 00511e3b
    MOV dword ptr [ESP + 0x390],ESI     ; 00511e3e
    MOV dword ptr [ESP + 0x388],EBX     ; 00511e45
    JMP 0x00511760                      ; 00511e4c
        ;   XREF to: 00511760 (UNCONDITIONAL_JUMP)  ; LAB_00511760
    LEA EAX,[EBX + 0x30]                ; 00511e51
        ;   Label: LAB_00511e51
    PUSH EAX                            ; 00511e54
    LEA EAX,[EBX + 0x20]                ; 00511e55
    PUSH EAX                            ; 00511e58
    MOV dword ptr [ESP + 0x3a0],EAX     ; 00511e59
    LEA EAX,[ESP + 0x1a4]               ; 00511e60
    PUSH EAX                            ; 00511e67
    CALL FUN_00583940                   ; 00511e68
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined FUN_00583940()
    ADD ESP,0xc                         ; 00511e6d
    LEA EAX,[ESP + 0x13c]               ; 00511e70
    PUSH EAX                            ; 00511e77
    LEA EAX,[ESP + 0x1a0]               ; 00511e78
    PUSH EAX                            ; 00511e7f
    LEA ESI,[ESP + 0x204]               ; 00511e80
    LEA EDI,[ESP + 0x1d4]               ; 00511e87
    CALL FUN_005833e0                   ; 00511e8e
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005833e0()
    MOV ECX,0xc                         ; 00511e93
    ADD ESP,0x8                         ; 00511e98
    LEA EAX,[ESP + 0x10c]               ; 00511e9b
    LEA ESI,[ESP + 0x1fc]               ; 00511ea2
    PUSH EAX                            ; 00511ea9
    LEA EAX,[ESP + 0x1d0]               ; 00511eaa
    MOVSD.REP ES:EDI,ESI                ; 00511eb1
    PUSH EAX                            ; 00511eb3
    LEA ESI,[ESP + 0x234]               ; 00511eb4
    LEA EDI,[ESP + 0x174]               ; 00511ebb
    CALL FUN_005833e0                   ; 00511ec2
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005833e0()
    MOV ECX,0xc                         ; 00511ec7
    LEA ESI,[ESP + 0x234]               ; 00511ecc
    ADD ESP,0x8                         ; 00511ed3
    MOVSD.REP ES:EDI,ESI                ; 00511ed6
    MOV EAX,dword ptr [ESP + 0x178]     ; 00511ed8
    MOV dword ptr [ESP + 0x32c],EAX     ; 00511edf
    MOV EAX,dword ptr [ESP + 0x188]     ; 00511ee6
    LEA EDI,[ESP + 0x344]               ; 00511eed
    MOV dword ptr [ESP + 0x330],EAX     ; 00511ef4
    MOV EAX,dword ptr [ESP + 0x198]     ; 00511efb
    LEA ESI,[ESP + 0x32c]               ; 00511f02
    MOV dword ptr [ESP + 0x334],EAX     ; 00511f09
    LEA EAX,[ESP + 0x16c]               ; 00511f10
    MOVSD ES:EDI,ESI                    ; 00511f17
    MOVSD ES:EDI,ESI                    ; 00511f18
    MOVSD ES:EDI,ESI                    ; 00511f19
    PUSH EAX                            ; 00511f1a
    LEA ESI,[ESP + 0x2dc]               ; 00511f1b
    LEA EDI,[ESP + 0x354]               ; 00511f22
    CALL FUN_00583b10                   ; 00511f29
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00583b10()
    LEA ESI,[ESP + 0x2dc]               ; 00511f2e
    ADD ESP,0x4                         ; 00511f35
    LEA EDX,[EBX + 0xe0]                ; 00511f38
    FLD float ptr [ESP + 0x344]         ; 00511f3e
    FLD float ptr [ESP + 0x348]         ; 00511f45
    FLD float ptr [ESP + 0x34c]         ; 00511f4c
    MOVSD ES:EDI,ESI                    ; 00511f53
    MOVSD ES:EDI,ESI                    ; 00511f54
    MOVSD ES:EDI,ESI                    ; 00511f55
    MOV EAX,dword ptr [ESP + 0x398]     ; 00511f56
    LEA EDI,[ESP + 0x2b4]               ; 00511f5d
    LEA ESI,[ESP + 0x2cc]               ; 00511f64
    FXCH ST2                            ; 00511f6b
    FSUB float ptr [EAX]                ; 00511f6d
    FXCH                                ; 00511f6f
    FSUB float ptr [EAX + 0x4]          ; 00511f71
    FXCH ST2                            ; 00511f74
    FSUB float ptr [EAX + 0x8]          ; 00511f76
    FXCH                                ; 00511f79
    FSTP float ptr [ESP + 0x2cc]        ; 00511f7b
    FXCH                                ; 00511f82
    FSTP float ptr [ESP + 0x2d0]        ; 00511f84
    FSTP float ptr [ESP + 0x2d4]        ; 00511f8b
    LEA EAX,[ESP + 0x2b4]               ; 00511f92
    MOVSD ES:EDI,ESI                    ; 00511f99
    MOVSD ES:EDI,ESI                    ; 00511f9a
    MOVSD ES:EDI,ESI                    ; 00511f9b
    CMP EDX,EAX                         ; 00511f9c
    JZ 0x00511fbd                       ; 00511f9e
        ;   XREF to: 00511fbd (CONDITIONAL_JUMP)  ; LAB_00511fbd
    MOV EAX,dword ptr [ESP + 0x2b4]     ; 00511fa0
    MOV dword ptr [EDX],EAX             ; 00511fa7
    MOV EAX,dword ptr [ESP + 0x2b8]     ; 00511fa9
    MOV dword ptr [EDX + 0x4],EAX       ; 00511fb0
    MOV EAX,dword ptr [ESP + 0x2bc]     ; 00511fb3
    MOV dword ptr [EDX + 0x8],EAX       ; 00511fba
    MOV dword ptr [EBX + 0xec],0x0      ; 00511fbd
        ;   Label: LAB_00511fbd
    MOV dword ptr [EBX + 0xf4],0x0      ; 00511fc7
    FLD float ptr [ESP + 0x354]         ; 00511fd1
    FSUB float ptr [EBX + 0x34]         ; 00511fd8
    SUB ESP,0x4                         ; 00511fdb
    FSTP float ptr [ESP]                ; 00511fde
    CALL FUN_0040cfa0                   ; 00511fe1
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfa0()
    MOV dword ptr [ESP + 0x39c],EAX     ; 00511fe6
    MOV EAX,dword ptr [ESP + 0x39c]     ; 00511fed
    MOV dword ptr [EBX + 0xf0],EAX      ; 00511ff4
    ADD ESP,0x4                         ; 00511ffa
    JMP 0x005117bc                      ; 00511ffd
        ;   XREF to: 005117bc (UNCONDITIONAL_JUMP)  ; LAB_005117bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00512002
        ;   Label: LAB_00512002
    PUSH EAX                            ; 00512005
    CALL FUN_00512be0                   ; 00512006
        ;   XREF to: 00512be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00512be0()
    ADD ESP,0x4                         ; 0051200b
    MOV ESP,EBP                         ; 0051200e
        ;   Label: LAB_0051200e
    POP EBP                             ; 00512010
    POP EDI                             ; 00512011
    POP ESI                             ; 00512012
    POP EBX                             ; 00512013
    RET                                 ; 00512014

