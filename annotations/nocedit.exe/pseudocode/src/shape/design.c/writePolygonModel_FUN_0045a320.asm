; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_writePolygonModel_FUN_0045a320(int polygon_index,_FILE *output_file,float scale_factor)
;
; Parameters:
; int              Stack[0x4]:4   polygon_index
; _FILE *          Stack[0x8]:4   output_file
; float            Stack[0xc]:4   scale_factor
; Local Variables:
; undefined8       Stack[-0x2c]:8  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   float FLOAT_0061ae5e = 65535
;   double DOUBLE_0061ae66 = 65535
;   double DOUBLE_0061ae6e = 256
;   TerminatedCString s_COLOR_d_0061ae76
;   TerminatedCString s_FACET_d_d_d_d_d_0061ae81
;   TerminatedCString s_d_0061ae96
;   TerminatedCString s_anon_0061ae9a
;   TerminatedCString s_TEXTURE_s_0061ae9c
;   TerminatedCString s_FACET_dTMAP_d_d_d_d_0061aeab
;   TerminatedCString s_d_0061aec4
;   TerminatedCString s_f_0061aec8
;   TerminatedCString s_f_0061aecc
;   TerminatedCString s_anon_0061aed0
;   int g_EditorColorIndex
;   char[80] g_TempTextureName
;   ... and 17 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_string.c_strcmp_FUN_005fef20
;   shape_design.c_calculatePolygonNormal_FUN_0045caa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045a320
        ;   Label: shape_design.c_writePolygonModel_FUN_0045a320
    PUSH ESI                            ; 0045a321
    PUSH EDI                            ; 0045a322
    PUSH EBP                            ; 0045a323
    MOV EBP,ESP                         ; 0045a324
    SUB ESP,0x14                        ; 0045a326
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045a32c
    MOV EDX,0x16e9910                   ; 0045a333 | g_ModelPolygonData
    ADD EAX,EDX                         ; 0045a338
    PUSH EAX                            ; 0045a33a
    CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0 ; 0045a33b
        ;   XREF to: 0045caa0 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon)
    ADD ESP,0x4                         ; 0045a340
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045a343
    FLD float ptr [EAX + 0x16e99b8]     ; 0045a34a | DAT_016e99b8
    FMUL float ptr [0x0061ae5e]         ; 0045a350 | FLOAT_0061ae5e
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045a356
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x14]       ; 0045a35b
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045a35e
    FLD float ptr [EAX + 0x16e99bc]     ; 0045a365 | DAT_016e99bc
    FMUL float ptr [0x0061ae5e]         ; 0045a36b | FLOAT_0061ae5e
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045a371
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x10]       ; 0045a376
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045a379
    FLD float ptr [EAX + 0x16e99c0]     ; 0045a380 | DAT_016e99c0
    FMUL float ptr [0x0061ae5e]         ; 0045a386 | FLOAT_0061ae5e
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045a38c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0xc]        ; 0045a391
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045a394
    FLD float ptr [EAX + 0x16e99c4]     ; 0045a39b | DAT_016e99c4
    FMUL double ptr [0x0061ae66]        ; 0045a3a1 | DOUBLE_0061ae66
    FMUL double ptr [0x0061ae6e]        ; 0045a3a7 | DOUBLE_0061ae6e
    FLD float ptr [EBP + 0x1c]          ; 0045a3ad
    FMULP                               ; 0045a3b0
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045a3b2
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x8]        ; 0045a3b7
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045a3ba
    CMP dword ptr [EAX + 0x16e9910],0x1 ; 0045a3c1 | g_ModelPolygonData
    JNZ 0x0045a4a3                      ; 0045a3c8
        ;   XREF to: 0045a4a3 (CONDITIONAL_JUMP)  ; LAB_0045a4a3
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045a3ce
    MOV EAX,[0x01626368]                ; 0045a3d5 | g_EditorColorIndex
    CMP EAX,dword ptr [EDX + 0x16e9a8c] ; 0045a3da | DAT_016e9a8c
    JZ 0x0045a413                       ; 0045a3e0
        ;   XREF to: 0045a413 (CONDITIONAL_JUMP)  ; LAB_0045a413
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045a3e2
    PUSH dword ptr [EAX + 0x16e9a8c]    ; 0045a3e9 | DAT_016e9a8c
    MOV EAX,0x61ae76                    ; 0045a3ef | = "\tCOLOR\t%d\n"
    PUSH EAX                            ; 0045a3f4 | = "\tCOLOR\t%d\n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045a3f5
    PUSH EAX                            ; 0045a3f8
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a3f9
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0045a3fe
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045a401
    MOV EAX,dword ptr [EAX + 0x16e9a8c] ; 0045a408 | DAT_016e9a8c
    MOV [0x01626368],EAX                ; 0045a40e | g_EditorColorIndex
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045a413
        ;   Label: LAB_0045a413
    PUSH EAX                            ; 0045a416
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045a417
    PUSH EAX                            ; 0045a41a
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045a41b
    PUSH EAX                            ; 0045a41e
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045a41f
    PUSH EAX                            ; 0045a422
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045a423
    PUSH dword ptr [EAX + 0x16e99b4]    ; 0045a42a | DAT_016e99b4
    MOV EAX,0x61ae81                    ; 0045a430 | = "\tFACET%d\t%d,%d,%d,%d"
    PUSH EAX                            ; 0045a435 | = "\tFACET%d\t%d,%d,%d,%d"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045a436
    PUSH EAX                            ; 0045a439
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a43a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x1c                        ; 0045a43f
    MOV dword ptr [EBP + -0x4],0x0      ; 0045a442
    JMP 0x0045a451                      ; 0045a449
        ;   XREF to: 0045a451 (UNCONDITIONAL_JUMP)  ; LAB_0045a451
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a44b
        ;   Label: LAB_0045a44b
    INC dword ptr [EBP + -0x4]          ; 0045a44e
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045a451
        ;   Label: LAB_0045a451
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a458
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0045a45b | DAT_016e99b4
    JGE 0x0045a48c                      ; 0045a461
        ;   XREF to: 0045a48c (CONDITIONAL_JUMP)  ; LAB_0045a48c
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045a463
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a46a
    SHL EAX,0x2                         ; 0045a46d
    ADD EAX,EDX                         ; 0045a470
    PUSH dword ptr [EAX + 0x16e99c8]    ; 0045a472 | DAT_016e99c8
    MOV EAX,0x61ae96                    ; 0045a478 | = ",%d"
    PUSH EAX                            ; 0045a47d | = ",%d"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045a47e
    PUSH EAX                            ; 0045a481
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a482
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0045a487
    JMP 0x0045a44b                      ; 0045a48a
        ;   XREF to: 0045a44b (UNCONDITIONAL_JUMP)  ; LAB_0045a44b
    MOV EAX,0x61ae9a                    ; 0045a48c | = "\n"
        ;   Label: LAB_0045a48c
    PUSH EAX                            ; 0045a491 | = "\n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045a492
    PUSH EAX                            ; 0045a495
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a496
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0045a49b
    JMP 0x0045a5fb                      ; 0045a49e
        ;   XREF to: 0045a5fb (UNCONDITIONAL_JUMP)  ; LAB_0045a5fb
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045a4a3
        ;   Label: LAB_0045a4a3
    MOV EAX,0x16e9910                   ; 0045a4aa | g_ModelPolygonData
    ADD EAX,EDX                         ; 0045a4af
    ADD EAX,0x4                         ; 0045a4b1
    PUSH EAX                            ; 0045a4b4
    MOV EAX,0x1626370                   ; 0045a4b5 | g_TempTextureName
    PUSH EAX                            ; 0045a4ba | g_TempTextureName
    CALL crt_string.c_strcmp_FUN_005fef20 ; 0045a4bb
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0045a4c0
    TEST EAX,EAX                        ; 0045a4c3
    JZ 0x0045a50f                       ; 0045a4c5
        ;   XREF to: 0045a50f (CONDITIONAL_JUMP)  ; LAB_0045a50f
    IMUL ESI,dword ptr [EBP + 0x14],0x184 ; 0045a4c7
    MOV EDI,0x16e9910                   ; 0045a4ce | g_ModelPolygonData
    ADD ESI,EDI                         ; 0045a4d3
    ADD ESI,0x4                         ; 0045a4d5
    MOV EDI,0x1626370                   ; 0045a4d8 | g_TempTextureName
    PUSH EDI                            ; 0045a4dd | g_TempTextureName
    MOV AL,byte ptr [ESI]               ; 0045a4de | DAT_016e9914 | DAT_016e9916
        ;   Label: LAB_0045a4de
    MOV byte ptr [EDI],AL               ; 0045a4e0 | g_TempTextureName | DAT_01626372
    CMP AL,0x0                          ; 0045a4e2
    JZ 0x0045a4f6                       ; 0045a4e4
        ;   XREF to: 0045a4f6 (CONDITIONAL_JUMP)  ; LAB_0045a4f6
    MOV AL,byte ptr [ESI + 0x1]         ; 0045a4e6 | DAT_016e9915 | DAT_016e9917
    ADD ESI,0x2                         ; 0045a4e9
    MOV byte ptr [EDI + 0x1],AL         ; 0045a4ec | DAT_01626371 | DAT_01626373
    ADD EDI,0x2                         ; 0045a4ef
    CMP AL,0x0                          ; 0045a4f2
    JNZ 0x0045a4de                      ; 0045a4f4
        ;   XREF to: 0045a4de (CONDITIONAL_JUMP)  ; LAB_0045a4de
    POP EDI                             ; 0045a4f6
        ;   Label: LAB_0045a4f6
    MOV ESI,0x1626370                   ; 0045a4f7 | g_TempTextureName
    PUSH ESI                            ; 0045a4fc | g_TempTextureName
    MOV ESI,0x61ae9c                    ; 0045a4fd | = "\tTEXTURE\t'%s'\n"
    PUSH ESI                            ; 0045a502 | = "\tTEXTURE\t'%s'\n"
    MOV ESI,dword ptr [EBP + 0x18]      ; 0045a503
    PUSH ESI                            ; 0045a506
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a507
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0045a50c
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045a50f
        ;   Label: LAB_0045a50f
    PUSH EAX                            ; 0045a512
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045a513
    PUSH EAX                            ; 0045a516
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045a517
    PUSH EAX                            ; 0045a51a
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045a51b
    PUSH EAX                            ; 0045a51e
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045a51f
    PUSH dword ptr [EAX + 0x16e99b4]    ; 0045a526 | DAT_016e99b4
    MOV EAX,0x61aeab                    ; 0045a52c | = "\tFACET%dTMAP\t%d,%d,%d,%d"
    PUSH EAX                            ; 0045a531 | = "\tFACET%dTMAP\t%d,%d,%d,%d"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045a532
    PUSH EAX                            ; 0045a535
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a536
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x1c                        ; 0045a53b
    MOV dword ptr [EBP + -0x4],0x0      ; 0045a53e
    JMP 0x0045a54d                      ; 0045a545
        ;   XREF to: 0045a54d (UNCONDITIONAL_JUMP)  ; LAB_0045a54d
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a547
        ;   Label: LAB_0045a547
    INC dword ptr [EBP + -0x4]          ; 0045a54a
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045a54d
        ;   Label: LAB_0045a54d
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a554
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0045a557 | DAT_016e99b4
    JGE 0x0045a5e9                      ; 0045a55d
        ;   XREF to: 0045a5e9 (CONDITIONAL_JUMP)  ; LAB_0045a5e9
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045a563
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a56a
    SHL EAX,0x2                         ; 0045a56d
    ADD EAX,EDX                         ; 0045a570
    PUSH dword ptr [EAX + 0x16e99c8]    ; 0045a572 | DAT_016e99c8
    MOV EAX,0x61aec4                    ; 0045a578 | = ",%d"
    PUSH EAX                            ; 0045a57d | = ",%d"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045a57e
    PUSH EAX                            ; 0045a581
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a582
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0045a587
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045a58a
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a591
    SHL EAX,0x2                         ; 0045a594
    ADD EAX,EDX                         ; 0045a597
    FLD float ptr [EAX + 0x16e9a08]     ; 0045a599 | DAT_016e9a08
    SUB ESP,0x8                         ; 0045a59f
    FSTP double ptr [ESP]               ; 0045a5a2
    MOV EAX,0x61aec8                    ; 0045a5a5 | = ",%f"
    PUSH EAX                            ; 0045a5aa | = ",%f"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045a5ab
    PUSH EAX                            ; 0045a5ae
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a5af
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0045a5b4
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045a5b7
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a5be
    SHL EAX,0x2                         ; 0045a5c1
    ADD EAX,EDX                         ; 0045a5c4
    FLD float ptr [EAX + 0x16e9a48]     ; 0045a5c6 | DAT_016e9a48
    SUB ESP,0x8                         ; 0045a5cc
    FSTP double ptr [ESP]               ; 0045a5cf
    MOV EAX,0x61aecc                    ; 0045a5d2 | = ",%f"
    PUSH EAX                            ; 0045a5d7 | = ",%f"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045a5d8
    PUSH EAX                            ; 0045a5db
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a5dc
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0045a5e1
    JMP 0x0045a547                      ; 0045a5e4
        ;   XREF to: 0045a547 (UNCONDITIONAL_JUMP)  ; LAB_0045a547
    MOV EAX,0x61aed0                    ; 0045a5e9 | = "\n"
        ;   Label: LAB_0045a5e9
    PUSH EAX                            ; 0045a5ee | = "\n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045a5ef
    PUSH EAX                            ; 0045a5f2
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a5f3
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0045a5f8
    MOV ESP,EBP                         ; 0045a5fb
        ;   Label: LAB_0045a5fb
    POP EBP                             ; 0045a5fd
    POP EDI                             ; 0045a5fe
    POP ESI                             ; 0045a5ff
    POP EBX                             ; 0045a600
    RET                                 ; 0045a601

