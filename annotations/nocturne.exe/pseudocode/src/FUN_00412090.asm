; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00412090(undefined4 *param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00412090
        ;   Label: FUN_00412090
    MOV EAX,dword ptr [ESP + 0x8]       ; 00412094
    MOV EAX,dword ptr [EAX]             ; 00412098
    MOV dword ptr [EDX],EAX             ; 0041209a
    MOV EAX,EDX                         ; 0041209c
    RET                                 ; 0041209e

