; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047d730(CEditorTools *this_ptr,char *prompt_text,int *result_ptr,int enable_range_check,int min_value,int max_value,int show_current_value)
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
;   core_game.cpp_FUN_004b296e at 004b29ce
;   core_game.cpp_FUN_004b90d0 at 004b98c7
;
; Referenced Globals:
;   undefined1 DAT_005d2136
;   undefined4 DAT_005d2139
;   TerminatedCString s_Please_enter_a_valid_int_005d213c
;   TerminatedCString s_Please_enter_a_valid_int_005d215a
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005ba8cc
;   crt_unknown.c_sprintf_FUN_005b7790
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047be40
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047dae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047d730
        ;   Label: shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047d730
    PUSH ESI                            ; 0047d731
    PUSH EDI                            ; 0047d732
    PUSH EBP                            ; 0047d733
    SUB ESP,0x24                        ; 0047d734
    MOV EBX,dword ptr [ESP + 0x38]      ; 0047d737
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0047d73b
    MOV EDI,dword ptr [ESP + 0x48]      ; 0047d73f
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0047d743
    TEST byte ptr [ESP + 0x50],0x1      ; 0047d747
    JNZ 0x0047d772                      ; 0047d74c
        ;   XREF to: 0047d772 (CONDITIONAL_JUMP)  ; LAB_0047d772
    XOR DL,DL                           ; 0047d74e
    MOV byte ptr [ESP],DL               ; 0047d750
    PUSH 0x1                            ; 0047d753
        ;   Label: LAB_0047d753
    PUSH 0x1e                           ; 0047d755
    LEA EAX,[ESP + 0x8]                 ; 0047d757
    PUSH EAX                            ; 0047d75b
    PUSH EBP                            ; 0047d75c
    PUSH EBX                            ; 0047d75d
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047dae0 ; 0047d75e
        ;   XREF to: 0047dae0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047dae0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0047d763
    TEST EAX,EAX                        ; 0047d766
    JNZ 0x0047d78d                      ; 0047d768
        ;   XREF to: 0047d78d (CONDITIONAL_JUMP)  ; LAB_0047d78d
    ADD ESP,0x24                        ; 0047d76a
    POP EBP                             ; 0047d76d
    POP EDI                             ; 0047d76e
    POP ESI                             ; 0047d76f
    POP EBX                             ; 0047d770
    RET                                 ; 0047d771
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047d772
        ;   Label: LAB_0047d772
    MOV EDX,dword ptr [EAX]             ; 0047d776
    PUSH EDX                            ; 0047d778
    PUSH 0x5d2136                       ; 0047d779 | DAT_005d2136
    LEA EAX,[ESP + 0x8]                 ; 0047d77e
    PUSH EAX                            ; 0047d782
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0047d783
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0047d788
    JMP 0x0047d753                      ; 0047d78b
        ;   XREF to: 0047d753 (UNCONDITIONAL_JUMP)  ; LAB_0047d753
    LEA EAX,[ESP + 0x20]                ; 0047d78d
        ;   Label: LAB_0047d78d
    PUSH EAX                            ; 0047d791
    PUSH 0x5d2139                       ; 0047d792 | DAT_005d2139
    LEA EAX,[ESP + 0x8]                 ; 0047d797
    PUSH EAX                            ; 0047d79b
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0047d79c
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 0047d7a1
    CMP EAX,0x1                         ; 0047d7a4
    JNZ 0x0047d7d3                      ; 0047d7a7
        ;   XREF to: 0047d7d3 (CONDITIONAL_JUMP)  ; LAB_0047d7d3
    CMP dword ptr [ESP + 0x44],0x0      ; 0047d7a9
    JZ 0x0047d7bc                       ; 0047d7ae
        ;   XREF to: 0047d7bc (CONDITIONAL_JUMP)  ; LAB_0047d7bc
    MOV EAX,dword ptr [ESP + 0x20]      ; 0047d7b0
    CMP EDI,EAX                         ; 0047d7b4
    JG 0x0047d7e6                       ; 0047d7b6
        ;   XREF to: 0047d7e6 (CONDITIONAL_JUMP)  ; LAB_0047d7e6
    CMP ESI,EAX                         ; 0047d7b8
    JL 0x0047d7e6                       ; 0047d7ba
        ;   XREF to: 0047d7e6 (CONDITIONAL_JUMP)  ; LAB_0047d7e6
    MOV EBX,dword ptr [ESP + 0x40]      ; 0047d7bc
        ;   Label: LAB_0047d7bc
    MOV EAX,dword ptr [ESP + 0x20]      ; 0047d7c0
    MOV dword ptr [EBX],EAX             ; 0047d7c4
    MOV EAX,0x1                         ; 0047d7c6
    ADD ESP,0x24                        ; 0047d7cb
    POP EBP                             ; 0047d7ce
    POP EDI                             ; 0047d7cf
    POP ESI                             ; 0047d7d0
    POP EBX                             ; 0047d7d1
    RET                                 ; 0047d7d2
    PUSH 0x5d213c                       ; 0047d7d3 | = "Please enter a valid integer."
        ;   Label: LAB_0047d7d3
    PUSH EBX                            ; 0047d7d8
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 0047d7d9
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047d7de
    JMP 0x0047d753                      ; 0047d7e1
        ;   XREF to: 0047d753 (UNCONDITIONAL_JUMP)  ; LAB_0047d753
    PUSH ESI                            ; 0047d7e6
        ;   Label: LAB_0047d7e6
    PUSH EDI                            ; 0047d7e7
    PUSH 0x5d215a                       ; 0047d7e8 | = "Please enter a valid integer between ..."
    PUSH EBX                            ; 0047d7ed
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 0047d7ee
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 0047d7f3
    JMP 0x0047d753                      ; 0047d7f6
        ;   XREF to: 0047d753 (UNCONDITIONAL_JUMP)  ; LAB_0047d753

