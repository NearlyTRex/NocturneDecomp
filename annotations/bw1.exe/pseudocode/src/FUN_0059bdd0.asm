; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059bdd0(int param_1)
;
;
; XREF[9]:
;   FUN_00449a50 at 00449d88
;   FUN_0049e1a0 at 0049e6ca
;   FUN_004e8630 at 004e8e2c
;   FUN_00500310 at 00500766
;   FUN_00501a70 at 00501ec6
;   FUN_00540080 at 0054074f
;   FUN_00561760 at 00561c7b
;   FUN_00598420 at 00598c61
;   FUN_005a3870 at 005a3d51
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059bdd0
        ;   Label: FUN_0059bdd0
    CMP dword ptr [EAX + 0x174],0x4     ; 0059bdd4
    JZ 0x0059bdde                       ; 0059bddb
        ;   XREF to: 0059bdde (CONDITIONAL_JUMP)  ; LAB_0059bdde
    RET                                 ; 0059bddd
    MOV dword ptr [EAX + 0x2f0],0x1     ; 0059bdde
        ;   Label: LAB_0059bdde
    RET                                 ; 0059bde8

