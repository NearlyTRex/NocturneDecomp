; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e7820(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00616494
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0044fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7820
        ;   Label: FUN_004e7820
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e7821
    PUSH EBX                            ; 004e7825
    CALL FUN_004089d0                   ; 004e7826
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 004e782b
    MOV EAX,[0x00616494]                ; 004e782e | DAT_00616494
    PUSH -0x1                           ; 004e7833
    MOV dword ptr [EAX + 0x210],0x1     ; 004e7835
    LEA EAX,[EBX + 0x2b4]               ; 004e783f
    PUSH 0x0                            ; 004e7845
    PUSH EAX                            ; 004e7847
    CALL FUN_0044fcc0                   ; 004e7848
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 004e784d
    MOV EAX,[0x00616494]                ; 004e7850 | DAT_00616494
    PUSH EBX                            ; 004e7855
    MOV dword ptr [EAX + 0x210],0x0     ; 004e7856
    CALL FUN_00408a10                   ; 004e7860
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    MOV EAX,0x1                         ; 004e7865
    ADD ESP,0x4                         ; 004e786a
    POP EBX                             ; 004e786d
    RET                                 ; 004e786e

