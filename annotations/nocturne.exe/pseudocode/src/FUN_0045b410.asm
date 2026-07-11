; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045b410(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005993b0
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 0045b410 | DAT_005993b0
        ;   Label: FUN_0045b410
    PUSH 0x4                            ; 0045b415
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045b417
    PUSH EDX                            ; 0045b41b
    CALL FUN_0056494f                   ; 0045b41c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 0045b421
    RET                                 ; 0045b424

