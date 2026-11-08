; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a9e10(int param_1)
;
;
; Called Functions:
;   FUN_0040d2e0
;   FUN_004a9eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9e10
        ;   Label: FUN_004a9e10
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a9e11
    ADD EBX,0x70                        ; 004a9e15
    PUSH EBX                            ; 004a9e18
    CALL FUN_0040d2e0                   ; 004a9e19
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2e0()
    ADD ESP,0x4                         ; 004a9e1e
    ADD EAX,0x18                        ; 004a9e21
    PUSH EAX                            ; 004a9e24
    CALL FUN_0040d2e0                   ; 004a9e25
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2e0()
    LEA EBX,[EAX + 0xffffff78]          ; 004a9e2a
    MOV byte ptr [EBX + 0x4],0x0        ; 004a9e30
    MOV dword ptr [EBX + 0x84],0x0      ; 004a9e34
    ADD ESP,0x4                         ; 004a9e3e
    MOV dword ptr [EBX + 0x9c],0x0      ; 004a9e41
    PUSH EBX                            ; 004a9e4b
    MOV dword ptr [EBX + 0x5f0],0x0     ; 004a9e4c
    CALL FUN_004a9eb0                   ; 004a9e56
        ;   XREF to: 004a9eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9eb0()
    ADD ESP,0x4                         ; 004a9e5b
    MOV EAX,EBX                         ; 004a9e5e
    POP EBX                             ; 004a9e60
    RET                                 ; 004a9e61

