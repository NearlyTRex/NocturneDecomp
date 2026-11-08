; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053bcb0(int param_1)
;
;
; XREF[1]:
;   FUN_0053af10 at 0053af16
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053bcb0
        ;   Label: FUN_0053bcb0
    MOV dword ptr [EAX + 0x1808],0x100  ; 0053bcb4
    MOV dword ptr [EAX + 0x180c],0x100  ; 0053bcbe
    MOV dword ptr [EAX + 0x11e0],0x3f800000 ; 0053bcc8
    MOV dword ptr [EAX + 0x11e4],0x3f800000 ; 0053bcd2
    MOV dword ptr [EAX + 0x11e8],0x0    ; 0053bcdc
    MOV dword ptr [EAX + 0x1890],0x0    ; 0053bce6
    MOV dword ptr [EAX + 0x1894],0x0    ; 0053bcf0
    MOV dword ptr [EAX + 0x11d0],0x0    ; 0053bcfa
    MOV dword ptr [EAX + 0x11d4],0x0    ; 0053bd04
    MOV dword ptr [EAX + 0x11c],0x41e00000 ; 0053bd0e
    MOV dword ptr [EAX + 0x120],0x3f800000 ; 0053bd18
    MOV dword ptr [EAX + 0x124],0x3f800000 ; 0053bd22
    MOV dword ptr [EAX + 0x11ec],0x0    ; 0053bd2c
    RET                                 ; 0053bd36

