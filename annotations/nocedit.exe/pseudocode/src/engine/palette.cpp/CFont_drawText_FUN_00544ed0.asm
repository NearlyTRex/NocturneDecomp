; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_palette_cpp_CFont_drawText_FUN_00544ed0(CFont *this_ptr,char *text,int x,int y,int foreground_color,int background_color)
;
; Parameters:
; CFont *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
; int              Stack[0x14]:4   foreground_color
; int              Stack[0x18]:4   background_color
;
; XREF[1]:
;   engine_font.cpp_CBitFont_drawText_FUN_004cda80 at 004cdaf6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544ed0
        ;   Label: engine_palette.cpp_CFont_drawText_FUN_00544ed0
    PUSH ESI                            ; 00544ed1
    PUSH EDI                            ; 00544ed2
    PUSH EBP                            ; 00544ed3
    MOV EDX,dword ptr [ESP + 0x14]      ; 00544ed4
    MOV ECX,dword ptr [ESP + 0x28]      ; 00544ed8
    PUSH ECX                            ; 00544edc
    MOV EBX,dword ptr [ESP + 0x28]      ; 00544edd
    PUSH EBX                            ; 00544ee1
    MOV ESI,dword ptr [ESP + 0x28]      ; 00544ee2
    PUSH ESI                            ; 00544ee6
    MOV EDI,dword ptr [ESP + 0x28]      ; 00544ee7
    PUSH EDI                            ; 00544eeb
    MOV EBP,dword ptr [ESP + 0x28]      ; 00544eec
    PUSH EBP                            ; 00544ef0
    MOV EAX,dword ptr [EDX]             ; 00544ef1
    PUSH EDX                            ; 00544ef3
    CALL dword ptr [EAX + 0x4]          ; 00544ef4
    ADD ESP,0x18                        ; 00544ef7
    POP EBP                             ; 00544efa
    POP EDI                             ; 00544efb
    POP ESI                             ; 00544efc
    POP EBX                             ; 00544efd
    RET                                 ; 00544efe

