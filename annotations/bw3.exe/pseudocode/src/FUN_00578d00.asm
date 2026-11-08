; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00578d00(undefined4 param_1,int *param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00578d00
        ;   Label: FUN_00578d00
    MOV EDX,dword ptr [EAX]             ; 00578d04
    CMP EDX,0x3                         ; 00578d06
    JNZ 0x00578d0e                      ; 00578d09
        ;   XREF to: 00578d0e (CONDITIONAL_JUMP)  ; LAB_00578d0e
    MOV EAX,EDX                         ; 00578d0b
    RET                                 ; 00578d0d
    XOR EAX,EAX                         ; 00578d0e
        ;   Label: LAB_00578d0e
    RET                                 ; 00578d10

