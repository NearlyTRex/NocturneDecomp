; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408830(int param_1)
;
;
; XREF[13]:
;   FUN_0040adb0 at 0040adc5
;   FUN_0040aed0 at 0040aee2
;   FUN_0040b090 at 0040b0fe
;   FUN_0042c510 at 0042c75d
;   FUN_004a1370 at 004a1473
;   FUN_004a9ff0 at 004aa024
;   FUN_004f7690 at 004f865c
;   FUN_004f8fe0 at 004f906e
;   FUN_004f9750 at 004f976c
;   FUN_004fa4e0 at 004fa525
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00408830
        ;   Label: FUN_00408830
    PUSH EDX                            ; 00408834
    MOV EAX,dword ptr [EDX + 0x154]     ; 00408835
    CALL dword ptr [EAX + 0xcc]         ; 0040883b
    ADD ESP,0x4                         ; 00408841
    RET                                 ; 00408844

