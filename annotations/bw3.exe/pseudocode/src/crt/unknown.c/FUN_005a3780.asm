; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a3780(int *param_1)
;
;
; XREF[4]:
;   crt_unknown.c_FUN_005a3770 at 005a3775
;   crt_unknown.c_FUN_005a3e68 at 005a3e8b
;   crt_unknown.c_FUN_005a9768 at 005a9806
;   crt_unknown.c_FUN_005a9e88 at 005aa030
;
; Referenced Globals:
;   undefined4 DAT_006075c4
;   undefined4 DAT_006075c8
;   undefined4 DAT_006075cc
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079bc = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079c4 = 005a7f44
;   undefined4 DAT_02d25290
;   undefined4 DAT_02d258e0
;
; Called Functions:
;   crt_unknown.c_FUN_005a7f44
;   crt_unknown.c_FUN_005a95c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3780
        ;   Label: crt_unknown.c_FUN_005a3780
    PUSH ESI                            ; 005a3781
    PUSH EDI                            ; 005a3782
    MOV EDI,dword ptr [ESP + 0x10]      ; 005a3783
    TEST EDI,EDI                        ; 005a3787
    JZ 0x005a3882                       ; 005a3789
        ;   XREF to: 005a3882 (CONDITIONAL_JUMP)  ; LAB_005a3882
    CALL dword ptr [0x006079bc]         ; 005a378f | PTR_crt_unknown.c_FUN_005a7f44_006079bc
    MOV ESI,dword ptr [0x02d25290]      ; 005a3795 | DAT_02d25290
    TEST ESI,ESI                        ; 005a379b
    JZ 0x005a37df                       ; 005a379d
        ;   XREF to: 005a37df (CONDITIONAL_JUMP)  ; LAB_005a37df
    CMP ESI,EDI                         ; 005a379f
    JA 0x005a37af                       ; 005a37a1
        ;   XREF to: 005a37af (CONDITIONAL_JUMP)  ; LAB_005a37af
    MOV EAX,dword ptr [ESI]             ; 005a37a3
    ADD EAX,ESI                         ; 005a37a5
    CMP EAX,EDI                         ; 005a37a7
    JA 0x005a383c                       ; 005a37a9
        ;   XREF to: 005a383c (CONDITIONAL_JUMP)  ; LAB_005a383c
    MOV EDX,ESI                         ; 005a37af
        ;   Label: LAB_005a37af
    MOV ESI,dword ptr [ESI + 0x4]       ; 005a37b1
    TEST ESI,ESI                        ; 005a37b4
    JZ 0x005a37c8                       ; 005a37b6
        ;   XREF to: 005a37c8 (CONDITIONAL_JUMP)  ; LAB_005a37c8
    CMP ESI,EDI                         ; 005a37b8
    JA 0x005a37c8                       ; 005a37ba
        ;   XREF to: 005a37c8 (CONDITIONAL_JUMP)  ; LAB_005a37c8
    MOV EAX,dword ptr [ESI]             ; 005a37bc
    ADD EAX,ESI                         ; 005a37be
    CMP EAX,EDI                         ; 005a37c0
    JA 0x005a383c                       ; 005a37c2
        ;   XREF to: 005a383c (CONDITIONAL_JUMP)  ; LAB_005a383c
    MOV ESI,dword ptr [EDX + 0x8]       ; 005a37c8
        ;   Label: LAB_005a37c8
    TEST ESI,ESI                        ; 005a37cb
    JZ 0x005a37df                       ; 005a37cd
        ;   XREF to: 005a37df (CONDITIONAL_JUMP)  ; LAB_005a37df
    CMP ESI,EDI                         ; 005a37cf
    JA 0x005a37df                       ; 005a37d1
        ;   XREF to: 005a37df (CONDITIONAL_JUMP)  ; LAB_005a37df
    MOV EAX,dword ptr [ESI]             ; 005a37d3
    ADD EAX,ESI                         ; 005a37d5
    CMP EAX,EDI                         ; 005a37d7
    JA 0x005a383c                       ; 005a37d9
        ;   XREF to: 005a383c (CONDITIONAL_JUMP)  ; LAB_005a383c
    MOV ESI,dword ptr [0x006075c8]      ; 005a37df | DAT_006075c8
        ;   Label: LAB_005a37df
    TEST ESI,ESI                        ; 005a37e5
    JZ 0x005a381d                       ; 005a37e7
        ;   XREF to: 005a381d (CONDITIONAL_JUMP)  ; LAB_005a381d
    CMP ESI,EDI                         ; 005a37e9
    JA 0x005a37f5                       ; 005a37eb
        ;   XREF to: 005a37f5 (CONDITIONAL_JUMP)  ; LAB_005a37f5
    MOV EAX,dword ptr [ESI]             ; 005a37ed
    ADD EAX,ESI                         ; 005a37ef
    CMP EAX,EDI                         ; 005a37f1
    JA 0x005a383c                       ; 005a37f3
        ;   XREF to: 005a383c (CONDITIONAL_JUMP)  ; LAB_005a383c
    MOV EDX,ESI                         ; 005a37f5
        ;   Label: LAB_005a37f5
    MOV ESI,dword ptr [ESI + 0x4]       ; 005a37f7
    TEST ESI,ESI                        ; 005a37fa
    JZ 0x005a380a                       ; 005a37fc
        ;   XREF to: 005a380a (CONDITIONAL_JUMP)  ; LAB_005a380a
    CMP ESI,EDI                         ; 005a37fe
    JA 0x005a380a                       ; 005a3800
        ;   XREF to: 005a380a (CONDITIONAL_JUMP)  ; LAB_005a380a
    MOV EAX,dword ptr [ESI]             ; 005a3802
    ADD EAX,ESI                         ; 005a3804
    CMP EAX,EDI                         ; 005a3806
    JA 0x005a383c                       ; 005a3808
        ;   XREF to: 005a383c (CONDITIONAL_JUMP)  ; LAB_005a383c
    MOV ESI,dword ptr [EDX + 0x8]       ; 005a380a
        ;   Label: LAB_005a380a
    TEST ESI,ESI                        ; 005a380d
    JZ 0x005a381d                       ; 005a380f
        ;   XREF to: 005a381d (CONDITIONAL_JUMP)  ; LAB_005a381d
    CMP ESI,EDI                         ; 005a3811
    JA 0x005a381d                       ; 005a3813
        ;   XREF to: 005a381d (CONDITIONAL_JUMP)  ; LAB_005a381d
    MOV EAX,dword ptr [ESI]             ; 005a3815
    ADD EAX,ESI                         ; 005a3817
    CMP EAX,EDI                         ; 005a3819
    JA 0x005a383c                       ; 005a381b
        ;   XREF to: 005a383c (CONDITIONAL_JUMP)  ; LAB_005a383c
    MOV ESI,dword ptr [0x006075c4]      ; 005a381d | DAT_006075c4
        ;   Label: LAB_005a381d
    TEST ESI,ESI                        ; 005a3823
    JZ 0x005a387c                       ; 005a3825
        ;   XREF to: 005a387c (CONDITIONAL_JUMP)  ; LAB_005a387c
    CMP ESI,EDI                         ; 005a3827
        ;   Label: LAB_005a3827
    JA 0x005a3833                       ; 005a3829
        ;   XREF to: 005a3833 (CONDITIONAL_JUMP)  ; LAB_005a3833
    MOV EAX,dword ptr [ESI]             ; 005a382b
    ADD EAX,ESI                         ; 005a382d
    CMP EAX,EDI                         ; 005a382f
    JA 0x005a383c                       ; 005a3831
        ;   XREF to: 005a383c (CONDITIONAL_JUMP)  ; LAB_005a383c
    MOV ESI,dword ptr [ESI + 0x8]       ; 005a3833
        ;   Label: LAB_005a3833
    TEST ESI,ESI                        ; 005a3836
    JNZ 0x005a3827                      ; 005a3838
        ;   XREF to: 005a3827 (CONDITIONAL_JUMP)  ; LAB_005a3827
    JMP 0x005a387c                      ; 005a383a
        ;   XREF to: 005a387c (UNCONDITIONAL_JUMP)  ; LAB_005a387c
    MOV EAX,0x6075c4                    ; 005a383c | DAT_006075c4
        ;   Label: LAB_005a383c
    MOV DX,DS                           ; 005a3841
    AND EDX,0xffff                      ; 005a3843
    MOV EBX,ESI                         ; 005a3849
    MOV EAX,EDI                         ; 005a384b
    CALL crt_unknown.c_FUN_005a95c0     ; 005a384d
        ;   XREF to: 005a95c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a95c0()
    MOV EDX,dword ptr [0x006075c8]      ; 005a3852 | DAT_006075c8
    MOV dword ptr [0x02d25290],ESI      ; 005a3858 | DAT_02d25290
    CMP ESI,EDX                         ; 005a385e
    JNC 0x005a3874                      ; 005a3860
        ;   XREF to: 005a3874 (CONDITIONAL_JUMP)  ; LAB_005a3874
    MOV EBX,dword ptr [0x006075cc]      ; 005a3862 | DAT_006075cc
    MOV EAX,dword ptr [ESI + 0x14]      ; 005a3868
    CMP EAX,EBX                         ; 005a386b
    JBE 0x005a3874                      ; 005a386d
        ;   XREF to: 005a3874 (CONDITIONAL_JUMP)  ; LAB_005a3874
    MOV [0x006075cc],EAX                ; 005a386f | DAT_006075cc
    XOR AH,AH                           ; 005a3874
        ;   Label: LAB_005a3874
    MOV byte ptr [0x02d258e0],AH        ; 005a3876 | DAT_02d258e0
    CALL dword ptr [0x006079c4]         ; 005a387c | PTR_crt_unknown.c_FUN_005a7f44_006079c4
        ;   Label: LAB_005a387c
    POP EDI                             ; 005a3882
        ;   Label: LAB_005a3882
    POP ESI                             ; 005a3883
    POP EBX                             ; 005a3884
    RET                                 ; 005a3885

