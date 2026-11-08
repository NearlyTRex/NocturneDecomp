; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0043a710(int param_1)
;
;
; Called Functions:
;   FUN_0049f850
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043a710
        ;   Label: FUN_0043a710
    CMP dword ptr [EAX + 0x6d4],0x0     ; 0043a714
    JNZ 0x0043a720                      ; 0043a71b
        ;   XREF to: 0043a720 (CONDITIONAL_JUMP)  ; LAB_0043a720
    XOR EAX,EAX                         ; 0043a71d
    RET                                 ; 0043a71f
    ADD EAX,0x6d8                       ; 0043a720
        ;   Label: LAB_0043a720
    PUSH EAX                            ; 0043a725
    CALL FUN_0049f850                   ; 0043a726
        ;   XREF to: 0049f850 (UNCONDITIONAL_CALL)  ; undefined FUN_0049f850()
    MOV EAX,0x1                         ; 0043a72b
    ADD ESP,0x4                         ; 0043a730
    RET                                 ; 0043a733

