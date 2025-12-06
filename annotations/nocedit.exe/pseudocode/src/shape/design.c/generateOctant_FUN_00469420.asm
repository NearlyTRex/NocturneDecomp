; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_design.c_generateOctant_FUN_00469420(void)
;
; Local Variables:
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined8       Stack[-0x94]:8  local_94
; undefined1       Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f72c
;
; Referenced Globals:
;   TerminatedCString s_Enter_in_size_in_heading_0061cf2e
;   TerminatedCString s_Enter_in_size_in_pitch_0061cf4a
;   double g_AngleConstant90Degrees1 = 90
;   TerminatedCString s_Enter_in_radius_0061cf6e
;   double g_AngleConstant90Degrees2 = 90
;   double g_AngleConstant90Degrees3 = 90
;   int[14] g_OctantRotationAngles
;   undefined4 DAT_0066ef14
;   int g_VertexCount
;   int g_PolygonCount
;
; Called Functions:
;   crt_stdlib.c_atoi_FUN_005ffef0
;   crt_string.c_strtod_FUN_005ff0f3
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   shape_design.c_addQuadPolygonOctant_FUN_00469220
;   shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140
;   shape_design.c_realignObject_FUN_0045ee70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469420
        ;   Label: shape_design.c_generateOctant_FUN_00469420
    PUSH ESI                            ; 00469421
    PUSH EDI                            ; 00469422
    PUSH EBP                            ; 00469423
    MOV EBP,ESP                         ; 00469424
    SUB ESP,0x84                        ; 00469426
    MOV dword ptr [0x016e990c],0x0      ; 0046942c | int g_PolygonCount
    MOV dword ptr [0x01626408],0x0      ; 00469436 | int g_VertexCount
    MOV ECX,0x61cf2e                    ; 00469440 | = "Enter in size in heading : " | s_Enter_in_size_in_heading_0061cf2e = Enter in size in heading :
    PUSH ECX                            ; 00469445 | = "Enter in size in heading : " | s_Enter_in_size_in_heading_0061cf2e = Enter in size in heading :
    PUSH 0x0                            ; 00469446
    PUSH 0x0                            ; 00469448
    PUSH 0xa                            ; 0046944a
    LEA ECX,[EBP + -0x7c]               ; 0046944c
    PUSH ECX                            ; 0046944f
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00469450 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00469455
    LEA EDI,[EBP + -0x7c]               ; 00469458
    SUB ECX,ECX                         ; 0046945b
    DEC ECX                             ; 0046945d
    XOR EAX,EAX                         ; 0046945e
    SCASB.REPNE ES:EDI                  ; 00469460
    NOT ECX                             ; 00469462
    DEC ECX                             ; 00469464
    TEST ECX,ECX                        ; 00469465
    JNZ 0x0046946e                      ; 00469467 | LAB_0046946e
        ;   XREF to: 0046946e (CONDITIONAL_JUMP)
    JMP 0x00469681                      ; 00469469 | LAB_00469681
        ;   XREF to: 00469681 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x7c]               ; 0046946e
        ;   Label: LAB_0046946e
    PUSH EAX                            ; 00469471
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 00469472 | int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00469477
    MOV dword ptr [EBP + -0x28],EAX     ; 0046947a
    FILD dword ptr [EBP + -0x28]        ; 0046947d
    FDIVR double ptr [0x0061cf66]       ; 00469480 | double g_AngleConstant90Degrees1
    FSTP float ptr [EBP + -0xc]         ; 00469486
    MOV EAX,0x61cf4a                    ; 00469489 | = "Enter in size in pitch : " | s_Enter_in_size_in_pitch_0061cf4a = Enter in size in pitch :
    PUSH EAX                            ; 0046948e | = "Enter in size in pitch : " | s_Enter_in_size_in_pitch_0061cf4a = Enter in size in pitch :
    PUSH 0xb                            ; 0046948f
    PUSH 0x0                            ; 00469491
    PUSH 0xa                            ; 00469493
    LEA EAX,[EBP + -0x7c]               ; 00469495
    PUSH EAX                            ; 00469498
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00469499 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0046949e
    LEA EDI,[EBP + -0x7c]               ; 004694a1
    SUB ECX,ECX                         ; 004694a4
    DEC ECX                             ; 004694a6
    XOR EAX,EAX                         ; 004694a7
    SCASB.REPNE ES:EDI                  ; 004694a9
    NOT ECX                             ; 004694ab
    DEC ECX                             ; 004694ad
    TEST ECX,ECX                        ; 004694ae
    JNZ 0x004694b7                      ; 004694b0 | LAB_004694b7
        ;   XREF to: 004694b7 (CONDITIONAL_JUMP)
    JMP 0x00469681                      ; 004694b2 | LAB_00469681
        ;   XREF to: 00469681 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x7c]               ; 004694b7
        ;   Label: LAB_004694b7
    PUSH EAX                            ; 004694ba
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 004694bb | int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004694c0
    MOV dword ptr [EBP + -0x24],EAX     ; 004694c3
    FILD dword ptr [EBP + -0x24]        ; 004694c6
    FDIVR double ptr [0x0061cf86]       ; 004694c9 | double g_AngleConstant90Degrees2
    FSTP float ptr [EBP + -0x8]         ; 004694cf
    MOV EAX,0x61cf6e                    ; 004694d2 | = "Enter in radius : " | s_Enter_in_radius_0061cf6e = Enter in radius :
    PUSH EAX                            ; 004694d7 | = "Enter in radius : " | s_Enter_in_radius_0061cf6e = Enter in radius :
    PUSH 0x16                           ; 004694d8
    PUSH 0x0                            ; 004694da
    PUSH 0xa                            ; 004694dc
    LEA EAX,[EBP + -0x7c]               ; 004694de
    PUSH EAX                            ; 004694e1
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 004694e2 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004694e7
    LEA EDI,[EBP + -0x7c]               ; 004694ea
    SUB ECX,ECX                         ; 004694ed
    DEC ECX                             ; 004694ef
    XOR EAX,EAX                         ; 004694f0
    SCASB.REPNE ES:EDI                  ; 004694f2
    NOT ECX                             ; 004694f4
    DEC ECX                             ; 004694f6
    TEST ECX,ECX                        ; 004694f7
    JNZ 0x00469500                      ; 004694f9 | LAB_00469500
        ;   XREF to: 00469500 (CONDITIONAL_JUMP)
    JMP 0x00469681                      ; 004694fb | LAB_00469681
        ;   XREF to: 00469681 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x7c]               ; 00469500
        ;   Label: LAB_00469500
    PUSH EAX                            ; 00469503
    CALL crt_string.c_strtod_FUN_005ff0f3 ; 00469504 | double crt_string.c_strtod_FUN_005ff0f3(char * str)
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + 0xffffff7c],EAX ; 00469509
    MOV dword ptr [EBP + -0x80],EDX     ; 0046950f
    FLD double ptr [EBP + 0xffffff7c]   ; 00469512
    ADD ESP,0x4                         ; 00469518
    FSTP float ptr [EBP + -0x10]        ; 0046951b
    MOV dword ptr [EBP + -0x4],0x0      ; 0046951e
    JMP 0x0046952d                      ; 00469525 | LAB_0046952d
        ;   XREF to: 0046952d (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x4]      ; 00469527
        ;   Label: LAB_00469527
    INC dword ptr [EBP + -0x4]          ; 0046952a
    CMP dword ptr [EBP + -0x4],0x8      ; 0046952d
        ;   Label: LAB_0046952d
    JGE 0x00469681                      ; 00469531 | LAB_00469681
        ;   XREF to: 00469681 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x1c],0x0     ; 00469537
    JMP 0x00469546                      ; 0046953e | LAB_00469546
        ;   XREF to: 00469546 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00469540
        ;   Label: LAB_00469540
    INC dword ptr [EBP + -0x1c]         ; 00469543
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00469546
        ;   Label: LAB_00469546
    CMP EAX,dword ptr [EBP + -0x24]     ; 00469549
    JG 0x00469654                       ; 0046954c | LAB_00469654
        ;   XREF to: 00469654 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x20],0x0     ; 00469552
    JMP 0x00469561                      ; 00469559 | LAB_00469561
        ;   XREF to: 00469561 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x20]     ; 0046955b
        ;   Label: LAB_0046955b
    INC dword ptr [EBP + -0x20]         ; 0046955e
    MOV EAX,dword ptr [EBP + -0x20]     ; 00469561
        ;   Label: LAB_00469561
    CMP EAX,dword ptr [EBP + -0x28]     ; 00469564
    JGE 0x0046964f                      ; 00469567 | LAB_0046964f
        ;   XREF to: 0046964f (CONDITIONAL_JUMP)
    MOV EAX,[0x01626408]                ; 0046956d | int g_VertexCount
    MOV dword ptr [EBP + -0x2c],EAX     ; 00469572
    FILD dword ptr [EBP + -0x20]        ; 00469575
    FMUL float ptr [EBP + -0xc]         ; 00469578
    FSTP float ptr [EBP + -0x18]        ; 0046957b
    FILD dword ptr [EBP + -0x1c]        ; 0046957e
    FMUL float ptr [EBP + -0x8]         ; 00469581
    FSTP float ptr [EBP + -0x14]        ; 00469584
    FLD float ptr [EBP + -0x14]         ; 00469587
    FSUBR double ptr [0x0061cf8e]       ; 0046958a | double g_AngleConstant90Degrees3
    FSTP float ptr [EBP + -0x14]        ; 00469590
    FLD float ptr [EBP + -0x10]         ; 00469593
    SUB ESP,0x4                         ; 00469596
    FSTP float ptr [ESP]                ; 00469599
    FLD float ptr [EBP + -0x14]         ; 0046959c
    SUB ESP,0x4                         ; 0046959f
    FSTP float ptr [ESP]                ; 004695a2
    FLD float ptr [EBP + -0x18]         ; 004695a5
    SUB ESP,0x4                         ; 004695a8
    FSTP float ptr [ESP]                ; 004695ab
    CALL shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140 ; 004695ae | void shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140(float heading_angle, float pitch_angle, float radius)
        ;   XREF to: 00469140 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004695b3
    FLD float ptr [EBP + -0x10]         ; 004695b6
    SUB ESP,0x4                         ; 004695b9
    FSTP float ptr [ESP]                ; 004695bc
    FLD float ptr [EBP + -0x14]         ; 004695bf
    SUB ESP,0x4                         ; 004695c2
    FSTP float ptr [ESP]                ; 004695c5
    FLD float ptr [EBP + -0x18]         ; 004695c8
    FADD float ptr [EBP + -0xc]         ; 004695cb
    SUB ESP,0x4                         ; 004695ce
    FSTP float ptr [ESP]                ; 004695d1
    CALL shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140 ; 004695d4 | void shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140(float heading_angle, float pitch_angle, float radius)
        ;   XREF to: 00469140 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004695d9
    FLD float ptr [EBP + -0x10]         ; 004695dc
    SUB ESP,0x4                         ; 004695df
    FSTP float ptr [ESP]                ; 004695e2
    FLD float ptr [EBP + -0x14]         ; 004695e5
    FADD float ptr [EBP + -0x8]         ; 004695e8
    SUB ESP,0x4                         ; 004695eb
    FSTP float ptr [ESP]                ; 004695ee
    FLD float ptr [EBP + -0x18]         ; 004695f1
    FADD float ptr [EBP + -0xc]         ; 004695f4
    SUB ESP,0x4                         ; 004695f7
    FSTP float ptr [ESP]                ; 004695fa
    CALL shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140 ; 004695fd | void shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140(float heading_angle, float pitch_angle, float radius)
        ;   XREF to: 00469140 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00469602
    FLD float ptr [EBP + -0x10]         ; 00469605
    SUB ESP,0x4                         ; 00469608
    FSTP float ptr [ESP]                ; 0046960b
    FLD float ptr [EBP + -0x14]         ; 0046960e
    FADD float ptr [EBP + -0x8]         ; 00469611
    SUB ESP,0x4                         ; 00469614
    FSTP float ptr [ESP]                ; 00469617
    FLD float ptr [EBP + -0x18]         ; 0046961a
    SUB ESP,0x4                         ; 0046961d
    FSTP float ptr [ESP]                ; 00469620
    CALL shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140 ; 00469623 | void shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140(float heading_angle, float pitch_angle, float radius)
        ;   XREF to: 00469140 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00469628
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046962b
    PUSH EAX                            ; 0046962e
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046962f
    INC EAX                             ; 00469632
    PUSH EAX                            ; 00469633
    MOV EAX,dword ptr [EBP + -0x2c]     ; 00469634
    ADD EAX,0x2                         ; 00469637
    PUSH EAX                            ; 0046963a
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046963b
    ADD EAX,0x3                         ; 0046963e
    PUSH EAX                            ; 00469641
    CALL shape_design.c_addQuadPolygonOctant_FUN_00469220 ; 00469642 | void shape_design.c_addQuadPolygonOctant_FUN_00469220(uint vertex_index_1, uint vertex_index_2, uint vertex_index_3, uint vertex_index_4)
        ;   XREF to: 00469220 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00469647
    JMP 0x0046955b                      ; 0046964a | LAB_0046955b
        ;   XREF to: 0046955b (UNCONDITIONAL_JUMP)
    JMP 0x00469540                      ; 0046964f | LAB_00469540
        ;   Label: LAB_0046964f
        ;   XREF to: 00469540 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x4],0x7      ; 00469654
        ;   Label: LAB_00469654
    JZ 0x0046967c                       ; 00469658 | LAB_0046967c
        ;   XREF to: 0046967c (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046965a
    SHL EAX,0x2                         ; 0046965d
    PUSH dword ptr [EAX + 0x66ef14]     ; 00469660 | DAT_0066ef14
    PUSH 0x0                            ; 00469666
    MOV EAX,dword ptr [EBP + -0x4]      ; 00469668
    SHL EAX,0x2                         ; 0046966b
    PUSH dword ptr [EAX + 0x66eef8]     ; 0046966e | int[14] g_OctantRotationAngles
    CALL shape_design.c_realignObject_FUN_0045ee70 ; 00469674 | void shape_design.c_realignObject_FUN_0045ee70(int rotation_x, int rotation_y, int rotation_z)
        ;   XREF to: 0045ee70 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00469679
    JMP 0x00469527                      ; 0046967c | LAB_00469527
        ;   Label: LAB_0046967c
        ;   XREF to: 00469527 (UNCONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 00469681
        ;   Label: LAB_00469681
    POP EBP                             ; 00469683
    POP EDI                             ; 00469684
    POP ESI                             ; 00469685
    POP EBX                             ; 00469686
    RET                                 ; 00469687

