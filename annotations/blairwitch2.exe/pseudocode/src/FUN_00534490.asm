; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534490(int param_1)
;
;
; XREF[1]:
;   FUN_0052f2a0 at 0052f308
;
; Called Functions:
;   FUN_0052ddf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534490
        ;   Label: FUN_00534490
    PUSH ESI                            ; 00534491
    MOV EBX,dword ptr [ESP + 0xc]       ; 00534492
    MOV EDX,dword ptr [EBX + 0x15aeb8]  ; 00534496
    PUSH EDX                            ; 0053449c
    PUSH EBX                            ; 0053449d
    MOV ESI,dword ptr [EBX + 0x15aebc]  ; 0053449e
    CALL FUN_0052ddf0                   ; 005344a4
        ;   XREF to: 0052ddf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ddf0()
    MOV dword ptr [EBX + 0x15aec0],0x0  ; 005344a9
    ADD ESP,0x8                         ; 005344b3
    MOV dword ptr [EBX + 0x15aebc],ESI  ; 005344b6
    POP ESI                             ; 005344bc
    POP EBX                             ; 005344bd
    RET                                 ; 005344be

