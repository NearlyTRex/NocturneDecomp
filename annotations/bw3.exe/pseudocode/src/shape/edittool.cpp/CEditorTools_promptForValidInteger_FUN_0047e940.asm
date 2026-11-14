; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047e940(CEditorTools *this_ptr,char *prompt_text,int *result_ptr,int enable_range_check,int min_value,int max_value,int show_current_value)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; int *            Stack[0xc]:4   result_ptr
; int              Stack[0x10]:4   enable_range_check
; int              Stack[0x14]:4   min_value
; int              Stack[0x18]:4   max_value
; int              Stack[0x1c]:4   show_current_value
; Local Variables:
; undefined1       Stack[-0x34]:1  local_34
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004bb100 at 004bb977
;   core_game.cpp_setupMovieRecording_FUN_004b3d70 at 004b3dce
;
; Referenced Globals:
;   undefined1 DAT_005bcf91
;   undefined4 DAT_005bcf94
;   TerminatedCString s_Please_enter_a_valid_int_005bcf97
;   TerminatedCString s_Please_enter_a_valid_int_005bcfb5
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005a5b9c
;   crt_unknown.c_sprintf_FUN_005a28c0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047e940
        ;   Label: shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047e940
    PUSH ESI                            ; 0047e941
    PUSH EDI                            ; 0047e942
    PUSH EBP                            ; 0047e943
    SUB ESP,0x24                        ; 0047e944
    MOV EBX,dword ptr [ESP + 0x38]      ; 0047e947
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0047e94b
    MOV EDI,dword ptr [ESP + 0x48]      ; 0047e94f
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0047e953
    TEST byte ptr [ESP + 0x50],0x1      ; 0047e957
    JNZ 0x0047e982                      ; 0047e95c
        ;   XREF to: 0047e982 (CONDITIONAL_JUMP)  ; LAB_0047e982
    XOR DL,DL                           ; 0047e95e
    MOV byte ptr [ESP],DL               ; 0047e960
    PUSH 0x1                            ; 0047e963
        ;   Label: LAB_0047e963
    PUSH 0x1e                           ; 0047e965
    LEA EAX,[ESP + 0x8]                 ; 0047e967
    PUSH EAX                            ; 0047e96b
    PUSH EBP                            ; 0047e96c
    PUSH EBX                            ; 0047e96d
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0 ; 0047e96e
        ;   XREF to: 0047ecf0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0047e973
    TEST EAX,EAX                        ; 0047e976
    JNZ 0x0047e99d                      ; 0047e978
        ;   XREF to: 0047e99d (CONDITIONAL_JUMP)  ; LAB_0047e99d
    ADD ESP,0x24                        ; 0047e97a
    POP EBP                             ; 0047e97d
    POP EDI                             ; 0047e97e
    POP ESI                             ; 0047e97f
    POP EBX                             ; 0047e980
    RET                                 ; 0047e981
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047e982
        ;   Label: LAB_0047e982
    MOV EDX,dword ptr [EAX]             ; 0047e986
    PUSH EDX                            ; 0047e988
    PUSH 0x5bcf91                       ; 0047e989 | DAT_005bcf91
    LEA EAX,[ESP + 0x8]                 ; 0047e98e
    PUSH EAX                            ; 0047e992
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0047e993
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0047e998
    JMP 0x0047e963                      ; 0047e99b
        ;   XREF to: 0047e963 (UNCONDITIONAL_JUMP)  ; LAB_0047e963
    LEA EAX,[ESP + 0x20]                ; 0047e99d
        ;   Label: LAB_0047e99d
    PUSH EAX                            ; 0047e9a1
    PUSH 0x5bcf94                       ; 0047e9a2 | DAT_005bcf94
    LEA EAX,[ESP + 0x8]                 ; 0047e9a7
    PUSH EAX                            ; 0047e9ab
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0047e9ac
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 0047e9b1
    CMP EAX,0x1                         ; 0047e9b4
    JNZ 0x0047e9e3                      ; 0047e9b7
        ;   XREF to: 0047e9e3 (CONDITIONAL_JUMP)  ; LAB_0047e9e3
    CMP dword ptr [ESP + 0x44],0x0      ; 0047e9b9
    JZ 0x0047e9cc                       ; 0047e9be
        ;   XREF to: 0047e9cc (CONDITIONAL_JUMP)  ; LAB_0047e9cc
    MOV EAX,dword ptr [ESP + 0x20]      ; 0047e9c0
    CMP EDI,EAX                         ; 0047e9c4
    JG 0x0047e9f6                       ; 0047e9c6
        ;   XREF to: 0047e9f6 (CONDITIONAL_JUMP)  ; LAB_0047e9f6
    CMP ESI,EAX                         ; 0047e9c8
    JL 0x0047e9f6                       ; 0047e9ca
        ;   XREF to: 0047e9f6 (CONDITIONAL_JUMP)  ; LAB_0047e9f6
    MOV EBX,dword ptr [ESP + 0x40]      ; 0047e9cc
        ;   Label: LAB_0047e9cc
    MOV EAX,dword ptr [ESP + 0x20]      ; 0047e9d0
    MOV dword ptr [EBX],EAX             ; 0047e9d4
    MOV EAX,0x1                         ; 0047e9d6
    ADD ESP,0x24                        ; 0047e9db
    POP EBP                             ; 0047e9de
    POP EDI                             ; 0047e9df
    POP ESI                             ; 0047e9e0
    POP EBX                             ; 0047e9e1
    RET                                 ; 0047e9e2
    PUSH 0x5bcf97                       ; 0047e9e3 | = "Please enter a valid integer."
        ;   Label: LAB_0047e9e3
    PUSH EBX                            ; 0047e9e8
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 0047e9e9
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047e9ee
    JMP 0x0047e963                      ; 0047e9f1
        ;   XREF to: 0047e963 (UNCONDITIONAL_JUMP)  ; LAB_0047e963
    PUSH ESI                            ; 0047e9f6
        ;   Label: LAB_0047e9f6
    PUSH EDI                            ; 0047e9f7
    PUSH 0x5bcfb5                       ; 0047e9f8 | = "Please enter a valid integer between ..."
    PUSH EBX                            ; 0047e9fd
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 0047e9fe
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 0047ea03
    JMP 0x0047e963                      ; 0047ea06
        ;   XREF to: 0047e963 (UNCONDITIONAL_JUMP)  ; LAB_0047e963

