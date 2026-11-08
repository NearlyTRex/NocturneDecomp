; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b0e0(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_0046b0d0 at 0046b0d5
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0046b0e0
        ;   Label: FUN_0046b0e0
    MOV dword ptr [EAX + 0x8],0x0       ; 0046b0e4
    MOV dword ptr [EAX],0x60b014        ; 0046b0eb
    MOV dword ptr [EAX + 0xc],0x1       ; 0046b0f1
    MOV dword ptr [EAX + 0x10],0x1      ; 0046b0f8
    MOV dword ptr [EAX + 0x14],0x0      ; 0046b0ff
    MOV dword ptr [EAX + 0x1c],0x0      ; 0046b106
    MOV dword ptr [EAX + 0x20],0x0      ; 0046b10d
    MOV dword ptr [EAX + 0x4],0x0       ; 0046b114
    RET                                 ; 0046b11b

