; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl bool shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, bool enable_range_check, int min_value, int max_value, bool show_current_value)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; int *            Stack[0xc]:4   result_ptr
; bool             Stack[0x10]:1   enable_range_check
; int              Stack[0x14]:4   min_value
; int              Stack[0x18]:4   max_value
; bool             Stack[0x1c]:1   show_current_value
; Local Variables:
; undefined1       Stack[-0x34]:1  local_34
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047db95
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004de38e
;   core_game.cpp_PleaseEnterValidInteger_FUN_004d7730 at 004d778e
;   core_script.cpp_CScript_Unk20_FUN_00565130 at 00565442
;   core_script.cpp_FUN_00562920 at 005629a6
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 0059820d
;   core_skeledit.cpp_FUN_0058c190 at 0058cb1a
;   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 at 0051e148
;
; Referenced Globals:
;   TerminatedCString s_d_006231b1
;   TerminatedCString s_d_006231b4
;   TerminatedCString s_Please_enter_a_valid_int_006231b7
;   TerminatedCString s_Please_enter_a_valid_int_006231d5
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdio.c_sscanf_FUN_0060013c
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0020
        ;   Label: shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
    PUSH ESI                            ; 004a0021
    PUSH EDI                            ; 004a0022
    PUSH EBP                            ; 004a0023
    SUB ESP,0x24                        ; 004a0024
    MOV EBX,dword ptr [ESP + 0x38]      ; 004a0027
    MOV EBP,dword ptr [ESP + 0x3c]      ; 004a002b
    MOV EDI,dword ptr [ESP + 0x48]      ; 004a002f
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004a0033
    TEST byte ptr [ESP + 0x50],0x1      ; 004a0037
    JNZ 0x004a0062                      ; 004a003c | LAB_004a0062
        ;   XREF to: 004a0062 (CONDITIONAL_JUMP)
    XOR DL,DL                           ; 004a003e
    MOV byte ptr [ESP],DL               ; 004a0040
    PUSH 0x1                            ; 004a0043
        ;   Label: LAB_004a0043
    PUSH 0x1e                           ; 004a0045
    LEA EAX,[ESP + 0x8]                 ; 004a0047
    PUSH EAX                            ; 004a004b
    PUSH EBP                            ; 004a004c
    PUSH EBX                            ; 004a004d
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 004a004e | int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004a0053
    TEST EAX,EAX                        ; 004a0056
    JNZ 0x004a007d                      ; 004a0058 | LAB_004a007d
        ;   XREF to: 004a007d (CONDITIONAL_JUMP)
    ADD ESP,0x24                        ; 004a005a
    POP EBP                             ; 004a005d
    POP EDI                             ; 004a005e
    POP ESI                             ; 004a005f
    POP EBX                             ; 004a0060
    RET                                 ; 004a0061
    MOV EAX,dword ptr [ESP + 0x40]      ; 004a0062
        ;   Label: LAB_004a0062
    MOV EDX,dword ptr [EAX]             ; 004a0066
    PUSH EDX                            ; 004a0068
    PUSH 0x6231b1                       ; 004a0069 | = "%d" | s_d_006231b1 = %d
    LEA EAX,[ESP + 0x8]                 ; 004a006e
    PUSH EAX                            ; 004a0072
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004a0073 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004a0078
    JMP 0x004a0043                      ; 004a007b | LAB_004a0043
        ;   XREF to: 004a0043 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x20]                ; 004a007d
        ;   Label: LAB_004a007d
    PUSH EAX                            ; 004a0081
    PUSH 0x6231b4                       ; 004a0082 | = "%d" | s_d_006231b4 = %d
    LEA EAX,[ESP + 0x8]                 ; 004a0087
    PUSH EAX                            ; 004a008b
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004a008c | int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004a0091
    CMP EAX,0x1                         ; 004a0094
    JNZ 0x004a00c3                      ; 004a0097 | LAB_004a00c3
        ;   XREF to: 004a00c3 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x44],0x0      ; 004a0099
    JZ 0x004a00ac                       ; 004a009e | LAB_004a00ac
        ;   XREF to: 004a00ac (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a00a0
    CMP EDI,EAX                         ; 004a00a4
    JG 0x004a00d6                       ; 004a00a6 | LAB_004a00d6
        ;   XREF to: 004a00d6 (CONDITIONAL_JUMP)
    CMP ESI,EAX                         ; 004a00a8
    JL 0x004a00d6                       ; 004a00aa | LAB_004a00d6
        ;   XREF to: 004a00d6 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x40]      ; 004a00ac
        ;   Label: LAB_004a00ac
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a00b0
    MOV dword ptr [EBX],EAX             ; 004a00b4
    MOV EAX,0x1                         ; 004a00b6
    ADD ESP,0x24                        ; 004a00bb
    POP EBP                             ; 004a00be
    POP EDI                             ; 004a00bf
    POP ESI                             ; 004a00c0
    POP EBX                             ; 004a00c1
    RET                                 ; 004a00c2
    PUSH 0x6231b7                       ; 004a00c3 | = "Please enter a valid integer." | s_Please_enter_a_valid_int_006231b7 = Please enter a valid integer.
        ;   Label: LAB_004a00c3
    PUSH EBX                            ; 004a00c8
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004a00c9 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a00ce
    JMP 0x004a0043                      ; 004a00d1 | LAB_004a0043
        ;   XREF to: 004a0043 (UNCONDITIONAL_JUMP)
    PUSH ESI                            ; 004a00d6
        ;   Label: LAB_004a00d6
    PUSH EDI                            ; 004a00d7
    PUSH 0x6231d5                       ; 004a00d8 | = "Please enter a valid integer between ..." | s_Please_enter_a_valid_int_006231d5 = Please enter a valid integer between %d and %d.
    PUSH EBX                            ; 004a00dd
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004a00de | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004a00e3
    JMP 0x004a0043                      ; 004a00e6 | LAB_004a0043
        ;   XREF to: 004a0043 (UNCONDITIONAL_JUMP)

