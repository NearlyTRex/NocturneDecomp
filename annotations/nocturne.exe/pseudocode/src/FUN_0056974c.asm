; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056974c(char *param_1,uint param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00569928 at 00569b96
;
; Called Functions:
;   FUN_0056dc68
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056974c
        ;   Label: FUN_0056974c
    PUSH ESI                            ; 0056974d
    PUSH EDI                            ; 0056974e
    PUSH EBP                            ; 0056974f
    SUB ESP,0x4                         ; 00569750
    MOV EBX,dword ptr [ESP + 0x18]      ; 00569753
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00569757
    MOV ESI,dword ptr [ESP + 0x20]      ; 0056975b
    MOV dword ptr [ESP],EAX             ; 0056975f
    TEST EAX,EAX                        ; 00569762
    JGE 0x00569771                      ; 00569764
        ;   XREF to: 00569771 (CONDITIONAL_JUMP)  ; LAB_00569771
    MOV EDX,EAX                         ; 00569766
    MOV byte ptr [EBX],0x2d             ; 00569768
    NEG EDX                             ; 0056976b
    INC EBX                             ; 0056976d
    MOV dword ptr [ESP],EDX             ; 0056976e
    CMP dword ptr [ESI + 0x8],-0x1      ; 00569771
        ;   Label: LAB_00569771
    JNZ 0x0056977e                      ; 00569775
        ;   XREF to: 0056977e (CONDITIONAL_JUMP)  ; LAB_0056977e
    MOV dword ptr [ESI + 0x8],0x4       ; 00569777
    PUSH 0xa                            ; 0056977e
        ;   Label: LAB_0056977e
    XOR EAX,EAX                         ; 00569780
    PUSH EBX                            ; 00569782
    MOV AX,word ptr [ESP + 0xa]         ; 00569783
    PUSH EAX                            ; 00569788
    CALL FUN_0056dc68                   ; 00569789
        ;   XREF to: 0056dc68 (UNCONDITIONAL_CALL)  ; undefined FUN_0056dc68()
    ADD ESP,0xc                         ; 0056978e
    MOV AH,byte ptr [EBX]               ; 00569791
    MOV ECX,EBX                         ; 00569793
    TEST AH,AH                          ; 00569795
    JZ 0x005697a1                       ; 00569797
        ;   XREF to: 005697a1 (CONDITIONAL_JUMP)  ; LAB_005697a1
    MOV DL,byte ptr [EBX + 0x1]         ; 00569799
        ;   Label: LAB_00569799
    INC EBX                             ; 0056979c
    TEST DL,DL                          ; 0056979d
    JNZ 0x00569799                      ; 0056979f
        ;   XREF to: 00569799 (CONDITIONAL_JUMP)  ; LAB_00569799
    CMP dword ptr [ESI + 0x8],0x0       ; 005697a1
        ;   Label: LAB_005697a1
    JZ 0x005697d9                       ; 005697a5
        ;   XREF to: 005697d9 (CONDITIONAL_JUMP)  ; LAB_005697d9
    MOV byte ptr [EBX],0x2e             ; 005697a7
    XOR EAX,EAX                         ; 005697aa
    MOV EBP,dword ptr [ESI + 0x8]       ; 005697ac
    INC EBX                             ; 005697af
    TEST EBP,EBP                        ; 005697b0
    JLE 0x005697d6                      ; 005697b2
        ;   XREF to: 005697d6 (CONDITIONAL_JUMP)  ; LAB_005697d6
    XOR EDX,EDX                         ; 005697b4
        ;   Label: LAB_005697b4
    MOV word ptr [ESP + 0x2],DX         ; 005697b6
    MOV EDI,dword ptr [ESP]             ; 005697bb
    IMUL EDX,EDI,0xa                    ; 005697be
    MOV dword ptr [ESP],EDX             ; 005697c1
    MOV DL,byte ptr [ESP + 0x2]         ; 005697c4
    ADD DL,0x30                         ; 005697c8
    MOV byte ptr [EBX],DL               ; 005697cb
    INC EAX                             ; 005697cd
    MOV EBP,dword ptr [ESI + 0x8]       ; 005697ce
    INC EBX                             ; 005697d1
    CMP EAX,EBP                         ; 005697d2
    JL 0x005697b4                       ; 005697d4
        ;   XREF to: 005697b4 (CONDITIONAL_JUMP)  ; LAB_005697b4
    MOV byte ptr [EBX],0x0              ; 005697d6
        ;   Label: LAB_005697d6
    TEST byte ptr [ESP + 0x1],0x80      ; 005697d9
        ;   Label: LAB_005697d9
    JZ 0x00569847                       ; 005697de
        ;   XREF to: 00569847 (CONDITIONAL_JUMP)  ; LAB_00569847
    CMP EBX,ECX                         ; 005697e4
        ;   Label: LAB_005697e4
    JNZ 0x00569823                      ; 005697e6
        ;   XREF to: 00569823 (CONDITIONAL_JUMP)  ; LAB_00569823
    LEA EBX,[ECX + 0x1]                 ; 005697e8
    MOV byte ptr [ECX],0x31             ; 005697eb
    CMP byte ptr [EBX],0x30             ; 005697ee
    JNZ 0x005697fb                      ; 005697f1
        ;   XREF to: 005697fb (CONDITIONAL_JUMP)  ; LAB_005697fb
    MOV AL,byte ptr [EBX + 0x1]         ; 005697f3
        ;   Label: LAB_005697f3
    INC EBX                             ; 005697f6
    CMP AL,0x30                         ; 005697f7
    JZ 0x005697f3                       ; 005697f9
        ;   XREF to: 005697f3 (CONDITIONAL_JUMP)  ; LAB_005697f3
    MOV AH,byte ptr [EBX]               ; 005697fb
        ;   Label: LAB_005697fb
    CMP AH,0x2e                         ; 005697fd
    JNZ 0x0056981a                      ; 00569800
        ;   XREF to: 0056981a (CONDITIONAL_JUMP)  ; LAB_0056981a
    MOV byte ptr [EBX],0x30             ; 00569802
    INC EBX                             ; 00569805
    MOV byte ptr [EBX],AH               ; 00569806
    MOV DL,byte ptr [EBX + 0x1]         ; 00569808
    INC EBX                             ; 0056980b
    CMP DL,0x30                         ; 0056980c
    JNZ 0x0056981a                      ; 0056980f
        ;   XREF to: 0056981a (CONDITIONAL_JUMP)  ; LAB_0056981a
    MOV DH,byte ptr [EBX + 0x1]         ; 00569811
        ;   Label: LAB_00569811
    INC EBX                             ; 00569814
    CMP DH,0x30                         ; 00569815
    JZ 0x00569811                       ; 00569818
        ;   XREF to: 00569811 (CONDITIONAL_JUMP)  ; LAB_00569811
    MOV byte ptr [EBX],0x30             ; 0056981a
        ;   Label: LAB_0056981a
    INC EBX                             ; 0056981d
    MOV byte ptr [EBX],0x0              ; 0056981e
    JMP 0x00569847                      ; 00569821
        ;   XREF to: 00569847 (UNCONDITIONAL_JUMP)  ; LAB_00569847
    MOV DL,byte ptr [EBX + -0x1]        ; 00569823
        ;   Label: LAB_00569823
    DEC EBX                             ; 00569826
    CMP DL,0x2e                         ; 00569827
    JNZ 0x0056982d                      ; 0056982a
        ;   XREF to: 0056982d (CONDITIONAL_JUMP)  ; LAB_0056982d
    DEC EBX                             ; 0056982c
    MOV DH,byte ptr [EBX]               ; 0056982d
        ;   Label: LAB_0056982d
    CMP DH,0x39                         ; 0056982f
    JZ 0x00569842                       ; 00569832
        ;   XREF to: 00569842 (CONDITIONAL_JUMP)  ; LAB_00569842
    MOV CL,DH                           ; 00569834
    INC CL                              ; 00569836
    MOV byte ptr [EBX],CL               ; 00569838
    ADD ESP,0x4                         ; 0056983a
    POP EBP                             ; 0056983d
    POP EDI                             ; 0056983e
    POP ESI                             ; 0056983f
    POP EBX                             ; 00569840
    RET                                 ; 00569841
    MOV byte ptr [EBX],0x30             ; 00569842
        ;   Label: LAB_00569842
    JMP 0x005697e4                      ; 00569845
        ;   XREF to: 005697e4 (UNCONDITIONAL_JUMP)  ; LAB_005697e4
    ADD ESP,0x4                         ; 00569847
        ;   Label: LAB_00569847
    POP EBP                             ; 0056984a
    POP EDI                             ; 0056984b
    POP ESI                             ; 0056984c
    POP EBX                             ; 0056984d
    RET                                 ; 0056984e

