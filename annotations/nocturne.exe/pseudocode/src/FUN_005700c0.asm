; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005700c0(int param_1,undefined4 param_2,int param_3)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005700c0
        ;   Label: FUN_005700c0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005700c4
    TEST EDX,EDX                        ; 005700c8
    JLE 0x005700cf                      ; 005700ca
        ;   XREF to: 005700cf (CONDITIONAL_JUMP)  ; LAB_005700cf
    MOV dword ptr [EAX + 0x34],EDX      ; 005700cc
    RET                                 ; 005700cf
        ;   Label: LAB_005700cf

