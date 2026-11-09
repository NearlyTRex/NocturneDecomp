; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD crt_unknown_c_FUN_005ab55c(uint param_1,LPCVOID param_2,DWORD param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005ab480 at 005ab50e
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a8 = 005a7f44
;   undefined4 DAT_00607b18
;   undefined4 DAT_00607b44
;   undefined4 DAT_00607b84
;   undefined4 DAT_00607bdc
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005a92c0
;   crt_unknown.c_FUN_005a6026
;   crt_unknown.c_FUN_005ab46c
;   crt_unknown.c_FUN_005ab480
;   crt_unknown.c_FUN_005ab920
;   unkafter_asgaya.cpp_FUN_005aefe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab55c
        ;   Label: crt_unknown.c_FUN_005ab55c
    PUSH ESI                            ; 005ab55d
    PUSH EDI                            ; 005ab55e
    PUSH EBP                            ; 005ab55f
    MOV EBP,ESP                         ; 005ab560
    SUB ESP,0x14                        ; 005ab562
    MOV EDI,dword ptr [EBP + 0x14]      ; 005ab565
    TEST EDI,EDI                        ; 005ab568
    JL 0x005ab574                       ; 005ab56a
        ;   XREF to: 005ab574 (CONDITIONAL_JUMP)  ; LAB_005ab574
    CMP EDI,dword ptr [0x00607b84]      ; 005ab56c | DAT_00607b84
    JBE 0x005ab585                      ; 005ab572
        ;   XREF to: 005ab585 (CONDITIONAL_JUMP)  ; LAB_005ab585
    PUSH 0x4                            ; 005ab574
        ;   Label: LAB_005ab574
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005ab576
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    MOV EAX,0xffffffff                  ; 005ab57b
    JMP 0x005ab6c6                      ; 005ab580
        ;   XREF to: 005ab6c6 (UNCONDITIONAL_JUMP)  ; LAB_005ab6c6
    MOV EDX,dword ptr [0x00607bdc]      ; 005ab585 | DAT_00607bdc
        ;   Label: LAB_005ab585
    MOV EAX,dword ptr [EDX + EDI*0x4]   ; 005ab58b
    PUSH EDI                            ; 005ab58e
    MOV dword ptr [EBP + -0x8],EAX      ; 005ab58f
    CALL crt_unknown.c_FUN_005ab920     ; 005ab592
        ;   XREF to: 005ab920 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab920()
    MOV EBX,EAX                         ; 005ab597
    ADD ESP,0x4                         ; 005ab599
    MOV dword ptr [EBP + -0x4],EAX      ; 005ab59c
    TEST EAX,EAX                        ; 005ab59f
    JNZ 0x005ab5b9                      ; 005ab5a1
        ;   XREF to: 005ab5b9 (CONDITIONAL_JUMP)  ; LAB_005ab5b9
    PUSH 0x4                            ; 005ab5a3
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005ab5a5
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    MOV EAX,0xffffffff                  ; 005ab5aa
    ADD ESP,0x4                         ; 005ab5af
    MOV ESP,EBP                         ; 005ab5b2
    POP EBP                             ; 005ab5b4
    POP EDI                             ; 005ab5b5
    POP ESI                             ; 005ab5b6
    POP EBX                             ; 005ab5b7
    RET                                 ; 005ab5b8
    TEST AL,0x2                         ; 005ab5b9
        ;   Label: LAB_005ab5b9
    JNZ 0x005ab5d3                      ; 005ab5bb
        ;   XREF to: 005ab5d3 (CONDITIONAL_JUMP)  ; LAB_005ab5d3
    PUSH 0x6                            ; 005ab5bd
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005ab5bf
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    MOV EAX,0xffffffff                  ; 005ab5c4
    ADD ESP,0x4                         ; 005ab5c9
    MOV ESP,EBP                         ; 005ab5cc
    POP EBP                             ; 005ab5ce
    POP EDI                             ; 005ab5cf
    POP ESI                             ; 005ab5d0
    POP EBX                             ; 005ab5d1
    RET                                 ; 005ab5d2
    PUSH EDI                            ; 005ab5d3
        ;   Label: LAB_005ab5d3
    CALL dword ptr [0x006079a4]         ; 005ab5d4 | PTR_crt_unknown.c_FUN_005a7f44_006079a4
    ADD ESP,0x4                         ; 005ab5da
    TEST BL,0x80                        ; 005ab5dd
    JZ 0x005ab60c                       ; 005ab5e0
        ;   XREF to: 005ab60c (CONDITIONAL_JUMP)  ; LAB_005ab60c
    PUSH 0x2                            ; 005ab5e2
    PUSH 0x0                            ; 005ab5e4
    PUSH 0x0                            ; 005ab5e6
    MOV EBX,dword ptr [EBP + -0x8]      ; 005ab5e8
    PUSH EBX                            ; 005ab5eb
    CALL dword ptr CS:[0x5b3640]        ; 005ab5ec
    CMP EAX,-0x1                        ; 005ab5f3
    JNZ 0x005ab60c                      ; 005ab5f6
        ;   XREF to: 005ab60c (CONDITIONAL_JUMP)  ; LAB_005ab60c
    PUSH EDI                            ; 005ab5f8
    CALL dword ptr [0x006079a8]         ; 005ab5f9 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005ab5ff
    CALL crt_unknown.c_FUN_005ab46c     ; 005ab602
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab46c()
    JMP 0x005ab6c9                      ; 005ab607
        ;   XREF to: 005ab6c9 (UNCONDITIONAL_JUMP)  ; LAB_005ab6c9
    TEST byte ptr [EBP + -0x3],0x80     ; 005ab60c
        ;   Label: LAB_005ab60c
    JZ 0x005ab635                       ; 005ab610
        ;   XREF to: 005ab635 (CONDITIONAL_JUMP)  ; LAB_005ab635
    PUSH EDI                            ; 005ab612
    CALL crt_unknown.c_FUN_005ab480     ; 005ab613
        ;   XREF to: 005ab480 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab480()
    ADD ESP,0x4                         ; 005ab618
    TEST EAX,EAX                        ; 005ab61b
    JZ 0x005ab635                       ; 005ab61d
        ;   XREF to: 005ab635 (CONDITIONAL_JUMP)  ; LAB_005ab635
    PUSH EDI                            ; 005ab61f
    CALL dword ptr [0x006079a8]         ; 005ab620 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    MOV EAX,0xffffffff                  ; 005ab626
    ADD ESP,0x4                         ; 005ab62b
    MOV ESP,EBP                         ; 005ab62e
    POP EBP                             ; 005ab630
    POP EDI                             ; 005ab631
    POP ESI                             ; 005ab632
    POP EBX                             ; 005ab633
    RET                                 ; 005ab634
    TEST byte ptr [EBP + -0x4],0x40     ; 005ab635
        ;   Label: LAB_005ab635
    JZ 0x005ab6d0                       ; 005ab639
        ;   XREF to: 005ab6d0 (CONDITIONAL_JUMP)  ; LAB_005ab6d0
    CMP dword ptr [0x00607b44],0x0      ; 005ab63f | DAT_00607b44
    JZ 0x005ab66d                       ; 005ab646
        ;   XREF to: 005ab66d (CONDITIONAL_JUMP)  ; LAB_005ab66d
    PUSH EDI                            ; 005ab648
    CALL dword ptr [0x00607b18]         ; 005ab649 | DAT_00607b18
    ADD ESP,0x4                         ; 005ab64f
    TEST EAX,EAX                        ; 005ab652
    JZ 0x005ab66d                       ; 005ab654
        ;   XREF to: 005ab66d (CONDITIONAL_JUMP)  ; LAB_005ab66d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005ab656
    PUSH EDX                            ; 005ab659
    MOV EBX,dword ptr [EBP + 0x18]      ; 005ab65a
    PUSH EBX                            ; 005ab65d
    PUSH EAX                            ; 005ab65e
    CALL dword ptr [0x00607b44]         ; 005ab65f | DAT_00607b44
    ADD ESP,0xc                         ; 005ab665
    MOV dword ptr [EBP + -0xc],EAX      ; 005ab668
    JMP 0x005ab6a0                      ; 005ab66b
        ;   XREF to: 005ab6a0 (UNCONDITIONAL_JUMP)  ; LAB_005ab6a0
    PUSH 0x0                            ; 005ab66d
        ;   Label: LAB_005ab66d
    LEA EAX,[EBP + -0xc]                ; 005ab66f
    PUSH EAX                            ; 005ab672
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005ab673
    PUSH EBX                            ; 005ab676
    MOV ECX,dword ptr [EBP + 0x18]      ; 005ab677
    PUSH ECX                            ; 005ab67a
    MOV ESI,dword ptr [EBP + -0x8]      ; 005ab67b
    PUSH ESI                            ; 005ab67e
    CALL dword ptr CS:[0x5b368c]        ; 005ab67f
    TEST EAX,EAX                        ; 005ab686
    JNZ 0x005ab6a0                      ; 005ab688
        ;   XREF to: 005ab6a0 (CONDITIONAL_JUMP)  ; LAB_005ab6a0
    PUSH EDI                            ; 005ab68a
    CALL dword ptr [0x006079a8]         ; 005ab68b | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005ab691
    CALL crt_unknown.c_FUN_005ab46c     ; 005ab694
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab46c()
    MOV ESP,EBP                         ; 005ab699
    POP EBP                             ; 005ab69b
    POP EDI                             ; 005ab69c
    POP ESI                             ; 005ab69d
    POP EBX                             ; 005ab69e
    RET                                 ; 005ab69f
    MOV EAX,dword ptr [EBP + -0xc]      ; 005ab6a0
        ;   Label: LAB_005ab6a0
    CMP EAX,dword ptr [EBP + 0x1c]      ; 005ab6a3
    JZ 0x005ab6bc                       ; 005ab6a6
        ;   XREF to: 005ab6bc (CONDITIONAL_JUMP)  ; LAB_005ab6bc
    PUSH 0xc                            ; 005ab6ac
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005ab6ae
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    MOV EAX,dword ptr [EBP + -0xc]      ; 005ab6b3
    ADD ESP,0x4                         ; 005ab6b6
    MOV dword ptr [EBP + 0x1c],EAX      ; 005ab6b9
    PUSH EDI                            ; 005ab6bc
        ;   Label: LAB_005ab6bc
    CALL dword ptr [0x006079a8]         ; 005ab6bd | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005ab6c3
    ADD ESP,0x4                         ; 005ab6c6
        ;   Label: LAB_005ab6c6
    MOV ESP,EBP                         ; 005ab6c9
        ;   Label: LAB_005ab6c9
    POP EBP                             ; 005ab6cb
    POP EDI                             ; 005ab6cc
    POP ESI                             ; 005ab6cd
    POP EBX                             ; 005ab6ce
    RET                                 ; 005ab6cf
    CALL unkafter_asgaya.cpp_FUN_005aefe0 ; 005ab6d0
        ;   XREF to: 005aefe0 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005aefe0()
        ;   Label: LAB_005ab6d0
    MOV dword ptr [EBP + -0x10],EAX     ; 005ab6d5
    CMP EAX,0xb0                        ; 005ab6d8
    JNC 0x005ab6e4                      ; 005ab6dd
        ;   XREF to: 005ab6e4 (CONDITIONAL_JUMP)  ; LAB_005ab6e4
    CALL crt_unknown.c_FUN_005a6026     ; 005ab6df
        ;   XREF to: 005a6026 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a6026()
    MOV ECX,dword ptr [EBP + -0x10]     ; 005ab6e4
        ;   Label: LAB_005ab6e4
    MOV EBX,0x200                       ; 005ab6e7
    CMP ECX,0x230                       ; 005ab6ec
    JNC 0x005ab6f9                      ; 005ab6f2
        ;   XREF to: 005ab6f9 (CONDITIONAL_JUMP)  ; LAB_005ab6f9
    MOV EBX,0x80                        ; 005ab6f4
    LEA EAX,[EBX + 0x3]                 ; 005ab6f9
        ;   Label: LAB_005ab6f9
    AND AL,0xfc                         ; 005ab6fc
    SUB ESP,EAX                         ; 005ab6fe
    XOR EAX,EAX                         ; 005ab700
    MOV dword ptr [EBP + -0x10],EAX     ; 005ab702
    MOV dword ptr [EBP + -0x14],EAX     ; 005ab705
    MOV dword ptr [EBP + -0xc],EAX      ; 005ab708
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005ab70b
    MOV ESI,ESP                         ; 005ab70e
    TEST EAX,EAX                        ; 005ab710
    JBE 0x005ab87d                      ; 005ab712
        ;   XREF to: 005ab87d (CONDITIONAL_JUMP)  ; LAB_005ab87d
    MOV EAX,dword ptr [EBP + 0x18]      ; 005ab718
        ;   Label: LAB_005ab718
    ADD EAX,dword ptr [EBP + -0x10]     ; 005ab71b
    CMP byte ptr [EAX],0xa              ; 005ab71e
    JNZ 0x005ab7c5                      ; 005ab721
        ;   XREF to: 005ab7c5 (CONDITIONAL_JUMP)  ; LAB_005ab7c5
    MOV EAX,dword ptr [EBP + -0x14]     ; 005ab727
    MOV byte ptr [ESI + EAX*0x1],0xd    ; 005ab72a
    MOV ECX,dword ptr [EBP + -0x14]     ; 005ab72e
    INC ECX                             ; 005ab731
    MOV dword ptr [EBP + -0x14],ECX     ; 005ab732
    CMP EBX,ECX                         ; 005ab735
    JNZ 0x005ab7c5                      ; 005ab737
        ;   XREF to: 005ab7c5 (CONDITIONAL_JUMP)  ; LAB_005ab7c5
    CMP dword ptr [0x00607b44],0x0      ; 005ab73d | DAT_00607b44
    JZ 0x005ab765                       ; 005ab744
        ;   XREF to: 005ab765 (CONDITIONAL_JUMP)  ; LAB_005ab765
    PUSH EDI                            ; 005ab746
    CALL dword ptr [0x00607b18]         ; 005ab747 | DAT_00607b18
    ADD ESP,0x4                         ; 005ab74d
    TEST EAX,EAX                        ; 005ab750
    JZ 0x005ab765                       ; 005ab752
        ;   XREF to: 005ab765 (CONDITIONAL_JUMP)  ; LAB_005ab765
    PUSH EBX                            ; 005ab754
    PUSH ESI                            ; 005ab755
    PUSH EAX                            ; 005ab756
    CALL dword ptr [0x00607b44]         ; 005ab757 | DAT_00607b44
    ADD ESP,0xc                         ; 005ab75d
    MOV dword ptr [EBP + -0x14],EAX     ; 005ab760
    JMP 0x005ab792                      ; 005ab763
        ;   XREF to: 005ab792 (UNCONDITIONAL_JUMP)  ; LAB_005ab792
    PUSH 0x0                            ; 005ab765
        ;   Label: LAB_005ab765
    LEA EAX,[EBP + -0x14]               ; 005ab767
    PUSH EAX                            ; 005ab76a
    PUSH EBX                            ; 005ab76b
    PUSH ESI                            ; 005ab76c
    MOV ECX,dword ptr [EBP + -0x8]      ; 005ab76d
    PUSH ECX                            ; 005ab770
    CALL dword ptr CS:[0x5b368c]        ; 005ab771
    TEST EAX,EAX                        ; 005ab778
    JNZ 0x005ab792                      ; 005ab77a
        ;   XREF to: 005ab792 (CONDITIONAL_JUMP)  ; LAB_005ab792
    PUSH EDI                            ; 005ab77c
    CALL dword ptr [0x006079a8]         ; 005ab77d | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005ab783
    CALL crt_unknown.c_FUN_005ab46c     ; 005ab786
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab46c()
    MOV ESP,EBP                         ; 005ab78b
    POP EBP                             ; 005ab78d
    POP EDI                             ; 005ab78e
    POP ESI                             ; 005ab78f
    POP EBX                             ; 005ab790
    RET                                 ; 005ab791
    CMP EBX,dword ptr [EBP + -0x14]     ; 005ab792
        ;   Label: LAB_005ab792
    JZ 0x005ab7ba                       ; 005ab795
        ;   XREF to: 005ab7ba (CONDITIONAL_JUMP)  ; LAB_005ab7ba
    PUSH 0xc                            ; 005ab797
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005ab799
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005ab79e
    PUSH EDI                            ; 005ab7a1
    CALL dword ptr [0x006079a8]         ; 005ab7a2 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    MOV EAX,dword ptr [EBP + -0xc]      ; 005ab7a8
    MOV EBX,dword ptr [EBP + -0x14]     ; 005ab7ab
    ADD ESP,0x4                         ; 005ab7ae
    ADD EAX,EBX                         ; 005ab7b1
    MOV ESP,EBP                         ; 005ab7b3
    POP EBP                             ; 005ab7b5
    POP EDI                             ; 005ab7b6
    POP ESI                             ; 005ab7b7
    POP EBX                             ; 005ab7b8
    RET                                 ; 005ab7b9
    MOV EAX,dword ptr [EBP + -0x10]     ; 005ab7ba
        ;   Label: LAB_005ab7ba
    XOR EDX,EDX                         ; 005ab7bd
    MOV dword ptr [EBP + -0xc],EAX      ; 005ab7bf
    MOV dword ptr [EBP + -0x14],EDX     ; 005ab7c2
    MOV EAX,dword ptr [EBP + 0x18]      ; 005ab7c5
        ;   Label: LAB_005ab7c5
    ADD EAX,dword ptr [EBP + -0x10]     ; 005ab7c8
    MOV EDX,dword ptr [EBP + -0x14]     ; 005ab7cb
    MOV AL,byte ptr [EAX]               ; 005ab7ce
    MOV byte ptr [EDX + ESI*0x1],AL     ; 005ab7d0
    MOV EAX,dword ptr [EBP + -0x10]     ; 005ab7d3
    MOV EDX,dword ptr [EBP + -0x14]     ; 005ab7d6
    INC EAX                             ; 005ab7d9
    INC EDX                             ; 005ab7da
    MOV dword ptr [EBP + -0x10],EAX     ; 005ab7db
    MOV dword ptr [EBP + -0x14],EDX     ; 005ab7de
    CMP EBX,EDX                         ; 005ab7e1
    JNZ 0x005ab871                      ; 005ab7e3
        ;   XREF to: 005ab871 (CONDITIONAL_JUMP)  ; LAB_005ab871
    CMP dword ptr [0x00607b44],0x0      ; 005ab7e9 | DAT_00607b44
    JZ 0x005ab811                       ; 005ab7f0
        ;   XREF to: 005ab811 (CONDITIONAL_JUMP)  ; LAB_005ab811
    PUSH EDI                            ; 005ab7f2
    CALL dword ptr [0x00607b18]         ; 005ab7f3 | DAT_00607b18
    ADD ESP,0x4                         ; 005ab7f9
    TEST EAX,EAX                        ; 005ab7fc
    JZ 0x005ab811                       ; 005ab7fe
        ;   XREF to: 005ab811 (CONDITIONAL_JUMP)  ; LAB_005ab811
    PUSH EBX                            ; 005ab800
    PUSH ESI                            ; 005ab801
    PUSH EAX                            ; 005ab802
    CALL dword ptr [0x00607b44]         ; 005ab803 | DAT_00607b44
    ADD ESP,0xc                         ; 005ab809
    MOV dword ptr [EBP + -0x14],EAX     ; 005ab80c
    JMP 0x005ab83e                      ; 005ab80f
        ;   XREF to: 005ab83e (UNCONDITIONAL_JUMP)  ; LAB_005ab83e
    PUSH 0x0                            ; 005ab811
        ;   Label: LAB_005ab811
    LEA EAX,[EBP + -0x14]               ; 005ab813
    PUSH EAX                            ; 005ab816
    PUSH EBX                            ; 005ab817
    PUSH ESI                            ; 005ab818
    MOV EDX,dword ptr [EBP + -0x8]      ; 005ab819
    PUSH EDX                            ; 005ab81c
    CALL dword ptr CS:[0x5b368c]        ; 005ab81d
    TEST EAX,EAX                        ; 005ab824
    JNZ 0x005ab83e                      ; 005ab826
        ;   XREF to: 005ab83e (CONDITIONAL_JUMP)  ; LAB_005ab83e
    PUSH EDI                            ; 005ab828
    CALL dword ptr [0x006079a8]         ; 005ab829 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005ab82f
    CALL crt_unknown.c_FUN_005ab46c     ; 005ab832
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab46c()
    MOV ESP,EBP                         ; 005ab837
    POP EBP                             ; 005ab839
    POP EDI                             ; 005ab83a
    POP ESI                             ; 005ab83b
    POP EBX                             ; 005ab83c
    RET                                 ; 005ab83d
    CMP EBX,dword ptr [EBP + -0x14]     ; 005ab83e
        ;   Label: LAB_005ab83e
    JZ 0x005ab866                       ; 005ab841
        ;   XREF to: 005ab866 (CONDITIONAL_JUMP)  ; LAB_005ab866
    PUSH 0xc                            ; 005ab843
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005ab845
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005ab84a
    PUSH EDI                            ; 005ab84d
    CALL dword ptr [0x006079a8]         ; 005ab84e | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    MOV EAX,dword ptr [EBP + -0xc]      ; 005ab854
    MOV EDX,dword ptr [EBP + -0x14]     ; 005ab857
    ADD ESP,0x4                         ; 005ab85a
    ADD EAX,EDX                         ; 005ab85d
    MOV ESP,EBP                         ; 005ab85f
    POP EBP                             ; 005ab861
    POP EDI                             ; 005ab862
    POP ESI                             ; 005ab863
    POP EBX                             ; 005ab864
    RET                                 ; 005ab865
    MOV EAX,dword ptr [EBP + -0x10]     ; 005ab866
        ;   Label: LAB_005ab866
    MOV dword ptr [EBP + -0xc],EAX      ; 005ab869
    XOR EAX,EAX                         ; 005ab86c
    MOV dword ptr [EBP + -0x14],EAX     ; 005ab86e
    MOV EAX,dword ptr [EBP + -0x10]     ; 005ab871
        ;   Label: LAB_005ab871
    CMP EAX,dword ptr [EBP + 0x1c]      ; 005ab874
    JC 0x005ab718                       ; 005ab877
        ;   XREF to: 005ab718 (CONDITIONAL_JUMP)  ; LAB_005ab718
    CMP dword ptr [EBP + -0x14],0x0     ; 005ab87d
        ;   Label: LAB_005ab87d
    JZ 0x005ab6bc                       ; 005ab881
        ;   XREF to: 005ab6bc (CONDITIONAL_JUMP)  ; LAB_005ab6bc
    CMP dword ptr [0x00607b44],0x0      ; 005ab887 | DAT_00607b44
    JZ 0x005ab8b2                       ; 005ab88e
        ;   XREF to: 005ab8b2 (CONDITIONAL_JUMP)  ; LAB_005ab8b2
    PUSH EDI                            ; 005ab890
    CALL dword ptr [0x00607b18]         ; 005ab891 | DAT_00607b18
    ADD ESP,0x4                         ; 005ab897
    TEST EAX,EAX                        ; 005ab89a
    JZ 0x005ab8b2                       ; 005ab89c
        ;   XREF to: 005ab8b2 (CONDITIONAL_JUMP)  ; LAB_005ab8b2
    MOV EBX,dword ptr [EBP + -0x14]     ; 005ab89e
    PUSH EBX                            ; 005ab8a1
    PUSH ESI                            ; 005ab8a2
    PUSH EAX                            ; 005ab8a3
    CALL dword ptr [0x00607b44]         ; 005ab8a4 | DAT_00607b44
    ADD ESP,0xc                         ; 005ab8aa
    MOV dword ptr [EBP + -0x10],EAX     ; 005ab8ad
    JMP 0x005ab8e2                      ; 005ab8b0
        ;   XREF to: 005ab8e2 (UNCONDITIONAL_JUMP)  ; LAB_005ab8e2
    PUSH 0x0                            ; 005ab8b2
        ;   Label: LAB_005ab8b2
    LEA EAX,[EBP + -0x10]               ; 005ab8b4
    PUSH EAX                            ; 005ab8b7
    MOV EAX,dword ptr [EBP + -0x14]     ; 005ab8b8
    PUSH EAX                            ; 005ab8bb
    PUSH ESI                            ; 005ab8bc
    MOV EDX,dword ptr [EBP + -0x8]      ; 005ab8bd
    PUSH EDX                            ; 005ab8c0
    CALL dword ptr CS:[0x5b368c]        ; 005ab8c1
    TEST EAX,EAX                        ; 005ab8c8
    JNZ 0x005ab8e2                      ; 005ab8ca
        ;   XREF to: 005ab8e2 (CONDITIONAL_JUMP)  ; LAB_005ab8e2
    PUSH EDI                            ; 005ab8cc
    CALL dword ptr [0x006079a8]         ; 005ab8cd | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005ab8d3
    CALL crt_unknown.c_FUN_005ab46c     ; 005ab8d6
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab46c()
    MOV ESP,EBP                         ; 005ab8db
    POP EBP                             ; 005ab8dd
    POP EDI                             ; 005ab8de
    POP ESI                             ; 005ab8df
    POP EBX                             ; 005ab8e0
    RET                                 ; 005ab8e1
    MOV EAX,dword ptr [EBP + -0x10]     ; 005ab8e2
        ;   Label: LAB_005ab8e2
    CMP EAX,dword ptr [EBP + -0x14]     ; 005ab8e5
    JZ 0x005ab6bc                       ; 005ab8e8
        ;   XREF to: 005ab6bc (CONDITIONAL_JUMP)  ; LAB_005ab6bc
    PUSH 0xc                            ; 005ab8ee
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005ab8f0
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005ab8f5
    PUSH EDI                            ; 005ab8f8
    CALL dword ptr [0x006079a8]         ; 005ab8f9 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    MOV EAX,dword ptr [EBP + -0xc]      ; 005ab8ff
    MOV ESI,dword ptr [EBP + -0x10]     ; 005ab902
    ADD ESP,0x4                         ; 005ab905
    ADD EAX,ESI                         ; 005ab908
    MOV ESP,EBP                         ; 005ab90a
    POP EBP                             ; 005ab90c
    POP EDI                             ; 005ab90d
    POP ESI                             ; 005ab90e
    POP EBX                             ; 005ab90f
    RET                                 ; 005ab910

