; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004148e0(int param_1,int *param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004148e0
        ;   Label: FUN_004148e0
    CMP dword ptr [EAX],0x1             ; 004148e4
    JZ 0x004148ec                       ; 004148e7
        ;   XREF to: 004148ec (CONDITIONAL_JUMP)  ; LAB_004148ec
    XOR EAX,EAX                         ; 004148e9
    RET                                 ; 004148eb
    MOV EDX,dword ptr [ESP + 0x4]       ; 004148ec
        ;   Label: LAB_004148ec
    ADD EDX,0x158                       ; 004148f0
    MOV dword ptr [EAX + 0x20],EDX      ; 004148f6
    MOV EAX,0x1                         ; 004148f9
    RET                                 ; 004148fe

