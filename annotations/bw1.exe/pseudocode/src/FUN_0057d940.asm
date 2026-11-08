; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0057d940(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_00408c60 at 00408c7a
;   FUN_004b56a0 at 004b59cf
;   FUN_004b5bc0 at 004b5cf7
;
; Called Functions:
;   FUN_005729d0
;   FUN_00572ac0
;   FUN_00572b40
;   FUN_0057bef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d940
        ;   Label: FUN_0057d940
    MOV EBX,dword ptr [ESP + 0x14]      ; 0057d941
    CALL FUN_00572ac0                   ; 0057d945
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00572ac0()
    PUSH dword ptr [ESP + 0x18]         ; 0057d94a
    CALL FUN_005729d0                   ; 0057d94e
        ;   XREF to: 005729d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005729d0()
    ADD ESP,0x4                         ; 0057d953
    PUSH 0x0                            ; 0057d956
    PUSH 0x0                            ; 0057d958
    PUSH dword ptr [EBX + 0x8]          ; 0057d95a
    PUSH dword ptr [EBX + 0x4]          ; 0057d95d
    MOV EDX,dword ptr [ESP + 0x20]      ; 0057d960
    PUSH dword ptr [EBX]                ; 0057d964
    PUSH EDX                            ; 0057d966
    MOV ECX,dword ptr [ESP + 0x24]      ; 0057d967
    PUSH ECX                            ; 0057d96b
    CALL FUN_0057bef0                   ; 0057d96c
        ;   XREF to: 0057bef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057bef0()
    ADD ESP,0x1c                        ; 0057d971
    MOV EBX,EAX                         ; 0057d974
    CALL FUN_00572b40                   ; 0057d976
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00572b40()
    MOV EAX,EBX                         ; 0057d97b
    POP EBX                             ; 0057d97d
    RET                                 ; 0057d97e

