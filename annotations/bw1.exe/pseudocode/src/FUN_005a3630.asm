; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a3630(int param_1,int param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a3630
        ;   Label: FUN_005a3630
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a3634
    CMP EDX,dword ptr [EAX + 0x85c]     ; 005a3638
    JZ 0x005a3641                       ; 005a363e
        ;   XREF to: 005a3641 (CONDITIONAL_JUMP)  ; LAB_005a3641
    RET                                 ; 005a3640
    MOV dword ptr [EAX + 0x85c],0x0     ; 005a3641
        ;   Label: LAB_005a3641
    RET                                 ; 005a364b

