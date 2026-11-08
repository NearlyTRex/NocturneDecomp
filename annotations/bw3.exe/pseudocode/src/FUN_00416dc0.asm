; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00416dc0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00414880 at 004148bc
;
; Referenced Globals:
;   undefined4 DAT_005dc0e0
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dc0e0                       ; 00416dc0 | DAT_005dc0e0
        ;   Label: FUN_00416dc0
    PUSH 0x2                            ; 00416dc5
    MOV EDX,dword ptr [ESP + 0xc]       ; 00416dc7
    PUSH EDX                            ; 00416dcb
    CALL FUN_005a3de6                   ; 00416dcc
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 00416dd1
    RET                                 ; 00416dd4

