; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ca120(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca120
        ;   Label: FUN_004ca120
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ca121
    PUSH EBX                            ; 004ca125
    CALL FUN_00408790                   ; 004ca126
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 004ca12b
    ADD EAX,0x2b4                       ; 004ca12e
    PUSH EAX                            ; 004ca133
    CALL FUN_0044fc80                   ; 004ca134
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 004ca139
    LEA EBX,[EAX + 0xfffffd4c]          ; 004ca13c
    PUSH 0x5d95af                       ; 004ca142
    LEA EAX,[EBX + 0x2b4]               ; 004ca147
    PUSH EAX                            ; 004ca14d
    MOV dword ptr [EBX + 0x2b0],0x5f7cb4 ; 004ca14e
    CALL FUN_0044fd70                   ; 004ca158
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    MOV dword ptr [EBX + 0x430],0x0     ; 004ca15d
    MOV dword ptr [EBX + 0x434],0x41f00000 ; 004ca167
    MOV dword ptr [EBX + 0x438],0x0     ; 004ca171
    MOV dword ptr [EBX + 0x43c],0x0     ; 004ca17b
    MOV dword ptr [EBX + 0x440],0x1     ; 004ca185
    ADD ESP,0x8                         ; 004ca18f
    MOV byte ptr [EBX + 0x444],0x0      ; 004ca192
    MOV EAX,EBX                         ; 004ca199
    MOV byte ptr [EBX + 0x4a8],0x0      ; 004ca19b
    POP EBX                             ; 004ca1a2
    RET                                 ; 004ca1a3

