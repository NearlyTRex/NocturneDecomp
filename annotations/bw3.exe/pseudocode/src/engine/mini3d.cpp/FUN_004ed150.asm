; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004ed150(float *param_1,float *param_2,float *param_3,float *param_4)
;
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_0047f4c0 at 0047f860
;   shape_edittool.cpp_FUN_0047fa80 at 0047fb29
;
; Referenced Globals:
;   undefined4 DAT_01d76c4c
;   undefined4 DAT_01d76c50
;   undefined4 DAT_01d76c54
;   undefined4 DAT_01d76c58
;   undefined4 DAT_01d76cc4
;   undefined4 DAT_01d7a694
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004ed150
        ;   Label: engine_mini3d.cpp_FUN_004ed150
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ed153
    MOV ECX,dword ptr [ESP + 0xc]       ; 004ed157
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ed15b
    CMP dword ptr [0x01d7a694],0x0      ; 004ed15f | DAT_01d7a694
    JZ 0x004ed194                       ; 004ed166
        ;   XREF to: 004ed194 (CONDITIONAL_JUMP)  ; LAB_004ed194
    FLD float ptr [0x01d76c4c]          ; 004ed168 | DAT_01d76c4c
    FLD float ptr [0x01d76c50]          ; 004ed16e | DAT_01d76c50
    FLD float ptr [0x01d76c54]          ; 004ed174 | DAT_01d76c54
    FLD float ptr [0x01d76c58]          ; 004ed17a | DAT_01d76c58
    FXCH ST3                            ; 004ed180
    FSTP float ptr [EDX]                ; 004ed182
    MOV EDX,dword ptr [ESP + 0x10]      ; 004ed184
    FXCH                                ; 004ed188
    FSTP float ptr [ECX]                ; 004ed18a
    FSTP float ptr [EDX]                ; 004ed18c
    FSTP float ptr [EAX]                ; 004ed18e
    ADD ESP,0x4                         ; 004ed190
    RET                                 ; 004ed193
    FLD1                                ; 004ed194
        ;   Label: LAB_004ed194
    FLD float ptr [0x01d76c4c]          ; 004ed196 | DAT_01d76c4c
    FXCH                                ; 004ed19c
    FDIV float ptr [0x01d76cc4]         ; 004ed19e | DAT_01d76cc4
    FXCH                                ; 004ed1a4
    FMUL ST1                            ; 004ed1a6
    FLD float ptr [0x01d76c50]          ; 004ed1a8 | DAT_01d76c50
    FMUL ST2                            ; 004ed1ae
    FLD float ptr [0x01d76c54]          ; 004ed1b0 | DAT_01d76c54
    FMUL ST3                            ; 004ed1b6
    FLD float ptr [0x01d76c58]          ; 004ed1b8 | DAT_01d76c58
    FMULP ST4                           ; 004ed1be
    FXCH ST2                            ; 004ed1c0
    FSTP float ptr [EDX]                ; 004ed1c2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004ed1c4
    FSTP float ptr [ECX]                ; 004ed1c8
    FSTP float ptr [EDX]                ; 004ed1ca
    FSTP float ptr [EAX]                ; 004ed1cc
    ADD ESP,0x4                         ; 004ed1ce
    RET                                 ; 004ed1d1

