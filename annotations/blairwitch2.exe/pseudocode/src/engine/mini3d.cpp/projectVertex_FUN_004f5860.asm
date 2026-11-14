; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_projectVertex_FUN_004f5860(float *vertex)
;
; Parameters:
; float *          Stack[0x4]:4   vertex
;
; XREF[1]:
;   engine_mini3d.cpp_userClipPolyList_FUN_004f8750 at 004f8b08
;
; Referenced Globals:
;   undefined4 DAT_01d0987c
;   undefined4 DAT_01d09880
;   undefined4 DAT_01d09884
;   undefined4 DAT_01d09888
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f5860
        ;   Label: engine_mini3d.cpp_projectVertex_FUN_004f5860
    MOV dword ptr [EDX + 0x10],0x0      ; 004f5864
    FLD float ptr [EDX]                 ; 004f586b
    FCOMP float ptr [EDX + 0x8]         ; 004f586d
    FNSTSW AX                           ; 004f5870
    SAHF                                ; 004f5872
    JA 0x004f58b6                       ; 004f5873
        ;   XREF to: 004f58b6 (CONDITIONAL_JUMP)  ; LAB_004f58b6
    FLD float ptr [EDX + 0x8]           ; 004f5875
        ;   Label: LAB_004f5875
    FCHS                                ; 004f5878
    FCOMP float ptr [EDX]               ; 004f587a
    FNSTSW AX                           ; 004f587c
    SAHF                                ; 004f587e
    JBE 0x004f5885                      ; 004f587f
        ;   XREF to: 004f5885 (CONDITIONAL_JUMP)  ; LAB_004f5885
    OR byte ptr [EDX + 0x10],0x2        ; 004f5881
    FLD float ptr [EDX + 0x4]           ; 004f5885
        ;   Label: LAB_004f5885
    FCOMP float ptr [EDX + 0x8]         ; 004f5888
    FNSTSW AX                           ; 004f588b
    SAHF                                ; 004f588d
    JBE 0x004f5894                      ; 004f588e
        ;   XREF to: 004f5894 (CONDITIONAL_JUMP)  ; LAB_004f5894
    OR byte ptr [EDX + 0x10],0x4        ; 004f5890
    FLD float ptr [EDX + 0x8]           ; 004f5894
        ;   Label: LAB_004f5894
    FCHS                                ; 004f5897
    FCOMP float ptr [EDX + 0x4]         ; 004f5899
    FNSTSW AX                           ; 004f589c
    SAHF                                ; 004f589e
    JBE 0x004f58a5                      ; 004f589f
        ;   XREF to: 004f58a5 (CONDITIONAL_JUMP)  ; LAB_004f58a5
    OR byte ptr [EDX + 0x10],0x8        ; 004f58a1
    FLDZ                                ; 004f58a5
        ;   Label: LAB_004f58a5
    FCOMP float ptr [EDX + 0x8]         ; 004f58a7
    FNSTSW AX                           ; 004f58aa
    SAHF                                ; 004f58ac
    JNC 0x004f58fa                      ; 004f58ad
        ;   XREF to: 004f58fa (CONDITIONAL_JUMP)  ; LAB_004f58fa
    CMP dword ptr [EDX + 0x10],0x0      ; 004f58af
    JZ 0x004f58bc                       ; 004f58b3
        ;   XREF to: 004f58bc (CONDITIONAL_JUMP)  ; LAB_004f58bc
    RET                                 ; 004f58b5
    OR byte ptr [EDX + 0x10],0x1        ; 004f58b6
        ;   Label: LAB_004f58b6
    JMP 0x004f5875                      ; 004f58ba
        ;   XREF to: 004f5875 (UNCONDITIONAL_JUMP)  ; LAB_004f5875
    FLD float ptr [EDX + 0x8]           ; 004f58bc
        ;   Label: LAB_004f58bc
    FLD1                                ; 004f58bf
    FDIVRP                              ; 004f58c1
    FLD float ptr [EDX]                 ; 004f58c3
    FMUL float ptr [0x01d0987c]         ; 004f58c5 | DAT_01d0987c
    FLD float ptr [EDX + 0x4]           ; 004f58cb
    FMUL float ptr [0x01d09880]         ; 004f58ce | DAT_01d09880
    FXCH ST2                            ; 004f58d4
    FSTP float ptr [EDX + 0xc]          ; 004f58d6
    FMUL float ptr [EDX + 0xc]          ; 004f58d9
    FXCH                                ; 004f58dc
    FMUL float ptr [EDX + 0xc]          ; 004f58de
    FLD float ptr [0x01d09888]          ; 004f58e1 | DAT_01d09888
    FLD float ptr [0x01d09884]          ; 004f58e7 | DAT_01d09884
    FADDP ST3,ST0                       ; 004f58ed
    FADDP                               ; 004f58ef
    FXCH                                ; 004f58f1
    FSTP float ptr [EDX + 0x14]         ; 004f58f3
    FSTP float ptr [EDX + 0x18]         ; 004f58f6
    RET                                 ; 004f58f9
    OR byte ptr [EDX + 0x10],0x10       ; 004f58fa
        ;   Label: LAB_004f58fa
    RET                                 ; 004f58fe

