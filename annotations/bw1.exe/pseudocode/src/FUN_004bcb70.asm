; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004bcb70(int param_1)
;
;
; Called Functions:
;   FUN_004bb1c0
;   FUN_004bdaa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bcb70
        ;   Label: FUN_004bcb70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bcb71
    PUSH EBX                            ; 004bcb75
    CALL FUN_004bdaa0                   ; 004bcb76
        ;   XREF to: 004bdaa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bdaa0()
    ADD ESP,0x4                         ; 004bcb7b
    PUSH 0x1cc7cd4                      ; 004bcb7e
    MOV dword ptr [EBX + 0x40],0x0      ; 004bcb83
    CALL FUN_004bb1c0                   ; 004bcb8a
        ;   XREF to: 004bb1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb1c0()
    ADD ESP,0x4                         ; 004bcb8f
    MOV EAX,EBX                         ; 004bcb92
    POP EBX                             ; 004bcb94
    RET                                 ; 004bcb95

