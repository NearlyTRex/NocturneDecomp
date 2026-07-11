; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e1660(int *param_1)
;
;
; XREF[25]:
;   FUN_00425050 at 004255ad
;   FUN_0042abd0 at 0042ac09
;   FUN_0043a470 at 0043a834
;   FUN_0047ac50 at 0047d55b
;   FUN_00496d10 at 00496e1e
;   FUN_004990c0 at 004991dc
;   FUN_004b3880 at 004b3c71
;   FUN_004baba0 at 004bb019
;   FUN_004d4f30 at 004d4fc8
;   FUN_004d5770 at 004d57de
;   ... and 15 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e1660
        ;   Label: FUN_004e1660
    IMUL EDX,dword ptr [EAX + 0x4],0x54c ; 004e1664
    MOV EAX,dword ptr [EAX]             ; 004e166b
    ADD EAX,0x968                       ; 004e166d
    ADD EAX,EDX                         ; 004e1672
    RET                                 ; 004e1674

