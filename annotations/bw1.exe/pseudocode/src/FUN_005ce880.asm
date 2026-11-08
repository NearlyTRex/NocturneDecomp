; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005ce880(char *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005ce6dc at 005ce778
;
; Referenced Globals:
;   undefined4 DAT_02c9f6d0
;   undefined4 DAT_02c9f6d4
;
; Called Functions:
;   FUN_005c09f0
;   FUN_005c12b0
;   FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ce880
        ;   Label: FUN_005ce880
    PUSH ESI                            ; 005ce881
    PUSH EDI                            ; 005ce882
    PUSH EBP                            ; 005ce883
    MOV EBP,dword ptr [0x02c9f6d4]      ; 005ce884 | DAT_02c9f6d4
    JMP 0x005ce969                      ; 005ce88a
        ;   XREF to: 005ce969 (UNCONDITIONAL_JUMP)  ; LAB_005ce969
    MOV ESI,dword ptr [ESP + 0x14]      ; 005ce88f
        ;   Label: LAB_005ce88f
    CMP byte ptr [ESI],0x0              ; 005ce893
    JZ 0x005ce966                       ; 005ce896
        ;   XREF to: 005ce966 (CONDITIONAL_JUMP)  ; LAB_005ce966
    XOR EAX,EAX                         ; 005ce89c
        ;   Label: LAB_005ce89c
    MOV AL,byte ptr [EBX]               ; 005ce89e
    PUSH EAX                            ; 005ce8a0
    CALL FUN_005c12b0                   ; 005ce8a1
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c12b0()
    MOV EDI,EAX                         ; 005ce8a6
    XOR EAX,EAX                         ; 005ce8a8
    ADD ESP,0x4                         ; 005ce8aa
    MOV AL,byte ptr [ESI]               ; 005ce8ad
    PUSH EAX                            ; 005ce8af
    CALL FUN_005c12b0                   ; 005ce8b0
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c12b0()
    ADD ESP,0x4                         ; 005ce8b5
    CMP EDI,EAX                         ; 005ce8b8
    JNZ 0x005ce966                      ; 005ce8ba
        ;   XREF to: 005ce966 (CONDITIONAL_JUMP)  ; LAB_005ce966
    CMP byte ptr [EBX],0x3d             ; 005ce8c0
    JNZ 0x005ce959                      ; 005ce8c3
        ;   XREF to: 005ce959 (CONDITIONAL_JUMP)  ; LAB_005ce959
    MOV EDX,dword ptr [0x02c9f6d4]      ; 005ce8c9 | DAT_02c9f6d4
    MOV ESI,EBP                         ; 005ce8cf
    SUB ESI,EDX                         ; 005ce8d1
    MOV EBX,dword ptr [ESP + 0x18]      ; 005ce8d3
    SAR ESI,0x2                         ; 005ce8d7
    TEST EBX,EBX                        ; 005ce8da
    JZ 0x005ce951                       ; 005ce8dc
        ;   XREF to: 005ce951 (CONDITIONAL_JUMP)  ; LAB_005ce951
    MOV EDI,dword ptr [EBP]             ; 005ce8e2
    MOV EBX,EBP                         ; 005ce8e5
    TEST EDI,EDI                        ; 005ce8e7
    JZ 0x005ce8fa                       ; 005ce8e9
        ;   XREF to: 005ce8fa (CONDITIONAL_JUMP)  ; LAB_005ce8fa
    MOV EAX,dword ptr [EBX + 0x4]       ; 005ce8eb
        ;   Label: LAB_005ce8eb
    MOV dword ptr [EBX],EAX             ; 005ce8ee
    MOV ECX,dword ptr [EBX + 0x4]       ; 005ce8f0
    ADD EBX,0x4                         ; 005ce8f3
    TEST ECX,ECX                        ; 005ce8f6
    JNZ 0x005ce8eb                      ; 005ce8f8
        ;   XREF to: 005ce8eb (CONDITIONAL_JUMP)  ; LAB_005ce8eb
    MOV EBP,dword ptr [0x02c9f6d0]      ; 005ce8fa | DAT_02c9f6d0
        ;   Label: LAB_005ce8fa
    TEST EBP,EBP                        ; 005ce900
    JZ 0x005ce94a                       ; 005ce902
        ;   XREF to: 005ce94a (CONDITIONAL_JUMP)  ; LAB_005ce94a
    MOV EAX,EBP                         ; 005ce904
    CMP byte ptr [ESI + EAX*0x1],0x0    ; 005ce906
    JZ 0x005ce915                       ; 005ce90a
        ;   XREF to: 005ce915 (CONDITIONAL_JUMP)  ; LAB_005ce915
    PUSH EDI                            ; 005ce90c
    CALL FUN_005c09f0                   ; 005ce90d
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 005ce912
    MOV EAX,[0x02c9f6d4]                ; 005ce915 | DAT_02c9f6d4
        ;   Label: LAB_005ce915
    MOV EDI,EBX                         ; 005ce91a
    SUB EDI,EAX                         ; 005ce91c
    SAR EDI,0x2                         ; 005ce91e
    PUSH EDI                            ; 005ce921
    MOV EDX,dword ptr [0x02c9f6d0]      ; 005ce922 | DAT_02c9f6d0
    PUSH EDX                            ; 005ce928
    PUSH EBX                            ; 005ce929
    CALL FUN_005c25d0                   ; 005ce92a
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 005ce92f
    MOV dword ptr [0x02c9f6d0],EBX      ; 005ce932 | DAT_02c9f6d0
    CMP ESI,EDI                         ; 005ce938
    JGE 0x005ce94a                      ; 005ce93a
        ;   XREF to: 005ce94a (CONDITIONAL_JUMP)  ; LAB_005ce94a
    LEA EAX,[ESI + EBX*0x1]             ; 005ce93c
    INC EAX                             ; 005ce93f
        ;   Label: LAB_005ce93f
    MOV BL,byte ptr [EAX]               ; 005ce940
    INC ESI                             ; 005ce942
    MOV byte ptr [EAX + -0x1],BL        ; 005ce943
    CMP ESI,EDI                         ; 005ce946
    JL 0x005ce93f                       ; 005ce948
        ;   XREF to: 005ce93f (CONDITIONAL_JUMP)  ; LAB_005ce93f
    XOR EAX,EAX                         ; 005ce94a
        ;   Label: LAB_005ce94a
    POP EBP                             ; 005ce94c
    POP EDI                             ; 005ce94d
    POP ESI                             ; 005ce94e
    POP EBX                             ; 005ce94f
    RET                                 ; 005ce950
    LEA EAX,[ESI + 0x1]                 ; 005ce951
        ;   Label: LAB_005ce951
    POP EBP                             ; 005ce954
    POP EDI                             ; 005ce955
    POP ESI                             ; 005ce956
    POP EBX                             ; 005ce957
    RET                                 ; 005ce958
    INC EBX                             ; 005ce959
        ;   Label: LAB_005ce959
    MOV DH,byte ptr [ESI + 0x1]         ; 005ce95a
    INC ESI                             ; 005ce95d
    TEST DH,DH                          ; 005ce95e
    JNZ 0x005ce89c                      ; 005ce960
        ;   XREF to: 005ce89c (CONDITIONAL_JUMP)  ; LAB_005ce89c
    ADD EBP,0x4                         ; 005ce966
        ;   Label: LAB_005ce966
    MOV EBX,dword ptr [EBP]             ; 005ce969
        ;   Label: LAB_005ce969
    TEST EBX,EBX                        ; 005ce96c
    JNZ 0x005ce88f                      ; 005ce96e
        ;   XREF to: 005ce88f (CONDITIONAL_JUMP)  ; LAB_005ce88f
    MOV EAX,[0x02c9f6d4]                ; 005ce974 | DAT_02c9f6d4
    SUB EAX,EBP                         ; 005ce979
    SAR EAX,0x2                         ; 005ce97b
    POP EBP                             ; 005ce97e
    POP EDI                             ; 005ce97f
    POP ESI                             ; 005ce980
    POP EBX                             ; 005ce981
    RET                                 ; 005ce982

