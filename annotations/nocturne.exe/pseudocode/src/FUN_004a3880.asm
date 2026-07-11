; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a3880(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_004a6010 at 004a604f
;
; Referenced Globals:
;   undefined4 DAT_00583b02
;   undefined4 DAT_00583b0a
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_01c78b04
;   undefined4 DAT_01c78b08
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004a3880
        ;   Label: FUN_004a3880
    MOV EBP,ESP                         ; 004a3881
    SUB ESP,0xc                         ; 004a3883
    AND ESP,0xfffffff8                  ; 004a3886
    MOV EDX,dword ptr [0x01c78b04]      ; 004a3889 | DAT_01c78b04
    MOV ECX,dword ptr [EBP + 0x8]       ; 004a388f
    TEST EDX,EDX                        ; 004a3892
    JZ 0x004a38f0                       ; 004a3894
        ;   XREF to: 004a38f0 (CONDITIONAL_JUMP)  ; LAB_004a38f0
    CMP EDX,0x4                         ; 004a3896
    JGE 0x004a38fa                      ; 004a3899
        ;   XREF to: 004a38fa (CONDITIONAL_JUMP)  ; LAB_004a38fa
    FILD dword ptr [0x005b7620]         ; 004a389b | DAT_005b7620
    FDIVR double ptr [0x00583b02]       ; 004a38a1 | DAT_00583b02
    FSTP float ptr [ESP]                ; 004a38a7
    CMP EDX,0x2                         ; 004a38aa
    JZ 0x004a3901                       ; 004a38ad
        ;   XREF to: 004a3901 (CONDITIONAL_JUMP)  ; LAB_004a3901
    CMP EDX,0x3                         ; 004a38af
        ;   Label: LAB_004a38af
    JNZ 0x004a38e6                      ; 004a38b2
        ;   XREF to: 004a38e6 (CONDITIONAL_JUMP)  ; LAB_004a38e6
    FILD dword ptr [ECX + 0x260]        ; 004a38b4
    FMUL double ptr [0x00583b0a]        ; 004a38ba | DAT_00583b0a
    FDIV float ptr [ESP]                ; 004a38c0
    FLD float ptr [0x01c78b08]          ; 004a38c3 | DAT_01c78b08
    FXCH                                ; 004a38c9
    FSUBR ST0,ST1                       ; 004a38cb
    FLDZ                                ; 004a38cd
    FXCH                                ; 004a38cf
    FSTP ST2                            ; 004a38d1
    FXCH                                ; 004a38d3
    FSTP float ptr [0x01c78b08]         ; 004a38d5 | DAT_01c78b08
    FCOMP float ptr [0x01c78b08]        ; 004a38db | DAT_01c78b08
    FNSTSW AX                           ; 004a38e1
    SAHF                                ; 004a38e3
    JA 0x004a393f                       ; 004a38e4
        ;   XREF to: 004a393f (CONDITIONAL_JUMP)  ; LAB_004a393f
    CMP EDX,0x1                         ; 004a38e6
        ;   Label: LAB_004a38e6
    JNZ 0x004a38f0                      ; 004a38e9
        ;   XREF to: 004a38f0 (CONDITIONAL_JUMP)  ; LAB_004a38f0
    MOV EDX,0x2                         ; 004a38eb
    MOV dword ptr [0x01c78b04],EDX      ; 004a38f0 | DAT_01c78b04
        ;   Label: LAB_004a38f0
    MOV ESP,EBP                         ; 004a38f6
    POP EBP                             ; 004a38f8
    RET                                 ; 004a38f9
    MOV EDX,0x5                         ; 004a38fa
        ;   Label: LAB_004a38fa
    JMP 0x004a38f0                      ; 004a38ff
        ;   XREF to: 004a38f0 (UNCONDITIONAL_JUMP)  ; LAB_004a38f0
    FILD dword ptr [ECX + 0x260]        ; 004a3901
        ;   Label: LAB_004a3901
    FMUL double ptr [0x00583b0a]        ; 004a3907 | DAT_00583b0a
    FDIV float ptr [ESP]                ; 004a390d
    FLD float ptr [0x01c78b08]          ; 004a3910 | DAT_01c78b08
    FXCH                                ; 004a3916
    FADD ST0,ST1                        ; 004a3918
    FILD dword ptr [0x005b761c]         ; 004a391a | DAT_005b761c
    FXCH                                ; 004a3920
    FSTP ST2                            ; 004a3922
    FXCH                                ; 004a3924
    FSTP float ptr [0x01c78b08]         ; 004a3926 | DAT_01c78b08
    FCOMP float ptr [0x01c78b08]        ; 004a392c | DAT_01c78b08
    FNSTSW AX                           ; 004a3932
    SAHF                                ; 004a3934
    JNC 0x004a38af                      ; 004a3935
        ;   XREF to: 004a38af (CONDITIONAL_JUMP)  ; LAB_004a38af
    XOR EDX,EDX                         ; 004a393b
    JMP 0x004a38f0                      ; 004a393d
        ;   XREF to: 004a38f0 (UNCONDITIONAL_JUMP)  ; LAB_004a38f0
    XOR EDX,EDX                         ; 004a393f
        ;   Label: LAB_004a393f
    MOV dword ptr [0x01c78b08],EDX      ; 004a3941 | DAT_01c78b08
    MOV EDX,0x4                         ; 004a3947
    MOV dword ptr [0x01c78b04],EDX      ; 004a394c | DAT_01c78b04
    MOV ESP,EBP                         ; 004a3952
    POP EBP                             ; 004a3954
    RET                                 ; 004a3955

