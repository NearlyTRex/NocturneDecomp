; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005619a0(undefined4 *param_1,uint param_2)
;
;
; XREF[1]:
;   FUN_00561940 at 00561992
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005619a0
        ;   Label: FUN_005619a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005619a4
    TEST DL,0x1                         ; 005619a8
    JNZ 0x005619d9                      ; 005619ab
        ;   XREF to: 005619d9 (CONDITIONAL_JUMP)  ; LAB_005619d9
    TEST DL,0x2                         ; 005619ad
        ;   Label: LAB_005619ad
    JZ 0x005619b8                       ; 005619b0
        ;   XREF to: 005619b8 (CONDITIONAL_JUMP)  ; LAB_005619b8
    MOV ECX,dword ptr [EAX + 0xc]       ; 005619b2
    MOV dword ptr [EAX + 0x28],ECX      ; 005619b5
    TEST DL,0x8                         ; 005619b8
        ;   Label: LAB_005619b8
    JZ 0x005619c9                       ; 005619bb
        ;   XREF to: 005619c9 (CONDITIONAL_JUMP)  ; LAB_005619c9
    FLD float ptr [EAX + 0x10]          ; 005619bd
    MOV ECX,dword ptr [EAX + 0x14]      ; 005619c0
    MOV dword ptr [EAX + 0x34],ECX      ; 005619c3
    FSTP float ptr [EAX + 0x30]         ; 005619c6
    TEST DL,0x4                         ; 005619c9
        ;   Label: LAB_005619c9
    JZ 0x005619d3                       ; 005619cc
        ;   XREF to: 005619d3 (CONDITIONAL_JUMP)  ; LAB_005619d3
    MOV ECX,dword ptr [EAX]             ; 005619ce
    MOV dword ptr [EAX + 0x2c],ECX      ; 005619d0
    TEST DL,0x10                        ; 005619d3
        ;   Label: LAB_005619d3
    JNZ 0x005619e1                      ; 005619d6
        ;   XREF to: 005619e1 (CONDITIONAL_JUMP)  ; LAB_005619e1
    RET                                 ; 005619d8
    MOV ECX,dword ptr [EAX + 0x8]       ; 005619d9
        ;   Label: LAB_005619d9
    MOV dword ptr [EAX + 0x24],ECX      ; 005619dc
    JMP 0x005619ad                      ; 005619df
        ;   XREF to: 005619ad (UNCONDITIONAL_JUMP)  ; LAB_005619ad
    MOV EDX,dword ptr [EAX + 0x4]       ; 005619e1
        ;   Label: LAB_005619e1
    MOV dword ptr [EAX + 0x38],EDX      ; 005619e4
    RET                                 ; 005619e7

