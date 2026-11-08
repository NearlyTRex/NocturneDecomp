; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LPSTR FUN_005ba120(LPSTR param_1,LPCSTR param_2,uint param_3)
;
;
; XREF[3]:
;   FUN_00461210 at 00461221
;   FUN_005be9ac at 005be9f7
;   FUN_005bfdd4 at 005bfe3d
;
; Referenced Globals:
;   void* PTR_GetFullPathNameA_005c859c = 001c8ec4
;   undefined4 DAT_005f1854
;   undefined4 DAT_006e6f63
;
; Called Functions:
;   FUN_005b8130
;   FUN_005b8580
;   FUN_005b86a0
;   FUN_005be180
;   FUN_005c036c
;   FUN_005c0f10
;   GetFullPathNameA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba120
        ;   Label: FUN_005ba120
    PUSH ESI                            ; 005ba121
    PUSH EDI                            ; 005ba122
    PUSH EBP                            ; 005ba123
    SUB ESP,0x4                         ; 005ba124
    MOV EBX,dword ptr [ESP + 0x18]      ; 005ba127
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005ba12b
    MOV EDI,dword ptr [ESP + 0x20]      ; 005ba12f
    TEST EBX,EBX                        ; 005ba133
    JNZ 0x005ba15e                      ; 005ba135
        ;   XREF to: 005ba15e (CONDITIONAL_JUMP)  ; LAB_005ba15e
    MOV EDI,0x104                       ; 005ba137
    PUSH EDI                            ; 005ba13c
    CALL FUN_005b8580                   ; 005ba13d
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 005ba142
    MOV EBP,EAX                         ; 005ba145
    TEST EAX,EAX                        ; 005ba147
    JNZ 0x005ba15c                      ; 005ba149
        ;   XREF to: 005ba15c (CONDITIONAL_JUMP)  ; LAB_005ba15c
    PUSH 0x5                            ; 005ba14b
    CALL FUN_005be180                   ; 005ba14d
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; undefined FUN_005be180()
    ADD ESP,0x4                         ; 005ba152
    XOR EAX,EAX                         ; 005ba155
    JMP 0x005ba1d8                      ; 005ba157
        ;   XREF to: 005ba1d8 (UNCONDITIONAL_JUMP)  ; LAB_005ba1d8
    MOV EBX,EAX                         ; 005ba15c
        ;   Label: LAB_005ba15c
    TEST ESI,ESI                        ; 005ba15e
        ;   Label: LAB_005ba15e
    JZ 0x005ba167                       ; 005ba160
        ;   XREF to: 005ba167 (CONDITIONAL_JUMP)  ; LAB_005ba167
    CMP byte ptr [ESI],0x0              ; 005ba162
    JNZ 0x005ba179                      ; 005ba165
        ;   XREF to: 005ba179 (CONDITIONAL_JUMP)  ; LAB_005ba179
    PUSH EDI                            ; 005ba167
        ;   Label: LAB_005ba167
    PUSH EBX                            ; 005ba168
    CALL FUN_005c0f10                   ; 005ba169
        ;   XREF to: 005c0f10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f10()
    ADD ESP,0x8                         ; 005ba16e
    ADD ESP,0x4                         ; 005ba171
    POP EBP                             ; 005ba174
    POP EDI                             ; 005ba175
    POP ESI                             ; 005ba176
    POP EBX                             ; 005ba177
    RET                                 ; 005ba178
    PUSH 0x5f1854                       ; 005ba179 | DAT_005f1854
        ;   Label: LAB_005ba179
    PUSH ESI                            ; 005ba17e
    CALL FUN_005b8130                   ; 005ba17f
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 005ba184
    TEST EAX,EAX                        ; 005ba187
    JNZ 0x005ba1b6                      ; 005ba189
        ;   XREF to: 005ba1b6 (CONDITIONAL_JUMP)  ; LAB_005ba1b6
    CMP EDI,0x4                         ; 005ba18b
    JNC 0x005ba1ad                      ; 005ba18e
        ;   XREF to: 005ba1ad (CONDITIONAL_JUMP)  ; LAB_005ba1ad
    PUSH EBP                            ; 005ba190
    CALL FUN_005b86a0                   ; 005ba191
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 005ba196
    PUSH 0xe                            ; 005ba199
    CALL FUN_005be180                   ; 005ba19b
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; undefined FUN_005be180()
    ADD ESP,0x4                         ; 005ba1a0
    XOR EAX,EAX                         ; 005ba1a3
    ADD ESP,0x4                         ; 005ba1a5
    POP EBP                             ; 005ba1a8
    POP EDI                             ; 005ba1a9
    POP ESI                             ; 005ba1aa
    POP EBX                             ; 005ba1ab
    RET                                 ; 005ba1ac
    MOV EAX,[0x005f1854]                ; 005ba1ad | DAT_005f1854
        ;   Label: LAB_005ba1ad
    MOV dword ptr [EBX],EAX             ; 005ba1b2 | DAT_006e6f63
    JMP 0x005ba1d6                      ; 005ba1b4
        ;   XREF to: 005ba1d6 (UNCONDITIONAL_JUMP)  ; LAB_005ba1d6
    MOV EAX,ESP                         ; 005ba1b6
        ;   Label: LAB_005ba1b6
    PUSH EAX                            ; 005ba1b8
    PUSH EBX                            ; 005ba1b9
    PUSH EDI                            ; 005ba1ba
    PUSH ESI                            ; 005ba1bb
    CALL dword ptr CS:[0x5c859c]        ; 005ba1bc | PTR_GetFullPathNameA_005c859c
    TEST EAX,EAX                        ; 005ba1c3
    JNZ 0x005ba1d6                      ; 005ba1c5
        ;   XREF to: 005ba1d6 (CONDITIONAL_JUMP)  ; LAB_005ba1d6
    CALL FUN_005c036c                   ; 005ba1c7
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined FUN_005c036c()
    XOR EAX,EAX                         ; 005ba1cc
    ADD ESP,0x4                         ; 005ba1ce
    POP EBP                             ; 005ba1d1
    POP EDI                             ; 005ba1d2
    POP ESI                             ; 005ba1d3
    POP EBX                             ; 005ba1d4
    RET                                 ; 005ba1d5
    MOV EAX,EBX                         ; 005ba1d6
        ;   Label: LAB_005ba1d6
    ADD ESP,0x4                         ; 005ba1d8
        ;   Label: LAB_005ba1d8
    POP EBP                             ; 005ba1db
    POP EDI                             ; 005ba1dc
    POP ESI                             ; 005ba1dd
    POP EBX                             ; 005ba1de
    RET                                 ; 005ba1df

