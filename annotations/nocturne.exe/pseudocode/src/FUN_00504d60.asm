; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00504d60(int param_1)
;
;
; XREF[2]:
;   FUN_0049f930 at 004a0163
;   FUN_00504d90 at 00504dad
;
; Called Functions:
;   FUN_00504bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504d60
        ;   Label: FUN_00504d60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00504d61
    MOV EDX,dword ptr [EBX + 0x4]       ; 00504d65
    PUSH EDX                            ; 00504d68
    PUSH EBX                            ; 00504d69
    CALL FUN_00504bf0                   ; 00504d6a
        ;   XREF to: 00504bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00504bf0()
    MOV dword ptr [EBX + 0x44],0x0      ; 00504d6f
    ADD ESP,0x8                         ; 00504d76
    MOV dword ptr [EBX + 0x48],0x0      ; 00504d79
    POP EBX                             ; 00504d80
    RET                                 ; 00504d81

