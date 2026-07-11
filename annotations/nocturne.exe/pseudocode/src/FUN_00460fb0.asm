; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460fb0(int param_1,int param_2)
;
;
; XREF[12]:
;   FUN_0041dcc0 at 0041dd56
;   FUN_00437db0 at 00437de5
;   FUN_0043f330 at 0043f440
;   FUN_0044aff0 at 0044b03b
;   FUN_0044f0b0 at 0044f211
;   FUN_00453170 at 004531aa
;   FUN_00461db0 at 00461e26
;   FUN_00485a90 at 00485cf7
;   FUN_004b2110 at 004b2168
;   FUN_004dfea0 at 004dfec5
;   ... and 2 more
;
; Called Functions:
;   FUN_00460fa0
;   FUN_004f9450
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00460fb0
        ;   Label: FUN_00460fb0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00460fb1
    TEST EDX,EDX                        ; 00460fb5
    JZ 0x00460fee                       ; 00460fb7
        ;   XREF to: 00460fee (CONDITIONAL_JUMP)  ; LAB_00460fee
    MOV EAX,dword ptr [ESP + 0x8]       ; 00460fb9
    CMP dword ptr [EAX + 0x18],0x0      ; 00460fbd
    JZ 0x00460fea                       ; 00460fc1
        ;   XREF to: 00460fea (CONDITIONAL_JUMP)  ; LAB_00460fea
    PUSH 0x2                            ; 00460fc3
    CALL FUN_004f9450                   ; 00460fc5
        ;   XREF to: 004f9450 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9450()
        ;   Label: LAB_00460fc5
    ADD ESP,0x4                         ; 00460fca
    CMP dword ptr [ESP + 0xc],0x0       ; 00460fcd
    SETZ AL                             ; 00460fd2
    AND EAX,0xff                        ; 00460fd5
    PUSH EAX                            ; 00460fda
    MOV ESI,dword ptr [ESP + 0xc]       ; 00460fdb
    PUSH ESI                            ; 00460fdf
    CALL FUN_00460fa0                   ; 00460fe0
        ;   XREF to: 00460fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460fa0()
    ADD ESP,0x8                         ; 00460fe5
    POP ESI                             ; 00460fe8
    RET                                 ; 00460fe9
    PUSH 0x1                            ; 00460fea
        ;   Label: LAB_00460fea
    JMP 0x00460fc5                      ; 00460fec
        ;   XREF to: 00460fc5 (UNCONDITIONAL_JUMP)  ; LAB_00460fc5
    PUSH EDX                            ; 00460fee
        ;   Label: LAB_00460fee
    JMP 0x00460fc5                      ; 00460fef
        ;   XREF to: 00460fc5 (UNCONDITIONAL_JUMP)  ; LAB_00460fc5

