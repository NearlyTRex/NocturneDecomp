; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005878d0(undefined4 param_1,int *param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005878d0
        ;   Label: FUN_005878d0
    MOV EDX,dword ptr [EAX]             ; 005878d4
    CMP EDX,0x3                         ; 005878d6
    JNZ 0x005878de                      ; 005878d9
        ;   XREF to: 005878de (CONDITIONAL_JUMP)  ; LAB_005878de
    MOV EAX,EDX                         ; 005878db
    RET                                 ; 005878dd
    XOR EAX,EAX                         ; 005878de
        ;   Label: LAB_005878de
    RET                                 ; 005878e0

