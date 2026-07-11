; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00425960(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00425960
        ;   Label: FUN_00425960
    CMP dword ptr [EDX + 0xdc],0x0      ; 00425964
    JNZ 0x0042597b                      ; 0042596b
        ;   XREF to: 0042597b (CONDITIONAL_JUMP)  ; LAB_0042597b
    FLD float ptr [EDX + 0x24]          ; 0042596d
    FCOMP float ptr [EDX + 0x240c]      ; 00425970
    FNSTSW AX                           ; 00425976
    SAHF                                ; 00425978
    JZ 0x00425981                       ; 00425979
        ;   XREF to: 00425981 (CONDITIONAL_JUMP)  ; LAB_00425981
    MOV EAX,0x1                         ; 0042597b
        ;   Label: LAB_0042597b
    RET                                 ; 00425980
    CMP dword ptr [EDX + 0x2408],0x0    ; 00425981
        ;   Label: LAB_00425981
    JZ 0x0042597b                       ; 00425988
        ;   XREF to: 0042597b (CONDITIONAL_JUMP)  ; LAB_0042597b
    PUSH EDX                            ; 0042598a
    MOV EAX,dword ptr [EDX + 0x14c]     ; 0042598b
    CALL dword ptr [EAX + 0x54]         ; 00425991
    ADD ESP,0x4                         ; 00425994
    TEST EAX,EAX                        ; 00425997
    JNZ 0x0042597b                      ; 00425999
        ;   XREF to: 0042597b (CONDITIONAL_JUMP)  ; LAB_0042597b
    RET                                 ; 0042599b

