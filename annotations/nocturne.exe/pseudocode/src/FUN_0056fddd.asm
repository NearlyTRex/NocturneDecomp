; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056fddd(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0056b327 at 0056b34f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056fddd
        ;   Label: FUN_0056fddd
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056fde1
    MOV dword ptr [EAX],EDX             ; 0056fde5
    RET                                 ; 0056fde7

