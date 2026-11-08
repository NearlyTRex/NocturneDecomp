; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00447630(int param_1,int *param_2)
;
;
; Called Functions:
;   FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00447630
        ;   Label: FUN_00447630
    MOV EAX,dword ptr [ESP + 0x8]       ; 00447634
    CMP dword ptr [EAX],0x4             ; 00447638
    JZ 0x00447649                       ; 0044763b
        ;   XREF to: 00447649 (CONDITIONAL_JUMP)  ; LAB_00447649
    CMP dword ptr [EDX + 0xca58],0x0    ; 0044763d
    JZ 0x0044764f                       ; 00447644
        ;   XREF to: 0044764f (CONDITIONAL_JUMP)  ; LAB_0044764f
    XOR EAX,EAX                         ; 00447646
    RET                                 ; 00447648
    MOV EAX,0x1                         ; 00447649
        ;   Label: LAB_00447649
    RET                                 ; 0044764e
    PUSH EAX                            ; 0044764f
        ;   Label: LAB_0044764f
    PUSH EDX                            ; 00447650
    CALL FUN_004310b0                   ; 00447651
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004310b0()
    ADD ESP,0x8                         ; 00447656
    RET                                 ; 00447659

