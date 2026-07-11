; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00572e90(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00571280 at 005712a4
;
; Referenced Globals:
;   undefined1* PTR_FUN_005c2170 = 00572e60
;
; Called Functions:
;   FUN_00572e60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00572e90
        ;   Label: FUN_00572e90
    PUSH EDX                            ; 00572e94
    CALL dword ptr [0x005c2170]         ; 00572e95 | PTR_FUN_005c2170
    ADD ESP,0x4                         ; 00572e9b
    RET                                 ; 00572e9e

