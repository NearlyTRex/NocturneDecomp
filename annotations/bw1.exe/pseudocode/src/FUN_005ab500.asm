; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005ab500(undefined4 param_1,int *param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005ab500
        ;   Label: FUN_005ab500
    MOV EDX,dword ptr [EAX]             ; 005ab504
    CMP EDX,0x3                         ; 005ab506
    JNZ 0x005ab50e                      ; 005ab509
        ;   XREF to: 005ab50e (CONDITIONAL_JUMP)  ; LAB_005ab50e
    MOV EAX,EDX                         ; 005ab50b
    RET                                 ; 005ab50d
    XOR EAX,EAX                         ; 005ab50e
        ;   Label: LAB_005ab50e
    RET                                 ; 005ab510

