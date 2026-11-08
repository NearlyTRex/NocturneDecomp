; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056bf80(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00556be0
;   FUN_0057b7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056bf80
        ;   Label: FUN_0056bf80
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056bf81
    MOV EDX,dword ptr [EAX + 0x598]     ; 0056bf85
    PUSH EDX                            ; 0056bf8b
    CALL FUN_00556be0                   ; 0056bf8c
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556be0()
    ADD ESP,0x4                         ; 0056bf91
    MOV ECX,dword ptr [ESP + 0xc]       ; 0056bf94
    PUSH ECX                            ; 0056bf98
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056bf99
    PUSH EBX                            ; 0056bf9d
    CALL FUN_0057b7f0                   ; 0056bf9e
        ;   XREF to: 0057b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b7f0()
    ADD ESP,0x8                         ; 0056bfa3
    POP EBX                             ; 0056bfa6
    RET                                 ; 0056bfa7

