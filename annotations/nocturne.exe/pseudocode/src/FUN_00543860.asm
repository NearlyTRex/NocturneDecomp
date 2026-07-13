; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00543860(undefined4 param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00543860
        ;   Label: FUN_00543860
    MOV dword ptr [EAX + 0x4],0xbf800000 ; 00543864
    MOV dword ptr [EAX + 0x8],0xc0e00000 ; 0054386b
    MOV dword ptr [EAX + 0xc],0x40e00000 ; 00543872
    MOV dword ptr [EAX + 0x10],0x41000000 ; 00543879
    MOV dword ptr [EAX + 0x14],0x40e00000 ; 00543880
    MOV dword ptr [EAX],0xc0e00000      ; 00543887
    RET                                 ; 0054388d

