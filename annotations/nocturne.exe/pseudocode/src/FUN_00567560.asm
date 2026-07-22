; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00567560(int param_1,byte *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00566b20 at 00566b4e
;   crt_unknown.c_FUN_005632c8 at 0056332c
;
; Referenced Globals:
;   undefined4 DAT_005c168c
;
; Called Functions:
;   FUN_00567540
;   FUN_0056754c
;   FUN_0056782c
;   FUN_00567928
;   FUN_00567964
;   FUN_00567a5c
;   FUN_00567bc0
;   FUN_00567c74
;   FUN_00567d88
;   FUN_0056808c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567560
        ;   Label: FUN_00567560
    PUSH ESI                            ; 00567561
    PUSH EDI                            ; 00567562
    PUSH EBP                            ; 00567563
    SUB ESP,0x4                         ; 00567564
    MOV ESI,dword ptr [ESP + 0x18]      ; 00567567
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056756b
    MOV EAX,dword ptr [EAX]             ; 0056756f
    MOV dword ptr [ESP],EAX             ; 00567571
    MOV AH,byte ptr [ESI + 0x10]        ; 00567574
    XOR EBP,EBP                         ; 00567577
    AND AH,0xfd                         ; 00567579
    XOR EDI,EDI                         ; 0056757c
    MOV byte ptr [ESI + 0x10],AH        ; 0056757e
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00567581
        ;   Label: LAB_00567581
    LEA EDX,[EBX + 0x1]                 ; 00567585
    MOV dword ptr [ESP + 0x1c],EDX      ; 00567588
    MOV BL,byte ptr [EBX]               ; 0056758c
    AND EBX,0xff                        ; 0056758e
    JZ 0x00567810                       ; 00567594
        ;   XREF to: 00567810 (CONDITIONAL_JUMP)  ; LAB_00567810
    MOV AL,BL                           ; 0056759a
    INC AL                              ; 0056759c
    AND EAX,0xff                        ; 0056759e
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 005675a3 | DAT_005c168c
    JZ 0x005675bc                       ; 005675aa
        ;   XREF to: 005675bc (CONDITIONAL_JUMP)  ; LAB_005675bc
    PUSH ESI                            ; 005675ac
    CALL FUN_00567928                   ; 005675ad
        ;   XREF to: 00567928 (UNCONDITIONAL_CALL)  ; undefined FUN_00567928()
    ADD ESP,0x4                         ; 005675b2
    ADD EDI,EAX                         ; 005675b5
    JMP 0x005677d4                      ; 005675b7
        ;   XREF to: 005677d4 (UNCONDITIONAL_JUMP)  ; LAB_005677d4
    CMP EBX,0x25                        ; 005675bc
        ;   Label: LAB_005675bc
    JZ 0x005675eb                       ; 005675bf
        ;   XREF to: 005675eb (CONDITIONAL_JUMP)  ; LAB_005675eb
    PUSH ESI                            ; 005675c1
    CALL FUN_00567540                   ; 005675c2
        ;   XREF to: 00567540 (UNCONDITIONAL_CALL)  ; undefined FUN_00567540()
    ADD ESP,0x4                         ; 005675c7
    CMP EAX,EBX                         ; 005675ca
    JZ 0x005677d3                       ; 005675cc
        ;   XREF to: 005677d3 (CONDITIONAL_JUMP)  ; LAB_005677d3
    TEST byte ptr [ESI + 0x10],0x2      ; 005675d2
    JNZ 0x00567810                      ; 005675d6
        ;   XREF to: 00567810 (CONDITIONAL_JUMP)  ; LAB_00567810
    PUSH ESI                            ; 005675dc
    PUSH EAX                            ; 005675dd
    CALL FUN_0056754c                   ; 005675de
        ;   XREF to: 0056754c (UNCONDITIONAL_CALL)  ; undefined FUN_0056754c()
    ADD ESP,0x8                         ; 005675e3
    JMP 0x00567810                      ; 005675e6
        ;   XREF to: 00567810 (UNCONDITIONAL_JUMP)  ; LAB_00567810
    PUSH ESI                            ; 005675eb
        ;   Label: LAB_005675eb
    MOV EBX,dword ptr [ESP + 0x20]      ; 005675ec
    PUSH EBX                            ; 005675f0
    CALL FUN_0056782c                   ; 005675f1
        ;   XREF to: 0056782c (UNCONDITIONAL_CALL)  ; undefined FUN_0056782c()
    ADD ESP,0x8                         ; 005675f6
    XOR EBX,EBX                         ; 005675f9
    MOV dword ptr [ESP + 0x1c],EAX      ; 005675fb
    MOV BL,byte ptr [EAX]               ; 005675ff
    TEST EBX,EBX                        ; 00567601
    JZ 0x0056760a                       ; 00567603
        ;   XREF to: 0056760a (CONDITIONAL_JUMP)  ; LAB_0056760a
    INC EAX                             ; 00567605
    MOV dword ptr [ESP + 0x1c],EAX      ; 00567606
    CMP EBX,0x64                        ; 0056760a
        ;   Label: LAB_0056760a
    JC 0x0056767d                       ; 0056760d
        ;   XREF to: 0056767d (CONDITIONAL_JUMP)  ; LAB_0056767d
    JBE 0x005676e5                      ; 0056760f
        ;   XREF to: 005676e5 (CONDITIONAL_JUMP)  ; LAB_005676e5
    CMP EBX,0x6f                        ; 00567615
    JC 0x00567656                       ; 00567618
        ;   XREF to: 00567656 (CONDITIONAL_JUMP)  ; LAB_00567656
    JBE 0x00567713                      ; 0056761a
        ;   XREF to: 00567713 (CONDITIONAL_JUMP)  ; LAB_00567713
    CMP EBX,0x73                        ; 00567620
    JC 0x00567648                       ; 00567623
        ;   XREF to: 00567648 (CONDITIONAL_JUMP)  ; LAB_00567648
    JBE 0x0056775e                      ; 00567625
        ;   XREF to: 0056775e (CONDITIONAL_JUMP)  ; LAB_0056775e
    CMP EBX,0x75                        ; 0056762b
    JC 0x005677d4                       ; 0056762e
        ;   XREF to: 005677d4 (CONDITIONAL_JUMP)  ; LAB_005677d4
    JBE 0x00567727                      ; 00567634
        ;   XREF to: 00567727 (CONDITIONAL_JUMP)  ; LAB_00567727
    CMP EBX,0x78                        ; 0056763a
    JZ 0x0056773b                       ; 0056763d
        ;   XREF to: 0056773b (CONDITIONAL_JUMP)  ; LAB_0056773b
    JMP 0x005677d4                      ; 00567643
        ;   XREF to: 005677d4 (UNCONDITIONAL_JUMP)  ; LAB_005677d4
    CMP EBX,0x70                        ; 00567648
        ;   Label: LAB_00567648
    JZ 0x0056773b                       ; 0056764b
        ;   XREF to: 0056773b (CONDITIONAL_JUMP)  ; LAB_0056773b
    JMP 0x005677d4                      ; 00567651
        ;   XREF to: 005677d4 (UNCONDITIONAL_JUMP)  ; LAB_005677d4
    CMP EBX,0x69                        ; 00567656
        ;   Label: LAB_00567656
    JC 0x0056766f                       ; 00567659
        ;   XREF to: 0056766f (CONDITIONAL_JUMP)  ; LAB_0056766f
    JBE 0x005676fc                      ; 0056765b
        ;   XREF to: 005676fc (CONDITIONAL_JUMP)  ; LAB_005676fc
    CMP EBX,0x6e                        ; 00567661
    JZ 0x005677a3                       ; 00567664
        ;   XREF to: 005677a3 (CONDITIONAL_JUMP)  ; LAB_005677a3
    JMP 0x005677d4                      ; 0056766a
        ;   XREF to: 005677d4 (UNCONDITIONAL_JUMP)  ; LAB_005677d4
    CMP EBX,0x67                        ; 0056766f
        ;   Label: LAB_0056766f
    JBE 0x0056774f                      ; 00567672
        ;   XREF to: 0056774f (CONDITIONAL_JUMP)  ; LAB_0056774f
    JMP 0x005677d4                      ; 00567678
        ;   XREF to: 005677d4 (UNCONDITIONAL_JUMP)  ; LAB_005677d4
    CMP EBX,0x47                        ; 0056767d
        ;   Label: LAB_0056767d
    JC 0x005676be                       ; 00567680
        ;   XREF to: 005676be (CONDITIONAL_JUMP)  ; LAB_005676be
    JBE 0x0056774f                      ; 00567682
        ;   XREF to: 0056774f (CONDITIONAL_JUMP)  ; LAB_0056774f
    CMP EBX,0x58                        ; 00567688
    JC 0x005676b0                       ; 0056768b
        ;   XREF to: 005676b0 (CONDITIONAL_JUMP)  ; LAB_005676b0
    JBE 0x0056773b                      ; 0056768d
        ;   XREF to: 0056773b (CONDITIONAL_JUMP)  ; LAB_0056773b
    CMP EBX,0x5b                        ; 00567693
    JC 0x005677d4                       ; 00567696
        ;   XREF to: 005677d4 (CONDITIONAL_JUMP)  ; LAB_005677d4
    JBE 0x00567769                      ; 0056769c
        ;   XREF to: 00567769 (CONDITIONAL_JUMP)  ; LAB_00567769
    CMP EBX,0x63                        ; 005676a2
    JZ 0x00567782                       ; 005676a5
        ;   XREF to: 00567782 (CONDITIONAL_JUMP)  ; LAB_00567782
    JMP 0x005677d4                      ; 005676ab
        ;   XREF to: 005677d4 (UNCONDITIONAL_JUMP)  ; LAB_005677d4
    CMP EBX,0x53                        ; 005676b0
        ;   Label: LAB_005676b0
    JZ 0x0056775a                       ; 005676b3
        ;   XREF to: 0056775a (CONDITIONAL_JUMP)  ; LAB_0056775a
    JMP 0x005677d4                      ; 005676b9
        ;   XREF to: 005677d4 (UNCONDITIONAL_JUMP)  ; LAB_005677d4
    CMP EBX,0x43                        ; 005676be
        ;   Label: LAB_005676be
    JC 0x005676d7                       ; 005676c1
        ;   XREF to: 005676d7 (CONDITIONAL_JUMP)  ; LAB_005676d7
    JBE 0x0056777e                      ; 005676c3
        ;   XREF to: 0056777e (CONDITIONAL_JUMP)  ; LAB_0056777e
    CMP EBX,0x45                        ; 005676c9
    JZ 0x0056774f                       ; 005676cc
        ;   XREF to: 0056774f (CONDITIONAL_JUMP)  ; LAB_0056774f
    JMP 0x005677d4                      ; 005676d2
        ;   XREF to: 005677d4 (UNCONDITIONAL_JUMP)  ; LAB_005677d4
    CMP EBX,0x25                        ; 005676d7
        ;   Label: LAB_005676d7
    JZ 0x005677b4                       ; 005676da
        ;   XREF to: 005677b4 (CONDITIONAL_JUMP)  ; LAB_005677b4
    JMP 0x005677d4                      ; 005676e0
        ;   XREF to: 005677d4 (UNCONDITIONAL_JUMP)  ; LAB_005677d4
    PUSH 0x1                            ; 005676e5
        ;   Label: LAB_005676e5
    PUSH 0xa                            ; 005676e7
    LEA EAX,[ESP + 0x8]                 ; 005676e9
    PUSH EAX                            ; 005676ed
    PUSH ESI                            ; 005676ee
    CALL FUN_0056808c                   ; 005676ef
        ;   XREF to: 0056808c (UNCONDITIONAL_CALL)  ; undefined FUN_0056808c()
    ADD ESP,0x10                        ; 005676f4
    JMP 0x0056778e                      ; 005676f7
        ;   XREF to: 0056778e (UNCONDITIONAL_JUMP)  ; LAB_0056778e
    PUSH 0x1                            ; 005676fc
        ;   Label: LAB_005676fc
    PUSH 0x0                            ; 005676fe
    LEA EAX,[ESP + 0x8]                 ; 00567700
    PUSH EAX                            ; 00567704
    PUSH ESI                            ; 00567705
    CALL FUN_0056808c                   ; 00567706
        ;   XREF to: 0056808c (UNCONDITIONAL_CALL)  ; undefined FUN_0056808c()
    ADD ESP,0x10                        ; 0056770b
    JMP 0x0056778e                      ; 0056770e
        ;   XREF to: 0056778e (UNCONDITIONAL_JUMP)  ; LAB_0056778e
    PUSH 0x1                            ; 00567713
        ;   Label: LAB_00567713
    PUSH 0x8                            ; 00567715
    LEA EAX,[ESP + 0x8]                 ; 00567717
    PUSH EAX                            ; 0056771b
    PUSH ESI                            ; 0056771c
    CALL FUN_0056808c                   ; 0056771d
        ;   XREF to: 0056808c (UNCONDITIONAL_CALL)  ; undefined FUN_0056808c()
    ADD ESP,0x10                        ; 00567722
    JMP 0x0056778e                      ; 00567725
        ;   XREF to: 0056778e (UNCONDITIONAL_JUMP)  ; LAB_0056778e
    PUSH 0x0                            ; 00567727
        ;   Label: LAB_00567727
    PUSH 0xa                            ; 00567729
    LEA EAX,[ESP + 0x8]                 ; 0056772b
    PUSH EAX                            ; 0056772f
    PUSH ESI                            ; 00567730
    CALL FUN_0056808c                   ; 00567731
        ;   XREF to: 0056808c (UNCONDITIONAL_CALL)  ; undefined FUN_0056808c()
    ADD ESP,0x10                        ; 00567736
    JMP 0x0056778e                      ; 00567739
        ;   XREF to: 0056778e (UNCONDITIONAL_JUMP)  ; LAB_0056778e
    PUSH 0x1                            ; 0056773b
        ;   Label: LAB_0056773b
    PUSH 0x10                           ; 0056773d
    LEA EAX,[ESP + 0x8]                 ; 0056773f
    PUSH EAX                            ; 00567743
    PUSH ESI                            ; 00567744
    CALL FUN_0056808c                   ; 00567745
        ;   XREF to: 0056808c (UNCONDITIONAL_CALL)  ; undefined FUN_0056808c()
    ADD ESP,0x10                        ; 0056774a
    JMP 0x0056778e                      ; 0056774d
        ;   XREF to: 0056778e (UNCONDITIONAL_JUMP)  ; LAB_0056778e
    MOV EAX,ESP                         ; 0056774f
        ;   Label: LAB_0056774f
    PUSH EAX                            ; 00567751
    PUSH ESI                            ; 00567752
    CALL FUN_00567d88                   ; 00567753
        ;   XREF to: 00567d88 (UNCONDITIONAL_CALL)  ; undefined FUN_00567d88()
    JMP 0x0056778b                      ; 00567758
        ;   XREF to: 0056778b (UNCONDITIONAL_JUMP)  ; LAB_0056778b
    OR byte ptr [ESI + 0x10],0x20       ; 0056775a
        ;   Label: LAB_0056775a
    MOV EAX,ESP                         ; 0056775e
        ;   Label: LAB_0056775e
    PUSH EAX                            ; 00567760
    PUSH ESI                            ; 00567761
    CALL FUN_00567a5c                   ; 00567762
        ;   XREF to: 00567a5c (UNCONDITIONAL_CALL)  ; undefined FUN_00567a5c()
    JMP 0x0056778b                      ; 00567767
        ;   XREF to: 0056778b (UNCONDITIONAL_JUMP)  ; LAB_0056778b
    LEA EAX,[ESP + 0x1c]                ; 00567769
        ;   Label: LAB_00567769
    PUSH EAX                            ; 0056776d
    LEA EAX,[ESP + 0x4]                 ; 0056776e
    PUSH EAX                            ; 00567772
    PUSH ESI                            ; 00567773
    CALL FUN_00567c74                   ; 00567774
        ;   XREF to: 00567c74 (UNCONDITIONAL_CALL)  ; undefined FUN_00567c74()
    ADD ESP,0xc                         ; 00567779
    JMP 0x0056778e                      ; 0056777c
        ;   XREF to: 0056778e (UNCONDITIONAL_JUMP)  ; LAB_0056778e
    OR byte ptr [ESI + 0x10],0x20       ; 0056777e
        ;   Label: LAB_0056777e
    MOV EAX,ESP                         ; 00567782
        ;   Label: LAB_00567782
    PUSH EAX                            ; 00567784
    PUSH ESI                            ; 00567785
    CALL FUN_00567964                   ; 00567786
        ;   XREF to: 00567964 (UNCONDITIONAL_CALL)  ; undefined FUN_00567964()
    ADD ESP,0x8                         ; 0056778b
        ;   Label: LAB_0056778b
    MOV EBX,EAX                         ; 0056778e
        ;   Label: LAB_0056778e
    TEST EBX,EBX                        ; 00567790
    JLE 0x00567810                      ; 00567792
        ;   XREF to: 00567810 (CONDITIONAL_JUMP)  ; LAB_00567810
    ADD EDI,EBX                         ; 00567798
    TEST byte ptr [ESI + 0x10],0x1      ; 0056779a
    JZ 0x005677d4                       ; 0056779e
        ;   XREF to: 005677d4 (CONDITIONAL_JUMP)  ; LAB_005677d4
    INC EBP                             ; 005677a0
    JMP 0x005677d4                      ; 005677a1
        ;   XREF to: 005677d4 (UNCONDITIONAL_JUMP)  ; LAB_005677d4
    PUSH EDI                            ; 005677a3
        ;   Label: LAB_005677a3
    LEA EAX,[ESP + 0x4]                 ; 005677a4
    PUSH EAX                            ; 005677a8
    PUSH ESI                            ; 005677a9
    CALL FUN_00567bc0                   ; 005677aa
        ;   XREF to: 00567bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00567bc0()
    ADD ESP,0xc                         ; 005677af
    JMP 0x005677d4                      ; 005677b2
        ;   XREF to: 005677d4 (UNCONDITIONAL_JUMP)  ; LAB_005677d4
    PUSH ESI                            ; 005677b4
        ;   Label: LAB_005677b4
    CALL FUN_00567540                   ; 005677b5
        ;   XREF to: 00567540 (UNCONDITIONAL_CALL)  ; undefined FUN_00567540()
    ADD ESP,0x4                         ; 005677ba
    CMP EAX,EBX                         ; 005677bd
    JZ 0x005677d3                       ; 005677bf
        ;   XREF to: 005677d3 (CONDITIONAL_JUMP)  ; LAB_005677d3
    TEST byte ptr [ESI + 0x10],0x2      ; 005677c1
    JNZ 0x00567810                      ; 005677c5
        ;   XREF to: 00567810 (CONDITIONAL_JUMP)  ; LAB_00567810
    PUSH ESI                            ; 005677c7
    PUSH EAX                            ; 005677c8
    CALL FUN_0056754c                   ; 005677c9
        ;   XREF to: 0056754c (UNCONDITIONAL_CALL)  ; undefined FUN_0056754c()
    ADD ESP,0x8                         ; 005677ce
    JMP 0x00567810                      ; 005677d1
        ;   XREF to: 00567810 (UNCONDITIONAL_JUMP)  ; LAB_00567810
    INC EDI                             ; 005677d3
        ;   Label: LAB_005677d3
    TEST byte ptr [ESI + 0x10],0x2      ; 005677d4
        ;   Label: LAB_005677d4
    JZ 0x00567581                       ; 005677d8
        ;   XREF to: 00567581 (CONDITIONAL_JUMP)  ; LAB_00567581
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005677de
    CMP byte ptr [EAX],0x25             ; 005677e2
    JNZ 0x00567810                      ; 005677e5
        ;   XREF to: 00567810 (CONDITIONAL_JUMP)  ; LAB_00567810
    PUSH ESI                            ; 005677e7
    LEA ECX,[EAX + 0x1]                 ; 005677e8
    PUSH ECX                            ; 005677eb
    MOV dword ptr [ESP + 0x24],ECX      ; 005677ec
    CALL FUN_0056782c                   ; 005677f0
        ;   XREF to: 0056782c (UNCONDITIONAL_CALL)  ; undefined FUN_0056782c()
    ADD ESP,0x8                         ; 005677f5
    MOV dword ptr [ESP + 0x1c],EAX      ; 005677f8
    CMP byte ptr [EAX],0x6e             ; 005677fc
    JNZ 0x00567810                      ; 005677ff
        ;   XREF to: 00567810 (CONDITIONAL_JUMP)  ; LAB_00567810
    PUSH EDI                            ; 00567801
    LEA EAX,[ESP + 0x4]                 ; 00567802
    PUSH EAX                            ; 00567806
    PUSH ESI                            ; 00567807
    CALL FUN_00567bc0                   ; 00567808
        ;   XREF to: 00567bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00567bc0()
    ADD ESP,0xc                         ; 0056780d
    TEST EBP,EBP                        ; 00567810
        ;   Label: LAB_00567810
    JNZ 0x00567821                      ; 00567812
        ;   XREF to: 00567821 (CONDITIONAL_JUMP)  ; LAB_00567821
    TEST byte ptr [ESI + 0x10],0x2      ; 00567814
    JZ 0x00567821                       ; 00567818
        ;   XREF to: 00567821 (CONDITIONAL_JUMP)  ; LAB_00567821
    MOV EAX,0xffffffff                  ; 0056781a
    JMP 0x00567823                      ; 0056781f
        ;   XREF to: 00567823 (UNCONDITIONAL_JUMP)  ; LAB_00567823
    MOV EAX,EBP                         ; 00567821
        ;   Label: LAB_00567821
    ADD ESP,0x4                         ; 00567823
        ;   Label: LAB_00567823
    POP EBP                             ; 00567826
    POP EDI                             ; 00567827
    POP ESI                             ; 00567828
    POP EBX                             ; 00567829
    RET                                 ; 0056782a

