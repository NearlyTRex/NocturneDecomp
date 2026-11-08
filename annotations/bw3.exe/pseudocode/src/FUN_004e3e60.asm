; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e3e60(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_00556be0
;   FUN_0057b7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3e60
        ;   Label: FUN_004e3e60
    PUSH EDI                            ; 004e3e61
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e3e62
    CMP dword ptr [EBX + 0x2d4],0x2     ; 004e3e66
    JNZ 0x004e3e9b                      ; 004e3e6d
        ;   XREF to: 004e3e9b (CONDITIONAL_JUMP)  ; LAB_004e3e9b
    CMP dword ptr [ESP + 0x10],0x1      ; 004e3e6f
    JNZ 0x004e3e9b                      ; 004e3e74
        ;   XREF to: 004e3e9b (CONDITIONAL_JUMP)  ; LAB_004e3e9b
    PUSH ESI                            ; 004e3e76
    MOV ESI,dword ptr [EBX + 0x5c4]     ; 004e3e77
    PUSH ESI                            ; 004e3e7d
    MOV dword ptr [EBX + 0x594],0x0     ; 004e3e7e
    CALL FUN_00556be0                   ; 004e3e88
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556be0()
    ADD ESP,0x4                         ; 004e3e8d
    MOV dword ptr [EBX + 0x5c4],0x0     ; 004e3e90
    POP ESI                             ; 004e3e9a
    MOV EDI,dword ptr [ESP + 0x10]      ; 004e3e9b
        ;   Label: LAB_004e3e9b
    PUSH EDI                            ; 004e3e9f
    PUSH EBX                            ; 004e3ea0
    CALL FUN_0057b7f0                   ; 004e3ea1
        ;   XREF to: 0057b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b7f0()
    ADD ESP,0x8                         ; 004e3ea6
    POP EDI                             ; 004e3ea9
    POP EBX                             ; 004e3eaa
    RET                                 ; 004e3eab

