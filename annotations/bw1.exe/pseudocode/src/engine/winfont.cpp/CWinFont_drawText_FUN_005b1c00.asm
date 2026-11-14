; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_winfont_cpp_CWinFont_drawText_FUN_005b1c00(CWinFont *this_ptr,char *text_string,int x,int y,int foreground_color,int background_color)
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
;   engine_winfont.cpp_CWinFont_createTextBackground_FUN_005b1e90
;   engine_winfont.cpp_FUN_005b1c50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1c00
        ;   Label: engine_winfont.cpp_CWinFont_drawText_FUN_005b1c00
    PUSH EBP                            ; 005b1c01
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b1c02
    PUSH -0x1                           ; 005b1c06
    PUSH -0x1                           ; 005b1c08
    PUSH EBX                            ; 005b1c0a
    CALL engine_winfont.cpp_CWinFont_createTextBackground_FUN_005b1e90 ; 005b1c0b
        ;   XREF to: 005b1e90 (UNCONDITIONAL_CALL)  ; int engine_winfont.cpp_CWinFont_createTextBackground_FUN_005b1e90(CWinFont * this_ptr, int width, int height)
    ADD ESP,0xc                         ; 005b1c10
    TEST EAX,EAX                        ; 005b1c13
    JNZ 0x005b1c1a                      ; 005b1c15
        ;   XREF to: 005b1c1a (CONDITIONAL_JUMP)  ; LAB_005b1c1a
    POP EBP                             ; 005b1c17
    POP EBX                             ; 005b1c18
    RET                                 ; 005b1c19
    PUSH EDI                            ; 005b1c1a
        ;   Label: LAB_005b1c1a
    PUSH ESI                            ; 005b1c1b
    MOV EDX,dword ptr [ESP + 0x28]      ; 005b1c1c
    PUSH EDX                            ; 005b1c20
    MOV ECX,dword ptr [ESP + 0x28]      ; 005b1c21
    PUSH ECX                            ; 005b1c25
    MOV ESI,dword ptr [ESP + 0x28]      ; 005b1c26
    PUSH ESI                            ; 005b1c2a
    MOV EDI,dword ptr [ESP + 0x28]      ; 005b1c2b
    PUSH EDI                            ; 005b1c2f
    MOV EBP,dword ptr [ESP + 0x28]      ; 005b1c30
    PUSH EBP                            ; 005b1c34
    MOV EAX,dword ptr [EBX + 0x6a48]    ; 005b1c35
    PUSH EAX                            ; 005b1c3b
    PUSH EBX                            ; 005b1c3c
    CALL engine_winfont.cpp_FUN_005b1c50 ; 005b1c3d
        ;   XREF to: 005b1c50 (UNCONDITIONAL_CALL)  ; undefined engine_winfont.cpp_FUN_005b1c50()
    ADD ESP,0x1c                        ; 005b1c42
    XOR EAX,EAX                         ; 005b1c45
    POP ESI                             ; 005b1c47
    POP EDI                             ; 005b1c48
    POP EBP                             ; 005b1c49
    POP EBX                             ; 005b1c4a
    RET                                 ; 005b1c4b

