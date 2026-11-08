; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0058cf00(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0054eae0
;   FUN_005888d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058cf00
        ;   Label: FUN_0058cf00
    MOV EDX,dword ptr [ESP + 0x8]       ; 0058cf01
    PUSH EDX                            ; 0058cf05
    CALL FUN_005888d0                   ; 0058cf06
        ;   XREF to: 005888d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005888d0()
    ADD ESP,0x4                         ; 0058cf0b
    PUSH 0x5d89cb                       ; 0058cf0e
    MOV EBX,EAX                         ; 0058cf13
    ADD EAX,0x158                       ; 0058cf15
    PUSH EAX                            ; 0058cf1a
    MOV dword ptr [EAX + -0x4],0x5e6e24 ; 0058cf1b
    CALL FUN_0054eae0                   ; 0058cf22
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV dword ptr [EBX + 0xd140],0x5    ; 0058cf27
    MOV dword ptr [EBX + 0x2538],0x42480000 ; 0058cf31
    MOV dword ptr [EBX + 0xce5c],0x41700000 ; 0058cf3b
    ADD ESP,0x8                         ; 0058cf45
    MOV dword ptr [EBX + 0xce60],0x41700000 ; 0058cf48
    MOV EAX,EBX                         ; 0058cf52
    MOV dword ptr [EBX + 0xd0dc],0x1    ; 0058cf54
    POP EBX                             ; 0058cf5e
    RET                                 ; 0058cf5f

