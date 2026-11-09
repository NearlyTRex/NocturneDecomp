; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_minecar_cpp_FUN_004ed020(float param_1,float param_2,float param_3,float param_4)
;
;
; XREF[4]:
;   engine_mini3d.cpp_FUN_004f033e at 004f0384
;   shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047f990 at 0047f9db
;   shape_edittool.cpp_FUN_0047f4c0 at 0047f8b0
;   shape_edittool.cpp_FUN_0047fa80 at 0047fb66
;
; Referenced Globals:
;   undefined4 DAT_005c7e71
;   undefined4 DAT_005c7e75
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01d76c4c
;   undefined4 DAT_01d76c50
;   undefined4 DAT_01d76c54
;   undefined4 DAT_01d76c58
;   undefined4 DAT_01d76c5c
;   undefined4 DAT_01d76c60
;   undefined4 DAT_01d76c64
;   undefined4 DAT_01d76c68
;   undefined4 DAT_01d76cbc
;   undefined4 DAT_01d76cc0
;   undefined4 DAT_01d76cc4
;   undefined4 DAT_01d7977c
;   ... and 2 more
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004ef8f0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004ed020
        ;   Label: unkafter_minecar.cpp_FUN_004ed020
    SUB ESP,0x8                         ; 004ed021
    CMP dword ptr [0x01d7a694],0x0      ; 004ed024 | DAT_01d7a694
    JZ 0x004ed10a                       ; 004ed02b
        ;   XREF to: 004ed10a (CONDITIONAL_JUMP)  ; LAB_004ed10a
    FLD float ptr [ESP + 0x1c]          ; 004ed031
        ;   Label: LAB_004ed031
    FLD float ptr [ESP + 0x18]          ; 004ed035
    FSUB float ptr [ESP + 0x10]         ; 004ed039
    FXCH                                ; 004ed03d
    FSUB float ptr [ESP + 0x14]         ; 004ed03f
    FXCH                                ; 004ed043
    FLD float ptr [0x005c7e71]          ; 004ed045 | DAT_005c7e71
    FXCH                                ; 004ed04b
    FMUL ST1                            ; 004ed04d
    FXCH ST2                            ; 004ed04f
    FMULP                               ; 004ed051
    FLD float ptr [ESP + 0x10]          ; 004ed053
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ed057
    FLD float ptr [ESP + 0x14]          ; 004ed05b
    MOV [0x01d76c4c],EAX                ; 004ed05f | DAT_01d76c4c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ed064
    MOV ECX,dword ptr [0x01d7a694]      ; 004ed068 | DAT_01d7a694
    MOV [0x01d76c50],EAX                ; 004ed06e | DAT_01d76c50
    FLD ST3                             ; 004ed073
    FLD ST3                             ; 004ed075
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ed077
    FCHS                                ; 004ed07b
    FLD1                                ; 004ed07d
    FXCH ST4                            ; 004ed07f
    FADDP ST6,ST0                       ; 004ed081
    FXCH ST2                            ; 004ed083
    FADDP ST4,ST0                       ; 004ed085
    MOV [0x01d76c54],EAX                ; 004ed087 | DAT_01d76c54
    FXCH ST4                            ; 004ed08c
    FSTP float ptr [0x01d76c64]         ; 004ed08e | DAT_01d76c64
    FXCH ST3                            ; 004ed094
    FADD float ptr [0x005c7e75]         ; 004ed096 | DAT_005c7e75
    FXCH ST2                            ; 004ed09c
    FSTP float ptr [0x01d76c68]         ; 004ed09e | DAT_01d76c68
    FXCH                                ; 004ed0a4
    FSTP float ptr [0x01d76c5c]         ; 004ed0a6 | DAT_01d76c5c
    FADDP                               ; 004ed0ac
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ed0ae
    FSTP float ptr [0x01d76c60]         ; 004ed0b2 | DAT_01d76c60
    MOV [0x01d76c58],EAX                ; 004ed0b8 | DAT_01d76c58
    TEST ECX,ECX                        ; 004ed0bd
    JNZ 0x004ed0f5                      ; 004ed0bf
        ;   XREF to: 004ed0f5 (CONDITIONAL_JUMP)  ; LAB_004ed0f5
    CMP dword ptr [0x02cf60a0],0x0      ; 004ed0c1 | DAT_02cf60a0
    JZ 0x004ed0f5                       ; 004ed0c8
        ;   XREF to: 004ed0f5 (CONDITIONAL_JUMP)  ; LAB_004ed0f5
    CMP dword ptr [0x01c6cee8],0x0      ; 004ed0ca | DAT_01c6cee8
    JZ 0x004ed0f5                       ; 004ed0d1
        ;   XREF to: 004ed0f5 (CONDITIONAL_JUMP)  ; LAB_004ed0f5
    PUSH dword ptr [0x01d76cc0]         ; 004ed0d3 | DAT_01d76cc0
    PUSH dword ptr [0x01d76cbc]         ; 004ed0d9 | DAT_01d76cbc
    PUSH EAX                            ; 004ed0df
    PUSH dword ptr [ESP + 0x24]         ; 004ed0e0
    PUSH dword ptr [ESP + 0x24]         ; 004ed0e4
    PUSH dword ptr [ESP + 0x24]         ; 004ed0e8
    CALL dword ptr [0x02cf60a0]         ; 004ed0ec | DAT_02cf60a0
    ADD ESP,0x18                        ; 004ed0f2
    MOV EDI,0x1                         ; 004ed0f5
        ;   Label: LAB_004ed0f5
    CALL engine_mini3d.cpp_FUN_004ef8f0 ; 004ed0fa
        ;   XREF to: 004ef8f0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ef8f0()
    MOV dword ptr [0x01d7977c],EDI      ; 004ed0ff | DAT_01d7977c
    ADD ESP,0x8                         ; 004ed105
    POP EDI                             ; 004ed108
    RET                                 ; 004ed109
    FLD float ptr [0x01d76cc4]          ; 004ed10a | DAT_01d76cc4
        ;   Label: LAB_004ed10a
    FLD float ptr [ESP + 0x10]          ; 004ed110
    FMUL ST1                            ; 004ed114
    FLD float ptr [ESP + 0x14]          ; 004ed116
    FMUL ST2                            ; 004ed11a
    FLD float ptr [ESP + 0x18]          ; 004ed11c
    FMUL ST3                            ; 004ed120
    FLD float ptr [ESP + 0x1c]          ; 004ed122
    FMULP ST4                           ; 004ed126
    FXCH                                ; 004ed128
    FSTP float ptr [ESP + 0x14]         ; 004ed12a
    FSTP float ptr [ESP + 0x18]         ; 004ed12e
    FXCH                                ; 004ed132
    FSTP float ptr [ESP + 0x1c]         ; 004ed134
    FSTP float ptr [ESP + 0x10]         ; 004ed138
    JMP 0x004ed031                      ; 004ed13c
        ;   XREF to: 004ed031 (UNCONDITIONAL_JUMP)  ; LAB_004ed031

