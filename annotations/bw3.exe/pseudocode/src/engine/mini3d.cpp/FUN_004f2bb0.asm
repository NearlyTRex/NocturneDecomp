; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f2bb0(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004f2cf0 at 004f2de8
;
; Referenced Globals:
;   TerminatedCString s_engine_mini3d_cpp_005c828e
;   TerminatedCString s_Bad_clip_005c82a3
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d7a69c
;   undefined4 DAT_01d7a6a0
;   undefined4 DAT_01d7a6a4
;   undefined4 DAT_01d7a6a8
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2bb0
        ;   Label: engine_mini3d.cpp_FUN_004f2bb0
    PUSH ESI                            ; 004f2bb1
    PUSH EDI                            ; 004f2bb2
    PUSH EBP                            ; 004f2bb3
    SUB ESP,0x8                         ; 004f2bb4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004f2bb7
    MOV ESI,dword ptr [ESP + 0x20]      ; 004f2bbb
    MOV EDI,dword ptr [ESP + 0x24]      ; 004f2bbf
    FLD float ptr [ESI + 0x4]           ; 004f2bc3
    FSUB float ptr [EBX + 0x4]          ; 004f2bc6
    FMUL float ptr [0x01d7a6a0]         ; 004f2bc9 | DAT_01d7a6a0
    FLD float ptr [ESI]                 ; 004f2bcf
    FSUB float ptr [EBX]                ; 004f2bd1
    FMUL float ptr [0x01d7a69c]         ; 004f2bd3 | DAT_01d7a69c
    FADDP                               ; 004f2bd9
    FLD float ptr [ESI + 0x8]           ; 004f2bdb
    FSUB float ptr [EBX + 0x8]          ; 004f2bde
    FMUL float ptr [0x01d7a6a4]         ; 004f2be1 | DAT_01d7a6a4
    FADDP                               ; 004f2be7
    FSTP float ptr [ESP + 0x4]          ; 004f2be9
    TEST dword ptr [ESP + 0x4],0x7fffffff ; 004f2bed
    JZ 0x004f2cad                       ; 004f2bf5
        ;   XREF to: 004f2cad (CONDITIONAL_JUMP)  ; LAB_004f2cad
    FLD float ptr [0x01d7a69c]          ; 004f2bfb | DAT_01d7a69c
        ;   Label: LAB_004f2bfb
    FMUL float ptr [EBX]                ; 004f2c01
    FADD float ptr [0x01d7a6a8]         ; 004f2c03 | DAT_01d7a6a8
    FLD float ptr [0x01d7a6a0]          ; 004f2c09 | DAT_01d7a6a0
    FMUL float ptr [EBX + 0x4]          ; 004f2c0f
    FADDP                               ; 004f2c12
    FLD float ptr [0x01d7a6a4]          ; 004f2c14 | DAT_01d7a6a4
    FMUL float ptr [EBX + 0x8]          ; 004f2c1a
    FADDP                               ; 004f2c1d
    FLD ST0                             ; 004f2c1f
    FCHS                                ; 004f2c21
    FDIV float ptr [ESP + 0x4]          ; 004f2c23
    FLD float ptr [ESI]                 ; 004f2c27
    FSUB float ptr [EBX]                ; 004f2c29
    FXCH                                ; 004f2c2b
    FSTP ST2                            ; 004f2c2d
    FMUL ST1                            ; 004f2c2f
    FADD float ptr [EBX]                ; 004f2c31
    FSTP float ptr [EDI]                ; 004f2c33
    FLD float ptr [ESI + 0x4]           ; 004f2c35
    FSUB float ptr [EBX + 0x4]          ; 004f2c38
    FMUL ST1                            ; 004f2c3b
    FADD float ptr [EBX + 0x4]          ; 004f2c3d
    FSTP float ptr [EDI + 0x4]          ; 004f2c40
    FLD float ptr [ESI + 0x8]           ; 004f2c43
    FSUB float ptr [EBX + 0x8]          ; 004f2c46
    FMUL ST1                            ; 004f2c49
    FADD float ptr [EBX + 0x8]          ; 004f2c4b
    FSTP float ptr [EDI + 0x8]          ; 004f2c4e
    FLD float ptr [ESI + 0x1c]          ; 004f2c51
    FSUB float ptr [EBX + 0x1c]         ; 004f2c54
    FMUL ST1                            ; 004f2c57
    FADD float ptr [EBX + 0x1c]         ; 004f2c59
    FSTP float ptr [EDI + 0x1c]         ; 004f2c5c
    FLD float ptr [ESI + 0x20]          ; 004f2c5f
    FSUB float ptr [EBX + 0x20]         ; 004f2c62
    FMUL ST1                            ; 004f2c65
    FADD float ptr [EBX + 0x20]         ; 004f2c67
    FSTP float ptr [EDI + 0x20]         ; 004f2c6a
    FLD float ptr [ESI + 0xc]           ; 004f2c6d
    FSUB float ptr [EBX + 0xc]          ; 004f2c70
    FMUL ST1                            ; 004f2c73
    FADD float ptr [EBX + 0xc]          ; 004f2c75
    FSTP float ptr [EDI + 0xc]          ; 004f2c78
    FLD float ptr [ESI + 0x10]          ; 004f2c7b
    FSUB float ptr [EBX + 0x10]         ; 004f2c7e
    FMUL ST1                            ; 004f2c81
    FADD float ptr [EBX + 0x10]         ; 004f2c83
    FSTP float ptr [EDI + 0x10]         ; 004f2c86
    FLD float ptr [ESI + 0x14]          ; 004f2c89
    FSUB float ptr [EBX + 0x14]         ; 004f2c8c
    FMUL ST1                            ; 004f2c8f
    FADD float ptr [EBX + 0x14]         ; 004f2c91
    FSTP float ptr [EDI + 0x14]         ; 004f2c94
    FLD float ptr [ESI + 0x18]          ; 004f2c97
    FSUB float ptr [EBX + 0x18]         ; 004f2c9a
    FMULP                               ; 004f2c9d
    FADD float ptr [EBX + 0x18]         ; 004f2c9f
    FSTP float ptr [EDI + 0x18]         ; 004f2ca2
    ADD ESP,0x8                         ; 004f2ca5
    POP EBP                             ; 004f2ca8
    POP EDI                             ; 004f2ca9
    POP ESI                             ; 004f2caa
    POP EBX                             ; 004f2cab
    RET                                 ; 004f2cac
    MOV ECX,0x5c828e                    ; 004f2cad | = "..\\engine\\mini3d.cpp"
        ;   Label: LAB_004f2cad
    MOV EBP,0x1473                      ; 004f2cb2
    PUSH 0x5c82a3                       ; 004f2cb7 | = "Bad clip!"
    MOV dword ptr [0x01d71de0],ECX      ; 004f2cbc | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004f2cc2 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f2cc8
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f2ccd
    JMP 0x004f2bfb                      ; 004f2cd0
        ;   XREF to: 004f2bfb (UNCONDITIONAL_JUMP)  ; LAB_004f2bfb

