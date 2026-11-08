; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00416d60(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_REC_FOWARD_SWITCH_WAV_005d3fca
;   undefined4 DAT_007c397c
;   undefined4 DAT_01c4353c
;
; Called Functions:
;   FUN_00572d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416d60
        ;   Label: FUN_00416d60
    PUSH ESI                            ; 00416d61
    PUSH EDI                            ; 00416d62
    MOV EBX,dword ptr [ESP + 0x10]      ; 00416d63
    MOV EAX,0x2                         ; 00416d67
    CMP EAX,dword ptr [EBX + 0x20]      ; 00416d6c
    JZ 0x00416d80                       ; 00416d6f
        ;   XREF to: 00416d80 (CONDITIONAL_JUMP)  ; LAB_00416d80
    INC EAX                             ; 00416d71
        ;   Label: LAB_00416d71
    CMP EAX,0x5                         ; 00416d72
    JGE 0x00416de5                      ; 00416d75
        ;   XREF to: 00416de5 (CONDITIONAL_JUMP)  ; LAB_00416de5
    CMP EAX,dword ptr [EBX + 0x20]      ; 00416d7b
    JNZ 0x00416d71                      ; 00416d7e
        ;   XREF to: 00416d71 (CONDITIONAL_JUMP)  ; LAB_00416d71
    MOV EDX,EAX                         ; 00416d80
        ;   Label: LAB_00416d80
    SHL EAX,0x2                         ; 00416d82
    SUB EAX,EDX                         ; 00416d85
    SHL EAX,0x2                         ; 00416d87
    SUB EAX,EDX                         ; 00416d8a
    MOV ESI,dword ptr [0x007c397c]      ; 00416d8c | DAT_007c397c
    MOV dword ptr [EBX + EAX*0x4 + 0x88],0x0 ; 00416d92
    CMP ESI,dword ptr [0x01c4353c]      ; 00416d9d | DAT_01c4353c
    JGE 0x00416de9                      ; 00416da3
        ;   XREF to: 00416de9 (CONDITIONAL_JUMP)  ; LAB_00416de9
    MOV EAX,dword ptr [EBX + 0x34]      ; 00416da5
    INC EAX                             ; 00416da8
    MOV dword ptr [EBX + 0x34],EAX      ; 00416da9
    CMP EAX,0x2                         ; 00416dac
    JLE 0x00416db8                      ; 00416daf
        ;   XREF to: 00416db8 (CONDITIONAL_JUMP)  ; LAB_00416db8
    MOV dword ptr [EBX + 0x34],0x2      ; 00416db1
    PUSH 0x5d3fca                       ; 00416db8 | = "REC-FOWARD-SWITCH.WAV"
        ;   Label: LAB_00416db8
    CALL FUN_00572d20                   ; 00416dbd
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00572d20()
    ADD ESP,0x4                         ; 00416dc2
    MOV dword ptr [EBX + 0x58],EAX      ; 00416dc5
    MOV EAX,[0x01c4353c]                ; 00416dc8 | DAT_01c4353c
    MOV ECX,dword ptr [EBX + 0x34]      ; 00416dcd
    MOV [0x007c397c],EAX                ; 00416dd0 | DAT_007c397c
    CMP ECX,0x2                         ; 00416dd5
    JGE 0x00416dfd                      ; 00416dd8
        ;   XREF to: 00416dfd (CONDITIONAL_JUMP)  ; LAB_00416dfd
    TEST ECX,ECX                        ; 00416dda
    JLE 0x00416dfd                      ; 00416ddc
        ;   XREF to: 00416dfd (CONDITIONAL_JUMP)  ; LAB_00416dfd
    MOV dword ptr [EBX + 0x18],0x1      ; 00416dde
    POP EDI                             ; 00416de5
        ;   Label: LAB_00416de5
    POP ESI                             ; 00416de6
    POP EBX                             ; 00416de7
    RET                                 ; 00416de8
    MOV EDI,dword ptr [EBX + 0x34]      ; 00416de9
        ;   Label: LAB_00416de9
    DEC EDI                             ; 00416dec
    MOV dword ptr [EBX + 0x34],EDI      ; 00416ded
    TEST EDI,EDI                        ; 00416df0
    JGE 0x00416db8                      ; 00416df2
        ;   XREF to: 00416db8 (CONDITIONAL_JUMP)  ; LAB_00416db8
    MOV dword ptr [EBX + 0x34],0x0      ; 00416df4
    JMP 0x00416db8                      ; 00416dfb
        ;   XREF to: 00416db8 (UNCONDITIONAL_JUMP)  ; LAB_00416db8
    MOV EDI,dword ptr [EBX + 0x34]      ; 00416dfd
        ;   Label: LAB_00416dfd
    CMP EDI,0x2                         ; 00416e00
    JNZ 0x00416e0c                      ; 00416e03
        ;   XREF to: 00416e0c (CONDITIONAL_JUMP)  ; LAB_00416e0c
    MOV dword ptr [EBX + 0x18],EDI      ; 00416e05
    POP EDI                             ; 00416e08
    POP ESI                             ; 00416e09
    POP EBX                             ; 00416e0a
    RET                                 ; 00416e0b
    MOV dword ptr [EBX + 0x18],0x3      ; 00416e0c
        ;   Label: LAB_00416e0c
    POP EDI                             ; 00416e13
    POP ESI                             ; 00416e14
    POP EBX                             ; 00416e15
    RET                                 ; 00416e16

