; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e1c20(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;   FUN_00492350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1c20
        ;   Label: FUN_004e1c20
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e1c21
    PUSH EBX                            ; 004e1c25
    CALL FUN_00408790                   ; 004e1c26
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 004e1c2b
    ADD EAX,0x2b4                       ; 004e1c2e
    PUSH EAX                            ; 004e1c33
    CALL FUN_0044fc80                   ; 004e1c34
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 004e1c39
    LEA EBX,[EAX + 0x2c8]               ; 004e1c3c
    PUSH EBX                            ; 004e1c42
    CALL FUN_00492350                   ; 004e1c43
        ;   XREF to: 00492350 (UNCONDITIONAL_CALL)  ; undefined FUN_00492350()
    ADD ESP,0x4                         ; 004e1c48
    SUB EBX,0x57c                       ; 004e1c4b
    PUSH 0x5dbf09                       ; 004e1c51
    LEA EAX,[EBX + 0x2b4]               ; 004e1c56
    PUSH EAX                            ; 004e1c5c
    MOV dword ptr [EBX + 0x2b0],0x5f94a4 ; 004e1c5d
    CALL FUN_0044fd70                   ; 004e1c67
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    MOV dword ptr [EBX + 0x434],0x0     ; 004e1c6c
    MOV byte ptr [EBX + 0x43c],0x0      ; 004e1c76
    MOV byte ptr [EBX + 0x4a0],0x0      ; 004e1c7d
    MOV byte ptr [EBX + 0x504],0x0      ; 004e1c84
    MOV dword ptr [EBX + 0x438],0x0     ; 004e1c8b
    MOV dword ptr [EBX + 0x568],0x1     ; 004e1c95
    MOV dword ptr [EBX + 0x56c],0x0     ; 004e1c9f
    MOV dword ptr [EBX + 0x570],0x17    ; 004e1ca9
    MOV dword ptr [EBX + 0x574],0x0     ; 004e1cb3
    MOV dword ptr [EBX + 0x578],0x0     ; 004e1cbd
    ADD ESP,0x8                         ; 004e1cc7
    MOV dword ptr [EBX + 0x968],0x2     ; 004e1cca
    MOV EAX,EBX                         ; 004e1cd4
    MOV dword ptr [EBX + 0x96c],0x1     ; 004e1cd6
    POP EBX                             ; 004e1ce0
    RET                                 ; 004e1ce1

