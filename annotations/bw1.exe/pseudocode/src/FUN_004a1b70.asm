; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a1b70(undefined4 param_1,undefined4 param_2)
;
;
; XREF[38]:
;   FUN_0040c870 at 0040c921
;   FUN_00416790 at 004167a7
;   FUN_00418220 at 00418234
;   FUN_00428ae0 at 00429b2d
;   FUN_0042b850 at 0042b970
;   FUN_004319e0 at 00431ba3
;   FUN_00445cb0 at 004461bf
;   FUN_0045c7b0 at 0045c8e8
;   FUN_0045d2a0 at 0045d437
;   FUN_00460230 at 00460350
;   ... and 28 more
;
; Referenced Globals:
;   undefined4 DAT_01c56ecc
;
; Called Functions:
;   FUN_004a1b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1b70
        ;   Label: FUN_004a1b70
    MOV ECX,dword ptr [ESP + 0xc]       ; 004a1b71
    PUSH ECX                            ; 004a1b75
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a1b76
    XOR EDX,EDX                         ; 004a1b7a
    PUSH EBX                            ; 004a1b7c
    MOV dword ptr [0x01c56ecc],EDX      ; 004a1b7d | DAT_01c56ecc
    CALL FUN_004a1b90                   ; 004a1b83
        ;   XREF to: 004a1b90 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1b90()
    ADD ESP,0x8                         ; 004a1b88
    POP EBX                             ; 004a1b8b
    RET                                 ; 004a1b8c

