; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00477680(undefined4 *param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00477680
        ;   Label: FUN_00477680
    MOV EAX,dword ptr [ESP + 0x8]       ; 00477684
    MOV EAX,dword ptr [EAX]             ; 00477688
    MOV dword ptr [EDX],EAX             ; 0047768a
    MOV EAX,EDX                         ; 0047768c
    RET                                 ; 0047768e

