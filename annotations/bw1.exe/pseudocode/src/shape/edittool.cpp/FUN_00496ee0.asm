; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00496ee0(void)
;
; Local Variables:
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
; XREF[8]:
;   core_menu.cpp_adjustMouseSensitivity_FUN_0050a5e0 at 0050a67f
;   shape_edittool.cpp_FUN_004944fe at 00494574
;   shape_edittool.cpp_FUN_00494690 at 00494cb5
;   shape_edittool.cpp_FUN_004958d0 at 004959ba
;   shape_edittool.cpp_FUN_004962b0 at 0049635b
;   shape_edittool.cpp_FUN_0049b830 at 0049b841
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40 at 00493f22
;   shape_edittool.cpp_showTextInputDialog_FUN_00493720 at 004938ec
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dbc68
;   TerminatedCString s_gEdFont_must_be_set_by_t_005dbc7e
;   TerminatedCString s_shape_edittool_cpp_005dc178
;   TerminatedCString s_CEditorTools_paintWindow_005dc18e
;   undefined4 DAT_005dc1cb
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3eb5c
;   undefined4 DAT_01c3f538
;   undefined4 DAT_01c3f53c
;   undefined4 DAT_01c3f544
;   undefined4 DAT_01c3f548
;   undefined4 DAT_01c3f54c
;   undefined4 DAT_01c3f550
;   undefined4 DAT_01c3f554
;   undefined4 DAT_01c3f558
;   ... and 7 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_2d.c_drawVLine_FUN_00403040
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_2d.c_fillRectWithBorder_FUN_00403250
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_font.cpp_FUN_004c1dd0
;   engine_font.cpp_FUN_004c3ea0
;   engine_font.cpp_FUN_004c3f50
;   engine_font.cpp_FUN_004c4510
;   engine_matrix.c_popViewport_FUN_00509210
;   engine_matrix.c_pushViewport_FUN_005090b0
;   engine_mini3d.cpp_FUN_00512320
;   engine_mini3d.cpp_FUN_00517d50
;   engine_mini3d.cpp_FUN_00518010
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496ee0
        ;   Label: shape_edittool.cpp_FUN_00496ee0
    PUSH ESI                            ; 00496ee1
    PUSH EDI                            ; 00496ee2
    PUSH EBP                            ; 00496ee3
    SUB ESP,0x34                        ; 00496ee4
    CMP dword ptr [0x01c3eb50],0x0      ; 00496ee7 | DAT_01c3eb50
    JZ 0x004973ba                       ; 00496eee
        ;   XREF to: 004973ba (CONDITIONAL_JUMP)  ; LAB_004973ba
    MOV EAX,[0x01c3eb50]                ; 00496ef4 | DAT_01c3eb50
        ;   Label: LAB_00496ef4
    PUSH 0x6a                           ; 00496ef9
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 00496efb
    PUSH EAX                            ; 00496f01
    MOV dword ptr [0x01c3f538],EDX      ; 00496f02 | DAT_01c3f538
    CALL engine_font.cpp_FUN_004c4510   ; 00496f08
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c4510(CBitFont * this_ptr, int char_code)
    MOV ESI,dword ptr [0x01c3eb5c]      ; 00496f0d | DAT_01c3eb5c
    ADD ESP,0x8                         ; 00496f13
    MOV [0x01c3f53c],EAX                ; 00496f16 | DAT_01c3f53c
    CMP ESI,0x1                         ; 00496f1b
    JGE 0x00496f43                      ; 00496f1e
        ;   XREF to: 00496f43 (CONDITIONAL_JUMP)  ; LAB_00496f43
    MOV EDI,0x5dc178                    ; 00496f20 | = "..\\shape\\edittool.cpp"
    MOV EBP,0x949                       ; 00496f25
    PUSH 0x5dc18e                       ; 00496f2a | = "CEditorTools::paintWindow() called bu..."
    MOV dword ptr [0x01d1d400],EDI      ; 00496f2f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00496f35 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00496f3b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00496f40
    MOV EBX,dword ptr [0x01c3eb5c]      ; 00496f43 | DAT_01c3eb5c
        ;   Label: LAB_00496f43
    DEC EBX                             ; 00496f49
    MOV EAX,[0x01c4f020]                ; 00496f4a | DAT_01c4f020
    SHL EBX,0x3                         ; 00496f4f
    MOV dword ptr [ESP + 0x1c],EAX      ; 00496f52
    MOV EAX,EBX                         ; 00496f56
    SHL EBX,0x6                         ; 00496f58
    SUB EBX,EAX                         ; 00496f5b
    CALL shape_edittool.cpp_FUN_004941e0 ; 00496f5d
        ;   XREF to: 004941e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_004941e0()
    MOV EAX,[0x01c3f544]                ; 00496f62 | DAT_01c3f544
    ADD EBX,0x1c3eb60                   ; 00496f67
    TEST EAX,EAX                        ; 00496f6d
    JZ 0x00497400                       ; 00496f6f
        ;   XREF to: 00497400 (CONDITIONAL_JUMP)  ; LAB_00497400
    LEA EAX,[ESP + 0xc]                 ; 00496f75
    PUSH EAX                            ; 00496f79
    LEA EAX,[ESP + 0xc]                 ; 00496f7a
    PUSH EAX                            ; 00496f7e
    LEA EAX,[ESP + 0xc]                 ; 00496f7f
    PUSH EAX                            ; 00496f83
    LEA EAX,[ESP + 0xc]                 ; 00496f84
    PUSH EAX                            ; 00496f88
    CALL unkafter_minecar.cpp_FUN_00511980 ; 00496f89
        ;   XREF to: 00511980 (UNCONDITIONAL_CALL)  ; undefined unkafter_minecar.cpp_FUN_00511980()
    MOV EAX,dword ptr [EBX + 0xc]       ; 00496f8e
    ADD ESP,0x10                        ; 00496f91
    INC EAX                             ; 00496f94
    MOV dword ptr [ESP + 0x30],EAX      ; 00496f95
    FILD dword ptr [ESP + 0x30]         ; 00496f99
    SUB ESP,0x4                         ; 00496f9d
    FSTP float ptr [ESP]                ; 00496fa0
    MOV EAX,dword ptr [EBX + 0x8]       ; 00496fa3
    INC EAX                             ; 00496fa6
    MOV dword ptr [ESP + 0x34],EAX      ; 00496fa7
    FILD dword ptr [ESP + 0x34]         ; 00496fab
    SUB ESP,0x4                         ; 00496faf
    FSTP float ptr [ESP]                ; 00496fb2
    SUB ESP,0x4                         ; 00496fb5
    FILD dword ptr [EBX + 0x4]          ; 00496fb8
    FSTP float ptr [ESP]                ; 00496fbb
    SUB ESP,0x4                         ; 00496fbe
    FILD dword ptr [EBX]                ; 00496fc1
    FSTP float ptr [ESP]                ; 00496fc3
    CALL unkafter_minecar.cpp_FUN_00511850 ; 00496fc6
        ;   XREF to: 00511850 (UNCONDITIONAL_CALL)  ; undefined unkafter_minecar.cpp_FUN_00511850()
    MOV EAX,[0x01c3f54c]                ; 00496fcb | DAT_01c3f54c
    MOV EBP,dword ptr [0x01c3f544]      ; 00496fd0 | DAT_01c3f544
    ADD ESP,0x10                        ; 00496fd6
    TEST EBP,EBP                        ; 00496fd9
    JZ 0x004973e2                       ; 00496fdb
        ;   XREF to: 004973e2 (CONDITIONAL_JUMP)  ; LAB_004973e2
    AND EAX,0xff                        ; 00496fe1
    MOV EDX,EAX                         ; 00496fe6
    SHL EAX,0x2                         ; 00496fe8
    SUB EAX,EDX                         ; 00496feb
    XOR ECX,ECX                         ; 00496fed
    XOR EDX,EDX                         ; 00496fef
    MOV CL,byte ptr [EAX + 0x1c4e9f9]   ; 00496ff1 | DAT_01c4e9f9
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 00496ff7 | DAT_01c4e9f8
    SHL ECX,0x8                         ; 00496ffd
    SHL EDX,0x10                        ; 00497000
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 00497003 | DAT_01c4e9fa
    OR EDX,ECX                          ; 00497009
    AND EAX,0xff                        ; 0049700b
    OR EAX,EDX                          ; 00497010
    PUSH EAX                            ; 00497012
    CALL engine_mini3d.cpp_FUN_00517d50 ; 00497013
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 00497018
    MOV EAX,dword ptr [EBX + 0xc]       ; 0049701b
        ;   Label: LAB_0049701b
    DEC EAX                             ; 0049701e
    PUSH EAX                            ; 0049701f
    MOV EAX,dword ptr [EBX + 0x8]       ; 00497020
    DEC EAX                             ; 00497023
    PUSH EAX                            ; 00497024
    MOV EAX,dword ptr [EBX + 0x4]       ; 00497025
    PUSH EAX                            ; 00497028
    MOV EDX,dword ptr [EBX]             ; 00497029
    PUSH EDX                            ; 0049702b
    CALL engine_mini3d.cpp_FUN_00518290 ; 0049702c
        ;   XREF to: 00518290 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00518290()
    MOV EAX,[0x01c3f548]                ; 00497031 | DAT_01c3f548
    MOV ECX,dword ptr [0x01c3f544]      ; 00497036 | DAT_01c3f544
    ADD ESP,0x10                        ; 0049703c
    TEST ECX,ECX                        ; 0049703f
    JZ 0x004973ec                       ; 00497041
        ;   XREF to: 004973ec (CONDITIONAL_JUMP)  ; LAB_004973ec
    AND EAX,0xff                        ; 00497047
    MOV EDX,EAX                         ; 0049704c
    SHL EAX,0x2                         ; 0049704e
    SUB EAX,EDX                         ; 00497051
    XOR ECX,ECX                         ; 00497053
    XOR EDX,EDX                         ; 00497055
    MOV CL,byte ptr [EAX + 0x1c4e9f8]   ; 00497057 | DAT_01c4e9f8
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 0049705d | DAT_01c4e9f9
    SHL ECX,0x10                        ; 00497063
    SHL EDX,0x8                         ; 00497066
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 00497069 | DAT_01c4e9fa
    OR EDX,ECX                          ; 0049706f
    AND EAX,0xff                        ; 00497071
    OR EAX,EDX                          ; 00497076
    PUSH EAX                            ; 00497078
    CALL engine_mini3d.cpp_FUN_00517d50 ; 00497079
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 0049707e
    MOV EAX,dword ptr [EBX + 0xc]       ; 00497081
        ;   Label: LAB_00497081
    SUB EAX,0x2                         ; 00497084
    PUSH EAX                            ; 00497087
    MOV EAX,dword ptr [EBX + 0x8]       ; 00497088
    SUB EAX,0x2                         ; 0049708b
    PUSH EAX                            ; 0049708e
    MOV EAX,dword ptr [EBX + 0x4]       ; 0049708f
    INC EAX                             ; 00497092
    PUSH EAX                            ; 00497093
    MOV EAX,dword ptr [EBX]             ; 00497094
    INC EAX                             ; 00497096
    PUSH EAX                            ; 00497097
    CALL engine_mini3d.cpp_FUN_00518010 ; 00497098
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00518010()
    MOV EAX,[0x01c3f550]                ; 0049709d | DAT_01c3f550
    MOV ESI,dword ptr [0x01c3f544]      ; 004970a2 | DAT_01c3f544
    ADD ESP,0x10                        ; 004970a8
    TEST ESI,ESI                        ; 004970ab
    JZ 0x004973f6                       ; 004970ad
        ;   XREF to: 004973f6 (CONDITIONAL_JUMP)  ; LAB_004973f6
    AND EAX,0xff                        ; 004970b3
    MOV EDX,EAX                         ; 004970b8
    SHL EAX,0x2                         ; 004970ba
    SUB EAX,EDX                         ; 004970bd
    XOR EDX,EDX                         ; 004970bf
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 004970c1 | DAT_01c4e9f9
    MOV ECX,EDX                         ; 004970c7
    XOR EDX,EDX                         ; 004970c9
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 004970cb | DAT_01c4e9f8
    SHL ECX,0x8                         ; 004970d1
    SHL EDX,0x10                        ; 004970d4
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 004970d7 | DAT_01c4e9fa
    OR EDX,ECX                          ; 004970dd
    AND EAX,0xff                        ; 004970df
    OR EAX,EDX                          ; 004970e4
    PUSH EAX                            ; 004970e6
    CALL engine_mini3d.cpp_FUN_00517d50 ; 004970e7
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 004970ec
    MOV EAX,dword ptr [EBX + 0x8]       ; 004970ef
        ;   Label: LAB_004970ef
    DEC EAX                             ; 004970f2
    PUSH EAX                            ; 004970f3
    MOV EAX,dword ptr [EBX + 0xc]       ; 004970f4
    DEC EAX                             ; 004970f7
    PUSH EAX                            ; 004970f8
    MOV EDI,dword ptr [EBX]             ; 004970f9
    PUSH EDI                            ; 004970fb
    CALL engine_mini3d.cpp_FUN_005182e0 ; 004970fc
        ;   XREF to: 005182e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005182e0()
    MOV EAX,dword ptr [EBX + 0xc]       ; 00497101
    ADD ESP,0xc                         ; 00497104
    DEC EAX                             ; 00497107
    PUSH EAX                            ; 00497108
    MOV EBP,dword ptr [EBX + 0x4]       ; 00497109
    MOV EAX,dword ptr [EBX + 0x8]       ; 0049710c
    PUSH EBP                            ; 0049710f
    DEC EAX                             ; 00497110
    PUSH EAX                            ; 00497111
    CALL engine_mini3d.cpp_FUN_00518300 ; 00497112
        ;   XREF to: 00518300 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00518300()
    ADD ESP,0xc                         ; 00497117
    PUSH dword ptr [ESP + 0xc]          ; 0049711a
    PUSH dword ptr [ESP + 0xc]          ; 0049711e
    PUSH dword ptr [ESP + 0xc]          ; 00497122
    PUSH dword ptr [ESP + 0xc]          ; 00497126
    CALL unkafter_minecar.cpp_FUN_00511850 ; 0049712a
        ;   XREF to: 00511850 (UNCONDITIONAL_CALL)  ; undefined unkafter_minecar.cpp_FUN_00511850()
    ADD ESP,0x10                        ; 0049712f
    CMP byte ptr [EBX + 0x48],0x0       ; 00497132
        ;   Label: LAB_00497132
    JZ 0x004973a9                       ; 00497136
        ;   XREF to: 004973a9 (CONDITIONAL_JUMP)  ; LAB_004973a9
    MOV EAX,[0x01c4f00c]                ; 0049713c | DAT_01c4f00c
    MOV dword ptr [ESP + 0x14],EAX      ; 00497141
    MOV EAX,dword ptr [EBX + 0x4]       ; 00497145
    MOV [0x01c4f00c],EAX                ; 00497148 | DAT_01c4f00c
    MOV EAX,[0x01c3f53c]                ; 0049714d | DAT_01c3f53c
    MOV EDX,EAX                         ; 00497152
    SAR EDX,0x1f                        ; 00497154
    SUB EAX,EDX                         ; 00497157
    SAR EAX,0x1                         ; 00497159
    ADD EAX,dword ptr [EBX + 0x4]       ; 0049715b
    MOV EDX,dword ptr [0x01c3f53c]      ; 0049715e | DAT_01c3f53c
    LEA ECX,[EAX + -0x1]                ; 00497164
    LEA EAX,[EDX*0x4 + 0x0]             ; 00497167
    ADD EDX,EAX                         ; 0049716e
    MOV EAX,EDX                         ; 00497170
    SAR EDX,0x1f                        ; 00497172
    SHL EDX,0x2                         ; 00497175
    SBB EAX,EDX                         ; 00497178
    SAR EAX,0x2                         ; 0049717a
    MOV ESI,dword ptr [EBX + 0x8]       ; 0049717d
    SUB ESI,0x2                         ; 00497180
    MOV EBP,ESI                         ; 00497183
    MOV dword ptr [ESP + 0x10],ECX      ; 00497185
    ADD EAX,ECX                         ; 00497189
    MOV EDX,dword ptr [EBX]             ; 0049718b
    LEA EDI,[EAX + -0x1]                ; 0049718d
    INC EDX                             ; 00497190
    MOV EAX,[0x01c3f558]                ; 00497191 | DAT_01c3f558
    MOV dword ptr [ESP + 0x18],EDX      ; 00497196
    MOV dword ptr [ESP + 0x20],EDI      ; 0049719a
    CMP dword ptr [0x01c3f544],0x0      ; 0049719e | DAT_01c3f544
    JZ 0x00497616                       ; 004971a5
        ;   XREF to: 00497616 (CONDITIONAL_JUMP)  ; LAB_00497616
    CMP dword ptr [0x01c3f544],0x0      ; 004971ab | DAT_01c3f544
    JZ 0x0049760c                       ; 004971b2
        ;   XREF to: 0049760c (CONDITIONAL_JUMP)  ; LAB_0049760c
    AND EAX,0xff                        ; 004971b8
    MOV EDX,EAX                         ; 004971bd
    SHL EAX,0x2                         ; 004971bf
    SUB EAX,EDX                         ; 004971c2
    XOR EDX,EDX                         ; 004971c4
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 004971c6 | DAT_01c4e9f9
    MOV ECX,EDX                         ; 004971cc
    XOR EDX,EDX                         ; 004971ce
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 004971d0 | DAT_01c4e9f8
    SHL ECX,0x8                         ; 004971d6
    SHL EDX,0x10                        ; 004971d9
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 004971dc | DAT_01c4e9fa
    OR EDX,ECX                          ; 004971e2
    AND EAX,0xff                        ; 004971e4
    OR EAX,EDX                          ; 004971e9
    PUSH EAX                            ; 004971eb
    CALL engine_mini3d.cpp_FUN_00517d50 ; 004971ec
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 004971f1
    MOV ESI,dword ptr [ESP + 0x20]      ; 004971f4
        ;   Label: LAB_004971f4
    PUSH ESI                            ; 004971f8
    PUSH EBP                            ; 004971f9
    MOV EDI,dword ptr [ESP + 0x18]      ; 004971fa
    PUSH EDI                            ; 004971fe
    MOV EBP,dword ptr [ESP + 0x24]      ; 004971ff
    PUSH EBP                            ; 00497203
    CALL engine_mini3d.cpp_FUN_00518010 ; 00497204
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00518010()
    ADD ESP,0x10                        ; 00497209
    PUSH 0xffff                         ; 0049720c
        ;   Label: LAB_0049720c
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 00497211
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 00497216
    PUSH 0x3f800000                     ; 00497219
    CALL engine_mini3d.cpp_FUN_00512320 ; 0049721e
        ;   XREF to: 00512320 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00512320()
    ADD ESP,0x4                         ; 00497223
    PUSH -0x1                           ; 00497226
    MOV EAX,[0x01c3f554]                ; 00497228 | DAT_01c3f554
    PUSH EAX                            ; 0049722d
    MOV EAX,[0x01c3f53c]                ; 0049722e | DAT_01c3f53c
    MOV EDX,EAX                         ; 00497233
    SAR EDX,0x1f                        ; 00497235
    SUB EAX,EDX                         ; 00497238
    SAR EAX,0x1                         ; 0049723a
    ADD EAX,dword ptr [EBX + 0x4]       ; 0049723c
    PUSH EAX                            ; 0049723f
    LEA ESI,[EBX + 0x48]                ; 00497240
    MOV EBP,dword ptr [0x01c3eb50]      ; 00497243 | DAT_01c3eb50
    PUSH ESI                            ; 00497249
    MOV EDI,dword ptr [EBX]             ; 0049724a
    MOV ECX,dword ptr [EBX + 0x8]       ; 0049724c
    PUSH EBP                            ; 0049724f
    ADD EDI,ECX                         ; 00497250
    CALL engine_font.cpp_FUN_004c3ea0   ; 00497252
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    MOV EDX,EDI                         ; 00497257
    SUB EDX,EAX                         ; 00497259
    MOV EAX,EDX                         ; 0049725b
    SAR EDX,0x1f                        ; 0049725d
    SUB EAX,EDX                         ; 00497260
    SAR EAX,0x1                         ; 00497262
    ADD ESP,0x8                         ; 00497264
    PUSH EAX                            ; 00497267
    PUSH ESI                            ; 00497268
    MOV EAX,[0x01c3eb50]                ; 00497269 | DAT_01c3eb50
    PUSH EAX                            ; 0049726e
    CALL engine_font.cpp_FUN_004c1dd0   ; 0049726f
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 00497274
    PUSH ESI                            ; 00497277
    MOV EDX,dword ptr [0x01c3eb50]      ; 00497278 | DAT_01c3eb50
    PUSH EDX                            ; 0049727e
    CALL engine_font.cpp_FUN_004c3f50   ; 0049727f
        ;   XREF to: 004c3f50 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c3f50(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 00497284
    PUSH 0x5dc1cb                       ; 00497287 | DAT_005dc1cb
    MOV ECX,dword ptr [0x01c3eb50]      ; 0049728c | DAT_01c3eb50
    MOV ESI,dword ptr [0x01c3f53c]      ; 00497292 | DAT_01c3f53c
    PUSH ECX                            ; 00497298
    ADD ESI,EAX                         ; 00497299
    CALL engine_font.cpp_FUN_004c3f50   ; 0049729b
        ;   XREF to: 004c3f50 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c3f50(CBitFont * this_ptr, char * text_string)
    ADD EAX,dword ptr [0x01c3f53c]      ; 004972a0 | DAT_01c3f53c
    ADD ESP,0x8                         ; 004972a6
    CMP ESI,EAX                         ; 004972a9
    JGE 0x004972af                      ; 004972ab
        ;   XREF to: 004972af (CONDITIONAL_JUMP)  ; LAB_004972af
    MOV ESI,EAX                         ; 004972ad
    MOV EAX,[0x01c3f54c]                ; 004972af | DAT_01c3f54c
        ;   Label: LAB_004972af
    MOV EBP,dword ptr [EBX + 0x4]       ; 004972b4
    MOV EDX,dword ptr [0x01c3f544]      ; 004972b7 | DAT_01c3f544
    ADD ESI,EBP                         ; 004972bd
    TEST EDX,EDX                        ; 004972bf
    JZ 0x00497628                       ; 004972c1
        ;   XREF to: 00497628 (CONDITIONAL_JUMP)  ; LAB_00497628
    AND EAX,0xff                        ; 004972c7
    MOV EDX,EAX                         ; 004972cc
    SHL EAX,0x2                         ; 004972ce
    SUB EAX,EDX                         ; 004972d1
    XOR ECX,ECX                         ; 004972d3
    XOR EDX,EDX                         ; 004972d5
    MOV CL,byte ptr [EAX + 0x1c4e9f8]   ; 004972d7 | DAT_01c4e9f8
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 004972dd | DAT_01c4e9f9
    SHL ECX,0x10                        ; 004972e3
    SHL EDX,0x8                         ; 004972e6
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 004972e9 | DAT_01c4e9fa
    OR EDX,ECX                          ; 004972ef
    AND EAX,0xff                        ; 004972f1
    OR EAX,EDX                          ; 004972f6
    PUSH EAX                            ; 004972f8
    CALL engine_mini3d.cpp_FUN_00517d50 ; 004972f9
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 004972fe
    MOV ECX,dword ptr [0x01c3f544]      ; 00497301 | DAT_01c3f544
        ;   Label: LAB_00497301
    MOV EDX,dword ptr [EBX]             ; 00497307
    MOV EAX,dword ptr [EBX + 0x8]       ; 00497309
    INC EDX                             ; 0049730c
    SUB EAX,0x2                         ; 0049730d
    TEST ECX,ECX                        ; 00497310
    JZ 0x00497632                       ; 00497312
        ;   XREF to: 00497632 (CONDITIONAL_JUMP)  ; LAB_00497632
    PUSH EAX                            ; 00497318
    PUSH ESI                            ; 00497319
    PUSH EDX                            ; 0049731a
    CALL engine_mini3d.cpp_FUN_005182e0 ; 0049731b
        ;   XREF to: 005182e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005182e0()
    ADD ESP,0xc                         ; 00497320
        ;   Label: LAB_00497320
    MOV EDI,dword ptr [0x01c3f550]      ; 00497323 | DAT_01c3f550
    CMP EDI,dword ptr [0x01c3f54c]      ; 00497329 | DAT_01c3f54c
    JZ 0x004973a0                       ; 0049732f
        ;   XREF to: 004973a0 (CONDITIONAL_JUMP)  ; LAB_004973a0
    MOV EBP,dword ptr [0x01c3f544]      ; 00497331 | DAT_01c3f544
    MOV EAX,EDI                         ; 00497337
    TEST EBP,EBP                        ; 00497339
    JZ 0x0049763f                       ; 0049733b
        ;   XREF to: 0049763f (CONDITIONAL_JUMP)  ; LAB_0049763f
    AND EAX,0xff                        ; 00497341
    MOV EDX,EAX                         ; 00497346
    SHL EAX,0x2                         ; 00497348
    SUB EAX,EDX                         ; 0049734b
    XOR EDX,EDX                         ; 0049734d
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 0049734f | DAT_01c4e9f9
    MOV ECX,EDX                         ; 00497355
    XOR EDX,EDX                         ; 00497357
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 00497359 | DAT_01c4e9f8
    SHL ECX,0x8                         ; 0049735f
    SHL EDX,0x10                        ; 00497362
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 00497365 | DAT_01c4e9fa
    OR EDX,ECX                          ; 0049736b
    AND EAX,0xff                        ; 0049736d
    OR EAX,EDX                          ; 00497372
    PUSH EAX                            ; 00497374
    CALL engine_mini3d.cpp_FUN_00517d50 ; 00497375
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 0049737a
    MOV ECX,dword ptr [0x01c3f544]      ; 0049737d | DAT_01c3f544
        ;   Label: LAB_0049737d
    DEC ESI                             ; 00497383
    MOV EAX,dword ptr [EBX]             ; 00497384
    MOV EDX,dword ptr [EBX + 0x8]       ; 00497386
    INC EAX                             ; 00497389
    SUB EDX,0x2                         ; 0049738a
    TEST ECX,ECX                        ; 0049738d
    JZ 0x0049764a                       ; 0049738f
        ;   XREF to: 0049764a (CONDITIONAL_JUMP)  ; LAB_0049764a
    PUSH EDX                            ; 00497395
    PUSH ESI                            ; 00497396
    PUSH EAX                            ; 00497397
    CALL engine_mini3d.cpp_FUN_005182e0 ; 00497398
        ;   XREF to: 005182e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005182e0()
    ADD ESP,0xc                         ; 0049739d
        ;   Label: LAB_0049739d
    MOV EAX,dword ptr [ESP + 0x14]      ; 004973a0
        ;   Label: LAB_004973a0
    MOV [0x01c4f00c],EAX                ; 004973a4 | DAT_01c4f00c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004973a9
        ;   Label: LAB_004973a9
    MOV [0x01c4f020],EAX                ; 004973ad | DAT_01c4f020
    ADD ESP,0x34                        ; 004973b2
    POP EBP                             ; 004973b5
    POP EDI                             ; 004973b6
    POP ESI                             ; 004973b7
    POP EBX                             ; 004973b8
    RET                                 ; 004973b9
    MOV ECX,0x5dbc68                    ; 004973ba | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004973ba
    MOV EBX,0xa4                        ; 004973bf
    PUSH 0x5dbc7e                       ; 004973c4 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d1d400],ECX      ; 004973c9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 004973cf | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004973d5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004973da
    JMP 0x00496ef4                      ; 004973dd
        ;   XREF to: 00496ef4 (UNCONDITIONAL_JUMP)  ; LAB_00496ef4
    MOV [0x01c4f020],EAX                ; 004973e2 | DAT_01c4f020
        ;   Label: LAB_004973e2
    JMP 0x0049701b                      ; 004973e7
        ;   XREF to: 0049701b (UNCONDITIONAL_JUMP)  ; LAB_0049701b
    MOV [0x01c4f020],EAX                ; 004973ec | DAT_01c4f020
        ;   Label: LAB_004973ec
    JMP 0x00497081                      ; 004973f1
        ;   XREF to: 00497081 (UNCONDITIONAL_JUMP)  ; LAB_00497081
    MOV [0x01c4f020],EAX                ; 004973f6 | DAT_01c4f020
        ;   Label: LAB_004973f6
    JMP 0x004970ef                      ; 004973fb
        ;   XREF to: 004970ef (UNCONDITIONAL_JUMP)  ; LAB_004970ef
    MOV EAX,dword ptr [EBX + 0xc]       ; 00497400
        ;   Label: LAB_00497400
    MOV EDX,dword ptr [EBX + 0x4]       ; 00497403
    SUB EAX,EDX                         ; 00497406
    INC EAX                             ; 00497408
    MOV ECX,dword ptr [EBX]             ; 00497409
    PUSH EAX                            ; 0049740b
    MOV EAX,dword ptr [EBX + 0x8]       ; 0049740c
    SUB EAX,ECX                         ; 0049740f
    INC EAX                             ; 00497411
    PUSH EAX                            ; 00497412
    PUSH EDX                            ; 00497413
    PUSH ECX                            ; 00497414
    CALL engine_matrix.c_pushViewport_FUN_005090b0 ; 00497415
        ;   XREF to: 005090b0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pushViewport_FUN_005090b0(int x, int y, int width, int height)
    MOV ESI,dword ptr [0x01c3f548]      ; 0049741a | DAT_01c3f548
    ADD ESP,0x10                        ; 00497420
    MOV EAX,dword ptr [EBX + 0xc]       ; 00497423
    MOV EDX,dword ptr [EBX + 0x8]       ; 00497426
    MOV EBP,dword ptr [EBX + 0x4]       ; 00497429
    MOV ECX,dword ptr [EBX]             ; 0049742c
    SUB EAX,0x2                         ; 0049742e
    SUB EDX,0x2                         ; 00497431
    INC EBP                             ; 00497434
    INC ECX                             ; 00497435
    MOV dword ptr [ESP + 0x28],ECX      ; 00497436
    MOV dword ptr [ESP + 0x24],EBP      ; 0049743a
    MOV dword ptr [ESP + 0x2c],EDX      ; 0049743e
    MOV EDI,EAX                         ; 00497442
    MOV EAX,[0x01c3f54c]                ; 00497444 | DAT_01c3f54c
    CMP dword ptr [0x01c3f544],0x0      ; 00497449 | DAT_01c3f544
    JZ 0x004975d1                       ; 00497450
        ;   XREF to: 004975d1 (CONDITIONAL_JUMP)  ; LAB_004975d1
    CMP dword ptr [0x01c3f544],0x0      ; 00497456 | DAT_01c3f544
    JZ 0x004975bc                       ; 0049745d
        ;   XREF to: 004975bc (CONDITIONAL_JUMP)  ; LAB_004975bc
    AND EAX,0xff                        ; 00497463
    MOV EDX,EAX                         ; 00497468
    SHL EAX,0x2                         ; 0049746a
    SUB EAX,EDX                         ; 0049746d
    XOR EDX,EDX                         ; 0049746f
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 00497471 | DAT_01c4e9f9
    MOV ECX,EDX                         ; 00497477
    XOR EDX,EDX                         ; 00497479
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 0049747b | DAT_01c4e9f8
    SHL ECX,0x8                         ; 00497481
    SHL EDX,0x10                        ; 00497484
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 00497487 | DAT_01c4e9fa
    OR EDX,ECX                          ; 0049748d
    AND EAX,0xff                        ; 0049748f
    OR EAX,EDX                          ; 00497494
    PUSH EAX                            ; 00497496
    CALL engine_mini3d.cpp_FUN_00517d50 ; 00497497
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 0049749c
    LEA EAX,[EDI + 0x1]                 ; 0049749f
        ;   Label: LAB_0049749f
    PUSH EAX                            ; 004974a2
    MOV EAX,dword ptr [ESP + 0x30]      ; 004974a3
    INC EAX                             ; 004974a7
    PUSH EAX                            ; 004974a8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004974a9
    DEC EAX                             ; 004974ad
    PUSH EAX                            ; 004974ae
    MOV EAX,dword ptr [ESP + 0x34]      ; 004974af
    DEC EAX                             ; 004974b3
    PUSH EAX                            ; 004974b4
    CALL engine_mini3d.cpp_FUN_00518290 ; 004974b5
        ;   XREF to: 00518290 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00518290()
    MOV ECX,dword ptr [0x01c3f544]      ; 004974ba | DAT_01c3f544
    ADD ESP,0x10                        ; 004974c0
    TEST ECX,ECX                        ; 004974c3
    JZ 0x004975c6                       ; 004974c5
        ;   XREF to: 004975c6 (CONDITIONAL_JUMP)  ; LAB_004975c6
    MOV EDX,ESI                         ; 004974cb
    AND EDX,0xff                        ; 004974cd
    LEA EAX,[EDX*0x4 + 0x0]             ; 004974d3
    SUB EAX,EDX                         ; 004974da
    XOR EDX,EDX                         ; 004974dc
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 004974de | DAT_01c4e9f9
    MOV ECX,EDX                         ; 004974e4
    XOR EDX,EDX                         ; 004974e6
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 004974e8 | DAT_01c4e9f8
    SHL ECX,0x8                         ; 004974ee
    SHL EDX,0x10                        ; 004974f1
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 004974f4 | DAT_01c4e9fa
    OR EDX,ECX                          ; 004974fa
    AND EAX,0xff                        ; 004974fc
    OR EAX,EDX                          ; 00497501
    PUSH EAX                            ; 00497503
    CALL engine_mini3d.cpp_FUN_00517d50 ; 00497504
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 00497509
    PUSH EDI                            ; 0049750c
        ;   Label: LAB_0049750c
    MOV ESI,dword ptr [ESP + 0x30]      ; 0049750d
    PUSH ESI                            ; 00497511
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00497512
    PUSH EDI                            ; 00497516
    MOV EBP,dword ptr [ESP + 0x34]      ; 00497517
    PUSH EBP                            ; 0049751b
    CALL engine_mini3d.cpp_FUN_00518010 ; 0049751c
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00518010()
    ADD ESP,0x10                        ; 00497521
    MOV EDX,dword ptr [0x01c3f544]      ; 00497524 | DAT_01c3f544
        ;   Label: LAB_00497524
    MOV EAX,[0x01c3f550]                ; 0049752a | DAT_01c3f550
    TEST EDX,EDX                        ; 0049752f
    JZ 0x004975e6                       ; 00497531
        ;   XREF to: 004975e6 (CONDITIONAL_JUMP)  ; LAB_004975e6
    AND EAX,0xff                        ; 00497537
    MOV EDX,EAX                         ; 0049753c
    SHL EAX,0x2                         ; 0049753e
    SUB EAX,EDX                         ; 00497541
    XOR EDX,EDX                         ; 00497543
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 00497545 | DAT_01c4e9f9
    MOV ECX,EDX                         ; 0049754b
    XOR EDX,EDX                         ; 0049754d
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 0049754f | DAT_01c4e9f8
    SHL ECX,0x8                         ; 00497555
    SHL EDX,0x10                        ; 00497558
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 0049755b | DAT_01c4e9fa
    OR EDX,ECX                          ; 00497561
    AND EAX,0xff                        ; 00497563
    OR EAX,EDX                          ; 00497568
    PUSH EAX                            ; 0049756a
    CALL engine_mini3d.cpp_FUN_00517d50 ; 0049756b
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 00497570
    MOV ESI,dword ptr [0x01c3f544]      ; 00497573 | DAT_01c3f544
        ;   Label: LAB_00497573
    MOV EDX,dword ptr [EBX + 0xc]       ; 00497579
    MOV ECX,dword ptr [EBX + 0x8]       ; 0049757c
    MOV EAX,dword ptr [EBX]             ; 0049757f
    DEC EDX                             ; 00497581
    DEC ECX                             ; 00497582
    TEST ESI,ESI                        ; 00497583
    JZ 0x004975ed                       ; 00497585
        ;   XREF to: 004975ed (CONDITIONAL_JUMP)  ; LAB_004975ed
    PUSH ECX                            ; 00497587
    PUSH EDX                            ; 00497588
    PUSH EAX                            ; 00497589
    CALL engine_mini3d.cpp_FUN_005182e0 ; 0049758a
        ;   XREF to: 005182e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005182e0()
    ADD ESP,0xc                         ; 0049758f
        ;   Label: LAB_0049758f
    MOV EDI,dword ptr [0x01c3f544]      ; 00497592 | DAT_01c3f544
    MOV EAX,dword ptr [EBX + 0x8]       ; 00497598
    MOV ECX,dword ptr [EBX + 0xc]       ; 0049759b
    MOV EDX,dword ptr [EBX + 0x4]       ; 0049759e
    DEC EAX                             ; 004975a1
    DEC ECX                             ; 004975a2
    TEST EDI,EDI                        ; 004975a3
    JZ 0x004975f7                       ; 004975a5
        ;   XREF to: 004975f7 (CONDITIONAL_JUMP)  ; LAB_004975f7
    PUSH ECX                            ; 004975a7
    PUSH EDX                            ; 004975a8
    PUSH EAX                            ; 004975a9
    CALL engine_mini3d.cpp_FUN_00518300 ; 004975aa
        ;   XREF to: 00518300 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00518300()
    ADD ESP,0xc                         ; 004975af
    CALL engine_matrix.c_popViewport_FUN_00509210 ; 004975b2
        ;   XREF to: 00509210 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_00509210()
    JMP 0x00497132                      ; 004975b7
        ;   XREF to: 00497132 (UNCONDITIONAL_JUMP)  ; LAB_00497132
    MOV [0x01c4f020],EAX                ; 004975bc | DAT_01c4f020
        ;   Label: LAB_004975bc
    JMP 0x0049749f                      ; 004975c1
        ;   XREF to: 0049749f (UNCONDITIONAL_JUMP)  ; LAB_0049749f
    MOV dword ptr [0x01c4f020],ESI      ; 004975c6 | DAT_01c4f020
        ;   Label: LAB_004975c6
    JMP 0x0049750c                      ; 004975cc
        ;   XREF to: 0049750c (UNCONDITIONAL_JUMP)  ; LAB_0049750c
    PUSH EAX                            ; 004975d1
        ;   Label: LAB_004975d1
    PUSH ESI                            ; 004975d2
    MOV EAX,EDI                         ; 004975d3
    PUSH EAX                            ; 004975d5
    PUSH EDX                            ; 004975d6
    PUSH EBP                            ; 004975d7
    PUSH ECX                            ; 004975d8
    CALL engine_2d.c_fillRectWithBorder_FUN_00403250 ; 004975d9
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403250(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 004975de
    JMP 0x00497524                      ; 004975e1
        ;   XREF to: 00497524 (UNCONDITIONAL_JUMP)  ; LAB_00497524
    MOV [0x01c4f020],EAX                ; 004975e6 | DAT_01c4f020
        ;   Label: LAB_004975e6
    JMP 0x00497573                      ; 004975eb
        ;   XREF to: 00497573 (UNCONDITIONAL_JUMP)  ; LAB_00497573
    PUSH ECX                            ; 004975ed
        ;   Label: LAB_004975ed
    PUSH EDX                            ; 004975ee
    PUSH EAX                            ; 004975ef
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 004975f0
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x0049758f                      ; 004975f5
        ;   XREF to: 0049758f (UNCONDITIONAL_JUMP)  ; LAB_0049758f
    PUSH ECX                            ; 004975f7
        ;   Label: LAB_004975f7
    PUSH EDX                            ; 004975f8
    PUSH EAX                            ; 004975f9
    CALL engine_2d.c_drawVLine_FUN_00403040 ; 004975fa
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403040(int x, int y1, int y2)
    ADD ESP,0xc                         ; 004975ff
    CALL engine_matrix.c_popViewport_FUN_00509210 ; 00497602
        ;   XREF to: 00509210 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_00509210()
    JMP 0x00497132                      ; 00497607
        ;   XREF to: 00497132 (UNCONDITIONAL_JUMP)  ; LAB_00497132
    MOV [0x01c4f020],EAX                ; 0049760c | DAT_01c4f020
        ;   Label: LAB_0049760c
    JMP 0x004971f4                      ; 00497611
        ;   XREF to: 004971f4 (UNCONDITIONAL_JUMP)  ; LAB_004971f4
    PUSH EAX                            ; 00497616
        ;   Label: LAB_00497616
    PUSH EDI                            ; 00497617
    PUSH ESI                            ; 00497618
    PUSH ECX                            ; 00497619
    PUSH EDX                            ; 0049761a
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 0049761b
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 00497620
    JMP 0x0049720c                      ; 00497623
        ;   XREF to: 0049720c (UNCONDITIONAL_JUMP)  ; LAB_0049720c
    MOV [0x01c4f020],EAX                ; 00497628 | DAT_01c4f020
        ;   Label: LAB_00497628
    JMP 0x00497301                      ; 0049762d
        ;   XREF to: 00497301 (UNCONDITIONAL_JUMP)  ; LAB_00497301
    PUSH EAX                            ; 00497632
        ;   Label: LAB_00497632
    PUSH ESI                            ; 00497633
    PUSH EDX                            ; 00497634
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 00497635
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x00497320                      ; 0049763a
        ;   XREF to: 00497320 (UNCONDITIONAL_JUMP)  ; LAB_00497320
    MOV dword ptr [0x01c4f020],EDI      ; 0049763f | DAT_01c4f020
        ;   Label: LAB_0049763f
    JMP 0x0049737d                      ; 00497645
        ;   XREF to: 0049737d (UNCONDITIONAL_JUMP)  ; LAB_0049737d
    PUSH EDX                            ; 0049764a
        ;   Label: LAB_0049764a
    PUSH ESI                            ; 0049764b
    PUSH EAX                            ; 0049764c
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0049764d
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x0049739d                      ; 00497652
        ;   XREF to: 0049739d (UNCONDITIONAL_JUMP)  ; LAB_0049739d

