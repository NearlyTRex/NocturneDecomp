; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00510070(int param_1)
;
;
; Called Functions:
;   FUN_004f0230
;   FUN_005103c0
;   FUN_005103e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00510070
        ;   Label: FUN_00510070
    PUSH 0x0                            ; 00510074
    ADD EAX,0x12c                       ; 00510076
    PUSH EAX                            ; 0051007b
    CALL FUN_005103e0                   ; 0051007c
        ;   XREF to: 005103e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005103e0()
    ADD ESP,0x8                         ; 00510081
    PUSH 0x0                            ; 00510084
    SUB EAX,0x8c                        ; 00510086
    PUSH EAX                            ; 0051008b
    CALL FUN_005103c0                   ; 0051008c
        ;   XREF to: 005103c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005103c0()
    ADD ESP,0x8                         ; 00510091
    PUSH 0x0                            ; 00510094
    SUB EAX,0xa0                        ; 00510096
    PUSH EAX                            ; 0051009b
    CALL FUN_004f0230                   ; 0051009c
        ;   XREF to: 004f0230 (UNCONDITIONAL_CALL)  ; undefined FUN_004f0230()
    ADD ESP,0x8                         ; 005100a1
    RET                                 ; 005100a4

