; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0056f4b0(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_0056f750 at 0056f77c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0056f4b0
        ;   Label: FUN_0056f4b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056f4b4
    MOV EAX,dword ptr [EAX]             ; 0056f4b8
    MOV dword ptr [EDX],EAX             ; 0056f4ba
    MOV EAX,EDX                         ; 0056f4bc
    RET                                 ; 0056f4be

