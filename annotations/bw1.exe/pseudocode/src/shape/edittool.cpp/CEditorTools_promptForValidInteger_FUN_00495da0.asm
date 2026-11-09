; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00495da0(CEditorTools *this_ptr,char *prompt_text,int *result_ptr,int enable_range_check,int min_value,int max_value,int show_current_value)
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
;   core_game.cpp_FUN_004d27b0 at 004d304f
;   core_game.cpp_setupMovieRecording_FUN_004cb870 at 004cb8ce
;
; Referenced Globals:
;   undefined1 DAT_005dbed4
;   undefined4 DAT_005dbed7
;   TerminatedCString s_Please_enter_a_valid_int_005dbeda
;   TerminatedCString s_Please_enter_a_valid_int_005dbef8
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005c2cac
;   crt_unknown.c_FUN_005bfb40
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150
;   shape_edittool.cpp_FUN_004943a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495da0
        ;   Label: shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00495da0
    PUSH ESI                            ; 00495da1
    PUSH EDI                            ; 00495da2
    PUSH EBP                            ; 00495da3
    SUB ESP,0x24                        ; 00495da4
    MOV EBX,dword ptr [ESP + 0x38]      ; 00495da7
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00495dab
    MOV EDI,dword ptr [ESP + 0x48]      ; 00495daf
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00495db3
    TEST byte ptr [ESP + 0x50],0x1      ; 00495db7
    JNZ 0x00495de2                      ; 00495dbc
        ;   XREF to: 00495de2 (CONDITIONAL_JUMP)  ; LAB_00495de2
    XOR DL,DL                           ; 00495dbe
    MOV byte ptr [ESP],DL               ; 00495dc0
    PUSH 0x1                            ; 00495dc3
        ;   Label: LAB_00495dc3
    PUSH 0x1e                           ; 00495dc5
    LEA EAX,[ESP + 0x8]                 ; 00495dc7
    PUSH EAX                            ; 00495dcb
    PUSH EBP                            ; 00495dcc
    PUSH EBX                            ; 00495dcd
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150 ; 00495dce
        ;   XREF to: 00496150 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 00495dd3
    TEST EAX,EAX                        ; 00495dd6
    JNZ 0x00495dfd                      ; 00495dd8
        ;   XREF to: 00495dfd (CONDITIONAL_JUMP)  ; LAB_00495dfd
    ADD ESP,0x24                        ; 00495dda
    POP EBP                             ; 00495ddd
    POP EDI                             ; 00495dde
    POP ESI                             ; 00495ddf
    POP EBX                             ; 00495de0
    RET                                 ; 00495de1
    MOV EAX,dword ptr [ESP + 0x40]      ; 00495de2
        ;   Label: LAB_00495de2
    MOV EDX,dword ptr [EAX]             ; 00495de6
    PUSH EDX                            ; 00495de8
    PUSH 0x5dbed4                       ; 00495de9 | DAT_005dbed4
    LEA EAX,[ESP + 0x8]                 ; 00495dee
    PUSH EAX                            ; 00495df2
    CALL crt_unknown.c_FUN_005bfb40     ; 00495df3
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 00495df8
    JMP 0x00495dc3                      ; 00495dfb
        ;   XREF to: 00495dc3 (UNCONDITIONAL_JUMP)  ; LAB_00495dc3
    LEA EAX,[ESP + 0x20]                ; 00495dfd
        ;   Label: LAB_00495dfd
    PUSH EAX                            ; 00495e01
    PUSH 0x5dbed7                       ; 00495e02 | DAT_005dbed7
    LEA EAX,[ESP + 0x8]                 ; 00495e07
    PUSH EAX                            ; 00495e0b
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00495e0c
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 00495e11
    CMP EAX,0x1                         ; 00495e14
    JNZ 0x00495e43                      ; 00495e17
        ;   XREF to: 00495e43 (CONDITIONAL_JUMP)  ; LAB_00495e43
    CMP dword ptr [ESP + 0x44],0x0      ; 00495e19
    JZ 0x00495e2c                       ; 00495e1e
        ;   XREF to: 00495e2c (CONDITIONAL_JUMP)  ; LAB_00495e2c
    MOV EAX,dword ptr [ESP + 0x20]      ; 00495e20
    CMP EDI,EAX                         ; 00495e24
    JG 0x00495e56                       ; 00495e26
        ;   XREF to: 00495e56 (CONDITIONAL_JUMP)  ; LAB_00495e56
    CMP ESI,EAX                         ; 00495e28
    JL 0x00495e56                       ; 00495e2a
        ;   XREF to: 00495e56 (CONDITIONAL_JUMP)  ; LAB_00495e56
    MOV EBX,dword ptr [ESP + 0x40]      ; 00495e2c
        ;   Label: LAB_00495e2c
    MOV EAX,dword ptr [ESP + 0x20]      ; 00495e30
    MOV dword ptr [EBX],EAX             ; 00495e34
    MOV EAX,0x1                         ; 00495e36
    ADD ESP,0x24                        ; 00495e3b
    POP EBP                             ; 00495e3e
    POP EDI                             ; 00495e3f
    POP ESI                             ; 00495e40
    POP EBX                             ; 00495e41
    RET                                 ; 00495e42
    PUSH 0x5dbeda                       ; 00495e43 | = "Please enter a valid integer."
        ;   Label: LAB_00495e43
    PUSH EBX                            ; 00495e48
    CALL shape_edittool.cpp_FUN_004943a0 ; 00495e49
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0x8                         ; 00495e4e
    JMP 0x00495dc3                      ; 00495e51
        ;   XREF to: 00495dc3 (UNCONDITIONAL_JUMP)  ; LAB_00495dc3
    PUSH ESI                            ; 00495e56
        ;   Label: LAB_00495e56
    PUSH EDI                            ; 00495e57
    PUSH 0x5dbef8                       ; 00495e58 | = "Please enter a valid integer between ..."
    PUSH EBX                            ; 00495e5d
    CALL shape_edittool.cpp_FUN_004943a0 ; 00495e5e
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0x10                        ; 00495e63
    JMP 0x00495dc3                      ; 00495e66
        ;   XREF to: 00495dc3 (UNCONDITIONAL_JUMP)  ; LAB_00495dc3

