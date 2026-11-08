; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0059c100(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   FUN_0041a840
;   FUN_0044fcc0
;   FUN_0046b2b0
;   FUN_0046b350
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c100
        ;   Label: FUN_0059c100
    PUSH ESI                            ; 0059c101
    PUSH EDI                            ; 0059c102
    SUB ESP,0x30                        ; 0059c103
    MOV EBX,dword ptr [ESP + 0x40]      ; 0059c106
    LEA EAX,[EBX + 0x20]                ; 0059c10a
    PUSH EAX                            ; 0059c10d
    MOV EDX,dword ptr [0x0060b280]      ; 0059c10e | DAT_0060b280
    PUSH EDX                            ; 0059c114
    CALL FUN_0046b2b0                   ; 0059c115
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b2b0()
    ADD ESP,0x8                         ; 0059c11a
    PUSH 0x0                            ; 0059c11d
    LEA EAX,[EBX + 0x30]                ; 0059c11f
    PUSH EAX                            ; 0059c122
    MOV ECX,dword ptr [0x0060b280]      ; 0059c123 | DAT_0060b280
    PUSH ECX                            ; 0059c129
    CALL FUN_0046b350                   ; 0059c12a
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b350()
    ADD ESP,0xc                         ; 0059c12f
    PUSH 0x0                            ; 0059c132
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0059c134
    PUSH EBX                            ; 0059c13a
    LEA ESI,[ESP + 0x20]                ; 0059c13b
    LEA EDI,[ESP + 0x8]                 ; 0059c13f
    CALL dword ptr [EAX + 0x24]         ; 0059c143
    MOV ECX,0x6                         ; 0059c146
    ADD ESP,0x4                         ; 0059c14b
    LEA EAX,[ESP + 0x4]                 ; 0059c14e
    LEA ESI,[ESP + 0x1c]                ; 0059c152
    PUSH EAX                            ; 0059c156
    MOVSD.REP ES:EDI,ESI                ; 0059c157
    CALL FUN_0041a840                   ; 0059c159
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 0059c15e
    MOV ESI,EAX                         ; 0059c161
    TEST EAX,EAX                        ; 0059c163
    JNZ 0x0059c17f                      ; 0059c165
        ;   XREF to: 0059c17f (CONDITIONAL_JUMP)  ; LAB_0059c17f
    MOV EBX,dword ptr [0x0060b280]      ; 0059c167 | DAT_0060b280
        ;   Label: LAB_0059c167
    PUSH EBX                            ; 0059c16d
    CALL thunk_FUN_004e9810             ; 0059c16e
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 0059c173
    MOV EAX,ESI                         ; 0059c176
    ADD ESP,0x30                        ; 0059c178
    POP EDI                             ; 0059c17b
    POP ESI                             ; 0059c17c
    POP EBX                             ; 0059c17d
    RET                                 ; 0059c17e
    PUSH -0x1                           ; 0059c17f
        ;   Label: LAB_0059c17f
    ADD EBX,0x2b4                       ; 0059c181
    PUSH 0x0                            ; 0059c187
    PUSH EBX                            ; 0059c189
    CALL FUN_0044fcc0                   ; 0059c18a
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 0059c18f
    JMP 0x0059c167                      ; 0059c192
        ;   XREF to: 0059c167 (UNCONDITIONAL_JUMP)  ; LAB_0059c167

