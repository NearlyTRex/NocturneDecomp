; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00481950(undefined4 *param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00481950
        ;   Label: FUN_00481950
    MOV EAX,dword ptr [ESP + 0x8]       ; 00481954
    MOV EAX,dword ptr [EAX]             ; 00481958
    MOV dword ptr [EDX],EAX             ; 0048195a
    MOV EAX,EDX                         ; 0048195c
    RET                                 ; 0048195e

