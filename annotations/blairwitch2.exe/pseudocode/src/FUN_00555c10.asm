; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555c10(undefined4 param_1,double param_2,double param_3,double param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_0264a5d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264a5d0]      ; 00555c10 | DAT_0264a5d0
        ;   Label: FUN_00555c10
    TEST EDX,EDX                        ; 00555c16
    JNZ 0x00555c1b                      ; 00555c18
        ;   XREF to: 00555c1b (CONDITIONAL_JUMP)  ; LAB_00555c1b
    RET                                 ; 00555c1a
    PUSH 0x1                            ; 00555c1b
        ;   Label: LAB_00555c1b
    FLD double ptr [ESP + 0x1c]         ; 00555c1d
    MOV EAX,EDX                         ; 00555c21
    SUB ESP,0x4                         ; 00555c23
    MOV EDX,dword ptr [EDX]             ; 00555c26
    FSTP float ptr [ESP]                ; 00555c28
    FLD double ptr [ESP + 0x18]         ; 00555c2b
    SUB ESP,0x4                         ; 00555c2f
    FSTP float ptr [ESP]                ; 00555c32
    FLD double ptr [ESP + 0x14]         ; 00555c35
    SUB ESP,0x4                         ; 00555c39
    FSTP float ptr [ESP]                ; 00555c3c
    PUSH EAX                            ; 00555c3f
    CALL dword ptr [EDX + 0x38]         ; 00555c40
    RET                                 ; 00555c43

