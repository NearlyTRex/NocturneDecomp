; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_script_cpp_CCmdParse_bestParse_FUN_00561db0 (CCmdParse *this_ptr,char *input_text,int cursor_position,char **templates, int template_count)
;
; Parameters:
; CCmdParse *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   input_text
; int              Stack[0xc]:4   cursor_position
; char * *         Stack[0x10]:4   templates
; int              Stack[0x14]:4   template_count
; Local Variables:
; CPickList        Stack[-0x464]:936  local_464
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_script.cpp_CScript_FUN_00565d00 at 00565d4c
;   core_script.cpp_CScript_FUN_00565e70 at 00565f27
;   core_script.cpp_CScript_FUN_00565f70 at 00565fcf
;   core_script.cpp_parseCommandWithTemplates_FUN_00561690 at 005616cd
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_00643b09
;   TerminatedCString s_SCmdParse_bestParse_too__00643b1c
;   TerminatedCString s_Choose_command_form_00643b45
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_script.cpp_CCmdParse_getParamIndexAtCursor_FUN_00562620
;   core_script.cpp_CCmdParse_parse_FUN_00561fd0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561db0
        ;   Label: core_script.cpp_CCmdParse_bestParse_FUN_00561db0
    PUSH ESI                            ; 00561db1
    PUSH EDI                            ; 00561db2
    PUSH EBP                            ; 00561db3
    SUB ESP,0x454                       ; 00561db4
    MOV EDX,0x2                         ; 00561dba
    MOV ESI,dword ptr [ESP + 0x478]     ; 00561dbf
    XOR EBX,EBX                         ; 00561dc6
    XOR EDI,EDI                         ; 00561dc8
    MOV dword ptr [ESP + 0x450],EDX     ; 00561dca
    MOV dword ptr [ESP + 0x44c],EBX     ; 00561dd1
    TEST ESI,ESI                        ; 00561dd8
    JLE 0x00561e1f                      ; 00561dda
        ;   XREF to: 00561e1f (CONDITIONAL_JUMP)  ; LAB_00561e1f
    MOV EBP,dword ptr [ESP + 0x474]     ; 00561ddc
    MOV ECX,dword ptr [EBP]             ; 00561de3
        ;   Label: LAB_00561de3
    PUSH ECX                            ; 00561de6
    MOV ESI,dword ptr [ESP + 0x470]     ; 00561de7
    PUSH ESI                            ; 00561dee
    MOV EAX,dword ptr [ESP + 0x470]     ; 00561def
    PUSH EAX                            ; 00561df6
    CALL core_script.cpp_CCmdParse_parse_FUN_00561fd0 ; 00561df7
        ;   XREF to: 00561fd0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CCmdParse_parse_FUN_00561fd0(CCmdParse * this_ptr, char * input_text, char * template_text)
    ADD ESP,0xc                         ; 00561dfc
    MOV EDX,dword ptr [ESP + 0x450]     ; 00561dff
    MOV ESI,EAX                         ; 00561e06
    CMP EAX,EDX                         ; 00561e08
    JGE 0x00561efd                      ; 00561e0a
        ;   XREF to: 00561efd (CONDITIONAL_JUMP)  ; LAB_00561efd
    MOV EAX,dword ptr [ESP + 0x478]     ; 00561e10
        ;   Label: LAB_00561e10
    INC EDI                             ; 00561e17
    ADD EBP,0x4                         ; 00561e18
    CMP EDI,EAX                         ; 00561e1b
    JL 0x00561de3                       ; 00561e1d
        ;   XREF to: 00561de3 (CONDITIONAL_JUMP)  ; LAB_00561de3
    CMP EBX,0x1                         ; 00561e1f
        ;   Label: LAB_00561e1f
    JL 0x00561f98                       ; 00561e22
        ;   XREF to: 00561f98 (CONDITIONAL_JUMP)  ; LAB_00561f98
    MOV EDX,dword ptr [ESP + 0x44c]     ; 00561e28
    XOR ESI,ESI                         ; 00561e2f
    TEST EDX,EDX                        ; 00561e31
    JZ 0x00561eaf                       ; 00561e33
        ;   XREF to: 00561eaf (CONDITIONAL_JUMP)  ; LAB_00561eaf
    MOV EAX,ESP                         ; 00561e39
    PUSH EAX                            ; 00561e3b
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00561e3c
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00561e41
    TEST EBX,EBX                        ; 00561e44
    JLE 0x00561e80                      ; 00561e46
        ;   XREF to: 00561e80 (CONDITIONAL_JUMP)  ; LAB_00561e80
    MOV EDI,dword ptr [ESP + 0x474]     ; 00561e48
    SHL EBX,0x2                         ; 00561e4f
    MOV EAX,dword ptr [ESP + ESI*0x1 + 0x3a8] ; 00561e52
        ;   Label: LAB_00561e52
    SHL EAX,0x2                         ; 00561e59
    ADD EAX,EDI                         ; 00561e5c
    MOV EBP,dword ptr [EAX]             ; 00561e5e
    PUSH EBP                            ; 00561e60
    LEA EAX,[ESP + 0x4]                 ; 00561e61
    PUSH EAX                            ; 00561e65
    ADD ESI,0x4                         ; 00561e66
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00561e69
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00561e6e
    CMP ESI,EBX                         ; 00561e71
    JL 0x00561e52                       ; 00561e73
        ;   XREF to: 00561e52 (CONDITIONAL_JUMP)  ; LAB_00561e52
    LEA EAX,[EAX]                       ; 00561e75
    LEA EDX,[EDX]                       ; 00561e7b
    MOV EBX,EBX                         ; 00561e7e
    PUSH 0x0                            ; 00561e80
        ;   Label: LAB_00561e80
    PUSH -0x1                           ; 00561e82
    PUSH 0x643b45                       ; 00561e84 | = "Choose command form"
    LEA EAX,[ESP + 0xc]                 ; 00561e89
    PUSH EAX                            ; 00561e8d
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00561e8e
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 00561e93
    MOV ESI,EAX                         ; 00561e96
    TEST EAX,EAX                        ; 00561e98
    JL 0x00561faa                       ; 00561e9a
        ;   XREF to: 00561faa (CONDITIONAL_JUMP)  ; LAB_00561faa
    PUSH 0x0                            ; 00561ea0
    LEA EAX,[ESP + 0x4]                 ; 00561ea2
    PUSH EAX                            ; 00561ea6
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00561ea7
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00561eac
    MOV EAX,dword ptr [ESP + ESI*0x4 + 0x3a8] ; 00561eaf
        ;   Label: LAB_00561eaf
    MOV EDX,dword ptr [ESP + 0x474]     ; 00561eb6
    SHL EAX,0x2                         ; 00561ebd
    ADD EAX,EDX                         ; 00561ec0
    MOV ECX,dword ptr [EAX]             ; 00561ec2
    PUSH ECX                            ; 00561ec4
    MOV EBX,dword ptr [ESP + 0x470]     ; 00561ec5
    PUSH EBX                            ; 00561ecc
    MOV ESI,dword ptr [ESP + 0x470]     ; 00561ecd
    PUSH ESI                            ; 00561ed4
    CALL core_script.cpp_CCmdParse_parse_FUN_00561fd0 ; 00561ed5
        ;   XREF to: 00561fd0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CCmdParse_parse_FUN_00561fd0(CCmdParse * this_ptr, char * input_text, char * template_text)
    ADD ESP,0xc                         ; 00561eda
    MOV EDI,dword ptr [ESP + 0x470]     ; 00561edd
    PUSH EDI                            ; 00561ee4
    PUSH ESI                            ; 00561ee5
    CALL core_script.cpp_CCmdParse_getParamIndexAtCursor_FUN_00562620 ; 00561ee6
        ;   XREF to: 00562620 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CCmdParse_getParamIndexAtCursor_FUN_00562620(CCmdParse * this_ptr, int cursor_position)
    ADD ESP,0x8                         ; 00561eeb
    MOV ESI,EAX                         ; 00561eee
    MOV EAX,ESI                         ; 00561ef0
    ADD ESP,0x454                       ; 00561ef2
    POP EBP                             ; 00561ef8
    POP EDI                             ; 00561ef9
    POP ESI                             ; 00561efa
    POP EBX                             ; 00561efb
    RET                                 ; 00561efc
    MOV ECX,dword ptr [ESP + 0x470]     ; 00561efd
        ;   Label: LAB_00561efd
    PUSH ECX                            ; 00561f04
    MOV EAX,dword ptr [ESP + 0x46c]     ; 00561f05
    PUSH EAX                            ; 00561f0c
    CALL core_script.cpp_CCmdParse_getParamIndexAtCursor_FUN_00562620 ; 00561f0d
        ;   XREF to: 00562620 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CCmdParse_getParamIndexAtCursor_FUN_00562620(CCmdParse * this_ptr, int cursor_position)
    ADD ESP,0x8                         ; 00561f12
    MOV dword ptr [ESP + 0x448],EAX     ; 00561f15
    TEST EAX,EAX                        ; 00561f1c
    JL 0x00561e10                       ; 00561f1e
        ;   XREF to: 00561e10 (CONDITIONAL_JUMP)  ; LAB_00561e10
    CMP ESI,dword ptr [ESP + 0x450]     ; 00561f24
    JLE 0x00561f6e                      ; 00561f2b
        ;   XREF to: 00561f6e (CONDITIONAL_JUMP)  ; LAB_00561f6e
    XOR EBX,EBX                         ; 00561f2d
    MOV dword ptr [ESP + 0x450],ESI     ; 00561f2f
    MOV dword ptr [ESP + 0x44c],EBX     ; 00561f36
    MOV ESI,dword ptr [ESP + 0x448]     ; 00561f3d
        ;   Label: LAB_00561f3d
    MOV dword ptr [ESP + EBX*0x4 + 0x3f8],ESI ; 00561f44
    MOV EDX,dword ptr [ESP + 0x3f8]     ; 00561f4b
    MOV dword ptr [ESP + EBX*0x4 + 0x3a8],EDI ; 00561f52
    CMP ESI,EDX                         ; 00561f59
    JZ 0x00561f68                       ; 00561f5b
        ;   XREF to: 00561f68 (CONDITIONAL_JUMP)  ; LAB_00561f68
    MOV dword ptr [ESP + 0x44c],0x1     ; 00561f5d
    INC EBX                             ; 00561f68
        ;   Label: LAB_00561f68
    JMP 0x00561e10                      ; 00561f69
        ;   XREF to: 00561e10 (UNCONDITIONAL_JUMP)  ; LAB_00561e10
    CMP EBX,0x14                        ; 00561f6e
        ;   Label: LAB_00561f6e
    JL 0x00561f3d                       ; 00561f71
        ;   XREF to: 00561f3d (CONDITIONAL_JUMP)  ; LAB_00561f3d
    MOV ECX,0x643b09                    ; 00561f73 | = "..\\core\\script.cpp"
    MOV ESI,0x1289                      ; 00561f78
    PUSH 0x643b1c                       ; 00561f7d | = "SCmdParse::bestParse - too many matches!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00561f82 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00561f88 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00561f8e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00561f93
    JMP 0x00561f3d                      ; 00561f96
        ;   XREF to: 00561f3d (UNCONDITIONAL_JUMP)  ; LAB_00561f3d
    MOV ESI,0xffffffff                  ; 00561f98
        ;   Label: LAB_00561f98
    MOV EAX,ESI                         ; 00561f9d
    ADD ESP,0x454                       ; 00561f9f
    POP EBP                             ; 00561fa5
    POP EDI                             ; 00561fa6
    POP ESI                             ; 00561fa7
    POP EBX                             ; 00561fa8
    RET                                 ; 00561fa9
    PUSH 0x0                            ; 00561faa
        ;   Label: LAB_00561faa
    LEA EAX,[ESP + 0x4]                 ; 00561fac
    PUSH EAX                            ; 00561fb0
    MOV ESI,0xffffffff                  ; 00561fb1
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00561fb6
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00561fbb
    MOV EAX,ESI                         ; 00561fbe
    ADD ESP,0x454                       ; 00561fc0
    POP EBP                             ; 00561fc6
    POP EDI                             ; 00561fc7
    POP ESI                             ; 00561fc8
    POP EBX                             ; 00561fc9
    RET                                 ; 00561fca

