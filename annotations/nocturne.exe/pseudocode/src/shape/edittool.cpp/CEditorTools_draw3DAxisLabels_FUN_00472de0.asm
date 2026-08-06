; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0(CEditorTools *this_ptr,float scale_factor,int text_color)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   scale_factor
; int              Stack[0xc]:4   text_color
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[3]:
;   core_cloth.cpp_CCloth_FUN_00437ab0 at 00437cb0
;   core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_00518f60 at 005190e1
;   shape_edittool.cpp_FUN_00472fd0 at 00473060
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e4fa
;   TerminatedCString s_gEdFont_must_be_set_by_t_0057e510
;   TerminatedCString s_XYZ_0057ea93
;   undefined4 s_YZ_0057ea93+1
;   TerminatedCString s_c_0057ea97
;   double DOUBLE_0057ea9a = 256
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5018
;   undefined4 DAT_005c5044
;   undefined4 DAT_005c5048
;   undefined4 DAT_005c5054+3
;   undefined4 DAT_005c5074
;   undefined4 DAT_005c5078
;   undefined4 DAT_005c5084
;   undefined4 DAT_005c5084+3
;   ... and 10 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_math.c_round_FUN_00563a30
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_3d.c_clipAndDrawLine2D_FUN_00409290
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_matrix.c_transformToCache_FUN_004cd210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472de0
        ;   Label: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0
    PUSH ESI                            ; 00472de1
    PUSH EDI                            ; 00472de2
    PUSH EBP                            ; 00472de3
    SUB ESP,0x24                        ; 00472de4
    CMP dword ptr [0x01bcd070],0x0      ; 00472de7 | DAT_01bcd070
    JZ 0x00472f4f                       ; 00472dee
        ;   XREF to: 00472f4f (CONDITIONAL_JUMP)  ; LAB_00472f4f
    MOV EAX,[0x01bcd070]                ; 00472df4 | DAT_01bcd070
        ;   Label: LAB_00472df4
    PUSH 0x6a                           ; 00472df9
    MOV EBX,dword ptr [EAX + 0x3168]    ; 00472dfb
    PUSH EAX                            ; 00472e01
    MOV dword ptr [0x01bcd9b8],EBX      ; 00472e02 | DAT_01bcd9b8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00472e08
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00472e0d
    FLD float ptr [ESP + 0x3c]          ; 00472e10
    FMUL double ptr [0x0057ea9a]        ; 00472e14 | DOUBLE_0057ea9a
    XOR ESI,ESI                         ; 00472e1a
    MOV [0x01bcd9bc],EAX                ; 00472e1c | DAT_01bcd9bc
    MOV EAX,dword ptr [ESP + 0x40]      ; 00472e21
    MOV dword ptr [ESP + 0x14],ESI      ; 00472e25
    MOV dword ptr [ESP + 0x18],ESI      ; 00472e29
    MOV [0x01c00c70],EAX                ; 00472e2d | DAT_01c00c70
    LEA EAX,[ESP + 0x14]                ; 00472e32
    MOV dword ptr [ESP + 0x1c],ESI      ; 00472e36
    PUSH EAX                            ; 00472e3a
    CALL crt_math.c_round_FUN_00563a30  ; 00472e3b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    PUSH ESI                            ; 00472e40
    FISTP dword ptr [ESP + 0x28]        ; 00472e41
    CALL engine_matrix.c_transformToCache_FUN_004cd210 ; 00472e45
        ;   XREF to: 004cd210 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004cd210(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 00472e4a
    MOV EAX,dword ptr [ESP + 0x20]      ; 00472e4d
    MOV dword ptr [ESP + 0x14],EAX      ; 00472e51
    LEA EAX,[ESP + 0x14]                ; 00472e55
    PUSH EAX                            ; 00472e59
    PUSH 0x1                            ; 00472e5a
    MOV dword ptr [ESP + 0x20],ESI      ; 00472e5c
    MOV dword ptr [ESP + 0x24],ESI      ; 00472e60
    CALL engine_matrix.c_transformToCache_FUN_004cd210 ; 00472e64
        ;   XREF to: 004cd210 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004cd210(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 00472e69
    MOV ESI,0x5c5044                    ; 00472e6c | DAT_005c5044
    SUB ESP,0x30                        ; 00472e71
    MOV ECX,0xc                         ; 00472e74
    MOV EDI,ESP                         ; 00472e79
    MOVSD.REP ES:EDI,ESI                ; 00472e7b | DAT_005c5044 | DAT_005c5048
    SUB ESP,0x30                        ; 00472e7d
    MOV ECX,0xc                         ; 00472e80
    MOV ESI,0x5c5014                    ; 00472e85 | DAT_005c5014
    MOV EDI,ESP                         ; 00472e8a
    MOVSD.REP ES:EDI,ESI                ; 00472e8c | DAT_005c5014 | DAT_005c5018
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00409290 ; 00472e8e
        ;   XREF to: 00409290 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00409290(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00472e93
    MOV EAX,dword ptr [ESP + 0x20]      ; 00472e96
    MOV dword ptr [ESP + 0x18],EAX      ; 00472e9a
    LEA EAX,[ESP + 0x14]                ; 00472e9e
    PUSH EAX                            ; 00472ea2
    XOR ECX,ECX                         ; 00472ea3
    PUSH 0x2                            ; 00472ea5
    MOV dword ptr [ESP + 0x1c],ECX      ; 00472ea7
    MOV dword ptr [ESP + 0x24],ECX      ; 00472eab
    CALL engine_matrix.c_transformToCache_FUN_004cd210 ; 00472eaf
        ;   XREF to: 004cd210 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004cd210(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 00472eb4
    MOV ESI,0x5c5074                    ; 00472eb7 | DAT_005c5074
    SUB ESP,0x30                        ; 00472ebc
    MOV ECX,0xc                         ; 00472ebf
    MOV EDI,ESP                         ; 00472ec4
    MOVSD.REP ES:EDI,ESI                ; 00472ec6 | DAT_005c5074 | DAT_005c5078
    SUB ESP,0x30                        ; 00472ec8
    MOV ECX,0xc                         ; 00472ecb
    MOV ESI,0x5c5014                    ; 00472ed0 | DAT_005c5014
    MOV EDI,ESP                         ; 00472ed5
    MOVSD.REP ES:EDI,ESI                ; 00472ed7 | DAT_005c5014 | DAT_005c5018
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00409290 ; 00472ed9
        ;   XREF to: 00409290 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00409290(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00472ede
    MOV EAX,dword ptr [ESP + 0x20]      ; 00472ee1
    MOV dword ptr [ESP + 0x1c],EAX      ; 00472ee5
    LEA EAX,[ESP + 0x14]                ; 00472ee9
    PUSH EAX                            ; 00472eed
    XOR EBX,EBX                         ; 00472eee
    XOR ESI,ESI                         ; 00472ef0
    PUSH 0x3                            ; 00472ef2
    MOV dword ptr [ESP + 0x1c],ESI      ; 00472ef4
    MOV dword ptr [ESP + 0x20],EBX      ; 00472ef8
    CALL engine_matrix.c_transformToCache_FUN_004cd210 ; 00472efc
        ;   XREF to: 004cd210 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004cd210(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 00472f01
    MOV ESI,0x5c50a4                    ; 00472f04 | DAT_005c50a4
    SUB ESP,0x30                        ; 00472f09
    MOV ECX,0xc                         ; 00472f0c
    MOV EDI,ESP                         ; 00472f11
    MOV EBX,0x5c5014                    ; 00472f13 | DAT_005c5014
    MOVSD.REP ES:EDI,ESI                ; 00472f18 | DAT_005c50a4 | DAT_005c50a8
    SUB ESP,0x30                        ; 00472f1a
    MOV ECX,0xc                         ; 00472f1d
    MOV ESI,0x5c5014                    ; 00472f22 | DAT_005c5014
    MOV EDI,ESP                         ; 00472f27
    ADD EBX,0x30                        ; 00472f29
    MOVSD.REP ES:EDI,ESI                ; 00472f2c | DAT_005c5014 | DAT_005c5018
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00409290 ; 00472f2e
        ;   XREF to: 00409290 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00409290(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00472f33
    XOR ESI,ESI                         ; 00472f36
    TEST byte ptr [EBX + 0x13],0x80     ; 00472f38 | DAT_005c5054+3 | DAT_005c5084+3
        ;   Label: LAB_00472f38
    JZ 0x00472f77                       ; 00472f3c
        ;   XREF to: 00472f77 (CONDITIONAL_JUMP)  ; LAB_00472f77
    INC ESI                             ; 00472f3e
        ;   Label: LAB_00472f3e
    ADD EBX,0x30                        ; 00472f3f
    CMP ESI,0x3                         ; 00472f42
    JL 0x00472f38                       ; 00472f45
        ;   XREF to: 00472f38 (CONDITIONAL_JUMP)  ; LAB_00472f38
    ADD ESP,0x24                        ; 00472f47
    POP EBP                             ; 00472f4a
    POP EDI                             ; 00472f4b
    POP ESI                             ; 00472f4c
    POP EBX                             ; 00472f4d
    RET                                 ; 00472f4e
    MOV ECX,0x57e4fa                    ; 00472f4f | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00472f4f
    MOV EBX,0x8b                        ; 00472f54
    PUSH 0x57e510                       ; 00472f59 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01cc4800],ECX      ; 00472f5e | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 00472f64 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00472f6a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00472f6f
    JMP 0x00472df4                      ; 00472f72
        ;   XREF to: 00472df4 (UNCONDITIONAL_JUMP)  ; LAB_00472df4
    XOR EAX,EAX                         ; 00472f77
        ;   Label: LAB_00472f77
    MOV AL,byte ptr [ESI + 0x57ea93]    ; 00472f79 | s_YZ_0057ea93+1 | = "XYZ"
    PUSH EAX                            ; 00472f7f
    PUSH 0x57ea97                       ; 00472f80 | = "%c"
    LEA EAX,[ESP + 0x8]                 ; 00472f85
    PUSH EAX                            ; 00472f89
    MOV EBP,dword ptr [EBX + 0x10]      ; 00472f8a | DAT_005c5084
    MOV EDI,dword ptr [EBX + 0x14]      ; 00472f8d | DAT_005c5088
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00472f90
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 00472f95
    PUSH 0xffff                         ; 00472f98
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 00472f9d
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00408370(int alpha_color_value)
    ADD ESP,0x4                         ; 00472fa2
    PUSH -0x1                           ; 00472fa5
    MOV EAX,[0x01bcde04]                ; 00472fa7 | DAT_01bcde04
    PUSH EAX                            ; 00472fac
    SAR EDI,0x10                        ; 00472fad
    PUSH EDI                            ; 00472fb0
    SAR EBP,0x10                        ; 00472fb1
    PUSH EBP                            ; 00472fb4
    LEA EAX,[ESP + 0x10]                ; 00472fb5
    PUSH EAX                            ; 00472fb9
    MOV EDX,dword ptr [0x01bcd070]      ; 00472fba | DAT_01bcd070
    PUSH EDX                            ; 00472fc0
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 00472fc1
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00472fc6
    JMP 0x00472f3e                      ; 00472fc9
        ;   XREF to: 00472f3e (UNCONDITIONAL_JUMP)  ; LAB_00472f3e

