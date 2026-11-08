; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00594980(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_005247c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00594980
        ;   Label: FUN_00594980
    MOV ECX,dword ptr [EDX + 0x27b0]    ; 00594984
    TEST ECX,ECX                        ; 0059498a
    JNZ 0x005949aa                      ; 0059498c
        ;   XREF to: 005949aa (CONDITIONAL_JUMP)  ; LAB_005949aa
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059498e
    FLD float ptr [EAX + 0x4]           ; 00594992
    FSUBR float ptr [EDX + 0x2538]      ; 00594995
    FST float ptr [EDX + 0x2538]        ; 0059499b
    FLDZ                                ; 005949a1
    FCOMPP                              ; 005949a3
    FNSTSW AX                           ; 005949a5
    SAHF                                ; 005949a7
    JNC 0x005949ab                      ; 005949a8
        ;   XREF to: 005949ab (CONDITIONAL_JUMP)  ; LAB_005949ab
    RET                                 ; 005949aa
        ;   Label: LAB_005949aa
    PUSH 0x1                            ; 005949ab
        ;   Label: LAB_005949ab
    PUSH 0x3                            ; 005949ad
    ADD EDX,0x158                       ; 005949af
    PUSH EDX                            ; 005949b5
    MOV dword ptr [EDX + 0x23e0],ECX    ; 005949b6
    CALL FUN_005247c0                   ; 005949bc
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 005949c1
    RET                                 ; 005949c4

