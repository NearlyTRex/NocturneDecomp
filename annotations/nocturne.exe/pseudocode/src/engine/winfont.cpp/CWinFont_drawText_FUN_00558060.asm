; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_winfont_cpp_CWinFont_drawText_FUN_00558060(CWinFont *this_ptr,char *text_string,int x,int y,int foreground_color,int background_color)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text_string
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
; int              Stack[0x14]:4   foreground_color
; int              Stack[0x18]:4   background_color
;
; Called Functions:
;   engine_winfont.cpp_CWinFont_createTextBackground_FUN_005584d0
;   engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005580b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558060
        ;   Label: engine_winfont.cpp_CWinFont_drawText_FUN_00558060
    PUSH EBP                            ; 00558061
    MOV EBX,dword ptr [ESP + 0xc]       ; 00558062
    PUSH -0x1                           ; 00558066
    PUSH -0x1                           ; 00558068
    PUSH EBX                            ; 0055806a
    CALL engine_winfont.cpp_CWinFont_createTextBackground_FUN_005584d0 ; 0055806b
        ;   XREF to: 005584d0 (UNCONDITIONAL_CALL)  ; int engine_winfont.cpp_CWinFont_createTextBackground_FUN_005584d0(CWinFont * this_ptr, int width, int height)
    ADD ESP,0xc                         ; 00558070
    TEST EAX,EAX                        ; 00558073
    JNZ 0x0055807a                      ; 00558075
        ;   XREF to: 0055807a (CONDITIONAL_JUMP)  ; LAB_0055807a
    POP EBP                             ; 00558077
    POP EBX                             ; 00558078
    RET                                 ; 00558079
    PUSH EDI                            ; 0055807a
        ;   Label: LAB_0055807a
    PUSH ESI                            ; 0055807b
    MOV EDX,dword ptr [ESP + 0x28]      ; 0055807c
    PUSH EDX                            ; 00558080
    MOV ECX,dword ptr [ESP + 0x28]      ; 00558081
    PUSH ECX                            ; 00558085
    MOV ESI,dword ptr [ESP + 0x28]      ; 00558086
    PUSH ESI                            ; 0055808a
    MOV EDI,dword ptr [ESP + 0x28]      ; 0055808b
    PUSH EDI                            ; 0055808f
    MOV EBP,dword ptr [ESP + 0x28]      ; 00558090
    PUSH EBP                            ; 00558094
    MOV EAX,dword ptr [EBX + 0x4]       ; 00558095
    PUSH EAX                            ; 00558098
    PUSH EBX                            ; 00558099
    CALL engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005580b0 ; 0055809a
        ;   XREF to: 005580b0 (UNCONDITIONAL_CALL)  ; void engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005580b0(CWinFont * this_ptr, HDC device_context, char * text_string, int x, ...)
    ADD ESP,0x1c                        ; 0055809f
    XOR EAX,EAX                         ; 005580a2
    POP ESI                             ; 005580a4
    POP EDI                             ; 005580a5
    POP EBP                             ; 005580a6
    POP EBX                             ; 005580a7
    RET                                 ; 005580a8

