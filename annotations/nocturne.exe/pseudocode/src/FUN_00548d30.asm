; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00548d30(undefined4 *param_1,undefined4 *param_2,undefined2 param_3)
;
;
; XREF[2]:
;   FUN_004e9a90 at 004e9ad7
;   FUN_004ea830 at 004eb0f6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00548d30
        ;   Label: FUN_00548d30
    MOV EDX,dword ptr [ESP + 0x8]       ; 00548d34
    MOV EDX,dword ptr [EDX]             ; 00548d38
    MOV dword ptr [EAX],EDX             ; 00548d3a
    MOV EDX,dword ptr [ESP + 0xc]       ; 00548d3c
    MOV word ptr [EAX + 0x4],DX         ; 00548d40
    RET                                 ; 00548d44

