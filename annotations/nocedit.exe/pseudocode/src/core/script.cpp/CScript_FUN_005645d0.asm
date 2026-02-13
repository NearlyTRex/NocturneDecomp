; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_CScript_FUN_005645d0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x204]:1  local_204
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053994d
;
; Referenced Globals:
;   TerminatedCString s_Ln_d_Col_d_00643d74
;   int g_AutoIndentEnabled = 0x1
;   int g_ActiveRenderColor
;   CEdScrollBar g_ScriptEditorVScrollBar
;   undefined4 g_ScriptEditorVScrollBar.max_value
;   CEdScrollBar g_ScriptEditorHScrollBar
;   undefined4 DAT_0310fd40+1
;   int g_CurrentEditingColumn
;   int g_CurrentEditingLine
;   char[1020] g_ScriptEditorStatusText
;   int g_ScriptEditorLeft
;   int g_ScriptEditorTop
;   int g_ScriptEditorRight
;   int g_ScriptEditorBottom
;   int g_ScriptTextAreaLeft
;   ... and 9 more
;
; Called Functions:
;   core_script.cpp_CScript_FUN_005664d0
;   core_script.cpp_updateSelection_FUN_00564500
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_2d.c_drawHLine_FUN_00402ee0
;   engine_2d.c_drawVLine_FUN_00402ff0
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0
;   engine_font.cpp_CBitFont_drawTextWrapper_FUN_004cdbf0
;   engine_matrix.c_popViewport_FUN_0050e480
;   engine_matrix.c_pushViewport_FUN_0050e320
;   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005645d0
        ;   Label: core_script.cpp_CScript_FUN_005645d0
    PUSH ESI                            ; 005645d1
    PUSH EDI                            ; 005645d2
    PUSH EBP                            ; 005645d3
    SUB ESP,0x1f4                       ; 005645d4
    MOV ESI,dword ptr [ESP + 0x208]     ; 005645da
    CALL core_script.cpp_updateSelection_FUN_00564500 ; 005645e1
        ;   XREF to: 00564500 (UNCONDITIONAL_CALL)  ; void core_script.cpp_updateSelection_FUN_00564500()
    MOV EAX,[0x031141dc]                ; 005645e6 | g_ScriptEditorBottom
    MOV EDX,dword ptr [0x031141d4]      ; 005645eb | g_ScriptEditorTop
    SUB EAX,EDX                         ; 005645f1
    DEC EAX                             ; 005645f3
    MOV ECX,dword ptr [0x031141d0]      ; 005645f4 | g_ScriptEditorLeft
    PUSH EAX                            ; 005645fa
    MOV EAX,[0x031141d8]                ; 005645fb | g_ScriptEditorRight
    SUB EAX,ECX                         ; 00564600
    DEC EAX                             ; 00564602
    PUSH EAX                            ; 00564603
    PUSH EDX                            ; 00564604
    PUSH ECX                            ; 00564605
    CALL engine_matrix.c_pushViewport_FUN_0050e320 ; 00564606
        ;   XREF to: 0050e320 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pushViewport_FUN_0050e320(int x, int y, int width, int height)
    ADD ESP,0x10                        ; 0056460b
    MOV EAX,[0x031141dc]                ; 0056460e | g_ScriptEditorBottom
    PUSH 0x0                            ; 00564613
    DEC EAX                             ; 00564615
    PUSH EAX                            ; 00564616
    MOV EAX,[0x031141d8]                ; 00564617 | g_ScriptEditorRight
    DEC EAX                             ; 0056461c
    PUSH EAX                            ; 0056461d
    MOV EBP,dword ptr [0x031141d4]      ; 0056461e | g_ScriptEditorTop
    PUSH EBP                            ; 00564624
    MOV EAX,[0x031141d0]                ; 00564625 | g_ScriptEditorLeft
    PUSH EAX                            ; 0056462a
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 0056462b
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    MOV EAX,[0x031141d8]                ; 00564630 | g_ScriptEditorRight
    ADD ESP,0x14                        ; 00564635
    DEC EAX                             ; 00564638
    PUSH EAX                            ; 00564639
    MOV ECX,dword ptr [0x031141d4]      ; 0056463a | g_ScriptEditorTop
    PUSH ECX                            ; 00564640
    MOV EBX,dword ptr [0x031141d0]      ; 00564641 | g_ScriptEditorLeft
    MOV EDX,0x7                         ; 00564647
    PUSH EBX                            ; 0056464c
    MOV dword ptr [0x02d02570],EDX      ; 0056464d | g_ActiveRenderColor
    CALL engine_2d.c_drawHLine_FUN_00402ee0 ; 00564653
        ;   XREF to: 00402ee0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
    ADD ESP,0xc                         ; 00564658
    PUSH 0x310fd0c                      ; 0056465b | g_ScriptEditorHScrollBar
    CALL shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10 ; 00564660
        ;   XREF to: 004a5c10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 00564665
    PUSH 0x310fcd8                      ; 00564668 | g_ScriptEditorVScrollBar
    CALL shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10 ; 0056466d
        ;   XREF to: 004a5c10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10(CEdScrollBar * this_ptr)
    MOV EAX,[0x031141ec]                ; 00564672 | g_ScriptTextAreaBottom
    MOV EDI,dword ptr [0x031141e4]      ; 00564677 | g_ScriptTextAreaTop
    SUB EAX,EDI                         ; 0056467d
    ADD ESP,0x4                         ; 0056467f
    DEC EAX                             ; 00564682
    MOV EBP,dword ptr [0x031141e0]      ; 00564683 | g_ScriptTextAreaLeft
    PUSH EAX                            ; 00564689
    MOV EAX,[0x031141e8]                ; 0056468a | g_ScriptTextAreaRight
    SUB EAX,EBP                         ; 0056468f
    DEC EAX                             ; 00564691
    PUSH EAX                            ; 00564692
    PUSH EDI                            ; 00564693
    PUSH EBP                            ; 00564694
    CALL engine_matrix.c_pushViewport_FUN_0050e320 ; 00564695
        ;   XREF to: 0050e320 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pushViewport_FUN_0050e320(int x, int y, int width, int height)
    MOV EBX,dword ptr [0x0310fcd8]      ; 0056469a | g_ScriptEditorVScrollBar
    ADD ESP,0x10                        ; 005646a0
    MOV ECX,dword ptr [0x0310fce0]      ; 005646a3 | g_ScriptEditorVScrollBar.max_value
        ;   Label: LAB_005646a3
    MOV EAX,[0x0310fcd8]                ; 005646a9 | g_ScriptEditorVScrollBar
    ADD EAX,ECX                         ; 005646ae
    CMP EBX,EAX                         ; 005646b0
    JLE 0x005647a9                      ; 005646b2
        ;   XREF to: 005647a9 (CONDITIONAL_JUMP)  ; LAB_005647a9
    TEST byte ptr [0x0310fd41],0x40     ; 005646b8 | DAT_0310fd40+1
    JNZ 0x00564725                      ; 005646bf
        ;   XREF to: 00564725 (CONDITIONAL_JUMP)  ; LAB_00564725
    MOV EBX,dword ptr [0x0310fd0c]      ; 005646c1 | g_ScriptEditorHScrollBar
    MOV EAX,[0x0310fd44]                ; 005646c7 | g_CurrentEditingColumn
    SUB EAX,EBX                         ; 005646cc
    MOV EBX,dword ptr [0x03114204]      ; 005646ce | g_ScriptEditorCharWidth
    IMUL EBX,EAX                        ; 005646d4
    MOV EDI,dword ptr [0x0310fcd8]      ; 005646d7 | g_ScriptEditorVScrollBar
    MOV EAX,[0x0310fd48]                ; 005646dd | g_CurrentEditingLine
    MOV EBP,dword ptr [0x03114208]      ; 005646e2 | g_ScriptEditorLineHeight
    SUB EAX,EDI                         ; 005646e8
    IMUL EAX,EBP                        ; 005646ea
    MOV ECX,0xff                        ; 005646ed
    MOV ESI,dword ptr [0x031141e0]      ; 005646f2 | g_ScriptTextAreaLeft
    MOV EDX,dword ptr [0x031141e4]      ; 005646f8 | g_ScriptTextAreaTop
    MOV dword ptr [0x02d02570],ECX      ; 005646fe | g_ActiveRenderColor
    ADD EAX,EDX                         ; 00564704
    ADD EBX,ESI                         ; 00564706
    LEA ESI,[EAX + EBP*0x1]             ; 00564708
    MOV EDI,dword ptr [0x0068105c]      ; 0056470b | g_AutoIndentEnabled
    DEC ESI                             ; 00564711
    TEST EDI,EDI                        ; 00564712
    JZ 0x005647b9                       ; 00564714
        ;   XREF to: 005647b9 (CONDITIONAL_JUMP)  ; LAB_005647b9
    PUSH ESI                            ; 0056471a
    PUSH EAX                            ; 0056471b
    PUSH EBX                            ; 0056471c
    CALL engine_2d.c_drawVLine_FUN_00402ff0 ; 0056471d
        ;   XREF to: 00402ff0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00402ff0(int x, int y1, int y2)
    ADD ESP,0xc                         ; 00564722
        ;   Label: LAB_00564722
    CALL engine_matrix.c_popViewport_FUN_0050e480 ; 00564725
        ;   XREF to: 0050e480 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_0050e480(CDemonRenderer * this_ptr)
        ;   Label: LAB_00564725
    MOV EAX,[0x0310fd44]                ; 0056472a | g_CurrentEditingColumn
    INC EAX                             ; 0056472f
    PUSH EAX                            ; 00564730
    MOV EAX,[0x0310fd48]                ; 00564731 | g_CurrentEditingLine
    INC EAX                             ; 00564736
    PUSH EAX                            ; 00564737
    PUSH 0x643d74                       ; 00564738 | = "Ln %d, Col %d"
    LEA EAX,[ESP + 0xc]                 ; 0056473d
    PUSH EAX                            ; 00564741
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00564742
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00564747
    MOV EAX,ESP                         ; 0056474a
    PUSH EAX                            ; 0056474c
    PUSH -0x1                           ; 0056474d
    PUSH 0xff                           ; 0056474f
    MOV EBP,dword ptr [0x031141f4]      ; 00564754 | g_ScriptStatusBarY
    PUSH EBP                            ; 0056475a
    MOV EAX,[0x031141f8]                ; 0056475b | g_ScriptStatusBarRight
    PUSH EAX                            ; 00564760
    MOV EDX,dword ptr [0x03114200]      ; 00564761 | g_ScriptEditorFont
    PUSH EDX                            ; 00564767
    CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0 ; 00564768
        ;   XREF to: 004cdce0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 0056476d
    PUSH 0x310fdc0                      ; 00564770 | g_ScriptEditorStatusText
    PUSH -0x1                           ; 00564775
    PUSH 0xff                           ; 00564777
    MOV ECX,dword ptr [0x031141f4]      ; 0056477c | g_ScriptStatusBarY
    PUSH ECX                            ; 00564782
    MOV EBX,dword ptr [0x031141f0]      ; 00564783 | g_ScriptStatusBarX
    PUSH EBX                            ; 00564789
    MOV ESI,dword ptr [0x03114200]      ; 0056478a | g_ScriptEditorFont
    PUSH ESI                            ; 00564790
    CALL engine_font.cpp_CBitFont_drawTextWrapper_FUN_004cdbf0 ; 00564791
        ;   XREF to: 004cdbf0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextWrapper_FUN_004cdbf0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 00564796
    CALL engine_matrix.c_popViewport_FUN_0050e480 ; 00564799
        ;   XREF to: 0050e480 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_0050e480(CDemonRenderer * this_ptr)
    ADD ESP,0x1f4                       ; 0056479e
    POP EBP                             ; 005647a4
    POP EDI                             ; 005647a5
    POP ESI                             ; 005647a6
    POP EBX                             ; 005647a7
    RET                                 ; 005647a8
    PUSH EBX                            ; 005647a9
        ;   Label: LAB_005647a9
    PUSH ESI                            ; 005647aa
    CALL core_script.cpp_CScript_FUN_005664d0 ; 005647ab
        ;   XREF to: 005664d0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_005664d0(CScript * this_ptr, int param_2)
    INC EBX                             ; 005647b0
    ADD ESP,0x8                         ; 005647b1
    JMP 0x005646a3                      ; 005647b4
        ;   XREF to: 005646a3 (UNCONDITIONAL_JUMP)  ; LAB_005646a3
    MOV EAX,[0x03114204]                ; 005647b9 | g_ScriptEditorCharWidth
        ;   Label: LAB_005647b9
    ADD EAX,EBX                         ; 005647be
    DEC EAX                             ; 005647c0
    PUSH EAX                            ; 005647c1
    PUSH ESI                            ; 005647c2
    PUSH EBX                            ; 005647c3
    CALL engine_2d.c_drawHLine_FUN_00402ee0 ; 005647c4
        ;   XREF to: 00402ee0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
    JMP 0x00564722                      ; 005647c9
        ;   XREF to: 00564722 (UNCONDITIONAL_JUMP)  ; LAB_00564722

