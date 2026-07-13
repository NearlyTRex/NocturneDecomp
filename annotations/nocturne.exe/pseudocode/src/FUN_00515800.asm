; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00515800(int param_1)
;
;
; XREF[1]:
;   FUN_00514a50 at 00514a56
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00515800
        ;   Label: FUN_00515800
    MOV dword ptr [EAX + 0x1808],0x100  ; 00515804
    MOV dword ptr [EAX + 0x180c],0x100  ; 0051580e
    MOV dword ptr [EAX + 0x11e0],0x3f800000 ; 00515818
    MOV dword ptr [EAX + 0x11e4],0x3f800000 ; 00515822
    MOV dword ptr [EAX + 0x11e8],0x0    ; 0051582c
    MOV dword ptr [EAX + 0x1890],0x0    ; 00515836
    MOV dword ptr [EAX + 0x1894],0x0    ; 00515840
    MOV dword ptr [EAX + 0x11d0],0x0    ; 0051584a
    MOV dword ptr [EAX + 0x11d4],0x0    ; 00515854
    MOV dword ptr [EAX + 0x11c],0x41e00000 ; 0051585e
    MOV dword ptr [EAX + 0x120],0x3f800000 ; 00515868
    MOV dword ptr [EAX + 0x124],0x3f800000 ; 00515872
    MOV dword ptr [EAX + 0x11ec],0x0    ; 0051587c
    RET                                 ; 00515886

