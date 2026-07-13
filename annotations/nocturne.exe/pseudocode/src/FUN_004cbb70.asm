; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004cbb70(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c777e0
;
; Called Functions:
;   FUN_00409f20
;   FUN_00409f60
;   FUN_004544d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbb70
        ;   Label: FUN_004cbb70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cbb71
    PUSH EBX                            ; 004cbb75
    CALL FUN_00409f20                   ; 004cbb76
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00409f20()
    ADD ESP,0x4                         ; 004cbb7b
    MOV EAX,[0x005b9354]                ; 004cbb7e | DAT_005b9354
    PUSH -0x1                           ; 004cbb83
    MOV dword ptr [EAX + 0x1f4],0x1     ; 004cbb85 | DAT_01c777e0
    LEA EAX,[EBX + 0x150]               ; 004cbb8f
    PUSH 0x0                            ; 004cbb95
    PUSH EAX                            ; 004cbb97
    CALL FUN_004544d0                   ; 004cbb98
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004544d0()
    ADD ESP,0xc                         ; 004cbb9d
    MOV EAX,[0x005b9354]                ; 004cbba0 | DAT_005b9354
    PUSH EBX                            ; 004cbba5
    MOV dword ptr [EAX + 0x1f4],0x0     ; 004cbba6 | DAT_01c777e0
    CALL FUN_00409f60                   ; 004cbbb0
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined FUN_00409f60()
    MOV EAX,0x1                         ; 004cbbb5
    ADD ESP,0x4                         ; 004cbbba
    POP EBX                             ; 004cbbbd
    RET                                 ; 004cbbbe

