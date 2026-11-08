; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c157c(undefined4 param_1,undefined4 param_2)
;
;
; XREF[22]:
;   FUN_00445430 at 004454c7
;   FUN_00479180 at 004791da
;   FUN_004a1d00 at 004a1e87
;   FUN_004a9870 at 004a9954
;   FUN_004a9a60 at 004a9b44
;   FUN_004d6420 at 004d64ff
;   FUN_004d6990 at 004d6d0b
;   FUN_004d7250 at 004d72d9
;   FUN_004f4370 at 004f4397
;   FUN_004f4550 at 004f4578
;   ... and 12 more
;
; Called Functions:
;   FUN_005c1520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c157c
        ;   Label: FUN_005c157c
    PUSH 0x0                            ; 005c157d
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c157f
    PUSH EDX                            ; 005c1583
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c1584
    PUSH EBX                            ; 005c1588
    CALL FUN_005c1520                   ; 005c1589
        ;   XREF to: 005c1520 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1520()
    ADD ESP,0xc                         ; 005c158e
    POP EBX                             ; 005c1591
    RET                                 ; 005c1592

