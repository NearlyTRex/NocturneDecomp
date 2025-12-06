; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_font.cpp_CBitFont_printfRight_FUN_004cdd20(CBitFont * font_ptr, int x, int y, int color, char * format, ...)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   font_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   color
; char *           Stack[0x14]:4   format
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   engine_font.cpp_CBitFont_printfRight_FUN_004cdd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdd20
        ;   Label: engine_font.cpp_CBitFont_printfRight_FUN_004cdd20
    PUSH ESI                            ; 004cdd21
    PUSH EDI                            ; 004cdd22
    PUSH EBP                            ; 004cdd23
    SUB ESP,0x4                         ; 004cdd24
    LEA EAX,[ESP + 0x30]                ; 004cdd27
    MOV dword ptr [ESP],EAX             ; 004cdd2b
    MOV EAX,ESP                         ; 004cdd2e
    PUSH EAX                            ; 004cdd30
    MOV EDX,dword ptr [ESP + 0x30]      ; 004cdd31
    PUSH EDX                            ; 004cdd35
    MOV ECX,dword ptr [ESP + 0x30]      ; 004cdd36
    PUSH ECX                            ; 004cdd3a
    MOV EBX,dword ptr [ESP + 0x30]      ; 004cdd3b
    PUSH EBX                            ; 004cdd3f
    MOV ESI,dword ptr [ESP + 0x30]      ; 004cdd40
    PUSH ESI                            ; 004cdd44
    MOV EDI,dword ptr [ESP + 0x30]      ; 004cdd45
    PUSH EDI                            ; 004cdd49
    MOV EBP,dword ptr [ESP + 0x30]      ; 004cdd4a
    PUSH EBP                            ; 004cdd4e
    CALL engine_font.cpp_CBitFont_printfRight_FUN_004cdd70 ; 004cdd4f | void engine_font.cpp_CBitFont_printfRight_FUN_004cdd70(CBitFont * font_ptr, int x, int y, int color, ...)
        ;   XREF to: 004cdd70 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 004cdd54
    XOR EDX,EDX                         ; 004cdd57
    MOV dword ptr [ESP],EDX             ; 004cdd59
    ADD ESP,0x4                         ; 004cdd5c
    POP EBP                             ; 004cdd5f
    POP EDI                             ; 004cdd60
    POP ESI                             ; 004cdd61
    POP EBX                             ; 004cdd62
    RET                                 ; 004cdd63

