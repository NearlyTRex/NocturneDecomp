; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004724e0(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004759d0 at 00475d8f
;   FUN_0049cc10 at 0049d5a3
;
; Referenced Globals:
;   string s_..\\shape\\edittool.cpp_0057ea49
;   string s_CEditorTools::setMousePointerTyp_0057ea5f
;   undefined4 DAT_005b6d54
;   undefined4 DAT_005b6d58
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_01bcd9c0
;   undefined4 DAT_01bd1d8c
;   undefined4 DAT_01bd1d90
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;   undefined4 DAT_01c00c70
;   undefined4 DAT_01cc4800
;   ... and 1 more
;
; Called Functions:
;   FUN_00401530
;   FUN_00472490
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004724e0
        ;   Label: FUN_004724e0
    PUSH ESI                            ; 004724e1
    PUSH EDI                            ; 004724e2
    PUSH EBP                            ; 004724e3
    SUB ESP,0x10                        ; 004724e4
    MOV EBX,dword ptr [ESP + 0x28]      ; 004724e7
    MOV EDX,dword ptr [ESP + 0x24]      ; 004724eb
    PUSH EDX                            ; 004724ef
    CALL FUN_00472490                   ; 004724f0
        ;   XREF to: 00472490 (UNCONDITIONAL_CALL)  ; undefined FUN_00472490()
    MOV [0x01c00c70],EAX                ; 004724f5 | DAT_01c00c70
    MOV EAX,[0x01bcd9c0]                ; 004724fa | DAT_01bcd9c0
    ADD ESP,0x4                         ; 004724ff
    CMP EAX,0x1                         ; 00472502
    JNC 0x00472c4a                      ; 00472505
        ;   XREF to: 00472c4a (CONDITIONAL_JUMP)  ; LAB_00472c4a
    TEST EAX,EAX                        ; 0047250b
    JNZ 0x00472c59                      ; 0047250d
        ;   XREF to: 00472c59 (CONDITIONAL_JUMP)  ; LAB_00472c59
    MOV EDX,dword ptr [0x01bd1d8c]      ; 00472513 | DAT_01bd1d8c
    MOV EAX,[0x01bd1d90]                ; 00472519 | DAT_01bd1d90
    TEST EDX,EDX                        ; 0047251e
    JL 0x00472532                       ; 00472520
        ;   XREF to: 00472532 (CONDITIONAL_JUMP)  ; LAB_00472532
    TEST EAX,EAX                        ; 00472522
    JL 0x00472532                       ; 00472524
        ;   XREF to: 00472532 (CONDITIONAL_JUMP)  ; LAB_00472532
    CMP EDX,dword ptr [0x005b761c]      ; 00472526 | DAT_005b761c
    JL 0x004725b1                       ; 0047252c
        ;   XREF to: 004725b1 (CONDITIONAL_JUMP)  ; LAB_004725b1
    MOV EDI,0x1                         ; 00472532
        ;   Label: LAB_00472532
    MOV EAX,[0x005b6d54]                ; 00472537 | DAT_005b6d54
        ;   Label: LAB_00472537
    MOV EDX,EAX                         ; 0047253c
    SAR EDX,0x1f                        ; 0047253e
    SUB EAX,EDX                         ; 00472541
    SAR EAX,0x1                         ; 00472543
    CMP EDI,EAX                         ; 00472545
    JLE 0x00472600                      ; 00472547
        ;   XREF to: 00472600 (CONDITIONAL_JUMP)  ; LAB_00472600
    MOV EDI,0x1                         ; 0047254d
    MOV EAX,[0x005b6d58]                ; 00472552 | DAT_005b6d58
        ;   Label: LAB_00472552
    MOV EDX,EAX                         ; 00472557
    SAR EDX,0x1f                        ; 00472559
    SUB EAX,EDX                         ; 0047255c
    SAR EAX,0x1                         ; 0047255e
    CMP EDI,EAX                         ; 00472560
    JG 0x00472c7c                       ; 00472562
        ;   XREF to: 00472c7c (CONDITIONAL_JUMP)  ; LAB_00472c7c
    MOV EAX,[0x01bd1d90]                ; 00472568 | DAT_01bd1d90
    SUB EAX,EDI                         ; 0047256d
    MOV ESI,dword ptr [0x01bd1d8c]      ; 0047256f | DAT_01bd1d8c
    MOV EDX,EAX                         ; 00472575
    TEST ESI,ESI                        ; 00472577
    JL 0x0047258b                       ; 00472579
        ;   XREF to: 0047258b (CONDITIONAL_JUMP)  ; LAB_0047258b
    TEST EAX,EAX                        ; 0047257b
    JL 0x0047258b                       ; 0047257d
        ;   XREF to: 0047258b (CONDITIONAL_JUMP)  ; LAB_0047258b
    CMP ESI,dword ptr [0x005b761c]      ; 0047257f | DAT_005b761c
    JL 0x004726bd                       ; 00472585
        ;   XREF to: 004726bd (CONDITIONAL_JUMP)  ; LAB_004726bd
    MOV ESI,dword ptr [0x01bd1d90]      ; 0047258b | DAT_01bd1d90
        ;   Label: LAB_0047258b
    ADD ESI,EDI                         ; 00472591
    MOV EAX,[0x01bd1d8c]                ; 00472593 | DAT_01bd1d8c
    MOV EDX,ESI                         ; 00472598
    TEST EAX,EAX                        ; 0047259a
    JL 0x004725ae                       ; 0047259c
        ;   XREF to: 004725ae (CONDITIONAL_JUMP)  ; LAB_004725ae
    TEST ESI,ESI                        ; 0047259e
    JL 0x004725ae                       ; 004725a0
        ;   XREF to: 004725ae (CONDITIONAL_JUMP)  ; LAB_004725ae
    CMP EAX,dword ptr [0x005b761c]      ; 004725a2 | DAT_005b761c
    JL 0x0047270c                       ; 004725a8
        ;   XREF to: 0047270c (CONDITIONAL_JUMP)  ; LAB_0047270c
    INC EDI                             ; 004725ae
        ;   Label: LAB_004725ae
    JMP 0x00472552                      ; 004725af
        ;   XREF to: 00472552 (UNCONDITIONAL_JUMP)  ; LAB_00472552
    CMP EAX,dword ptr [0x005b7620]      ; 004725b1 | DAT_005b7620
        ;   Label: LAB_004725b1
    JGE 0x00472532                      ; 004725b7
        ;   XREF to: 00472532 (CONDITIONAL_JUMP)  ; LAB_00472532
    TEST EBX,EBX                        ; 004725bd
    JZ 0x004725f1                       ; 004725bf
        ;   XREF to: 004725f1 (CONDITIONAL_JUMP)  ; LAB_004725f1
    CMP EDX,dword ptr [0x01c00c58]      ; 004725c1 | DAT_01c00c58
    JL 0x00472532                       ; 004725c7
        ;   XREF to: 00472532 (CONDITIONAL_JUMP)  ; LAB_00472532
    CMP EDX,dword ptr [0x01c00c60]      ; 004725cd | DAT_01c00c60
    JGE 0x00472532                      ; 004725d3
        ;   XREF to: 00472532 (CONDITIONAL_JUMP)  ; LAB_00472532
    CMP EAX,dword ptr [0x01c00c5c]      ; 004725d9 | DAT_01c00c5c
    JL 0x00472532                       ; 004725df
        ;   XREF to: 00472532 (CONDITIONAL_JUMP)  ; LAB_00472532
    CMP EAX,dword ptr [0x01c00c64]      ; 004725e5 | DAT_01c00c64
    JGE 0x00472532                      ; 004725eb
        ;   XREF to: 00472532 (CONDITIONAL_JUMP)  ; LAB_00472532
    PUSH EAX                            ; 004725f1
        ;   Label: LAB_004725f1
    PUSH EDX                            ; 004725f2
    CALL FUN_00401530                   ; 004725f3
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 004725f8
    JMP 0x00472532                      ; 004725fb
        ;   XREF to: 00472532 (UNCONDITIONAL_JUMP)  ; LAB_00472532
    MOV ESI,dword ptr [0x01bd1d8c]      ; 00472600 | DAT_01bd1d8c
        ;   Label: LAB_00472600
    SUB ESI,EDI                         ; 00472606
    MOV EAX,[0x01bd1d90]                ; 00472608 | DAT_01bd1d90
    MOV EDX,ESI                         ; 0047260d
    TEST ESI,ESI                        ; 0047260f
    JL 0x00472623                       ; 00472611
        ;   XREF to: 00472623 (CONDITIONAL_JUMP)  ; LAB_00472623
    TEST EAX,EAX                        ; 00472613
    JL 0x00472623                       ; 00472615
        ;   XREF to: 00472623 (CONDITIONAL_JUMP)  ; LAB_00472623
    CMP ESI,dword ptr [0x005b761c]      ; 00472617 | DAT_005b761c
    JL 0x0047267e                       ; 0047261d
        ;   XREF to: 0047267e (CONDITIONAL_JUMP)  ; LAB_0047267e
    MOV EAX,[0x01bd1d8c]                ; 00472623 | DAT_01bd1d8c
        ;   Label: LAB_00472623
    ADD EAX,EDI                         ; 00472628
    MOV ESI,dword ptr [0x01bd1d90]      ; 0047262a | DAT_01bd1d90
    MOV EDX,EAX                         ; 00472630
    TEST EAX,EAX                        ; 00472632
    JL 0x00472678                       ; 00472634
        ;   XREF to: 00472678 (CONDITIONAL_JUMP)  ; LAB_00472678
    TEST ESI,ESI                        ; 00472636
    JL 0x00472678                       ; 00472638
        ;   XREF to: 00472678 (CONDITIONAL_JUMP)  ; LAB_00472678
    CMP EAX,dword ptr [0x005b761c]      ; 0047263a | DAT_005b761c
    JGE 0x00472678                      ; 00472640
        ;   XREF to: 00472678 (CONDITIONAL_JUMP)  ; LAB_00472678
    CMP ESI,dword ptr [0x005b7620]      ; 00472642 | DAT_005b7620
    JGE 0x00472678                      ; 00472648
        ;   XREF to: 00472678 (CONDITIONAL_JUMP)  ; LAB_00472678
    TEST EBX,EBX                        ; 0047264a
    JZ 0x0047266e                       ; 0047264c
        ;   XREF to: 0047266e (CONDITIONAL_JUMP)  ; LAB_0047266e
    CMP EAX,dword ptr [0x01c00c58]      ; 0047264e | DAT_01c00c58
    JL 0x00472678                       ; 00472654
        ;   XREF to: 00472678 (CONDITIONAL_JUMP)  ; LAB_00472678
    CMP EAX,dword ptr [0x01c00c60]      ; 00472656 | DAT_01c00c60
    JGE 0x00472678                      ; 0047265c
        ;   XREF to: 00472678 (CONDITIONAL_JUMP)  ; LAB_00472678
    CMP ESI,dword ptr [0x01c00c5c]      ; 0047265e | DAT_01c00c5c
    JL 0x00472678                       ; 00472664
        ;   XREF to: 00472678 (CONDITIONAL_JUMP)  ; LAB_00472678
    CMP ESI,dword ptr [0x01c00c64]      ; 00472666 | DAT_01c00c64
    JGE 0x00472678                      ; 0047266c
        ;   XREF to: 00472678 (CONDITIONAL_JUMP)  ; LAB_00472678
    PUSH ESI                            ; 0047266e
        ;   Label: LAB_0047266e
    PUSH EDX                            ; 0047266f
    CALL FUN_00401530                   ; 00472670
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 00472675
    INC EDI                             ; 00472678
        ;   Label: LAB_00472678
    JMP 0x00472537                      ; 00472679
        ;   XREF to: 00472537 (UNCONDITIONAL_JUMP)  ; LAB_00472537
    CMP EAX,dword ptr [0x005b7620]      ; 0047267e | DAT_005b7620
        ;   Label: LAB_0047267e
    JGE 0x00472623                      ; 00472684
        ;   XREF to: 00472623 (CONDITIONAL_JUMP)  ; LAB_00472623
    TEST EBX,EBX                        ; 00472686
    JZ 0x004726ae                       ; 00472688
        ;   XREF to: 004726ae (CONDITIONAL_JUMP)  ; LAB_004726ae
    CMP ESI,dword ptr [0x01c00c58]      ; 0047268a | DAT_01c00c58
    JL 0x00472623                       ; 00472690
        ;   XREF to: 00472623 (CONDITIONAL_JUMP)  ; LAB_00472623
    CMP ESI,dword ptr [0x01c00c60]      ; 00472692 | DAT_01c00c60
    JGE 0x00472623                      ; 00472698
        ;   XREF to: 00472623 (CONDITIONAL_JUMP)  ; LAB_00472623
    CMP EAX,dword ptr [0x01c00c5c]      ; 0047269a | DAT_01c00c5c
    JL 0x00472623                       ; 004726a0
        ;   XREF to: 00472623 (CONDITIONAL_JUMP)  ; LAB_00472623
    CMP EAX,dword ptr [0x01c00c64]      ; 004726a2 | DAT_01c00c64
    JGE 0x00472623                      ; 004726a8
        ;   XREF to: 00472623 (CONDITIONAL_JUMP)  ; LAB_00472623
    PUSH EAX                            ; 004726ae
        ;   Label: LAB_004726ae
    PUSH EDX                            ; 004726af
    CALL FUN_00401530                   ; 004726b0
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 004726b5
    JMP 0x00472623                      ; 004726b8
        ;   XREF to: 00472623 (UNCONDITIONAL_JUMP)  ; LAB_00472623
    CMP EAX,dword ptr [0x005b7620]      ; 004726bd | DAT_005b7620
        ;   Label: LAB_004726bd
    JGE 0x0047258b                      ; 004726c3
        ;   XREF to: 0047258b (CONDITIONAL_JUMP)  ; LAB_0047258b
    TEST EBX,EBX                        ; 004726c9
    JZ 0x004726fd                       ; 004726cb
        ;   XREF to: 004726fd (CONDITIONAL_JUMP)  ; LAB_004726fd
    CMP ESI,dword ptr [0x01c00c58]      ; 004726cd | DAT_01c00c58
    JL 0x0047258b                       ; 004726d3
        ;   XREF to: 0047258b (CONDITIONAL_JUMP)  ; LAB_0047258b
    CMP ESI,dword ptr [0x01c00c60]      ; 004726d9 | DAT_01c00c60
    JGE 0x0047258b                      ; 004726df
        ;   XREF to: 0047258b (CONDITIONAL_JUMP)  ; LAB_0047258b
    CMP EAX,dword ptr [0x01c00c5c]      ; 004726e5 | DAT_01c00c5c
    JL 0x0047258b                       ; 004726eb
        ;   XREF to: 0047258b (CONDITIONAL_JUMP)  ; LAB_0047258b
    CMP EAX,dword ptr [0x01c00c64]      ; 004726f1 | DAT_01c00c64
    JGE 0x0047258b                      ; 004726f7
        ;   XREF to: 0047258b (CONDITIONAL_JUMP)  ; LAB_0047258b
    PUSH EDX                            ; 004726fd
        ;   Label: LAB_004726fd
    PUSH ESI                            ; 004726fe
    CALL FUN_00401530                   ; 004726ff
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 00472704
    JMP 0x0047258b                      ; 00472707
        ;   XREF to: 0047258b (UNCONDITIONAL_JUMP)  ; LAB_0047258b
    CMP ESI,dword ptr [0x005b7620]      ; 0047270c | DAT_005b7620
        ;   Label: LAB_0047270c
    JGE 0x004725ae                      ; 00472712
        ;   XREF to: 004725ae (CONDITIONAL_JUMP)  ; LAB_004725ae
    TEST EBX,EBX                        ; 00472718
    JZ 0x0047274c                       ; 0047271a
        ;   XREF to: 0047274c (CONDITIONAL_JUMP)  ; LAB_0047274c
    CMP EAX,dword ptr [0x01c00c58]      ; 0047271c | DAT_01c00c58
    JL 0x004725ae                       ; 00472722
        ;   XREF to: 004725ae (CONDITIONAL_JUMP)  ; LAB_004725ae
    CMP EAX,dword ptr [0x01c00c60]      ; 00472728 | DAT_01c00c60
    JGE 0x004725ae                      ; 0047272e
        ;   XREF to: 004725ae (CONDITIONAL_JUMP)  ; LAB_004725ae
    CMP ESI,dword ptr [0x01c00c5c]      ; 00472734 | DAT_01c00c5c
    JL 0x004725ae                       ; 0047273a
        ;   XREF to: 004725ae (CONDITIONAL_JUMP)  ; LAB_004725ae
    CMP ESI,dword ptr [0x01c00c64]      ; 00472740 | DAT_01c00c64
    JGE 0x004725ae                      ; 00472746
        ;   XREF to: 004725ae (CONDITIONAL_JUMP)  ; LAB_004725ae
    PUSH EDX                            ; 0047274c
        ;   Label: LAB_0047274c
    PUSH EAX                            ; 0047274d
    CALL FUN_00401530                   ; 0047274e
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 00472753
    INC EDI                             ; 00472756
    JMP 0x00472552                      ; 00472757
        ;   XREF to: 00472552 (UNCONDITIONAL_JUMP)  ; LAB_00472552
    MOV EDX,dword ptr [0x01bd1d8c]      ; 0047275c | DAT_01bd1d8c
        ;   Label: LAB_0047275c
    MOV EAX,[0x01bd1d90]                ; 00472762 | DAT_01bd1d90
    TEST EDX,EDX                        ; 00472767
    JL 0x0047277b                       ; 00472769
        ;   XREF to: 0047277b (CONDITIONAL_JUMP)  ; LAB_0047277b
    TEST EAX,EAX                        ; 0047276b
    JL 0x0047277b                       ; 0047276d
        ;   XREF to: 0047277b (CONDITIONAL_JUMP)  ; LAB_0047277b
    CMP EDX,dword ptr [0x005b761c]      ; 0047276f | DAT_005b761c
    JL 0x00472838                       ; 00472775
        ;   XREF to: 00472838 (CONDITIONAL_JUMP)  ; LAB_00472838
    MOV ESI,0x1                         ; 0047277b
        ;   Label: LAB_0047277b
    MOV EAX,[0x005b6d54]                ; 00472780 | DAT_005b6d54
        ;   Label: LAB_00472780
    MOV EDX,EAX                         ; 00472785
    SAR EDX,0x1f                        ; 00472787
    SUB EAX,EDX                         ; 0047278a
    SAR EAX,0x1                         ; 0047278c
    CMP ESI,EAX                         ; 0047278e
    JG 0x00472c7c                       ; 00472790
        ;   XREF to: 00472c7c (CONDITIONAL_JUMP)  ; LAB_00472c7c
    MOV EDI,dword ptr [0x01bd1d8c]      ; 00472796 | DAT_01bd1d8c
    MOV EAX,[0x01bd1d90]                ; 0047279c | DAT_01bd1d90
    SUB EDI,ESI                         ; 004727a1
    SUB EAX,ESI                         ; 004727a3
    MOV EBP,EDI                         ; 004727a5
    MOV EDX,EAX                         ; 004727a7
    TEST EDI,EDI                        ; 004727a9
    JL 0x004727bd                       ; 004727ab
        ;   XREF to: 004727bd (CONDITIONAL_JUMP)  ; LAB_004727bd
    TEST EAX,EAX                        ; 004727ad
    JL 0x004727bd                       ; 004727af
        ;   XREF to: 004727bd (CONDITIONAL_JUMP)  ; LAB_004727bd
    CMP EDI,dword ptr [0x005b761c]      ; 004727b1 | DAT_005b761c
    JL 0x00472887                       ; 004727b7
        ;   XREF to: 00472887 (CONDITIONAL_JUMP)  ; LAB_00472887
    MOV EDI,dword ptr [0x01bd1d8c]      ; 004727bd | DAT_01bd1d8c
        ;   Label: LAB_004727bd
    MOV EAX,[0x01bd1d90]                ; 004727c3 | DAT_01bd1d90
    ADD EDI,ESI                         ; 004727c8
    SUB EAX,ESI                         ; 004727ca
    MOV EDX,EDI                         ; 004727cc
    MOV EBP,EAX                         ; 004727ce
    TEST EDI,EDI                        ; 004727d0
    JL 0x004727e4                       ; 004727d2
        ;   XREF to: 004727e4 (CONDITIONAL_JUMP)  ; LAB_004727e4
    TEST EAX,EAX                        ; 004727d4
    JL 0x004727e4                       ; 004727d6
        ;   XREF to: 004727e4 (CONDITIONAL_JUMP)  ; LAB_004727e4
    CMP EDI,dword ptr [0x005b761c]      ; 004727d8 | DAT_005b761c
    JL 0x004728d6                       ; 004727de
        ;   XREF to: 004728d6 (CONDITIONAL_JUMP)  ; LAB_004728d6
    MOV EAX,[0x01bd1d8c]                ; 004727e4 | DAT_01bd1d8c
        ;   Label: LAB_004727e4
    MOV EDI,dword ptr [0x01bd1d90]      ; 004727e9 | DAT_01bd1d90
    SUB EAX,ESI                         ; 004727ef
    ADD EDI,ESI                         ; 004727f1
    MOV EDX,EAX                         ; 004727f3
    MOV EBP,EDI                         ; 004727f5
    TEST EAX,EAX                        ; 004727f7
    JL 0x0047280b                       ; 004727f9
        ;   XREF to: 0047280b (CONDITIONAL_JUMP)  ; LAB_0047280b
    TEST EDI,EDI                        ; 004727fb
    JL 0x0047280b                       ; 004727fd
        ;   XREF to: 0047280b (CONDITIONAL_JUMP)  ; LAB_0047280b
    CMP EAX,dword ptr [0x005b761c]      ; 004727ff | DAT_005b761c
    JL 0x00472925                       ; 00472805
        ;   XREF to: 00472925 (CONDITIONAL_JUMP)  ; LAB_00472925
    MOV EAX,[0x01bd1d8c]                ; 0047280b | DAT_01bd1d8c
        ;   Label: LAB_0047280b
    MOV EDI,dword ptr [0x01bd1d90]      ; 00472810 | DAT_01bd1d90
    ADD EAX,ESI                         ; 00472816
    ADD EDI,ESI                         ; 00472818
    MOV EDX,EAX                         ; 0047281a
    MOV EBP,EDI                         ; 0047281c
    TEST EAX,EAX                        ; 0047281e
    JL 0x00472832                       ; 00472820
        ;   XREF to: 00472832 (CONDITIONAL_JUMP)  ; LAB_00472832
    TEST EDI,EDI                        ; 00472822
    JL 0x00472832                       ; 00472824
        ;   XREF to: 00472832 (CONDITIONAL_JUMP)  ; LAB_00472832
    CMP EAX,dword ptr [0x005b761c]      ; 00472826 | DAT_005b761c
    JL 0x00472974                       ; 0047282c
        ;   XREF to: 00472974 (CONDITIONAL_JUMP)  ; LAB_00472974
    INC ESI                             ; 00472832
        ;   Label: LAB_00472832
    JMP 0x00472780                      ; 00472833
        ;   XREF to: 00472780 (UNCONDITIONAL_JUMP)  ; LAB_00472780
    CMP EAX,dword ptr [0x005b7620]      ; 00472838 | DAT_005b7620
        ;   Label: LAB_00472838
    JGE 0x0047277b                      ; 0047283e
        ;   XREF to: 0047277b (CONDITIONAL_JUMP)  ; LAB_0047277b
    TEST EBX,EBX                        ; 00472844
    JZ 0x00472878                       ; 00472846
        ;   XREF to: 00472878 (CONDITIONAL_JUMP)  ; LAB_00472878
    CMP EDX,dword ptr [0x01c00c58]      ; 00472848 | DAT_01c00c58
    JL 0x0047277b                       ; 0047284e
        ;   XREF to: 0047277b (CONDITIONAL_JUMP)  ; LAB_0047277b
    CMP EDX,dword ptr [0x01c00c60]      ; 00472854 | DAT_01c00c60
    JGE 0x0047277b                      ; 0047285a
        ;   XREF to: 0047277b (CONDITIONAL_JUMP)  ; LAB_0047277b
    CMP EAX,dword ptr [0x01c00c5c]      ; 00472860 | DAT_01c00c5c
    JL 0x0047277b                       ; 00472866
        ;   XREF to: 0047277b (CONDITIONAL_JUMP)  ; LAB_0047277b
    CMP EAX,dword ptr [0x01c00c64]      ; 0047286c | DAT_01c00c64
    JGE 0x0047277b                      ; 00472872
        ;   XREF to: 0047277b (CONDITIONAL_JUMP)  ; LAB_0047277b
    PUSH EAX                            ; 00472878
        ;   Label: LAB_00472878
    PUSH EDX                            ; 00472879
    CALL FUN_00401530                   ; 0047287a
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 0047287f
    JMP 0x0047277b                      ; 00472882
        ;   XREF to: 0047277b (UNCONDITIONAL_JUMP)  ; LAB_0047277b
    CMP EAX,dword ptr [0x005b7620]      ; 00472887 | DAT_005b7620
        ;   Label: LAB_00472887
    JGE 0x004727bd                      ; 0047288d
        ;   XREF to: 004727bd (CONDITIONAL_JUMP)  ; LAB_004727bd
    TEST EBX,EBX                        ; 00472893
    JZ 0x004728c7                       ; 00472895
        ;   XREF to: 004728c7 (CONDITIONAL_JUMP)  ; LAB_004728c7
    CMP EDI,dword ptr [0x01c00c58]      ; 00472897 | DAT_01c00c58
    JL 0x004727bd                       ; 0047289d
        ;   XREF to: 004727bd (CONDITIONAL_JUMP)  ; LAB_004727bd
    CMP EDI,dword ptr [0x01c00c60]      ; 004728a3 | DAT_01c00c60
    JGE 0x004727bd                      ; 004728a9
        ;   XREF to: 004727bd (CONDITIONAL_JUMP)  ; LAB_004727bd
    CMP EAX,dword ptr [0x01c00c5c]      ; 004728af | DAT_01c00c5c
    JL 0x004727bd                       ; 004728b5
        ;   XREF to: 004727bd (CONDITIONAL_JUMP)  ; LAB_004727bd
    CMP EAX,dword ptr [0x01c00c64]      ; 004728bb | DAT_01c00c64
    JGE 0x004727bd                      ; 004728c1
        ;   XREF to: 004727bd (CONDITIONAL_JUMP)  ; LAB_004727bd
    PUSH EDX                            ; 004728c7
        ;   Label: LAB_004728c7
    PUSH EBP                            ; 004728c8
    CALL FUN_00401530                   ; 004728c9
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 004728ce
    JMP 0x004727bd                      ; 004728d1
        ;   XREF to: 004727bd (UNCONDITIONAL_JUMP)  ; LAB_004727bd
    CMP EAX,dword ptr [0x005b7620]      ; 004728d6 | DAT_005b7620
        ;   Label: LAB_004728d6
    JGE 0x004727e4                      ; 004728dc
        ;   XREF to: 004727e4 (CONDITIONAL_JUMP)  ; LAB_004727e4
    TEST EBX,EBX                        ; 004728e2
    JZ 0x00472916                       ; 004728e4
        ;   XREF to: 00472916 (CONDITIONAL_JUMP)  ; LAB_00472916
    CMP EDI,dword ptr [0x01c00c58]      ; 004728e6 | DAT_01c00c58
    JL 0x004727e4                       ; 004728ec
        ;   XREF to: 004727e4 (CONDITIONAL_JUMP)  ; LAB_004727e4
    CMP EDI,dword ptr [0x01c00c60]      ; 004728f2 | DAT_01c00c60
    JGE 0x004727e4                      ; 004728f8
        ;   XREF to: 004727e4 (CONDITIONAL_JUMP)  ; LAB_004727e4
    CMP EAX,dword ptr [0x01c00c5c]      ; 004728fe | DAT_01c00c5c
    JL 0x004727e4                       ; 00472904
        ;   XREF to: 004727e4 (CONDITIONAL_JUMP)  ; LAB_004727e4
    CMP EAX,dword ptr [0x01c00c64]      ; 0047290a | DAT_01c00c64
    JGE 0x004727e4                      ; 00472910
        ;   XREF to: 004727e4 (CONDITIONAL_JUMP)  ; LAB_004727e4
    PUSH EBP                            ; 00472916
        ;   Label: LAB_00472916
    PUSH EDX                            ; 00472917
    CALL FUN_00401530                   ; 00472918
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 0047291d
    JMP 0x004727e4                      ; 00472920
        ;   XREF to: 004727e4 (UNCONDITIONAL_JUMP)  ; LAB_004727e4
    CMP EDI,dword ptr [0x005b7620]      ; 00472925 | DAT_005b7620
        ;   Label: LAB_00472925
    JGE 0x0047280b                      ; 0047292b
        ;   XREF to: 0047280b (CONDITIONAL_JUMP)  ; LAB_0047280b
    TEST EBX,EBX                        ; 00472931
    JZ 0x00472965                       ; 00472933
        ;   XREF to: 00472965 (CONDITIONAL_JUMP)  ; LAB_00472965
    CMP EAX,dword ptr [0x01c00c58]      ; 00472935 | DAT_01c00c58
    JL 0x0047280b                       ; 0047293b
        ;   XREF to: 0047280b (CONDITIONAL_JUMP)  ; LAB_0047280b
    CMP EAX,dword ptr [0x01c00c60]      ; 00472941 | DAT_01c00c60
    JGE 0x0047280b                      ; 00472947
        ;   XREF to: 0047280b (CONDITIONAL_JUMP)  ; LAB_0047280b
    CMP EDI,dword ptr [0x01c00c5c]      ; 0047294d | DAT_01c00c5c
    JL 0x0047280b                       ; 00472953
        ;   XREF to: 0047280b (CONDITIONAL_JUMP)  ; LAB_0047280b
    CMP EDI,dword ptr [0x01c00c64]      ; 00472959 | DAT_01c00c64
    JGE 0x0047280b                      ; 0047295f
        ;   XREF to: 0047280b (CONDITIONAL_JUMP)  ; LAB_0047280b
    PUSH EBP                            ; 00472965
        ;   Label: LAB_00472965
    PUSH EDX                            ; 00472966
    CALL FUN_00401530                   ; 00472967
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 0047296c
    JMP 0x0047280b                      ; 0047296f
        ;   XREF to: 0047280b (UNCONDITIONAL_JUMP)  ; LAB_0047280b
    CMP EDI,dword ptr [0x005b7620]      ; 00472974 | DAT_005b7620
        ;   Label: LAB_00472974
    JGE 0x00472832                      ; 0047297a
        ;   XREF to: 00472832 (CONDITIONAL_JUMP)  ; LAB_00472832
    TEST EBX,EBX                        ; 00472980
    JZ 0x004729b4                       ; 00472982
        ;   XREF to: 004729b4 (CONDITIONAL_JUMP)  ; LAB_004729b4
    CMP EAX,dword ptr [0x01c00c58]      ; 00472984 | DAT_01c00c58
    JL 0x00472832                       ; 0047298a
        ;   XREF to: 00472832 (CONDITIONAL_JUMP)  ; LAB_00472832
    CMP EAX,dword ptr [0x01c00c60]      ; 00472990 | DAT_01c00c60
    JGE 0x00472832                      ; 00472996
        ;   XREF to: 00472832 (CONDITIONAL_JUMP)  ; LAB_00472832
    CMP EDI,dword ptr [0x01c00c5c]      ; 0047299c | DAT_01c00c5c
    JL 0x00472832                       ; 004729a2
        ;   XREF to: 00472832 (CONDITIONAL_JUMP)  ; LAB_00472832
    CMP EDI,dword ptr [0x01c00c64]      ; 004729a8 | DAT_01c00c64
    JGE 0x00472832                      ; 004729ae
        ;   XREF to: 00472832 (CONDITIONAL_JUMP)  ; LAB_00472832
    PUSH EBP                            ; 004729b4
        ;   Label: LAB_004729b4
    PUSH EDX                            ; 004729b5
    CALL FUN_00401530                   ; 004729b6
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 004729bb
    INC ESI                             ; 004729be
    JMP 0x00472780                      ; 004729bf
        ;   XREF to: 00472780 (UNCONDITIONAL_JUMP)  ; LAB_00472780
    MOV EAX,[0x005b6d58]                ; 004729c4 | DAT_005b6d58
        ;   Label: LAB_004729c4
    MOV EDX,EAX                         ; 004729c9
    SAR EDX,0x1f                        ; 004729cb
    SUB EAX,EDX                         ; 004729ce
    SAR EAX,0x1                         ; 004729d0
    MOV EDI,dword ptr [0x01bd1d90]      ; 004729d2 | DAT_01bd1d90
    MOV ESI,dword ptr [0x005b6d58]      ; 004729d8 | DAT_005b6d58
    SUB EDI,EAX                         ; 004729de
    ADD ESI,EDI                         ; 004729e0
    DEC ESI                             ; 004729e2
    LEA EBP,[EDI + 0x1]                 ; 004729e3
    CMP EBP,ESI                         ; 004729e6
    JGE 0x00472a0a                      ; 004729e8
        ;   XREF to: 00472a0a (CONDITIONAL_JUMP)  ; LAB_00472a0a
    MOV EAX,[0x01bd1d8c]                ; 004729ea | DAT_01bd1d8c
        ;   Label: LAB_004729ea
    MOV EDX,EBP                         ; 004729ef
    TEST EAX,EAX                        ; 004729f1
    JL 0x00472a05                       ; 004729f3
        ;   XREF to: 00472a05 (CONDITIONAL_JUMP)  ; LAB_00472a05
    TEST EBP,EBP                        ; 004729f5
    JL 0x00472a05                       ; 004729f7
        ;   XREF to: 00472a05 (CONDITIONAL_JUMP)  ; LAB_00472a05
    CMP EAX,dword ptr [0x005b761c]      ; 004729f9 | DAT_005b761c
    JL 0x00472aae                       ; 004729ff
        ;   XREF to: 00472aae (CONDITIONAL_JUMP)  ; LAB_00472aae
    INC EBP                             ; 00472a05
        ;   Label: LAB_00472a05
    CMP EBP,ESI                         ; 00472a06
    JL 0x004729ea                       ; 00472a08
        ;   XREF to: 004729ea (CONDITIONAL_JUMP)  ; LAB_004729ea
    MOV EBP,0x1                         ; 00472a0a
        ;   Label: LAB_00472a0a
    MOV EAX,[0x005b6d54]                ; 00472a0f | DAT_005b6d54
        ;   Label: LAB_00472a0f
    MOV EDX,EAX                         ; 00472a14
    SAR EDX,0x1f                        ; 00472a16
    SUB EAX,EDX                         ; 00472a19
    SAR EAX,0x1                         ; 00472a1b
    CMP EBP,EAX                         ; 00472a1d
    JG 0x00472c7c                       ; 00472a1f
        ;   XREF to: 00472c7c (CONDITIONAL_JUMP)  ; LAB_00472c7c
    MOV EAX,[0x01bd1d8c]                ; 00472a25 | DAT_01bd1d8c
    SUB EAX,EBP                         ; 00472a2a
    MOV EDX,EDI                         ; 00472a2c
    MOV dword ptr [ESP + 0x8],EAX       ; 00472a2e
    TEST EAX,EAX                        ; 00472a32
    JL 0x00472a46                       ; 00472a34
        ;   XREF to: 00472a46 (CONDITIONAL_JUMP)  ; LAB_00472a46
    TEST EDI,EDI                        ; 00472a36
    JL 0x00472a46                       ; 00472a38
        ;   XREF to: 00472a46 (CONDITIONAL_JUMP)  ; LAB_00472a46
    CMP EAX,dword ptr [0x005b761c]      ; 00472a3a | DAT_005b761c
    JL 0x00472afd                       ; 00472a40
        ;   XREF to: 00472afd (CONDITIONAL_JUMP)  ; LAB_00472afd
    MOV EAX,[0x01bd1d8c]                ; 00472a46 | DAT_01bd1d8c
        ;   Label: LAB_00472a46
    ADD EAX,EBP                         ; 00472a4b
    MOV EDX,EDI                         ; 00472a4d
    MOV dword ptr [ESP + 0x4],EAX       ; 00472a4f
    TEST EAX,EAX                        ; 00472a53
    JL 0x00472a67                       ; 00472a55
        ;   XREF to: 00472a67 (CONDITIONAL_JUMP)  ; LAB_00472a67
    TEST EDI,EDI                        ; 00472a57
    JL 0x00472a67                       ; 00472a59
        ;   XREF to: 00472a67 (CONDITIONAL_JUMP)  ; LAB_00472a67
    CMP EAX,dword ptr [0x005b761c]      ; 00472a5b | DAT_005b761c
    JL 0x00472b50                       ; 00472a61
        ;   XREF to: 00472b50 (CONDITIONAL_JUMP)  ; LAB_00472b50
    MOV EAX,[0x01bd1d8c]                ; 00472a67 | DAT_01bd1d8c
        ;   Label: LAB_00472a67
    SUB EAX,EBP                         ; 00472a6c
    MOV EDX,ESI                         ; 00472a6e
    MOV dword ptr [ESP],EAX             ; 00472a70
    TEST EAX,EAX                        ; 00472a73
    JL 0x00472a87                       ; 00472a75
        ;   XREF to: 00472a87 (CONDITIONAL_JUMP)  ; LAB_00472a87
    TEST ESI,ESI                        ; 00472a77
    JL 0x00472a87                       ; 00472a79
        ;   XREF to: 00472a87 (CONDITIONAL_JUMP)  ; LAB_00472a87
    CMP EAX,dword ptr [0x005b761c]      ; 00472a7b | DAT_005b761c
    JL 0x00472ba3                       ; 00472a81
        ;   XREF to: 00472ba3 (CONDITIONAL_JUMP)  ; LAB_00472ba3
    MOV EAX,[0x01bd1d8c]                ; 00472a87 | DAT_01bd1d8c
        ;   Label: LAB_00472a87
    ADD EAX,EBP                         ; 00472a8c
    MOV dword ptr [ESP + 0xc],ESI       ; 00472a8e
    MOV EDX,EAX                         ; 00472a92
    TEST EAX,EAX                        ; 00472a94
    JL 0x00472aa8                       ; 00472a96
        ;   XREF to: 00472aa8 (CONDITIONAL_JUMP)  ; LAB_00472aa8
    TEST ESI,ESI                        ; 00472a98
    JL 0x00472aa8                       ; 00472a9a
        ;   XREF to: 00472aa8 (CONDITIONAL_JUMP)  ; LAB_00472aa8
    CMP EAX,dword ptr [0x005b761c]      ; 00472a9c | DAT_005b761c
    JL 0x00472bf6                       ; 00472aa2
        ;   XREF to: 00472bf6 (CONDITIONAL_JUMP)  ; LAB_00472bf6
    INC EBP                             ; 00472aa8
        ;   Label: LAB_00472aa8
    JMP 0x00472a0f                      ; 00472aa9
        ;   XREF to: 00472a0f (UNCONDITIONAL_JUMP)  ; LAB_00472a0f
    CMP EBP,dword ptr [0x005b7620]      ; 00472aae | DAT_005b7620
        ;   Label: LAB_00472aae
    JGE 0x00472a05                      ; 00472ab4
        ;   XREF to: 00472a05 (CONDITIONAL_JUMP)  ; LAB_00472a05
    TEST EBX,EBX                        ; 00472aba
    JZ 0x00472aee                       ; 00472abc
        ;   XREF to: 00472aee (CONDITIONAL_JUMP)  ; LAB_00472aee
    CMP EAX,dword ptr [0x01c00c58]      ; 00472abe | DAT_01c00c58
    JL 0x00472a05                       ; 00472ac4
        ;   XREF to: 00472a05 (CONDITIONAL_JUMP)  ; LAB_00472a05
    CMP EAX,dword ptr [0x01c00c60]      ; 00472aca | DAT_01c00c60
    JGE 0x00472a05                      ; 00472ad0
        ;   XREF to: 00472a05 (CONDITIONAL_JUMP)  ; LAB_00472a05
    CMP EBP,dword ptr [0x01c00c5c]      ; 00472ad6 | DAT_01c00c5c
    JL 0x00472a05                       ; 00472adc
        ;   XREF to: 00472a05 (CONDITIONAL_JUMP)  ; LAB_00472a05
    CMP EBP,dword ptr [0x01c00c64]      ; 00472ae2 | DAT_01c00c64
    JGE 0x00472a05                      ; 00472ae8
        ;   XREF to: 00472a05 (CONDITIONAL_JUMP)  ; LAB_00472a05
    PUSH EDX                            ; 00472aee
        ;   Label: LAB_00472aee
    PUSH EAX                            ; 00472aef
    CALL FUN_00401530                   ; 00472af0
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 00472af5
    JMP 0x00472a05                      ; 00472af8
        ;   XREF to: 00472a05 (UNCONDITIONAL_JUMP)  ; LAB_00472a05
    CMP EDI,dword ptr [0x005b7620]      ; 00472afd | DAT_005b7620
        ;   Label: LAB_00472afd
    JGE 0x00472a46                      ; 00472b03
        ;   XREF to: 00472a46 (CONDITIONAL_JUMP)  ; LAB_00472a46
    TEST EBX,EBX                        ; 00472b09
    JZ 0x00472b3d                       ; 00472b0b
        ;   XREF to: 00472b3d (CONDITIONAL_JUMP)  ; LAB_00472b3d
    CMP EAX,dword ptr [0x01c00c58]      ; 00472b0d | DAT_01c00c58
    JL 0x00472a46                       ; 00472b13
        ;   XREF to: 00472a46 (CONDITIONAL_JUMP)  ; LAB_00472a46
    CMP EAX,dword ptr [0x01c00c60]      ; 00472b19 | DAT_01c00c60
    JGE 0x00472a46                      ; 00472b1f
        ;   XREF to: 00472a46 (CONDITIONAL_JUMP)  ; LAB_00472a46
    CMP EDI,dword ptr [0x01c00c5c]      ; 00472b25 | DAT_01c00c5c
    JL 0x00472a46                       ; 00472b2b
        ;   XREF to: 00472a46 (CONDITIONAL_JUMP)  ; LAB_00472a46
    CMP EDI,dword ptr [0x01c00c64]      ; 00472b31 | DAT_01c00c64
    JGE 0x00472a46                      ; 00472b37
        ;   XREF to: 00472a46 (CONDITIONAL_JUMP)  ; LAB_00472a46
    PUSH EDX                            ; 00472b3d
        ;   Label: LAB_00472b3d
    MOV EAX,dword ptr [ESP + 0xc]       ; 00472b3e
    PUSH EAX                            ; 00472b42
    CALL FUN_00401530                   ; 00472b43
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 00472b48
    JMP 0x00472a46                      ; 00472b4b
        ;   XREF to: 00472a46 (UNCONDITIONAL_JUMP)  ; LAB_00472a46
    CMP EDI,dword ptr [0x005b7620]      ; 00472b50 | DAT_005b7620
        ;   Label: LAB_00472b50
    JGE 0x00472a67                      ; 00472b56
        ;   XREF to: 00472a67 (CONDITIONAL_JUMP)  ; LAB_00472a67
    TEST EBX,EBX                        ; 00472b5c
    JZ 0x00472b90                       ; 00472b5e
        ;   XREF to: 00472b90 (CONDITIONAL_JUMP)  ; LAB_00472b90
    CMP EAX,dword ptr [0x01c00c58]      ; 00472b60 | DAT_01c00c58
    JL 0x00472a67                       ; 00472b66
        ;   XREF to: 00472a67 (CONDITIONAL_JUMP)  ; LAB_00472a67
    CMP EAX,dword ptr [0x01c00c60]      ; 00472b6c | DAT_01c00c60
    JGE 0x00472a67                      ; 00472b72
        ;   XREF to: 00472a67 (CONDITIONAL_JUMP)  ; LAB_00472a67
    CMP EDI,dword ptr [0x01c00c5c]      ; 00472b78 | DAT_01c00c5c
    JL 0x00472a67                       ; 00472b7e
        ;   XREF to: 00472a67 (CONDITIONAL_JUMP)  ; LAB_00472a67
    CMP EDI,dword ptr [0x01c00c64]      ; 00472b84 | DAT_01c00c64
    JGE 0x00472a67                      ; 00472b8a
        ;   XREF to: 00472a67 (CONDITIONAL_JUMP)  ; LAB_00472a67
    PUSH EDX                            ; 00472b90
        ;   Label: LAB_00472b90
    MOV EAX,dword ptr [ESP + 0x8]       ; 00472b91
    PUSH EAX                            ; 00472b95
    CALL FUN_00401530                   ; 00472b96
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 00472b9b
    JMP 0x00472a67                      ; 00472b9e
        ;   XREF to: 00472a67 (UNCONDITIONAL_JUMP)  ; LAB_00472a67
    CMP ESI,dword ptr [0x005b7620]      ; 00472ba3 | DAT_005b7620
        ;   Label: LAB_00472ba3
    JGE 0x00472a87                      ; 00472ba9
        ;   XREF to: 00472a87 (CONDITIONAL_JUMP)  ; LAB_00472a87
    TEST EBX,EBX                        ; 00472baf
    JZ 0x00472be3                       ; 00472bb1
        ;   XREF to: 00472be3 (CONDITIONAL_JUMP)  ; LAB_00472be3
    CMP EAX,dword ptr [0x01c00c58]      ; 00472bb3 | DAT_01c00c58
    JL 0x00472a87                       ; 00472bb9
        ;   XREF to: 00472a87 (CONDITIONAL_JUMP)  ; LAB_00472a87
    CMP EAX,dword ptr [0x01c00c60]      ; 00472bbf | DAT_01c00c60
    JGE 0x00472a87                      ; 00472bc5
        ;   XREF to: 00472a87 (CONDITIONAL_JUMP)  ; LAB_00472a87
    CMP ESI,dword ptr [0x01c00c5c]      ; 00472bcb | DAT_01c00c5c
    JL 0x00472a87                       ; 00472bd1
        ;   XREF to: 00472a87 (CONDITIONAL_JUMP)  ; LAB_00472a87
    CMP ESI,dword ptr [0x01c00c64]      ; 00472bd7 | DAT_01c00c64
    JGE 0x00472a87                      ; 00472bdd
        ;   XREF to: 00472a87 (CONDITIONAL_JUMP)  ; LAB_00472a87
    PUSH EDX                            ; 00472be3
        ;   Label: LAB_00472be3
    MOV EAX,dword ptr [ESP + 0x4]       ; 00472be4
    PUSH EAX                            ; 00472be8
    CALL FUN_00401530                   ; 00472be9
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 00472bee
    JMP 0x00472a87                      ; 00472bf1
        ;   XREF to: 00472a87 (UNCONDITIONAL_JUMP)  ; LAB_00472a87
    CMP ESI,dword ptr [0x005b7620]      ; 00472bf6 | DAT_005b7620
        ;   Label: LAB_00472bf6
    JGE 0x00472aa8                      ; 00472bfc
        ;   XREF to: 00472aa8 (CONDITIONAL_JUMP)  ; LAB_00472aa8
    TEST EBX,EBX                        ; 00472c02
    JZ 0x00472c36                       ; 00472c04
        ;   XREF to: 00472c36 (CONDITIONAL_JUMP)  ; LAB_00472c36
    CMP EAX,dword ptr [0x01c00c58]      ; 00472c06 | DAT_01c00c58
    JL 0x00472aa8                       ; 00472c0c
        ;   XREF to: 00472aa8 (CONDITIONAL_JUMP)  ; LAB_00472aa8
    CMP EAX,dword ptr [0x01c00c60]      ; 00472c12 | DAT_01c00c60
    JGE 0x00472aa8                      ; 00472c18
        ;   XREF to: 00472aa8 (CONDITIONAL_JUMP)  ; LAB_00472aa8
    CMP ESI,dword ptr [0x01c00c5c]      ; 00472c1e | DAT_01c00c5c
    JL 0x00472aa8                       ; 00472c24
        ;   XREF to: 00472aa8 (CONDITIONAL_JUMP)  ; LAB_00472aa8
    CMP ESI,dword ptr [0x01c00c64]      ; 00472c2a | DAT_01c00c64
    JGE 0x00472aa8                      ; 00472c30
        ;   XREF to: 00472aa8 (CONDITIONAL_JUMP)  ; LAB_00472aa8
    MOV EAX,dword ptr [ESP + 0xc]       ; 00472c36
        ;   Label: LAB_00472c36
    PUSH EAX                            ; 00472c3a
    PUSH EDX                            ; 00472c3b
    CALL FUN_00401530                   ; 00472c3c
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 00472c41
    INC EBP                             ; 00472c44
    JMP 0x00472a0f                      ; 00472c45
        ;   XREF to: 00472a0f (UNCONDITIONAL_JUMP)  ; LAB_00472a0f
    JBE 0x004729c4                      ; 00472c4a
        ;   XREF to: 004729c4 (CONDITIONAL_JUMP)  ; LAB_004729c4
        ;   Label: LAB_00472c4a
    CMP EAX,0x2                         ; 00472c50
    JZ 0x0047275c                       ; 00472c53
        ;   XREF to: 0047275c (CONDITIONAL_JUMP)  ; LAB_0047275c
    MOV EDI,0x57ea49                    ; 00472c59 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00472c59
    MOV EBP,0x7ba                       ; 00472c5e
    PUSH 0x57ea5f                       ; 00472c63 | = "CEditorTools::setMousePointerType - i..."
    MOV dword ptr [0x01cc4800],EDI      ; 00472c68 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 00472c6e | DAT_01cc4804
    CALL FUN_004c8440                   ; 00472c74
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00472c79
    ADD ESP,0x10                        ; 00472c7c
        ;   Label: LAB_00472c7c
    POP EBP                             ; 00472c7f
    POP EDI                             ; 00472c80
    POP ESI                             ; 00472c81
    POP EBX                             ; 00472c82
    RET                                 ; 00472c83

