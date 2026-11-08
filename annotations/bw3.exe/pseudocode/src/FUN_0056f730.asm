; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056f730(undefined4 *param_1,undefined4 param_2,undefined2 param_3)
;
;
; XREF[2]:
;   FUN_00503fb0 at 00503ff9
;   FUN_00504d60 at 0050560c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056f730
        ;   Label: FUN_0056f730
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056f734
    MOV dword ptr [EAX],EDX             ; 0056f738
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056f73a
    MOV word ptr [EAX + 0x4],DX         ; 0056f73e
    RET                                 ; 0056f742

