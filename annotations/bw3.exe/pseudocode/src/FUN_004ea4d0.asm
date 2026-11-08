; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ea4d0(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   thunk_FUN_004ea4d0 at 004e44d0
;
; Referenced Globals:
;   void* switchdataD_004ea4b4 = 004ea733
;   TerminatedCString s_fblurl_005c7928
;   TerminatedCString s_fblurm_005c792f
;   TerminatedCString s_fblurr_005c7936
;   TerminatedCString s_START_005c793d
;   TerminatedCString s_OPTIONS_005c7943
;   undefined4 DAT_005c794b
;   undefined4 DAT_005c7950
;   TerminatedCString s_f0100_005c7e35
;   TerminatedCString s_f0300_005c7e3b
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_00600284
;   void* PTR_s_f0100_00600478 = 005c7e35
;   undefined1* PTR_s_f0300_0060047c = 005c7e3b
;   ... and 26 more
;
; Called Functions:
;   FUN_004032b0
;   FUN_0040d460
;   FUN_0040da80
;   FUN_004b4430
;   FUN_004b4440
;   FUN_004bdfb0
;   FUN_004be8d0
;   FUN_004e4400
;   FUN_004e7860
;   FUN_004ea280
;   FUN_004f94a0
;   FUN_004f9580
;   FUN_004f9600
;   FUN_004f9670
;   FUN_00508960
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004ea4d0
        ;   Label: FUN_004ea4d0
    SUB ESP,0xc                         ; 004ea4d1
    CMP dword ptr [0x005fba1c],0x1e0    ; 004ea4d4 | DAT_005fba1c
    JL 0x004ea8fd                       ; 004ea4de
        ;   XREF to: 004ea8fd (CONDITIONAL_JUMP)  ; LAB_004ea8fd
    CMP dword ptr [0x02cf5fcc],0x0      ; 004ea4e4 | DAT_02cf5fcc
    JZ 0x004ea907                       ; 004ea4eb
        ;   XREF to: 004ea907 (CONDITIONAL_JUMP)  ; LAB_004ea907
    PUSH EDI                            ; 004ea4f1
        ;   Label: LAB_004ea4f1
    PUSH ESI                            ; 004ea4f2
    PUSH EBX                            ; 004ea4f3
    MOV EBX,0x1d72c10                   ; 004ea4f4
    XOR ESI,ESI                         ; 004ea4f9
    MOV EBP,0x40                        ; 004ea4fb
    PUSH EBP                            ; 004ea500
        ;   Label: LAB_004ea500
    PUSH EBP                            ; 004ea501
    MOV EDI,dword ptr [ESI + 0x600478]  ; 004ea502 | PTR_s_f0100_00600478 | PTR_s_f0300_0060047c
    PUSH EDI                            ; 004ea508 | = "f0100" | s_f0300_005c7e3b
    PUSH EBX                            ; 004ea509
    CALL FUN_0040d460                   ; 004ea50a
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004ea50f
    PUSH 0x1                            ; 004ea512
    PUSH 0x2                            ; 004ea514
    PUSH EBX                            ; 004ea516
    ADD ESI,0x4                         ; 004ea517
    CALL FUN_0040da80                   ; 004ea51a
        ;   XREF to: 0040da80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040da80()
    ADD ESP,0xc                         ; 004ea51f
    ADD EBX,0x14                        ; 004ea522
    CMP ESI,0x20                        ; 004ea525
    JNZ 0x004ea500                      ; 004ea528
        ;   XREF to: 004ea500 (CONDITIONAL_JUMP)  ; LAB_004ea500
    PUSH 0x46                           ; 004ea52a
    PUSH 0x68                           ; 004ea52c
    PUSH 0x5c7928                       ; 004ea52e | = "fblurl"
    PUSH 0x1d73798                      ; 004ea533
    CALL FUN_0040d460                   ; 004ea538
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004ea53d
    PUSH 0x46                           ; 004ea540
    PUSH ESI                            ; 004ea542
    PUSH 0x5c792f                       ; 004ea543 | = "fblurm"
    PUSH 0x1d737ac                      ; 004ea548
    CALL FUN_0040d460                   ; 004ea54d
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004ea552
    PUSH 0x46                           ; 004ea555
    PUSH 0x68                           ; 004ea557
    PUSH 0x5c7936                       ; 004ea559 | = "fblurr"
    PUSH 0x1d737c0                      ; 004ea55e
    CALL FUN_0040d460                   ; 004ea563
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004ea568
    XOR EBP,EBP                         ; 004ea56b
    CALL FUN_004032b0                   ; 004ea56d
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    CALL FUN_0056ac20                   ; 004ea572
        ;   XREF to: 0056ac20 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ac20()
    PUSH 0x1d72cb0                      ; 004ea577
    MOV dword ptr [ESP + 0x10],EBP      ; 004ea57c
    CALL FUN_004f94a0                   ; 004ea580
        ;   XREF to: 004f94a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f94a0()
    ADD ESP,0x4                         ; 004ea585
    MOV EDX,dword ptr [0x005fe9dc]      ; 004ea588 | DAT_005fe9dc
    MOV EAX,0x1                         ; 004ea58e
    PUSH EDX                            ; 004ea593
    MOV dword ptr [ESP + 0x18],EAX      ; 004ea594
    CALL FUN_004b4430                   ; 004ea598
        ;   XREF to: 004b4430 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4430()
    ADD ESP,0x4                         ; 004ea59d
    MOV ECX,dword ptr [0x005fe9dc]      ; 004ea5a0 | DAT_005fe9dc
        ;   Label: LAB_004ea5a0
    PUSH ECX                            ; 004ea5a6
    CALL FUN_004b4440                   ; 004ea5a7
        ;   XREF to: 004b4440 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4440()
    ADD ESP,0x4                         ; 004ea5ac
    PUSH 0x10000                        ; 004ea5af
    MOV EAX,[0x005fe9dc]                ; 004ea5b4 | DAT_005fe9dc
    PUSH 0xc350                         ; 004ea5b9
    MOV EAX,dword ptr [EAX + 0x314]     ; 004ea5be | DAT_01d21620
    PUSH 0xc350                         ; 004ea5c4
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ea5c9
    MOV EAX,[0x00603b28]                ; 004ea5cd | DAT_00603b28
    PUSH EAX                            ; 004ea5d2 | DAT_01ed78c8
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004ea5d3 | DAT_0203274c
    CALL FUN_0053b100                   ; 004ea5dd
        ;   XREF to: 0053b100 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b100()
    ADD ESP,0x10                        ; 004ea5e2
    MOV EAX,[0x00603b28]                ; 004ea5e5 | DAT_00603b28
    PUSH dword ptr [ESP + 0x10]         ; 004ea5ea
    PUSH 0x1d72cb0                      ; 004ea5ee
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 004ea5f3 | DAT_0203275c
    CALL FUN_004f9600                   ; 004ea5fd
        ;   XREF to: 004f9600 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9600()
    ADD ESP,0x8                         ; 004ea602
    PUSH 0x1d72cb0                      ; 004ea605
    CALL FUN_004f9670                   ; 004ea60a
        ;   XREF to: 004f9670 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9670()
    ADD ESP,0x4                         ; 004ea60f
    MOV EAX,[0x00603b28]                ; 004ea612 | DAT_00603b28
    PUSH 0x5c793d                       ; 004ea617 | = "START"
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004ea61c | DAT_0203274c
    CALL FUN_00508960                   ; 004ea626
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ea62b
    MOV EDI,0x1d75888                   ; 004ea62e
    MOV ESI,EAX                         ; 004ea633
    PUSH EDI                            ; 004ea635
    MOV AL,byte ptr [ESI]               ; 004ea636
        ;   Label: LAB_004ea636
    MOV byte ptr [EDI],AL               ; 004ea638 | DAT_01d75888 | DAT_01d7588a
    CMP AL,0x0                          ; 004ea63a
    JZ 0x004ea64e                       ; 004ea63c
        ;   XREF to: 004ea64e (CONDITIONAL_JUMP)  ; LAB_004ea64e
    MOV AL,byte ptr [ESI + 0x1]         ; 004ea63e
    ADD ESI,0x2                         ; 004ea641
    MOV byte ptr [EDI + 0x1],AL         ; 004ea644 | DAT_01d75889 | DAT_01d7588b
    ADD EDI,0x2                         ; 004ea647
    CMP AL,0x0                          ; 004ea64a
    JNZ 0x004ea636                      ; 004ea64c
        ;   XREF to: 004ea636 (CONDITIONAL_JUMP)  ; LAB_004ea636
    POP EDI                             ; 004ea64e
        ;   Label: LAB_004ea64e
    PUSH 0x5c7943                       ; 004ea64f | = "OPTIONS"
    CALL FUN_00508960                   ; 004ea654
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ea659
    MOV EDI,0x1d75988                   ; 004ea65c
    MOV ESI,EAX                         ; 004ea661
    PUSH EDI                            ; 004ea663
    MOV AL,byte ptr [ESI]               ; 004ea664
        ;   Label: LAB_004ea664
    MOV byte ptr [EDI],AL               ; 004ea666 | DAT_01d75988 | DAT_01d7598a
    CMP AL,0x0                          ; 004ea668
    JZ 0x004ea67c                       ; 004ea66a
        ;   XREF to: 004ea67c (CONDITIONAL_JUMP)  ; LAB_004ea67c
    MOV AL,byte ptr [ESI + 0x1]         ; 004ea66c
    ADD ESI,0x2                         ; 004ea66f
    MOV byte ptr [EDI + 0x1],AL         ; 004ea672 | DAT_01d75989 | DAT_01d7598b
    ADD EDI,0x2                         ; 004ea675
    CMP AL,0x0                          ; 004ea678
    JNZ 0x004ea664                      ; 004ea67a
        ;   XREF to: 004ea664 (CONDITIONAL_JUMP)  ; LAB_004ea664
    POP EDI                             ; 004ea67c
        ;   Label: LAB_004ea67c
    PUSH 0x5c794b                       ; 004ea67d | DAT_005c794b
    CALL FUN_00508960                   ; 004ea682
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ea687
    MOV EDI,0x1d75a88                   ; 004ea68a
    MOV ESI,EAX                         ; 004ea68f
    PUSH EDI                            ; 004ea691
    MOV AL,byte ptr [ESI]               ; 004ea692
        ;   Label: LAB_004ea692
    MOV byte ptr [EDI],AL               ; 004ea694 | DAT_01d75a88 | DAT_01d75a8a
    CMP AL,0x0                          ; 004ea696
    JZ 0x004ea6aa                       ; 004ea698
        ;   XREF to: 004ea6aa (CONDITIONAL_JUMP)  ; LAB_004ea6aa
    MOV AL,byte ptr [ESI + 0x1]         ; 004ea69a
    ADD ESI,0x2                         ; 004ea69d
    MOV byte ptr [EDI + 0x1],AL         ; 004ea6a0 | DAT_01d75a89 | DAT_01d75a8b
    ADD EDI,0x2                         ; 004ea6a3
    CMP AL,0x0                          ; 004ea6a6
    JNZ 0x004ea692                      ; 004ea6a8
        ;   XREF to: 004ea692 (CONDITIONAL_JUMP)  ; LAB_004ea692
    POP EDI                             ; 004ea6aa
        ;   Label: LAB_004ea6aa
    PUSH 0x5c7950                       ; 004ea6ab | DAT_005c7950
    MOV EDI,0x1d75b88                   ; 004ea6b0
    CALL FUN_00508960                   ; 004ea6b5
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ea6ba
    MOV ESI,EAX                         ; 004ea6bd
    MOV EDX,0x1d75888                   ; 004ea6bf
    PUSH EDI                            ; 004ea6c4
    MOV AL,byte ptr [ESI]               ; 004ea6c5
        ;   Label: LAB_004ea6c5
    MOV byte ptr [EDI],AL               ; 004ea6c7 | DAT_01d75b88 | DAT_01d75b8a
    CMP AL,0x0                          ; 004ea6c9
    JZ 0x004ea6dd                       ; 004ea6cb
        ;   XREF to: 004ea6dd (CONDITIONAL_JUMP)  ; LAB_004ea6dd
    MOV AL,byte ptr [ESI + 0x1]         ; 004ea6cd
    ADD ESI,0x2                         ; 004ea6d0
    MOV byte ptr [EDI + 0x1],AL         ; 004ea6d3 | DAT_01d75b89 | DAT_01d75b8b
    ADD EDI,0x2                         ; 004ea6d6
    CMP AL,0x0                          ; 004ea6d9
    JNZ 0x004ea6c5                      ; 004ea6db
        ;   XREF to: 004ea6c5 (CONDITIONAL_JUMP)  ; LAB_004ea6c5
    POP EDI                             ; 004ea6dd
        ;   Label: LAB_004ea6dd
    XOR EAX,EAX                         ; 004ea6de
    MOV dword ptr [EAX + 0x1d75c88],EDX ; 004ea6e0 | DAT_01d75888 | DAT_01d75988
        ;   Label: LAB_004ea6e0
    ADD EAX,0x4                         ; 004ea6e6
    ADD EDX,0x100                       ; 004ea6e9
    CMP EAX,0x10                        ; 004ea6ef
    JNZ 0x004ea6e0                      ; 004ea6f2
        ;   XREF to: 004ea6e0 (CONDITIONAL_JUMP)  ; LAB_004ea6e0
    PUSH 0x0                            ; 004ea6f4
    PUSH 0xc8                           ; 004ea6f6
    LEA EAX,[ESP + 0x14]                ; 004ea6fb
    PUSH EAX                            ; 004ea6ff
    PUSH 0x4                            ; 004ea700
    PUSH 0x1d75c88                      ; 004ea702
    CALL FUN_004e7860                   ; 004ea707
        ;   XREF to: 004e7860 (UNCONDITIONAL_CALL)  ; undefined FUN_004e7860()
    ADD ESP,0x14                        ; 004ea70c
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ea70f
    MOV ESI,EAX                         ; 004ea713
    TEST EBX,EBX                        ; 004ea715
    JZ 0x004ea71e                       ; 004ea717
        ;   XREF to: 004ea71e (CONDITIONAL_JUMP)  ; LAB_004ea71e
    CALL FUN_00560d70                   ; 004ea719
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00560d70()
    CALL FUN_0057a8a0                   ; 004ea71e
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
        ;   Label: LAB_004ea71e
    CMP ESI,0x3                         ; 004ea723
    JA 0x004ea7b4                       ; 004ea726
        ;   XREF to: 004ea7b4 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [ESI*0x4 + 0x4ea4b4]  ; 004ea72c | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x1d72cb0                      ; 004ea733
        ;   Label: caseD_0
    CALL FUN_004f9580                   ; 004ea738
        ;   XREF to: 004f9580 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9580()
    ADD ESP,0x4                         ; 004ea73d
    MOV EDX,dword ptr [0x006045f8]      ; 004ea740 | DAT_006045f8
    PUSH EDX                            ; 004ea746
    CALL FUN_00560930                   ; 004ea747
        ;   XREF to: 00560930 (UNCONDITIONAL_CALL)  ; undefined FUN_00560930()
    ADD ESP,0x4                         ; 004ea74c
    MOV EAX,[0x00600284]                ; 004ea74f | DAT_00600284
    PUSH 0x2a                           ; 004ea754
    MOV EDX,dword ptr [EAX]             ; 004ea756 | DAT_01d70a78
    PUSH EAX                            ; 004ea758 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 004ea759
    ADD ESP,0x8                         ; 004ea75b
    TEST EAX,EAX                        ; 004ea75e
    JZ 0x004ea92b                       ; 004ea760
        ;   XREF to: 004ea92b (CONDITIONAL_JUMP)  ; LAB_004ea92b
    PUSH 0x1d                           ; 004ea766
    MOV EAX,[0x00600284]                ; 004ea768 | DAT_00600284
    PUSH EAX                            ; 004ea76d | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004ea76e | DAT_01d70a78
    CALL dword ptr [EDX]                ; 004ea770
    ADD ESP,0x8                         ; 004ea772
    TEST EAX,EAX                        ; 004ea775
    JZ 0x004ea92b                       ; 004ea777
        ;   XREF to: 004ea92b (CONDITIONAL_JUMP)  ; LAB_004ea92b
    PUSH 0x2                            ; 004ea77d
    MOV ESI,dword ptr [0x005fe9dc]      ; 004ea77f | DAT_005fe9dc
    PUSH ESI                            ; 004ea785
    CALL FUN_004be8d0                   ; 004ea786
        ;   XREF to: 004be8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004be8d0()
        ;   Label: LAB_004ea786
    ADD ESP,0x8                         ; 004ea78b
    CALL FUN_004032b0                   ; 004ea78e
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    CALL FUN_0056ac20                   ; 004ea793
        ;   XREF to: 0056ac20 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ac20()
    PUSH 0x1d72cb0                      ; 004ea798
    CALL FUN_004f94a0                   ; 004ea79d
        ;   XREF to: 004f94a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f94a0()
    ADD ESP,0x4                         ; 004ea7a2
    MOV EDI,dword ptr [0x006045f8]      ; 004ea7a5 | DAT_006045f8
    PUSH EDI                            ; 004ea7ab
    CALL FUN_005607d0                   ; 004ea7ac
        ;   XREF to: 005607d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005607d0()
        ;   Label: LAB_004ea7ac
    ADD ESP,0x4                         ; 004ea7b1
        ;   Label: LAB_004ea7b1
    PUSH 0x1                            ; 004ea7b4
        ;   Label: default
    MOV EAX,[0x00600284]                ; 004ea7b6 | DAT_00600284
    PUSH EAX                            ; 004ea7bb | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004ea7bc | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004ea7be
    ADD ESP,0x8                         ; 004ea7c1
    TEST EAX,EAX                        ; 004ea7c4
    JZ 0x004ea7cd                       ; 004ea7c6
        ;   XREF to: 004ea7cd (CONDITIONAL_JUMP)  ; LAB_004ea7cd
    MOV EBP,0x63                        ; 004ea7c8
    PUSH 0x1d                           ; 004ea7cd
        ;   Label: LAB_004ea7cd
    MOV EAX,[0x00600284]                ; 004ea7cf | DAT_00600284
    PUSH EAX                            ; 004ea7d4 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004ea7d5 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 004ea7d7
    ADD ESP,0x8                         ; 004ea7d9
    TEST EAX,EAX                        ; 004ea7dc
    JZ 0x004ea81a                       ; 004ea7de
        ;   XREF to: 004ea81a (CONDITIONAL_JUMP)  ; LAB_004ea81a
    PUSH 0x32                           ; 004ea7e0
    MOV EAX,[0x00600284]                ; 004ea7e2 | DAT_00600284
    PUSH EAX                            ; 004ea7e7 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004ea7e8 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004ea7ea
    ADD ESP,0x8                         ; 004ea7ed
    TEST EAX,EAX                        ; 004ea7f0
    JZ 0x004ea81a                       ; 004ea7f2
        ;   XREF to: 004ea81a (CONDITIONAL_JUMP)  ; LAB_004ea81a
    CALL FUN_00556750                   ; 004ea7f4
        ;   XREF to: 00556750 (UNCONDITIONAL_CALL)  ; undefined FUN_00556750()
    TEST EAX,EAX                        ; 004ea7f9
    SETZ AL                             ; 004ea7fb
    AND EAX,0xff                        ; 004ea7fe
    PUSH EAX                            ; 004ea803
    CALL FUN_00556760                   ; 004ea804
        ;   XREF to: 00556760 (UNCONDITIONAL_CALL)  ; undefined FUN_00556760()
    ADD ESP,0x4                         ; 004ea809
    MOV EAX,[0x006045f8]                ; 004ea80c | DAT_006045f8
    PUSH EAX                            ; 004ea811
    CALL FUN_005607d0                   ; 004ea812
        ;   XREF to: 005607d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005607d0()
    ADD ESP,0x4                         ; 004ea817
    PUSH 0x1d                           ; 004ea81a
        ;   Label: LAB_004ea81a
    MOV EAX,[0x00600284]                ; 004ea81c | DAT_00600284
    PUSH EAX                            ; 004ea821 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004ea822 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 004ea824
    ADD ESP,0x8                         ; 004ea826
    TEST EAX,EAX                        ; 004ea829
    JZ 0x004ea88c                       ; 004ea82b
        ;   XREF to: 004ea88c (CONDITIONAL_JUMP)  ; LAB_004ea88c
    PUSH 0x20                           ; 004ea82d
    MOV EAX,[0x00600284]                ; 004ea82f | DAT_00600284
    PUSH EAX                            ; 004ea834 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004ea835 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004ea837
    ADD ESP,0x8                         ; 004ea83a
    TEST EAX,EAX                        ; 004ea83d
    JZ 0x004ea9c0                       ; 004ea83f
        ;   XREF to: 004ea9c0 (CONDITIONAL_JUMP)  ; LAB_004ea9c0
    PUSH 0x1d72cb0                      ; 004ea845
        ;   Label: LAB_004ea845
    CALL FUN_004f9580                   ; 004ea84a
        ;   XREF to: 004f9580 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9580()
    ADD ESP,0x4                         ; 004ea84f
    MOV EDX,dword ptr [0x006045f8]      ; 004ea852 | DAT_006045f8
    PUSH EDX                            ; 004ea858
    CALL FUN_00560930                   ; 004ea859
        ;   XREF to: 00560930 (UNCONDITIONAL_CALL)  ; undefined FUN_00560930()
    ADD ESP,0x4                         ; 004ea85e
    CALL FUN_004e4400                   ; 004ea861
        ;   XREF to: 004e4400 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4400()
    CALL FUN_004032b0                   ; 004ea866
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    CALL FUN_0056ac20                   ; 004ea86b
        ;   XREF to: 0056ac20 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ac20()
    PUSH 0x1d72cb0                      ; 004ea870
    CALL FUN_004f94a0                   ; 004ea875
        ;   XREF to: 004f94a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f94a0()
    ADD ESP,0x4                         ; 004ea87a
    MOV ECX,dword ptr [0x006045f8]      ; 004ea87d | DAT_006045f8
    PUSH ECX                            ; 004ea883
    CALL FUN_005607d0                   ; 004ea884
        ;   XREF to: 005607d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005607d0()
    ADD ESP,0x4                         ; 004ea889
    PUSH 0x1d                           ; 004ea88c
        ;   Label: LAB_004ea88c
    MOV EAX,[0x00600284]                ; 004ea88e | DAT_00600284
    PUSH EAX                            ; 004ea893 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004ea894 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 004ea896
    ADD ESP,0x8                         ; 004ea898
    TEST EAX,EAX                        ; 004ea89b
    JZ 0x004ea8af                       ; 004ea89d
        ;   XREF to: 004ea8af (CONDITIONAL_JUMP)  ; LAB_004ea8af
    PUSH 0x21                           ; 004ea89f
    MOV EAX,[0x00600284]                ; 004ea8a1 | DAT_00600284
    PUSH EAX                            ; 004ea8a6 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004ea8a7 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004ea8a9
    ADD ESP,0x8                         ; 004ea8ac
    CMP dword ptr [ESP + 0x14],0x0      ; 004ea8af
        ;   Label: LAB_004ea8af
    JZ 0x004ea8d0                       ; 004ea8b4
        ;   XREF to: 004ea8d0 (CONDITIONAL_JUMP)  ; LAB_004ea8d0
    MOV EDI,dword ptr [0x006045f8]      ; 004ea8b6 | DAT_006045f8
    XOR ESI,ESI                         ; 004ea8bc
    PUSH EDI                            ; 004ea8be
    MOV dword ptr [ESP + 0x18],ESI      ; 004ea8bf
    CALL FUN_005607d0                   ; 004ea8c3
        ;   XREF to: 005607d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005607d0()
    ADD ESP,0x4                         ; 004ea8c8
    CALL FUN_004032b0                   ; 004ea8cb
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    TEST EBP,EBP                        ; 004ea8d0
        ;   Label: LAB_004ea8d0
    JZ 0x004ea5a0                       ; 004ea8d2
        ;   XREF to: 004ea5a0 (CONDITIONAL_JUMP)  ; LAB_004ea5a0
    MOV EAX,[0x006045f8]                ; 004ea8d8 | DAT_006045f8
    PUSH EAX                            ; 004ea8dd
    CALL FUN_00560930                   ; 004ea8de
        ;   XREF to: 00560930 (UNCONDITIONAL_CALL)  ; undefined FUN_00560930()
    ADD ESP,0x4                         ; 004ea8e3
    PUSH 0x1d72cb0                      ; 004ea8e6
    CALL FUN_004f9580                   ; 004ea8eb
        ;   XREF to: 004f9580 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9580()
    ADD ESP,0x4                         ; 004ea8f0
    MOV EAX,EBP                         ; 004ea8f3
    POP EBX                             ; 004ea8f5
    POP ESI                             ; 004ea8f6
    POP EDI                             ; 004ea8f7
    ADD ESP,0xc                         ; 004ea8f8
    POP EBP                             ; 004ea8fb
    RET                                 ; 004ea8fc
    MOV EAX,0x1                         ; 004ea8fd
        ;   Label: LAB_004ea8fd
    ADD ESP,0xc                         ; 004ea902
    POP EBP                             ; 004ea905
    RET                                 ; 004ea906
    MOV EAX,[0x005fe9dc]                ; 004ea907 | DAT_005fe9dc
        ;   Label: LAB_004ea907
    CMP dword ptr [EAX + 0x4],0x1e0     ; 004ea90c | DAT_01d21310
    JLE 0x004ea4f1                      ; 004ea913
        ;   XREF to: 004ea4f1 (CONDITIONAL_JUMP)  ; LAB_004ea4f1
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004ea919 | DAT_01d21310
    MOV dword ptr [EAX],0x280           ; 004ea920 | DAT_01d2130c
    JMP 0x004ea4f1                      ; 004ea926
        ;   XREF to: 004ea4f1 (UNCONDITIONAL_JUMP)  ; LAB_004ea4f1
    PUSH 0x1d                           ; 004ea92b
        ;   Label: LAB_004ea92b
    MOV EAX,[0x00600284]                ; 004ea92d | DAT_00600284
    PUSH EAX                            ; 004ea932 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004ea933 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 004ea935
    ADD ESP,0x8                         ; 004ea937
    TEST EAX,EAX                        ; 004ea93a
    JZ 0x004ea94c                       ; 004ea93c
        ;   XREF to: 004ea94c (CONDITIONAL_JUMP)  ; LAB_004ea94c
    PUSH 0x1                            ; 004ea93e
    MOV EBX,dword ptr [0x005fe9dc]      ; 004ea940 | DAT_005fe9dc
    PUSH EBX                            ; 004ea946
    JMP 0x004ea786                      ; 004ea947
        ;   XREF to: 004ea786 (UNCONDITIONAL_JUMP)  ; LAB_004ea786
    PUSH EAX                            ; 004ea94c
        ;   Label: LAB_004ea94c
    MOV ECX,dword ptr [0x005fe9dc]      ; 004ea94d | DAT_005fe9dc
    PUSH ECX                            ; 004ea953
    JMP 0x004ea786                      ; 004ea954
        ;   XREF to: 004ea786 (UNCONDITIONAL_JUMP)  ; LAB_004ea786
    PUSH 0x1d72cb0                      ; 004ea959
        ;   Label: caseD_2
    CALL FUN_004f9580                   ; 004ea95e
        ;   XREF to: 004f9580 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9580()
    ADD ESP,0x4                         ; 004ea963
    MOV ESI,dword ptr [0x006045f8]      ; 004ea966 | DAT_006045f8
    PUSH ESI                            ; 004ea96c
    CALL FUN_00560930                   ; 004ea96d
        ;   XREF to: 00560930 (UNCONDITIONAL_CALL)  ; undefined FUN_00560930()
    ADD ESP,0x4                         ; 004ea972
    PUSH 0x1                            ; 004ea975
    PUSH 0x0                            ; 004ea977
    MOV EDI,dword ptr [0x005fe9dc]      ; 004ea979 | DAT_005fe9dc
    PUSH EDI                            ; 004ea97f
    CALL FUN_004bdfb0                   ; 004ea980
        ;   XREF to: 004bdfb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bdfb0()
    ADD ESP,0xc                         ; 004ea985
    CALL FUN_004032b0                   ; 004ea988
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    CALL FUN_0056ac20                   ; 004ea98d
        ;   XREF to: 0056ac20 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ac20()
    PUSH 0x1d72cb0                      ; 004ea992
    CALL FUN_004f94a0                   ; 004ea997
        ;   XREF to: 004f94a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f94a0()
    ADD ESP,0x4                         ; 004ea99c
    MOV EAX,[0x006045f8]                ; 004ea99f | DAT_006045f8
    PUSH EAX                            ; 004ea9a4
    JMP 0x004ea7ac                      ; 004ea9a5
        ;   XREF to: 004ea7ac (UNCONDITIONAL_JUMP)  ; LAB_004ea7ac
    PUSH 0x0                            ; 004ea9aa
        ;   Label: caseD_1
    CALL FUN_004ea280                   ; 004ea9ac
        ;   XREF to: 004ea280 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea280()
    JMP 0x004ea7b1                      ; 004ea9b1
        ;   XREF to: 004ea7b1 (UNCONDITIONAL_JUMP)  ; LAB_004ea7b1
    MOV EBP,0x63                        ; 004ea9b6
        ;   Label: caseD_3
    JMP 0x004ea7b4                      ; 004ea9bb
        ;   XREF to: 004ea7b4 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x26                           ; 004ea9c0
        ;   Label: LAB_004ea9c0
    MOV EAX,[0x00600284]                ; 004ea9c2 | DAT_00600284
    PUSH EAX                            ; 004ea9c7 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004ea9c8 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004ea9ca
    ADD ESP,0x8                         ; 004ea9cd
    TEST EAX,EAX                        ; 004ea9d0
    JNZ 0x004ea845                      ; 004ea9d2
        ;   XREF to: 004ea845 (CONDITIONAL_JUMP)  ; LAB_004ea845
    JMP 0x004ea88c                      ; 004ea9d8
        ;   XREF to: 004ea88c (UNCONDITIONAL_JUMP)  ; LAB_004ea88c

