; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_00494600(CEditorTools *this_ptr,char *dialog_text)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   dialog_text
;
; Referenced Globals:
;   int g_INT_0061b498 = 0x140
;   CBitFont* g_CBitFont_PTR_01c3eb50
;   int g_INT_01c3f538
;   int g_INT_01c3f53c
;   char* g_CHAR_PTR_01d1d400
;   int g_INT_01d1d404
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00494600
        ;   Label: shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_00494600
    PUSH EDI                            ; 00494601
    CMP dword ptr [0x01c3eb50],0x0      ; 00494602 | g_CBitFont_PTR_01c3eb50
    JZ 0x0049465a                       ; 00494609
        ;   XREF to: 0049465a (CONDITIONAL_JUMP)  ; LAB_0049465a
    MOV EAX,[0x01c3eb50]                ; 0049460b | g_CBitFont_PTR_01c3eb50
        ;   Label: LAB_0049460b
    PUSH 0x6a                           ; 00494610
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 00494612
    PUSH EAX                            ; 00494618
    MOV dword ptr [0x01c3f538],EDX      ; 00494619 | g_INT_01c3f538
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 0049461f
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00494624
    MOV ECX,0x5                         ; 00494627
    MOV EDX,dword ptr [0x0061b498]      ; 0049462c | g_INT_0061b498
    PUSH 0x0                            ; 00494632
    MOV ESI,dword ptr [ESP + 0x14]      ; 00494634
    MOV [0x01c3f53c],EAX                ; 00494638 | g_INT_01c3f53c
    PUSH ESI                            ; 0049463d
    SHL EDX,0x2                         ; 0049463e
    PUSH EAX                            ; 00494641
    MOV EAX,EDX                         ; 00494642
    SAR EDX,0x1f                        ; 00494644
    IDIV ECX                            ; 00494647
    PUSH EAX                            ; 00494649
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0049464a
    PUSH EDI                            ; 0049464e
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840 ; 0049464f
        ;   XREF to: 00496840 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 00494654
    POP EDI                             ; 00494657
    POP ESI                             ; 00494658
    RET                                 ; 00494659
    PUSH EBX                            ; 0049465a
        ;   Label: LAB_0049465a
    MOV ECX,0x5dbc68                    ; 0049465b
    MOV EBX,0xa4                        ; 00494660
    PUSH 0x5dbc7e                       ; 00494665
    MOV dword ptr [0x01d1d400],ECX      ; 0049466a | g_CHAR_PTR_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00494670 | g_INT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 00494676
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 0049467b
    POP EBX                             ; 0049467e
    JMP 0x0049460b                      ; 0049467f
        ;   XREF to: 0049460b (UNCONDITIONAL_JUMP)  ; LAB_0049460b

