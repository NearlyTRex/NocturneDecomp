; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * crt_unknown_c_FUN_005c3748(undefined4 param_1,int *param_2,int param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c3320 at 005c33a0
;
; Called Functions:
;   crt_unknown.c_FUN_005c38ac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3748
        ;   Label: crt_unknown.c_FUN_005c3748
    PUSH ESI                            ; 005c3749
    PUSH EDI                            ; 005c374a
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c374b
    MOV ESI,dword ptr [ESP + 0x14]      ; 005c374f
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c3753
    PUSH EBX                            ; 005c3757
    PUSH EAX                            ; 005c3758
    MOV byte ptr [EBX + 0x16],0x20      ; 005c3759
    CALL crt_unknown.c_FUN_005c38ac     ; 005c375d
        ;   XREF to: 005c38ac (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c38ac()
    MOV dword ptr [EBX + 0x4],0x0       ; 005c3762
    MOV CL,byte ptr [EAX]               ; 005c3769
    ADD ESP,0x8                         ; 005c376b
    CMP CL,0x2a                         ; 005c376e
    JNZ 0x005c3797                      ; 005c3771
        ;   XREF to: 005c3797 (CONDITIONAL_JUMP)  ; LAB_005c3797
    MOV EDX,dword ptr [ESI]             ; 005c3773
    ADD EDX,0x4                         ; 005c3775
    MOV dword ptr [ESI],EDX             ; 005c3778
    MOV EDX,dword ptr [EDX + -0x4]      ; 005c377a
    MOV dword ptr [EBX + 0x4],EDX       ; 005c377d
    TEST EDX,EDX                        ; 005c3780
    JGE 0x005c3794                      ; 005c3782
        ;   XREF to: 005c3794 (CONDITIONAL_JUMP)  ; LAB_005c3794
    MOV EDI,EDX                         ; 005c3784
    MOV CH,byte ptr [EBX + 0x1e]        ; 005c3786
    NEG EDI                             ; 005c3789
    OR CH,0x8                           ; 005c378b
    MOV dword ptr [EBX + 0x4],EDI       ; 005c378e
    MOV byte ptr [EBX + 0x1e],CH        ; 005c3791
    INC EAX                             ; 005c3794
        ;   Label: LAB_005c3794
    JMP 0x005c37b6                      ; 005c3795
        ;   XREF to: 005c37b6 (UNCONDITIONAL_JUMP)  ; LAB_005c37b6
    MOV DL,byte ptr [EAX]               ; 005c3797
        ;   Label: LAB_005c3797
    CMP DL,0x30                         ; 005c3799
    JC 0x005c37b6                       ; 005c379c
        ;   XREF to: 005c37b6 (CONDITIONAL_JUMP)  ; LAB_005c37b6
    CMP DL,0x39                         ; 005c379e
    JA 0x005c37b6                       ; 005c37a1
        ;   XREF to: 005c37b6 (CONDITIONAL_JUMP)  ; LAB_005c37b6
    IMUL ECX,dword ptr [EBX + 0x4],0xa  ; 005c37a3
    XOR EDX,EDX                         ; 005c37a7
    MOV DL,byte ptr [EAX]               ; 005c37a9
    SUB EDX,0x30                        ; 005c37ab
    ADD ECX,EDX                         ; 005c37ae
    INC EAX                             ; 005c37b0
    MOV dword ptr [EBX + 0x4],ECX       ; 005c37b1
    JMP 0x005c3797                      ; 005c37b4
        ;   XREF to: 005c3797 (UNCONDITIONAL_JUMP)  ; LAB_005c3797
    MOV dword ptr [EBX + 0x8],0xffffffff ; 005c37b6
        ;   Label: LAB_005c37b6
    CMP byte ptr [EAX],0x2e             ; 005c37bd
    JNZ 0x005c3816                      ; 005c37c0
        ;   XREF to: 005c3816 (CONDITIONAL_JUMP)  ; LAB_005c3816
    MOV dword ptr [EBX + 0x8],0x0       ; 005c37c2
    MOV CH,byte ptr [EAX + 0x1]         ; 005c37c9
    INC EAX                             ; 005c37cc
    CMP CH,0x2a                         ; 005c37cd
    JNZ 0x005c37ed                      ; 005c37d0
        ;   XREF to: 005c37ed (CONDITIONAL_JUMP)  ; LAB_005c37ed
    MOV EDX,dword ptr [ESI]             ; 005c37d2
    ADD EDX,0x4                         ; 005c37d4
    MOV dword ptr [ESI],EDX             ; 005c37d7
    MOV EDX,dword ptr [EDX + -0x4]      ; 005c37d9
    MOV dword ptr [EBX + 0x8],EDX       ; 005c37dc
    TEST EDX,EDX                        ; 005c37df
    JGE 0x005c37ea                      ; 005c37e1
        ;   XREF to: 005c37ea (CONDITIONAL_JUMP)  ; LAB_005c37ea
    MOV dword ptr [EBX + 0x8],0xffffffff ; 005c37e3
    INC EAX                             ; 005c37ea
        ;   Label: LAB_005c37ea
    JMP 0x005c380c                      ; 005c37eb
        ;   XREF to: 005c380c (UNCONDITIONAL_JUMP)  ; LAB_005c380c
    MOV DL,byte ptr [EAX]               ; 005c37ed
        ;   Label: LAB_005c37ed
    CMP DL,0x30                         ; 005c37ef
    JC 0x005c380c                       ; 005c37f2
        ;   XREF to: 005c380c (CONDITIONAL_JUMP)  ; LAB_005c380c
    CMP DL,0x39                         ; 005c37f4
    JA 0x005c380c                       ; 005c37f7
        ;   XREF to: 005c380c (CONDITIONAL_JUMP)  ; LAB_005c380c
    IMUL ECX,dword ptr [EBX + 0x8],0xa  ; 005c37f9
    XOR EDX,EDX                         ; 005c37fd
    MOV DL,byte ptr [EAX]               ; 005c37ff
    SUB EDX,0x30                        ; 005c3801
    ADD ECX,EDX                         ; 005c3804
    INC EAX                             ; 005c3806
    MOV dword ptr [EBX + 0x8],ECX       ; 005c3807
    JMP 0x005c37ed                      ; 005c380a
        ;   XREF to: 005c37ed (UNCONDITIONAL_JUMP)  ; LAB_005c37ed
    CMP dword ptr [EBX + 0x8],-0x1      ; 005c380c
        ;   Label: LAB_005c380c
    JZ 0x005c3816                       ; 005c3810
        ;   XREF to: 005c3816 (CONDITIONAL_JUMP)  ; LAB_005c3816
    MOV byte ptr [EBX + 0x16],0x20      ; 005c3812
    MOV DL,byte ptr [EAX]               ; 005c3816
        ;   Label: LAB_005c3816
    LEA ECX,[EAX + 0x1]                 ; 005c3818
    CMP DL,0x4e                         ; 005c381b
    JC 0x005c383f                       ; 005c381e
        ;   XREF to: 005c383f (CONDITIONAL_JUMP)  ; LAB_005c383f
    JBE 0x005c38a1                      ; 005c3820
        ;   XREF to: 005c38a1 (CONDITIONAL_JUMP)  ; LAB_005c38a1
    CMP DL,0x6c                         ; 005c3826
    JC 0x005c3836                       ; 005c3829
        ;   XREF to: 005c3836 (CONDITIONAL_JUMP)  ; LAB_005c3836
    JBE 0x005c3858                      ; 005c382b
        ;   XREF to: 005c3858 (CONDITIONAL_JUMP)  ; LAB_005c3858
    CMP DL,0x77                         ; 005c382d
    JZ 0x005c3858                       ; 005c3830
        ;   XREF to: 005c3858 (CONDITIONAL_JUMP)  ; LAB_005c3858
    POP EDI                             ; 005c3832
    POP ESI                             ; 005c3833
    POP EBX                             ; 005c3834
    RET                                 ; 005c3835
    CMP DL,0x68                         ; 005c3836
        ;   Label: LAB_005c3836
    JZ 0x005c3866                       ; 005c3839
        ;   XREF to: 005c3866 (CONDITIONAL_JUMP)  ; LAB_005c3866
    POP EDI                             ; 005c383b
    POP ESI                             ; 005c383c
    POP EBX                             ; 005c383d
    RET                                 ; 005c383e
    CMP DL,0x49                         ; 005c383f
        ;   Label: LAB_005c383f
    JC 0x005c384f                       ; 005c3842
        ;   XREF to: 005c384f (CONDITIONAL_JUMP)  ; LAB_005c384f
    JBE 0x005c386c                      ; 005c3844
        ;   XREF to: 005c386c (CONDITIONAL_JUMP)  ; LAB_005c386c
    CMP DL,0x4c                         ; 005c3846
    JZ 0x005c3888                       ; 005c3849
        ;   XREF to: 005c3888 (CONDITIONAL_JUMP)  ; LAB_005c3888
    POP EDI                             ; 005c384b
    POP ESI                             ; 005c384c
    POP EBX                             ; 005c384d
    RET                                 ; 005c384e
    CMP DL,0x46                         ; 005c384f
        ;   Label: LAB_005c384f
    JZ 0x005c3897                       ; 005c3852
        ;   XREF to: 005c3897 (CONDITIONAL_JUMP)  ; LAB_005c3897
    POP EDI                             ; 005c3854
    POP ESI                             ; 005c3855
    POP EBX                             ; 005c3856
    RET                                 ; 005c3857
    MOV CL,byte ptr [EBX + 0x1e]        ; 005c3858
        ;   Label: LAB_005c3858
    OR CL,0x20                          ; 005c385b
    INC EAX                             ; 005c385e
    MOV byte ptr [EBX + 0x1e],CL        ; 005c385f
    POP EDI                             ; 005c3862
    POP ESI                             ; 005c3863
    POP EBX                             ; 005c3864
    RET                                 ; 005c3865
    OR byte ptr [EBX + 0x1e],0x10       ; 005c3866
        ;   Label: LAB_005c3866
    JMP 0x005c38a5                      ; 005c386a
        ;   XREF to: 005c38a5 (UNCONDITIONAL_JUMP)  ; LAB_005c38a5
    CMP byte ptr [EAX + 0x1],0x36       ; 005c386c
        ;   Label: LAB_005c386c
    JNZ 0x005c38a7                      ; 005c3870
        ;   XREF to: 005c38a7 (CONDITIONAL_JUMP)  ; LAB_005c38a7
    CMP byte ptr [EAX + 0x2],0x34       ; 005c3872
    JNZ 0x005c38a7                      ; 005c3876
        ;   XREF to: 005c38a7 (CONDITIONAL_JUMP)  ; LAB_005c38a7
    MOV CH,byte ptr [EBX + 0x1f]        ; 005c3878
    OR CH,0x1                           ; 005c387b
    ADD EAX,0x3                         ; 005c387e
    MOV byte ptr [EBX + 0x1f],CH        ; 005c3881
    POP EDI                             ; 005c3884
    POP ESI                             ; 005c3885
    POP EBX                             ; 005c3886
    RET                                 ; 005c3887
    MOV DL,byte ptr [EBX + 0x1f]        ; 005c3888
        ;   Label: LAB_005c3888
    OR DL,0x1                           ; 005c388b
    MOV EAX,ECX                         ; 005c388e
    MOV byte ptr [EBX + 0x1f],DL        ; 005c3890
    POP EDI                             ; 005c3893
    POP ESI                             ; 005c3894
    POP EBX                             ; 005c3895
    RET                                 ; 005c3896
    OR byte ptr [EBX + 0x1e],0x80       ; 005c3897
        ;   Label: LAB_005c3897
    MOV EAX,ECX                         ; 005c389b
    POP EDI                             ; 005c389d
    POP ESI                             ; 005c389e
    POP EBX                             ; 005c389f
    RET                                 ; 005c38a0
    OR byte ptr [EBX + 0x1e],0x40       ; 005c38a1
        ;   Label: LAB_005c38a1
    MOV EAX,ECX                         ; 005c38a5
        ;   Label: LAB_005c38a5
    POP EDI                             ; 005c38a7
        ;   Label: LAB_005c38a7
    POP ESI                             ; 005c38a8
    POP EBX                             ; 005c38a9
    RET                                 ; 005c38aa

