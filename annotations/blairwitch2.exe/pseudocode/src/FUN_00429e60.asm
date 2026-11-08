; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00429e60(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_00409db0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00429e60
        ;   Label: FUN_00429e60
    CMP dword ptr [EAX + 0x3564],0x0    ; 00429e64
    JZ 0x00429e6e                       ; 00429e6b
        ;   XREF to: 00429e6e (CONDITIONAL_JUMP)  ; LAB_00429e6e
    RET                                 ; 00429e6d
    MOV ECX,dword ptr [ESP + 0x8]       ; 00429e6e
        ;   Label: LAB_00429e6e
    PUSH dword ptr [ESP + 0xc]          ; 00429e72
    PUSH ECX                            ; 00429e76
    PUSH EAX                            ; 00429e77
    CALL FUN_00409db0                   ; 00429e78
        ;   XREF to: 00409db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409db0()
    ADD ESP,0xc                         ; 00429e7d
    RET                                 ; 00429e80

