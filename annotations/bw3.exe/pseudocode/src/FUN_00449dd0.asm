; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00449dd0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
;
; XREF[2]:
;   FUN_00448ff0 at 00449233
;   FUN_0045c530 at 0045c691
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6b598
;   undefined4 DAT_01c6b59c
;   undefined4 DAT_01c6b5a0
;   undefined4 DAT_01c6b5a4
;   undefined4 DAT_01c6e2fc
;   undefined4 DAT_01c6e300
;   undefined4 DAT_01c6e304
;   undefined4 DAT_01c6e308
;   undefined4 DAT_01c6e30c
;   undefined4 DAT_01c6e310
;   undefined4 DAT_01c6e314
;   undefined4 DAT_01c6e318
;   undefined4 DAT_01c6e31c
;
; Called Functions:
;   FUN_00449b30
;   FUN_0046d1a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449dd0
        ;   Label: FUN_00449dd0
    PUSH ESI                            ; 00449dd1
    PUSH EDI                            ; 00449dd2
    SUB ESP,0xc                         ; 00449dd3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00449dd6
    MOV ESI,dword ptr [0x01c6e2fc]      ; 00449dda | DAT_01c6e2fc
    MOV dword ptr [EBX + 0x178],ESI     ; 00449de0
    MOV ESI,dword ptr [0x01c6e300]      ; 00449de6 | DAT_01c6e300
    MOV dword ptr [EBX + 0x17c],ESI     ; 00449dec
    MOV ESI,dword ptr [0x01c6e304]      ; 00449df2 | DAT_01c6e304
    MOV dword ptr [EBX + 0x180],ESI     ; 00449df8
    MOV ESI,dword ptr [0x01c6e308]      ; 00449dfe | DAT_01c6e308
    MOV dword ptr [EBX + 0x184],ESI     ; 00449e04
    MOV ESI,dword ptr [0x01c6e30c]      ; 00449e0a | DAT_01c6e30c
    MOV dword ptr [EBX + 0x188],ESI     ; 00449e10
    MOV ESI,dword ptr [0x01c6e310]      ; 00449e16 | DAT_01c6e310
    MOV dword ptr [EBX + 0x18c],ESI     ; 00449e1c
    MOV ESI,dword ptr [0x01c6e314]      ; 00449e22 | DAT_01c6e314
    MOV dword ptr [EBX + 0x190],ESI     ; 00449e28
    MOV ESI,dword ptr [0x01c6e318]      ; 00449e2e | DAT_01c6e318
    MOV EDX,dword ptr [0x005f2afc]      ; 00449e34 | DAT_005f2afc
    MOV dword ptr [EBX + 0x194],ESI     ; 00449e3a
    MOV ESI,dword ptr [0x01c6e31c]      ; 00449e40 | DAT_01c6e31c
    PUSH EDX                            ; 00449e46 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x198],ESI     ; 00449e47
    LEA ESI,[ESP + 0x4]                 ; 00449e4d
    CALL FUN_0046d1a0                   ; 00449e51
        ;   XREF to: 0046d1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d1a0()
    LEA ESI,[ESP + 0x4]                 ; 00449e56
    LEA EDI,[EBX + 0x16c]               ; 00449e5a
    ADD ESP,0x4                         ; 00449e60
    MOVSD ES:EDI,ESI                    ; 00449e63
    MOVSD ES:EDI,ESI                    ; 00449e64
    MOVSD ES:EDI,ESI                    ; 00449e65
    MOV ESI,dword ptr [0x01c6b598]      ; 00449e66 | DAT_01c6b598
    MOV dword ptr [EBX + 0x1c0],ESI     ; 00449e6c
    MOV ESI,dword ptr [0x01c6b59c]      ; 00449e72 | DAT_01c6b59c
    MOV dword ptr [EBX + 0x1c4],ESI     ; 00449e78
    MOV ESI,dword ptr [0x01c6b5a0]      ; 00449e7e | DAT_01c6b5a0
    MOV dword ptr [EBX + 0x1c8],ESI     ; 00449e84
    MOV ESI,dword ptr [0x01c6b5a4]      ; 00449e8a | DAT_01c6b5a4
    PUSH EBX                            ; 00449e90
    MOV dword ptr [EBX + 0x1cc],ESI     ; 00449e91
    CALL FUN_00449b30                   ; 00449e97
        ;   XREF to: 00449b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00449b30()
    ADD ESP,0x4                         ; 00449e9c
    ADD ESP,0xc                         ; 00449e9f
    POP EDI                             ; 00449ea2
    POP ESI                             ; 00449ea3
    POP EBX                             ; 00449ea4
    RET                                 ; 00449ea5

