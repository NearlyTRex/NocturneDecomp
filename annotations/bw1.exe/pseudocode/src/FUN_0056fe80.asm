; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056fe80(int param_1)
;
;
; Called Functions:
;   FUN_00570020
;   FUN_005a0a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fe80
        ;   Label: FUN_0056fe80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056fe81
    PUSH EBX                            ; 0056fe85
    CALL FUN_00570020                   ; 0056fe86
        ;   XREF to: 00570020 (UNCONDITIONAL_CALL)  ; undefined FUN_00570020()
    ADD ESP,0x4                         ; 0056fe8b
    PUSH 0x0                            ; 0056fe8e
    ADD EBX,0x17c                       ; 0056fe90
    PUSH EBX                            ; 0056fe96
    CALL FUN_005a0a50                   ; 0056fe97
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0a50()
    ADD ESP,0x8                         ; 0056fe9c
    SUB EAX,0x17c                       ; 0056fe9f
    POP EBX                             ; 0056fea4
    RET                                 ; 0056fea5

