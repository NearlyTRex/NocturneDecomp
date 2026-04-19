; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300(CEditorTools *editor_tools,char *prompt_text,CVector3f *result_ptr,int show_current_value)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   editor_tools
; char *           Stack[0x8]:4   prompt_text
; CVector3f *      Stack[0xc]:4   result_ptr
; int              Stack[0x10]:4   show_current_value
; Local Variables:
; char[40]         Stack[-0x40]:40  local_40
; CVector3f        Stack[-0x18]:12  local_18
;
; XREF[4]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040f065
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 0044336f
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e0fe
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00597c63
;
; Referenced Globals:
;   TerminatedCString s_g_g_g_006232b5
;   TerminatedCString s_f_f_f_006232be
;   TerminatedCString s_Please_enter_a_valid_vec_006232d1
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdio.c_sscanf_FUN_0060013c
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0300
        ;   Label: shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300
    PUSH ESI                            ; 004a0301
    PUSH EDI                            ; 004a0302
    SUB ESP,0x34                        ; 004a0303
    MOV EBX,dword ptr [ESP + 0x44]      ; 004a0306
    MOV ESI,dword ptr [ESP + 0x48]      ; 004a030a
    MOV EDI,dword ptr [ESP + 0x4c]      ; 004a030e
    TEST byte ptr [ESP + 0x50],0x1      ; 004a0312
    JNZ 0x004a033c                      ; 004a0317
        ;   XREF to: 004a033c (CONDITIONAL_JUMP)  ; LAB_004a033c
    XOR DL,DL                           ; 004a0319
    MOV byte ptr [ESP],DL               ; 004a031b
    PUSH 0x1                            ; 004a031e
        ;   Label: LAB_004a031e
    PUSH 0x28                           ; 004a0320
    LEA EAX,[ESP + 0x8]                 ; 004a0322
    PUSH EAX                            ; 004a0326
    PUSH ESI                            ; 004a0327
    PUSH EBX                            ; 004a0328
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 004a0329
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004a032e
    TEST EAX,EAX                        ; 004a0331
    JNZ 0x004a036a                      ; 004a0333
        ;   XREF to: 004a036a (CONDITIONAL_JUMP)  ; LAB_004a036a
    ADD ESP,0x34                        ; 004a0335
    POP EDI                             ; 004a0338
    POP ESI                             ; 004a0339
    POP EBX                             ; 004a033a
    RET                                 ; 004a033b
    SUB ESP,0x8                         ; 004a033c
        ;   Label: LAB_004a033c
    FLD float ptr [EDI + 0x8]           ; 004a033f
    FSTP double ptr [ESP]               ; 004a0342
    SUB ESP,0x8                         ; 004a0345
    FLD float ptr [EDI + 0x4]           ; 004a0348
    FSTP double ptr [ESP]               ; 004a034b
    SUB ESP,0x8                         ; 004a034e
    FLD float ptr [EDI]                 ; 004a0351
    FSTP double ptr [ESP]               ; 004a0353
    PUSH 0x6232b5                       ; 004a0356 | = "%g,%g,%g"
    LEA EAX,[ESP + 0x1c]                ; 004a035b
    PUSH EAX                            ; 004a035f
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004a0360
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x20                        ; 004a0365
    JMP 0x004a031e                      ; 004a0368
        ;   XREF to: 004a031e (UNCONDITIONAL_JUMP)  ; LAB_004a031e
    LEA EAX,[ESP + 0x30]                ; 004a036a
        ;   Label: LAB_004a036a
    PUSH EAX                            ; 004a036e
    LEA EAX,[ESP + 0x30]                ; 004a036f
    PUSH EAX                            ; 004a0373
    LEA EAX,[ESP + 0x30]                ; 004a0374
    PUSH EAX                            ; 004a0378
    PUSH 0x6232be                       ; 004a0379 | = "%f%*[ ,]%f%*[ ,]%f"
    LEA EAX,[ESP + 0x10]                ; 004a037e
    PUSH EAX                            ; 004a0382
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004a0383
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 004a0388
    CMP EAX,0x3                         ; 004a038b
    JNZ 0x004a03b8                      ; 004a038e
        ;   XREF to: 004a03b8 (CONDITIONAL_JUMP)  ; LAB_004a03b8
    LEA EAX,[ESP + 0x28]                ; 004a0390
    CMP EDI,EAX                         ; 004a0394
    JZ 0x004a03ac                       ; 004a0396
        ;   XREF to: 004a03ac (CONDITIONAL_JUMP)  ; LAB_004a03ac
    MOV EAX,dword ptr [ESP + 0x28]      ; 004a0398
    MOV dword ptr [EDI],EAX             ; 004a039c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004a039e
    MOV dword ptr [EDI + 0x4],EAX       ; 004a03a2
    MOV EAX,dword ptr [ESP + 0x30]      ; 004a03a5
    MOV dword ptr [EDI + 0x8],EAX       ; 004a03a9
    MOV EAX,0x1                         ; 004a03ac
        ;   Label: LAB_004a03ac
    ADD ESP,0x34                        ; 004a03b1
    POP EDI                             ; 004a03b4
    POP ESI                             ; 004a03b5
    POP EBX                             ; 004a03b6
    RET                                 ; 004a03b7
    PUSH 0x6232d1                       ; 004a03b8 | = "Please enter a valid vector."
        ;   Label: LAB_004a03b8
    PUSH EBX                            ; 004a03bd
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004a03be
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004a03c3
    JMP 0x004a031e                      ; 004a03c6
        ;   XREF to: 004a031e (UNCONDITIONAL_JUMP)  ; LAB_004a031e

