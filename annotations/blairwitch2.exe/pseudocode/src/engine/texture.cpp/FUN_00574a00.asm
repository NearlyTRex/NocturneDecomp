; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574a00(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0264bcb8
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574a00
        ;   Label: FUN_00574a00
    PUSH EBP                            ; 00574a01
    MOV EBX,dword ptr [ESP + 0x10]      ; 00574a02
    MOV EDX,dword ptr [EBX + 0x4]       ; 00574a06
    TEST EDX,EDX                        ; 00574a09
    JL 0x00574a43                       ; 00574a0b
        ;   XREF to: 00574a43 (CONDITIONAL_JUMP)  ; LAB_00574a43
    MOV EAX,EDX                         ; 00574a0d
    MOV EDX,dword ptr [ESP + 0xc]       ; 00574a0f
    CMP EAX,dword ptr [EDX + 0x18004]   ; 00574a13
    JGE 0x00574a43                      ; 00574a19
        ;   XREF to: 00574a43 (CONDITIONAL_JUMP)  ; LAB_00574a43
    MOV EBX,dword ptr [EBX + 0x4]       ; 00574a1b
        ;   Label: LAB_00574a1b
    LEA EAX,[EBX*0x4 + 0x0]             ; 00574a1e
    SUB EAX,EBX                         ; 00574a25
    MOV EBX,EAX                         ; 00574a27
    MOV EAX,dword ptr [ESP + 0xc]       ; 00574a29
    SHL EBX,0x5                         ; 00574a2d
    PUSH 0x0                            ; 00574a30
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x60] ; 00574a32
    PUSH EDX                            ; 00574a36
    CALL dword ptr [0x0264bcb8]         ; 00574a37 | DAT_0264bcb8
    ADD ESP,0x8                         ; 00574a3d
    POP EBP                             ; 00574a40
    POP EBX                             ; 00574a41
    RET                                 ; 00574a42
    PUSH EDI                            ; 00574a43
        ;   Label: LAB_00574a43
    PUSH ESI                            ; 00574a44
    LEA EAX,[EBX + 0x8]                 ; 00574a45
    PUSH EAX                            ; 00574a48
    MOV EBP,dword ptr [EBX + 0x4]       ; 00574a49
    PUSH EBP                            ; 00574a4c
    MOV ESI,0x5ec8e2                    ; 00574a4d
    MOV EDI,0x2e9                       ; 00574a52
    PUSH 0x5ec8f8                       ; 00574a57
    MOV dword ptr [0x01d046a0],ESI      ; 00574a5c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00574a62 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00574a68
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 00574a6d
    POP ESI                             ; 00574a70
    POP EDI                             ; 00574a71
    JMP 0x00574a1b                      ; 00574a72
        ;   XREF to: 00574a1b (UNCONDITIONAL_JUMP)  ; LAB_00574a1b

