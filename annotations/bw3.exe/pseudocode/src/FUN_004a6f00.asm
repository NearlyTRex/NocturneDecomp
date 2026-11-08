; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a6f00(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;   FUN_00462500
;   FUN_004625f0
;   FUN_004a59b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6f00
        ;   Label: FUN_004a6f00
    PUSH ESI                            ; 004a6f01
    PUSH EDI                            ; 004a6f02
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a6f03
    PUSH EBX                            ; 004a6f07
    CALL FUN_00408600                   ; 004a6f08
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 004a6f0d
    ADD EAX,0x158                       ; 004a6f10
    PUSH EAX                            ; 004a6f15
    CALL FUN_00462500                   ; 004a6f16
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 004a6f1b
    ADD EAX,0x1e8                       ; 004a6f1e
    PUSH EAX                            ; 004a6f23
    CALL FUN_004a59b0                   ; 004a6f24
        ;   XREF to: 004a59b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a59b0()
    ADD ESP,0x4                         ; 004a6f29
    LEA EBX,[EAX + 0xfffffcc0]          ; 004a6f2c
    PUSH 0x5c0c96                       ; 004a6f32
    LEA EAX,[EBX + 0x158]               ; 004a6f37
    PUSH EAX                            ; 004a6f3d
    MOV ESI,0x5c0ca3                    ; 004a6f3e
    MOV dword ptr [EBX + 0x154],0x5dff74 ; 004a6f43
    CALL FUN_004625f0                   ; 004a6f4d
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 004a6f52
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004a6f55
    LEA EDI,[EBX + 0x2dc]               ; 004a6f5f
    MOV dword ptr [EBX + 0x2d8],0x41200000 ; 004a6f65
    PUSH EDI                            ; 004a6f6f
    MOV AL,byte ptr [ESI]               ; 004a6f70
        ;   Label: LAB_004a6f70
    MOV byte ptr [EDI],AL               ; 004a6f72
    CMP AL,0x0                          ; 004a6f74
    JZ 0x004a6f88                       ; 004a6f76
        ;   XREF to: 004a6f88 (CONDITIONAL_JUMP)  ; LAB_004a6f88
    MOV AL,byte ptr [ESI + 0x1]         ; 004a6f78
    ADD ESI,0x2                         ; 004a6f7b
    MOV byte ptr [EDI + 0x1],AL         ; 004a6f7e
    ADD EDI,0x2                         ; 004a6f81
    CMP AL,0x0                          ; 004a6f84
    JNZ 0x004a6f70                      ; 004a6f86
        ;   XREF to: 004a6f70 (CONDITIONAL_JUMP)  ; LAB_004a6f70
    POP EDI                             ; 004a6f88
        ;   Label: LAB_004a6f88
    MOV EAX,EBX                         ; 004a6f89
    MOV dword ptr [EBX + 0x5e4],0x0     ; 004a6f8b
    POP EDI                             ; 004a6f95
    POP ESI                             ; 004a6f96
    POP EBX                             ; 004a6f97
    RET                                 ; 004a6f98

