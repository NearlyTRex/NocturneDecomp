; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextFV_FUN_004b0d30(CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,undefined4 format_string,undefined4 param_7)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   format_string
;
; XREF[1]:
;   engine_font.cpp_CBitFont_drawTextF_FUN_004b0ce0 at 004b0d0f
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005a2898
;   engine_font.cpp_CBitFont_drawTextWrapper_FUN_004b0cb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0d30
        ;   Label: engine_font.cpp_CBitFont_drawTextFV_FUN_004b0d30
    PUSH ESI                            ; 004b0d31
    PUSH EDI                            ; 004b0d32
    PUSH EBP                            ; 004b0d33
    SUB ESP,0x1000                      ; 004b0d34
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004b0d3a
    PUSH EDX                            ; 004b0d41
    MOV ECX,dword ptr [ESP + 0x102c]    ; 004b0d42
    PUSH ECX                            ; 004b0d49
    LEA EAX,[ESP + 0x8]                 ; 004b0d4a
    PUSH EAX                            ; 004b0d4e
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 004b0d4f
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005a2898()
    ADD ESP,0xc                         ; 004b0d54
    MOV EAX,ESP                         ; 004b0d57
    PUSH EAX                            ; 004b0d59
    MOV EBX,dword ptr [ESP + 0x1028]    ; 004b0d5a
    PUSH EBX                            ; 004b0d61
    MOV ESI,dword ptr [ESP + 0x1028]    ; 004b0d62
    PUSH ESI                            ; 004b0d69
    MOV EDI,dword ptr [ESP + 0x1028]    ; 004b0d6a
    PUSH EDI                            ; 004b0d71
    MOV EBP,dword ptr [ESP + 0x1028]    ; 004b0d72
    PUSH EBP                            ; 004b0d79
    MOV EAX,dword ptr [ESP + 0x1028]    ; 004b0d7a
    PUSH EAX                            ; 004b0d81
    CALL engine_font.cpp_CBitFont_drawTextWrapper_FUN_004b0cb0 ; 004b0d82
        ;   XREF to: 004b0cb0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextWrapper_FUN_004b0cb0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004b0d87
    ADD ESP,0x1000                      ; 004b0d8a
    POP EBP                             ; 004b0d90
    POP EDI                             ; 004b0d91
    POP ESI                             ; 004b0d92
    POP EBX                             ; 004b0d93
    RET                                 ; 004b0d94

