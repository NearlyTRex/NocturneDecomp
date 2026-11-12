; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_process_FUN_0059b5a0(CAudioRecPuzzle *this_ptr)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_ExitFromPuzzle_005ef58b+1
;   undefined4 DAT_005ef59c
;   undefined4 DAT_006141f0
;   undefined4 DAT_00617dd4
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;   undefined4 DAT_01d02f84
;   undefined4 DAT_026677e4
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0
;   core_zombie.cpp_FUN_0059ab70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b5a0
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_process_FUN_0059b5a0
    PUSH ESI                            ; 0059b5a1
    PUSH EDI                            ; 0059b5a2
    PUSH EBP                            ; 0059b5a3
    SUB ESP,0x4                         ; 0059b5a4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0059b5a7
    CMP dword ptr [EBX + 0x44],0x0      ; 0059b5ab
    JZ 0x0059b701                       ; 0059b5af
        ;   XREF to: 0059b701 (CONDITIONAL_JUMP)  ; LAB_0059b701
    MOV ESI,dword ptr [EBX + 0x24]      ; 0059b5b5
        ;   Label: LAB_0059b5b5
    TEST ESI,ESI                        ; 0059b5b8
    JZ 0x0059b80a                       ; 0059b5ba
        ;   XREF to: 0059b80a (CONDITIONAL_JUMP)  ; LAB_0059b80a
    CMP dword ptr [EBX + 0x2c],0x0      ; 0059b5c0
    JZ 0x0059b738                       ; 0059b5c4
        ;   XREF to: 0059b738 (CONDITIONAL_JUMP)  ; LAB_0059b738
    MOV EDX,dword ptr [EBX + 0x20]      ; 0059b5ca
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059b5cd
    SUB EAX,EDX                         ; 0059b5d4
    SHL EAX,0x2                         ; 0059b5d6
    SUB EAX,EDX                         ; 0059b5d9
    SHL EAX,0x2                         ; 0059b5db
    ADD EAX,EBX                         ; 0059b5de
    MOV EDX,dword ptr [EAX + 0x60]      ; 0059b5e0
    CMP EDX,0x2                         ; 0059b5e3
    JNZ 0x0059b79e                      ; 0059b5e6
        ;   XREF to: 0059b79e (CONDITIONAL_JUMP)  ; LAB_0059b79e
    CMP dword ptr [0x026677e4],-0x1     ; 0059b5ec | DAT_026677e4
    JNZ 0x0059b5ff                      ; 0059b5f3
        ;   XREF to: 0059b5ff (CONDITIONAL_JUMP)  ; LAB_0059b5ff
    MOV EAX,[0x01c2a37c]                ; 0059b5f5 | DAT_01c2a37c
    MOV [0x026677e4],EAX                ; 0059b5fa | DAT_026677e4
    MOV EAX,[0x01c2a37c]                ; 0059b5ff | DAT_01c2a37c
        ;   Label: LAB_0059b5ff
    MOV EDI,dword ptr [0x026677e4]      ; 0059b604 | DAT_026677e4
    SUB EAX,EDI                         ; 0059b60a
    MOV dword ptr [ESP],EAX             ; 0059b60c
    FILD dword ptr [ESP]                ; 0059b60f
    FABS                                ; 0059b612
    FCOMP double ptr [0x005ef59c]       ; 0059b614 | DAT_005ef59c
    FNSTSW AX                           ; 0059b61a
    SAHF                                ; 0059b61c
    JBE 0x0059b640                      ; 0059b61d
        ;   XREF to: 0059b640 (CONDITIONAL_JUMP)  ; LAB_0059b640
    PUSH EBX                            ; 0059b61f
    MOV EAX,dword ptr [EBX]             ; 0059b620
    XOR ESI,ESI                         ; 0059b622
    CALL dword ptr [EAX + 0x34]         ; 0059b624
    ADD ESP,0x4                         ; 0059b627
    PUSH ESI                            ; 0059b62a
        ;   Label: LAB_0059b62a
    MOV EAX,dword ptr [EBX]             ; 0059b62b
    PUSH EBX                            ; 0059b62d
    INC ESI                             ; 0059b62e
    CALL dword ptr [EAX + 0x38]         ; 0059b62f
    ADD ESP,0x8                         ; 0059b632
    CMP ESI,0x3                         ; 0059b635
    JL 0x0059b62a                       ; 0059b638
        ;   XREF to: 0059b62a (CONDITIONAL_JUMP)  ; LAB_0059b62a
    LEA EAX,[EAX]                       ; 0059b63a
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0059b640
        ;   Label: LAB_0059b640
    XOR EAX,EAX                         ; 0059b643
    TEST ECX,ECX                        ; 0059b645
    JLE 0x0059b660                      ; 0059b647
        ;   XREF to: 0059b660 (CONDITIONAL_JUMP)  ; LAB_0059b660
    MOV ESI,EBX                         ; 0059b649
    MOV dword ptr [ESI + 0x74],0x0      ; 0059b64b
        ;   Label: LAB_0059b64b
    INC EAX                             ; 0059b652
    MOV EDI,dword ptr [EBX + 0x1c]      ; 0059b653
    ADD ESI,0x2c                        ; 0059b656
    CMP EAX,EDI                         ; 0059b659
    JL 0x0059b64b                       ; 0059b65b
        ;   XREF to: 0059b64b (CONDITIONAL_JUMP)  ; LAB_0059b64b
    LEA EAX,[EAX]                       ; 0059b65d
    MOV EDX,dword ptr [EBX + 0x40]      ; 0059b660
        ;   Label: LAB_0059b660
    ADD EDX,0x5                         ; 0059b663
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059b666
    SUB EAX,EDX                         ; 0059b66d
    SHL EAX,0x2                         ; 0059b66f
    SUB EAX,EDX                         ; 0059b672
    MOV dword ptr [EBX + EAX*0x4 + 0x74],0x1 ; 0059b674
    MOV EDX,dword ptr [EBX + 0x30]      ; 0059b67c
    ADD EDX,0x2                         ; 0059b67f
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059b682
    SUB EAX,EDX                         ; 0059b689
    SHL EAX,0x2                         ; 0059b68b
    SUB EAX,EDX                         ; 0059b68e
    MOV dword ptr [EBX + EAX*0x4 + 0x74],0x1 ; 0059b690
    MOV EBP,dword ptr [EBX + 0x30]      ; 0059b698
    CMP EBP,0x1                         ; 0059b69b
    JZ 0x0059b8dd                       ; 0059b69e
        ;   XREF to: 0059b8dd (CONDITIONAL_JUMP)  ; LAB_0059b8dd
    MOV dword ptr [EBX + 0x22c],0x1     ; 0059b6a4
    CMP dword ptr [EBX + 0x44],0x0      ; 0059b6ae
        ;   Label: LAB_0059b6ae
    JNZ 0x0059b8e8                      ; 0059b6b2
        ;   XREF to: 0059b8e8 (CONDITIONAL_JUMP)  ; LAB_0059b8e8
    MOV dword ptr [EBX + 0xa0],0x1      ; 0059b6b8
    MOV EDI,EBX                         ; 0059b6c2
        ;   Label: LAB_0059b6c2
    XOR ESI,ESI                         ; 0059b6c4
    ADD EBX,0x210                       ; 0059b6c6
    MOV ECX,EDI                         ; 0059b6cc
        ;   Label: LAB_0059b6cc
    LEA EDX,[EBX + ESI*0x1]             ; 0059b6ce
    XOR EAX,EAX                         ; 0059b6d1
    CMP EAX,dword ptr [ECX + 0x34]      ; 0059b6d3
        ;   Label: LAB_0059b6d3
    JNZ 0x0059b6df                      ; 0059b6d6
        ;   XREF to: 0059b6df (CONDITIONAL_JUMP)  ; LAB_0059b6df
    MOV dword ptr [EDX + 0x74],0x1      ; 0059b6d8
    INC EAX                             ; 0059b6df
        ;   Label: LAB_0059b6df
    ADD EDX,0x2c                        ; 0059b6e0
    CMP EAX,0x5                         ; 0059b6e3
    JL 0x0059b6d3                       ; 0059b6e6
        ;   XREF to: 0059b6d3 (CONDITIONAL_JUMP)  ; LAB_0059b6d3
    ADD ESI,0xdc                        ; 0059b6e8
    ADD EDI,0x4                         ; 0059b6ee
    CMP ESI,0x294                       ; 0059b6f1
    JNZ 0x0059b6cc                      ; 0059b6f7
        ;   XREF to: 0059b6cc (CONDITIONAL_JUMP)  ; LAB_0059b6cc
    ADD ESP,0x4                         ; 0059b6f9
    POP EBP                             ; 0059b6fc
    POP EDI                             ; 0059b6fd
    POP ESI                             ; 0059b6fe
    POP EBX                             ; 0059b6ff
    RET                                 ; 0059b700
    PUSH 0x5ef58c                       ; 0059b701 | s_ExitFromPuzzle_005ef58b+1
        ;   Label: LAB_0059b701
    MOV ECX,dword ptr [0x006141f0]      ; 0059b706 | DAT_006141f0
    PUSH ECX                            ; 0059b70c
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 0059b70d
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0059b712
    PUSH 0x0                            ; 0059b715
    PUSH EBX                            ; 0059b717
    CALL core_zombie.cpp_FUN_0059ab70   ; 0059b718
        ;   XREF to: 0059ab70 (UNCONDITIONAL_CALL)  ; undefined core_zombie.cpp_FUN_0059ab70()
    ADD ESP,0x8                         ; 0059b71d
    MOV EAX,[0x00617dd4]                ; 0059b720 | DAT_00617dd4
    PUSH 0x200                          ; 0059b725
    MOV EDX,dword ptr [EAX]             ; 0059b72a | DAT_01d02f84
    PUSH EAX                            ; 0059b72c | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 0059b72d
    ADD ESP,0x8                         ; 0059b730
    JMP 0x0059b5b5                      ; 0059b733
        ;   XREF to: 0059b5b5 (UNCONDITIONAL_JUMP)  ; LAB_0059b5b5
    MOV ECX,dword ptr [0x01c2a380]      ; 0059b738 | DAT_01c2a380
        ;   Label: LAB_0059b738
    PUSH ECX                            ; 0059b73e
    MOV ESI,dword ptr [0x01c2a37c]      ; 0059b73f | DAT_01c2a37c
    PUSH ESI                            ; 0059b745
    MOV EAX,dword ptr [EBX]             ; 0059b746
    PUSH EBX                            ; 0059b748
    MOV dword ptr [EBX + 0x2c],0x1      ; 0059b749
    CALL dword ptr [EAX + 0x2c]         ; 0059b750
    ADD ESP,0xc                         ; 0059b753
    TEST EAX,EAX                        ; 0059b756
    JZ 0x0059b784                       ; 0059b758
        ;   XREF to: 0059b784 (CONDITIONAL_JUMP)  ; LAB_0059b784
    MOV EDX,dword ptr [EBX + 0x20]      ; 0059b75a
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059b75d
    SUB EAX,EDX                         ; 0059b764
    SHL EAX,0x2                         ; 0059b766
    SUB EAX,EDX                         ; 0059b769
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x60] ; 0059b76b
    CMP EBP,0x1                         ; 0059b76f
    JNZ 0x0059b640                      ; 0059b772
        ;   XREF to: 0059b640 (CONDITIONAL_JUMP)  ; LAB_0059b640
    TEST EDX,EDX                        ; 0059b778
    JNZ 0x0059b796                      ; 0059b77a
        ;   XREF to: 0059b796 (CONDITIONAL_JUMP)  ; LAB_0059b796
    MOV dword ptr [EBX + 0x44],EDX      ; 0059b77c
    JMP 0x0059b640                      ; 0059b77f
        ;   XREF to: 0059b640 (UNCONDITIONAL_JUMP)  ; LAB_0059b640
    MOV dword ptr [0x026677e4],0xffffffff ; 0059b784 | DAT_026677e4
        ;   Label: LAB_0059b784
    ADD ESP,0x4                         ; 0059b78e
    POP EBP                             ; 0059b791
    POP EDI                             ; 0059b792
    POP ESI                             ; 0059b793
    POP EBX                             ; 0059b794
    RET                                 ; 0059b795
    MOV dword ptr [EBX + 0x44],EBP      ; 0059b796
        ;   Label: LAB_0059b796
    JMP 0x0059b640                      ; 0059b799
        ;   XREF to: 0059b640 (UNCONDITIONAL_JUMP)  ; LAB_0059b640
    CMP EDX,0x3                         ; 0059b79e
        ;   Label: LAB_0059b79e
    JNZ 0x0059b640                      ; 0059b7a1
        ;   XREF to: 0059b640 (CONDITIONAL_JUMP)  ; LAB_0059b640
    MOV ESI,0x5                         ; 0059b7a7
    XOR EDI,EDI                         ; 0059b7ac
    PUSH ESI                            ; 0059b7ae
        ;   Label: LAB_0059b7ae
    MOV EAX,dword ptr [EBX]             ; 0059b7af
    PUSH EBX                            ; 0059b7b1
    CALL dword ptr [EAX + 0x54]         ; 0059b7b2
    ADD ESP,0x8                         ; 0059b7b5
    TEST EAX,EAX                        ; 0059b7b8
    JZ 0x0059b7d2                       ; 0059b7ba
        ;   XREF to: 0059b7d2 (CONDITIONAL_JUMP)  ; LAB_0059b7d2
    LEA EAX,[ESI + -0x5]                ; 0059b7bc
    MOV dword ptr [EBX + 0x40],EAX      ; 0059b7bf
    CMP EAX,0x4                         ; 0059b7c2
    JGE 0x0059b7de                      ; 0059b7c5
        ;   XREF to: 0059b7de (CONDITIONAL_JUMP)  ; LAB_0059b7de
    CMP EDI,EAX                         ; 0059b7c7
    JGE 0x0059b7de                      ; 0059b7c9
        ;   XREF to: 0059b7de (CONDITIONAL_JUMP)  ; LAB_0059b7de
    MOV dword ptr [EBX + 0x18],0x1      ; 0059b7cb
    INC ESI                             ; 0059b7d2
        ;   Label: LAB_0059b7d2
    CMP ESI,0xa                         ; 0059b7d3
    JGE 0x0059b640                      ; 0059b7d6
        ;   XREF to: 0059b640 (CONDITIONAL_JUMP)  ; LAB_0059b640
    JMP 0x0059b7ae                      ; 0059b7dc
        ;   XREF to: 0059b7ae (UNCONDITIONAL_JUMP)  ; LAB_0059b7ae
    CMP dword ptr [EBX + 0x40],0x4      ; 0059b7de
        ;   Label: LAB_0059b7de
    JNZ 0x0059b7f7                      ; 0059b7e2
        ;   XREF to: 0059b7f7 (CONDITIONAL_JUMP)  ; LAB_0059b7f7
    MOV dword ptr [EBX + 0x18],0x2      ; 0059b7e4
    INC ESI                             ; 0059b7eb
    CMP ESI,0xa                         ; 0059b7ec
    JGE 0x0059b640                      ; 0059b7ef
        ;   XREF to: 0059b640 (CONDITIONAL_JUMP)  ; LAB_0059b640
    JMP 0x0059b7ae                      ; 0059b7f5
        ;   XREF to: 0059b7ae (UNCONDITIONAL_JUMP)  ; LAB_0059b7ae
    MOV dword ptr [EBX + 0x18],0x3      ; 0059b7f7
        ;   Label: LAB_0059b7f7
    INC ESI                             ; 0059b7fe
    CMP ESI,0xa                         ; 0059b7ff
    JGE 0x0059b640                      ; 0059b802
        ;   XREF to: 0059b640 (CONDITIONAL_JUMP)  ; LAB_0059b640
    JMP 0x0059b7ae                      ; 0059b808
        ;   XREF to: 0059b7ae (UNCONDITIONAL_JUMP)  ; LAB_0059b7ae
    CMP ESI,dword ptr [EBX + 0x28]      ; 0059b80a
        ;   Label: LAB_0059b80a
    JZ 0x0059b821                       ; 0059b80d
        ;   XREF to: 0059b821 (CONDITIONAL_JUMP)  ; LAB_0059b821
    MOV EBP,0xffffffff                  ; 0059b80f
    MOV dword ptr [EBX + 0x20],0xffffffff ; 0059b814
    MOV dword ptr [0x026677e4],EBP      ; 0059b81b | DAT_026677e4
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0059b821
        ;   Label: LAB_0059b821
    MOV dword ptr [EBX + 0x18],0x0      ; 0059b824
    XOR ESI,ESI                         ; 0059b82b
    TEST EAX,EAX                        ; 0059b82d
    JLE 0x0059b640                      ; 0059b82f
        ;   XREF to: 0059b640 (CONDITIONAL_JUMP)  ; LAB_0059b640
    MOV EDI,EBX                         ; 0059b835
    CMP dword ptr [EDI + 0x74],0x1      ; 0059b837
        ;   Label: LAB_0059b837
    JNZ 0x0059b86d                      ; 0059b83b
        ;   XREF to: 0059b86d (CONDITIONAL_JUMP)  ; LAB_0059b86d
    MOV EDX,dword ptr [EDI + 0x60]      ; 0059b83d
    CMP EDX,0x2                         ; 0059b840
    JNZ 0x0059b87e                      ; 0059b843
        ;   XREF to: 0059b87e (CONDITIONAL_JUMP)  ; LAB_0059b87e
    PUSH ESI                            ; 0059b845
        ;   Label: LAB_0059b845
    MOV EAX,dword ptr [EBX]             ; 0059b846
    PUSH EBX                            ; 0059b848
    CALL dword ptr [EAX + 0x54]         ; 0059b849
    ADD ESP,0x8                         ; 0059b84c
    TEST EAX,EAX                        ; 0059b84f
    JZ 0x0059b86d                       ; 0059b851
        ;   XREF to: 0059b86d (CONDITIONAL_JUMP)  ; LAB_0059b86d
    CMP ESI,0xc                         ; 0059b853
    JNC 0x0059b897                      ; 0059b856
        ;   XREF to: 0059b897 (CONDITIONAL_JUMP)  ; LAB_0059b897
    CMP ESI,0x4                         ; 0059b858
    JNC 0x0059b8c8                      ; 0059b85b
        ;   XREF to: 0059b8c8 (CONDITIONAL_JUMP)  ; LAB_0059b8c8
    CMP ESI,0x2                         ; 0059b861
    JNZ 0x0059b88e                      ; 0059b864
        ;   XREF to: 0059b88e (CONDITIONAL_JUMP)  ; LAB_0059b88e
    MOV dword ptr [EBX + 0x18],0x3      ; 0059b866
        ;   Label: LAB_0059b866
    INC ESI                             ; 0059b86d
        ;   Label: LAB_0059b86d
    MOV EBP,dword ptr [EBX + 0x1c]      ; 0059b86e
    ADD EDI,0x2c                        ; 0059b871
    CMP ESI,EBP                         ; 0059b874
    JGE 0x0059b640                      ; 0059b876
        ;   XREF to: 0059b640 (CONDITIONAL_JUMP)  ; LAB_0059b640
    JMP 0x0059b837                      ; 0059b87c
        ;   XREF to: 0059b837 (UNCONDITIONAL_JUMP)  ; LAB_0059b837
    CMP EDX,0x3                         ; 0059b87e
        ;   Label: LAB_0059b87e
    JZ 0x0059b845                       ; 0059b881
        ;   XREF to: 0059b845 (CONDITIONAL_JUMP)  ; LAB_0059b845
    JMP 0x0059b86d                      ; 0059b883
        ;   XREF to: 0059b86d (UNCONDITIONAL_JUMP)  ; LAB_0059b86d
    MOV dword ptr [EBX + 0x18],0x2      ; 0059b885
        ;   Label: LAB_0059b885
    JMP 0x0059b86d                      ; 0059b88c
        ;   XREF to: 0059b86d (UNCONDITIONAL_JUMP)  ; LAB_0059b86d
    MOV dword ptr [EBX + 0x18],0x1      ; 0059b88e
        ;   Label: LAB_0059b88e
    JMP 0x0059b86d                      ; 0059b895
        ;   XREF to: 0059b86d (UNCONDITIONAL_JUMP)  ; LAB_0059b86d
    JBE 0x0059b866                      ; 0059b897
        ;   XREF to: 0059b866 (CONDITIONAL_JUMP)  ; LAB_0059b866
        ;   Label: LAB_0059b897
    CMP ESI,0x15                        ; 0059b899
    JNC 0x0059b8b3                      ; 0059b89c
        ;   XREF to: 0059b8b3 (CONDITIONAL_JUMP)  ; LAB_0059b8b3
    CMP ESI,0x10                        ; 0059b89e
    JC 0x0059b88e                       ; 0059b8a1
        ;   XREF to: 0059b88e (CONDITIONAL_JUMP)  ; LAB_0059b88e
    JBE 0x0059b885                      ; 0059b8a3
        ;   XREF to: 0059b885 (CONDITIONAL_JUMP)  ; LAB_0059b885
    CMP ESI,0x11                        ; 0059b8a5
    JZ 0x0059b866                       ; 0059b8a8
        ;   XREF to: 0059b866 (CONDITIONAL_JUMP)  ; LAB_0059b866
    MOV dword ptr [EBX + 0x18],0x1      ; 0059b8aa
    JMP 0x0059b86d                      ; 0059b8b1
        ;   XREF to: 0059b86d (UNCONDITIONAL_JUMP)  ; LAB_0059b86d
    JBE 0x0059b885                      ; 0059b8b3
        ;   XREF to: 0059b885 (CONDITIONAL_JUMP)  ; LAB_0059b885
        ;   Label: LAB_0059b8b3
    CMP ESI,0x16                        ; 0059b8b5
    JBE 0x0059b866                      ; 0059b8b8
        ;   XREF to: 0059b866 (CONDITIONAL_JUMP)  ; LAB_0059b866
    CMP ESI,0x1a                        ; 0059b8ba
    JZ 0x0059b885                       ; 0059b8bd
        ;   XREF to: 0059b885 (CONDITIONAL_JUMP)  ; LAB_0059b885
    MOV dword ptr [EBX + 0x18],0x1      ; 0059b8bf
    JMP 0x0059b86d                      ; 0059b8c6
        ;   XREF to: 0059b86d (UNCONDITIONAL_JUMP)  ; LAB_0059b86d
    JBE 0x0059b885                      ; 0059b8c8
        ;   XREF to: 0059b885 (CONDITIONAL_JUMP)  ; LAB_0059b885
        ;   Label: LAB_0059b8c8
    CMP ESI,0x5                         ; 0059b8ca
    JBE 0x0059b866                      ; 0059b8cd
        ;   XREF to: 0059b866 (CONDITIONAL_JUMP)  ; LAB_0059b866
    CMP ESI,0x9                         ; 0059b8cf
    JZ 0x0059b885                       ; 0059b8d2
        ;   XREF to: 0059b885 (CONDITIONAL_JUMP)  ; LAB_0059b885
    MOV dword ptr [EBX + 0x18],0x1      ; 0059b8d4
    JMP 0x0059b86d                      ; 0059b8db
        ;   XREF to: 0059b86d (UNCONDITIONAL_JUMP)  ; LAB_0059b86d
    MOV dword ptr [EBX + 0x258],EBP     ; 0059b8dd
        ;   Label: LAB_0059b8dd
    JMP 0x0059b6ae                      ; 0059b8e3
        ;   XREF to: 0059b6ae (UNCONDITIONAL_JUMP)  ; LAB_0059b6ae
    MOV dword ptr [EBX + 0x74],0x1      ; 0059b8e8
        ;   Label: LAB_0059b8e8
    JMP 0x0059b6c2                      ; 0059b8ef
        ;   XREF to: 0059b6c2 (UNCONDITIONAL_JUMP)  ; LAB_0059b6c2

