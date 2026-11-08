; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c1093(undefined4 param_1)
;
;
; XREF[32]:
;   FUN_00415b20 at 00415b39
;   FUN_00421c00 at 00421c3c
;   FUN_00445370 at 0044538a
;   FUN_0044c580 at 0044c5b0
;   FUN_0045d6c0 at 0045d6d9
;   FUN_00466780 at 0046679c
;   FUN_00492920 at 00492932
;   FUN_004aba90 at 004abb50
;   FUN_004b9ab0 at 004b9ac9
;   FUN_004cb7d0 at 004cb7ec
;   ... and 22 more
;
; Called Functions:
;   FUN_005c6fdb
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c1093
        ;   Label: FUN_005c1093
    PUSH EDX                            ; 005c1097
    CALL FUN_005c6fdb                   ; 005c1098
        ;   XREF to: 005c6fdb (UNCONDITIONAL_CALL)  ; undefined FUN_005c6fdb()
    ADD ESP,0x4                         ; 005c109d
    RET                                 ; 005c10a0

