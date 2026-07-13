; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004df240(undefined4 *param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004df240
        ;   Label: FUN_004df240
    MOV dword ptr [EAX + 0x58],0x0      ; 004df244
    MOV dword ptr [EAX + 0x5c],0x0      ; 004df24b
    MOV dword ptr [EAX + 0x60],0x0      ; 004df252
    MOV dword ptr [EAX + 0x64],0x0      ; 004df259
    MOV dword ptr [EAX],0x0             ; 004df260
    MOV dword ptr [EAX + 0x54],0x0      ; 004df266
    RET                                 ; 004df26d

