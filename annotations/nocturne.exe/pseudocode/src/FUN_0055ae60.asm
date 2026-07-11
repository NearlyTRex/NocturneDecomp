; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055ae60(int param_1)
;
;
; XREF[1]:
;   FUN_0055ced0 at 0055cef2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0055ae60
        ;   Label: FUN_0055ae60
    MOV dword ptr [EAX + 0x2c],0x0      ; 0055ae64
    MOV EDX,dword ptr [EAX + 0x2c]      ; 0055ae6b
    MOV dword ptr [EAX + 0x1c],EDX      ; 0055ae6e
    MOV EDX,dword ptr [EAX + 0x1c]      ; 0055ae71
    MOV dword ptr [EAX + 0xc],EDX       ; 0055ae74
    RET                                 ; 0055ae77

