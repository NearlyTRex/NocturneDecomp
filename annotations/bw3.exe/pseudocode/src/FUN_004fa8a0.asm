; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fa8a0(undefined4 param_1)
;
;
; XREF[8]:
;   FUN_0050a450 at 0050a46b
;   FUN_005273b0 at 005273cb
;   FUN_00598780 at 00598794
;   FUN_005991d0 at 00599205
;   FUN_00599f60 at 00599f95
;   FUN_0059aaa0 at 0059aad5
;   FUN_0059d750 at 0059d772
;   FUN_0059e070 at 0059e084
;
; Called Functions:
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH 0x5e2c20                       ; 004fa8a0
        ;   Label: FUN_004fa8a0
    PUSH 0x2                            ; 004fa8a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fa8a7
    PUSH EDX                            ; 004fa8ab
    CALL FUN_005a30d7                   ; 004fa8ac
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 004fa8b1
    MOV dword ptr [EAX + 0xc28],0x1     ; 004fa8b4
    RET                                 ; 004fa8be

