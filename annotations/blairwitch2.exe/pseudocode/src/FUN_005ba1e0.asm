; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ba1e0(undefined4 param_1)
;
;
; XREF[6]:
;   FUN_00461440 at 00461445
;   FUN_004bb9b0 at 004bb9da
;   FUN_004bbf70 at 004bbf7f
;   FUN_004d8530 at 004d8709
;   FUN_0050b340 at 0050b347
;   FUN_005b8af0 at 005b8ba9
;
; Called Functions:
;   FUN_005c0fc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ba1e0
        ;   Label: FUN_005ba1e0
    PUSH EDX                            ; 005ba1e4
    CALL FUN_005c0fc0                   ; 005ba1e5
        ;   XREF to: 005c0fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0fc0()
    ADD ESP,0x4                         ; 005ba1ea
    RET                                 ; 005ba1ed

