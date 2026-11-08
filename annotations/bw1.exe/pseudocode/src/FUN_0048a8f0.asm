; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048a8f0(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_0054cec0 at 0054cef9
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048a8f0
        ;   Label: FUN_0048a8f0
    MOV dword ptr [EAX + 0xc],0x0       ; 0048a8f4
    MOV dword ptr [EAX + 0x4],0x0       ; 0048a8fb
    MOV dword ptr [EAX + 0x4c],0x0      ; 0048a902
    MOV dword ptr [EAX + 0x40],0x0      ; 0048a909
    MOV dword ptr [EAX + 0x44],0x0      ; 0048a910
    MOV dword ptr [EAX + 0x48],0x0      ; 0048a917
    MOV dword ptr [EAX],0x0             ; 0048a91e
    MOV dword ptr [EAX + 0x8],0x0       ; 0048a924
    RET                                 ; 0048a92b

