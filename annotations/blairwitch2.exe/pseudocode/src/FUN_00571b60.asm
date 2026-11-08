; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00571b60(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Hand_005ec3f2
;   TerminatedCString s_Bip01_R_Hand_005ec3ff
;
; Called Functions:
;   FUN_00510510
;   FUN_00540e80
;   FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571b60
        ;   Label: FUN_00571b60
    PUSH ESI                            ; 00571b61
    MOV EBX,dword ptr [ESP + 0xc]       ; 00571b62
    PUSH EBX                            ; 00571b66
    CALL FUN_00510510                   ; 00571b67
        ;   XREF to: 00510510 (UNCONDITIONAL_CALL)  ; undefined FUN_00510510()
    ADD ESP,0x4                         ; 00571b6c
    LEA EAX,[EBX + 0x2b4]               ; 00571b6f
    PUSH EAX                            ; 00571b75
    CALL FUN_00547890                   ; 00571b76
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 00571b7b
    PUSH 0x1                            ; 00571b7e
    PUSH 0x5ec3f2                       ; 00571b80 | = "Bip01 L Hand"
    PUSH EAX                            ; 00571b85
    MOV ESI,EAX                         ; 00571b86
    CALL FUN_00540e80                   ; 00571b88
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 00571b8d
    PUSH 0x1                            ; 00571b90
    PUSH 0x5ec3ff                       ; 00571b92 | = "Bip01 R Hand"
    PUSH ESI                            ; 00571b97
    MOV dword ptr [EBX + 0x24348],EAX   ; 00571b98
    CALL FUN_00540e80                   ; 00571b9e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    MOV dword ptr [EBX + 0x261c],0x0    ; 00571ba3
    MOV dword ptr [EBX + 0x2434c],EAX   ; 00571bad
    MOV EAX,dword ptr [EBX + 0x24348]   ; 00571bb3
    ADD ESP,0xc                         ; 00571bb9
    MOV dword ptr [EBX + 0x2618],EAX    ; 00571bbc
    POP ESI                             ; 00571bc2
    POP EBX                             ; 00571bc3
    RET                                 ; 00571bc4

