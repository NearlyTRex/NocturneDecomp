; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_00496080(CEditorTools *this_ptr,char *prompt_text,CVector3f *result_ptr,int show_current_value )
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; CVector3f *      Stack[0xc]:4   result_ptr
; int              Stack[0x10]:4   show_current_value
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005c2cac
;   crt_unknown.c_sprintf_FUN_005bfb40
;   shape_edittool.cpp_CEditorTools_showError_FUN_004943a0
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496080
        ;   Label: shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_00496080
    PUSH ESI                            ; 00496081
    PUSH EDI                            ; 00496082
    SUB ESP,0x34                        ; 00496083
    MOV EBX,dword ptr [ESP + 0x44]      ; 00496086
    MOV ESI,dword ptr [ESP + 0x48]      ; 0049608a
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0049608e
    TEST byte ptr [ESP + 0x50],0x1      ; 00496092
    JNZ 0x004960bc                      ; 00496097
        ;   XREF to: 004960bc (CONDITIONAL_JUMP)  ; LAB_004960bc
    XOR DL,DL                           ; 00496099
    MOV byte ptr [ESP],DL               ; 0049609b
    PUSH 0x1                            ; 0049609e
        ;   Label: LAB_0049609e
    PUSH 0x28                           ; 004960a0
    LEA EAX,[ESP + 0x8]                 ; 004960a2
    PUSH EAX                            ; 004960a6
    PUSH ESI                            ; 004960a7
    PUSH EBX                            ; 004960a8
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150 ; 004960a9
        ;   XREF to: 00496150 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004960ae
    TEST EAX,EAX                        ; 004960b1
    JNZ 0x004960ea                      ; 004960b3
        ;   XREF to: 004960ea (CONDITIONAL_JUMP)  ; LAB_004960ea
    ADD ESP,0x34                        ; 004960b5
    POP EDI                             ; 004960b8
    POP ESI                             ; 004960b9
    POP EBX                             ; 004960ba
    RET                                 ; 004960bb
    SUB ESP,0x8                         ; 004960bc
        ;   Label: LAB_004960bc
    FLD float ptr [EDI + 0x8]           ; 004960bf
    FSTP double ptr [ESP]               ; 004960c2
    SUB ESP,0x8                         ; 004960c5
    FLD float ptr [EDI + 0x4]           ; 004960c8
    FSTP double ptr [ESP]               ; 004960cb
    SUB ESP,0x8                         ; 004960ce
    FLD float ptr [EDI]                 ; 004960d1
    FSTP double ptr [ESP]               ; 004960d3
    PUSH 0x5dbfd8                       ; 004960d6
    LEA EAX,[ESP + 0x1c]                ; 004960db
    PUSH EAX                            ; 004960df
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004960e0
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x20                        ; 004960e5
    JMP 0x0049609e                      ; 004960e8
        ;   XREF to: 0049609e (UNCONDITIONAL_JUMP)  ; LAB_0049609e
    LEA EAX,[ESP + 0x30]                ; 004960ea
        ;   Label: LAB_004960ea
    PUSH EAX                            ; 004960ee
    LEA EAX,[ESP + 0x30]                ; 004960ef
    PUSH EAX                            ; 004960f3
    LEA EAX,[ESP + 0x30]                ; 004960f4
    PUSH EAX                            ; 004960f8
    PUSH 0x5dc014                       ; 004960f9
    LEA EAX,[ESP + 0x10]                ; 004960fe
    PUSH EAX                            ; 00496102
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00496103
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 00496108
    CMP EAX,0x3                         ; 0049610b
    JNZ 0x00496138                      ; 0049610e
        ;   XREF to: 00496138 (CONDITIONAL_JUMP)  ; LAB_00496138
    LEA EAX,[ESP + 0x28]                ; 00496110
    CMP EDI,EAX                         ; 00496114
    JZ 0x0049612c                       ; 00496116
        ;   XREF to: 0049612c (CONDITIONAL_JUMP)  ; LAB_0049612c
    MOV EAX,dword ptr [ESP + 0x28]      ; 00496118
    MOV dword ptr [EDI],EAX             ; 0049611c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049611e
    MOV dword ptr [EDI + 0x4],EAX       ; 00496122
    MOV EAX,dword ptr [ESP + 0x30]      ; 00496125
    MOV dword ptr [EDI + 0x8],EAX       ; 00496129
    MOV EAX,0x1                         ; 0049612c
        ;   Label: LAB_0049612c
    ADD ESP,0x34                        ; 00496131
    POP EDI                             ; 00496134
    POP ESI                             ; 00496135
    POP EBX                             ; 00496136
    RET                                 ; 00496137
    PUSH 0x5dc027                       ; 00496138
        ;   Label: LAB_00496138
    PUSH EBX                            ; 0049613d
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 0049613e
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00496143
    JMP 0x0049609e                      ; 00496146
        ;   XREF to: 0049609e (UNCONDITIONAL_JUMP)  ; LAB_0049609e

