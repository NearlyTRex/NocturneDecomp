; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00410990(int param_1)
;
;
; Called Functions:
;   FUN_00410ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410990
        ;   Label: FUN_00410990
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410991
    PUSH EBX                            ; 00410995
    CALL FUN_00410ac0                   ; 00410996
        ;   XREF to: 00410ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00410ac0()
    MOV EDX,dword ptr [EBX + 0x6d4]     ; 0041099b
    ADD ESP,0x4                         ; 004109a1
    TEST EDX,EDX                        ; 004109a4
    JNZ 0x004109ac                      ; 004109a6
        ;   XREF to: 004109ac (CONDITIONAL_JUMP)  ; LAB_004109ac
    XOR EAX,EAX                         ; 004109a8
    POP EBX                             ; 004109aa
    RET                                 ; 004109ab
    MOV EAX,0x1                         ; 004109ac
        ;   Label: LAB_004109ac
    MOV dword ptr [EDX + 0x10a74],0x1   ; 004109b1
    POP EBX                             ; 004109bb
    RET                                 ; 004109bc

