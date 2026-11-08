; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005bd584(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
; undefined1       Stack[-0x17]:1  local_17
;
; XREF[1]:
;   FUN_005bd180 at 005bd3a6
;
; Referenced Globals:
;   undefined4 DAT_026807f0
;
; Called Functions:
;   FUN_005bd160
;   FUN_005c33f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bd584
        ;   Label: FUN_005bd584
    PUSH ESI                            ; 005bd585
    PUSH EDI                            ; 005bd586
    PUSH ES                             ; 005bd587
    PUSH EBP                            ; 005bd588
    SUB ESP,0x8                         ; 005bd589
    MOV ESI,dword ptr [ESP + 0x20]      ; 005bd58c
    MOV EAX,dword ptr [ESP + 0x24]      ; 005bd590
    MOV DL,byte ptr [ESI + 0x10]        ; 005bd594
    TEST DL,0x1                         ; 005bd597
    JZ 0x005bd5d0                       ; 005bd59a
        ;   XREF to: 005bd5d0 (CONDITIONAL_JUMP)  ; LAB_005bd5d0
    TEST DL,0x4                         ; 005bd59c
    JZ 0x005bd5ad                       ; 005bd59f
        ;   XREF to: 005bd5ad (CONDITIONAL_JUMP)  ; LAB_005bd5ad
    MOV ECX,dword ptr [EAX]             ; 005bd5a1
    ADD ECX,0x8                         ; 005bd5a3
    MOV dword ptr [EAX],ECX             ; 005bd5a6
    LES EBX,[ECX + -0x8]                ; 005bd5a8
    JMP 0x005bd5d0                      ; 005bd5ab
        ;   XREF to: 005bd5d0 (UNCONDITIONAL_JUMP)  ; LAB_005bd5d0
    TEST DL,0x8                         ; 005bd5ad
        ;   Label: LAB_005bd5ad
    JZ 0x005bd5c2                       ; 005bd5b0
        ;   XREF to: 005bd5c2 (CONDITIONAL_JUMP)  ; LAB_005bd5c2
    MOV EBX,dword ptr [EAX]             ; 005bd5b2
    ADD EBX,0x4                         ; 005bd5b4
    MOV dword ptr [EAX],EBX             ; 005bd5b7
    MOV AX,DS                           ; 005bd5b9
    MOV ES,AX                           ; 005bd5bb
    MOV EBX,dword ptr [EBX + -0x4]      ; 005bd5bd
    JMP 0x005bd5d0                      ; 005bd5c0
        ;   XREF to: 005bd5d0 (UNCONDITIONAL_JUMP)  ; LAB_005bd5d0
    MOV EDX,dword ptr [EAX]             ; 005bd5c2
        ;   Label: LAB_005bd5c2
    ADD EDX,0x4                         ; 005bd5c4
    MOV dword ptr [EAX],EDX             ; 005bd5c7
    MOV AX,DS                           ; 005bd5c9
    MOV ES,AX                           ; 005bd5cb
    MOV EBX,dword ptr [EDX + -0x4]      ; 005bd5cd
    MOV EDI,dword ptr [ESI + 0xc]       ; 005bd5d0
        ;   Label: LAB_005bd5d0
    XOR EBP,EBP                         ; 005bd5d3
    CMP EDI,-0x1                        ; 005bd5d5
    JNZ 0x005bd5df                      ; 005bd5d8
        ;   XREF to: 005bd5df (CONDITIONAL_JUMP)  ; LAB_005bd5df
    MOV EDI,0x1                         ; 005bd5da
    TEST EDI,EDI                        ; 005bd5df
        ;   Label: LAB_005bd5df
    JLE 0x005bd66e                      ; 005bd5e1
        ;   XREF to: 005bd66e (CONDITIONAL_JUMP)  ; LAB_005bd66e
    PUSH ESI                            ; 005bd5e7
    CALL FUN_005bd160                   ; 005bd5e8
        ;   XREF to: 005bd160 (UNCONDITIONAL_CALL)  ; undefined FUN_005bd160()
    MOV CL,byte ptr [ESI + 0x10]        ; 005bd5ed
    ADD ESP,0x4                         ; 005bd5f0
    TEST CL,0x2                         ; 005bd5f3
    JNZ 0x005bd66e                      ; 005bd5f6
        ;   XREF to: 005bd66e (CONDITIONAL_JUMP)  ; LAB_005bd66e
    INC EBP                             ; 005bd5fc
    DEC EDI                             ; 005bd5fd
    TEST CL,0x1                         ; 005bd5fe
    JZ 0x005bd5df                       ; 005bd601
        ;   XREF to: 005bd5df (CONDITIONAL_JUMP)  ; LAB_005bd5df
    TEST CL,0x20                        ; 005bd603
    JZ 0x005bd664                       ; 005bd606
        ;   XREF to: 005bd664 (CONDITIONAL_JUMP)  ; LAB_005bd664
    MOV EDX,dword ptr [0x026807f0]      ; 005bd608 | DAT_026807f0
    MOV byte ptr [ESP + 0x4],AL         ; 005bd60e
    TEST EDX,EDX                        ; 005bd612
    JZ 0x005bd637                       ; 005bd614
        ;   XREF to: 005bd637 (CONDITIONAL_JUMP)  ; LAB_005bd637
    AND EAX,0xff                        ; 005bd616
    MOV AL,byte ptr [EAX + 0x2680801]   ; 005bd61b
    AND AL,0x1                          ; 005bd621
    AND EAX,0xff                        ; 005bd623
    JZ 0x005bd637                       ; 005bd628
        ;   XREF to: 005bd637 (CONDITIONAL_JUMP)  ; LAB_005bd637
    PUSH ESI                            ; 005bd62a
    CALL FUN_005bd160                   ; 005bd62b
        ;   XREF to: 005bd160 (UNCONDITIONAL_CALL)  ; undefined FUN_005bd160()
    ADD ESP,0x4                         ; 005bd630
    MOV byte ptr [ESP + 0x5],AL         ; 005bd633
    PUSH 0x2                            ; 005bd637
        ;   Label: LAB_005bd637
    LEA EAX,[ESP + 0x8]                 ; 005bd639
    PUSH EAX                            ; 005bd63d
    LEA EAX,[ESP + 0x8]                 ; 005bd63e
    PUSH EAX                            ; 005bd642
    CALL FUN_005c33f0                   ; 005bd643
        ;   XREF to: 005c33f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c33f0()
    ADD ESP,0xc                         ; 005bd648
    CMP EAX,-0x1                        ; 005bd64b
    JNZ 0x005bd654                      ; 005bd64e
        ;   XREF to: 005bd654 (CONDITIONAL_JUMP)  ; LAB_005bd654
    XOR EAX,EAX                         ; 005bd650
    JMP 0x005bd670                      ; 005bd652
        ;   XREF to: 005bd670 (UNCONDITIONAL_JUMP)  ; LAB_005bd670
    ADD EBX,0x2                         ; 005bd654
        ;   Label: LAB_005bd654
    MOV EAX,dword ptr [ESP]             ; 005bd657
    MOV word ptr ES:[EBX + -0x2],AX     ; 005bd65a
    JMP 0x005bd5df                      ; 005bd65f
        ;   XREF to: 005bd5df (UNCONDITIONAL_JUMP)  ; LAB_005bd5df
    INC EBX                             ; 005bd664
        ;   Label: LAB_005bd664
    MOV byte ptr ES:[EBX + -0x1],AL     ; 005bd665
    JMP 0x005bd5df                      ; 005bd669
        ;   XREF to: 005bd5df (UNCONDITIONAL_JUMP)  ; LAB_005bd5df
    MOV EAX,EBP                         ; 005bd66e
        ;   Label: LAB_005bd66e
    ADD ESP,0x8                         ; 005bd670
        ;   Label: LAB_005bd670
    POP EBP                             ; 005bd673
    POP ES                              ; 005bd674
    POP EDI                             ; 005bd675
    POP ESI                             ; 005bd676
    POP EBX                             ; 005bd677
    RET                                 ; 005bd678

