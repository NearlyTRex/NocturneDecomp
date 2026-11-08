; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005173e0(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_engine_mini3d_cpp_005e8f8c
;   TerminatedCString s_Bad_clip_005e8fa1
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d25f1c
;   undefined4 DAT_01d25f20
;   undefined4 DAT_01d25f24
;   undefined4 DAT_01d25f28
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005173e0
        ;   Label: FUN_005173e0
    PUSH ESI                            ; 005173e1
    PUSH EDI                            ; 005173e2
    PUSH EBP                            ; 005173e3
    SUB ESP,0x8                         ; 005173e4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005173e7
    MOV ESI,dword ptr [ESP + 0x20]      ; 005173eb
    MOV EDI,dword ptr [ESP + 0x24]      ; 005173ef
    FLD float ptr [ESI + 0x4]           ; 005173f3
    FSUB float ptr [EBX + 0x4]          ; 005173f6
    FMUL float ptr [0x01d25f20]         ; 005173f9 | DAT_01d25f20
    FLD float ptr [ESI]                 ; 005173ff
    FSUB float ptr [EBX]                ; 00517401
    FMUL float ptr [0x01d25f1c]         ; 00517403 | DAT_01d25f1c
    FADDP                               ; 00517409
    FLD float ptr [ESI + 0x8]           ; 0051740b
    FSUB float ptr [EBX + 0x8]          ; 0051740e
    FMUL float ptr [0x01d25f24]         ; 00517411 | DAT_01d25f24
    FADDP                               ; 00517417
    FSTP float ptr [ESP + 0x4]          ; 00517419
    TEST dword ptr [ESP + 0x4],0x7fffffff ; 0051741d
    JZ 0x005174dd                       ; 00517425
        ;   XREF to: 005174dd (CONDITIONAL_JUMP)  ; LAB_005174dd
    FLD float ptr [0x01d25f1c]          ; 0051742b | DAT_01d25f1c
        ;   Label: LAB_0051742b
    FMUL float ptr [EBX]                ; 00517431
    FADD float ptr [0x01d25f28]         ; 00517433 | DAT_01d25f28
    FLD float ptr [0x01d25f20]          ; 00517439 | DAT_01d25f20
    FMUL float ptr [EBX + 0x4]          ; 0051743f
    FADDP                               ; 00517442
    FLD float ptr [0x01d25f24]          ; 00517444 | DAT_01d25f24
    FMUL float ptr [EBX + 0x8]          ; 0051744a
    FADDP                               ; 0051744d
    FLD ST0                             ; 0051744f
    FCHS                                ; 00517451
    FDIV float ptr [ESP + 0x4]          ; 00517453
    FLD float ptr [ESI]                 ; 00517457
    FSUB float ptr [EBX]                ; 00517459
    FXCH                                ; 0051745b
    FSTP ST2                            ; 0051745d
    FMUL ST1                            ; 0051745f
    FADD float ptr [EBX]                ; 00517461
    FSTP float ptr [EDI]                ; 00517463
    FLD float ptr [ESI + 0x4]           ; 00517465
    FSUB float ptr [EBX + 0x4]          ; 00517468
    FMUL ST1                            ; 0051746b
    FADD float ptr [EBX + 0x4]          ; 0051746d
    FSTP float ptr [EDI + 0x4]          ; 00517470
    FLD float ptr [ESI + 0x8]           ; 00517473
    FSUB float ptr [EBX + 0x8]          ; 00517476
    FMUL ST1                            ; 00517479
    FADD float ptr [EBX + 0x8]          ; 0051747b
    FSTP float ptr [EDI + 0x8]          ; 0051747e
    FLD float ptr [ESI + 0x1c]          ; 00517481
    FSUB float ptr [EBX + 0x1c]         ; 00517484
    FMUL ST1                            ; 00517487
    FADD float ptr [EBX + 0x1c]         ; 00517489
    FSTP float ptr [EDI + 0x1c]         ; 0051748c
    FLD float ptr [ESI + 0x20]          ; 0051748f
    FSUB float ptr [EBX + 0x20]         ; 00517492
    FMUL ST1                            ; 00517495
    FADD float ptr [EBX + 0x20]         ; 00517497
    FSTP float ptr [EDI + 0x20]         ; 0051749a
    FLD float ptr [ESI + 0xc]           ; 0051749d
    FSUB float ptr [EBX + 0xc]          ; 005174a0
    FMUL ST1                            ; 005174a3
    FADD float ptr [EBX + 0xc]          ; 005174a5
    FSTP float ptr [EDI + 0xc]          ; 005174a8
    FLD float ptr [ESI + 0x10]          ; 005174ab
    FSUB float ptr [EBX + 0x10]         ; 005174ae
    FMUL ST1                            ; 005174b1
    FADD float ptr [EBX + 0x10]         ; 005174b3
    FSTP float ptr [EDI + 0x10]         ; 005174b6
    FLD float ptr [ESI + 0x14]          ; 005174b9
    FSUB float ptr [EBX + 0x14]         ; 005174bc
    FMUL ST1                            ; 005174bf
    FADD float ptr [EBX + 0x14]         ; 005174c1
    FSTP float ptr [EDI + 0x14]         ; 005174c4
    FLD float ptr [ESI + 0x18]          ; 005174c7
    FSUB float ptr [EBX + 0x18]         ; 005174ca
    FMULP                               ; 005174cd
    FADD float ptr [EBX + 0x18]         ; 005174cf
    FSTP float ptr [EDI + 0x18]         ; 005174d2
    ADD ESP,0x8                         ; 005174d5
    POP EBP                             ; 005174d8
    POP EDI                             ; 005174d9
    POP ESI                             ; 005174da
    POP EBX                             ; 005174db
    RET                                 ; 005174dc
    MOV ECX,0x5e8f8c                    ; 005174dd | = "..\\engine\\mini3d.cpp"
        ;   Label: LAB_005174dd
    MOV EBP,0x1473                      ; 005174e2
    PUSH 0x5e8fa1                       ; 005174e7 | = "Bad clip!"
    MOV dword ptr [0x01d1d400],ECX      ; 005174ec | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 005174f2 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005174f8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005174fd
    JMP 0x0051742b                      ; 00517500
        ;   XREF to: 0051742b (UNCONDITIONAL_JUMP)  ; LAB_0051742b

