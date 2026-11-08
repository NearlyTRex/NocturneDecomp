; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005760d0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005760d0
        ;   Label: FUN_005760d0
    FLD float ptr [EDX + 0x2538]        ; 005760d4
    FLDZ                                ; 005760da
    FCOMPP                              ; 005760dc
    FNSTSW AX                           ; 005760de
    SAHF                                ; 005760e0
    JNC 0x005760f0                      ; 005760e1
        ;   XREF to: 005760f0 (CONDITIONAL_JUMP)  ; LAB_005760f0
    CMP dword ptr [EDX + 0xd210],0x3    ; 005760e3
    JNZ 0x005760f3                      ; 005760ea
        ;   XREF to: 005760f3 (CONDITIONAL_JUMP)  ; LAB_005760f3
    LEA EAX,[EAX]                       ; 005760ec
    XOR EAX,EAX                         ; 005760f0
        ;   Label: LAB_005760f0
    RET                                 ; 005760f2
    MOV EAX,0x1                         ; 005760f3
        ;   Label: LAB_005760f3
    RET                                 ; 005760f8

