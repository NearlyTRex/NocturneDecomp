; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * FUN_00573720(char *param_1,undefined4 *param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[1]:
;   FUN_005738ac at 005738be
;
; Called Functions:
;   FUN_00568e80
;   FUN_005738c8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573720
        ;   Label: FUN_00573720
    PUSH ESI                            ; 00573721
    PUSH EDI                            ; 00573722
    PUSH EBP                            ; 00573723
    SUB ESP,0xc                         ; 00573724
    MOV EDI,dword ptr [ESP + 0x28]      ; 00573727
    MOV EDX,dword ptr [ESP + 0x24]      ; 0057372b
    TEST EDX,EDX                        ; 0057372f
    JZ 0x00573739                       ; 00573731
        ;   XREF to: 00573739 (CONDITIONAL_JUMP)  ; LAB_00573739
    MOV EAX,dword ptr [ESP + 0x20]      ; 00573733
    MOV dword ptr [EDX],EAX             ; 00573737
    MOV EBX,dword ptr [ESP + 0x20]      ; 00573739
        ;   Label: LAB_00573739
    MOV AL,byte ptr [EBX]               ; 0057373d
        ;   Label: LAB_0057373d
    INC AL                              ; 0057373f
    AND EAX,0xff                        ; 00573741
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 00573746
    JZ 0x00573752                       ; 0057374d
        ;   XREF to: 00573752 (CONDITIONAL_JUMP)  ; LAB_00573752
    INC EBX                             ; 0057374f
    JMP 0x0057373d                      ; 00573750
        ;   XREF to: 0057373d (UNCONDITIONAL_JUMP)  ; LAB_0057373d
    MOV AL,byte ptr [EBX]               ; 00573752
        ;   Label: LAB_00573752
    MOV byte ptr [ESP + 0x8],AL         ; 00573754
    CMP AL,0x2b                         ; 00573758
    JZ 0x00573760                       ; 0057375a
        ;   XREF to: 00573760 (CONDITIONAL_JUMP)  ; LAB_00573760
    CMP AL,0x2d                         ; 0057375c
    JNZ 0x00573761                      ; 0057375e
        ;   XREF to: 00573761 (CONDITIONAL_JUMP)  ; LAB_00573761
    INC EBX                             ; 00573760
        ;   Label: LAB_00573760
    TEST EDI,EDI                        ; 00573761
        ;   Label: LAB_00573761
    JNZ 0x0057378f                      ; 00573763
        ;   XREF to: 0057378f (CONDITIONAL_JUMP)  ; LAB_0057378f
    CMP byte ptr [EBX],0x30             ; 00573765
    JNZ 0x0057377c                      ; 00573768
        ;   XREF to: 0057377c (CONDITIONAL_JUMP)  ; LAB_0057377c
    MOV AL,byte ptr [EBX + 0x1]         ; 0057376a
    CMP AL,0x78                         ; 0057376d
    JZ 0x00573775                       ; 0057376f
        ;   XREF to: 00573775 (CONDITIONAL_JUMP)  ; LAB_00573775
    CMP AL,0x58                         ; 00573771
    JNZ 0x0057377c                      ; 00573773
        ;   XREF to: 0057377c (CONDITIONAL_JUMP)  ; LAB_0057377c
    MOV EDI,0x10                        ; 00573775
        ;   Label: LAB_00573775
    JMP 0x005737af                      ; 0057377a
        ;   XREF to: 005737af (UNCONDITIONAL_JUMP)  ; LAB_005737af
    CMP byte ptr [EBX],0x30             ; 0057377c
        ;   Label: LAB_0057377c
    JNZ 0x00573788                      ; 0057377f
        ;   XREF to: 00573788 (CONDITIONAL_JUMP)  ; LAB_00573788
    MOV EDI,0x8                         ; 00573781
    JMP 0x005737c4                      ; 00573786
        ;   XREF to: 005737c4 (UNCONDITIONAL_JUMP)  ; LAB_005737c4
    MOV EDI,0xa                         ; 00573788
        ;   Label: LAB_00573788
    JMP 0x005737c4                      ; 0057378d
        ;   XREF to: 005737c4 (UNCONDITIONAL_JUMP)  ; LAB_005737c4
    CMP EDI,0x2                         ; 0057378f
        ;   Label: LAB_0057378f
    JL 0x00573799                       ; 00573792
        ;   XREF to: 00573799 (CONDITIONAL_JUMP)  ; LAB_00573799
    CMP EDI,0x24                        ; 00573794
    JLE 0x005737aa                      ; 00573797
        ;   XREF to: 005737aa (CONDITIONAL_JUMP)  ; LAB_005737aa
    PUSH 0xd                            ; 00573799
        ;   Label: LAB_00573799
    CALL FUN_00568e80                   ; 0057379b
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    ADD ESP,0x4                         ; 005737a0
    XOR EAX,EAX                         ; 005737a3
    JMP 0x00573886                      ; 005737a5
        ;   XREF to: 00573886 (UNCONDITIONAL_JUMP)  ; LAB_00573886
    CMP EDI,0x10                        ; 005737aa
        ;   Label: LAB_005737aa
    JNZ 0x005737c4                      ; 005737ad
        ;   XREF to: 005737c4 (CONDITIONAL_JUMP)  ; LAB_005737c4
    CMP byte ptr [EBX],0x30             ; 005737af
        ;   Label: LAB_005737af
    JNZ 0x005737c4                      ; 005737b2
        ;   XREF to: 005737c4 (CONDITIONAL_JUMP)  ; LAB_005737c4
    MOV CL,byte ptr [EBX + 0x1]         ; 005737b4
    CMP CL,0x78                         ; 005737b7
    JZ 0x005737c1                       ; 005737ba
        ;   XREF to: 005737c1 (CONDITIONAL_JUMP)  ; LAB_005737c1
    CMP CL,0x58                         ; 005737bc
    JNZ 0x005737c4                      ; 005737bf
        ;   XREF to: 005737c4 (CONDITIONAL_JUMP)  ; LAB_005737c4
    ADD EBX,0x2                         ; 005737c1
        ;   Label: LAB_005737c1
    MOV dword ptr [ESP],EBX             ; 005737c4
        ;   Label: LAB_005737c4
    LEA EBP,[EDI*0x4 + 0x0]             ; 005737c7
    XOR AL,AL                           ; 005737ce
    XOR ESI,ESI                         ; 005737d0
    MOV byte ptr [ESP + 0x4],AL         ; 005737d2
    XOR EAX,EAX                         ; 005737d6
        ;   Label: LAB_005737d6
    MOV AL,byte ptr [EBX]               ; 005737d8
    PUSH EAX                            ; 005737da
    CALL FUN_005738c8                   ; 005737db
        ;   XREF to: 005738c8 (UNCONDITIONAL_CALL)  ; undefined FUN_005738c8()
    ADD ESP,0x4                         ; 005737e0
    MOV EDX,EAX                         ; 005737e3
    CMP EAX,EDI                         ; 005737e5
    JGE 0x00573809                      ; 005737e7
        ;   XREF to: 00573809 (CONDITIONAL_JUMP)  ; LAB_00573809
    CMP ESI,dword ptr [EBP + 0x5c216c]  ; 005737e9
    JBE 0x005737f6                      ; 005737ef
        ;   XREF to: 005737f6 (CONDITIONAL_JUMP)  ; LAB_005737f6
    MOV byte ptr [ESP + 0x4],0x1        ; 005737f1
    MOV EAX,ESI                         ; 005737f6
        ;   Label: LAB_005737f6
    IMUL ESI,EDI                        ; 005737f8
    ADD ESI,EDX                         ; 005737fb
    CMP ESI,EAX                         ; 005737fd
    JNC 0x00573806                      ; 005737ff
        ;   XREF to: 00573806 (CONDITIONAL_JUMP)  ; LAB_00573806
    MOV byte ptr [ESP + 0x4],0x1        ; 00573801
    INC EBX                             ; 00573806
        ;   Label: LAB_00573806
    JMP 0x005737d6                      ; 00573807
        ;   XREF to: 005737d6 (UNCONDITIONAL_JUMP)  ; LAB_005737d6
    CMP EBX,dword ptr [ESP]             ; 00573809
        ;   Label: LAB_00573809
    JNZ 0x00573812                      ; 0057380c
        ;   XREF to: 00573812 (CONDITIONAL_JUMP)  ; LAB_00573812
    MOV EBX,dword ptr [ESP + 0x20]      ; 0057380e
    MOV EBP,dword ptr [ESP + 0x24]      ; 00573812
        ;   Label: LAB_00573812
    TEST EBP,EBP                        ; 00573816
    JZ 0x0057381d                       ; 00573818
        ;   XREF to: 0057381d (CONDITIONAL_JUMP)  ; LAB_0057381d
    MOV dword ptr [EBP],EBX             ; 0057381a
    CMP dword ptr [ESP + 0x2c],0x1      ; 0057381d
        ;   Label: LAB_0057381d
    JNZ 0x00573835                      ; 00573822
        ;   XREF to: 00573835 (CONDITIONAL_JUMP)  ; LAB_00573835
    CMP ESI,0x80000000                  ; 00573824
    JC 0x00573835                       ; 0057382a
        ;   XREF to: 00573835 (CONDITIONAL_JUMP)  ; LAB_00573835
    JNZ 0x0057383c                      ; 0057382c
        ;   XREF to: 0057383c (CONDITIONAL_JUMP)  ; LAB_0057383c
    CMP byte ptr [ESP + 0x8],0x2d       ; 0057382e
    JNZ 0x0057383c                      ; 00573833
        ;   XREF to: 0057383c (CONDITIONAL_JUMP)  ; LAB_0057383c
    CMP byte ptr [ESP + 0x4],0x0        ; 00573835
        ;   Label: LAB_00573835
    JZ 0x0057387b                       ; 0057383a
        ;   XREF to: 0057387b (CONDITIONAL_JUMP)  ; LAB_0057387b
    PUSH 0xe                            ; 0057383c
        ;   Label: LAB_0057383c
    CALL FUN_00568e80                   ; 0057383e
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    ADD ESP,0x4                         ; 00573843
    CMP dword ptr [ESP + 0x2c],0x0      ; 00573846
    JNZ 0x0057385a                      ; 0057384b
        ;   XREF to: 0057385a (CONDITIONAL_JUMP)  ; LAB_0057385a
    MOV EAX,0xffffffff                  ; 0057384d
    ADD ESP,0xc                         ; 00573852
    POP EBP                             ; 00573855
    POP EDI                             ; 00573856
    POP ESI                             ; 00573857
    POP EBX                             ; 00573858
    RET                                 ; 00573859
    CMP byte ptr [ESP + 0x8],0x2d       ; 0057385a
        ;   Label: LAB_0057385a
    JNZ 0x0057386e                      ; 0057385f
        ;   XREF to: 0057386e (CONDITIONAL_JUMP)  ; LAB_0057386e
    MOV EAX,0x80000000                  ; 00573861
    ADD ESP,0xc                         ; 00573866
    POP EBP                             ; 00573869
    POP EDI                             ; 0057386a
    POP ESI                             ; 0057386b
    POP EBX                             ; 0057386c
    RET                                 ; 0057386d
    MOV EAX,0x7fffffff                  ; 0057386e
        ;   Label: LAB_0057386e
    ADD ESP,0xc                         ; 00573873
    POP EBP                             ; 00573876
    POP EDI                             ; 00573877
    POP ESI                             ; 00573878
    POP EBX                             ; 00573879
    RET                                 ; 0057387a
    CMP byte ptr [ESP + 0x8],0x2d       ; 0057387b
        ;   Label: LAB_0057387b
    JNZ 0x00573884                      ; 00573880
        ;   XREF to: 00573884 (CONDITIONAL_JUMP)  ; LAB_00573884
    NEG ESI                             ; 00573882
    MOV EAX,ESI                         ; 00573884
        ;   Label: LAB_00573884
    ADD ESP,0xc                         ; 00573886
        ;   Label: LAB_00573886
    POP EBP                             ; 00573889
    POP EDI                             ; 0057388a
    POP ESI                             ; 0057388b
    POP EBX                             ; 0057388c
    RET                                 ; 0057388d

