; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a35a0(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a35a0
        ;   Label: FUN_005a35a0
    CMP dword ptr [EAX + 0x85c],0x0     ; 005a35a4
    JZ 0x005a35b0                       ; 005a35ab
        ;   XREF to: 005a35b0 (CONDITIONAL_JUMP)  ; LAB_005a35b0
    XOR EAX,EAX                         ; 005a35ad
    RET                                 ; 005a35af
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a35b0
        ;   Label: LAB_005a35b0
    MOV dword ptr [EAX + 0x85c],EDX     ; 005a35b4
    MOV EAX,0x1                         ; 005a35ba
    RET                                 ; 005a35bf

