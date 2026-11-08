; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a5128(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[9]:
;   FUN_00465e50 at 00465e6c
;   FUN_004bda10 at 004bda41
;   FUN_004bdfb0 at 004bdfeb
;   FUN_004bec20 at 004beca1
;   FUN_004bfa40 at 004bfa74
;   FUN_00529410 at 0052946b
;   FUN_005297a0 at 0052984a
;   FUN_00530610 at 00530795
;   FUN_00530990 at 005309b6
;
; Called Functions:
;   FUN_005a50e0
;   FUN_005ac9c0
;   FUN_005aca00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5128
        ;   Label: FUN_005a5128
    PUSH ESI                            ; 005a5129
    PUSH EDI                            ; 005a512a
    PUSH EBP                            ; 005a512b
    SUB ESP,0x4                         ; 005a512c
    MOV EBX,dword ptr [ESP + 0x18]      ; 005a512f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005a5133
    MOV AH,byte ptr [EBX]               ; 005a5137
    TEST AH,AH                          ; 005a5139
    JZ 0x005a5157                       ; 005a513b
        ;   XREF to: 005a5157 (CONDITIONAL_JUMP)  ; LAB_005a5157
    MOV DL,byte ptr [EBX + 0x1]         ; 005a513d
    CMP DL,0x3a                         ; 005a5140
    JNZ 0x005a5157                      ; 005a5143
        ;   XREF to: 005a5157 (CONDITIONAL_JUMP)  ; LAB_005a5157
    TEST ESI,ESI                        ; 005a5145
    JZ 0x005a5152                       ; 005a5147
        ;   XREF to: 005a5152 (CONDITIONAL_JUMP)  ; LAB_005a5152
    MOV byte ptr [ESI + 0x2],0x0        ; 005a5149
    MOV byte ptr [ESI],AH               ; 005a514d
    MOV byte ptr [ESI + 0x1],DL         ; 005a514f
    ADD EBX,0x2                         ; 005a5152
        ;   Label: LAB_005a5152
    JMP 0x005a515e                      ; 005a5155
        ;   XREF to: 005a515e (UNCONDITIONAL_JUMP)  ; LAB_005a515e
    TEST ESI,ESI                        ; 005a5157
        ;   Label: LAB_005a5157
    JZ 0x005a515e                       ; 005a5159
        ;   XREF to: 005a515e (CONDITIONAL_JUMP)  ; LAB_005a515e
    MOV byte ptr [ESI],0x0              ; 005a515b
    MOV EBP,EBX                         ; 005a515e
        ;   Label: LAB_005a515e
    MOV dword ptr [ESP],EBX             ; 005a5160
    MOV DH,byte ptr [EBX]               ; 005a5163
    XOR EDI,EDI                         ; 005a5165
    TEST DH,DH                          ; 005a5167
    JZ 0x005a519e                       ; 005a5169
        ;   XREF to: 005a519e (CONDITIONAL_JUMP)  ; LAB_005a519e
    PUSH EBX                            ; 005a516b
        ;   Label: LAB_005a516b
    CALL FUN_005ac9c0                   ; 005a516c
        ;   XREF to: 005ac9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ac9c0()
    MOV ESI,EAX                         ; 005a5171
    ADD ESP,0x4                         ; 005a5173
    CMP EAX,0x2e                        ; 005a5176
    JNZ 0x005a5180                      ; 005a5179
        ;   XREF to: 005a5180 (CONDITIONAL_JUMP)  ; LAB_005a5180
    MOV EDI,EBX                         ; 005a517b
    INC EBX                             ; 005a517d
    JMP 0x005a5199                      ; 005a517e
        ;   XREF to: 005a5199 (UNCONDITIONAL_JUMP)  ; LAB_005a5199
    PUSH EBX                            ; 005a5180
        ;   Label: LAB_005a5180
    CALL FUN_005aca00                   ; 005a5181
        ;   XREF to: 005aca00 (UNCONDITIONAL_CALL)  ; undefined FUN_005aca00()
    MOV EBX,EAX                         ; 005a5186
    ADD ESP,0x4                         ; 005a5188
    CMP ESI,0x5c                        ; 005a518b
    JZ 0x005a5195                       ; 005a518e
        ;   XREF to: 005a5195 (CONDITIONAL_JUMP)  ; LAB_005a5195
    CMP ESI,0x2f                        ; 005a5190
    JNZ 0x005a5199                      ; 005a5193
        ;   XREF to: 005a5199 (CONDITIONAL_JUMP)  ; LAB_005a5199
    MOV EBP,EBX                         ; 005a5195
        ;   Label: LAB_005a5195
    XOR EDI,EDI                         ; 005a5197
    CMP byte ptr [EBX],0x0              ; 005a5199
        ;   Label: LAB_005a5199
    JNZ 0x005a516b                      ; 005a519c
        ;   XREF to: 005a516b (CONDITIONAL_JUMP)  ; LAB_005a516b
    MOV EDX,dword ptr [ESP]             ; 005a519e
        ;   Label: LAB_005a519e
    MOV ESI,EBP                         ; 005a51a1
    PUSH 0xff                           ; 005a51a3
    SUB ESI,EDX                         ; 005a51a8
    PUSH ESI                            ; 005a51aa
    PUSH EDX                            ; 005a51ab
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005a51ac
    PUSH ESI                            ; 005a51b0
    CALL FUN_005a50e0                   ; 005a51b1
        ;   XREF to: 005a50e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a50e0()
    ADD ESP,0x10                        ; 005a51b6
    TEST EDI,EDI                        ; 005a51b9
    JNZ 0x005a51bf                      ; 005a51bb
        ;   XREF to: 005a51bf (CONDITIONAL_JUMP)  ; LAB_005a51bf
    MOV EDI,EBX                         ; 005a51bd
    MOV ESI,EDI                         ; 005a51bf
        ;   Label: LAB_005a51bf
    PUSH 0xff                           ; 005a51c1
    SUB ESI,EBP                         ; 005a51c6
    PUSH ESI                            ; 005a51c8
    PUSH EBP                            ; 005a51c9
    MOV EBP,dword ptr [ESP + 0x30]      ; 005a51ca
    PUSH EBP                            ; 005a51ce
    CALL FUN_005a50e0                   ; 005a51cf
        ;   XREF to: 005a50e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a50e0()
    ADD ESP,0x10                        ; 005a51d4
    PUSH 0xff                           ; 005a51d7
    SUB EBX,EDI                         ; 005a51dc
    PUSH EBX                            ; 005a51de
    PUSH EDI                            ; 005a51df
    MOV EAX,dword ptr [ESP + 0x34]      ; 005a51e0
    PUSH EAX                            ; 005a51e4
    CALL FUN_005a50e0                   ; 005a51e5
        ;   XREF to: 005a50e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a50e0()
    ADD ESP,0x10                        ; 005a51ea
    ADD ESP,0x4                         ; 005a51ed
    POP EBP                             ; 005a51f0
    POP EDI                             ; 005a51f1
    POP ESI                             ; 005a51f2
    POP EBX                             ; 005a51f3
    RET                                 ; 005a51f4

