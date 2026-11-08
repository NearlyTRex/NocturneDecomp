; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040b110(undefined4 param_1,int param_2)
;
;
; XREF[9]:
;   FUN_0040b1c0 at 0040b1fb
;   FUN_0040b260 at 0040b29b
;   FUN_0040b300 at 0040b340
;   FUN_0040b3a0 at 0040b3df
;   FUN_0040b440 at 0040b4f4
;   FUN_0040b5f0 at 0040b623
;   FUN_0040b670 at 0040b6a4
;   FUN_0040bce0 at 0040bd47
;   FUN_0040be80 at 0040bee5
;
; Referenced Globals:
;   TerminatedCString s_s_005d2a1f
;   undefined4 DAT_005d2a2a
;   undefined4 DAT_007c3034
;   undefined4 DAT_007c3038
;   undefined4 DAT_007c3040
;
; Called Functions:
;   FUN_0040b090
;   FUN_005c03c0
;   FUN_005c0530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b110
        ;   Label: FUN_0040b110
    PUSH ESI                            ; 0040b111
    PUSH EDI                            ; 0040b112
    PUSH EBP                            ; 0040b113
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040b114
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040b118
    CMP dword ptr [0x007c3038],0x1      ; 0040b11c | DAT_007c3038
    JNZ 0x0040b15a                      ; 0040b123
        ;   XREF to: 0040b15a (CONDITIONAL_JUMP)  ; LAB_0040b15a
    MOV EAX,[0x007c3034]                ; 0040b125 | DAT_007c3034
        ;   Label: LAB_0040b125
    PUSH EAX                            ; 0040b12a
    CALL FUN_005c0530                   ; 0040b12b
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    ADD ESP,0x4                         ; 0040b130
    MOV EBX,EAX                         ; 0040b133
    TEST EAX,EAX                        ; 0040b135
    JL 0x0040b14e                       ; 0040b137
        ;   XREF to: 0040b14e (CONDITIONAL_JUMP)  ; LAB_0040b14e
    CMP EBX,0xa                         ; 0040b139
        ;   Label: LAB_0040b139
    JNZ 0x0040b125                      ; 0040b13c
        ;   XREF to: 0040b125 (CONDITIONAL_JUMP)  ; LAB_0040b125
    MOV EAX,[0x007c3034]                ; 0040b13e | DAT_007c3034
    TEST byte ptr [EAX + 0xc],0x20      ; 0040b143
    JNZ 0x0040b1b0                      ; 0040b147
        ;   XREF to: 0040b1b0 (CONDITIONAL_JUMP)  ; LAB_0040b1b0
    POP EBP                             ; 0040b149
    POP EDI                             ; 0040b14a
    POP ESI                             ; 0040b14b
    POP EBX                             ; 0040b14c
    RET                                 ; 0040b14d
    PUSH ESI                            ; 0040b14e
        ;   Label: LAB_0040b14e
    PUSH EDI                            ; 0040b14f
    CALL FUN_0040b090                   ; 0040b150
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b090()
    ADD ESP,0x8                         ; 0040b155
    JMP 0x0040b139                      ; 0040b158
        ;   XREF to: 0040b139 (UNCONDITIONAL_JUMP)  ; LAB_0040b139
    CMP dword ptr [0x007c3040],0x0      ; 0040b15a | DAT_007c3040
        ;   Label: LAB_0040b15a
    JNZ 0x0040b18c                      ; 0040b161
        ;   XREF to: 0040b18c (CONDITIONAL_JUMP)  ; LAB_0040b18c
    TEST ESI,ESI                        ; 0040b163
    JZ 0x0040b18c                       ; 0040b165
        ;   XREF to: 0040b18c (CONDITIONAL_JUMP)  ; LAB_0040b18c
    PUSH ESI                            ; 0040b167
    PUSH 0x5d2a1f                       ; 0040b168 | = "    // %s\n"
    MOV EBX,dword ptr [0x007c3034]      ; 0040b16d | DAT_007c3034
    PUSH EBX                            ; 0040b173
    CALL FUN_005c03c0                   ; 0040b174
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0xc                         ; 0040b179
    MOV EAX,[0x007c3034]                ; 0040b17c | DAT_007c3034
    TEST byte ptr [EAX + 0xc],0x20      ; 0040b181
    JNZ 0x0040b1b0                      ; 0040b185
        ;   XREF to: 0040b1b0 (CONDITIONAL_JUMP)  ; LAB_0040b1b0
    POP EBP                             ; 0040b187
    POP EDI                             ; 0040b188
    POP ESI                             ; 0040b189
    POP EBX                             ; 0040b18a
    RET                                 ; 0040b18b
    PUSH 0x5d2a2a                       ; 0040b18c | DAT_005d2a2a
        ;   Label: LAB_0040b18c
    MOV EBP,dword ptr [0x007c3034]      ; 0040b191 | DAT_007c3034
    PUSH EBP                            ; 0040b197
    CALL FUN_005c03c0                   ; 0040b198
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 0040b19d
    MOV EAX,[0x007c3034]                ; 0040b1a0 | DAT_007c3034
    TEST byte ptr [EAX + 0xc],0x20      ; 0040b1a5
    JNZ 0x0040b1b0                      ; 0040b1a9
        ;   XREF to: 0040b1b0 (CONDITIONAL_JUMP)  ; LAB_0040b1b0
    POP EBP                             ; 0040b1ab
    POP EDI                             ; 0040b1ac
    POP ESI                             ; 0040b1ad
    POP EBX                             ; 0040b1ae
    RET                                 ; 0040b1af
    PUSH ESI                            ; 0040b1b0
        ;   Label: LAB_0040b1b0
    PUSH EDI                            ; 0040b1b1
    CALL FUN_0040b090                   ; 0040b1b2
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b090()
    ADD ESP,0x8                         ; 0040b1b7
    POP EBP                             ; 0040b1ba
    POP EDI                             ; 0040b1bb
    POP ESI                             ; 0040b1bc
    POP EBX                             ; 0040b1bd
    RET                                 ; 0040b1be

