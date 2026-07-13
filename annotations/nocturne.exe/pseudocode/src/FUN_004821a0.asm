; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004821a0(undefined4 param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004821a0
        ;   Label: FUN_004821a0
    MOV dword ptr [EAX + 0x4],0x0       ; 004821a4
    MOV dword ptr [EAX + 0x8],0xbdcccccd ; 004821ab
    MOV dword ptr [EAX + 0xc],0x3f800000 ; 004821b2
    MOV dword ptr [EAX + 0x10],0x40400000 ; 004821b9
    MOV dword ptr [EAX + 0x14],0x3dcccccd ; 004821c0
    MOV dword ptr [EAX],0xbf800000      ; 004821c7
    RET                                 ; 004821cd

