; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_promptForValidDouble_FUN_0047eb10(CEditorTools *this_ptr,char *prompt_text,double *result_ptr,int enable_range_check,double min_value,double max_value,int show_current_value)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; double *         Stack[0xc]:4   result_ptr
; int              Stack[0x10]:4   enable_range_check
; double           Stack[0x14]:8   min_value
; double           Stack[0x1c]:8   max_value
; int              Stack[0x24]:4   show_current_value
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005a5b9c
;   crt_unknown.c_sprintf_FUN_005a28c0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047eb10
        ;   Label: shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_0047eb10
    PUSH ESI                            ; 0047eb11
    PUSH EDI                            ; 0047eb12
    PUSH EBP                            ; 0047eb13
    MOV EBP,ESP                         ; 0047eb14
    SUB ESP,0x38                        ; 0047eb16
    AND ESP,0xfffffff8                  ; 0047eb19
    MOV EAX,dword ptr [EBP + 0x24]      ; 0047eb1c
    MOV dword ptr [ESP + 0x8],EAX       ; 0047eb1f
    MOV EAX,dword ptr [EBP + 0x28]      ; 0047eb23
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047eb26
    MOV dword ptr [ESP + 0xc],EAX       ; 0047eb29
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0047eb2d
    MOV ESI,dword ptr [EBP + 0x18]      ; 0047eb30
    MOV dword ptr [ESP + 0x10],EAX      ; 0047eb33
    MOV EAX,dword ptr [EBP + 0x30]      ; 0047eb37
    MOV EDI,dword ptr [EBP + 0x20]      ; 0047eb3a
    MOV dword ptr [ESP + 0x14],EAX      ; 0047eb3d
    TEST byte ptr [EBP + 0x34],0x1      ; 0047eb41
    JNZ 0x0047eb6b                      ; 0047eb45
        ;   XREF to: 0047eb6b (CONDITIONAL_JUMP)  ; LAB_0047eb6b
    XOR DL,DL                           ; 0047eb47
    MOV byte ptr [ESP + 0x18],DL        ; 0047eb49
    PUSH 0x1                            ; 0047eb4d
        ;   Label: LAB_0047eb4d
    PUSH 0x1e                           ; 0047eb4f
    LEA EAX,[ESP + 0x20]                ; 0047eb51
    PUSH EAX                            ; 0047eb55
    PUSH ESI                            ; 0047eb56
    PUSH EBX                            ; 0047eb57
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0 ; 0047eb58
        ;   XREF to: 0047ecf0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0047eb5d
    TEST EAX,EAX                        ; 0047eb60
    JNZ 0x0047eb89                      ; 0047eb62
        ;   XREF to: 0047eb89 (CONDITIONAL_JUMP)  ; LAB_0047eb89
    MOV ESP,EBP                         ; 0047eb64
    POP EBP                             ; 0047eb66
    POP EDI                             ; 0047eb67
    POP ESI                             ; 0047eb68
    POP EBX                             ; 0047eb69
    RET                                 ; 0047eb6a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0047eb6b
        ;   Label: LAB_0047eb6b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047eb6e
    PUSH EDX                            ; 0047eb71
    MOV ECX,dword ptr [EAX]             ; 0047eb72
    PUSH ECX                            ; 0047eb74
    PUSH 0x5bd038                       ; 0047eb75
    LEA EAX,[ESP + 0x24]                ; 0047eb7a
    PUSH EAX                            ; 0047eb7e
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0047eb7f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0047eb84
    JMP 0x0047eb4d                      ; 0047eb87
        ;   XREF to: 0047eb4d (UNCONDITIONAL_JUMP)  ; LAB_0047eb4d
    MOV EAX,ESP                         ; 0047eb89
        ;   Label: LAB_0047eb89
    PUSH EAX                            ; 0047eb8b
    PUSH 0x5bd03e                       ; 0047eb8c
    LEA EAX,[ESP + 0x20]                ; 0047eb91
    PUSH EAX                            ; 0047eb95
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0047eb96
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 0047eb9b
    CMP EAX,0x1                         ; 0047eb9e
    JNZ 0x0047ebda                      ; 0047eba1
        ;   XREF to: 0047ebda (CONDITIONAL_JUMP)  ; LAB_0047ebda
    TEST EDI,EDI                        ; 0047eba3
    JZ 0x0047ebbf                       ; 0047eba5
        ;   XREF to: 0047ebbf (CONDITIONAL_JUMP)  ; LAB_0047ebbf
    FLD double ptr [ESP]                ; 0047eba7
    FCOMP double ptr [ESP + 0x8]        ; 0047ebaa
    FNSTSW AX                           ; 0047ebae
    SAHF                                ; 0047ebb0
    JC 0x0047ebed                       ; 0047ebb1
        ;   XREF to: 0047ebed (CONDITIONAL_JUMP)  ; LAB_0047ebed
    FLD double ptr [ESP]                ; 0047ebb3
    FCOMP double ptr [ESP + 0x10]       ; 0047ebb6
    FNSTSW AX                           ; 0047ebba
    SAHF                                ; 0047ebbc
    JA 0x0047ebed                       ; 0047ebbd
        ;   XREF to: 0047ebed (CONDITIONAL_JUMP)  ; LAB_0047ebed
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0047ebbf
        ;   Label: LAB_0047ebbf
    MOV EAX,dword ptr [ESP]             ; 0047ebc2
    MOV dword ptr [EBX],EAX             ; 0047ebc5
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047ebc7
    MOV dword ptr [EBX + 0x4],EAX       ; 0047ebcb
    MOV EAX,0x1                         ; 0047ebce
    MOV ESP,EBP                         ; 0047ebd3
    POP EBP                             ; 0047ebd5
    POP EDI                             ; 0047ebd6
    POP ESI                             ; 0047ebd7
    POP EBX                             ; 0047ebd8
    RET                                 ; 0047ebd9
    PUSH 0x5bd042                       ; 0047ebda
        ;   Label: LAB_0047ebda
    PUSH EBX                            ; 0047ebdf
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 0047ebe0
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047ebe5
    JMP 0x0047eb4d                      ; 0047ebe8
        ;   XREF to: 0047eb4d (UNCONDITIONAL_JUMP)  ; LAB_0047eb4d
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047ebed
        ;   Label: LAB_0047ebed
    PUSH EAX                            ; 0047ebf1
    MOV EDX,dword ptr [ESP + 0x14]      ; 0047ebf2
    PUSH EDX                            ; 0047ebf6
    MOV ECX,dword ptr [ESP + 0x14]      ; 0047ebf7
    PUSH ECX                            ; 0047ebfb
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047ebfc
    PUSH EAX                            ; 0047ec00
    PUSH 0x5bd05f                       ; 0047ec01
    PUSH EBX                            ; 0047ec06
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 0047ec07
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x18                        ; 0047ec0c
    JMP 0x0047eb4d                      ; 0047ec0f
        ;   XREF to: 0047eb4d (UNCONDITIONAL_JUMP)  ; LAB_0047eb4d

