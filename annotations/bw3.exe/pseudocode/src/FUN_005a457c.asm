; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a457c(undefined4 *param_1,int param_2,uint param_3)
;
;
; XREF[11]:
;   FUN_0044c130 at 0044c950
;   FUN_004659c0 at 00465a69
;   FUN_004bdfb0 at 004be1e3
;   FUN_00502890 at 00502925
;   FUN_00502bc0 at 00502bef
;   FUN_0050ff60 at 0051014c
;   FUN_00513ff0 at 00514096
;   FUN_00514110 at 005141af
;   FUN_00574080 at 005740db
;   FUN_00574930 at 0057494a
;   ... and 1 more
;
; Referenced Globals:
;   void* PTR_FUN_006079a4 = 005a7f44
;   void* PTR_FUN_006079a8 = 005a7f44
;
; Called Functions:
;   FUN_005a4520
;   FUN_005a4564
;   FUN_005a7f44
;   FUN_005a92c0
;   FUN_005a9bc0
;   FUN_005a9cf0
;   FUN_005aa380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a457c
        ;   Label: FUN_005a457c
    PUSH ESI                            ; 005a457d
    PUSH EDI                            ; 005a457e
    PUSH EBP                            ; 005a457f
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a4580
    MOV ESI,dword ptr [ESP + 0x18]      ; 005a4584
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005a4588
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a458c
    PUSH EDX                            ; 005a458f
    CALL dword ptr [0x006079a4]         ; 005a4590 | PTR_FUN_006079a4
    MOV AH,byte ptr [EBX + 0xc]         ; 005a4596
    ADD ESP,0x4                         ; 005a4599
    TEST AH,0x6                         ; 005a459c
    JZ 0x005a462f                       ; 005a459f
        ;   XREF to: 005a462f (CONDITIONAL_JUMP)  ; LAB_005a462f
    TEST byte ptr [EBX + 0xd],0x10      ; 005a45a5
    JZ 0x005a45e1                       ; 005a45a9
        ;   XREF to: 005a45e1 (CONDITIONAL_JUMP)  ; LAB_005a45e1
    PUSH EBX                            ; 005a45ab
    CALL FUN_005a9bc0                   ; 005a45ac
        ;   XREF to: 005a9bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9bc0()
    ADD ESP,0x4                         ; 005a45b1
    TEST EAX,EAX                        ; 005a45b4
    JZ 0x005a45f8                       ; 005a45b6
        ;   XREF to: 005a45f8 (CONDITIONAL_JUMP)  ; LAB_005a45f8
    TEST EDI,EDI                        ; 005a45b8
    JNZ 0x005a45ca                      ; 005a45ba
        ;   XREF to: 005a45ca (CONDITIONAL_JUMP)  ; LAB_005a45ca
    TEST ESI,ESI                        ; 005a45bc
    JGE 0x005a45ca                      ; 005a45be
        ;   XREF to: 005a45ca (CONDITIONAL_JUMP)  ; LAB_005a45ca
    PUSH 0x9                            ; 005a45c0
    CALL FUN_005a92c0                   ; 005a45c2
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a92c0()
    ADD ESP,0x4                         ; 005a45c7
    MOV ESI,dword ptr [EBX + 0x10]      ; 005a45ca
        ;   Label: LAB_005a45ca
    PUSH ESI                            ; 005a45cd
    CALL dword ptr [0x006079a8]         ; 005a45ce | PTR_FUN_006079a8
    MOV EAX,0xffffffff                  ; 005a45d4
    ADD ESP,0x4                         ; 005a45d9
    POP EBP                             ; 005a45dc
    POP EDI                             ; 005a45dd
    POP ESI                             ; 005a45de
    POP EBX                             ; 005a45df
    RET                                 ; 005a45e0
    CMP EDI,0x1                         ; 005a45e1
        ;   Label: LAB_005a45e1
    JNZ 0x005a45e9                      ; 005a45e4
        ;   XREF to: 005a45e9 (CONDITIONAL_JUMP)  ; LAB_005a45e9
    SUB ESI,dword ptr [EBX + 0x4]       ; 005a45e6
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a45e9
        ;   Label: LAB_005a45e9
    MOV EAX,dword ptr [EAX + 0x8]       ; 005a45ec
    MOV dword ptr [EBX + 0x4],0x0       ; 005a45ef
    MOV dword ptr [EBX],EAX             ; 005a45f6
    PUSH EDI                            ; 005a45f8
        ;   Label: LAB_005a45f8
    MOV CL,byte ptr [EBX + 0xc]         ; 005a45f9
    PUSH ESI                            ; 005a45fc
    MOV EAX,dword ptr [EBX + 0x10]      ; 005a45fd
    AND CL,0xeb                         ; 005a4600
    PUSH EAX                            ; 005a4603
    MOV byte ptr [EBX + 0xc],CL         ; 005a4604
    CALL FUN_005a9cf0                   ; 005a4607
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9cf0()
    ADD ESP,0xc                         ; 005a460c
    CMP EAX,-0x1                        ; 005a460f
    JNZ 0x005a474f                      ; 005a4612
        ;   XREF to: 005a474f (CONDITIONAL_JUMP)  ; LAB_005a474f
    MOV ECX,dword ptr [EBX + 0x10]      ; 005a4618
    PUSH ECX                            ; 005a461b
    CALL dword ptr [0x006079a8]         ; 005a461c | PTR_FUN_006079a8
    MOV EAX,0xffffffff                  ; 005a4622
    ADD ESP,0x4                         ; 005a4627
    POP EBP                             ; 005a462a
    POP EDI                             ; 005a462b
    POP ESI                             ; 005a462c
    POP EBX                             ; 005a462d
    RET                                 ; 005a462e
    CMP EDI,0x1                         ; 005a462f
        ;   Label: LAB_005a462f
    JC 0x005a4644                       ; 005a4632
        ;   XREF to: 005a4644 (CONDITIONAL_JUMP)  ; LAB_005a4644
    JBE 0x005a464d                      ; 005a4634
        ;   XREF to: 005a464d (CONDITIONAL_JUMP)  ; LAB_005a464d
    CMP EDI,0x2                         ; 005a4636
    JZ 0x005a46ed                       ; 005a4639
        ;   XREF to: 005a46ed (CONDITIONAL_JUMP)  ; LAB_005a46ed
    JMP 0x005a472e                      ; 005a463f
        ;   XREF to: 005a472e (UNCONDITIONAL_JUMP)  ; LAB_005a472e
    TEST EDI,EDI                        ; 005a4644
        ;   Label: LAB_005a4644
    JZ 0x005a469c                       ; 005a4646
        ;   XREF to: 005a469c (CONDITIONAL_JUMP)  ; LAB_005a469c
    JMP 0x005a472e                      ; 005a4648
        ;   XREF to: 005a472e (UNCONDITIONAL_JUMP)  ; LAB_005a472e
    PUSH EBX                            ; 005a464d
        ;   Label: LAB_005a464d
    PUSH ESI                            ; 005a464e
    MOV EBP,dword ptr [EBX + 0x4]       ; 005a464f
    CALL FUN_005a4520                   ; 005a4652
        ;   XREF to: 005a4520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4520()
    ADD ESP,0x8                         ; 005a4657
    TEST EAX,EAX                        ; 005a465a
    JZ 0x005a474f                       ; 005a465c
        ;   XREF to: 005a474f (CONDITIONAL_JUMP)  ; LAB_005a474f
    PUSH EDI                            ; 005a4662
    SUB ESI,EBP                         ; 005a4663
    PUSH ESI                            ; 005a4665
    MOV EDI,dword ptr [EBX + 0x10]      ; 005a4666
    PUSH EDI                            ; 005a4669
    CALL FUN_005a9cf0                   ; 005a466a
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9cf0()
    ADD ESP,0xc                         ; 005a466f
    CMP EAX,-0x1                        ; 005a4672
    JNZ 0x005a468e                      ; 005a4675
        ;   XREF to: 005a468e (CONDITIONAL_JUMP)  ; LAB_005a468e
    MOV EBP,dword ptr [EBX + 0x10]      ; 005a4677
    PUSH EBP                            ; 005a467a
    CALL dword ptr [0x006079a8]         ; 005a467b | PTR_FUN_006079a8
    MOV EAX,0xffffffff                  ; 005a4681
    ADD ESP,0x4                         ; 005a4686
    POP EBP                             ; 005a4689
    POP EDI                             ; 005a468a
    POP ESI                             ; 005a468b
    POP EBX                             ; 005a468c
    RET                                 ; 005a468d
    PUSH EBX                            ; 005a468e
        ;   Label: LAB_005a468e
    CALL FUN_005a4564                   ; 005a468f
        ;   XREF to: 005a4564 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4564()
    ADD ESP,0x4                         ; 005a4694
    JMP 0x005a474f                      ; 005a4697
        ;   XREF to: 005a474f (UNCONDITIONAL_JUMP)  ; LAB_005a474f
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a469c
        ;   Label: LAB_005a469c
    PUSH EDX                            ; 005a469f
    CALL FUN_005aa380                   ; 005a46a0
        ;   XREF to: 005aa380 (UNCONDITIONAL_CALL)  ; undefined FUN_005aa380()
    ADD ESP,0x4                         ; 005a46a5
    MOV ECX,dword ptr [EBX + 0x4]       ; 005a46a8
    MOV EBP,ESI                         ; 005a46ab
    SUB EAX,ECX                         ; 005a46ad
    PUSH EBX                            ; 005a46af
    SUB EBP,EAX                         ; 005a46b0
    PUSH EBP                            ; 005a46b2
    CALL FUN_005a4520                   ; 005a46b3
        ;   XREF to: 005a4520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4520()
    ADD ESP,0x8                         ; 005a46b8
    TEST EAX,EAX                        ; 005a46bb
    JZ 0x005a474f                       ; 005a46bd
        ;   XREF to: 005a474f (CONDITIONAL_JUMP)  ; LAB_005a474f
    PUSH EDI                            ; 005a46c3
    PUSH ESI                            ; 005a46c4
    MOV ESI,dword ptr [EBX + 0x10]      ; 005a46c5
    PUSH ESI                            ; 005a46c8
    CALL FUN_005a9cf0                   ; 005a46c9
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9cf0()
    ADD ESP,0xc                         ; 005a46ce
    CMP EAX,-0x1                        ; 005a46d1
    JNZ 0x005a468e                      ; 005a46d4
        ;   XREF to: 005a468e (CONDITIONAL_JUMP)  ; LAB_005a468e
    MOV EDI,dword ptr [EBX + 0x10]      ; 005a46d6
    PUSH EDI                            ; 005a46d9
    CALL dword ptr [0x006079a8]         ; 005a46da | PTR_FUN_006079a8
    MOV EAX,0xffffffff                  ; 005a46e0
    ADD ESP,0x4                         ; 005a46e5
    POP EBP                             ; 005a46e8
    POP EDI                             ; 005a46e9
    POP ESI                             ; 005a46ea
    POP EBX                             ; 005a46eb
    RET                                 ; 005a46ec
    MOV DL,AH                           ; 005a46ed
        ;   Label: LAB_005a46ed
    PUSH EDI                            ; 005a46ef
    MOV ECX,dword ptr [EBX + 0x10]      ; 005a46f0
    AND DL,0xef                         ; 005a46f3
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a46f6
    MOV byte ptr [EBX + 0xc],DL         ; 005a46f9
    PUSH ESI                            ; 005a46fc
    MOV EAX,dword ptr [EAX + 0x8]       ; 005a46fd
    MOV dword ptr [EBX + 0x4],0x0       ; 005a4700
    PUSH ECX                            ; 005a4707
    MOV dword ptr [EBX],EAX             ; 005a4708
    CALL FUN_005a9cf0                   ; 005a470a
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9cf0()
    ADD ESP,0xc                         ; 005a470f
    CMP EAX,-0x1                        ; 005a4712
    JNZ 0x005a474f                      ; 005a4715
        ;   XREF to: 005a474f (CONDITIONAL_JUMP)  ; LAB_005a474f
    MOV ESI,dword ptr [EBX + 0x10]      ; 005a4717
    PUSH ESI                            ; 005a471a
    CALL dword ptr [0x006079a8]         ; 005a471b | PTR_FUN_006079a8
    MOV EAX,0xffffffff                  ; 005a4721
    ADD ESP,0x4                         ; 005a4726
    POP EBP                             ; 005a4729
    POP EDI                             ; 005a472a
    POP ESI                             ; 005a472b
    POP EBX                             ; 005a472c
    RET                                 ; 005a472d
    PUSH 0x9                            ; 005a472e
        ;   Label: LAB_005a472e
    CALL FUN_005a92c0                   ; 005a4730
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a92c0()
    ADD ESP,0x4                         ; 005a4735
    MOV EAX,dword ptr [EBX + 0x10]      ; 005a4738
    PUSH EAX                            ; 005a473b
    CALL dword ptr [0x006079a8]         ; 005a473c | PTR_FUN_006079a8
    MOV EAX,0xffffffff                  ; 005a4742
    ADD ESP,0x4                         ; 005a4747
    POP EBP                             ; 005a474a
    POP EDI                             ; 005a474b
    POP ESI                             ; 005a474c
    POP EBX                             ; 005a474d
    RET                                 ; 005a474e
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a474f
        ;   Label: LAB_005a474f
    PUSH EDX                            ; 005a4752
    CALL dword ptr [0x006079a8]         ; 005a4753 | PTR_FUN_006079a8
    ADD ESP,0x4                         ; 005a4759
    XOR EAX,EAX                         ; 005a475c
    POP EBP                             ; 005a475e
    POP EDI                             ; 005a475f
    POP ESI                             ; 005a4760
    POP EBX                             ; 005a4761
    RET                                 ; 005a4762

