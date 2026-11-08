; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049d120(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[5]:
;   FUN_00485b40 at 00485ec0
;   FUN_004cbdc0 at 004cc05e
;   FUN_0053f170 at 0053f4e0
;   FUN_00575800 at 00575ae4
;   FUN_0057fc20 at 005800ca
;
; Referenced Globals:
;   undefined4 DAT_01c85ff8
;
; Called Functions:
;   FUN_004969a0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0049d120
        ;   Label: FUN_0049d120
    PUSH EDI                            ; 0049d121
    MOV EDX,dword ptr [0x01c85ff8]      ; 0049d122 | DAT_01c85ff8
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049d128
    SUB EAX,EDX                         ; 0049d12f
    SHL EAX,0x3                         ; 0049d131
    SUB EAX,EDX                         ; 0049d134
    SHL EAX,0x2                         ; 0049d136
    INC EDX                             ; 0049d139
    ADD EAX,0x1c85ffc                   ; 0049d13a
    MOV dword ptr [0x01c85ff8],EDX      ; 0049d13f | DAT_01c85ff8
    CMP EDX,0x14                        ; 0049d145
    JL 0x0049d154                       ; 0049d148
        ;   XREF to: 0049d154 (CONDITIONAL_JUMP)  ; LAB_0049d154
    PUSH EBX                            ; 0049d14a
    XOR EBX,EBX                         ; 0049d14b
    MOV dword ptr [0x01c85ff8],EBX      ; 0049d14d | DAT_01c85ff8
    POP EBX                             ; 0049d153
    MOV ESI,dword ptr [ESP + 0x14]      ; 0049d154
        ;   Label: LAB_0049d154
    PUSH ESI                            ; 0049d158
    MOV EDI,dword ptr [ESP + 0x14]      ; 0049d159
    PUSH EDI                            ; 0049d15d
    PUSH EAX                            ; 0049d15e
    CALL FUN_004969a0                   ; 0049d15f
        ;   XREF to: 004969a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004969a0()
    ADD ESP,0xc                         ; 0049d164
    POP EDI                             ; 0049d167
    POP ESI                             ; 0049d168
    RET                                 ; 0049d169

