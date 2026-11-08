; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055d580(int param_1)
;
;
; XREF[1]:
;   FUN_0055c7e0 at 0055c7e6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0055d580
        ;   Label: FUN_0055d580
    MOV dword ptr [EAX + 0x1808],0x100  ; 0055d584
    MOV dword ptr [EAX + 0x180c],0x100  ; 0055d58e
    MOV dword ptr [EAX + 0x11e0],0x3f800000 ; 0055d598
    MOV dword ptr [EAX + 0x11e4],0x3f800000 ; 0055d5a2
    MOV dword ptr [EAX + 0x11e8],0x0    ; 0055d5ac
    MOV dword ptr [EAX + 0x1890],0x0    ; 0055d5b6
    MOV dword ptr [EAX + 0x1894],0x0    ; 0055d5c0
    MOV dword ptr [EAX + 0x11d0],0x0    ; 0055d5ca
    MOV dword ptr [EAX + 0x11d4],0x0    ; 0055d5d4
    MOV dword ptr [EAX + 0x11c],0x41e00000 ; 0055d5de
    MOV dword ptr [EAX + 0x120],0x3f800000 ; 0055d5e8
    MOV dword ptr [EAX + 0x124],0x3f800000 ; 0055d5f2
    MOV dword ptr [EAX + 0x11ec],0x0    ; 0055d5fc
    RET                                 ; 0055d606

