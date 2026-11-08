; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042c780(char *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_0042c6f0 at 0042c704
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_0057cd50
;   FUN_0057cec0
;   FUN_0057cfe0
;   FUN_0057d180
;   FUN_0057d390
;   FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c780
        ;   Label: FUN_0042c780
    PUSH ESI                            ; 0042c781
    PUSH EDI                            ; 0042c782
    SUB ESP,0xc8                        ; 0042c783
    MOV ESI,dword ptr [ESP + 0xd8]      ; 0042c789
    MOV EBX,dword ptr [ESP + 0xdc]      ; 0042c790
    LEA EAX,[ESP + 0xa0]                ; 0042c797
    PUSH EAX                            ; 0042c79e
    CALL FUN_0057cd50                   ; 0042c79f
        ;   XREF to: 0057cd50 (UNCONDITIONAL_CALL)  ; undefined FUN_0057cd50()
    ADD ESP,0x4                         ; 0042c7a4
    MOV EDI,ESP                         ; 0042c7a7
    MOV DL,0x2e                         ; 0042c7a9
    PUSH EDI                            ; 0042c7ab
    MOV AL,byte ptr [ESI]               ; 0042c7ac
        ;   Label: LAB_0042c7ac
    MOV byte ptr [EDI],AL               ; 0042c7ae
    CMP AL,0x0                          ; 0042c7b0
    JZ 0x0042c7c4                       ; 0042c7b2
        ;   XREF to: 0042c7c4 (CONDITIONAL_JUMP)  ; LAB_0042c7c4
    MOV AL,byte ptr [ESI + 0x1]         ; 0042c7b4
    ADD ESI,0x2                         ; 0042c7b7
    MOV byte ptr [EDI + 0x1],AL         ; 0042c7ba
    ADD EDI,0x2                         ; 0042c7bd
    CMP AL,0x0                          ; 0042c7c0
    JNZ 0x0042c7ac                      ; 0042c7c2
        ;   XREF to: 0042c7ac (CONDITIONAL_JUMP)  ; LAB_0042c7ac
    POP EDI                             ; 0042c7c4
        ;   Label: LAB_0042c7c4
    MOV ESI,ESP                         ; 0042c7c5
    MOV AL,byte ptr [ESI]               ; 0042c7c7
        ;   Label: LAB_0042c7c7
    CMP AL,DL                           ; 0042c7c9
    JZ 0x0042c7df                       ; 0042c7cb
        ;   XREF to: 0042c7df (CONDITIONAL_JUMP)  ; LAB_0042c7df
    CMP AL,0x0                          ; 0042c7cd
    JZ 0x0042c7dd                       ; 0042c7cf
        ;   XREF to: 0042c7dd (CONDITIONAL_JUMP)  ; LAB_0042c7dd
    INC ESI                             ; 0042c7d1
    MOV AL,byte ptr [ESI]               ; 0042c7d2
    CMP AL,DL                           ; 0042c7d4
    JZ 0x0042c7df                       ; 0042c7d6
        ;   XREF to: 0042c7df (CONDITIONAL_JUMP)  ; LAB_0042c7df
    INC ESI                             ; 0042c7d8
    CMP AL,0x0                          ; 0042c7d9
    JNZ 0x0042c7c7                      ; 0042c7db
        ;   XREF to: 0042c7c7 (CONDITIONAL_JUMP)  ; LAB_0042c7c7
    SUB ESI,ESI                         ; 0042c7dd
        ;   Label: LAB_0042c7dd
    MOV EDI,ESI                         ; 0042c7df
        ;   Label: LAB_0042c7df
    TEST ESI,ESI                        ; 0042c7e1
    JNZ 0x0042c803                      ; 0042c7e3
        ;   XREF to: 0042c803 (CONDITIONAL_JUMP)  ; LAB_0042c803
    MOV ESI,ESP                         ; 0042c7e5
    XOR DL,DL                           ; 0042c7e7
    MOV AL,byte ptr [ESI]               ; 0042c7e9
        ;   Label: LAB_0042c7e9
    CMP AL,DL                           ; 0042c7eb
    JZ 0x0042c801                       ; 0042c7ed
        ;   XREF to: 0042c801 (CONDITIONAL_JUMP)  ; LAB_0042c801
    CMP AL,0x0                          ; 0042c7ef
    JZ 0x0042c7ff                       ; 0042c7f1
        ;   XREF to: 0042c7ff (CONDITIONAL_JUMP)  ; LAB_0042c7ff
    INC ESI                             ; 0042c7f3
    MOV AL,byte ptr [ESI]               ; 0042c7f4
    CMP AL,DL                           ; 0042c7f6
    JZ 0x0042c801                       ; 0042c7f8
        ;   XREF to: 0042c801 (CONDITIONAL_JUMP)  ; LAB_0042c801
    INC ESI                             ; 0042c7fa
    CMP AL,0x0                          ; 0042c7fb
    JNZ 0x0042c7e9                      ; 0042c7fd
        ;   XREF to: 0042c7e9 (CONDITIONAL_JUMP)  ; LAB_0042c7e9
    SUB ESI,ESI                         ; 0042c7ff
        ;   Label: LAB_0042c7ff
    MOV EDI,ESI                         ; 0042c801
        ;   Label: LAB_0042c801
    MOV ESI,0x5cd400                    ; 0042c803
        ;   Label: LAB_0042c803
    PUSH EDI                            ; 0042c808
    MOV AL,byte ptr [ESI]               ; 0042c809
        ;   Label: LAB_0042c809
    MOV byte ptr [EDI],AL               ; 0042c80b
    CMP AL,0x0                          ; 0042c80d
    JZ 0x0042c821                       ; 0042c80f
        ;   XREF to: 0042c821 (CONDITIONAL_JUMP)  ; LAB_0042c821
    MOV AL,byte ptr [ESI + 0x1]         ; 0042c811
    ADD ESI,0x2                         ; 0042c814
    MOV byte ptr [EDI + 0x1],AL         ; 0042c817
    ADD EDI,0x2                         ; 0042c81a
    CMP AL,0x0                          ; 0042c81d
    JNZ 0x0042c809                      ; 0042c81f
        ;   XREF to: 0042c809 (CONDITIONAL_JUMP)  ; LAB_0042c809
    POP EDI                             ; 0042c821
        ;   Label: LAB_0042c821
    MOV EAX,ESP                         ; 0042c822
    PUSH EAX                            ; 0042c824
    PUSH 0x5cd405                       ; 0042c825
    LEA EAX,[ESP + 0xa8]                ; 0042c82a
    PUSH EAX                            ; 0042c831
    CALL FUN_0057d390                   ; 0042c832
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d390()
    ADD ESP,0xc                         ; 0042c837
    TEST EAX,EAX                        ; 0042c83a
    JZ 0x0042c8c3                       ; 0042c83c
        ;   XREF to: 0042c8c3 (CONDITIONAL_JUMP)  ; LAB_0042c8c3
    PUSH 0x300                          ; 0042c842
    PUSH EBX                            ; 0042c847
    LEA EAX,[ESP + 0xa8]                ; 0042c848
    PUSH EAX                            ; 0042c84f
    CALL FUN_0057cfe0                   ; 0042c850
        ;   XREF to: 0057cfe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057cfe0()
    ADD ESP,0xc                         ; 0042c855
    CMP EAX,0x300                       ; 0042c858
    JZ 0x0042c897                       ; 0042c85d
        ;   XREF to: 0042c897 (CONDITIONAL_JUMP)  ; LAB_0042c897
    MOV EAX,ESP                         ; 0042c85f
    PUSH EAX                            ; 0042c861
    PUSH 0x5cd409                       ; 0042c862
    LEA EAX,[ESP + 0x58]                ; 0042c867
    PUSH EAX                            ; 0042c86b
    CALL FUN_005b7790                   ; 0042c86c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    MOV EDX,0x5cd41b                    ; 0042c871
    ADD ESP,0xc                         ; 0042c876
    LEA EAX,[ESP + 0x50]                ; 0042c879
    MOV ECX,0x147                       ; 0042c87d
    PUSH EAX                            ; 0042c882
    MOV dword ptr [0x01d046a0],EDX      ; 0042c883 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0042c889 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0042c88f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0042c894
    LEA EAX,[ESP + 0xa0]                ; 0042c897
        ;   Label: LAB_0042c897
    PUSH EAX                            ; 0042c89e
    CALL FUN_0057d180                   ; 0042c89f
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d180()
    ADD ESP,0x4                         ; 0042c8a4
    PUSH 0x0                            ; 0042c8a7
        ;   Label: LAB_0042c8a7
    LEA EAX,[ESP + 0xa4]                ; 0042c8a9
    PUSH EAX                            ; 0042c8b0
    CALL FUN_0057cec0                   ; 0042c8b1
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057cec0()
    ADD ESP,0x8                         ; 0042c8b6
    ADD ESP,0xc8                        ; 0042c8b9
    POP EDI                             ; 0042c8bf
    POP ESI                             ; 0042c8c0
    POP EBX                             ; 0042c8c1
    RET                                 ; 0042c8c2
    MOV ECX,0x300                       ; 0042c8c3
        ;   Label: LAB_0042c8c3
    MOV ESI,0x1c35b38                   ; 0042c8c8
    MOV EDI,EBX                         ; 0042c8cd
    PUSH EDI                            ; 0042c8cf
    MOV EAX,ECX                         ; 0042c8d0
    SHR ECX,0x2                         ; 0042c8d2
    MOVSD.REP ES:EDI,ESI                ; 0042c8d5
    MOV CL,AL                           ; 0042c8d7
    AND CL,0x3                          ; 0042c8d9
    MOVSB.REP ES:EDI,ESI                ; 0042c8dc
    POP EDI                             ; 0042c8de
    JMP 0x0042c8a7                      ; 0042c8df
        ;   XREF to: 0042c8a7 (UNCONDITIONAL_JUMP)  ; LAB_0042c8a7

