; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b8df8(undefined4 param_1)
;
;
; XREF[17]:
;   FUN_0042dae0 at 0042db1b
;   FUN_00438a90 at 00438aaf
;   FUN_00446590 at 004465a7
;   FUN_0044e010 at 0044e4c6
;   FUN_0044ea80 at 0044eb19
;   FUN_0044f760 at 0044f7f8
;   FUN_00472550 at 0047257d
;   FUN_0047c0f0 at 0047c17e
;   FUN_00481540 at 00481582
;   FUN_004a7d00 at 004a7dcc
;   ... and 7 more
;
; Called Functions:
;   FUN_005b8be2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b8df8
        ;   Label: FUN_005b8df8
    PUSH EDX                            ; 005b8dfc
    CALL FUN_005b8be2                   ; 005b8dfd
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 005b8e02
    RET                                 ; 005b8e05

