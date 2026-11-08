; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00412ec0(int param_1)
;
;
; XREF[1]:
;   FUN_00412f40 at 004135a4
;
; Called Functions:
;   FUN_0040d060
;   FUN_00503620
;
; *****************************************************************************

section .text

    PUSH 0x3f000000                     ; 00412ec0
        ;   Label: FUN_00412ec0
    CALL FUN_0040d060                   ; 00412ec5
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 00412eca
    MOV EDX,dword ptr [ESP + 0x4]       ; 00412ecd
    ADD EDX,0x2b4                       ; 00412ed1
    TEST EAX,EAX                        ; 00412ed7
    JZ 0x00412ee9                       ; 00412ed9
        ;   XREF to: 00412ee9 (CONDITIONAL_JUMP)  ; LAB_00412ee9
    PUSH 0x1                            ; 00412edb
    PUSH 0x1                            ; 00412edd
    PUSH EDX                            ; 00412edf
    CALL FUN_00503620                   ; 00412ee0
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00412ee5
    RET                                 ; 00412ee8
    PUSH 0x1                            ; 00412ee9
        ;   Label: LAB_00412ee9
    PUSH 0x2                            ; 00412eeb
    PUSH EDX                            ; 00412eed
    CALL FUN_00503620                   ; 00412eee
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00412ef3
    RET                                 ; 00412ef6

