; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005c0700(uint param_1,int *param_2)
;
;
; XREF[4]:
;   FUN_0040b440 at 0040b4aa
;   FUN_004668a0 at 004668ff
;   FUN_0051afa0 at 0051b04a
;   FUN_0054af20 at 0054b1ae
;
; Referenced Globals:
;   void* PTR_FUN_00626600 = 005c50d4
;   void* PTR_FUN_00626604 = 005c50d4
;
; Called Functions:
;   FUN_005c50d4
;   FUN_005c64a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0700
        ;   Label: FUN_005c0700
    PUSH ESI                            ; 005c0701
    PUSH EDI                            ; 005c0702
    PUSH EBP                            ; 005c0703
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c0704
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c0708
    CMP EDX,-0x1                        ; 005c070c
    JNZ 0x005c0718                      ; 005c070f
        ;   XREF to: 005c0718 (CONDITIONAL_JUMP)  ; LAB_005c0718
    MOV EAX,EDX                         ; 005c0711
    POP EBP                             ; 005c0713
    POP EDI                             ; 005c0714
    POP ESI                             ; 005c0715
    POP EBX                             ; 005c0716
    RET                                 ; 005c0717
    MOV ECX,dword ptr [EBX + 0x10]      ; 005c0718
        ;   Label: LAB_005c0718
    PUSH ECX                            ; 005c071b
    CALL dword ptr [0x00626600]         ; 005c071c | PTR_FUN_00626600
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c0722
    MOV ESI,dword ptr [EAX + 0xc]       ; 005c0725
    ADD ESP,0x4                         ; 005c0728
    CMP ESI,0x1                         ; 005c072b
    JZ 0x005c0752                       ; 005c072e
        ;   XREF to: 005c0752 (CONDITIONAL_JUMP)  ; LAB_005c0752
    TEST ESI,ESI                        ; 005c0730
    JZ 0x005c074b                       ; 005c0732
        ;   XREF to: 005c074b (CONDITIONAL_JUMP)  ; LAB_005c074b
    MOV EBP,dword ptr [EBX + 0x10]      ; 005c0734
    PUSH EBP                            ; 005c0737
    CALL dword ptr [0x00626604]         ; 005c0738 | PTR_FUN_00626604
    MOV EAX,0xffffffff                  ; 005c073e
    ADD ESP,0x4                         ; 005c0743
    POP EBP                             ; 005c0746
    POP EDI                             ; 005c0747
    POP ESI                             ; 005c0748
    POP EBX                             ; 005c0749
    RET                                 ; 005c074a
    MOV dword ptr [EAX + 0xc],0x1       ; 005c074b
        ;   Label: LAB_005c074b
    TEST byte ptr [EBX + 0xd],0x10      ; 005c0752
        ;   Label: LAB_005c0752
    JZ 0x005c076f                       ; 005c0756
        ;   XREF to: 005c076f (CONDITIONAL_JUMP)  ; LAB_005c076f
    MOV EBP,dword ptr [EBX + 0x10]      ; 005c0758
    PUSH EBP                            ; 005c075b
    CALL dword ptr [0x00626604]         ; 005c075c | PTR_FUN_00626604
    MOV EAX,0xffffffff                  ; 005c0762
    ADD ESP,0x4                         ; 005c0767
    POP EBP                             ; 005c076a
    POP EDI                             ; 005c076b
    POP ESI                             ; 005c076c
    POP EBX                             ; 005c076d
    RET                                 ; 005c076e
    TEST byte ptr [EBX + 0xc],0x1       ; 005c076f
        ;   Label: LAB_005c076f
    JNZ 0x005c078c                      ; 005c0773
        ;   XREF to: 005c078c (CONDITIONAL_JUMP)  ; LAB_005c078c
    MOV EDI,dword ptr [EBX + 0x10]      ; 005c0775
        ;   Label: LAB_005c0775
    PUSH EDI                            ; 005c0778
    CALL dword ptr [0x00626604]         ; 005c0779 | PTR_FUN_00626604
    MOV EAX,0xffffffff                  ; 005c077f
    ADD ESP,0x4                         ; 005c0784
    POP EBP                             ; 005c0787
    POP EDI                             ; 005c0788
    POP ESI                             ; 005c0789
    POP EBX                             ; 005c078a
    RET                                 ; 005c078b
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c078c
        ;   Label: LAB_005c078c
    CMP dword ptr [EAX + 0x8],0x0       ; 005c078f
    JNZ 0x005c079e                      ; 005c0793
        ;   XREF to: 005c079e (CONDITIONAL_JUMP)  ; LAB_005c079e
    PUSH EBX                            ; 005c0795
    CALL FUN_005c64a0                   ; 005c0796
        ;   XREF to: 005c64a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c64a0()
    ADD ESP,0x4                         ; 005c079b
    MOV ECX,dword ptr [EBX + 0x4]       ; 005c079e
        ;   Label: LAB_005c079e
    TEST ECX,ECX                        ; 005c07a1
    JNZ 0x005c07cb                      ; 005c07a3
        ;   XREF to: 005c07cb (CONDITIONAL_JUMP)  ; LAB_005c07cb
    MOV dword ptr [EBX + 0x4],0x1       ; 005c07a5
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c07ac
    MOV ECX,dword ptr [EBX + 0x14]      ; 005c07af
    MOV EAX,dword ptr [EAX + 0x8]       ; 005c07b2
    ADD EAX,ECX                         ; 005c07b5
    DEC EAX                             ; 005c07b7
    MOV CL,byte ptr [EBX + 0xc]         ; 005c07b8
    MOV dword ptr [EBX],EAX             ; 005c07bb
    OR CL,0x4                           ; 005c07bd
    MOV EAX,dword ptr [EBX]             ; 005c07c0
    MOV DL,byte ptr [ESP + 0x14]        ; 005c07c2
    MOV byte ptr [EBX + 0xc],CL         ; 005c07c6
    JMP 0x005c07f9                      ; 005c07c9
        ;   XREF to: 005c07f9 (UNCONDITIONAL_JUMP)  ; LAB_005c07f9
    MOV EDX,dword ptr [EBX + 0x8]       ; 005c07cb
        ;   Label: LAB_005c07cb
    MOV EAX,dword ptr [EBX]             ; 005c07ce
    CMP EAX,dword ptr [EDX + 0x8]       ; 005c07d0
    JZ 0x005c0775                       ; 005c07d3
        ;   XREF to: 005c0775 (CONDITIONAL_JUMP)  ; LAB_005c0775
    MOV EAX,dword ptr [EBX]             ; 005c07d5
    LEA EBP,[ECX + 0x1]                 ; 005c07d7
    DEC EAX                             ; 005c07da
    MOV dword ptr [EBX + 0x4],EBP       ; 005c07db
    MOV dword ptr [EBX],EAX             ; 005c07de
    MOV AL,byte ptr [EAX]               ; 005c07e0
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c07e2
    AND EAX,0xff                        ; 005c07e6
    CMP EAX,EDX                         ; 005c07eb
    JZ 0x005c07f3                       ; 005c07ed
        ;   XREF to: 005c07f3 (CONDITIONAL_JUMP)  ; LAB_005c07f3
    OR byte ptr [EBX + 0xc],0x4         ; 005c07ef
    MOV EAX,dword ptr [EBX]             ; 005c07f3
        ;   Label: LAB_005c07f3
    MOV DL,byte ptr [ESP + 0x14]        ; 005c07f5
    MOV byte ptr [EAX],DL               ; 005c07f9
        ;   Label: LAB_005c07f9
    MOV CH,byte ptr [EBX + 0xc]         ; 005c07fb
    MOV ESI,dword ptr [EBX + 0x10]      ; 005c07fe
    AND CH,0xef                         ; 005c0801
    PUSH ESI                            ; 005c0804
    MOV byte ptr [EBX + 0xc],CH         ; 005c0805
    CALL dword ptr [0x00626604]         ; 005c0808 | PTR_FUN_00626604
    ADD ESP,0x4                         ; 005c080e
    XOR EAX,EAX                         ; 005c0811
    MOV AL,byte ptr [ESP + 0x14]        ; 005c0813
    POP EBP                             ; 005c0817
    POP EDI                             ; 005c0818
    POP ESI                             ; 005c0819
    POP EBX                             ; 005c081a
    RET                                 ; 005c081b

