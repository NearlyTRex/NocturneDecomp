; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c25c0(undefined4 param_1)
;
;
; XREF[6]:
;   FUN_00479950 at 00479955
;   FUN_004d6420 at 004d6436
;   FUN_004d6990 at 004d699f
;   FUN_004f4720 at 004f48f9
;   FUN_0052c520 at 0052c527
;   FUN_005c0e40 at 005c0ef9
;
; Called Functions:
;   FUN_005c9280
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c25c0
        ;   Label: FUN_005c25c0
    PUSH EDX                            ; 005c25c4
    CALL FUN_005c9280                   ; 005c25c5
        ;   XREF to: 005c9280 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9280()
    ADD ESP,0x4                         ; 005c25ca
    RET                                 ; 005c25cd

