; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056b215(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_00564bb0 at 00564bb5
;
; Referenced Globals:
;   undefined4 DAT_005c1f50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0056b215
        ;   Label: FUN_0056b215
    MOV EAX,[0x005c1f50]                ; 0056b219 | DAT_005c1f50
    MOV dword ptr [EDX],EAX             ; 0056b21e
    MOV dword ptr [0x005c1f50],EDX      ; 0056b220 | DAT_005c1f50
    RET                                 ; 0056b226

