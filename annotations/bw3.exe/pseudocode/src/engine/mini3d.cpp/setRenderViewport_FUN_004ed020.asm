; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setRenderViewport_FUN_004ed020(float left,float top,float right,float bottom)
;
; Parameters:
; float            Stack[0x4]:4   left
; float            Stack[0x8]:4   top
; float            Stack[0xc]:4   right
; float            Stack[0x10]:4   bottom
;
; XREF[4]:
;   engine_mini3d.cpp_setRenderSurface_FUN_004f0340 at 004f0384
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_0047f4c0 at 0047f8b0
;   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_0047fa80 at 0047fb66
;   shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047f990 at 0047f9db
;
; Referenced Globals:
;   float g_FLOAT_005c7e71 = 0.5
;   float g_FLOAT_005c7e75 = -1
;   int g_INT_01c6cee8
;   float g_FLOAT_01d76c4c
;   float g_FLOAT_01d76c50
;   float g_FLOAT_01d76c54
;   float g_FLOAT_01d76c58
;   float g_FLOAT_01d76c5c
;   float g_FLOAT_01d76c60
;   float g_FLOAT_01d76c64
;   float g_FLOAT_01d76c68
;   float g_FLOAT_01d76cbc
;   int g_INT_01d76cc0
;   float g_FLOAT_01d76cc4
;   int g_INT_01d7977c
;   ... and 2 more
;
; Called Functions:
;   engine_mini3d.cpp_resetDynamicLight_FUN_004ef8f0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004ed020
        ;   Label: engine_mini3d.cpp_setRenderViewport_FUN_004ed020
    SUB ESP,0x8                         ; 004ed021
    CMP dword ptr [0x01d7a694],0x0      ; 004ed024 | g_INT_01d7a694
    JZ 0x004ed10a                       ; 004ed02b
        ;   XREF to: 004ed10a (CONDITIONAL_JUMP)  ; LAB_004ed10a
    FLD float ptr [ESP + 0x1c]          ; 004ed031
        ;   Label: LAB_004ed031
    FLD float ptr [ESP + 0x18]          ; 004ed035
    FSUB float ptr [ESP + 0x10]         ; 004ed039
    FXCH                                ; 004ed03d
    FSUB float ptr [ESP + 0x14]         ; 004ed03f
    FXCH                                ; 004ed043
    FLD float ptr [0x005c7e71]          ; 004ed045 | g_FLOAT_005c7e71
    FXCH                                ; 004ed04b
    FMUL ST1                            ; 004ed04d
    FXCH ST2                            ; 004ed04f
    FMULP                               ; 004ed051
    FLD float ptr [ESP + 0x10]          ; 004ed053
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ed057
    FLD float ptr [ESP + 0x14]          ; 004ed05b
    MOV [0x01d76c4c],EAX                ; 004ed05f | g_FLOAT_01d76c4c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ed064
    MOV ECX,dword ptr [0x01d7a694]      ; 004ed068 | g_INT_01d7a694
    MOV [0x01d76c50],EAX                ; 004ed06e | g_FLOAT_01d76c50
    FLD ST3                             ; 004ed073
    FLD ST3                             ; 004ed075
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ed077
    FCHS                                ; 004ed07b
    FLD1                                ; 004ed07d
    FXCH ST4                            ; 004ed07f
    FADDP ST6,ST0                       ; 004ed081
    FXCH ST2                            ; 004ed083
    FADDP ST4,ST0                       ; 004ed085
    MOV [0x01d76c54],EAX                ; 004ed087 | g_FLOAT_01d76c54
    FXCH ST4                            ; 004ed08c
    FSTP float ptr [0x01d76c64]         ; 004ed08e | g_FLOAT_01d76c64
    FXCH ST3                            ; 004ed094
    FADD float ptr [0x005c7e75]         ; 004ed096 | g_FLOAT_005c7e75
    FXCH ST2                            ; 004ed09c
    FSTP float ptr [0x01d76c68]         ; 004ed09e | g_FLOAT_01d76c68
    FXCH                                ; 004ed0a4
    FSTP float ptr [0x01d76c5c]         ; 004ed0a6 | g_FLOAT_01d76c5c
    FADDP                               ; 004ed0ac
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ed0ae
    FSTP float ptr [0x01d76c60]         ; 004ed0b2 | g_FLOAT_01d76c60
    MOV [0x01d76c58],EAX                ; 004ed0b8 | g_FLOAT_01d76c58
    TEST ECX,ECX                        ; 004ed0bd
    JNZ 0x004ed0f5                      ; 004ed0bf
        ;   XREF to: 004ed0f5 (CONDITIONAL_JUMP)  ; LAB_004ed0f5
    CMP dword ptr [0x02cf60a0],0x0      ; 004ed0c1 | g_PTR_02cf60a0
    JZ 0x004ed0f5                       ; 004ed0c8
        ;   XREF to: 004ed0f5 (CONDITIONAL_JUMP)  ; LAB_004ed0f5
    CMP dword ptr [0x01c6cee8],0x0      ; 004ed0ca | g_INT_01c6cee8
    JZ 0x004ed0f5                       ; 004ed0d1
        ;   XREF to: 004ed0f5 (CONDITIONAL_JUMP)  ; LAB_004ed0f5
    PUSH dword ptr [0x01d76cc0]         ; 004ed0d3 | g_INT_01d76cc0
    PUSH dword ptr [0x01d76cbc]         ; 004ed0d9 | g_FLOAT_01d76cbc
    PUSH EAX                            ; 004ed0df
    PUSH dword ptr [ESP + 0x24]         ; 004ed0e0
    PUSH dword ptr [ESP + 0x24]         ; 004ed0e4
    PUSH dword ptr [ESP + 0x24]         ; 004ed0e8
    CALL dword ptr [0x02cf60a0]         ; 004ed0ec | g_PTR_02cf60a0
    ADD ESP,0x18                        ; 004ed0f2
    MOV EDI,0x1                         ; 004ed0f5
        ;   Label: LAB_004ed0f5
    CALL engine_mini3d.cpp_resetDynamicLight_FUN_004ef8f0 ; 004ed0fa
        ;   XREF to: 004ef8f0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_resetDynamicLight_FUN_004ef8f0()
    MOV dword ptr [0x01d7977c],EDI      ; 004ed0ff | g_INT_01d7977c
    ADD ESP,0x8                         ; 004ed105
    POP EDI                             ; 004ed108
    RET                                 ; 004ed109
    FLD float ptr [0x01d76cc4]          ; 004ed10a | g_FLOAT_01d76cc4
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

