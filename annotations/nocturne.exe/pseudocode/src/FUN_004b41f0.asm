; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b41f0(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_bullet.kfm_00585637
;   undefined1* PTR_FUN_0059ea14 = 004b4250
;
; Called Functions:
;   FUN_00409d30
;   FUN_00454490
;   FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b41f0
        ;   Label: FUN_004b41f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b41f1
    PUSH EBX                            ; 004b41f5
    CALL FUN_00409d30                   ; 004b41f6
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    ADD ESP,0x4                         ; 004b41fb
    ADD EAX,0x150                       ; 004b41fe
    PUSH EAX                            ; 004b4203
    CALL FUN_00454490                   ; 004b4204
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined FUN_00454490()
    ADD ESP,0x4                         ; 004b4209
    LEA EBX,[EAX + 0xfffffeb0]          ; 004b420c
    PUSH 0x585637                       ; 004b4212 | = "bullet.kfm"
    LEA EAX,[EBX + 0x150]               ; 004b4217
    PUSH EAX                            ; 004b421d
    MOV dword ptr [EBX + 0x14c],0x59ea14 ; 004b421e | PTR_FUN_0059ea14
    CALL FUN_00454580                   ; 004b4228
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    ADD ESP,0x8                         ; 004b422d
    MOV dword ptr [EBX + 0x2cc],0x1     ; 004b4230
    MOV EAX,EBX                         ; 004b423a
    MOV dword ptr [EBX + 0x2d0],0x42480000 ; 004b423c
    POP EBX                             ; 004b4246
    RET                                 ; 004b4247

