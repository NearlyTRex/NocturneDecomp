; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_00476eb0(CEdButton *this_ptr,int x_pos,int y_pos,char *button_text)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; char *           Stack[0x10]:4   button_text
;
; Called Functions:
;   shape_edittool.cpp_calculateButtonHeight_FUN_00477100
;   shape_edittool.cpp_calculateButtonWidth_FUN_00477080
;   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00476ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476eb0
        ;   Label: shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_00476eb0
    PUSH EDI                            ; 00476eb1
    MOV EBX,dword ptr [ESP + 0x18]      ; 00476eb2
    PUSH EBX                            ; 00476eb6
    PUSH EBX                            ; 00476eb7
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_00477100 ; 00476eb8
        ;   XREF to: 00477100 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonHeight_FUN_00477100(char * button_text)
    ADD ESP,0x4                         ; 00476ebd
    ADD EAX,dword ptr [ESP + 0x18]      ; 00476ec0
    DEC EAX                             ; 00476ec4
    PUSH EAX                            ; 00476ec5
    PUSH EBX                            ; 00476ec6
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_00477080 ; 00476ec7
        ;   XREF to: 00477080 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_00477080(char * button_text)
    ADD ESP,0x4                         ; 00476ecc
    MOV ECX,dword ptr [ESP + 0x18]      ; 00476ecf
    ADD EAX,ECX                         ; 00476ed3
    DEC EAX                             ; 00476ed5
    PUSH EAX                            ; 00476ed6
    MOV EBX,dword ptr [ESP + 0x20]      ; 00476ed7
    PUSH EBX                            ; 00476edb
    PUSH ECX                            ; 00476edc
    MOV EDI,dword ptr [ESP + 0x20]      ; 00476edd
    PUSH EDI                            ; 00476ee1
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00476ef0 ; 00476ee2
        ;   XREF to: 00476ef0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00476ef0(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 00476ee7
    POP EDI                             ; 00476eea
    POP EBX                             ; 00476eeb
    RET                                 ; 00476eec

