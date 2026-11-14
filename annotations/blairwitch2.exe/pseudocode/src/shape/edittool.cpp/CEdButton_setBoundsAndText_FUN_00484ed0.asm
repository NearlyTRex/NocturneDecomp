; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_00484ed0(CEdButton *this_ptr,int left,int top,int right,int bottom,char *button_text)
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
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00482a00 at 00483002
;   shape_edittool.cpp_FUN_0047c0f0 at 0047c42a
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800 at 0047b9a1
;   shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0 at 0047b367
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00484ed0
        ;   Label: shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00484ed0
    PUSH EDI                            ; 00484ed1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00484ed2
    MOV ESI,dword ptr [ESP + 0x20]      ; 00484ed6
    LEA EDI,[EDX + 0x1c]                ; 00484eda
    PUSH EDI                            ; 00484edd
    MOV AL,byte ptr [ESI]               ; 00484ede
        ;   Label: LAB_00484ede
    MOV byte ptr [EDI],AL               ; 00484ee0
    CMP AL,0x0                          ; 00484ee2
    JZ 0x00484ef6                       ; 00484ee4
        ;   XREF to: 00484ef6 (CONDITIONAL_JUMP)  ; LAB_00484ef6
    MOV AL,byte ptr [ESI + 0x1]         ; 00484ee6
    ADD ESI,0x2                         ; 00484ee9
    MOV byte ptr [EDI + 0x1],AL         ; 00484eec
    ADD EDI,0x2                         ; 00484eef
    CMP AL,0x0                          ; 00484ef2
    JNZ 0x00484ede                      ; 00484ef4
        ;   XREF to: 00484ede (CONDITIONAL_JUMP)  ; LAB_00484ede
    POP EDI                             ; 00484ef6
        ;   Label: LAB_00484ef6
    MOV EDI,dword ptr [ESP + 0x10]      ; 00484ef7
    MOV dword ptr [EDX + 0x8],EDI       ; 00484efb
    MOV EDI,dword ptr [ESP + 0x14]      ; 00484efe
    MOV dword ptr [EDX + 0xc],EDI       ; 00484f02
    MOV EDI,dword ptr [ESP + 0x18]      ; 00484f05
    INC EDI                             ; 00484f09
    MOV dword ptr [EDX + 0x10],EDI      ; 00484f0a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00484f0d
    INC EDI                             ; 00484f11
    MOV dword ptr [EDX + 0x14],EDI      ; 00484f12
    POP EDI                             ; 00484f15
    POP ESI                             ; 00484f16
    RET                                 ; 00484f17

