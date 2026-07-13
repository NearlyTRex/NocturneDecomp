; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004671e0(undefined4 *param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004671e0
        ;   Label: FUN_004671e0
    MOV dword ptr [EAX + 0xc],0x0       ; 004671e4
    MOV dword ptr [EAX + 0x4],0x0       ; 004671eb
    MOV dword ptr [EAX + 0x4c],0x0      ; 004671f2
    MOV dword ptr [EAX + 0x40],0x0      ; 004671f9
    MOV dword ptr [EAX + 0x44],0x0      ; 00467200
    MOV dword ptr [EAX + 0x48],0x0      ; 00467207
    MOV dword ptr [EAX],0x0             ; 0046720e
    MOV dword ptr [EAX + 0x8],0x0       ; 00467214
    RET                                 ; 0046721b

