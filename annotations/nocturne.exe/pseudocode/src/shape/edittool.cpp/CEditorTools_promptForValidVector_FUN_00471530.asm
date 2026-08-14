; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_00471530(CEditorTools *this_ptr,char *prompt_text,CVector3f *result_ptr,int show_current_value )
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; CVector3f *      Stack[0xc]:4   result_ptr
; int              Stack[0x10]:4   show_current_value
;
; Referenced Globals:
;   TerminatedCString s_g_g_g_0057e7fa
;   TerminatedCString s_f_f_f_0057e803
;   TerminatedCString s_Please_enter_a_valid_vec_0057e816
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdio.c_sscanf_FUN_00566b5c
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600
;   shape_edittool.cpp_FUN_0046fcd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471530
        ;   Label: shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_00471530
    PUSH ESI                            ; 00471531
    PUSH EDI                            ; 00471532
    SUB ESP,0x34                        ; 00471533
    MOV EBX,dword ptr [ESP + 0x44]      ; 00471536
    MOV ESI,dword ptr [ESP + 0x48]      ; 0047153a
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0047153e
    TEST byte ptr [ESP + 0x50],0x1      ; 00471542
    JNZ 0x0047156c                      ; 00471547
        ;   XREF to: 0047156c (CONDITIONAL_JUMP)  ; LAB_0047156c
    XOR DL,DL                           ; 00471549
    MOV byte ptr [ESP],DL               ; 0047154b
    PUSH 0x1                            ; 0047154e
        ;   Label: LAB_0047154e
    PUSH 0x28                           ; 00471550
    LEA EAX,[ESP + 0x8]                 ; 00471552
    PUSH EAX                            ; 00471556
    PUSH ESI                            ; 00471557
    PUSH EBX                            ; 00471558
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600 ; 00471559
        ;   XREF to: 00471600 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0047155e
    TEST EAX,EAX                        ; 00471561
    JNZ 0x0047159a                      ; 00471563
        ;   XREF to: 0047159a (CONDITIONAL_JUMP)  ; LAB_0047159a
    ADD ESP,0x34                        ; 00471565
    POP EDI                             ; 00471568
    POP ESI                             ; 00471569
    POP EBX                             ; 0047156a
    RET                                 ; 0047156b
    SUB ESP,0x8                         ; 0047156c
        ;   Label: LAB_0047156c
    FLD float ptr [EDI + 0x8]           ; 0047156f
    FSTP double ptr [ESP]               ; 00471572
    SUB ESP,0x8                         ; 00471575
    FLD float ptr [EDI + 0x4]           ; 00471578
    FSTP double ptr [ESP]               ; 0047157b
    SUB ESP,0x8                         ; 0047157e
    FLD float ptr [EDI]                 ; 00471581
    FSTP double ptr [ESP]               ; 00471583
    PUSH 0x57e7fa                       ; 00471586 | = "%g,%g,%g"
    LEA EAX,[ESP + 0x1c]                ; 0047158b
    PUSH EAX                            ; 0047158f
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00471590
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x20                        ; 00471595
    JMP 0x0047154e                      ; 00471598
        ;   XREF to: 0047154e (UNCONDITIONAL_JUMP)  ; LAB_0047154e
    LEA EAX,[ESP + 0x30]                ; 0047159a
        ;   Label: LAB_0047159a
    PUSH EAX                            ; 0047159e
    LEA EAX,[ESP + 0x30]                ; 0047159f
    PUSH EAX                            ; 004715a3
    LEA EAX,[ESP + 0x30]                ; 004715a4
    PUSH EAX                            ; 004715a8
    PUSH 0x57e803                       ; 004715a9 | = "%f%*[ ,]%f%*[ ,]%f"
    LEA EAX,[ESP + 0x10]                ; 004715ae
    PUSH EAX                            ; 004715b2
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 004715b3
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x14                        ; 004715b8
    CMP EAX,0x3                         ; 004715bb
    JNZ 0x004715e8                      ; 004715be
        ;   XREF to: 004715e8 (CONDITIONAL_JUMP)  ; LAB_004715e8
    LEA EAX,[ESP + 0x28]                ; 004715c0
    CMP EDI,EAX                         ; 004715c4
    JZ 0x004715dc                       ; 004715c6
        ;   XREF to: 004715dc (CONDITIONAL_JUMP)  ; LAB_004715dc
    MOV EAX,dword ptr [ESP + 0x28]      ; 004715c8
    MOV dword ptr [EDI],EAX             ; 004715cc
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004715ce
    MOV dword ptr [EDI + 0x4],EAX       ; 004715d2
    MOV EAX,dword ptr [ESP + 0x30]      ; 004715d5
    MOV dword ptr [EDI + 0x8],EAX       ; 004715d9
    MOV EAX,0x1                         ; 004715dc
        ;   Label: LAB_004715dc
    ADD ESP,0x34                        ; 004715e1
    POP EDI                             ; 004715e4
    POP ESI                             ; 004715e5
    POP EBX                             ; 004715e6
    RET                                 ; 004715e7
    PUSH 0x57e816                       ; 004715e8 | = "Please enter a valid vector."
        ;   Label: LAB_004715e8
    PUSH EBX                            ; 004715ed
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004715ee
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0x8                         ; 004715f3
    JMP 0x0047154e                      ; 004715f6
        ;   XREF to: 0047154e (UNCONDITIONAL_JUMP)  ; LAB_0047154e

