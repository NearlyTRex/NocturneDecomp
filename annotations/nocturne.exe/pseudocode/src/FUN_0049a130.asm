; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049a130(int param_1,int param_2)
;
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x8],0x0       ; 0049a130
        ;   Label: FUN_0049a130
    JZ 0x0049a147                       ; 0049a135
        ;   XREF to: 0049a147 (CONDITIONAL_JUMP)  ; LAB_0049a147
    MOV EAX,0x3                         ; 0049a137
    MOV EDX,dword ptr [ESP + 0x4]       ; 0049a13c
    MOV dword ptr [EDX + 0x1fa3c],EAX   ; 0049a140
    RET                                 ; 0049a146
    XOR EAX,EAX                         ; 0049a147
        ;   Label: LAB_0049a147
    MOV EDX,dword ptr [ESP + 0x4]       ; 0049a149
    MOV dword ptr [EDX + 0x1fa3c],EAX   ; 0049a14d
    RET                                 ; 0049a153

