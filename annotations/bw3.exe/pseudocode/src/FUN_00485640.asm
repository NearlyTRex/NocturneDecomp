; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00485640(int param_1)
;
; Local Variables:
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
;   FUN_004843d0 at 004845e0
;
; Referenced Globals:
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c5bb54
;   undefined4 DAT_01c5bb58
;   undefined4 DAT_01c5bb78
;   undefined4 DAT_01c5bb7c
;   undefined4 DAT_01c6af98
;   undefined4 DAT_01c6af99
;   undefined4 DAT_01c6af9a
;   undefined4 DAT_01c6b5c0
;
; Called Functions:
;   FUN_00403250
;   FUN_004850a0
;   FUN_004852f0
;   FUN_004859e0
;   FUN_004f3520
;   FUN_004f37e0
;   FUN_004f3a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485640
        ;   Label: FUN_00485640
    PUSH ESI                            ; 00485641
    PUSH EDI                            ; 00485642
    PUSH EBP                            ; 00485643
    MOV EBP,ESP                         ; 00485644
    SUB ESP,0x24                        ; 00485646
    MOV EBX,dword ptr [EBP + 0x14]      ; 00485649
    PUSH EBX                            ; 0048564c
    CALL FUN_004859e0                   ; 0048564d
        ;   XREF to: 004859e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004859e0()
    MOV EDI,dword ptr [0x01c5bb54]      ; 00485652 | DAT_01c5bb54
    ADD ESP,0x4                         ; 00485658
    MOV ESI,dword ptr [EBX + 0x20]      ; 0048565b
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0048565e
    MOV EDX,dword ptr [EBX + 0x18]      ; 00485661
    MOV EAX,dword ptr [EBX + 0x14]      ; 00485664
    SUB ESI,0x2                         ; 00485667
    SUB ECX,0x2                         ; 0048566a
    INC EAX                             ; 0048566d
    INC EDX                             ; 0048566e
    MOV dword ptr [EBP + -0x10],EAX     ; 0048566f
    MOV dword ptr [EBP + -0xc],EAX      ; 00485672
    MOV dword ptr [EBP + -0x24],EDX     ; 00485675
    MOV dword ptr [EBP + -0x20],ECX     ; 00485678
    MOV dword ptr [EBP + -0x1c],ESI     ; 0048567b
    MOV EAX,[0x01c5bb58]                ; 0048567e | DAT_01c5bb58
    CMP dword ptr [0x01c5baec],0x0      ; 00485683 | DAT_01c5baec
    JZ 0x004858ad                       ; 0048568a
        ;   XREF to: 004858ad (CONDITIONAL_JUMP)  ; LAB_004858ad
    CMP dword ptr [0x01c5baec],0x0      ; 00485690 | DAT_01c5baec
    JZ 0x00485898                       ; 00485697
        ;   XREF to: 00485898 (CONDITIONAL_JUMP)  ; LAB_00485898
    AND EAX,0xff                        ; 0048569d
    LEA ESI,[EAX*0x4 + 0x0]             ; 004856a2
    SUB ESI,EAX                         ; 004856a9
    XOR EAX,EAX                         ; 004856ab
    MOV AL,byte ptr [ESI + 0x1c6af99]   ; 004856ad | DAT_01c6af99
    MOV EDX,EAX                         ; 004856b3
    XOR EAX,EAX                         ; 004856b5
    MOV AL,byte ptr [ESI + 0x1c6af98]   ; 004856b7 | DAT_01c6af98
    SHL EDX,0x8                         ; 004856bd
    SHL EAX,0x10                        ; 004856c0
    OR EAX,EDX                          ; 004856c3
    XOR EDX,EDX                         ; 004856c5
    MOV DL,byte ptr [ESI + 0x1c6af9a]   ; 004856c7 | DAT_01c6af9a
    OR EAX,EDX                          ; 004856cd
    PUSH EAX                            ; 004856cf
    CALL FUN_004f3520                   ; 004856d0
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3520()
    ADD ESP,0x4                         ; 004856d5
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004856d8
        ;   Label: LAB_004856d8
    INC EAX                             ; 004856db
    PUSH EAX                            ; 004856dc
    MOV EAX,dword ptr [EBP + -0x20]     ; 004856dd
    INC EAX                             ; 004856e0
    PUSH EAX                            ; 004856e1
    MOV EAX,dword ptr [EBP + -0x24]     ; 004856e2
    DEC EAX                             ; 004856e5
    PUSH EAX                            ; 004856e6
    MOV EAX,dword ptr [EBP + -0xc]      ; 004856e7
    DEC EAX                             ; 004856ea
    PUSH EAX                            ; 004856eb
    CALL FUN_004f3a60                   ; 004856ec
        ;   XREF to: 004f3a60 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3a60()
    MOV ESI,dword ptr [0x01c5baec]      ; 004856f1 | DAT_01c5baec
    ADD ESP,0x10                        ; 004856f7
    TEST ESI,ESI                        ; 004856fa
    JZ 0x004858a2                       ; 004856fc
        ;   XREF to: 004858a2 (CONDITIONAL_JUMP)  ; LAB_004858a2
    MOV EAX,EDI                         ; 00485702
    AND EAX,0xff                        ; 00485704
    LEA ESI,[EAX*0x4 + 0x0]             ; 00485709
    SUB ESI,EAX                         ; 00485710
    XOR EDX,EDX                         ; 00485712
    XOR EAX,EAX                         ; 00485714
    MOV DL,byte ptr [ESI + 0x1c6af98]   ; 00485716 | DAT_01c6af98
    MOV AL,byte ptr [ESI + 0x1c6af99]   ; 0048571c | DAT_01c6af99
    SHL EDX,0x10                        ; 00485722
    SHL EAX,0x8                         ; 00485725
    OR EDX,EAX                          ; 00485728
    XOR EAX,EAX                         ; 0048572a
    MOV AL,byte ptr [ESI + 0x1c6af9a]   ; 0048572c | DAT_01c6af9a
    OR EAX,EDX                          ; 00485732
    PUSH EAX                            ; 00485734
    CALL FUN_004f3520                   ; 00485735
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3520()
    ADD ESP,0x4                         ; 0048573a
    MOV EDI,dword ptr [EBP + -0x1c]     ; 0048573d
        ;   Label: LAB_0048573d
    PUSH EDI                            ; 00485740
    MOV EAX,dword ptr [EBP + -0x20]     ; 00485741
    PUSH EAX                            ; 00485744
    MOV EDX,dword ptr [EBP + -0x24]     ; 00485745
    PUSH EDX                            ; 00485748
    MOV ECX,dword ptr [EBP + -0xc]      ; 00485749
    PUSH ECX                            ; 0048574c
    CALL FUN_004f37e0                   ; 0048574d
        ;   XREF to: 004f37e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f37e0()
    ADD ESP,0x10                        ; 00485752
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00485755
        ;   Label: LAB_00485755
    DEC EAX                             ; 00485758
    MOV EDI,dword ptr [EBX + 0x18]      ; 00485759
    MOV dword ptr [EBP + -0x4],EAX      ; 0048575c
    MOV EAX,dword ptr [EBX + 0x20]      ; 0048575f
    MOV ESI,dword ptr [EBX + 0x14]      ; 00485762
    DEC EAX                             ; 00485765
    INC EDI                             ; 00485766
    MOV dword ptr [EBP + -0x8],EAX      ; 00485767
    MOV EAX,dword ptr [EBX + 0x10]      ; 0048576a
    INC ESI                             ; 0048576d
    TEST EAX,EAX                        ; 0048576e
    JZ 0x004858c3                       ; 00485770
        ;   XREF to: 004858c3 (CONDITIONAL_JUMP)  ; LAB_004858c3
    MOV EDX,dword ptr [EBX + 0x30]      ; 00485776
    MOV ECX,EDI                         ; 00485779
    MOV dword ptr [EBP + -0x18],EDX     ; 0048577b
    MOV EDX,dword ptr [EBP + -0x8]      ; 0048577e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00485781
    MOV dword ptr [EBP + -0x14],EDX     ; 00485784
        ;   Label: LAB_00485784
    CMP EBX,dword ptr [0x01c5bb78]      ; 00485787 | DAT_01c5bb78
    JNZ 0x004858d6                      ; 0048578d
        ;   XREF to: 004858d6 (CONDITIONAL_JUMP)  ; LAB_004858d6
    CMP dword ptr [0x01c5bb7c],0x0      ; 00485793 | DAT_01c5bb7c
    JNZ 0x004858d6                      ; 0048579a
        ;   XREF to: 004858d6 (CONDITIONAL_JUMP)  ; LAB_004858d6
    MOV EDX,0x1                         ; 004857a0
    PUSH EDX                            ; 004857a5
        ;   Label: LAB_004857a5
    MOV EDX,dword ptr [EBP + -0x14]     ; 004857a6
    PUSH EDX                            ; 004857a9
    MOV EDX,dword ptr [EBP + -0x18]     ; 004857aa
    PUSH EDX                            ; 004857ad
    PUSH ECX                            ; 004857ae
    PUSH EAX                            ; 004857af
    CALL FUN_004850a0                   ; 004857b0
        ;   XREF to: 004850a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004850a0()
    MOV ECX,dword ptr [EBX + 0x10]      ; 004857b5
    ADD ESP,0x14                        ; 004857b8
    TEST ECX,ECX                        ; 004857bb
    JZ 0x004858f6                       ; 004857bd
        ;   XREF to: 004858f6 (CONDITIONAL_JUMP)  ; LAB_004858f6
    CMP EBX,dword ptr [0x01c5bb78]      ; 004857c3 | DAT_01c5bb78
    JNZ 0x004858dd                      ; 004857c9
        ;   XREF to: 004858dd (CONDITIONAL_JUMP)  ; LAB_004858dd
    MOV EDX,dword ptr [0x01c5bb7c]      ; 004857cf | DAT_01c5bb7c
    CMP EDX,0x1                         ; 004857d5
    JNZ 0x004858dd                      ; 004857d8
        ;   XREF to: 004858dd (CONDITIONAL_JUMP)  ; LAB_004858dd
    MOV EAX,EDX                         ; 004857de
    PUSH EAX                            ; 004857e0
        ;   Label: LAB_004857e0
    MOV ECX,dword ptr [EBP + -0x8]      ; 004857e1
    PUSH ECX                            ; 004857e4
    MOV EAX,dword ptr [EBX + 0x24]      ; 004857e5
    PUSH EAX                            ; 004857e8
    PUSH EDI                            ; 004857e9
    PUSH ESI                            ; 004857ea
    CALL FUN_004850a0                   ; 004857eb
        ;   XREF to: 004850a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004850a0()
    ADD ESP,0x14                        ; 004857f0
    MOV EDX,dword ptr [0x01c5bb78]      ; 004857f3 | DAT_01c5bb78
    PUSH 0x2                            ; 004857f9
    CMP EBX,EDX                         ; 004857fb
    JNZ 0x004858e4                      ; 004857fd
        ;   XREF to: 004858e4 (CONDITIONAL_JUMP)  ; LAB_004858e4
    MOV ECX,dword ptr [0x01c5bb7c]      ; 00485803 | DAT_01c5bb7c
    CMP ECX,0x1                         ; 00485809
    JNZ 0x004858e4                      ; 0048580c
        ;   XREF to: 004858e4 (CONDITIONAL_JUMP)  ; LAB_004858e4
    MOV EAX,ECX                         ; 00485812
    PUSH EAX                            ; 00485814
        ;   Label: LAB_00485814
    MOV EAX,dword ptr [EBP + -0x8]      ; 00485815
    PUSH EAX                            ; 00485818
    MOV EDX,dword ptr [EBX + 0x24]      ; 00485819
    PUSH EDX                            ; 0048581c
    PUSH EDI                            ; 0048581d
    PUSH ESI                            ; 0048581e
    CALL FUN_004852f0                   ; 0048581f
        ;   XREF to: 004852f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004852f0()
    MOV ECX,dword ptr [0x01c5bb78]      ; 00485824 | DAT_01c5bb78
    ADD ESP,0x18                        ; 0048582a
    CMP EBX,ECX                         ; 0048582d
    JNZ 0x004858eb                      ; 0048582f
        ;   XREF to: 004858eb (CONDITIONAL_JUMP)  ; LAB_004858eb
    CMP dword ptr [0x01c5bb7c],0x2      ; 00485835 | DAT_01c5bb7c
    JNZ 0x004858eb                      ; 0048583c
        ;   XREF to: 004858eb (CONDITIONAL_JUMP)  ; LAB_004858eb
    MOV EAX,0x1                         ; 00485842
    PUSH EAX                            ; 00485847
        ;   Label: LAB_00485847
    MOV EAX,dword ptr [EBP + -0x8]      ; 00485848
    PUSH EAX                            ; 0048584b
    MOV EDX,dword ptr [EBP + -0x4]      ; 0048584c
    PUSH EDX                            ; 0048584f
    PUSH EDI                            ; 00485850
    MOV ECX,dword ptr [EBX + 0x28]      ; 00485851
    PUSH ECX                            ; 00485854
    CALL FUN_004850a0                   ; 00485855
        ;   XREF to: 004850a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004850a0()
    ADD ESP,0x14                        ; 0048585a
    MOV ESI,dword ptr [0x01c5bb78]      ; 0048585d | DAT_01c5bb78
    PUSH 0x3                            ; 00485863
    CMP EBX,ESI                         ; 00485865
    JNZ 0x004858f2                      ; 00485867
        ;   XREF to: 004858f2 (CONDITIONAL_JUMP)  ; LAB_004858f2
    CMP dword ptr [0x01c5bb7c],0x2      ; 0048586d | DAT_01c5bb7c
    JNZ 0x004858f2                      ; 00485874
        ;   XREF to: 004858f2 (CONDITIONAL_JUMP)  ; LAB_004858f2
    MOV EAX,0x1                         ; 00485876
    PUSH EAX                            ; 0048587b
        ;   Label: LAB_0048587b
    MOV EDX,dword ptr [EBP + -0x8]      ; 0048587c
    PUSH EDX                            ; 0048587f
    MOV ECX,dword ptr [EBP + -0x4]      ; 00485880
    PUSH ECX                            ; 00485883
    PUSH EDI                            ; 00485884
    MOV ESI,dword ptr [EBX + 0x28]      ; 00485885
    PUSH ESI                            ; 00485888
    CALL FUN_004852f0                   ; 00485889
        ;   XREF to: 004852f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004852f0()
    ADD ESP,0x18                        ; 0048588e
    MOV ESP,EBP                         ; 00485891
    POP EBP                             ; 00485893
    POP EDI                             ; 00485894
    POP ESI                             ; 00485895
    POP EBX                             ; 00485896
    RET                                 ; 00485897
    MOV [0x01c6b5c0],EAX                ; 00485898 | DAT_01c6b5c0
        ;   Label: LAB_00485898
    JMP 0x004856d8                      ; 0048589d
        ;   XREF to: 004856d8 (UNCONDITIONAL_JUMP)  ; LAB_004856d8
    MOV dword ptr [0x01c6b5c0],EDI      ; 004858a2 | DAT_01c6b5c0
        ;   Label: LAB_004858a2
    JMP 0x0048573d                      ; 004858a8
        ;   XREF to: 0048573d (UNCONDITIONAL_JUMP)  ; LAB_0048573d
    PUSH EAX                            ; 004858ad
        ;   Label: LAB_004858ad
    PUSH EDI                            ; 004858ae
    PUSH ESI                            ; 004858af
    PUSH ECX                            ; 004858b0
    PUSH EDX                            ; 004858b1
    MOV EDX,dword ptr [EBP + -0x10]     ; 004858b2
    PUSH EDX                            ; 004858b5
    CALL FUN_00403250                   ; 004858b6
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; undefined FUN_00403250()
    ADD ESP,0x18                        ; 004858bb
    JMP 0x00485755                      ; 004858be
        ;   XREF to: 00485755 (UNCONDITIONAL_JUMP)  ; LAB_00485755
    MOV EDX,dword ptr [EBP + -0x4]      ; 004858c3
        ;   Label: LAB_004858c3
    MOV EAX,ESI                         ; 004858c6
    MOV dword ptr [EBP + -0x18],EDX     ; 004858c8
    MOV EDX,dword ptr [EBX + 0x30]      ; 004858cb
    MOV ECX,dword ptr [EBX + 0x2c]      ; 004858ce
    JMP 0x00485784                      ; 004858d1
        ;   XREF to: 00485784 (UNCONDITIONAL_JUMP)  ; LAB_00485784
    XOR EDX,EDX                         ; 004858d6
        ;   Label: LAB_004858d6
    JMP 0x004857a5                      ; 004858d8
        ;   XREF to: 004857a5 (UNCONDITIONAL_JUMP)  ; LAB_004857a5
    XOR EAX,EAX                         ; 004858dd
        ;   Label: LAB_004858dd
    JMP 0x004857e0                      ; 004858df
        ;   XREF to: 004857e0 (UNCONDITIONAL_JUMP)  ; LAB_004857e0
    XOR EAX,EAX                         ; 004858e4
        ;   Label: LAB_004858e4
    JMP 0x00485814                      ; 004858e6
        ;   XREF to: 00485814 (UNCONDITIONAL_JUMP)  ; LAB_00485814
    XOR EAX,EAX                         ; 004858eb
        ;   Label: LAB_004858eb
    JMP 0x00485847                      ; 004858ed
        ;   XREF to: 00485847 (UNCONDITIONAL_JUMP)  ; LAB_00485847
    XOR EAX,EAX                         ; 004858f2
        ;   Label: LAB_004858f2
    JMP 0x0048587b                      ; 004858f4
        ;   XREF to: 0048587b (UNCONDITIONAL_JUMP)  ; LAB_0048587b
    CMP EBX,dword ptr [0x01c5bb78]      ; 004858f6 | DAT_01c5bb78
        ;   Label: LAB_004858f6
    JNZ 0x004859bf                      ; 004858fc
        ;   XREF to: 004859bf (CONDITIONAL_JUMP)  ; LAB_004859bf
    MOV EDX,dword ptr [0x01c5bb7c]      ; 00485902 | DAT_01c5bb7c
    CMP EDX,0x1                         ; 00485908
    JNZ 0x004859bf                      ; 0048590b
        ;   XREF to: 004859bf (CONDITIONAL_JUMP)  ; LAB_004859bf
    MOV EAX,EDX                         ; 00485911
    PUSH EAX                            ; 00485913
        ;   Label: LAB_00485913
    MOV ECX,dword ptr [EBX + 0x24]      ; 00485914
    PUSH ECX                            ; 00485917
    MOV EAX,dword ptr [EBP + -0x4]      ; 00485918
    PUSH EAX                            ; 0048591b
    PUSH EDI                            ; 0048591c
    PUSH ESI                            ; 0048591d
    CALL FUN_004850a0                   ; 0048591e
        ;   XREF to: 004850a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004850a0()
    ADD ESP,0x14                        ; 00485923
    MOV EDX,dword ptr [0x01c5bb78]      ; 00485926 | DAT_01c5bb78
    PUSH 0x0                            ; 0048592c
    CMP EBX,EDX                         ; 0048592e
    JNZ 0x004859c6                      ; 00485930
        ;   XREF to: 004859c6 (CONDITIONAL_JUMP)  ; LAB_004859c6
    MOV ECX,dword ptr [0x01c5bb7c]      ; 00485936 | DAT_01c5bb7c
    CMP ECX,0x1                         ; 0048593c
    JNZ 0x004859c6                      ; 0048593f
        ;   XREF to: 004859c6 (CONDITIONAL_JUMP)  ; LAB_004859c6
    MOV EAX,ECX                         ; 00485945
    PUSH EAX                            ; 00485947
        ;   Label: LAB_00485947
    MOV EAX,dword ptr [EBX + 0x24]      ; 00485948
    PUSH EAX                            ; 0048594b
    MOV EDX,dword ptr [EBP + -0x4]      ; 0048594c
    PUSH EDX                            ; 0048594f
    PUSH EDI                            ; 00485950
    PUSH ESI                            ; 00485951
    CALL FUN_004852f0                   ; 00485952
        ;   XREF to: 004852f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004852f0()
    MOV ECX,dword ptr [0x01c5bb78]      ; 00485957 | DAT_01c5bb78
    ADD ESP,0x18                        ; 0048595d
    CMP EBX,ECX                         ; 00485960
    JNZ 0x004859cd                      ; 00485962
        ;   XREF to: 004859cd (CONDITIONAL_JUMP)  ; LAB_004859cd
    CMP dword ptr [0x01c5bb7c],0x2      ; 00485964 | DAT_01c5bb7c
    JNZ 0x004859cd                      ; 0048596b
        ;   XREF to: 004859cd (CONDITIONAL_JUMP)  ; LAB_004859cd
    MOV EAX,0x1                         ; 0048596d
    PUSH EAX                            ; 00485972
        ;   Label: LAB_00485972
    MOV EAX,dword ptr [EBP + -0x8]      ; 00485973
    PUSH EAX                            ; 00485976
    MOV EDX,dword ptr [EBP + -0x4]      ; 00485977
    PUSH EDX                            ; 0048597a
    MOV ECX,dword ptr [EBX + 0x28]      ; 0048597b
    PUSH ECX                            ; 0048597e
    PUSH ESI                            ; 0048597f
    CALL FUN_004850a0                   ; 00485980
        ;   XREF to: 004850a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004850a0()
    ADD ESP,0x14                        ; 00485985
    MOV EDI,dword ptr [0x01c5bb78]      ; 00485988 | DAT_01c5bb78
    PUSH 0x1                            ; 0048598e
    CMP EBX,EDI                         ; 00485990
    JNZ 0x004859d1                      ; 00485992
        ;   XREF to: 004859d1 (CONDITIONAL_JUMP)  ; LAB_004859d1
    CMP dword ptr [0x01c5bb7c],0x2      ; 00485994 | DAT_01c5bb7c
    JNZ 0x004859d1                      ; 0048599b
        ;   XREF to: 004859d1 (CONDITIONAL_JUMP)  ; LAB_004859d1
    MOV EAX,0x1                         ; 0048599d
    PUSH EAX                            ; 004859a2
        ;   Label: LAB_004859a2
    MOV EDX,dword ptr [EBP + -0x8]      ; 004859a3
    PUSH EDX                            ; 004859a6
    MOV ECX,dword ptr [EBP + -0x4]      ; 004859a7
    PUSH ECX                            ; 004859aa
    MOV EDI,dword ptr [EBX + 0x28]      ; 004859ab
    PUSH EDI                            ; 004859ae
    PUSH ESI                            ; 004859af
    CALL FUN_004852f0                   ; 004859b0
        ;   XREF to: 004852f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004852f0()
    ADD ESP,0x18                        ; 004859b5
    MOV ESP,EBP                         ; 004859b8
    POP EBP                             ; 004859ba
    POP EDI                             ; 004859bb
    POP ESI                             ; 004859bc
    POP EBX                             ; 004859bd
    RET                                 ; 004859be
    XOR EAX,EAX                         ; 004859bf
        ;   Label: LAB_004859bf
    JMP 0x00485913                      ; 004859c1
        ;   XREF to: 00485913 (UNCONDITIONAL_JUMP)  ; LAB_00485913
    XOR EAX,EAX                         ; 004859c6
        ;   Label: LAB_004859c6
    JMP 0x00485947                      ; 004859c8
        ;   XREF to: 00485947 (UNCONDITIONAL_JUMP)  ; LAB_00485947
    XOR EAX,EAX                         ; 004859cd
        ;   Label: LAB_004859cd
    JMP 0x00485972                      ; 004859cf
        ;   XREF to: 00485972 (UNCONDITIONAL_JUMP)  ; LAB_00485972
    XOR EAX,EAX                         ; 004859d1
        ;   Label: LAB_004859d1
    JMP 0x004859a2                      ; 004859d3
        ;   XREF to: 004859a2 (UNCONDITIONAL_JUMP)  ; LAB_004859a2

