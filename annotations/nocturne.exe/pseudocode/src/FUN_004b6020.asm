; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b6020(undefined4 param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004b6020
        ;   Label: FUN_004b6020
    MOV dword ptr [EAX + 0x4],0x0       ; 004b6024
    MOV dword ptr [EAX + 0x8],0xbf800000 ; 004b602b
    MOV dword ptr [EAX + 0xc],0x3f800000 ; 004b6032
    MOV dword ptr [EAX + 0x10],0x40c00000 ; 004b6039
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 004b6040
    MOV dword ptr [EAX],0xbf800000      ; 004b6047
    RET                                 ; 004b604d

