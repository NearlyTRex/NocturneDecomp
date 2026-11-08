; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bb75c(char *param_1,uint param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005bb938 at 005bbba6
;
; Called Functions:
;   FUN_005bafd8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bb75c
        ;   Label: FUN_005bb75c
    PUSH ESI                            ; 005bb75d
    PUSH EDI                            ; 005bb75e
    PUSH EBP                            ; 005bb75f
    SUB ESP,0x4                         ; 005bb760
    MOV EBX,dword ptr [ESP + 0x18]      ; 005bb763
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005bb767
    MOV ESI,dword ptr [ESP + 0x20]      ; 005bb76b
    MOV dword ptr [ESP],EAX             ; 005bb76f
    TEST EAX,EAX                        ; 005bb772
    JGE 0x005bb781                      ; 005bb774
        ;   XREF to: 005bb781 (CONDITIONAL_JUMP)  ; LAB_005bb781
    MOV EDX,EAX                         ; 005bb776
    MOV byte ptr [EBX],0x2d             ; 005bb778
    NEG EDX                             ; 005bb77b
    INC EBX                             ; 005bb77d
    MOV dword ptr [ESP],EDX             ; 005bb77e
    CMP dword ptr [ESI + 0x8],-0x1      ; 005bb781
        ;   Label: LAB_005bb781
    JNZ 0x005bb78e                      ; 005bb785
        ;   XREF to: 005bb78e (CONDITIONAL_JUMP)  ; LAB_005bb78e
    MOV dword ptr [ESI + 0x8],0x4       ; 005bb787
    PUSH 0xa                            ; 005bb78e
        ;   Label: LAB_005bb78e
    XOR EAX,EAX                         ; 005bb790
    PUSH EBX                            ; 005bb792
    MOV AX,word ptr [ESP + 0xa]         ; 005bb793
    PUSH EAX                            ; 005bb798
    CALL FUN_005bafd8                   ; 005bb799
        ;   XREF to: 005bafd8 (UNCONDITIONAL_CALL)  ; undefined FUN_005bafd8()
    ADD ESP,0xc                         ; 005bb79e
    MOV AH,byte ptr [EBX]               ; 005bb7a1
    MOV ECX,EBX                         ; 005bb7a3
    TEST AH,AH                          ; 005bb7a5
    JZ 0x005bb7b1                       ; 005bb7a7
        ;   XREF to: 005bb7b1 (CONDITIONAL_JUMP)  ; LAB_005bb7b1
    MOV DL,byte ptr [EBX + 0x1]         ; 005bb7a9
        ;   Label: LAB_005bb7a9
    INC EBX                             ; 005bb7ac
    TEST DL,DL                          ; 005bb7ad
    JNZ 0x005bb7a9                      ; 005bb7af
        ;   XREF to: 005bb7a9 (CONDITIONAL_JUMP)  ; LAB_005bb7a9
    CMP dword ptr [ESI + 0x8],0x0       ; 005bb7b1
        ;   Label: LAB_005bb7b1
    JZ 0x005bb7e9                       ; 005bb7b5
        ;   XREF to: 005bb7e9 (CONDITIONAL_JUMP)  ; LAB_005bb7e9
    MOV byte ptr [EBX],0x2e             ; 005bb7b7
    XOR EAX,EAX                         ; 005bb7ba
    MOV EBP,dword ptr [ESI + 0x8]       ; 005bb7bc
    INC EBX                             ; 005bb7bf
    TEST EBP,EBP                        ; 005bb7c0
    JLE 0x005bb7e6                      ; 005bb7c2
        ;   XREF to: 005bb7e6 (CONDITIONAL_JUMP)  ; LAB_005bb7e6
    XOR EDX,EDX                         ; 005bb7c4
        ;   Label: LAB_005bb7c4
    MOV word ptr [ESP + 0x2],DX         ; 005bb7c6
    MOV EDI,dword ptr [ESP]             ; 005bb7cb
    IMUL EDX,EDI,0xa                    ; 005bb7ce
    MOV dword ptr [ESP],EDX             ; 005bb7d1
    MOV DL,byte ptr [ESP + 0x2]         ; 005bb7d4
    ADD DL,0x30                         ; 005bb7d8
    MOV byte ptr [EBX],DL               ; 005bb7db
    INC EAX                             ; 005bb7dd
    MOV EBP,dword ptr [ESI + 0x8]       ; 005bb7de
    INC EBX                             ; 005bb7e1
    CMP EAX,EBP                         ; 005bb7e2
    JL 0x005bb7c4                       ; 005bb7e4
        ;   XREF to: 005bb7c4 (CONDITIONAL_JUMP)  ; LAB_005bb7c4
    MOV byte ptr [EBX],0x0              ; 005bb7e6
        ;   Label: LAB_005bb7e6
    TEST byte ptr [ESP + 0x1],0x80      ; 005bb7e9
        ;   Label: LAB_005bb7e9
    JZ 0x005bb857                       ; 005bb7ee
        ;   XREF to: 005bb857 (CONDITIONAL_JUMP)  ; LAB_005bb857
    CMP EBX,ECX                         ; 005bb7f4
        ;   Label: LAB_005bb7f4
    JNZ 0x005bb833                      ; 005bb7f6
        ;   XREF to: 005bb833 (CONDITIONAL_JUMP)  ; LAB_005bb833
    LEA EBX,[ECX + 0x1]                 ; 005bb7f8
    MOV byte ptr [ECX],0x31             ; 005bb7fb
    CMP byte ptr [EBX],0x30             ; 005bb7fe
    JNZ 0x005bb80b                      ; 005bb801
        ;   XREF to: 005bb80b (CONDITIONAL_JUMP)  ; LAB_005bb80b
    MOV AL,byte ptr [EBX + 0x1]         ; 005bb803
        ;   Label: LAB_005bb803
    INC EBX                             ; 005bb806
    CMP AL,0x30                         ; 005bb807
    JZ 0x005bb803                       ; 005bb809
        ;   XREF to: 005bb803 (CONDITIONAL_JUMP)  ; LAB_005bb803
    MOV AH,byte ptr [EBX]               ; 005bb80b
        ;   Label: LAB_005bb80b
    CMP AH,0x2e                         ; 005bb80d
    JNZ 0x005bb82a                      ; 005bb810
        ;   XREF to: 005bb82a (CONDITIONAL_JUMP)  ; LAB_005bb82a
    MOV byte ptr [EBX],0x30             ; 005bb812
    INC EBX                             ; 005bb815
    MOV byte ptr [EBX],AH               ; 005bb816
    MOV DL,byte ptr [EBX + 0x1]         ; 005bb818
    INC EBX                             ; 005bb81b
    CMP DL,0x30                         ; 005bb81c
    JNZ 0x005bb82a                      ; 005bb81f
        ;   XREF to: 005bb82a (CONDITIONAL_JUMP)  ; LAB_005bb82a
    MOV DH,byte ptr [EBX + 0x1]         ; 005bb821
        ;   Label: LAB_005bb821
    INC EBX                             ; 005bb824
    CMP DH,0x30                         ; 005bb825
    JZ 0x005bb821                       ; 005bb828
        ;   XREF to: 005bb821 (CONDITIONAL_JUMP)  ; LAB_005bb821
    MOV byte ptr [EBX],0x30             ; 005bb82a
        ;   Label: LAB_005bb82a
    INC EBX                             ; 005bb82d
    MOV byte ptr [EBX],0x0              ; 005bb82e
    JMP 0x005bb857                      ; 005bb831
        ;   XREF to: 005bb857 (UNCONDITIONAL_JUMP)  ; LAB_005bb857
    MOV DL,byte ptr [EBX + -0x1]        ; 005bb833
        ;   Label: LAB_005bb833
    DEC EBX                             ; 005bb836
    CMP DL,0x2e                         ; 005bb837
    JNZ 0x005bb83d                      ; 005bb83a
        ;   XREF to: 005bb83d (CONDITIONAL_JUMP)  ; LAB_005bb83d
    DEC EBX                             ; 005bb83c
    MOV DH,byte ptr [EBX]               ; 005bb83d
        ;   Label: LAB_005bb83d
    CMP DH,0x39                         ; 005bb83f
    JZ 0x005bb852                       ; 005bb842
        ;   XREF to: 005bb852 (CONDITIONAL_JUMP)  ; LAB_005bb852
    MOV CL,DH                           ; 005bb844
    INC CL                              ; 005bb846
    MOV byte ptr [EBX],CL               ; 005bb848
    ADD ESP,0x4                         ; 005bb84a
    POP EBP                             ; 005bb84d
    POP EDI                             ; 005bb84e
    POP ESI                             ; 005bb84f
    POP EBX                             ; 005bb850
    RET                                 ; 005bb851
    MOV byte ptr [EBX],0x30             ; 005bb852
        ;   Label: LAB_005bb852
    JMP 0x005bb7f4                      ; 005bb855
        ;   XREF to: 005bb7f4 (UNCONDITIONAL_JUMP)  ; LAB_005bb7f4
    ADD ESP,0x4                         ; 005bb857
        ;   Label: LAB_005bb857
    POP EBP                             ; 005bb85a
    POP EDI                             ; 005bb85b
    POP ESI                             ; 005bb85c
    POP EBX                             ; 005bb85d
    RET                                 ; 005bb85e

