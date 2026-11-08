; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059c290(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_0059c270 at 0059c275
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059c290
        ;   Label: FUN_0059c290
    MOV dword ptr [EAX + 0x4],0x0       ; 0059c294
    MOV dword ptr [EAX + 0x8],0x0       ; 0059c29b
    MOV dword ptr [EAX + 0xc],0x0       ; 0059c2a2
    MOV dword ptr [EAX],0x0             ; 0059c2a9
    RET                                 ; 0059c2af

