; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_0047da10(CEditorTools *this_ptr,char *prompt_text,CVector3f *result_ptr,int show_current_value )
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; CVector3f *      Stack[0xc]:4   result_ptr
; int              Stack[0x10]:4   show_current_value
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005ba8cc
;   crt_unknown.c_sprintf_FUN_005b7790
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047be40
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047dae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047da10
        ;   Label: shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_0047da10
    PUSH ESI                            ; 0047da11
    PUSH EDI                            ; 0047da12
    SUB ESP,0x34                        ; 0047da13
    MOV EBX,dword ptr [ESP + 0x44]      ; 0047da16
    MOV ESI,dword ptr [ESP + 0x48]      ; 0047da1a
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0047da1e
    TEST byte ptr [ESP + 0x50],0x1      ; 0047da22
    JNZ 0x0047da4c                      ; 0047da27
        ;   XREF to: 0047da4c (CONDITIONAL_JUMP)  ; LAB_0047da4c
    XOR DL,DL                           ; 0047da29
    MOV byte ptr [ESP],DL               ; 0047da2b
    PUSH 0x1                            ; 0047da2e
        ;   Label: LAB_0047da2e
    PUSH 0x28                           ; 0047da30
    LEA EAX,[ESP + 0x8]                 ; 0047da32
    PUSH EAX                            ; 0047da36
    PUSH ESI                            ; 0047da37
    PUSH EBX                            ; 0047da38
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047dae0 ; 0047da39
        ;   XREF to: 0047dae0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047dae0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0047da3e
    TEST EAX,EAX                        ; 0047da41
    JNZ 0x0047da7a                      ; 0047da43
        ;   XREF to: 0047da7a (CONDITIONAL_JUMP)  ; LAB_0047da7a
    ADD ESP,0x34                        ; 0047da45
    POP EDI                             ; 0047da48
    POP ESI                             ; 0047da49
    POP EBX                             ; 0047da4a
    RET                                 ; 0047da4b
    SUB ESP,0x8                         ; 0047da4c
        ;   Label: LAB_0047da4c
    FLD float ptr [EDI + 0x8]           ; 0047da4f
    FSTP double ptr [ESP]               ; 0047da52
    SUB ESP,0x8                         ; 0047da55
    FLD float ptr [EDI + 0x4]           ; 0047da58
    FSTP double ptr [ESP]               ; 0047da5b
    SUB ESP,0x8                         ; 0047da5e
    FLD float ptr [EDI]                 ; 0047da61
    FSTP double ptr [ESP]               ; 0047da63
    PUSH 0x5d223a                       ; 0047da66
    LEA EAX,[ESP + 0x1c]                ; 0047da6b
    PUSH EAX                            ; 0047da6f
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0047da70
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x20                        ; 0047da75
    JMP 0x0047da2e                      ; 0047da78
        ;   XREF to: 0047da2e (UNCONDITIONAL_JUMP)  ; LAB_0047da2e
    LEA EAX,[ESP + 0x30]                ; 0047da7a
        ;   Label: LAB_0047da7a
    PUSH EAX                            ; 0047da7e
    LEA EAX,[ESP + 0x30]                ; 0047da7f
    PUSH EAX                            ; 0047da83
    LEA EAX,[ESP + 0x30]                ; 0047da84
    PUSH EAX                            ; 0047da88
    PUSH 0x5d2276                       ; 0047da89
    LEA EAX,[ESP + 0x10]                ; 0047da8e
    PUSH EAX                            ; 0047da92
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0047da93
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x14                        ; 0047da98
    CMP EAX,0x3                         ; 0047da9b
    JNZ 0x0047dac8                      ; 0047da9e
        ;   XREF to: 0047dac8 (CONDITIONAL_JUMP)  ; LAB_0047dac8
    LEA EAX,[ESP + 0x28]                ; 0047daa0
    CMP EDI,EAX                         ; 0047daa4
    JZ 0x0047dabc                       ; 0047daa6
        ;   XREF to: 0047dabc (CONDITIONAL_JUMP)  ; LAB_0047dabc
    MOV EAX,dword ptr [ESP + 0x28]      ; 0047daa8
    MOV dword ptr [EDI],EAX             ; 0047daac
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0047daae
    MOV dword ptr [EDI + 0x4],EAX       ; 0047dab2
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047dab5
    MOV dword ptr [EDI + 0x8],EAX       ; 0047dab9
    MOV EAX,0x1                         ; 0047dabc
        ;   Label: LAB_0047dabc
    ADD ESP,0x34                        ; 0047dac1
    POP EDI                             ; 0047dac4
    POP ESI                             ; 0047dac5
    POP EBX                             ; 0047dac6
    RET                                 ; 0047dac7
    PUSH 0x5d2289                       ; 0047dac8
        ;   Label: LAB_0047dac8
    PUSH EBX                            ; 0047dacd
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 0047dace
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047dad3
    JMP 0x0047da2e                      ; 0047dad6
        ;   XREF to: 0047da2e (UNCONDITIONAL_JUMP)  ; LAB_0047da2e

