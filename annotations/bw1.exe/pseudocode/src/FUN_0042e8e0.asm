; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042e8e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_00544460 at 00549491
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042e8e0
        ;   Label: FUN_0042e8e0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042e8e4
    MOV ECX,dword ptr [ESP + 0x10]      ; 0042e8e8
    MOV dword ptr [EAX + 0xc194],ECX    ; 0042e8ec
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042e8f2
    MOV dword ptr [EAX + 0xc190],0x0    ; 0042e8f6
    TEST ECX,ECX                        ; 0042e900
    JNZ 0x0042e90b                      ; 0042e902
        ;   XREF to: 0042e90b (CONDITIONAL_JUMP)  ; LAB_0042e90b
    MOV dword ptr [EAX + 0xc184],EDX    ; 0042e904
    RET                                 ; 0042e90a
    MOV dword ptr [EAX + 0xc188],EDX    ; 0042e90b
        ;   Label: LAB_0042e90b
    RET                                 ; 0042e911

