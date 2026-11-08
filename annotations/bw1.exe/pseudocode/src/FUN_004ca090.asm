; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ca090(int param_1)
;
;
; Called Functions:
;   FUN_004301e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ca090
        ;   Label: FUN_004ca090
    MOV EAX,dword ptr [EAX + 0x1fe20]   ; 004ca094
    PUSH EAX                            ; 004ca09a
    MOV EDX,dword ptr [EAX + 0x154]     ; 004ca09b
    CALL dword ptr [EDX + 0x14]         ; 004ca0a1
    ADD ESP,0x4                         ; 004ca0a4
    MOV EDX,dword ptr [ESP + 0x4]       ; 004ca0a7
    PUSH EDX                            ; 004ca0ab
    CALL FUN_004301e0                   ; 004ca0ac
        ;   XREF to: 004301e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004301e0()
    MOV EAX,0x1                         ; 004ca0b1
    ADD ESP,0x4                         ; 004ca0b6
    RET                                 ; 004ca0b9

