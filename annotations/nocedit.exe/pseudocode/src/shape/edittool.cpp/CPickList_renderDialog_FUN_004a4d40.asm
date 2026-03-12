; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_renderDialog_FUN_004a4d40(CPickList *this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; Local Variables:
; char[300]        Stack[-0x15c]:300  local_15c
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004daae6
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 at 004a3eb1
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   int g_WindowHeight = 0xc8
;   CBitFont* g_EditorFont
;   CEditorTools g_CEditorToolsInstance
;   int g_EnabledTextColor
;   int g_DisabledTextColor
;   int g_SelectionHighlightColor
;   int g_ConfirmedSelectionColor
;   int g_PickListSeparatorColor
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipBottom
;   int g_ActiveRenderColor
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004011b0
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_font.cpp_CBitFont_drawText_FUN_004cda80
;   shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
;   shape_edittool.cpp_calculateGridHeight_FUN_004a64b0
;   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
;   shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230
;   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
;   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
;   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_edittool.cpp_drawDashedLine_FUN_0049d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a4d40
        ;   Label: shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40
    PUSH ESI                            ; 004a4d41
    PUSH EDI                            ; 004a4d42
    PUSH EBP                            ; 004a4d43
    SUB ESP,0x14c                       ; 004a4d44
    MOV EDX,dword ptr [0x00678a60]      ; 004a4d4a | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004a4d50 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 ; 004a4d51
        ;   XREF to: 004a0f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 004a4d56
    PUSH 0x1                            ; 004a4d59
    MOV ECX,dword ptr [0x00678a60]      ; 004a4d5b | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004a4d61 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230 ; 004a4d62
        ;   XREF to: 004a1230 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230(CEditorTools * editor_tools, int line_position)
    MOV EAX,[0x02d02558]                ; 004a4d67 | g_ClipLeft
    ADD ESP,0x8                         ; 004a4d6c
    MOV dword ptr [ESP + 0x134],EAX     ; 004a4d6f
    MOV EAX,dword ptr [ESP + 0x160]     ; 004a4d76
    MOV EAX,dword ptr [EAX + 0x180]     ; 004a4d7d
    MOV dword ptr [ESP + 0x138],EAX     ; 004a4d83
    MOV EAX,dword ptr [ESP + 0x160]     ; 004a4d8a
    XOR EBX,EBX                         ; 004a4d91
    MOV ESI,dword ptr [EAX + 0x190]     ; 004a4d93
    MOV dword ptr [ESP + 0x12c],EBX     ; 004a4d99
    TEST ESI,ESI                        ; 004a4da0
    JLE 0x004a4ec6                      ; 004a4da2
        ;   XREF to: 004a4ec6 (CONDITIONAL_JUMP)  ; LAB_004a4ec6
    MOV EAX,[0x02d0255c]                ; 004a4da8 | g_ClipTop
        ;   Label: LAB_004a4da8
    MOV dword ptr [ESP + 0x140],EAX     ; 004a4dad
    MOV EAX,dword ptr [ESP + 0x160]     ; 004a4db4
    XOR EDI,EDI                         ; 004a4dbb
    MOV EBP,dword ptr [EAX + 0x188]     ; 004a4dbd
    MOV dword ptr [ESP + 0x130],EDI     ; 004a4dc3
    TEST EBP,EBP                        ; 004a4dca
    JLE 0x004a4de4                      ; 004a4dcc
        ;   XREF to: 004a4de4 (CONDITIONAL_JUMP)  ; LAB_004a4de4
    MOV EDX,dword ptr [ESP + 0x160]     ; 004a4dce
        ;   Label: LAB_004a4dce
    MOV EAX,dword ptr [ESP + 0x138]     ; 004a4dd5
    CMP EAX,dword ptr [EDX]             ; 004a4ddc
    JL 0x004a4ff2                       ; 004a4dde
        ;   XREF to: 004a4ff2 (CONDITIONAL_JUMP)  ; LAB_004a4ff2
    CMP dword ptr [ESP + 0x12c],0x0     ; 004a4de4
        ;   Label: LAB_004a4de4
    JLE 0x004a4e85                      ; 004a4dec
        ;   XREF to: 004a4e85 (CONDITIONAL_JUMP)  ; LAB_004a4e85
    MOV EAX,[0x02cf2ad8]                ; 004a4df2 | g_PickListSeparatorColor
    MOV EBP,dword ptr [0x02d02570]      ; 004a4df7 | g_ActiveRenderColor
    MOV [0x02d02570],EAX                ; 004a4dfd | g_ActiveRenderColor
    CALL shape_edittool.cpp_calculateGridHeight_FUN_004a64b0 ; 004a4e02
        ;   XREF to: 004a64b0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridHeight_FUN_004a64b0()
    MOV EDI,EAX                         ; 004a4e07
    MOV EAX,[0x00679398]                ; 004a4e09 | g_WindowHeight
    MOV EDX,EAX                         ; 004a4e0e
    MOV ECX,0x60                        ; 004a4e10
    SAR EDX,0x1f                        ; 004a4e15
    IDIV ECX                            ; 004a4e18
    MOV EDX,EAX                         ; 004a4e1a
    MOV EAX,dword ptr [ESP + 0x160]     ; 004a4e1c
    CMP dword ptr [EAX + 0x1d8],0x2     ; 004a4e23
    JNZ 0x004a51b0                      ; 004a4e2a
        ;   XREF to: 004a51b0 (CONDITIONAL_JUMP)  ; LAB_004a51b0
    MOV EAX,0x3                         ; 004a4e30
    MOV ESI,EDX                         ; 004a4e35
        ;   Label: LAB_004a4e35
    IMUL ESI,EAX                        ; 004a4e37
    PUSH 0x0                            ; 004a4e3a
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970 ; 004a4e3c
        ;   XREF to: 004a6970 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonHeight_FUN_004a6970(char * button_text)
    ADD ESP,0x4                         ; 004a4e41
    ADD ESI,EAX                         ; 004a4e44
    MOV EAX,dword ptr [ESP + 0x160]     ; 004a4e46
    CMP dword ptr [EAX + 0x1d8],0x2     ; 004a4e4d
    JNZ 0x004a51ba                      ; 004a4e54
        ;   XREF to: 004a51ba (CONDITIONAL_JUMP)  ; LAB_004a51ba
    MOV EAX,EDI                         ; 004a4e5a
    MOV EDX,dword ptr [0x02d02564]      ; 004a4e5c | g_ClipBottom
        ;   Label: LAB_004a4e5c
    ADD EAX,ESI                         ; 004a4e62
    SUB EDX,EAX                         ; 004a4e64
    PUSH EDX                            ; 004a4e66
    MOV ESI,dword ptr [ESP + 0x138]     ; 004a4e67
    PUSH ESI                            ; 004a4e6e
    MOV EDI,dword ptr [0x02d0255c]      ; 004a4e6f | g_ClipTop
    PUSH EDI                            ; 004a4e75
    PUSH ESI                            ; 004a4e76
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004a4e77
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004a4e7c
    MOV dword ptr [0x02d02570],EBP      ; 004a4e7f | g_ActiveRenderColor
    MOV EAX,dword ptr [ESP + 0x160]     ; 004a4e85
        ;   Label: LAB_004a4e85
    MOV EDI,dword ptr [ESP + 0x134]     ; 004a4e8c
    MOV EBP,dword ptr [ESP + 0x12c]     ; 004a4e93
    MOV EDX,dword ptr [ESP + 0x160]     ; 004a4e9a
    INC EBP                             ; 004a4ea1
    MOV EAX,dword ptr [EAX + 0x18c]     ; 004a4ea2
    MOV ECX,dword ptr [EDX + 0x190]     ; 004a4ea8
    ADD EDI,EAX                         ; 004a4eae
    MOV dword ptr [ESP + 0x12c],EBP     ; 004a4eb0
    MOV dword ptr [ESP + 0x134],EDI     ; 004a4eb7
    CMP EBP,ECX                         ; 004a4ebe
    JL 0x004a4da8                       ; 004a4ec0
        ;   XREF to: 004a4da8 (CONDITIONAL_JUMP)  ; LAB_004a4da8
    MOV EAX,dword ptr [ESP + 0x160]     ; 004a4ec6
        ;   Label: LAB_004a4ec6
    MOV ECX,dword ptr [ESP + 0x160]     ; 004a4ecd
    MOV EBX,dword ptr [EAX + 0x1d8]     ; 004a4ed4
    ADD ECX,0x1a4                       ; 004a4eda
    CMP EBX,0x1                         ; 004a4ee0
    JNZ 0x004a51c1                      ; 004a4ee3
        ;   XREF to: 004a51c1 (CONDITIONAL_JUMP)  ; LAB_004a51c1
    MOV EDX,dword ptr [ESP + 0x160]     ; 004a4ee9
    MOV EAX,dword ptr [EAX + 0x180]     ; 004a4ef0
    MOV dword ptr [EDX + 0x1a4],EAX     ; 004a4ef6
    MOV EAX,dword ptr [EDX]             ; 004a4efc
    MOV dword ptr [EDX + 0x1a8],EAX     ; 004a4efe
    MOV EAX,dword ptr [EDX + 0x188]     ; 004a4f04
    PUSH ECX                            ; 004a4f0a
    MOV dword ptr [EDX + 0x1ac],EAX     ; 004a4f0b
    CALL shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10 ; 004a4f11
        ;   XREF to: 004a5c10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10(CEdScrollBar * this_ptr)
        ;   Label: LAB_004a4f11
    ADD ESP,0x4                         ; 004a4f16
    MOV EAX,dword ptr [ESP + 0x160]     ; 004a4f19
        ;   Label: LAB_004a4f19
    CMP byte ptr [EAX + 0x44],0x0       ; 004a4f20
    JZ 0x004a4f4b                       ; 004a4f24
        ;   XREF to: 004a4f4b (CONDITIONAL_JUMP)  ; LAB_004a4f4b
    CMP dword ptr [EAX + 0x3a4],0x0     ; 004a4f26
    SETZ AL                             ; 004a4f2d
    AND EAX,0xff                        ; 004a4f30
    PUSH EAX                            ; 004a4f35
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a4f36
    ADD EAX,0x1dc                       ; 004a4f3d
    PUSH EAX                            ; 004a4f42
    CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 ; 004a4f43
        ;   XREF to: 004a65e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_paint_FUN_004a65e0(CEdButton * this_ptr, int draw_border_flag)
    ADD ESP,0x8                         ; 004a4f48
    MOV EAX,dword ptr [ESP + 0x160]     ; 004a4f4b
        ;   Label: LAB_004a4f4b
    CMP byte ptr [EAX + 0xa8],0x0       ; 004a4f52
    JZ 0x004a4f80                       ; 004a4f59
        ;   XREF to: 004a4f80 (CONDITIONAL_JUMP)  ; LAB_004a4f80
    CMP dword ptr [EAX + 0x3a4],0x1     ; 004a4f5b
    SETZ AL                             ; 004a4f62
    AND EAX,0xff                        ; 004a4f65
    PUSH EAX                            ; 004a4f6a
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a4f6b
    ADD EAX,0x2c0                       ; 004a4f72
    PUSH EAX                            ; 004a4f77
    CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 ; 004a4f78
        ;   XREF to: 004a65e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_paint_FUN_004a65e0(CEdButton * this_ptr, int draw_border_flag)
    ADD ESP,0x8                         ; 004a4f7d
    MOV EAX,dword ptr [ESP + 0x160]     ; 004a4f80
        ;   Label: LAB_004a4f80
    MOV EBX,dword ptr [EAX + 0x40]      ; 004a4f87
    TEST EBX,EBX                        ; 004a4f8a
    JZ 0x004a5216                       ; 004a4f8c
        ;   XREF to: 004a5216 (CONDITIONAL_JUMP)  ; LAB_004a5216
    ADD ESP,0x14c                       ; 004a4f92
    POP EBP                             ; 004a4f98
    POP EDI                             ; 004a4f99
    POP ESI                             ; 004a4f9a
    POP EBX                             ; 004a4f9b
    RET                                 ; 004a4f9c
    MOV EAX,dword ptr [ESP + 0x160]     ; 004a4f9d
        ;   Label: LAB_004a4f9d
    MOV EDX,dword ptr [ESP + 0x140]     ; 004a4fa4
    MOV ECX,dword ptr [ESP + 0x138]     ; 004a4fab
    MOV EAX,dword ptr [EAX + 0x174]     ; 004a4fb2
    MOV EBX,dword ptr [ESP + 0x130]     ; 004a4fb8
    ADD EDX,EAX                         ; 004a4fbf
    INC ECX                             ; 004a4fc1
    MOV dword ptr [ESP + 0x140],EDX     ; 004a4fc2
    MOV EDX,dword ptr [ESP + 0x160]     ; 004a4fc9
    INC EBX                             ; 004a4fd0
    MOV dword ptr [ESP + 0x138],ECX     ; 004a4fd1
    MOV ESI,dword ptr [EDX + 0x188]     ; 004a4fd8
    MOV dword ptr [ESP + 0x130],EBX     ; 004a4fde
    CMP EBX,ESI                         ; 004a4fe5
    JL 0x004a4dce                       ; 004a4fe7
        ;   XREF to: 004a4dce (CONDITIONAL_JUMP)  ; LAB_004a4dce
    JMP 0x004a4de4                      ; 004a4fed
        ;   XREF to: 004a4de4 (UNCONDITIONAL_JUMP)  ; LAB_004a4de4
    CMP EAX,dword ptr [EDX + 0x17c]     ; 004a4ff2
        ;   Label: LAB_004a4ff2
    JNZ 0x004a507b                      ; 004a4ff8
        ;   XREF to: 004a507b (CONDITIONAL_JUMP)  ; LAB_004a507b
    MOV ESI,dword ptr [ESP + 0x134]     ; 004a4ffe
    MOV EAX,EDX                         ; 004a5005
    MOV EDI,dword ptr [ESP + 0x140]     ; 004a5007
    MOV EDX,dword ptr [EDX + 0x18c]     ; 004a500e
    MOV ECX,dword ptr [EAX + 0x174]     ; 004a5014
    MOV EBX,dword ptr [EAX + 0x170]     ; 004a501a
    ADD ESI,EDX                         ; 004a5020
    ADD EDI,ECX                         ; 004a5022
    DEC ESI                             ; 004a5024
    DEC EDI                             ; 004a5025
    TEST EBX,EBX                        ; 004a5026
    JZ 0x004a517d                       ; 004a5028
        ;   XREF to: 004a517d (CONDITIONAL_JUMP)  ; LAB_004a517d
    MOV EAX,[0x02cf2ad4]                ; 004a502e | g_ConfirmedSelectionColor
    PUSH EAX                            ; 004a5033
        ;   Label: LAB_004a5033
    PUSH EDI                            ; 004a5034
    PUSH ESI                            ; 004a5035
    MOV EBP,dword ptr [ESP + 0x14c]     ; 004a5036
    PUSH EBP                            ; 004a503d
    MOV EAX,dword ptr [ESP + 0x144]     ; 004a503e
    PUSH EAX                            ; 004a5045
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 004a5046
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004a504b
    MOV EAX,dword ptr [ESP + 0x160]     ; 004a504e
    CMP dword ptr [EAX + 0x3a4],-0x1    ; 004a5055
    JNZ 0x004a507b                      ; 004a505c
        ;   XREF to: 004a507b (CONDITIONAL_JUMP)  ; LAB_004a507b
    PUSH 0x1                            ; 004a505e
    PUSH EDI                            ; 004a5060
    PUSH ESI                            ; 004a5061
    PUSH EBP                            ; 004a5062
    MOV ESI,dword ptr [ESP + 0x144]     ; 004a5063
    XOR ECX,ECX                         ; 004a506a
    PUSH ESI                            ; 004a506c
    MOV dword ptr [0x02d02570],ECX      ; 004a506d | g_ActiveRenderColor
    CALL shape_edittool.cpp_drawDashedLine_FUN_0049d290 ; 004a5073
        ;   XREF to: 0049d290 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_drawDashedLine_FUN_0049d290(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004a5078
    MOV EBP,dword ptr [ESP + 0x138]     ; 004a507b
        ;   Label: LAB_004a507b
    PUSH EBP                            ; 004a5082
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a5083
    XOR EDI,EDI                         ; 004a508a
    PUSH EAX                            ; 004a508c
    MOV dword ptr [ESP + 0x14c],EDI     ; 004a508d
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004a5094
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004a5099
    MOV EDX,dword ptr [ESP + 0x160]     ; 004a509c
    MOV EDI,EAX                         ; 004a50a3
    MOV EAX,dword ptr [ESP + 0x134]     ; 004a50a5
    ADD EAX,dword ptr [EDX + 0x178]     ; 004a50ac
    PUSH EBP                            ; 004a50b2
    MOV dword ptr [ESP + 0x14c],EAX     ; 004a50b3
    MOV EAX,[0x02cf2ac8]                ; 004a50ba | g_EnabledTextColor
    PUSH EDX                            ; 004a50bf
    MOV dword ptr [ESP + 0x144],EAX     ; 004a50c0
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0 ; 004a50c7
        ;   XREF to: 004a54e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 004a50cc
    TEST EAX,EAX                        ; 004a50cf
    JZ 0x004a5187                       ; 004a50d1
        ;   XREF to: 004a5187 (CONDITIONAL_JUMP)  ; LAB_004a5187
    MOV EBP,dword ptr [ESP + 0x144]     ; 004a50d7
        ;   Label: LAB_004a50d7
    MOV EDX,dword ptr [ESP + 0x160]     ; 004a50de
    SHL EBP,0x2                         ; 004a50e5
    ADD EBP,EDX                         ; 004a50e8
    XOR BL,BL                           ; 004a50ea
    MOV EDX,ESP                         ; 004a50ec
        ;   Label: LAB_004a50ec
    MOV BH,byte ptr [EDI]               ; 004a50ee
    MOV EAX,EDI                         ; 004a50f0
    CMP BL,BH                           ; 004a50f2
    JZ 0x004a51a9                       ; 004a50f4
        ;   XREF to: 004a51a9 (CONDITIONAL_JUMP)  ; LAB_004a51a9
    MOV BH,byte ptr [EAX]               ; 004a50fa
        ;   Label: LAB_004a50fa
    LEA ECX,[EAX + 0x1]                 ; 004a50fc
    CMP BH,0x9                          ; 004a50ff
    JNZ 0x004a5198                      ; 004a5102
        ;   XREF to: 004a5198 (CONDITIONAL_JUMP)  ; LAB_004a5198
    MOV ESI,ECX                         ; 004a5108
    MOV byte ptr [EDX],BL               ; 004a510a
        ;   Label: LAB_004a510a
    PUSH 0xffff                         ; 004a510c
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 004a5111
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 004a5116
    PUSH -0x1                           ; 004a5119
    MOV ECX,dword ptr [ESP + 0x140]     ; 004a511b
    PUSH ECX                            ; 004a5122
    MOV EAX,dword ptr [ESP + 0x148]     ; 004a5123
    PUSH EAX                            ; 004a512a
    MOV EDX,dword ptr [ESP + 0x154]     ; 004a512b
    PUSH EDX                            ; 004a5132
    LEA EAX,[ESP + 0x10]                ; 004a5133
    PUSH EAX                            ; 004a5137
    MOV ECX,dword ptr [0x02cf1cd0]      ; 004a5138 | g_EditorFont
    PUSH ECX                            ; 004a513e
    MOV EDI,ESI                         ; 004a513f
    ADD EBP,0x4                         ; 004a5141
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004a5144
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004a5149
    MOV EAX,dword ptr [EBP + 0xc]       ; 004a514c
    MOV ECX,dword ptr [ESP + 0x144]     ; 004a514f
    MOV EDX,dword ptr [ESP + 0x148]     ; 004a5156
    INC ECX                             ; 004a515d
    ADD EDX,EAX                         ; 004a515e
    MOV dword ptr [ESP + 0x144],ECX     ; 004a5160
    MOV CL,byte ptr [ESI]               ; 004a5167
    MOV dword ptr [ESP + 0x148],EDX     ; 004a5169
    CMP BL,CL                           ; 004a5170
    JZ 0x004a4f9d                       ; 004a5172
        ;   XREF to: 004a4f9d (CONDITIONAL_JUMP)  ; LAB_004a4f9d
    JMP 0x004a50ec                      ; 004a5178
        ;   XREF to: 004a50ec (UNCONDITIONAL_JUMP)  ; LAB_004a50ec
    MOV EAX,[0x02cf2ad0]                ; 004a517d | g_SelectionHighlightColor
        ;   Label: LAB_004a517d
    JMP 0x004a5033                      ; 004a5182
        ;   XREF to: 004a5033 (UNCONDITIONAL_JUMP)  ; LAB_004a5033
    MOV EAX,[0x02cf2acc]                ; 004a5187 | g_DisabledTextColor
        ;   Label: LAB_004a5187
    MOV dword ptr [ESP + 0x13c],EAX     ; 004a518c
    JMP 0x004a50d7                      ; 004a5193
        ;   XREF to: 004a50d7 (UNCONDITIONAL_JUMP)  ; LAB_004a50d7
    MOV AL,byte ptr [EAX]               ; 004a5198
        ;   Label: LAB_004a5198
    MOV byte ptr [EDX],AL               ; 004a519a
    INC EDX                             ; 004a519c
    MOV BH,byte ptr [ECX]               ; 004a519d
    MOV EAX,ECX                         ; 004a519f
    CMP BL,BH                           ; 004a51a1
    JNZ 0x004a50fa                      ; 004a51a3
        ;   XREF to: 004a50fa (CONDITIONAL_JUMP)  ; LAB_004a50fa
    MOV ESI,EAX                         ; 004a51a9
        ;   Label: LAB_004a51a9
    JMP 0x004a510a                      ; 004a51ab
        ;   XREF to: 004a510a (UNCONDITIONAL_JUMP)  ; LAB_004a510a
    MOV EAX,0x1                         ; 004a51b0
        ;   Label: LAB_004a51b0
    JMP 0x004a4e35                      ; 004a51b5
        ;   XREF to: 004a4e35 (UNCONDITIONAL_JUMP)  ; LAB_004a4e35
    XOR EAX,EAX                         ; 004a51ba
        ;   Label: LAB_004a51ba
    JMP 0x004a4e5c                      ; 004a51bc
        ;   XREF to: 004a4e5c (UNCONDITIONAL_JUMP)  ; LAB_004a4e5c
    CMP EBX,0x2                         ; 004a51c1
        ;   Label: LAB_004a51c1
    JNZ 0x004a4f19                      ; 004a51c4
        ;   XREF to: 004a4f19 (CONDITIONAL_JUMP)  ; LAB_004a4f19
    MOV EDX,dword ptr [EAX + 0x180]     ; 004a51ca
    MOV ESI,dword ptr [ESP + 0x160]     ; 004a51d0
    MOV EAX,EDX                         ; 004a51d7
    MOV EDI,dword ptr [ESI + 0x188]     ; 004a51d9
    SAR EDX,0x1f                        ; 004a51df
    IDIV EDI                            ; 004a51e2
    MOV dword ptr [ESI + 0x1a4],EAX     ; 004a51e4
    MOV EBP,dword ptr [ESI + 0x188]     ; 004a51ea
    MOV EAX,dword ptr [ESI]             ; 004a51f0
    ADD EAX,EBP                         ; 004a51f2
    LEA EDX,[EAX + -0x1]                ; 004a51f4
    MOV EAX,EDX                         ; 004a51f7
    SAR EDX,0x1f                        ; 004a51f9
    IDIV EBP                            ; 004a51fc
    MOV dword ptr [ESI + 0x1a8],EAX     ; 004a51fe
    MOV EAX,dword ptr [ESI + 0x190]     ; 004a5204
    PUSH ECX                            ; 004a520a
    MOV dword ptr [ESI + 0x1ac],EAX     ; 004a520b
    JMP 0x004a4f11                      ; 004a5211
        ;   XREF to: 004a4f11 (UNCONDITIONAL_JUMP)  ; LAB_004a4f11
    PUSH EBX                            ; 004a5216
        ;   Label: LAB_004a5216
    MOV ESI,dword ptr [0x00678a60]      ; 004a5217 | g_CEditorToolsPtr
    PUSH ESI                            ; 004a521d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380 ; 004a521e
        ;   XREF to: 004a1380 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380(CEditorTools * this_ptr, int use_clipping)
    ADD ESP,0x8                         ; 004a5223
    ADD ESP,0x14c                       ; 004a5226
    POP EBP                             ; 004a522c
    POP EDI                             ; 004a522d
    POP ESI                             ; 004a522e
    POP EBX                             ; 004a522f
    RET                                 ; 004a5230

