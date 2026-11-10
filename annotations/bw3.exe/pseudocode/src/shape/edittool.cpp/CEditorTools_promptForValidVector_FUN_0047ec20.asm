; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_0047ec20(CEditorTools *this_ptr,char *prompt_text,CVector3f *result_ptr,int show_current_value )
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; CVector3f *      Stack[0xc]:4   result_ptr
; int              Stack[0x10]:4   show_current_value
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005a5b9c
;   crt_unknown.c_sprintf_FUN_005a28c0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ec20
        ;   Label: shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_0047ec20
    PUSH ESI                            ; 0047ec21
    PUSH EDI                            ; 0047ec22
    SUB ESP,0x34                        ; 0047ec23
    MOV EBX,dword ptr [ESP + 0x44]      ; 0047ec26
    MOV ESI,dword ptr [ESP + 0x48]      ; 0047ec2a
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0047ec2e
    TEST byte ptr [ESP + 0x50],0x1      ; 0047ec32
    JNZ 0x0047ec5c                      ; 0047ec37
        ;   XREF to: 0047ec5c (CONDITIONAL_JUMP)  ; LAB_0047ec5c
    XOR DL,DL                           ; 0047ec39
    MOV byte ptr [ESP],DL               ; 0047ec3b
    PUSH 0x1                            ; 0047ec3e
        ;   Label: LAB_0047ec3e
    PUSH 0x28                           ; 0047ec40
    LEA EAX,[ESP + 0x8]                 ; 0047ec42
    PUSH EAX                            ; 0047ec46
    PUSH ESI                            ; 0047ec47
    PUSH EBX                            ; 0047ec48
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0 ; 0047ec49
        ;   XREF to: 0047ecf0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0047ec4e
    TEST EAX,EAX                        ; 0047ec51
    JNZ 0x0047ec8a                      ; 0047ec53
        ;   XREF to: 0047ec8a (CONDITIONAL_JUMP)  ; LAB_0047ec8a
    ADD ESP,0x34                        ; 0047ec55
    POP EDI                             ; 0047ec58
    POP ESI                             ; 0047ec59
    POP EBX                             ; 0047ec5a
    RET                                 ; 0047ec5b
    SUB ESP,0x8                         ; 0047ec5c
        ;   Label: LAB_0047ec5c
    FLD float ptr [EDI + 0x8]           ; 0047ec5f
    FSTP double ptr [ESP]               ; 0047ec62
    SUB ESP,0x8                         ; 0047ec65
    FLD float ptr [EDI + 0x4]           ; 0047ec68
    FSTP double ptr [ESP]               ; 0047ec6b
    SUB ESP,0x8                         ; 0047ec6e
    FLD float ptr [EDI]                 ; 0047ec71
    FSTP double ptr [ESP]               ; 0047ec73
    PUSH 0x5bd095                       ; 0047ec76
    LEA EAX,[ESP + 0x1c]                ; 0047ec7b
    PUSH EAX                            ; 0047ec7f
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0047ec80
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x20                        ; 0047ec85
    JMP 0x0047ec3e                      ; 0047ec88
        ;   XREF to: 0047ec3e (UNCONDITIONAL_JUMP)  ; LAB_0047ec3e
    LEA EAX,[ESP + 0x30]                ; 0047ec8a
        ;   Label: LAB_0047ec8a
    PUSH EAX                            ; 0047ec8e
    LEA EAX,[ESP + 0x30]                ; 0047ec8f
    PUSH EAX                            ; 0047ec93
    LEA EAX,[ESP + 0x30]                ; 0047ec94
    PUSH EAX                            ; 0047ec98
    PUSH 0x5bd0d1                       ; 0047ec99
    LEA EAX,[ESP + 0x10]                ; 0047ec9e
    PUSH EAX                            ; 0047eca2
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0047eca3
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0047eca8
    CMP EAX,0x3                         ; 0047ecab
    JNZ 0x0047ecd8                      ; 0047ecae
        ;   XREF to: 0047ecd8 (CONDITIONAL_JUMP)  ; LAB_0047ecd8
    LEA EAX,[ESP + 0x28]                ; 0047ecb0
    CMP EDI,EAX                         ; 0047ecb4
    JZ 0x0047eccc                       ; 0047ecb6
        ;   XREF to: 0047eccc (CONDITIONAL_JUMP)  ; LAB_0047eccc
    MOV EAX,dword ptr [ESP + 0x28]      ; 0047ecb8
    MOV dword ptr [EDI],EAX             ; 0047ecbc
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0047ecbe
    MOV dword ptr [EDI + 0x4],EAX       ; 0047ecc2
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047ecc5
    MOV dword ptr [EDI + 0x8],EAX       ; 0047ecc9
    MOV EAX,0x1                         ; 0047eccc
        ;   Label: LAB_0047eccc
    ADD ESP,0x34                        ; 0047ecd1
    POP EDI                             ; 0047ecd4
    POP ESI                             ; 0047ecd5
    POP EBX                             ; 0047ecd6
    RET                                 ; 0047ecd7
    PUSH 0x5bd0e4                       ; 0047ecd8
        ;   Label: LAB_0047ecd8
    PUSH EBX                            ; 0047ecdd
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 0047ecde
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047ece3
    JMP 0x0047ec3e                      ; 0047ece6
        ;   XREF to: 0047ec3e (UNCONDITIONAL_JUMP)  ; LAB_0047ec3e

