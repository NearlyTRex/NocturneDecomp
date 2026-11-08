; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b70f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[3]:
;   FUN_00445cb0 at 00445e87
;   FUN_004615b0 at 00462174
;   FUN_004b7150 at 004b7219
;
; Referenced Globals:
;   undefined4 DAT_01cba030
;
; Called Functions:
;   FUN_004b3c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b70f0
        ;   Label: FUN_004b70f0
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004b70f1
    PUSH EDX                            ; 004b70f5
    MOV ECX,dword ptr [ESP + 0x10]      ; 004b70f6
    MOV EDX,dword ptr [0x01cba030]      ; 004b70fa | DAT_01cba030
    PUSH dword ptr [ESP + 0x1c]         ; 004b7100
    LEA EAX,[EDX*0x8 + 0x0]             ; 004b7104
    PUSH dword ptr [ESP + 0x1c]         ; 004b710b
    ADD EAX,EDX                         ; 004b710f
    PUSH dword ptr [ESP + 0x1c]         ; 004b7111
    SHL EAX,0x2                         ; 004b7115
    PUSH ECX                            ; 004b7118
    ADD EAX,0x1cba034                   ; 004b7119
    PUSH EAX                            ; 004b711e
    CALL FUN_004b3c80                   ; 004b711f
        ;   XREF to: 004b3c80 (UNCONDITIONAL_CALL)  ; undefined FUN_004b3c80()
    MOV EBX,dword ptr [0x01cba030]      ; 004b7124 | DAT_01cba030
    INC EBX                             ; 004b712a
    ADD ESP,0x18                        ; 004b712b
    MOV dword ptr [0x01cba030],EBX      ; 004b712e | DAT_01cba030
    CMP EBX,0x64                        ; 004b7134
    JGE 0x004b713b                      ; 004b7137
        ;   XREF to: 004b713b (CONDITIONAL_JUMP)  ; LAB_004b713b
    POP EBX                             ; 004b7139
    RET                                 ; 004b713a
    PUSH EDI                            ; 004b713b
        ;   Label: LAB_004b713b
    XOR EDI,EDI                         ; 004b713c
    MOV dword ptr [0x01cba030],EDI      ; 004b713e | DAT_01cba030
    POP EDI                             ; 004b7144
    POP EBX                             ; 004b7145
    RET                                 ; 004b7146

