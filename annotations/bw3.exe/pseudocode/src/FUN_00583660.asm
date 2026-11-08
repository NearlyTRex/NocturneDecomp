; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00583660(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_0054d9c0 at 0054dae3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00583660
        ;   Label: FUN_00583660
    MOV dword ptr [EAX + 0x4],0x0       ; 00583664
    MOV dword ptr [EAX + 0x8],0x0       ; 0058366b
    MOV dword ptr [EAX + 0x10],0x0      ; 00583672
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 00583679
    MOV dword ptr [EAX + 0x18],0x0      ; 00583680
    MOV dword ptr [EAX + 0x20],0x0      ; 00583687
    MOV dword ptr [EAX + 0x24],0x0      ; 0058368e
    MOV dword ptr [EAX + 0x28],0x3f800000 ; 00583695
    MOV dword ptr [EAX],0x3f800000      ; 0058369c
    RET                                 ; 005836a2

