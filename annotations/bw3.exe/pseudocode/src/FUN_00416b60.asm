; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00416b60(int param_1)
;
;
; Called Functions:
;   FUN_00409db0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00416b60
        ;   Label: FUN_00416b60
    CMP dword ptr [EAX + 0x158],0x0     ; 00416b64
    JZ 0x00416b70                       ; 00416b6b
        ;   XREF to: 00416b70 (CONDITIONAL_JUMP)  ; LAB_00416b70
    XOR EAX,EAX                         ; 00416b6d
    RET                                 ; 00416b6f
    PUSH EAX                            ; 00416b70
        ;   Label: LAB_00416b70
    CALL FUN_00409db0                   ; 00416b71
        ;   XREF to: 00409db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409db0()
    ADD ESP,0x4                         ; 00416b76
    RET                                 ; 00416b79

