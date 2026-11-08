; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a0fb0(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004e0100 at 004e011e
;
; Called Functions:
;   FUN_0042f320
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a0fb0
        ;   Label: FUN_004a0fb0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a0fb4
    CMP dword ptr [EAX + 0xc1d4],0x0    ; 004a0fb8
    JZ 0x004a0fd9                       ; 004a0fbf
        ;   XREF to: 004a0fd9 (CONDITIONAL_JUMP)  ; LAB_004a0fd9
    TEST EDX,EDX                        ; 004a0fc1
    JZ 0x004a0fcf                       ; 004a0fc3
        ;   XREF to: 004a0fcf (CONDITIONAL_JUMP)  ; LAB_004a0fcf
    MOV dword ptr [EAX + 0x24fc],0x1    ; 004a0fc5
    PUSH EDX                            ; 004a0fcf
        ;   Label: LAB_004a0fcf
    PUSH EAX                            ; 004a0fd0
    CALL FUN_0042f320                   ; 004a0fd1
        ;   XREF to: 0042f320 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f320()
    ADD ESP,0x8                         ; 004a0fd6
    RET                                 ; 004a0fd9
        ;   Label: LAB_004a0fd9

