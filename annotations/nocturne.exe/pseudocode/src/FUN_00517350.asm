; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00517350(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004e0900
;   FUN_005670b1
;
; *****************************************************************************

section .text

    PUSH 0x8                            ; 00517350
        ;   Label: FUN_00517350
    CALL FUN_005670b1                   ; 00517355
        ;   XREF to: 005670b1 (UNCONDITIONAL_CALL)  ; undefined FUN_005670b1()
    MOV EDX,dword ptr [ESP + 0x4]       ; 0051735a
    PUSH EDX                            ; 0051735e
    CALL FUN_004e0900                   ; 0051735f
        ;   XREF to: 004e0900 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0900()
    MOV dword ptr [EAX + 0x28558],0x0   ; 00517364
    MOV dword ptr [EAX + 0x2936c],0x0   ; 0051736e
    MOV dword ptr [EAX + 0x29370],0x0   ; 00517378
    MOV dword ptr [EAX + 0x29374],0x0   ; 00517382
    ADD ESP,0x4                         ; 0051738c
    MOV dword ptr [EAX + 0x29378],0x0   ; 0051738f
    RET                                 ; 00517399

