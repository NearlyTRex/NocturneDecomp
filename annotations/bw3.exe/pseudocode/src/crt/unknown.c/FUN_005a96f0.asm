; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * crt_unknown_c_FUN_005a96f0(int *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a9768 at 005a97e0
;
; Referenced Globals:
;   undefined4 DAT_006075c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a96f0
        ;   Label: crt_unknown.c_FUN_005a96f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a96f1
    MOV EAX,[0x006075c4]                ; 005a96f5 | DAT_006075c4
    XOR EBX,EBX                         ; 005a96fa
    TEST EAX,EAX                        ; 005a96fc
    JZ 0x005a970d                       ; 005a96fe
        ;   XREF to: 005a970d (CONDITIONAL_JUMP)  ; LAB_005a970d
    CMP EDX,EAX                         ; 005a9700
        ;   Label: LAB_005a9700
    JC 0x005a970d                       ; 005a9702
        ;   XREF to: 005a970d (CONDITIONAL_JUMP)  ; LAB_005a970d
    MOV EBX,EAX                         ; 005a9704
    MOV EAX,dword ptr [EAX + 0x8]       ; 005a9706
    TEST EAX,EAX                        ; 005a9709
    JNZ 0x005a9700                      ; 005a970b
        ;   XREF to: 005a9700 (CONDITIONAL_JUMP)  ; LAB_005a9700
    MOV dword ptr [EDX + 0x4],EBX       ; 005a970d
        ;   Label: LAB_005a970d
    MOV dword ptr [EDX + 0x8],EAX       ; 005a9710
    TEST EBX,EBX                        ; 005a9713
    JZ 0x005a971c                       ; 005a9715
        ;   XREF to: 005a971c (CONDITIONAL_JUMP)  ; LAB_005a971c
    MOV dword ptr [EBX + 0x8],EDX       ; 005a9717
    JMP 0x005a9722                      ; 005a971a
        ;   XREF to: 005a9722 (UNCONDITIONAL_JUMP)  ; LAB_005a9722
    MOV dword ptr [0x006075c4],EDX      ; 005a971c | DAT_006075c4
        ;   Label: LAB_005a971c
    TEST EAX,EAX                        ; 005a9722
        ;   Label: LAB_005a9722
    JZ 0x005a9729                       ; 005a9724
        ;   XREF to: 005a9729 (CONDITIONAL_JUMP)  ; LAB_005a9729
    MOV dword ptr [EAX + 0x4],EDX       ; 005a9726
    LEA EBX,[EDX + 0x20]                ; 005a9729
        ;   Label: LAB_005a9729
    ADD EDX,0x2c                        ; 005a972c
    MOV dword ptr [EDX + -0xc],0x0      ; 005a972f
    MOV dword ptr [EDX + -0x1c],0x0     ; 005a9736
    MOV dword ptr [EDX + -0x14],0x0     ; 005a973d
    MOV dword ptr [EDX + -0x10],0x0     ; 005a9744
    MOV dword ptr [EDX + -0x8],EBX      ; 005a974b
    MOV EAX,dword ptr [EDX + -0x2c]     ; 005a974e
    MOV dword ptr [EDX + -0x4],EBX      ; 005a9751
    SUB EAX,0x2c                        ; 005a9754
    MOV dword ptr [EDX + -0x20],EBX     ; 005a9757
    MOV dword ptr [EDX],EAX             ; 005a975a
    MOV dword ptr [EDX + EAX*0x1],0xffffffff ; 005a975c
    MOV EAX,EDX                         ; 005a9763
    POP EBX                             ; 005a9765
    RET                                 ; 005a9766

