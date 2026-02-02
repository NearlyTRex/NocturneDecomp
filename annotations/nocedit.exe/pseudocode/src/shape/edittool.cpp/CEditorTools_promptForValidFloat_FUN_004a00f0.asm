; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 (CEditorTools *this_ptr,char *prompt_text,float *result_ptr,int enable_range_check, float min_value,float max_value,int show_current_value)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; float *          Stack[0xc]:4   result_ptr
; int              Stack[0x10]:4   enable_range_check
; float            Stack[0x14]:4   min_value
; float            Stack[0x18]:4   max_value
; int              Stack[0x1c]:4   show_current_value
; Local Variables:
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined1       Stack[-0x38]:1  local_38
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[15]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040efc4
;   core_boxactor.cpp_CLightActor_propertyActionFOVCallback_FUN_00423440 at 004234ac
;   core_cloth.cpp_FUN_0043ddf0 at 0043dffc
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 0044346c
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047dcfa
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004de364
;   core_game.cpp_PleaseEnterValidInteger_FUN_004d7730 at 004d7761
;   core_msnedit.cpp_CDemonMission_FUN_005379e0 at 00537b4a
;   core_msnedit.cpp_FUN_00536e20 at 00537027
;   core_script.cpp_editParameterValue_FUN_00562920 at 00562a1e
;   ... and 5 more
;
; Referenced Globals:
;   TerminatedCString s_g_00623205
;   TerminatedCString s_f_00623208
;   TerminatedCString s_Please_enter_a_valid_num_0062320b
;   TerminatedCString s_Please_enter_a_valid_int_00623228
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdio.c_sscanf_FUN_0060013c
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a00f0
        ;   Label: shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
    PUSH ESI                            ; 004a00f1
    PUSH EDI                            ; 004a00f2
    PUSH EBP                            ; 004a00f3
    MOV EBP,ESP                         ; 004a00f4
    SUB ESP,0x2c                        ; 004a00f6
    AND ESP,0xfffffff8                  ; 004a00f9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a00fc
    MOV EAX,dword ptr [EBP + 0x24]      ; 004a00ff
    MOV ESI,dword ptr [EBP + 0x18]      ; 004a0102
    MOV dword ptr [ESP],EAX             ; 004a0105
    MOV EAX,dword ptr [EBP + 0x28]      ; 004a0108
    MOV EDI,dword ptr [EBP + 0x20]      ; 004a010b
    MOV dword ptr [ESP + 0x4],EAX       ; 004a010e
    TEST byte ptr [EBP + 0x2c],0x1      ; 004a0112
    JNZ 0x004a013c                      ; 004a0116
        ;   XREF to: 004a013c (CONDITIONAL_JUMP)  ; LAB_004a013c
    XOR DL,DL                           ; 004a0118
    MOV byte ptr [ESP + 0x8],DL         ; 004a011a
    PUSH 0x1                            ; 004a011e
        ;   Label: LAB_004a011e
    PUSH 0x1e                           ; 004a0120
    LEA EAX,[ESP + 0x10]                ; 004a0122
    PUSH EAX                            ; 004a0126
    PUSH ESI                            ; 004a0127
    PUSH EBX                            ; 004a0128
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 004a0129
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004a012e
    TEST EAX,EAX                        ; 004a0131
    JNZ 0x004a015b                      ; 004a0133
        ;   XREF to: 004a015b (CONDITIONAL_JUMP)  ; LAB_004a015b
    MOV ESP,EBP                         ; 004a0135
    POP EBP                             ; 004a0137
    POP EDI                             ; 004a0138
    POP ESI                             ; 004a0139
    POP EBX                             ; 004a013a
    RET                                 ; 004a013b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004a013c
        ;   Label: LAB_004a013c
    SUB ESP,0x8                         ; 004a013f
    FLD float ptr [EAX]                 ; 004a0142
    FSTP double ptr [ESP]               ; 004a0144
    PUSH 0x623205                       ; 004a0147 | = "%g"
    LEA EAX,[ESP + 0x14]                ; 004a014c
    PUSH EAX                            ; 004a0150
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004a0151
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a0156
    JMP 0x004a011e                      ; 004a0159
        ;   XREF to: 004a011e (UNCONDITIONAL_JUMP)  ; LAB_004a011e
    LEA EAX,[ESP + 0x28]                ; 004a015b
        ;   Label: LAB_004a015b
    PUSH EAX                            ; 004a015f
    PUSH 0x623208                       ; 004a0160 | = "%f"
    LEA EAX,[ESP + 0x10]                ; 004a0165
    PUSH EAX                            ; 004a0169
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004a016a
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 004a016f
    CMP EAX,0x1                         ; 004a0172
    JNZ 0x004a01a9                      ; 004a0175
        ;   XREF to: 004a01a9 (CONDITIONAL_JUMP)  ; LAB_004a01a9
    TEST EDI,EDI                        ; 004a0177
    JZ 0x004a0194                       ; 004a0179
        ;   XREF to: 004a0194 (CONDITIONAL_JUMP)  ; LAB_004a0194
    FLD float ptr [ESP + 0x28]          ; 004a017b
    FCOMP float ptr [ESP]               ; 004a017f
    FNSTSW AX                           ; 004a0182
    SAHF                                ; 004a0184
    JC 0x004a01bc                       ; 004a0185
        ;   XREF to: 004a01bc (CONDITIONAL_JUMP)  ; LAB_004a01bc
    FLD float ptr [ESP + 0x28]          ; 004a0187
    FCOMP float ptr [ESP + 0x4]         ; 004a018b
    FNSTSW AX                           ; 004a018f
    SAHF                                ; 004a0191
    JA 0x004a01bc                       ; 004a0192
        ;   XREF to: 004a01bc (CONDITIONAL_JUMP)  ; LAB_004a01bc
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004a0194
        ;   Label: LAB_004a0194
    MOV EAX,dword ptr [ESP + 0x28]      ; 004a0197
    MOV dword ptr [EBX],EAX             ; 004a019b
    MOV EAX,0x1                         ; 004a019d
    MOV ESP,EBP                         ; 004a01a2
    POP EBP                             ; 004a01a4
    POP EDI                             ; 004a01a5
    POP ESI                             ; 004a01a6
    POP EBX                             ; 004a01a7
    RET                                 ; 004a01a8
    PUSH 0x62320b                       ; 004a01a9 | = "Please enter a valid number."
        ;   Label: LAB_004a01a9
    PUSH EBX                            ; 004a01ae
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004a01af
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004a01b4
    JMP 0x004a011e                      ; 004a01b7
        ;   XREF to: 004a011e (UNCONDITIONAL_JUMP)  ; LAB_004a011e
    FLD float ptr [ESP + 0x4]           ; 004a01bc
        ;   Label: LAB_004a01bc
    SUB ESP,0x8                         ; 004a01c0
    FSTP double ptr [ESP]               ; 004a01c3
    FLD float ptr [ESP + 0x8]           ; 004a01c6
    SUB ESP,0x8                         ; 004a01ca
    FSTP double ptr [ESP]               ; 004a01cd
    PUSH 0x623228                       ; 004a01d0 | = "Please enter a valid integer between ..."
    PUSH EBX                            ; 004a01d5
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004a01d6
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x18                        ; 004a01db
    JMP 0x004a011e                      ; 004a01de
        ;   XREF to: 004a011e (UNCONDITIONAL_JUMP)  ; LAB_004a011e

