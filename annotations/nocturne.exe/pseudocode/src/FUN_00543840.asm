; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00543840(undefined4 param_1)
;
;
; Referenced Globals:
;   void* PTR_FUN_005a2ee4 = 00409fc0
;
; Called Functions:
;   FUN_00409d30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00543840
        ;   Label: FUN_00543840
    PUSH EDX                            ; 00543844
    CALL FUN_00409d30                   ; 00543845
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    ADD ESP,0x4                         ; 0054384a
    MOV dword ptr [EAX + 0x14c],0x5a2ee4 ; 0054384d | PTR_FUN_005a2ee4
    RET                                 ; 00543857

