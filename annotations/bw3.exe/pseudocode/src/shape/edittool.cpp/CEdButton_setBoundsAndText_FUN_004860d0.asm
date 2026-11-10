; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004860d0(CEdButton *this_ptr,int left,int top,int right,int bottom,char *button_text)
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
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00483c00 at 00484202
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0 at 0047ca81
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0047d230 at 0047d575
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 at 0047c437
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004860d0
        ;   Label: shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004860d0
    PUSH EDI                            ; 004860d1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004860d2
    MOV ESI,dword ptr [ESP + 0x20]      ; 004860d6
    LEA EDI,[EDX + 0x1c]                ; 004860da
    PUSH EDI                            ; 004860dd
    MOV AL,byte ptr [ESI]               ; 004860de
        ;   Label: LAB_004860de
    MOV byte ptr [EDI],AL               ; 004860e0
    CMP AL,0x0                          ; 004860e2
    JZ 0x004860f6                       ; 004860e4
        ;   XREF to: 004860f6 (CONDITIONAL_JUMP)  ; LAB_004860f6
    MOV AL,byte ptr [ESI + 0x1]         ; 004860e6
    ADD ESI,0x2                         ; 004860e9
    MOV byte ptr [EDI + 0x1],AL         ; 004860ec
    ADD EDI,0x2                         ; 004860ef
    CMP AL,0x0                          ; 004860f2
    JNZ 0x004860de                      ; 004860f4
        ;   XREF to: 004860de (CONDITIONAL_JUMP)  ; LAB_004860de
    POP EDI                             ; 004860f6
        ;   Label: LAB_004860f6
    MOV EDI,dword ptr [ESP + 0x10]      ; 004860f7
    MOV dword ptr [EDX + 0x8],EDI       ; 004860fb
    MOV EDI,dword ptr [ESP + 0x14]      ; 004860fe
    MOV dword ptr [EDX + 0xc],EDI       ; 00486102
    MOV EDI,dword ptr [ESP + 0x18]      ; 00486105
    INC EDI                             ; 00486109
    MOV dword ptr [EDX + 0x10],EDI      ; 0048610a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0048610d
    INC EDI                             ; 00486111
    MOV dword ptr [EDX + 0x14],EDI      ; 00486112
    POP EDI                             ; 00486115
    POP ESI                             ; 00486116
    RET                                 ; 00486117

