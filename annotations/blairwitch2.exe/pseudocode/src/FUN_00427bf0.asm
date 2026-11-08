; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00427bf0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; Called Functions:
;   FUN_00408de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427bf0
        ;   Label: FUN_00427bf0
    PUSH ESI                            ; 00427bf1
    PUSH EDI                            ; 00427bf2
    SUB ESP,0x18                        ; 00427bf3
    MOV EBX,dword ptr [ESP + 0x28]      ; 00427bf6
    CMP dword ptr [EBX + 0x281c],0x0    ; 00427bfa
    JZ 0x00427c0c                       ; 00427c01
        ;   XREF to: 00427c0c (CONDITIONAL_JUMP)  ; LAB_00427c0c
    XOR EAX,EAX                         ; 00427c03
    ADD ESP,0x18                        ; 00427c05
    POP EDI                             ; 00427c08
    POP ESI                             ; 00427c09
    POP EBX                             ; 00427c0a
    RET                                 ; 00427c0b
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00427c0c
        ;   Label: LAB_00427c0c
    PUSH ECX                            ; 00427c10
    PUSH EBX                            ; 00427c11
    LEA ESI,[ESP + 0x8]                 ; 00427c12
    LEA EDI,[ESP + 0x14]                ; 00427c16
    CALL FUN_00408de0                   ; 00427c1a
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA ESI,[ESP + 0x8]                 ; 00427c1f
    ADD ESP,0x8                         ; 00427c23
    LEA EAX,[ESP + 0xc]                 ; 00427c26
    PUSH dword ptr [ESP + 0x30]         ; 00427c2a
    MOVSD ES:EDI,ESI                    ; 00427c2e
    MOVSD ES:EDI,ESI                    ; 00427c2f
    MOVSD ES:EDI,ESI                    ; 00427c30
    PUSH EAX                            ; 00427c31
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 00427c32
    PUSH EBX                            ; 00427c38
    CALL dword ptr [ESI + 0xb4]         ; 00427c39
    ADD ESP,0xc                         ; 00427c3f
    TEST EAX,EAX                        ; 00427c42
    JNZ 0x00427c5a                      ; 00427c44
        ;   XREF to: 00427c5a (CONDITIONAL_JUMP)  ; LAB_00427c5a
    MOV EAX,dword ptr [ESP + 0x34]      ; 00427c46
    MOV dword ptr [EAX + 0x4],0x0       ; 00427c4a
    XOR EAX,EAX                         ; 00427c51
    ADD ESP,0x18                        ; 00427c53
    POP EDI                             ; 00427c56
    POP ESI                             ; 00427c57
    POP EBX                             ; 00427c58
    RET                                 ; 00427c59
    MOV ESI,dword ptr [ESP + 0x34]      ; 00427c5a
        ;   Label: LAB_00427c5a
    PUSH ESI                            ; 00427c5e
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00427c5f
    PUSH EBX                            ; 00427c65
    CALL dword ptr [EAX + 0x110]        ; 00427c66
    MOV EAX,0x1                         ; 00427c6c
    ADD ESP,0x8                         ; 00427c71
    ADD ESP,0x18                        ; 00427c74
    POP EDI                             ; 00427c77
    POP ESI                             ; 00427c78
    POP EBX                             ; 00427c79
    RET                                 ; 00427c7a

