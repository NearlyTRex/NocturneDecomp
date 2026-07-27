; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_clipper_c_FUN_00434541(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004341ec = 004345e5
;   undefined1* PTR_caseD_1_004341f0 = 0043481c
;   undefined1* PTR_caseD_3_004341f8 = 0043460f
;   undefined1* switchdataD_004341fc = 00434695
;   undefined1* PTR_caseD_1_00434200 = 0043489b
;   undefined1* PTR_caseD_3_00434208 = 004346bf
;   string caseD_0
;   string caseD_0
;   undefined4 caseD_3
;   undefined4 caseD_1
;   string caseD_2
;   undefined4 caseD_1
;   string caseD_2
;   undefined4 DAT_00767b40
;   undefined4 DAT_00767b44
;   ... and 12 more
;
; *****************************************************************************

section .text

    XOR byte ptr [ECX + 0x30],BH        ; 00434541
        ;   Label: engine_clipper.c_FUN_00434541
    MOV ESI,EDX                         ; 00434547
    ADD EDI,0x76874c                    ; 00434549 | DAT_0076874c
    PUSH EDI                            ; 0043454f
    MOV EAX,ECX                         ; 00434550
    SHR ECX,0x2                         ; 00434552
    MOVSD.REP ES:EDI,ESI                ; 00434555 | DAT_0076874c | DAT_00768750
    MOV CL,AL                           ; 00434557
    AND CL,0x3                          ; 00434559
    MOVSB.REP ES:EDI,ESI                ; 0043455c | DAT_00768750 | DAT_00768750+1
    POP EDI                             ; 0043455e
    INC dword ptr [0x00767b44]          ; 0043455f | DAT_00767b44
    MOV EDX,dword ptr [ESP + 0xc]       ; 00434565
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x00767b40]      ; 00434569 | DAT_00767b40
    INC EDX                             ; 0043456f
    ADD EBX,0x30                        ; 00434570
    MOV dword ptr [ESP + 0xc],EDX       ; 00434573
    CMP EDX,ECX                         ; 00434577
    JL 0x004344f2                       ; 00434579
        ;   XREF to: 004344f2 (CONDITIONAL_JUMP)  ; LAB_004344f2
    MOV EBX,dword ptr [0x00767b44]      ; 0043457f | DAT_00767b44
        ;   Label: LAB_0043457f
    CMP EBX,0x3                         ; 00434585
    JL 0x00434714                       ; 00434588
        ;   XREF to: 00434714 (CONDITIONAL_JUMP)  ; LAB_00434714
    XOR ESI,ESI                         ; 0043458e
    MOV dword ptr [ESP + 0x10],ESI      ; 00434590
    TEST EBX,EBX                        ; 00434594
    JLE 0x00434629                      ; 00434596
        ;   XREF to: 00434629 (CONDITIONAL_JUMP)  ; LAB_00434629
    MOV EBX,0x76874c                    ; 0043459c | DAT_0076874c
    MOV EAX,dword ptr [ESP + 0x10]      ; 004345a1
        ;   Label: LAB_004345a1
    MOV EBP,dword ptr [0x00767b44]      ; 004345a5 | DAT_00767b44
    INC EAX                             ; 004345ab
    CMP EAX,EBP                         ; 004345ac
    JNZ 0x004345b2                      ; 004345ae
        ;   XREF to: 004345b2 (CONDITIONAL_JUMP)  ; LAB_004345b2
    XOR EAX,EBP                         ; 004345b0
    IMUL EAX,EAX,0x30                   ; 004345b2
        ;   Label: LAB_004345b2
    MOV EBP,0x76874c                    ; 004345b5 | DAT_0076874c
    MOV EDX,EBX                         ; 004345ba
    MOV ECX,dword ptr [EBX + 0x4]       ; 004345bc | DAT_00768750 | DAT_00768780
    MOV ESI,dword ptr [EBX + 0x8]       ; 004345bf | DAT_00768754 | DAT_00768784
    ADD EBP,EAX                         ; 004345c2
    XOR EAX,EAX                         ; 004345c4
    CMP ECX,ESI                         ; 004345c6
    JL 0x004345cf                       ; 004345c8
        ;   XREF to: 004345cf (CONDITIONAL_JUMP)  ; LAB_004345cf
    MOV EAX,0x1                         ; 004345ca
    MOV EDI,dword ptr [EBP + 0x8]       ; 004345cf | DAT_00768754
        ;   Label: LAB_004345cf
    CMP EDI,dword ptr [EBP + 0x4]       ; 004345d2 | DAT_00768750
    JG 0x004345d9                       ; 004345d5
        ;   XREF to: 004345d9 (CONDITIONAL_JUMP)  ; LAB_004345d9
    OR AL,0x2                           ; 004345d7
    CMP EAX,0x3                         ; 004345d9
        ;   Label: LAB_004345d9
    JA 0x0043460f                       ; 004345dc
        ;   XREF to: 0043460f (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4341ec]  ; 004345de | = "k=H{v" | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EDX,dword ptr [ESP + 0x10]      ; 0043460f
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x00767b44]      ; 00434613 | DAT_00767b44
    INC EDX                             ; 00434619
    ADD EBX,0x30                        ; 0043461a
    MOV dword ptr [ESP + 0x10],EDX      ; 0043461d
    CMP EDX,ECX                         ; 00434621
    JL 0x004345a1                       ; 00434623
        ;   XREF to: 004345a1 (CONDITIONAL_JUMP)  ; LAB_004345a1
    MOV EBX,dword ptr [0x00767b48]      ; 00434629 | DAT_00767b48
        ;   Label: LAB_00434629
    CMP EBX,0x3                         ; 0043462f
    JL 0x00434714                       ; 00434632
        ;   XREF to: 00434714 (CONDITIONAL_JUMP)  ; LAB_00434714
    XOR ESI,ESI                         ; 00434638
    MOV dword ptr [ESP + 0x14],ESI      ; 0043463a
    TEST EBX,EBX                        ; 0043463e
    JLE 0x004346d9                      ; 00434640
        ;   XREF to: 004346d9 (CONDITIONAL_JUMP)  ; LAB_004346d9
    MOV EBX,0x768d4c                    ; 00434646 | DAT_00768d4c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043464b
        ;   Label: LAB_0043464b
    MOV EDI,dword ptr [0x00767b48]      ; 0043464f | DAT_00767b48
    INC EAX                             ; 00434655
    CMP EAX,EDI                         ; 00434656
    JNZ 0x0043465c                      ; 00434658
        ;   XREF to: 0043465c (CONDITIONAL_JUMP)  ; LAB_0043465c
    XOR EAX,EDI                         ; 0043465a
    IMUL EAX,EAX,0x30                   ; 0043465c
        ;   Label: LAB_0043465c
    MOV EBP,0x768d4c                    ; 0043465f | DAT_00768d4c
    MOV EDX,EBX                         ; 00434664
    MOV ECX,dword ptr [EBX + 0x8]       ; 00434666 | DAT_00768d54 | DAT_00768d84
    MOV ESI,dword ptr [EBX + 0x4]       ; 00434669 | DAT_00768d50 | DAT_00768d80
    NEG ECX                             ; 0043466c
    ADD EBP,EAX                         ; 0043466e
    XOR EAX,EAX                         ; 00434670
    CMP ECX,ESI                         ; 00434672
    JL 0x0043467b                       ; 00434674
        ;   XREF to: 0043467b (CONDITIONAL_JUMP)  ; LAB_0043467b
    MOV EAX,0x1                         ; 00434676
    MOV ECX,dword ptr [EBP + 0x8]       ; 0043467b | DAT_00768d54
        ;   Label: LAB_0043467b
    MOV EDI,dword ptr [EBP + 0x4]       ; 0043467e | DAT_00768d50
    NEG ECX                             ; 00434681
    CMP ECX,EDI                         ; 00434683
    JL 0x00434689                       ; 00434685
        ;   XREF to: 00434689 (CONDITIONAL_JUMP)  ; LAB_00434689
    OR AL,0x2                           ; 00434687
    CMP EAX,0x3                         ; 00434689
        ;   Label: LAB_00434689
    JA 0x004346bf                       ; 0043468c
        ;   XREF to: 004346bf (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4341fc]  ; 0043468e | = "k=plv" | caseD_1 | caseD_2
        ;   Label: switchD

