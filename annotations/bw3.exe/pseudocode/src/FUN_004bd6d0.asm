; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bd6d0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_004bf4b0 at 004bf4ef
;
; Referenced Globals:
;   undefined4 DAT_005c3548
;   undefined4 DAT_005c3550
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01d22c84
;   undefined4 DAT_01d22c88
;   undefined4 DAT_01d22c94
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004bd6d0
        ;   Label: FUN_004bd6d0
    MOV EBP,ESP                         ; 004bd6d1
    SUB ESP,0xc                         ; 004bd6d3
    AND ESP,0xfffffff8                  ; 004bd6d6
    MOV EDX,dword ptr [0x01d22c84]      ; 004bd6d9 | DAT_01d22c84
    MOV ECX,dword ptr [0x01d22c94]      ; 004bd6df | DAT_01d22c94
    TEST EDX,EDX                        ; 004bd6e5
    JZ 0x004bd751                       ; 004bd6e7
        ;   XREF to: 004bd751 (CONDITIONAL_JUMP)  ; LAB_004bd751
    CMP EDX,0x4                         ; 004bd6e9
    JGE 0x004bd763                      ; 004bd6ec
        ;   XREF to: 004bd763 (CONDITIONAL_JUMP)  ; LAB_004bd763
    FILD dword ptr [0x005fba1c]         ; 004bd6f2 | DAT_005fba1c
    FDIVR double ptr [0x005c3548]       ; 004bd6f8 | DAT_005c3548
    FSTP float ptr [ESP]                ; 004bd6fe
    CMP EDX,0x2                         ; 004bd701
    JZ 0x004bd76a                       ; 004bd704
        ;   XREF to: 004bd76a (CONDITIONAL_JUMP)  ; LAB_004bd76a
    CMP EDX,0x3                         ; 004bd706
        ;   Label: LAB_004bd706
    JNZ 0x004bd740                      ; 004bd709
        ;   XREF to: 004bd740 (CONDITIONAL_JUMP)  ; LAB_004bd740
    MOV EAX,dword ptr [EBP + 0x8]       ; 004bd70b
    FILD dword ptr [EAX + 0x310]        ; 004bd70e
    FMUL double ptr [0x005c3550]        ; 004bd714 | DAT_005c3550
    FDIV float ptr [ESP]                ; 004bd71a
    FLD float ptr [0x01d22c88]          ; 004bd71d | DAT_01d22c88
    FXCH                                ; 004bd723
    FSUBR ST0,ST1                       ; 004bd725
    FLDZ                                ; 004bd727
    FXCH                                ; 004bd729
    FSTP ST2                            ; 004bd72b
    FXCH                                ; 004bd72d
    FSTP float ptr [0x01d22c88]         ; 004bd72f | DAT_01d22c88
    FCOMP float ptr [0x01d22c88]        ; 004bd735 | DAT_01d22c88
    FNSTSW AX                           ; 004bd73b
    SAHF                                ; 004bd73d
    JA 0x004bd7ab                       ; 004bd73e
        ;   XREF to: 004bd7ab (CONDITIONAL_JUMP)  ; LAB_004bd7ab
    CMP EDX,0x1                         ; 004bd740
        ;   Label: LAB_004bd740
    JNZ 0x004bd753                      ; 004bd743
        ;   XREF to: 004bd753 (CONDITIONAL_JUMP)  ; LAB_004bd753
    ADD ECX,EDX                         ; 004bd745
    CMP ECX,0x3                         ; 004bd747
    JL 0x004bd753                       ; 004bd74a
        ;   XREF to: 004bd753 (CONDITIONAL_JUMP)  ; LAB_004bd753
    MOV EDX,0x2                         ; 004bd74c
    XOR ECX,ECX                         ; 004bd751
        ;   Label: LAB_004bd751
    MOV dword ptr [0x01d22c94],ECX      ; 004bd753 | DAT_01d22c94
        ;   Label: LAB_004bd753
    MOV dword ptr [0x01d22c84],EDX      ; 004bd759 | DAT_01d22c84
    MOV ESP,EBP                         ; 004bd75f
    POP EBP                             ; 004bd761
    RET                                 ; 004bd762
    MOV EDX,0x5                         ; 004bd763
        ;   Label: LAB_004bd763
    JMP 0x004bd753                      ; 004bd768
        ;   XREF to: 004bd753 (UNCONDITIONAL_JUMP)  ; LAB_004bd753
    MOV EAX,dword ptr [EBP + 0x8]       ; 004bd76a
        ;   Label: LAB_004bd76a
    FILD dword ptr [EAX + 0x310]        ; 004bd76d
    FMUL double ptr [0x005c3550]        ; 004bd773 | DAT_005c3550
    FDIV float ptr [ESP]                ; 004bd779
    FLD float ptr [0x01d22c88]          ; 004bd77c | DAT_01d22c88
    FXCH                                ; 004bd782
    FADD ST0,ST1                        ; 004bd784
    FILD dword ptr [0x005fba18]         ; 004bd786 | DAT_005fba18
    FXCH                                ; 004bd78c
    FSTP ST2                            ; 004bd78e
    FXCH                                ; 004bd790
    FSTP float ptr [0x01d22c88]         ; 004bd792 | DAT_01d22c88
    FCOMP float ptr [0x01d22c88]        ; 004bd798 | DAT_01d22c88
    FNSTSW AX                           ; 004bd79e
    SAHF                                ; 004bd7a0
    JNC 0x004bd706                      ; 004bd7a1
        ;   XREF to: 004bd706 (CONDITIONAL_JUMP)  ; LAB_004bd706
    XOR EDX,EDX                         ; 004bd7a7
    JMP 0x004bd753                      ; 004bd7a9
        ;   XREF to: 004bd753 (UNCONDITIONAL_JUMP)  ; LAB_004bd753
    XOR EDX,EDX                         ; 004bd7ab
        ;   Label: LAB_004bd7ab
    MOV dword ptr [0x01d22c88],EDX      ; 004bd7ad | DAT_01d22c88
    MOV EDX,0x4                         ; 004bd7b3
    MOV dword ptr [0x01d22c94],ECX      ; 004bd7b8 | DAT_01d22c94
    MOV dword ptr [0x01d22c84],EDX      ; 004bd7be | DAT_01d22c84
    MOV ESP,EBP                         ; 004bd7c4
    POP EBP                             ; 004bd7c6
    RET                                 ; 004bd7c7

