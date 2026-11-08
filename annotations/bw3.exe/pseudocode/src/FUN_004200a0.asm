; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004200a0(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c790
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004200a0
        ;   Label: FUN_004200a0
    MOV EDX,dword ptr [ESP + 0x4]       ; 004200a4
    CMP dword ptr [EDX + 0x314],0x3     ; 004200a8
    JZ 0x004200ce                       ; 004200af
        ;   XREF to: 004200ce (CONDITIONAL_JUMP)  ; LAB_004200ce
    PUSH 0x5b7669                       ; 004200b1
    PUSH EAX                            ; 004200b6
    CALL FUN_0040c790                   ; 004200b7
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 004200bc
    TEST EAX,EAX                        ; 004200bf
    JZ 0x004200cd                       ; 004200c1
        ;   XREF to: 004200cd (CONDITIONAL_JUMP)  ; LAB_004200cd
    MOV EAX,dword ptr [ESP + 0x4]       ; 004200c3
        ;   Label: LAB_004200c3
    MOV EAX,dword ptr [EAX + 0x314]     ; 004200c7
    RET                                 ; 004200cd
        ;   Label: LAB_004200cd
    PUSH 0x5b766f                       ; 004200ce
        ;   Label: LAB_004200ce
    PUSH EAX                            ; 004200d3
    CALL FUN_0040c790                   ; 004200d4
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 004200d9
    TEST EAX,EAX                        ; 004200dc
    JZ 0x004200c3                       ; 004200de
        ;   XREF to: 004200c3 (CONDITIONAL_JUMP)  ; LAB_004200c3
    XOR EAX,EAX                         ; 004200e0
    RET                                 ; 004200e2

