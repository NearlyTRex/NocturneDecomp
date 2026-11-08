; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0052c060(int param_1)
;
;
; Called Functions:
;   FUN_0052c090
;   FUN_00534d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052c060
        ;   Label: FUN_0052c060
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052c061
    PUSH EBX                            ; 0052c065
    CALL FUN_0052c090                   ; 0052c066
        ;   XREF to: 0052c090 (UNCONDITIONAL_CALL)  ; undefined FUN_0052c090()
    ADD ESP,0x4                         ; 0052c06b
    PUSH 0x0                            ; 0052c06e
    ADD EBX,0x4                         ; 0052c070
    PUSH EBX                            ; 0052c073
    CALL FUN_00534d80                   ; 0052c074
        ;   XREF to: 00534d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00534d80()
    ADD ESP,0x8                         ; 0052c079
    SUB EAX,0x4                         ; 0052c07c
    POP EBX                             ; 0052c07f
    RET                                 ; 0052c080

