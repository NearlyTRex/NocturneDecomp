; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c40d2(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_005c0b85 at 005c0bad
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c40d2
        ;   Label: FUN_005c40d2
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c40d6
    MOV dword ptr [EAX],EDX             ; 005c40da
    RET                                 ; 005c40dc

