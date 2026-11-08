; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004da570(void)
;
;
; XREF[3]:
;   FUN_004bd430 at 004bd45e
;   FUN_004dd770 at 004dd9f1
;   FUN_004dda90 at 004ddae7
;
; Referenced Globals:
;   undefined4 DAT_005c5f3f
;   TerminatedCString s_invsize_txt_005c5f42
;   undefined4 DAT_005c5f4e
;   TerminatedCString s_d_d_005c5f53
;   TerminatedCString s_phb_h_005c5f5a
;   TerminatedCString s_phb_o_005c5f60
;   TerminatedCString s_phb_m_005c5f66
;   undefined4 DAT_005c5f6c
;   TerminatedCString s_sps00_005c5f71
;   TerminatedCString s_sps01_005c5f77
;   TerminatedCString s_sps02_005c5f7d
;   TerminatedCString s_sps03_005c5f83
;   TerminatedCString s_sps04_005c5f89
;   TerminatedCString s_sps05_005c5f8f
;   TerminatedCString s_sps06_005c5f95
;   ... and 20 more
;
; Called Functions:
;   FUN_0040d460
;   FUN_0040da80
;   FUN_004659c0
;   FUN_004da320
;   FUN_005a3230
;   FUN_005a3a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da570
        ;   Label: FUN_004da570
    PUSH 0x5c5f3f                       ; 004da571 | DAT_005c5f3f
    PUSH 0x5c5f42                       ; 004da576 | = "invsize.txt"
    MOV EAX,[0x005fba1c]                ; 004da57b | DAT_005fba1c
    PUSH 0x5c5f4e                       ; 004da580 | DAT_005c5f4e
    MOV [0x01d70a34],EAX                ; 004da585 | DAT_01d70a34
    CALL FUN_004659c0                   ; 004da58a
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004659c0()
    MOV EBX,EAX                         ; 004da58f
    ADD ESP,0xc                         ; 004da591
    TEST EAX,EAX                        ; 004da594
    JNZ 0x004da803                      ; 004da596
        ;   XREF to: 004da803 (CONDITIONAL_JUMP)  ; LAB_004da803
    PUSH 0x40                           ; 004da59c
        ;   Label: LAB_004da59c
    PUSH 0x30                           ; 004da59e
    PUSH 0x5c5f5a                       ; 004da5a0 | = "phb_h"
    PUSH 0x1d70890                      ; 004da5a5
    CALL FUN_0040d460                   ; 004da5aa
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da5af
    PUSH 0x40                           ; 004da5b2
    PUSH 0x30                           ; 004da5b4
    PUSH 0x5c5f60                       ; 004da5b6 | = "phb_o"
    PUSH 0x1d708a4                      ; 004da5bb
    CALL FUN_0040d460                   ; 004da5c0
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da5c5
    PUSH 0x40                           ; 004da5c8
    PUSH 0x30                           ; 004da5ca
    PUSH 0x5c5f66                       ; 004da5cc | = "phb_m"
    PUSH 0x1d708b8                      ; 004da5d1
    CALL FUN_0040d460                   ; 004da5d6
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da5db
    PUSH 0x40                           ; 004da5de
    PUSH 0x40                           ; 004da5e0
    PUSH 0x5c5f6c                       ; 004da5e2 | DAT_005c5f6c
    PUSH 0x1d708cc                      ; 004da5e7
    CALL FUN_0040d460                   ; 004da5ec
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da5f1
    PUSH 0x40                           ; 004da5f4
    PUSH 0x40                           ; 004da5f6
    PUSH 0x5c5f71                       ; 004da5f8 | = "sps00"
    PUSH 0x1d709d0                      ; 004da5fd
    CALL FUN_0040d460                   ; 004da602
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da607
    PUSH 0x40                           ; 004da60a
    PUSH 0x40                           ; 004da60c
    PUSH 0x5c5f77                       ; 004da60e | = "sps01"
    PUSH 0x1d709e4                      ; 004da613
    CALL FUN_0040d460                   ; 004da618
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da61d
    PUSH 0x40                           ; 004da620
    PUSH 0x40                           ; 004da622
    PUSH 0x5c5f7d                       ; 004da624 | = "sps02"
    PUSH 0x1d709f8                      ; 004da629
    CALL FUN_0040d460                   ; 004da62e
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da633
    PUSH 0x40                           ; 004da636
    PUSH 0x40                           ; 004da638
    PUSH 0x5c5f83                       ; 004da63a | = "sps03"
    PUSH 0x1d70a0c                      ; 004da63f
    CALL FUN_0040d460                   ; 004da644
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da649
    PUSH 0x40                           ; 004da64c
    PUSH 0x40                           ; 004da64e
    PUSH 0x5c5f89                       ; 004da650 | = "sps04"
    PUSH 0x1d70980                      ; 004da655
    CALL FUN_0040d460                   ; 004da65a
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da65f
    PUSH 0x40                           ; 004da662
    PUSH 0x40                           ; 004da664
    PUSH 0x5c5f8f                       ; 004da666 | = "sps05"
    PUSH 0x1d70994                      ; 004da66b
    CALL FUN_0040d460                   ; 004da670
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da675
    PUSH 0x40                           ; 004da678
    PUSH 0x40                           ; 004da67a
    PUSH 0x5c5f95                       ; 004da67c | = "sps06"
    PUSH 0x1d709a8                      ; 004da681
    CALL FUN_0040d460                   ; 004da686
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da68b
    PUSH 0x40                           ; 004da68e
    PUSH 0x40                           ; 004da690
    PUSH 0x5c5f9b                       ; 004da692 | = "sps07"
    PUSH 0x1d709bc                      ; 004da697
    CALL FUN_0040d460                   ; 004da69c
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da6a1
    PUSH 0x40                           ; 004da6a4
    PUSH 0x40                           ; 004da6a6
    PUSH 0x5c5fa1                       ; 004da6a8 | = "sps08"
    PUSH 0x1d70930                      ; 004da6ad
    CALL FUN_0040d460                   ; 004da6b2
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da6b7
    PUSH 0x40                           ; 004da6ba
    PUSH 0x40                           ; 004da6bc
    PUSH 0x5c5fa7                       ; 004da6be | = "sps09"
    PUSH 0x1d70944                      ; 004da6c3
    CALL FUN_0040d460                   ; 004da6c8
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da6cd
    PUSH 0x40                           ; 004da6d0
    PUSH 0x40                           ; 004da6d2
    PUSH 0x5c5fad                       ; 004da6d4 | = "sps10"
    PUSH 0x1d70958                      ; 004da6d9
    CALL FUN_0040d460                   ; 004da6de
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da6e3
    PUSH 0x40                           ; 004da6e6
    PUSH 0x40                           ; 004da6e8
    PUSH 0x5c5fb3                       ; 004da6ea | = "sps11"
    PUSH 0x1d7096c                      ; 004da6ef
    CALL FUN_0040d460                   ; 004da6f4
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da6f9
    PUSH 0x40                           ; 004da6fc
    PUSH 0x40                           ; 004da6fe
    PUSH 0x5c5fb9                       ; 004da700 | = "sps12"
    PUSH 0x1d708e0                      ; 004da705
    CALL FUN_0040d460                   ; 004da70a
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da70f
    PUSH 0x40                           ; 004da712
    PUSH 0x40                           ; 004da714
    PUSH 0x5c5fbf                       ; 004da716 | = "sps13"
    PUSH 0x1d708f4                      ; 004da71b
    CALL FUN_0040d460                   ; 004da720
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da725
    PUSH 0x40                           ; 004da728
    PUSH 0x40                           ; 004da72a
    PUSH 0x5c5fc5                       ; 004da72c | = "sps14"
    PUSH 0x1d70908                      ; 004da731
    CALL FUN_0040d460                   ; 004da736
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004da73b
    PUSH 0x40                           ; 004da73e
    PUSH 0x40                           ; 004da740
    PUSH 0x5c5fcb                       ; 004da742 | = "sps15"
    PUSH 0x1d7091c                      ; 004da747
    CALL FUN_0040d460                   ; 004da74c
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    MOV EAX,[0x005fe9dc]                ; 004da751 | DAT_005fe9dc
    MOV EDX,0xffffffff                  ; 004da756
    ADD ESP,0x10                        ; 004da75b
    MOV ECX,dword ptr [EAX + 0x4]       ; 004da75e | DAT_01d21310
    MOV dword ptr [0x01d70a20],EDX      ; 004da761 | DAT_01d70a20
    CMP ECX,0x180                       ; 004da767
    JGE 0x004da7b3                      ; 004da76d
        ;   XREF to: 004da7b3 (CONDITIONAL_JUMP)  ; LAB_004da7b3
    PUSH 0x2                            ; 004da76f
    PUSH 0x2                            ; 004da771
    PUSH 0x1d70890                      ; 004da773
    CALL FUN_0040da80                   ; 004da778
        ;   XREF to: 0040da80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040da80()
    ADD ESP,0xc                         ; 004da77d
    PUSH 0x2                            ; 004da780
    PUSH 0x2                            ; 004da782
    PUSH 0x1d708a4                      ; 004da784
    CALL FUN_0040da80                   ; 004da789
        ;   XREF to: 0040da80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040da80()
    ADD ESP,0xc                         ; 004da78e
    PUSH 0x2                            ; 004da791
    PUSH 0x2                            ; 004da793
    PUSH 0x1d708b8                      ; 004da795
    CALL FUN_0040da80                   ; 004da79a
        ;   XREF to: 0040da80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040da80()
    ADD ESP,0xc                         ; 004da79f
    PUSH 0x2                            ; 004da7a2
    PUSH 0x2                            ; 004da7a4
    PUSH 0x1d708cc                      ; 004da7a6
    CALL FUN_0040da80                   ; 004da7ab
        ;   XREF to: 0040da80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040da80()
    ADD ESP,0xc                         ; 004da7b0
    PUSH 0x5c5fd1                       ; 004da7b3 | DAT_005c5fd1
        ;   Label: LAB_004da7b3
    PUSH 0x5c5fd4                       ; 004da7b8 | = "itemlist.txt"
    XOR EBX,EBX                         ; 004da7bd
    PUSH 0x5c5fe1                       ; 004da7bf | DAT_005c5fe1
    MOV dword ptr [0x01d5dc88],EBX      ; 004da7c4 | DAT_01d5dc88
    CALL FUN_004659c0                   ; 004da7ca
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004659c0()
    ADD ESP,0xc                         ; 004da7cf
    MOV EBX,EAX                         ; 004da7d2
    TEST EAX,EAX                        ; 004da7d4
    JZ 0x004da832                       ; 004da7d6
        ;   XREF to: 004da832 (CONDITIONAL_JUMP)  ; LAB_004da832
    TEST byte ptr [EBX + 0xc],0x10      ; 004da7d8
        ;   Label: LAB_004da7d8
    JNZ 0x004da829                      ; 004da7dc
        ;   XREF to: 004da829 (CONDITIONAL_JUMP)  ; LAB_004da829
    IMUL EAX,dword ptr [0x01d5dc88],0x300 ; 004da7de | DAT_01d5dc88
    PUSH EBX                            ; 004da7e8
    ADD EAX,0x1d5dc90                   ; 004da7e9
    PUSH EAX                            ; 004da7ee
    CALL FUN_004da320                   ; 004da7ef
        ;   XREF to: 004da320 (UNCONDITIONAL_CALL)  ; undefined FUN_004da320()
    ADD ESP,0x8                         ; 004da7f4
    TEST EAX,EAX                        ; 004da7f7
    JZ 0x004da829                       ; 004da7f9
        ;   XREF to: 004da829 (CONDITIONAL_JUMP)  ; LAB_004da829
    INC dword ptr [0x01d5dc88]          ; 004da7fb | DAT_01d5dc88
    JMP 0x004da7d8                      ; 004da801
        ;   XREF to: 004da7d8 (UNCONDITIONAL_JUMP)  ; LAB_004da7d8
    PUSH 0x600184                       ; 004da803 | DAT_00600184
        ;   Label: LAB_004da803
    PUSH 0x600180                       ; 004da808 | DAT_00600180
    PUSH 0x5c5f53                       ; 004da80d | = "%d,%d\n"
    PUSH EAX                            ; 004da812
    CALL FUN_005a3230                   ; 004da813
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x10                        ; 004da818
    PUSH EBX                            ; 004da81b
    CALL FUN_005a3a90                   ; 004da81c
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 004da821
    JMP 0x004da59c                      ; 004da824
        ;   XREF to: 004da59c (UNCONDITIONAL_JUMP)  ; LAB_004da59c
    PUSH EBX                            ; 004da829
        ;   Label: LAB_004da829
    CALL FUN_005a3a90                   ; 004da82a
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 004da82f
    POP EBX                             ; 004da832
        ;   Label: LAB_004da832
    RET                                 ; 004da833

