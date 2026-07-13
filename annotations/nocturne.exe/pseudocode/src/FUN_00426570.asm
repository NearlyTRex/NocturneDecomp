; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00426570(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00519b10
;   FUN_0051e020
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00426570
        ;   Label: FUN_00426570
    MOV EAX,dword ptr [ESP + 0x4]       ; 00426574
    PUSH EDX                            ; 00426578
    ADD EAX,0x150                       ; 00426579
    PUSH EAX                            ; 0042657e
    CALL FUN_0051e020                   ; 0042657f
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e020()
    ADD ESP,0x4                         ; 00426584
    PUSH EAX                            ; 00426587
    CALL FUN_00519b10                   ; 00426588
        ;   XREF to: 00519b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b10()
    ADD ESP,0x8                         ; 0042658d
    MOV EAX,dword ptr [EAX + 0x5c]      ; 00426590
    RET                                 ; 00426593

