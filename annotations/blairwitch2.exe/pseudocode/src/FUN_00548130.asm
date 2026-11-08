; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00548130(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_004277e0 at 0042783c
;   FUN_005480d0 at 00548105
;
; Called Functions:
;   FUN_00543490
;   FUN_005471f0
;   FUN_00547810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548130
        ;   Label: FUN_00548130
    PUSH EDI                            ; 00548131
    PUSH EBP                            ; 00548132
    MOV EBX,dword ptr [ESP + 0x10]      ; 00548133
    MOV EDI,dword ptr [ESP + 0x18]      ; 00548137
    CMP dword ptr [ESP + 0x14],0x0      ; 0054813b
    JNZ 0x00548151                      ; 00548140
        ;   XREF to: 00548151 (CONDITIONAL_JUMP)  ; LAB_00548151
    MOV dword ptr [EBX + EDI*0x4 + 0x2140],0x0 ; 00548142
    POP EBP                             ; 0054814d
    POP EDI                             ; 0054814e
    POP EBX                             ; 0054814f
    RET                                 ; 00548150
    PUSH ESI                            ; 00548151
        ;   Label: LAB_00548151
    PUSH EBX                            ; 00548152
    CALL FUN_00547810                   ; 00548153
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; undefined FUN_00547810()
    MOV EDX,EAX                         ; 00548158
    ADD ESP,0x4                         ; 0054815a
    MOV ESI,EAX                         ; 0054815d
    MOV ECX,dword ptr [EDX]             ; 0054815f
    MOV EAX,0x1                         ; 00548161
    CMP ECX,0x2                         ; 00548166
    JL 0x00548185                       ; 00548169
        ;   XREF to: 00548185 (CONDITIONAL_JUMP)  ; LAB_00548185
    LEA EDX,[EAX*0x8 + 0x0]             ; 0054816b
        ;   Label: LAB_0054816b
    ADD EDX,ESI                         ; 00548172
    XOR ECX,ECX                         ; 00548174
    TEST EAX,EAX                        ; 00548176
        ;   Label: LAB_00548176
    JLE 0x00548189                      ; 00548178
        ;   XREF to: 00548189 (CONDITIONAL_JUMP)  ; LAB_00548189
    CMP ECX,dword ptr [EDX + 0x8]       ; 0054817a
    JZ 0x00548189                       ; 0054817d
        ;   XREF to: 00548189 (CONDITIONAL_JUMP)  ; LAB_00548189
    DEC EAX                             ; 0054817f
    SUB EDX,0x8                         ; 00548180
    JMP 0x00548176                      ; 00548183
        ;   XREF to: 00548176 (UNCONDITIONAL_JUMP)  ; LAB_00548176
    XOR EAX,EAX                         ; 00548185
        ;   Label: LAB_00548185
    JMP 0x0054816b                      ; 00548187
        ;   XREF to: 0054816b (UNCONDITIONAL_JUMP)  ; LAB_0054816b
    CMP EAX,dword ptr [EBX + 0x2230]    ; 00548189
        ;   Label: LAB_00548189
    JZ 0x0054819b                       ; 0054818f
        ;   XREF to: 0054819b (CONDITIONAL_JUMP)  ; LAB_0054819b
    PUSH EAX                            ; 00548191
    PUSH EBX                            ; 00548192
    CALL FUN_005471f0                   ; 00548193
        ;   XREF to: 005471f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005471f0()
    ADD ESP,0x8                         ; 00548198
    MOV ECX,dword ptr [EBX + EDI*0x4 + 0x21b8] ; 0054819b
        ;   Label: LAB_0054819b
    PUSH ECX                            ; 005481a2
    MOV EBP,dword ptr [EBX + 0x2234]    ; 005481a3
    PUSH EBP                            ; 005481a9
    PUSH EDI                            ; 005481aa
    MOV EAX,dword ptr [ESP + 0x24]      ; 005481ab
    PUSH EAX                            ; 005481af
    MOV EDX,dword ptr [EBX + 0x2230]    ; 005481b0
    PUSH EDX                            ; 005481b6
    PUSH ESI                            ; 005481b7
    CALL FUN_00543490                   ; 005481b8
        ;   XREF to: 00543490 (UNCONDITIONAL_CALL)  ; undefined FUN_00543490()
    ADD ESP,0x18                        ; 005481bd
    POP ESI                             ; 005481c0
    MOV dword ptr [EBX + EDI*0x4 + 0x2140],0x0 ; 005481c1
    POP EBP                             ; 005481cc
    POP EDI                             ; 005481cd
    POP EBX                             ; 005481ce
    RET                                 ; 005481cf

