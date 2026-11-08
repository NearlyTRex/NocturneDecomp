; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00578e60(undefined4 *param_1,undefined4 param_2,undefined2 param_3)
;
;
; XREF[2]:
;   FUN_0050b4d0 at 0050b519
;   FUN_0050c280 at 0050cb2c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00578e60
        ;   Label: FUN_00578e60
    MOV EDX,dword ptr [ESP + 0x8]       ; 00578e64
    MOV dword ptr [EAX],EDX             ; 00578e68
    MOV EDX,dword ptr [ESP + 0xc]       ; 00578e6a
    MOV word ptr [EAX + 0x4],DX         ; 00578e6e
    RET                                 ; 00578e72

