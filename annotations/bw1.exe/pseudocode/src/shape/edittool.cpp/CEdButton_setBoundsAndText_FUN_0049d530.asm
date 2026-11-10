; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_0049d530(CEdButton *this_ptr,int left,int top,int right,int bottom,char *button_text)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   right
; int              Stack[0x14]:4   bottom
; char *           Stack[0x18]:4   button_text
;
; XREF[4]:
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_0049b060 at 0049b662
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40 at 00493ee1
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_00494690 at 004949d5
;   shape_edittool.cpp_showTextInputDialog_FUN_00493720 at 00493897
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0049d530
        ;   Label: shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_0049d530
    PUSH EDI                            ; 0049d531
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049d532
    MOV ESI,dword ptr [ESP + 0x20]      ; 0049d536
    LEA EDI,[EDX + 0x1c]                ; 0049d53a
    PUSH EDI                            ; 0049d53d
    MOV AL,byte ptr [ESI]               ; 0049d53e
        ;   Label: LAB_0049d53e
    MOV byte ptr [EDI],AL               ; 0049d540
    CMP AL,0x0                          ; 0049d542
    JZ 0x0049d556                       ; 0049d544
        ;   XREF to: 0049d556 (CONDITIONAL_JUMP)  ; LAB_0049d556
    MOV AL,byte ptr [ESI + 0x1]         ; 0049d546
    ADD ESI,0x2                         ; 0049d549
    MOV byte ptr [EDI + 0x1],AL         ; 0049d54c
    ADD EDI,0x2                         ; 0049d54f
    CMP AL,0x0                          ; 0049d552
    JNZ 0x0049d53e                      ; 0049d554
        ;   XREF to: 0049d53e (CONDITIONAL_JUMP)  ; LAB_0049d53e
    POP EDI                             ; 0049d556
        ;   Label: LAB_0049d556
    MOV EDI,dword ptr [ESP + 0x10]      ; 0049d557
    MOV dword ptr [EDX + 0x8],EDI       ; 0049d55b
    MOV EDI,dword ptr [ESP + 0x14]      ; 0049d55e
    MOV dword ptr [EDX + 0xc],EDI       ; 0049d562
    MOV EDI,dword ptr [ESP + 0x18]      ; 0049d565
    INC EDI                             ; 0049d569
    MOV dword ptr [EDX + 0x10],EDI      ; 0049d56a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0049d56d
    INC EDI                             ; 0049d571
    MOV dword ptr [EDX + 0x14],EDI      ; 0049d572
    POP EDI                             ; 0049d575
    POP ESI                             ; 0049d576
    RET                                 ; 0049d577

