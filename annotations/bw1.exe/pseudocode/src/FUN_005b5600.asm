; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b5600(int param_1)
;
;
; XREF[2]:
;   FUN_005952f0 at 0059569e
;   FUN_005b7560 at 005b7582
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b5600
        ;   Label: FUN_005b5600
    MOV dword ptr [EAX + 0x2c],0x0      ; 005b5604
    MOV EDX,dword ptr [EAX + 0x2c]      ; 005b560b
    MOV dword ptr [EAX + 0x1c],EDX      ; 005b560e
    MOV EDX,dword ptr [EAX + 0x1c]      ; 005b5611
    MOV dword ptr [EAX + 0xc],EDX       ; 005b5614
    RET                                 ; 005b5617

