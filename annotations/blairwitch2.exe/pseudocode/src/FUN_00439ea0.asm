; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00439ea0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH 0x5ce1d3                       ; 00439ea0
        ;   Label: FUN_00439ea0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00439ea5
    PUSH EDX                            ; 00439ea9
    CALL FUN_0040c840                   ; 00439eaa
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 00439eaf
    TEST EAX,EAX                        ; 00439eb2
    JZ 0x00439ebb                       ; 00439eb4
        ;   XREF to: 00439ebb (CONDITIONAL_JUMP)  ; LAB_00439ebb
    MOV EAX,0x4                         ; 00439eb6
    RET                                 ; 00439ebb
        ;   Label: LAB_00439ebb

