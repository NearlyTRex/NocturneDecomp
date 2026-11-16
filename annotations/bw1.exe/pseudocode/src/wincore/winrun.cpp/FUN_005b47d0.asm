; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_005b47d0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c9d298
;   undefined4 DAT_02c9d2a0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b47d0
        ;   Label: wincore_winrun.cpp_FUN_005b47d0
    SUB ESP,0xa0                        ; 005b47d1
    CMP dword ptr [0x02c9d2a0],0x0      ; 005b47d7 | DAT_02c9d2a0
    JNZ 0x005b47e8                      ; 005b47de
        ;   XREF to: 005b47e8 (CONDITIONAL_JUMP)  ; LAB_005b47e8
    ADD ESP,0xa0                        ; 005b47e0
    POP EBP                             ; 005b47e6
    RET                                 ; 005b47e7
    LEA EAX,[ESP + 0x80]                ; 005b47e8
        ;   Label: LAB_005b47e8
    PUSH EAX                            ; 005b47ef
    MOV ECX,dword ptr [ESP + 0xac]      ; 005b47f0
    PUSH ECX                            ; 005b47f7
    CALL dword ptr CS:[0x5d04bc]        ; 005b47f8
    PUSH 0x0                            ; 005b47ff
    PUSH 0x80                           ; 005b4801
    LEA EAX,[ESP + 0x8]                 ; 005b4806
    PUSH EAX                            ; 005b480a
    PUSH 0x5f9fd0                       ; 005b480b
    CALL dword ptr CS:[0x5d044c]        ; 005b4810
    LEA EAX,[ESP + 0x90]                ; 005b4817
    PUSH EAX                            ; 005b481e
    CALL dword ptr CS:[0x5d0508]        ; 005b481f
    MOV DL,byte ptr [ESP]               ; 005b4826
    MOV EAX,ESP                         ; 005b4829
    CMP DL,0x20                         ; 005b482b
    JNZ 0x005b4840                      ; 005b482e
        ;   XREF to: 005b4840 (CONDITIONAL_JUMP)  ; LAB_005b4840
    MOV DH,byte ptr [EAX + 0x1]         ; 005b4830
        ;   Label: LAB_005b4830
    INC EAX                             ; 005b4833
    CMP DH,0x20                         ; 005b4834
    JZ 0x005b4830                       ; 005b4837
        ;   XREF to: 005b4830 (CONDITIONAL_JUMP)  ; LAB_005b4830
    LEA EAX,[EAX]                       ; 005b4839
    NOP                                 ; 005b483f
    CMP byte ptr [EAX],0x20             ; 005b4840
        ;   Label: LAB_005b4840
    JZ 0x005b4848                       ; 005b4843
        ;   XREF to: 005b4848 (CONDITIONAL_JUMP)  ; LAB_005b4848
    INC EAX                             ; 005b4845
    JMP 0x005b4840                      ; 005b4846
        ;   XREF to: 005b4840 (UNCONDITIONAL_JUMP)  ; LAB_005b4840
    CMP byte ptr [EAX],0x20             ; 005b4848
        ;   Label: LAB_005b4848
    JNZ 0x005b4850                      ; 005b484b
        ;   XREF to: 005b4850 (CONDITIONAL_JUMP)  ; LAB_005b4850
    INC EAX                             ; 005b484d
    JMP 0x005b4848                      ; 005b484e
        ;   XREF to: 005b4848 (UNCONDITIONAL_JUMP)  ; LAB_005b4848
    CMP byte ptr [EAX],0x20             ; 005b4850
        ;   Label: LAB_005b4850
    JZ 0x005b4858                       ; 005b4853
        ;   XREF to: 005b4858 (CONDITIONAL_JUMP)  ; LAB_005b4858
    INC EAX                             ; 005b4855
    JMP 0x005b4850                      ; 005b4856
        ;   XREF to: 005b4850 (UNCONDITIONAL_JUMP)  ; LAB_005b4850
    CMP byte ptr [EAX],0x20             ; 005b4858
        ;   Label: LAB_005b4858
    JNZ 0x005b4879                      ; 005b485b
        ;   XREF to: 005b4879 (CONDITIONAL_JUMP)  ; LAB_005b4879
    INC EAX                             ; 005b485d
    JMP 0x005b4858                      ; 005b485e
        ;   XREF to: 005b4858 (UNCONDITIONAL_JUMP)  ; LAB_005b4858
    IMUL ECX,dword ptr [ESP + 0x98],0xa ; 005b4860
        ;   Label: LAB_005b4860
    XOR EDX,EDX                         ; 005b4868
    MOV DL,byte ptr [EAX]               ; 005b486a
    SUB EDX,0x30                        ; 005b486c
    ADD ECX,EDX                         ; 005b486f
    INC EAX                             ; 005b4871
    MOV dword ptr [ESP + 0x98],ECX      ; 005b4872
    MOV DL,byte ptr [EAX]               ; 005b4879
        ;   Label: LAB_005b4879
    CMP DL,0x30                         ; 005b487b
    JNC 0x005b488c                      ; 005b487e
        ;   XREF to: 005b488c (CONDITIONAL_JUMP)  ; LAB_005b488c
    CMP byte ptr [EAX],0x20             ; 005b4880
        ;   Label: LAB_005b4880
    JNZ 0x005b495e                      ; 005b4883
        ;   XREF to: 005b495e (CONDITIONAL_JUMP)  ; LAB_005b495e
    INC EAX                             ; 005b4889
    JMP 0x005b4880                      ; 005b488a
        ;   XREF to: 005b4880 (UNCONDITIONAL_JUMP)  ; LAB_005b4880
    CMP DL,0x39                         ; 005b488c
        ;   Label: LAB_005b488c
    JBE 0x005b4860                      ; 005b488f
        ;   XREF to: 005b4860 (CONDITIONAL_JUMP)  ; LAB_005b4860
    JMP 0x005b4880                      ; 005b4891
        ;   XREF to: 005b4880 (UNCONDITIONAL_JUMP)  ; LAB_005b4880
    IMUL ECX,dword ptr [ESP + 0xa8],0xa ; 005b4893
        ;   Label: LAB_005b4893
    XOR EDX,EDX                         ; 005b489b
    MOV DL,BH                           ; 005b489d
    SUB EDX,0x30                        ; 005b489f
    ADD ECX,EDX                         ; 005b48a2
    INC EAX                             ; 005b48a4
    MOV dword ptr [ESP + 0xa8],ECX      ; 005b48a5
    MOV BH,byte ptr [EAX]               ; 005b48ac
        ;   Label: LAB_005b48ac
    CMP BH,0x30                         ; 005b48ae
    JC 0x005b48b8                       ; 005b48b1
        ;   XREF to: 005b48b8 (CONDITIONAL_JUMP)  ; LAB_005b48b8
    CMP BH,0x39                         ; 005b48b3
    JBE 0x005b4893                      ; 005b48b6
        ;   XREF to: 005b4893 (CONDITIONAL_JUMP)  ; LAB_005b4893
    CMP dword ptr [ESP + 0x94],0x190    ; 005b48b8
        ;   Label: LAB_005b48b8
    JLE 0x005b4966                      ; 005b48c3
        ;   XREF to: 005b4966 (CONDITIONAL_JUMP)  ; LAB_005b4966
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005b48c9
        ;   Label: LAB_005b48c9
    MOV EBP,dword ptr [ESP + 0xa8]      ; 005b48d0
    ADD EAX,EAX                         ; 005b48d7
    ADD EBP,EBP                         ; 005b48d9
    MOV dword ptr [ESP + 0xa4],EAX      ; 005b48db
    MOV dword ptr [ESP + 0xa8],EBP      ; 005b48e2
    MOV EAX,dword ptr [ESP + 0x94]      ; 005b48e9
        ;   Label: LAB_005b48e9
    MOV EDX,EAX                         ; 005b48f0
    SAR EDX,0x1f                        ; 005b48f2
    SUB EAX,EDX                         ; 005b48f5
    SAR EAX,0x1                         ; 005b48f7
    MOV EBX,EAX                         ; 005b48f9
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005b48fb
    MOV EDX,EAX                         ; 005b4902
    SAR EDX,0x1f                        ; 005b4904
    SUB EAX,EDX                         ; 005b4907
    SAR EAX,0x1                         ; 005b4909
    SUB EBX,EAX                         ; 005b490b
    MOV EAX,dword ptr [ESP + 0x98]      ; 005b490d
    MOV EDX,EAX                         ; 005b4914
    SAR EDX,0x1f                        ; 005b4916
    SUB EAX,EDX                         ; 005b4919
    SAR EAX,0x1                         ; 005b491b
    MOV ECX,EAX                         ; 005b491d
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005b491f
    MOV EDX,EAX                         ; 005b4926
    SAR EDX,0x1f                        ; 005b4928
    SUB EAX,EDX                         ; 005b492b
    SAR EAX,0x1                         ; 005b492d
    PUSH 0x1                            ; 005b492f
    MOV EDX,dword ptr [ESP + 0xac]      ; 005b4931
    PUSH EDX                            ; 005b4938
    MOV ESI,dword ptr [ESP + 0xac]      ; 005b4939
    PUSH ESI                            ; 005b4940
    SUB ECX,EAX                         ; 005b4941
    PUSH ECX                            ; 005b4943
    PUSH EBX                            ; 005b4944
    MOV EDI,dword ptr [0x02c9d298]      ; 005b4945 | DAT_02c9d298
    PUSH EDI                            ; 005b494b
    CALL dword ptr CS:[0x5d04e0]        ; 005b494c
    POP EBX                             ; 005b4953
    POP ESI                             ; 005b4954
    POP EDI                             ; 005b4955
    ADD ESP,0xa0                        ; 005b4956
    POP EBP                             ; 005b495c
    RET                                 ; 005b495d
    PUSH EDI                            ; 005b495e
        ;   Label: LAB_005b495e
    PUSH ESI                            ; 005b495f
    PUSH EBX                            ; 005b4960
    JMP 0x005b48ac                      ; 005b4961
        ;   XREF to: 005b48ac (UNCONDITIONAL_JUMP)  ; LAB_005b48ac
    CMP dword ptr [ESP + 0x98],0x12c    ; 005b4966
        ;   Label: LAB_005b4966
    JG 0x005b48c9                       ; 005b4971
        ;   XREF to: 005b48c9 (CONDITIONAL_JUMP)  ; LAB_005b48c9
    JMP 0x005b48e9                      ; 005b4977
        ;   XREF to: 005b48e9 (UNCONDITIONAL_JUMP)  ; LAB_005b48e9

