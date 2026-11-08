; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a1730(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_00509530
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a1730
        ;   Label: FUN_005a1730
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a1734
    CMP dword ptr [EAX + 0x33fa8],0x0   ; 005a1738
    JZ 0x005a1759                       ; 005a173f
        ;   XREF to: 005a1759 (CONDITIONAL_JUMP)  ; LAB_005a1759
    TEST EDX,EDX                        ; 005a1741
    JZ 0x005a174f                       ; 005a1743
        ;   XREF to: 005a174f (CONDITIONAL_JUMP)  ; LAB_005a174f
    MOV dword ptr [EAX + 0x24fc],0x1    ; 005a1745
    PUSH EDX                            ; 005a174f
        ;   Label: LAB_005a174f
    PUSH EAX                            ; 005a1750
    CALL FUN_00509530                   ; 005a1751
        ;   XREF to: 00509530 (UNCONDITIONAL_CALL)  ; undefined FUN_00509530()
    ADD ESP,0x8                         ; 005a1756
    RET                                 ; 005a1759
        ;   Label: LAB_005a1759

