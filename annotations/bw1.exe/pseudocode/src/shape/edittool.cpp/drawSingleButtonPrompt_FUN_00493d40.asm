; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_drawSingleButtonPrompt_FUN_00493d40(char *title,char *message,int color)
;
; Parameters:
; char *           Stack[0x4]:4   title
; char *           Stack[0x8]:4   message
; int              Stack[0xc]:4   color
; Local Variables:
; undefined        Stack[-0x108]:1  local_108
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0 at 0049432c
;   shape_edittool.cpp_FUN_00494340 at 0049438c
;   shape_edittool.cpp_FUN_004943a0 at 004943ec
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dbc68
;   TerminatedCString s_gEdFont_must_be_set_by_t_005dbc7e
;   TerminatedCString s_Cancel_005dbd54
;   TerminatedCString s_Cancel_005dbd5b
;   TerminatedCString s_OK_005dbd62
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f538
;   undefined4 DAT_01c3f53c
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;   undefined4 DAT_01d1d400
;   ... and 2 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004c3f50
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0
;   engine_font.cpp_FUN_004c1dd0
;   engine_mini3d.cpp_FUN_00512320
;   shape_edittool.cpp_calculateButtonWidth_FUN_0049d950
;   shape_edittool.cpp_CEdButton_ctor_FUN_0049d480
;   shape_edittool.cpp_CEdButton_dtor_FUN_0049d4b0
;   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_0049d530
;   shape_edittool.cpp_CEdButton_wasClicked_FUN_0049d8a0
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840
;   shape_edittool.cpp_FUN_00496dd0
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493d40
        ;   Label: shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40
    PUSH ESI                            ; 00493d41
    PUSH EDI                            ; 00493d42
    PUSH EBP                            ; 00493d43
    SUB ESP,0xf8                        ; 00493d44
    MOV ESI,dword ptr [ESP + 0x110]     ; 00493d4a
    CMP dword ptr [0x01c3eb50],0x0      ; 00493d51 | DAT_01c3eb50
    JZ 0x00493fcc                       ; 00493d58
        ;   XREF to: 00493fcc (CONDITIONAL_JUMP)  ; LAB_00493fcc
    MOV EAX,[0x01c3eb50]                ; 00493d5e | DAT_01c3eb50
        ;   Label: LAB_00493d5e
    PUSH 0x6a                           ; 00493d63
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 00493d65
    PUSH EAX                            ; 00493d6b
    MOV dword ptr [0x01c3f538],EDX      ; 00493d6c | DAT_01c3f538
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 00493d72
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    MOV [0x01c3f53c],EAX                ; 00493d77 | DAT_01c3f53c
    MOV EAX,[0x0061b49c]                ; 00493d7c | DAT_0061b49c
    MOV EDX,EAX                         ; 00493d81
    MOV EBX,0x60                        ; 00493d83
    SAR EDX,0x1f                        ; 00493d88
    IDIV EBX                            ; 00493d8b
    ADD ESP,0x8                         ; 00493d8d
    PUSH 0x5dbd54                       ; 00493d90 | = "Cancel"
    MOV EBX,EAX                         ; 00493d95
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_0049d950 ; 00493d97
        ;   XREF to: 0049d950 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_0049d950(char * button_text)
    ADD ESP,0x4                         ; 00493d9c
    PUSH 0x0                            ; 00493d9f
    MOV dword ptr [ESP + 0xf4],EAX      ; 00493da1
    CALL shape_edittool.cpp_FUN_0049d9e0 ; 00493da8
        ;   XREF to: 0049d9e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0049d9e0(char * button_text)
    ADD ESP,0x4                         ; 00493dad
    MOV EDI,dword ptr [ESP + 0x10c]     ; 00493db0
    PUSH EDI                            ; 00493db7
    MOV EBP,dword ptr [0x01c3eb50]      ; 00493db8 | DAT_01c3eb50
    ADD EBX,EBX                         ; 00493dbe
    PUSH EBP                            ; 00493dc0
    ADD EBX,EAX                         ; 00493dc1
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 00493dc3
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 00493dc8
    MOV EBP,EAX                         ; 00493dcb
    PUSH ESI                            ; 00493dcd
    MOV dword ptr [ESP + 0xf8],EAX      ; 00493dce
    MOV EAX,[0x01c3eb50]                ; 00493dd5 | DAT_01c3eb50
    PUSH EAX                            ; 00493dda
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 00493ddb
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 00493de0
    MOV EDI,EAX                         ; 00493de3
    CMP EAX,EBP                         ; 00493de5
    JLE 0x00493df0                      ; 00493de7
        ;   XREF to: 00493df0 (CONDITIONAL_JUMP)  ; LAB_00493df0
    MOV dword ptr [ESP + 0xf4],EAX      ; 00493de9
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00493df0
        ;   Label: LAB_00493df0
    CMP EAX,dword ptr [ESP + 0xf4]      ; 00493df7
    JG 0x00493ff4                       ; 00493dfe
        ;   XREF to: 00493ff4 (CONDITIONAL_JUMP)  ; LAB_00493ff4
    PUSH ESI                            ; 00493e04
        ;   Label: LAB_00493e04
    MOV ECX,dword ptr [0x01c3eb50]      ; 00493e05 | DAT_01c3eb50
    PUSH ECX                            ; 00493e0b
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004c3f50 ; 00493e0c
        ;   XREF to: 004c3f50 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004c3f50(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 00493e11
    PUSH 0x0                            ; 00493e14
    MOV EDX,dword ptr [ESP + 0x110]     ; 00493e16
    PUSH EDX                            ; 00493e1d
    MOV EDX,dword ptr [0x01c3f53c]      ; 00493e1e | DAT_01c3f53c
    ADD EDX,EDX                         ; 00493e24
    MOV EBP,EAX                         ; 00493e26
    ADD EAX,EDX                         ; 00493e28
    ADD EAX,EBX                         ; 00493e2a
    PUSH EAX                            ; 00493e2c
    MOV EAX,[0x01c3f538]                ; 00493e2d | DAT_01c3f538
    MOV ECX,dword ptr [ESP + 0x100]     ; 00493e32
    SHL EAX,0x2                         ; 00493e39
    ADD EAX,ECX                         ; 00493e3c
    PUSH EAX                            ; 00493e3e
    MOV EAX,[0x0061abc0]                ; 00493e3f | g_CEditorToolsPtr
    PUSH EAX                            ; 00493e44
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840 ; 00493e45
        ;   XREF to: 00496840 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 00493e4a
    PUSH 0x5dbd5b                       ; 00493e4d | = "Cancel"
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_0049d950 ; 00493e52
        ;   XREF to: 0049d950 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_0049d950(char * button_text)
    MOV EDX,dword ptr [0x01c4f010]      ; 00493e57 | DAT_01c4f010
    MOV dword ptr [ESP + 0xf0],EAX      ; 00493e5d
    ADD ESP,0x4                         ; 00493e64
    MOV EAX,[0x01c4f008]                ; 00493e67 | DAT_01c4f008
    MOV ECX,dword ptr [ESP + 0xec]      ; 00493e6c
    ADD EDX,EAX                         ; 00493e73
    SUB EDX,ECX                         ; 00493e75
    MOV EAX,EDX                         ; 00493e77
    SAR EDX,0x1f                        ; 00493e79
    SUB EAX,EDX                         ; 00493e7c
    SAR EAX,0x1                         ; 00493e7e
    INC EAX                             ; 00493e80
    PUSH 0x0                            ; 00493e81
    MOV dword ptr [ESP + 0xe8],EAX      ; 00493e83
    CALL shape_edittool.cpp_FUN_0049d9e0 ; 00493e8a
        ;   XREF to: 0049d9e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0049d9e0(char * button_text)
    MOV EDX,dword ptr [0x01c4f014]      ; 00493e8f | DAT_01c4f014
    SUB EDX,EAX                         ; 00493e95
    ADD ESP,0x4                         ; 00493e97
    LEA EAX,[EDX + 0x1]                 ; 00493e9a
    MOV dword ptr [ESP + 0xe8],EAX      ; 00493e9d
    MOV EAX,ESP                         ; 00493ea4
    PUSH EAX                            ; 00493ea6
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_0049d480 ; 00493ea7
        ;   XREF to: 0049d480 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_0049d480(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 00493eac
    PUSH 0x5dbd62                       ; 00493eaf | = "OK"
    MOV EAX,[0x01c4f014]                ; 00493eb4 | DAT_01c4f014
    MOV EDX,dword ptr [ESP + 0xf0]      ; 00493eb9
    PUSH EAX                            ; 00493ec0
    MOV EAX,dword ptr [ESP + 0xec]      ; 00493ec1
    ADD EAX,EDX                         ; 00493ec8
    DEC EAX                             ; 00493eca
    PUSH EAX                            ; 00493ecb
    MOV ECX,dword ptr [ESP + 0xf4]      ; 00493ecc
    PUSH ECX                            ; 00493ed3
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00493ed4
    PUSH EAX                            ; 00493edb
    LEA EAX,[ESP + 0x14]                ; 00493edc
    PUSH EAX                            ; 00493ee0
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_0049d530 ; 00493ee1
        ;   XREF to: 0049d530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_0049d530(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 00493ee6
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00493ee9
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005b2580 ; 00493eee
        ;   XREF to: 005b2580 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005b2580()
        ;   Label: LAB_00493eee
    TEST EAX,EAX                        ; 00493ef3
    JNZ 0x00494000                      ; 00493ef5
        ;   XREF to: 00494000 (CONDITIONAL_JUMP)  ; LAB_00494000
    MOV EAX,ESP                         ; 00493efb
    PUSH EAX                            ; 00493efd
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_0049d8a0 ; 00493efe
        ;   XREF to: 0049d8a0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_0049d8a0(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 00493f03
    TEST EAX,EAX                        ; 00493f06
    JNZ 0x00494000                      ; 00493f08
        ;   XREF to: 00494000 (CONDITIONAL_JUMP)  ; LAB_00494000
    CMP dword ptr [0x02c9be70],0x0      ; 00493f0e | DAT_02c9be70
    JNZ 0x00494000                      ; 00493f15
        ;   XREF to: 00494000 (CONDITIONAL_JUMP)  ; LAB_00494000
    MOV ECX,dword ptr [0x0061abc0]      ; 00493f1b | g_CEditorToolsPtr
    PUSH ECX                            ; 00493f21
    CALL shape_edittool.cpp_FUN_00496ee0 ; 00493f22
        ;   XREF to: 00496ee0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496ee0()
    ADD ESP,0x4                         ; 00493f27
    PUSH 0x1                            ; 00493f2a
    MOV EAX,[0x0061abc0]                ; 00493f2c | g_CEditorToolsPtr
    PUSH EAX                            ; 00493f31
    CALL shape_edittool.cpp_FUN_00497660 ; 00493f32
        ;   XREF to: 00497660 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00497660()
    ADD ESP,0x8                         ; 00493f37
    PUSH 0xffff                         ; 00493f3a
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 00493f3f
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 00493f44
    PUSH 0x3f800000                     ; 00493f47
    CALL engine_mini3d.cpp_FUN_00512320 ; 00493f4c
        ;   XREF to: 00512320 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00512320()
    ADD ESP,0x4                         ; 00493f51
    PUSH -0x1                           ; 00493f54
    MOV EDX,dword ptr [ESP + 0x118]     ; 00493f56
    MOV ECX,dword ptr [0x01c4f014]      ; 00493f5d | DAT_01c4f014
    PUSH EDX                            ; 00493f63
    MOV EDX,dword ptr [0x01c4f00c]      ; 00493f64 | DAT_01c4f00c
    ADD EDX,ECX                         ; 00493f6a
    SUB EDX,EBP                         ; 00493f6c
    SUB EDX,EBX                         ; 00493f6e
    MOV EAX,EDX                         ; 00493f70
    SAR EDX,0x1f                        ; 00493f72
    SUB EAX,EDX                         ; 00493f75
    SAR EAX,0x1                         ; 00493f77
    MOV EDX,dword ptr [0x01c4f008]      ; 00493f79 | DAT_01c4f008
    PUSH EAX                            ; 00493f7f
    ADD EDX,dword ptr [0x01c4f010]      ; 00493f80 | DAT_01c4f010
    SUB EDX,EDI                         ; 00493f86
    MOV EAX,EDX                         ; 00493f88
    SAR EDX,0x1f                        ; 00493f8a
    SUB EAX,EDX                         ; 00493f8d
    SAR EAX,0x1                         ; 00493f8f
    PUSH EAX                            ; 00493f91
    PUSH ESI                            ; 00493f92
    MOV EDX,dword ptr [0x01c3eb50]      ; 00493f93 | DAT_01c3eb50
    PUSH EDX                            ; 00493f99
    CALL engine_font.cpp_FUN_004c1dd0   ; 00493f9a
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 00493f9f
    PUSH 0x1                            ; 00493fa2
    LEA EAX,[ESP + 0x4]                 ; 00493fa4
    PUSH EAX                            ; 00493fa8
    CALL shape_edittool.cpp_FUN_0049d580 ; 00493fa9
        ;   XREF to: 0049d580 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049d580()
    ADD ESP,0x8                         ; 00493fae
    PUSH 0x0                            ; 00493fb1
    MOV ECX,dword ptr [0x0061abc0]      ; 00493fb3 | g_CEditorToolsPtr
    PUSH ECX                            ; 00493fb9
    CALL shape_edittool.cpp_FUN_00497870 ; 00493fba
        ;   XREF to: 00497870 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00497870()
    ADD ESP,0x8                         ; 00493fbf
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 00493fc2
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    JMP 0x00493eee                      ; 00493fc7
        ;   XREF to: 00493eee (UNCONDITIONAL_JUMP)  ; LAB_00493eee
    MOV ECX,0x5dbc68                    ; 00493fcc | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00493fcc
    MOV EBX,0xa4                        ; 00493fd1
    PUSH 0x5dbc7e                       ; 00493fd6 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d1d400],ECX      ; 00493fdb | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00493fe1 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00493fe7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00493fec
    JMP 0x00493d5e                      ; 00493fef
        ;   XREF to: 00493d5e (UNCONDITIONAL_JUMP)  ; LAB_00493d5e
    MOV dword ptr [ESP + 0xf4],EAX      ; 00493ff4
        ;   Label: LAB_00493ff4
    JMP 0x00493e04                      ; 00493ffb
        ;   XREF to: 00493e04 (UNCONDITIONAL_JUMP)  ; LAB_00493e04
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00494000
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
        ;   Label: LAB_00494000
    MOV EBX,dword ptr [0x0061abc0]      ; 00494005 | g_CEditorToolsPtr
    PUSH EBX                            ; 0049400b
    CALL shape_edittool.cpp_FUN_00496dd0 ; 0049400c
        ;   XREF to: 00496dd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496dd0()
    ADD ESP,0x4                         ; 00494011
    PUSH 0x0                            ; 00494014
    LEA EAX,[ESP + 0x4]                 ; 00494016
    PUSH EAX                            ; 0049401a
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_0049d4b0 ; 0049401b
        ;   XREF to: 0049d4b0 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_0049d4b0(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00494020
    ADD ESP,0xf8                        ; 00494023
    POP EBP                             ; 00494029
    POP EDI                             ; 0049402a
    POP ESI                             ; 0049402b
    POP EBX                             ; 0049402c
    RET                                 ; 0049402d

