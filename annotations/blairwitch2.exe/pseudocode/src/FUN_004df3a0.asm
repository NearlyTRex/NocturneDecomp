; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004df3a0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH 0x5dbbf0                       ; 004df3a0
        ;   Label: FUN_004df3a0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004df3a5
    PUSH EDX                            ; 004df3a9
    CALL FUN_0040c840                   ; 004df3aa
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004df3af
    TEST EAX,EAX                        ; 004df3b2
    JZ 0x004df3bb                       ; 004df3b4
        ;   XREF to: 004df3bb (CONDITIONAL_JUMP)  ; LAB_004df3bb
    MOV EAX,0x2                         ; 004df3b6
    RET                                 ; 004df3bb
        ;   Label: LAB_004df3bb

