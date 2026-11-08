; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00530bd0(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_0052f200 at 0052f551
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00530bd0
        ;   Label: FUN_00530bd0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00530bd4
    MOV EAX,dword ptr [EAX]             ; 00530bd8
    MOV dword ptr [EDX],EAX             ; 00530bda
    MOV EAX,EDX                         ; 00530bdc
    RET                                 ; 00530bde

