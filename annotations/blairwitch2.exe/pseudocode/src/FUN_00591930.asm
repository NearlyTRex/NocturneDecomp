; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00591930(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_00546790 at 005468b3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00591930
        ;   Label: FUN_00591930
    MOV dword ptr [EAX + 0x4],0x0       ; 00591934
    MOV dword ptr [EAX + 0x8],0x0       ; 0059193b
    MOV dword ptr [EAX + 0x10],0x0      ; 00591942
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 00591949
    MOV dword ptr [EAX + 0x18],0x0      ; 00591950
    MOV dword ptr [EAX + 0x20],0x0      ; 00591957
    MOV dword ptr [EAX + 0x24],0x0      ; 0059195e
    MOV dword ptr [EAX + 0x28],0x3f800000 ; 00591965
    MOV dword ptr [EAX],0x3f800000      ; 0059196c
    RET                                 ; 00591972

