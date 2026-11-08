; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cbf10(int param_1)
;
;
; XREF[9]:
;   FUN_004cf5e0 at 004cf983
;   FUN_004d77d0 at 004d7d9f
;   FUN_004d8060 at 004d856b
;   FUN_004d8e50 at 004d8f87
;   FUN_0050aa90 at 0050aaaa
;   FUN_0050b470 at 0050b48f
;   FUN_0050ba70 at 0050ba8f
;   FUN_0050c990 at 0050c9b4
;   FUN_0050cc90 at 0050cd58
;
; Called Functions:
;   FUN_005b2420
;
; *****************************************************************************

section .text

    CALL FUN_005b2420                   ; 004cbf10
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
        ;   Label: FUN_004cbf10
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cbf15
    MOV dword ptr [EDX + 0x28c],EAX     ; 004cbf19
    RET                                 ; 004cbf1f

