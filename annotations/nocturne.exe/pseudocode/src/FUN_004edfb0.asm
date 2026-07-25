; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_004edfb0(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_004edd30 at 004edd65
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004edfb0
        ;   Label: FUN_004edfb0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004edfb4
    MOV EAX,dword ptr [EAX]             ; 004edfb8
    MOV dword ptr [EDX],EAX             ; 004edfba
    MOV EAX,EDX                         ; 004edfbc
    RET                                 ; 004edfbe

