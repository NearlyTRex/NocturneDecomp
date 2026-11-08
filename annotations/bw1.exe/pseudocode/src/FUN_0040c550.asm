; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040c550(int param_1,undefined4 param_2)
;
;
; XREF[71]:
;   FUN_00409f20 at 0040a1ba
;   FUN_0040c870 at 0040c909
;   FUN_0040dfe0 at 0040dfea
;   FUN_0040e4f0 at 0040e50a
;   FUN_004109a0 at 004109cf
;   FUN_00412ba0 at 0041362a
;   FUN_004144a0 at 004144aa
;   FUN_0041c9a0 at 0041ce74
;   FUN_00422c30 at 00422c52
;   FUN_0042a930 at 0042b0f7
;   ... and 61 more
;
; Called Functions:
;   FUN_0040c5b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040c550
        ;   Label: FUN_0040c550
    TEST EAX,EAX                        ; 0040c554
    JNZ 0x0040c559                      ; 0040c556
        ;   XREF to: 0040c559 (CONDITIONAL_JUMP)  ; LAB_0040c559
    RET                                 ; 0040c558
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c559
        ;   Label: LAB_0040c559
    PUSH EDX                            ; 0040c55d
    PUSH EAX                            ; 0040c55e
    MOV EDX,dword ptr [EAX + 0x154]     ; 0040c55f
    CALL dword ptr [EDX + 0xcc]         ; 0040c565
    ADD ESP,0x4                         ; 0040c56b
    PUSH EAX                            ; 0040c56e
    CALL FUN_0040c5b0                   ; 0040c56f
        ;   XREF to: 0040c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c5b0()
    ADD ESP,0x8                         ; 0040c574
    RET                                 ; 0040c577

