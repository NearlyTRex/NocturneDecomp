; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_CScript_editorPutLine_FUN_005662a0()
;
;
; XREF[6]:
;   core_script.cpp_CScript_Unk20_FUN_00565130 at 00565a04
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 00565007
;   core_script.cpp_CScript_insertAndEditorPutLine_FUN_00566330 at 00566381
;   core_script.cpp_FUN_00565ae0 at 00565c01
;   core_script.cpp_FUN_00565f70 at 00566023
;   core_script.cpp_FUN_00566390 at 0056645d
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_00643f95
;   TerminatedCString s_CScript_editorPutLine_in_00643fa8
;   undefined4 DAT_00643fd5
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined1 DAT_031101c0
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_script.cpp_FUN_00566800
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120
;   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005662a0
        ;   Label: core_script.cpp_CScript_editorPutLine_FUN_005662a0
    PUSH ESI                            ; 005662a1
    PUSH EDI                            ; 005662a2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005662a3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005662a7
    TEST ESI,ESI                        ; 005662ab
    JL 0x005662ef                       ; 005662ad | LAB_005662ef
        ;   XREF to: 005662ef (CONDITIONAL_JUMP)
    LEA EAX,[EDI + 0x38]                ; 005662af
    PUSH EAX                            ; 005662b2
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 005662b3 | int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
    ADD EAX,0xa                         ; 005662b8
    ADD ESP,0x4                         ; 005662bb
    CMP ESI,EAX                         ; 005662be
    JGE 0x005662ef                      ; 005662c0 | LAB_005662ef
        ;   XREF to: 005662ef (CONDITIONAL_JUMP)
    LEA EBX,[EDI + 0x38]                ; 005662c2
        ;   Label: LAB_005662c2
    PUSH EBX                            ; 005662c5
        ;   Label: LAB_005662c5
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 005662c6 | int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005662cb
    CMP ESI,EAX                         ; 005662ce
    JGE 0x00566314                      ; 005662d0 | LAB_00566314
        ;   XREF to: 00566314 (CONDITIONAL_JUMP)
    PUSH 0x31101c0                      ; 005662d2 | undefined1 DAT_031101c0
    PUSH ESI                            ; 005662d7
    PUSH EBX                            ; 005662d8
    CALL shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120 ; 005662d9 | void shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120(CStrList * this_ptr, int index, char * new_string)
        ;   XREF to: 004a3120 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005662de
    PUSH ESI                            ; 005662e1
    PUSH EDI                            ; 005662e2
    CALL core_script.cpp_FUN_00566800   ; 005662e3 | undefined core_script.cpp_FUN_00566800()
        ;   XREF to: 00566800 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005662e8
    POP EDI                             ; 005662eb
    POP ESI                             ; 005662ec
    POP EBX                             ; 005662ed
    RET                                 ; 005662ee
    MOV EDX,0x643f95                    ; 005662ef | = "..\\core\\script.cpp" | s_core_script_cpp_00643f95 = ..\core\script.cpp
        ;   Label: LAB_005662ef
    MOV ECX,0x1a83                      ; 005662f4
    PUSH 0x643fa8                       ; 005662f9 | = "CScript::editorPutLine - invalid line..." | s_CScript_editorPutLine_in_00643fa8 = CScript::editorPutLine - invalid line number
    MOV dword ptr [0x02f0ca48],EDX      ; 005662fe | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00566304 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0056630a | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056630f
    JMP 0x005662c2                      ; 00566312 | LAB_005662c2
        ;   XREF to: 005662c2 (UNCONDITIONAL_JUMP)
    PUSH 0x643fd5                       ; 00566314 | DAT_00643fd5
        ;   Label: LAB_00566314
    PUSH EBX                            ; 00566319
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0056631a | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056631f
    JMP 0x005662c5                      ; 00566322 | LAB_005662c5
        ;   XREF to: 005662c5 (UNCONDITIONAL_JUMP)

