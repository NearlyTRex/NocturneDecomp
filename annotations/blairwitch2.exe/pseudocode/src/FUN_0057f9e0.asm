; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057f9e0(int param_1,int param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057f9e0
        ;   Label: FUN_0057f9e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0057f9e4
    CMP EDX,dword ptr [EAX + 0x9b8]     ; 0057f9e8
    JZ 0x0057f9f1                       ; 0057f9ee
        ;   XREF to: 0057f9f1 (CONDITIONAL_JUMP)  ; LAB_0057f9f1
    RET                                 ; 0057f9f0
    MOV dword ptr [EAX + 0x9b8],0x0     ; 0057f9f1
        ;   Label: LAB_0057f9f1
    RET                                 ; 0057f9fb

