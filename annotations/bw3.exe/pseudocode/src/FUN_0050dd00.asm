; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0050dd00(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;   FUN_00462500
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050dd00
        ;   Label: FUN_0050dd00
    PUSH ESI                            ; 0050dd01
    PUSH EDI                            ; 0050dd02
    MOV EBX,dword ptr [ESP + 0x10]      ; 0050dd03
    PUSH EBX                            ; 0050dd07
    CALL FUN_00408600                   ; 0050dd08
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 0050dd0d
    ADD EAX,0x158                       ; 0050dd10
    PUSH EAX                            ; 0050dd15
    CALL FUN_00462500                   ; 0050dd16
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 0050dd1b
    LEA EBX,[EAX + 0xfffffea8]          ; 0050dd1e
    PUSH 0x5cbabf                       ; 0050dd24
    LEA EAX,[EBX + 0x158]               ; 0050dd29
    PUSH EAX                            ; 0050dd2f
    MOV dword ptr [EBX + 0x154],0x5e31c4 ; 0050dd30
    CALL FUN_004625f0                   ; 0050dd3a
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0050dd3f
    MOV ESI,0x5cbac8                    ; 0050dd42
    LEA EDI,[EBX + 0x2d4]               ; 0050dd47
    PUSH EDI                            ; 0050dd4d
    MOV AL,byte ptr [ESI]               ; 0050dd4e
        ;   Label: LAB_0050dd4e
    MOV byte ptr [EDI],AL               ; 0050dd50
    CMP AL,0x0                          ; 0050dd52
    JZ 0x0050dd66                       ; 0050dd54
        ;   XREF to: 0050dd66 (CONDITIONAL_JUMP)  ; LAB_0050dd66
    MOV AL,byte ptr [ESI + 0x1]         ; 0050dd56
    ADD ESI,0x2                         ; 0050dd59
    MOV byte ptr [EDI + 0x1],AL         ; 0050dd5c
    ADD EDI,0x2                         ; 0050dd5f
    CMP AL,0x0                          ; 0050dd62
    JNZ 0x0050dd4e                      ; 0050dd64
        ;   XREF to: 0050dd4e (CONDITIONAL_JUMP)  ; LAB_0050dd4e
    POP EDI                             ; 0050dd66
        ;   Label: LAB_0050dd66
    MOV ESI,0x5cbacd                    ; 0050dd67
    LEA EDI,[EBX + 0x338]               ; 0050dd6c
    PUSH EDI                            ; 0050dd72
    MOV AL,byte ptr [ESI]               ; 0050dd73
        ;   Label: LAB_0050dd73
    MOV byte ptr [EDI],AL               ; 0050dd75
    CMP AL,0x0                          ; 0050dd77
    JZ 0x0050dd8b                       ; 0050dd79
        ;   XREF to: 0050dd8b (CONDITIONAL_JUMP)  ; LAB_0050dd8b
    MOV AL,byte ptr [ESI + 0x1]         ; 0050dd7b
    ADD ESI,0x2                         ; 0050dd7e
    MOV byte ptr [EDI + 0x1],AL         ; 0050dd81
    ADD EDI,0x2                         ; 0050dd84
    CMP AL,0x0                          ; 0050dd87
    JNZ 0x0050dd73                      ; 0050dd89
        ;   XREF to: 0050dd73 (CONDITIONAL_JUMP)  ; LAB_0050dd73
    POP EDI                             ; 0050dd8b
        ;   Label: LAB_0050dd8b
    MOV dword ptr [EBX + 0x39c],0x1     ; 0050dd8c
    MOV dword ptr [EBX + 0x3a0],0x0     ; 0050dd96
    MOV dword ptr [EBX + 0x3a8],0x3f060a92 ; 0050dda0
    MOV byte ptr [EBX + 0x3ac],0x0      ; 0050ddaa
    MOV byte ptr [EBX + 0x3d0],0x0      ; 0050ddb1
    MOV byte ptr [EBX + 0x3f0],0x0      ; 0050ddb8
    MOV dword ptr [EBX + 0x3cc],0x0     ; 0050ddbf
    MOV dword ptr [EBX + 0x428],0x0     ; 0050ddc9
    MOV dword ptr [EBX + 0x42c],0x0     ; 0050ddd3
    MOV dword ptr [EBX + 0x430],0x0     ; 0050dddd
    MOV dword ptr [EBX + 0x434],0x0     ; 0050dde7
    MOV dword ptr [EBX + 0x440],0x0     ; 0050ddf1
    MOV EAX,EBX                         ; 0050ddfb
    MOV dword ptr [EBX + 0x43c],0x0     ; 0050ddfd
    POP EDI                             ; 0050de07
    POP ESI                             ; 0050de08
    POP EBX                             ; 0050de09
    RET                                 ; 0050de0a

