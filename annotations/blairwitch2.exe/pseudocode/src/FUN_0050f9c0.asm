; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0050f9c0(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_0050e020 at 0050e35d
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0050f9c0
        ;   Label: FUN_0050f9c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050f9c4
    MOV EAX,dword ptr [EAX]             ; 0050f9c8
    MOV dword ptr [EDX],EAX             ; 0050f9ca
    MOV EAX,EDX                         ; 0050f9cc
    RET                                 ; 0050f9ce

