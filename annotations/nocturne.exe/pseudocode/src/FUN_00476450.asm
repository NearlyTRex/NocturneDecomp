; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00476450(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_00474c90 at 00474ca3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00476450
        ;   Label: FUN_00476450
    MOV dword ptr [EAX + 0x4],0x1       ; 00476454
    MOV dword ptr [EAX],0x0             ; 0047645b
    MOV dword ptr [EAX + 0x8],0x1       ; 00476461
    MOV dword ptr [EAX + 0x20],0x0      ; 00476468
    MOV dword ptr [EAX + 0xc],0x1       ; 0047646f
    MOV dword ptr [EAX + 0x10],0x0      ; 00476476
    MOV EDX,dword ptr [EAX + 0x20]      ; 0047647d
    MOV dword ptr [EAX + 0x1c],EDX      ; 00476480
    MOV dword ptr [EAX + 0x18],EDX      ; 00476483
    MOV dword ptr [EAX + 0x14],EDX      ; 00476486
    RET                                 ; 00476489

