; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055e810(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02cf5840
;   undefined4 DAT_02cf5850
;
; Called Functions:
;   FUN_00482440
;   FUN_00486a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055e810
        ;   Label: FUN_0055e810
    PUSH ESI                            ; 0055e811
    PUSH EDI                            ; 0055e812
    PUSH EBP                            ; 0055e813
    MOV EBP,dword ptr [ESP + 0x14]      ; 0055e814
    XOR EDX,EDX                         ; 0055e818
    XOR EBX,EBX                         ; 0055e81a
    MOV dword ptr [0x02cf5850],EDX      ; 0055e81c | DAT_02cf5850
    MOV EAX,[0x02cf5840]                ; 0055e822 | DAT_02cf5840
    CMP EBX,EAX                         ; 0055e827
    JL 0x0055e830                       ; 0055e829
        ;   XREF to: 0055e830 (CONDITIONAL_JUMP)  ; LAB_0055e830
    POP EBP                             ; 0055e82b
        ;   Label: LAB_0055e82b
    POP EDI                             ; 0055e82c
    POP ESI                             ; 0055e82d
    POP EBX                             ; 0055e82e
    RET                                 ; 0055e82f
    PUSH 0x0                            ; 0055e830
        ;   Label: LAB_0055e830
    PUSH EBX                            ; 0055e832
    PUSH 0x2cf5840                      ; 0055e833
    CALL FUN_00482440                   ; 0055e838
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; undefined FUN_00482440()
    ADD ESP,0x8                         ; 0055e83d
    PUSH EAX                            ; 0055e840
    PUSH EBP                            ; 0055e841
    CALL FUN_00486a40                   ; 0055e842
        ;   XREF to: 00486a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00486a40()
    ADD ESP,0xc                         ; 0055e847
    TEST EAX,EAX                        ; 0055e84a
    JZ 0x0055e897                       ; 0055e84c
        ;   XREF to: 0055e897 (CONDITIONAL_JUMP)  ; LAB_0055e897
    PUSH EBX                            ; 0055e84e
    PUSH 0x2cf5840                      ; 0055e84f
    CALL FUN_00482440                   ; 0055e854
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; undefined FUN_00482440()
    IMUL EDI,dword ptr [0x02cf5850],0x28 ; 0055e859 | DAT_02cf5850
    ADD ESP,0x8                         ; 0055e860
    MOV ESI,EAX                         ; 0055e863
    ADD EDI,0x2cf5858                   ; 0055e865
    PUSH EDI                            ; 0055e86b
    MOV AL,byte ptr [ESI]               ; 0055e86c
        ;   Label: LAB_0055e86c
    MOV byte ptr [EDI],AL               ; 0055e86e
    CMP AL,0x0                          ; 0055e870
    JZ 0x0055e884                       ; 0055e872
        ;   XREF to: 0055e884 (CONDITIONAL_JUMP)  ; LAB_0055e884
    MOV AL,byte ptr [ESI + 0x1]         ; 0055e874
    ADD ESI,0x2                         ; 0055e877
    MOV byte ptr [EDI + 0x1],AL         ; 0055e87a
    ADD EDI,0x2                         ; 0055e87d
    CMP AL,0x0                          ; 0055e880
    JNZ 0x0055e86c                      ; 0055e882
        ;   XREF to: 0055e86c (CONDITIONAL_JUMP)  ; LAB_0055e86c
    POP EDI                             ; 0055e884
        ;   Label: LAB_0055e884
    MOV ESI,dword ptr [0x02cf5850]      ; 0055e885 | DAT_02cf5850
    INC ESI                             ; 0055e88b
    MOV dword ptr [0x02cf5850],ESI      ; 0055e88c | DAT_02cf5850
    CMP ESI,0x28                        ; 0055e892
    JGE 0x0055e82b                      ; 0055e895
        ;   XREF to: 0055e82b (CONDITIONAL_JUMP)  ; LAB_0055e82b
    INC EBX                             ; 0055e897
        ;   Label: LAB_0055e897
    MOV EAX,[0x02cf5840]                ; 0055e898 | DAT_02cf5840
    CMP EBX,EAX                         ; 0055e89d
    JL 0x0055e830                       ; 0055e89f
        ;   XREF to: 0055e830 (CONDITIONAL_JUMP)  ; LAB_0055e830
    POP EBP                             ; 0055e8a1
    POP EDI                             ; 0055e8a2
    POP ESI                             ; 0055e8a3
    POP EBX                             ; 0055e8a4
    RET                                 ; 0055e8a5

