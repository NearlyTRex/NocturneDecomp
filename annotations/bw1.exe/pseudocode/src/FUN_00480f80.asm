; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00480f80(int *param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00480fa0 at 00480fe6
;   FUN_00543c00 at 00543ded
;
; Called Functions:
;   FUN_00480d20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00480f80
        ;   Label: FUN_00480f80
    MOV EAX,dword ptr [EDX + 0x4]       ; 00480f84
    DEC EAX                             ; 00480f87
    PUSH EAX                            ; 00480f88
    MOV EAX,dword ptr [EDX]             ; 00480f89
    PUSH 0x0                            ; 00480f8b
    DEC EAX                             ; 00480f8d
    PUSH EAX                            ; 00480f8e
    PUSH 0x0                            ; 00480f8f
    MOV ECX,dword ptr [ESP + 0x18]      ; 00480f91
    PUSH ECX                            ; 00480f95
    PUSH EDX                            ; 00480f96
    CALL FUN_00480d20                   ; 00480f97
        ;   XREF to: 00480d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00480d20()
    ADD ESP,0x18                        ; 00480f9c
    RET                                 ; 00480f9f

