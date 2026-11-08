; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0045d0c0(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0045d088 = 0045d185
;   undefined4 DAT_005d07cf
;   undefined4 DAT_005d07d7
;
; Called Functions:
;   FUN_0042a5a0
;   FUN_004d06c0
;   FUN_005038a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d0c0
        ;   Label: FUN_0045d0c0
    PUSH ESI                            ; 0045d0c1
    PUSH EDI                            ; 0045d0c2
    PUSH EBP                            ; 0045d0c3
    SUB ESP,0x8                         ; 0045d0c4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045d0c7
    MOV EBP,dword ptr [ESP + 0x20]      ; 0045d0cb
    MOV EDX,dword ptr [ESI + 0x256a4]   ; 0045d0cf
    TEST EDX,EDX                        ; 0045d0d5
    JNZ 0x0045d0e2                      ; 0045d0d7
        ;   XREF to: 0045d0e2 (CONDITIONAL_JUMP)  ; LAB_0045d0e2
    CMP dword ptr [ESI + 0x25640],0x0   ; 0045d0d9
    JZ 0x0045d0ec                       ; 0045d0e0
        ;   XREF to: 0045d0ec (CONDITIONAL_JUMP)  ; LAB_0045d0ec
    XOR EAX,EAX                         ; 0045d0e2
        ;   Label: LAB_0045d0e2
    ADD ESP,0x8                         ; 0045d0e4
    POP EBP                             ; 0045d0e7
    POP EDI                             ; 0045d0e8
    POP ESI                             ; 0045d0e9
    POP EBX                             ; 0045d0ea
    RET                                 ; 0045d0eb
    PUSH EDX                            ; 0045d0ec
        ;   Label: LAB_0045d0ec
    LEA EBX,[ESI + 0x2b4]               ; 0045d0ed
    PUSH EBX                            ; 0045d0f3
    CALL FUN_005038a0                   ; 0045d0f4
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0x8],EAX       ; 0045d0f9
    ADD ESP,0x8                         ; 0045d0fd
    PUSH 0x1                            ; 0045d100
    PUSH EBX                            ; 0045d102
    CALL FUN_005038a0                   ; 0045d103
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0xc],EAX       ; 0045d108
    FLD float ptr [ESP + 0xc]           ; 0045d10c
    ADD ESP,0x8                         ; 0045d110
    PUSH 0x3                            ; 0045d113
    FADD float ptr [ESP + 0x4]          ; 0045d115
    PUSH EBX                            ; 0045d119
    FSTP float ptr [ESP + 0x8]          ; 0045d11a
    CALL FUN_005038a0                   ; 0045d11e
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0xc],EAX       ; 0045d123
    FLD float ptr [ESP + 0xc]           ; 0045d127
    ADD ESP,0x8                         ; 0045d12b
    PUSH 0x4                            ; 0045d12e
    FADD float ptr [ESP + 0x4]          ; 0045d130
    PUSH EBX                            ; 0045d134
    FSTP float ptr [ESP + 0x8]          ; 0045d135
    CALL FUN_005038a0                   ; 0045d139
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0xc],EAX       ; 0045d13e
    FLD float ptr [ESP + 0xc]           ; 0045d142
    ADD ESP,0x8                         ; 0045d146
    PUSH 0x5                            ; 0045d149
    FADD float ptr [ESP + 0x4]          ; 0045d14b
    PUSH EBX                            ; 0045d14f
    FSTP float ptr [ESP + 0x8]          ; 0045d150
    CALL FUN_005038a0                   ; 0045d154
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0xc],EAX       ; 0045d159
    FLD float ptr [ESP + 0xc]           ; 0045d15d
    ADD ESP,0x8                         ; 0045d161
    FADD float ptr [ESP]                ; 0045d164
    XOR EDI,EDI                         ; 0045d167
    FCOMP double ptr [0x005d07cf]       ; 0045d169 | DAT_005d07cf
    FNSTSW AX                           ; 0045d16f
    SAHF                                ; 0045d171
    JBE 0x0045d179                      ; 0045d172
        ;   XREF to: 0045d179 (CONDITIONAL_JUMP)  ; LAB_0045d179
    MOV EDI,0x1                         ; 0045d174
    CMP EBP,0xb                         ; 0045d179
        ;   Label: LAB_0045d179
    JA 0x0045d185                       ; 0045d17c
        ;   XREF to: 0045d185 (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EBP*0x4 + 0x45d088]  ; 0045d17e | caseD_6 | caseD_3 | caseD_4
        ;   Label: switchD
    PUSH EBP                            ; 0045d185
        ;   Label: caseD_0
    PUSH ESI                            ; 0045d186
    CALL FUN_004d06c0                   ; 0045d187
        ;   XREF to: 004d06c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d06c0()
    ADD ESP,0x8                         ; 0045d18c
    ADD ESP,0x8                         ; 0045d18f
    POP EBP                             ; 0045d192
    POP EDI                             ; 0045d193
    POP ESI                             ; 0045d194
    POP EBX                             ; 0045d195
    RET                                 ; 0045d196
    PUSH 0x0                            ; 0045d197
        ;   Label: caseD_5
    PUSH ESI                            ; 0045d199
    CALL FUN_0042a5a0                   ; 0045d19a
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a5a0()
    MOV dword ptr [ESP + 0xc],EAX       ; 0045d19f
    FLD float ptr [ESP + 0xc]           ; 0045d1a3
    ADD ESP,0x8                         ; 0045d1a7
    FCOMP double ptr [0x005d07d7]       ; 0045d1aa | DAT_005d07d7
    FNSTSW AX                           ; 0045d1b0
    SAHF                                ; 0045d1b2
    JNC 0x0045d185                      ; 0045d1b3
        ;   XREF to: 0045d185 (CONDITIONAL_JUMP)  ; caseD_6
    XOR EAX,EAX                         ; 0045d1b5
    ADD ESP,0x8                         ; 0045d1b7
    POP EBP                             ; 0045d1ba
    POP EDI                             ; 0045d1bb
    POP ESI                             ; 0045d1bc
    POP EBX                             ; 0045d1bd
    RET                                 ; 0045d1be
    PUSH 0x0                            ; 0045d1bf
        ;   Label: caseD_4
    PUSH ESI                            ; 0045d1c1
    CALL FUN_0042a5a0                   ; 0045d1c2
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a5a0()
    MOV dword ptr [ESP + 0xc],EAX       ; 0045d1c7
    FLD float ptr [ESP + 0xc]           ; 0045d1cb
    ADD ESP,0x8                         ; 0045d1cf
    FCOMP double ptr [0x005d07d7]       ; 0045d1d2 | DAT_005d07d7
    FNSTSW AX                           ; 0045d1d8
    SAHF                                ; 0045d1da
    JC 0x0045d0e2                       ; 0045d1db
        ;   XREF to: 0045d0e2 (CONDITIONAL_JUMP)  ; LAB_0045d0e2
    TEST EDI,EDI                        ; 0045d1e1
        ;   Label: caseD_3
    JNZ 0x0045d185                      ; 0045d1e3
        ;   XREF to: 0045d185 (CONDITIONAL_JUMP)  ; caseD_6
    XOR EAX,EAX                         ; 0045d1e5
    ADD ESP,0x8                         ; 0045d1e7
    POP EBP                             ; 0045d1ea
    POP EDI                             ; 0045d1eb
    POP ESI                             ; 0045d1ec
    POP EBX                             ; 0045d1ed
    RET                                 ; 0045d1ee

