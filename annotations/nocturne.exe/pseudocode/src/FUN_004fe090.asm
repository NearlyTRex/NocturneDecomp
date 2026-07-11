; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_004fe090(int *param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_004fe140 at 004fe14c
;   FUN_004ff2c0 at 00500c5b
;
; Referenced Globals:
;   string s_No_opening_parenthesis_0058e020
;   string s_Argument_too_long_0058e037
;   string s_Can't_find_closing_parenthesis_0058e049
;
; Called Functions:
;   FUN_004fe000
;   FUN_004fe070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe090
        ;   Label: FUN_004fe090
    PUSH ESI                            ; 004fe091
    PUSH EDI                            ; 004fe092
    PUSH EBP                            ; 004fe093
    MOV EBX,dword ptr [ESP + 0x14]      ; 004fe094
    MOV EBP,dword ptr [ESP + 0x18]      ; 004fe098
    MOV EDX,dword ptr [EBX]             ; 004fe09c
    PUSH EDX                            ; 004fe09e
    CALL FUN_004fe070                   ; 004fe09f
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fe070()
    MOV dword ptr [EBX],EAX             ; 004fe0a4
    MOV DL,byte ptr [EAX]               ; 004fe0a6
    ADD ESP,0x4                         ; 004fe0a8
    CMP DL,0x28                         ; 004fe0ab
    JNZ 0x004fe0eb                      ; 004fe0ae
        ;   XREF to: 004fe0eb (CONDITIONAL_JUMP)  ; LAB_004fe0eb
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004fe0b0
    XOR EAX,EAX                         ; 004fe0b4
    XOR EDX,EDX                         ; 004fe0b6
    TEST ECX,ECX                        ; 004fe0b8
    JLE 0x004fe0e1                      ; 004fe0ba
        ;   XREF to: 004fe0e1 (CONDITIONAL_JUMP)  ; LAB_004fe0e1
    MOV EDI,dword ptr [EBX]             ; 004fe0bc
        ;   Label: LAB_004fe0bc
    INC EDI                             ; 004fe0be
    MOV dword ptr [EBX],EDI             ; 004fe0bf
    MOV CL,byte ptr [EDI]               ; 004fe0c1
    MOV ESI,EDI                         ; 004fe0c3
    TEST CL,CL                          ; 004fe0c5
    JZ 0x004fe0f5                       ; 004fe0c7
        ;   XREF to: 004fe0f5 (CONDITIONAL_JUMP)  ; LAB_004fe0f5
    CMP CL,0x28                         ; 004fe0c9
    JNZ 0x004fe0ff                      ; 004fe0cc
        ;   XREF to: 004fe0ff (CONDITIONAL_JUMP)  ; LAB_004fe0ff
    INC EAX                             ; 004fe0ce
    MOV ESI,dword ptr [EBX]             ; 004fe0cf
        ;   Label: LAB_004fe0cf
    MOV EDI,EDX                         ; 004fe0d1
    INC EDX                             ; 004fe0d3
    MOV CL,byte ptr [ESI]               ; 004fe0d4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004fe0d6
    MOV byte ptr [EDI + EBP*0x1],CL     ; 004fe0da
    CMP EDX,ESI                         ; 004fe0dd
    JL 0x004fe0bc                       ; 004fe0df
        ;   XREF to: 004fe0bc (CONDITIONAL_JUMP)  ; LAB_004fe0bc
    MOV EAX,0x58e037                    ; 004fe0e1 | = "Argument too long"
        ;   Label: LAB_004fe0e1
    POP EBP                             ; 004fe0e6
    POP EDI                             ; 004fe0e7
    POP ESI                             ; 004fe0e8
    POP EBX                             ; 004fe0e9
    RET                                 ; 004fe0ea
    MOV EAX,0x58e020                    ; 004fe0eb | = "No opening parenthesis"
        ;   Label: LAB_004fe0eb
    POP EBP                             ; 004fe0f0
    POP EDI                             ; 004fe0f1
    POP ESI                             ; 004fe0f2
    POP EBX                             ; 004fe0f3
    RET                                 ; 004fe0f4
    MOV EAX,0x58e049                    ; 004fe0f5 | = "Can't find closing parenthesis"
        ;   Label: LAB_004fe0f5
    POP EBP                             ; 004fe0fa
    POP EDI                             ; 004fe0fb
    POP ESI                             ; 004fe0fc
    POP EBX                             ; 004fe0fd
    RET                                 ; 004fe0fe
    CMP CL,0x29                         ; 004fe0ff
        ;   Label: LAB_004fe0ff
    JNZ 0x004fe0cf                      ; 004fe102
        ;   XREF to: 004fe0cf (CONDITIONAL_JUMP)  ; LAB_004fe0cf
    TEST EAX,EAX                        ; 004fe104
    JZ 0x004fe10b                       ; 004fe106
        ;   XREF to: 004fe10b (CONDITIONAL_JUMP)  ; LAB_004fe10b
    DEC EAX                             ; 004fe108
    JMP 0x004fe0cf                      ; 004fe109
        ;   XREF to: 004fe0cf (UNCONDITIONAL_JUMP)  ; LAB_004fe0cf
    LEA ESI,[EDI + 0x1]                 ; 004fe10b
        ;   Label: LAB_004fe10b
    MOV dword ptr [EBX],ESI             ; 004fe10e
    PUSH EBP                            ; 004fe110
    MOV byte ptr [EDX + EBP*0x1],0x0    ; 004fe111
    CALL FUN_004fe000                   ; 004fe115
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; undefined FUN_004fe000()
    ADD ESP,0x4                         ; 004fe11a
    MOV EBP,dword ptr [EBX]             ; 004fe11d
    PUSH EBP                            ; 004fe11f
    CALL FUN_004fe070                   ; 004fe120
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fe070()
    ADD ESP,0x4                         ; 004fe125
    MOV dword ptr [EBX],EAX             ; 004fe128
    XOR EAX,EAX                         ; 004fe12a
    POP EBP                             ; 004fe12c
    POP EDI                             ; 004fe12d
    POP ESI                             ; 004fe12e
    POP EBX                             ; 004fe12f
    RET                                 ; 004fe130

