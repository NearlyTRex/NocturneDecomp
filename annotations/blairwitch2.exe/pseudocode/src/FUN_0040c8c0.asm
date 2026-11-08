; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040c8c0(int param_1,undefined4 param_2)
;
;
; XREF[4]:
;   FUN_0040c8f0 at 0040c903
;   FUN_00488d00 at 00488d95
;   FUN_00521290 at 00521316
;   FUN_00536990 at 005369d8
;
; Called Functions:
;   FUN_0040c870
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040c8c0
        ;   Label: FUN_0040c8c0
    TEST EAX,EAX                        ; 0040c8c4
    JNZ 0x0040c8c9                      ; 0040c8c6
        ;   XREF to: 0040c8c9 (CONDITIONAL_JUMP)  ; LAB_0040c8c9
    RET                                 ; 0040c8c8
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c8c9
        ;   Label: LAB_0040c8c9
    PUSH EDX                            ; 0040c8cd
    PUSH EAX                            ; 0040c8ce
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0040c8cf
    CALL dword ptr [EDX + 0xd4]         ; 0040c8d5
    ADD ESP,0x4                         ; 0040c8db
    PUSH EAX                            ; 0040c8de
    CALL FUN_0040c870                   ; 0040c8df
        ;   XREF to: 0040c870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c870()
    ADD ESP,0x8                         ; 0040c8e4
    RET                                 ; 0040c8e7

