; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f8150(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_004f8b90 at 004f8cdd
;   FUN_004f9200 at 004f921b
;
; Called Functions:
;   FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8150
        ;   Label: FUN_004f8150
    PUSH ESI                            ; 004f8151
    PUSH EDI                            ; 004f8152
    PUSH EBP                            ; 004f8153
    MOV EBP,dword ptr [ESP + 0x14]      ; 004f8154
    MOV ESI,dword ptr [EBP + 0x208]     ; 004f8158
    DEC ESI                             ; 004f815e
    XOR EDI,EDI                         ; 004f815f
    TEST ESI,ESI                        ; 004f8161
    JL 0x004f819a                       ; 004f8163
        ;   XREF to: 004f819a (CONDITIONAL_JUMP)  ; LAB_004f819a
    LEA EDX,[EDI + ESI*0x1]             ; 004f8165
        ;   Label: LAB_004f8165
    MOV EAX,EDX                         ; 004f8168
    SAR EDX,0x1f                        ; 004f816a
    SUB EAX,EDX                         ; 004f816d
    SAR EAX,0x1                         ; 004f816f
    MOV EBX,EAX                         ; 004f8171
    IMUL EAX,EAX,0x14                   ; 004f8173
    MOV EDX,dword ptr [EBP + 0x20c]     ; 004f8176
    MOV ECX,dword ptr [EDX + EAX*0x1]   ; 004f817c
    PUSH ECX                            ; 004f817f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f8180
    PUSH EAX                            ; 004f8184
    CALL FUN_00564520                   ; 004f8185
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined FUN_00564520()
    ADD ESP,0x8                         ; 004f818a
    TEST EAX,EAX                        ; 004f818d
    JZ 0x004f81a4                       ; 004f818f
        ;   XREF to: 004f81a4 (CONDITIONAL_JUMP)  ; LAB_004f81a4
    JL 0x004f81ab                       ; 004f8191
        ;   XREF to: 004f81ab (CONDITIONAL_JUMP)  ; LAB_004f81ab
    LEA EDI,[EBX + 0x1]                 ; 004f8193
    CMP EDI,ESI                         ; 004f8196
    JLE 0x004f8165                      ; 004f8198
        ;   XREF to: 004f8165 (CONDITIONAL_JUMP)  ; LAB_004f8165
    MOV EAX,0xffffffff                  ; 004f819a
        ;   Label: LAB_004f819a
    POP EBP                             ; 004f819f
    POP EDI                             ; 004f81a0
    POP ESI                             ; 004f81a1
    POP EBX                             ; 004f81a2
    RET                                 ; 004f81a3
    MOV EAX,EBX                         ; 004f81a4
        ;   Label: LAB_004f81a4
    POP EBP                             ; 004f81a6
    POP EDI                             ; 004f81a7
    POP ESI                             ; 004f81a8
    POP EBX                             ; 004f81a9
    RET                                 ; 004f81aa
    LEA ESI,[EBX + -0x1]                ; 004f81ab
        ;   Label: LAB_004f81ab
    CMP EDI,ESI                         ; 004f81ae
    JLE 0x004f8165                      ; 004f81b0
        ;   XREF to: 004f8165 (CONDITIONAL_JUMP)  ; LAB_004f8165
    MOV EAX,0xffffffff                  ; 004f81b2
    POP EBP                             ; 004f81b7
    POP EDI                             ; 004f81b8
    POP ESI                             ; 004f81b9
    POP EBX                             ; 004f81ba
    RET                                 ; 004f81bb

