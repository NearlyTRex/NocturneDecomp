; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f5b80(int param_1)
;
;
; XREF[3]:
;   FUN_004f5b70 at 004f5b75
;   FUN_004f5cc0 at 004f5cd2
;   FUN_004f72a0 at 004f7349
;
; Called Functions:
;   FUN_004f6d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5b80
        ;   Label: FUN_004f5b80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f5b81
    PUSH EBX                            ; 004f5b85
    CALL FUN_004f6d70                   ; 004f5b86
        ;   XREF to: 004f6d70 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6d70()
    MOV dword ptr [EBX + 0x4],0x0       ; 004f5b8b
    MOV byte ptr [EBX + 0x133c],0x0     ; 004f5b92
    MOV dword ptr [EBX + 0x1010],0x0    ; 004f5b99
    MOV dword ptr [EBX + 0x1458],0x0    ; 004f5ba3
    ADD ESP,0x4                         ; 004f5bad
    MOV dword ptr [EBX + 0x145c],0x0    ; 004f5bb0
    POP EBX                             ; 004f5bba
    RET                                 ; 004f5bbb

