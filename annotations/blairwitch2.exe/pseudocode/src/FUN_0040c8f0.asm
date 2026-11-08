; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040c8f0(int param_1,undefined4 param_2)
;
;
; XREF[143]:
;   FUN_00408c30 at 00408ca2
;   FUN_0040a050 at 0040a3dc
;   FUN_0040fef0 at 0040ff21
;   FUN_00410080 at 00410125
;   FUN_00410ac0 at 00410aff
;   FUN_00412f40 at 00413960
;   FUN_004203a0 at 00420436
;   FUN_00421b10 at 00421b3b
;   FUN_004285f0 at 004286fa
;   FUN_004287f0 at 00428a60
;   ... and 133 more
;
; Called Functions:
;   FUN_0040c8c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c8f0
        ;   Label: FUN_0040c8f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040c8f1
    TEST EBX,EBX                        ; 0040c8f5
    JNZ 0x0040c8fd                      ; 0040c8f7
        ;   XREF to: 0040c8fd (CONDITIONAL_JUMP)  ; LAB_0040c8fd
    XOR EAX,EAX                         ; 0040c8f9
    POP EBX                             ; 0040c8fb
        ;   Label: LAB_0040c8fb
    RET                                 ; 0040c8fc
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040c8fd
        ;   Label: LAB_0040c8fd
    PUSH EDX                            ; 0040c901
    PUSH EBX                            ; 0040c902
    CALL FUN_0040c8c0                   ; 0040c903
        ;   XREF to: 0040c8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8c0()
    ADD ESP,0x8                         ; 0040c908
    TEST EAX,EAX                        ; 0040c90b
    JZ 0x0040c8fb                       ; 0040c90d
        ;   XREF to: 0040c8fb (CONDITIONAL_JUMP)  ; LAB_0040c8fb
    MOV EAX,EBX                         ; 0040c90f
    POP EBX                             ; 0040c911
    RET                                 ; 0040c912

