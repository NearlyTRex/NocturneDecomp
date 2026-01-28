; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590 (CEdButton *this_ptr,int left,int top,int right,int bottom,char *button_text)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   right
; int              Stack[0x14]:4   bottom
; char *           Stack[0x18]:4   button_text
;
; XREF[5]:
;   shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550 at 004a6582
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 at 004a4bcd
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 at 0049e2d1
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 at 0049ed14
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 at 0049dc87
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004a6590
        ;   Label: shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
    PUSH EDI                            ; 004a6591
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a6592
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a6596
    LEA EDI,[EDX + 0x1c]                ; 004a659a
    PUSH EDI                            ; 004a659d
    MOV AL,byte ptr [ESI]               ; 004a659e
        ;   Label: LAB_004a659e
    MOV byte ptr [EDI],AL               ; 004a65a0
    CMP AL,0x0                          ; 004a65a2
    JZ 0x004a65b6                       ; 004a65a4
        ;   XREF to: 004a65b6 (CONDITIONAL_JUMP)  ; LAB_004a65b6
    MOV AL,byte ptr [ESI + 0x1]         ; 004a65a6
    ADD ESI,0x2                         ; 004a65a9
    MOV byte ptr [EDI + 0x1],AL         ; 004a65ac
    ADD EDI,0x2                         ; 004a65af
    CMP AL,0x0                          ; 004a65b2
    JNZ 0x004a659e                      ; 004a65b4
        ;   XREF to: 004a659e (CONDITIONAL_JUMP)  ; LAB_004a659e
    POP EDI                             ; 004a65b6
        ;   Label: LAB_004a65b6
    MOV EDI,dword ptr [ESP + 0x10]      ; 004a65b7
    MOV dword ptr [EDX + 0x8],EDI       ; 004a65bb
    MOV EDI,dword ptr [ESP + 0x14]      ; 004a65be
    MOV dword ptr [EDX + 0xc],EDI       ; 004a65c2
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a65c5
    INC EDI                             ; 004a65c9
    MOV dword ptr [EDX + 0x10],EDI      ; 004a65ca
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004a65cd
    INC EDI                             ; 004a65d1
    MOV dword ptr [EDX + 0x14],EDI      ; 004a65d2
    POP EDI                             ; 004a65d5
    POP ESI                             ; 004a65d6
    RET                                 ; 004a65d7

