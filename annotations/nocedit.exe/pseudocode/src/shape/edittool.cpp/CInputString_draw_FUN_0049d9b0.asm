; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CInputString_draw_FUN_0049d9b0(CInputString * this_ptr, int x_pos, int y_pos)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 at 0049fda2
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 at 0049dd08
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622f38
;   TerminatedCString s_CInputString_draw_string_00622f4e
;   CBitFont* g_EditorFont
;   int g_FontCharacterWidth
;   char[1024] g_TempStringBuffer
;   int g_SelectionColor
;   int g_TextColor
;   int g_CursorColor
;   int g_ActiveRenderColor
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   engine_2d.c_drawLine_FUN_004011b0
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
;   shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d9b0
        ;   Label: shape_edittool.cpp_CInputString_draw_FUN_0049d9b0
    PUSH ESI                            ; 0049d9b1
    PUSH EDI                            ; 0049d9b2
    PUSH EBP                            ; 0049d9b3
    SUB ESP,0x4                         ; 0049d9b4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0049d9b7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0049d9bb
    MOV EBP,dword ptr [ESP + 0x20]      ; 0049d9bf
    MOV EAX,[0x02cf266c]                ; 0049d9c3 | int g_FontCharacterWidth
    ADD EAX,EBP                         ; 0049d9c8
    MOV EDX,dword ptr [EBX + 0x134]     ; 0049d9ca
    MOV dword ptr [ESP],EAX             ; 0049d9d0
    MOV EAX,dword ptr [EBX + 0x138]     ; 0049d9d3
    CMP EAX,EDX                         ; 0049d9d9
    JNZ 0x0049da81                      ; 0049d9db | LAB_0049da81
        ;   XREF to: 0049da81 (CONDITIONAL_JUMP)
    PUSH 0xffff                         ; 0049d9e1
        ;   Label: LAB_0049d9e1
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 0049d9e6 | void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [EBX + 0x13c]     ; 0049d9eb
    ADD ESP,0x4                         ; 0049d9f1
    TEST ESI,ESI                        ; 0049d9f4
    JZ 0x0049dac6                       ; 0049d9f6 | LAB_0049dac6
        ;   XREF to: 0049dac6 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x130],0x400   ; 0049d9fc
    JC 0x0049da2a                       ; 0049da06 | LAB_0049da2a
        ;   XREF to: 0049da2a (CONDITIONAL_JUMP)
    MOV ESI,0x622f38                    ; 0049da08 | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_00622f38 = ..\shape\edittool.cpp
    MOV EAX,0x1dc                       ; 0049da0d
    PUSH 0x622f4e                       ; 0049da12 | = "CInputString::draw - string too big f..." | s_CInputString_draw_string_00622f4e = CInputString::draw - string too big for hidden text!
    MOV dword ptr [0x02f0ca48],ESI      ; 0049da17 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0049da1d | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0049da22 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049da27
    MOV EDX,dword ptr [EBX + 0x130]     ; 0049da2a
        ;   Label: LAB_0049da2a
    PUSH EDX                            ; 0049da30
    PUSH 0x2a                           ; 0049da31
    PUSH 0x2cf2678                      ; 0049da33 | char[1024] g_TempStringBuffer
    CALL crt_memory.c_memset_FUN_005fde40 ; 0049da38 | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0049da3d
    PUSH -0x1                           ; 0049da40
    MOV ECX,dword ptr [0x02cf2a9c]      ; 0049da42 | int g_TextColor
    PUSH ECX                            ; 0049da48
    PUSH EBP                            ; 0049da49
    PUSH EDI                            ; 0049da4a
    MOV ESI,dword ptr [0x02cf1cd0]      ; 0049da4b | CBitFont * g_EditorFont
    PUSH 0x2cf2678                      ; 0049da51 | char[1024] g_TempStringBuffer
    MOV EAX,dword ptr [EBX + 0x130]     ; 0049da56
    XOR DL,DL                           ; 0049da5c
    PUSH ESI                            ; 0049da5e
    MOV byte ptr [EAX + 0x2cf2678],DL   ; 0049da5f | char[1024] g_TempStringBuffer
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 0049da65 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   Label: LAB_0049da65
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0049da6a
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0049da6d | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    TEST EAX,0x40000                    ; 0049da72
    JNZ 0x0049dada                      ; 0049da77 | LAB_0049dada
        ;   XREF to: 0049dada (CONDITIONAL_JUMP)
    ADD ESP,0x4                         ; 0049da79
    POP EBP                             ; 0049da7c
    POP EDI                             ; 0049da7d
    POP ESI                             ; 0049da7e
    POP EBX                             ; 0049da7f
    RET                                 ; 0049da80
    PUSH EAX                            ; 0049da81
        ;   Label: LAB_0049da81
    PUSH EBX                            ; 0049da82
    CALL shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0 ; 0049da83 | int shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0(CInputString * this_ptr, int char_index)
        ;   XREF to: 0049d8f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049da88
    LEA ESI,[EDI + EAX*0x1]             ; 0049da8b
    MOV EAX,dword ptr [EBX + 0x134]     ; 0049da8e
    PUSH EAX                            ; 0049da94
    PUSH EBX                            ; 0049da95
    CALL shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0 ; 0049da96 | int shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0(CInputString * this_ptr, int char_index)
        ;   XREF to: 0049d8f0 (UNCONDITIONAL_CALL)
    ADD EAX,EDI                         ; 0049da9b
    ADD ESP,0x8                         ; 0049da9d
    CMP ESI,EAX                         ; 0049daa0
    JLE 0x0049daaa                      ; 0049daa2 | LAB_0049daaa
        ;   XREF to: 0049daaa (CONDITIONAL_JUMP)
    MOV EDX,ESI                         ; 0049daa4
    MOV ESI,EAX                         ; 0049daa6
    MOV EAX,EDX                         ; 0049daa8
    MOV EDX,dword ptr [0x02cf2a98]      ; 0049daaa | int g_SelectionColor
        ;   Label: LAB_0049daaa
    PUSH EDX                            ; 0049dab0
    MOV ECX,dword ptr [ESP + 0x4]       ; 0049dab1
    PUSH ECX                            ; 0049dab5
    PUSH EAX                            ; 0049dab6
    PUSH EBP                            ; 0049dab7
    PUSH ESI                            ; 0049dab8
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 0049dab9 | void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0049dabe
    JMP 0x0049d9e1                      ; 0049dac1 | LAB_0049d9e1
        ;   XREF to: 0049d9e1 (UNCONDITIONAL_JUMP)
    PUSH -0x1                           ; 0049dac6
        ;   Label: LAB_0049dac6
    MOV EAX,[0x02cf2a9c]                ; 0049dac8 | int g_TextColor
    PUSH EAX                            ; 0049dacd
    PUSH EBP                            ; 0049dace
    PUSH EDI                            ; 0049dacf
    PUSH EBX                            ; 0049dad0
    MOV EDX,dword ptr [0x02cf1cd0]      ; 0049dad1 | CBitFont * g_EditorFont
    PUSH EDX                            ; 0049dad7
    JMP 0x0049da65                      ; 0049dad8 | LAB_0049da65
        ;   XREF to: 0049da65 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x02cf2aa0]                ; 0049dada | int g_CursorColor
        ;   Label: LAB_0049dada
    MOV [0x02d02570],EAX                ; 0049dadf | int g_ActiveRenderColor
    MOV EAX,dword ptr [EBX + 0x134]     ; 0049dae4
    PUSH EAX                            ; 0049daea
    PUSH EBX                            ; 0049daeb
    CALL shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0 ; 0049daec | int shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0(CInputString * this_ptr, int char_index)
        ;   XREF to: 0049d8f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049daf1
    MOV EDX,dword ptr [ESP]             ; 0049daf4
    PUSH EDX                            ; 0049daf7
    ADD EAX,EDI                         ; 0049daf8
    PUSH EAX                            ; 0049dafa
    PUSH EBP                            ; 0049dafb
    PUSH EAX                            ; 0049dafc
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 0049dafd | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0049db02
    ADD ESP,0x4                         ; 0049db05
    POP EBP                             ; 0049db08
    POP EDI                             ; 0049db09
    POP ESI                             ; 0049db0a
    POP EBX                             ; 0049db0b
    RET                                 ; 0049db0c

