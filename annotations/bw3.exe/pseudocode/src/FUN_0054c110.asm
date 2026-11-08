; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054c110(undefined4 param_1)
;
;
; XREF[12]:
;   FUN_0043cb00 at 0043d516
;   FUN_004f9f50 at 004f9f57
;   FUN_0050a610 at 0050a6b4
;   FUN_005275c0 at 0052775d
;   FUN_0054e6e0 at 0054e80a
;   FUN_00598800 at 005989aa
;   FUN_005992f0 at 00599500
;   FUN_0059a060 at 0059a284
;   FUN_0059aba0 at 0059adc4
;   FUN_0059d7f0 at 0059d986
;   ... and 2 more
;
; Called Functions:
;   FUN_0054c130
;   FUN_0054dd10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054c110
        ;   Label: FUN_0054c110
    PUSH EDX                            ; 0054c114
    CALL FUN_0054c130                   ; 0054c115
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; undefined FUN_0054c130()
    ADD ESP,0x4                         ; 0054c11a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0054c11d
    PUSH ECX                            ; 0054c121
    CALL FUN_0054dd10                   ; 0054c122
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dd10()
    ADD ESP,0x4                         ; 0054c127
    RET                                 ; 0054c12a

