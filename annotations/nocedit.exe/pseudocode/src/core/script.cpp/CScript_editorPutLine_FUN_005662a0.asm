; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_CScript_editorPutLine_FUN_005662a0(CScript *this_ptr,int line_number)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   line_number
;
; XREF[6]:
;   core_script.cpp_CScript_FUN_00565130 at 00565a04
;   core_script.cpp_CScript_FUN_00565f70 at 00566023
;   core_script.cpp_CScript_editParameterAtPosition_FUN_00565ae0 at 00565c01
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 00565007
;   core_script.cpp_CScript_insertText_FUN_00566390 at 0056645d
;   core_script.cpp_CScript_splitLineAtColumn_FUN_00566330 at 00566381
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_00643f95
;   TerminatedCString s_CScript_editorPutLine_in_00643fa8
;   char s_EmpyChar_00643fd5 = \x00
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 g_CurrentLineBuffer
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_script.cpp_CScript_updateLineMetrics_FUN_00566800
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0
;   shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120
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
    JL 0x005662ef                       ; 005662ad
        ;   XREF to: 005662ef (CONDITIONAL_JUMP)  ; LAB_005662ef
    LEA EAX,[EDI + 0x38]                ; 005662af
    PUSH EAX                            ; 005662b2
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 005662b3
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD EAX,0xa                         ; 005662b8
    ADD ESP,0x4                         ; 005662bb
    CMP ESI,EAX                         ; 005662be
    JGE 0x005662ef                      ; 005662c0
        ;   XREF to: 005662ef (CONDITIONAL_JUMP)  ; LAB_005662ef
    LEA EBX,[EDI + 0x38]                ; 005662c2
        ;   Label: LAB_005662c2
    PUSH EBX                            ; 005662c5
        ;   Label: LAB_005662c5
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 005662c6
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 005662cb
    CMP ESI,EAX                         ; 005662ce
    JGE 0x00566314                      ; 005662d0
        ;   XREF to: 00566314 (CONDITIONAL_JUMP)  ; LAB_00566314
    PUSH 0x31101c0                      ; 005662d2 | g_CurrentLineBuffer
    PUSH ESI                            ; 005662d7
    PUSH EBX                            ; 005662d8
    CALL shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120 ; 005662d9
        ;   XREF to: 004a3120 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120(CStrList * this_ptr, int index, char * new_string)
    ADD ESP,0xc                         ; 005662de
    PUSH ESI                            ; 005662e1
    PUSH EDI                            ; 005662e2
    CALL core_script.cpp_CScript_updateLineMetrics_FUN_00566800 ; 005662e3
        ;   XREF to: 00566800 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_updateLineMetrics_FUN_00566800(CScript * this_ptr, int line_number)
    ADD ESP,0x8                         ; 005662e8
    POP EDI                             ; 005662eb
    POP ESI                             ; 005662ec
    POP EBX                             ; 005662ed
    RET                                 ; 005662ee
    MOV EDX,0x643f95                    ; 005662ef | = "..\\core\\script.cpp"
        ;   Label: LAB_005662ef
    MOV ECX,0x1a83                      ; 005662f4
    PUSH 0x643fa8                       ; 005662f9 | = "CScript::editorPutLine - invalid line..."
    MOV dword ptr [0x02f0ca48],EDX      ; 005662fe | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00566304 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0056630a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0056630f
    JMP 0x005662c2                      ; 00566312
        ;   XREF to: 005662c2 (UNCONDITIONAL_JUMP)  ; LAB_005662c2
    PUSH 0x643fd5                       ; 00566314 | s_EmpyChar_00643fd5
        ;   Label: LAB_00566314
    PUSH EBX                            ; 00566319
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0056631a
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0056631f
    JMP 0x005662c5                      ; 00566322
        ;   XREF to: 005662c5 (UNCONDITIONAL_JUMP)  ; LAB_005662c5

