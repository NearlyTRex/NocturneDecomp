; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_game.cpp_FUN_004e09c0()
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e31cf
;
; Referenced Globals:
;   double DOUBLE_0062c935 = 31457280
;   double DOUBLE_0062c93d = 256
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   undefined4 DAT_02d831ec
;   undefined4 DAT_02d831f0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004e09c0
        ;   Label: core_game.cpp_FUN_004e09c0
    MOV EBP,ESP                         ; 004e09c1
    SUB ESP,0xc                         ; 004e09c3
    AND ESP,0xfffffff8                  ; 004e09c6
    MOV EDX,dword ptr [0x02d831ec]      ; 004e09c9 | undefined4 DAT_02d831ec
    MOV ECX,dword ptr [EBP + 0x8]       ; 004e09cf
    TEST EDX,EDX                        ; 004e09d2
    JZ 0x004e0a30                       ; 004e09d4 | LAB_004e0a30
        ;   XREF to: 004e0a30 (CONDITIONAL_JUMP)
    CMP EDX,0x4                         ; 004e09d6
    JGE 0x004e0a3a                      ; 004e09d9 | LAB_004e0a3a
        ;   XREF to: 004e0a3a (CONDITIONAL_JUMP)
    FILD dword ptr [0x00679398]         ; 004e09db | int g_WindowHeight
    FDIVR double ptr [0x0062c935]       ; 004e09e1 | double DOUBLE_0062c935
    FSTP float ptr [ESP]                ; 004e09e7
    CMP EDX,0x2                         ; 004e09ea
    JZ 0x004e0a41                       ; 004e09ed | LAB_004e0a41
        ;   XREF to: 004e0a41 (CONDITIONAL_JUMP)
    CMP EDX,0x3                         ; 004e09ef
        ;   Label: LAB_004e09ef
    JNZ 0x004e0a26                      ; 004e09f2 | LAB_004e0a26
        ;   XREF to: 004e0a26 (CONDITIONAL_JUMP)
    FILD dword ptr [ECX + 0x260]        ; 004e09f4
    FMUL double ptr [0x0062c93d]        ; 004e09fa | double DOUBLE_0062c93d
    FDIV float ptr [ESP]                ; 004e0a00
    FLD float ptr [0x02d831f0]          ; 004e0a03 | undefined4 DAT_02d831f0
    FXCH                                ; 004e0a09
    FSUBR ST0,ST1                       ; 004e0a0b
    FLDZ                                ; 004e0a0d
    FXCH                                ; 004e0a0f
    FSTP ST2                            ; 004e0a11
    FXCH                                ; 004e0a13
    FSTP float ptr [0x02d831f0]         ; 004e0a15 | undefined4 DAT_02d831f0
    FCOMP float ptr [0x02d831f0]        ; 004e0a1b | undefined4 DAT_02d831f0
    FNSTSW AX                           ; 004e0a21
    SAHF                                ; 004e0a23
    JA 0x004e0a7f                       ; 004e0a24 | LAB_004e0a7f
        ;   XREF to: 004e0a7f (CONDITIONAL_JUMP)
    CMP EDX,0x1                         ; 004e0a26
        ;   Label: LAB_004e0a26
    JNZ 0x004e0a30                      ; 004e0a29 | LAB_004e0a30
        ;   XREF to: 004e0a30 (CONDITIONAL_JUMP)
    MOV EDX,0x2                         ; 004e0a2b
    MOV dword ptr [0x02d831ec],EDX      ; 004e0a30 | undefined4 DAT_02d831ec
        ;   Label: LAB_004e0a30
    MOV ESP,EBP                         ; 004e0a36
    POP EBP                             ; 004e0a38
    RET                                 ; 004e0a39
    MOV EDX,0x5                         ; 004e0a3a
        ;   Label: LAB_004e0a3a
    JMP 0x004e0a30                      ; 004e0a3f | LAB_004e0a30
        ;   XREF to: 004e0a30 (UNCONDITIONAL_JUMP)
    FILD dword ptr [ECX + 0x260]        ; 004e0a41
        ;   Label: LAB_004e0a41
    FMUL double ptr [0x0062c93d]        ; 004e0a47 | double DOUBLE_0062c93d
    FDIV float ptr [ESP]                ; 004e0a4d
    FLD float ptr [0x02d831f0]          ; 004e0a50 | undefined4 DAT_02d831f0
    FXCH                                ; 004e0a56
    FADD ST0,ST1                        ; 004e0a58
    FILD dword ptr [0x00679394]         ; 004e0a5a | int g_WindowWidth
    FXCH                                ; 004e0a60
    FSTP ST2                            ; 004e0a62
    FXCH                                ; 004e0a64
    FSTP float ptr [0x02d831f0]         ; 004e0a66 | undefined4 DAT_02d831f0
    FCOMP float ptr [0x02d831f0]        ; 004e0a6c | undefined4 DAT_02d831f0
    FNSTSW AX                           ; 004e0a72
    SAHF                                ; 004e0a74
    JNC 0x004e09ef                      ; 004e0a75 | LAB_004e09ef
        ;   XREF to: 004e09ef (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 004e0a7b
    JMP 0x004e0a30                      ; 004e0a7d | LAB_004e0a30
        ;   XREF to: 004e0a30 (UNCONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 004e0a7f
        ;   Label: LAB_004e0a7f
    MOV dword ptr [0x02d831f0],EDX      ; 004e0a81 | undefined4 DAT_02d831f0
    MOV EDX,0x4                         ; 004e0a87
    MOV dword ptr [0x02d831ec],EDX      ; 004e0a8c | undefined4 DAT_02d831ec
    MOV ESP,EBP                         ; 004e0a92
    POP EBP                             ; 004e0a94
    RET                                 ; 004e0a95

