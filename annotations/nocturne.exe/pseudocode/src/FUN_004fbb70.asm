; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004fbb70(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fbb70
        ;   Label: FUN_004fbb70
    TEST EAX,EAX                        ; 004fbb74
    JZ 0x004fbb83                       ; 004fbb76
        ;   XREF to: 004fbb83 (CONDITIONAL_JUMP)  ; LAB_004fbb83
    CMP dword ptr [EAX + 0x2d8],0x8     ; 004fbb78
    JNZ 0x004fbb84                      ; 004fbb7f
        ;   XREF to: 004fbb84 (CONDITIONAL_JUMP)  ; LAB_004fbb84
    XOR EAX,EAX                         ; 004fbb81
        ;   Label: caseD_8
    RET                                 ; 004fbb83
        ;   Label: LAB_004fbb83
    MOV EAX,0x1                         ; 004fbb84
        ;   Label: LAB_004fbb84
    RET                                 ; 004fbb89

