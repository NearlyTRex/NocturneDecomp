; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040d440(undefined4 param_1)
;
;
; XREF[10]:
;   FUN_004a2200 at 004a2222
;   FUN_004a3820 at 004a3837
;   FUN_004b60c0 at 004b614f
;   FUN_004bdfb0 at 004be41e
;   FUN_004be430 at 004be77a
;   FUN_004e1480 at 004e15b5
;   FUN_004e46c0 at 004e4ca5
;   FUN_004fc940 at 004fca76
;   FUN_0059bec0 at 0059bee0
;   FUN_0059bf40 at 0059bf47
;
; Called Functions:
;   FUN_0040d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d440
        ;   Label: FUN_0040d440
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040d441
    PUSH EBX                            ; 0040d445
    CALL FUN_0040d540                   ; 0040d446
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 0040d44b
    MOV EAX,EBX                         ; 0040d44e
    POP EBX                             ; 0040d450
    RET                                 ; 0040d451

