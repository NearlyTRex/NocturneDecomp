; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_FUN_004b0f30(CBitFont *this_ptr,int center_x,int y_pos,int color_mode,int color_value,undefined4 format_string,undefined4 param_7)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   center_x
; int              Stack[0xc]:4   y_pos
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   format_string
;
; XREF[1]:
;   engine_font.cpp_FUN_004b0ee0 at 004b0f0f
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005a2898
;   engine_font.cpp_CBitFont_drawTextCenter_FUN_004b0ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0f30
        ;   Label: engine_font.cpp_FUN_004b0f30
    PUSH ESI                            ; 004b0f31
    PUSH EDI                            ; 004b0f32
    PUSH EBP                            ; 004b0f33
    SUB ESP,0x1000                      ; 004b0f34
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004b0f3a
    PUSH EDX                            ; 004b0f41
    MOV ECX,dword ptr [ESP + 0x102c]    ; 004b0f42
    PUSH ECX                            ; 004b0f49
    LEA EAX,[ESP + 0x8]                 ; 004b0f4a
    PUSH EAX                            ; 004b0f4e
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 004b0f4f
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005a2898()
    ADD ESP,0xc                         ; 004b0f54
    MOV EAX,ESP                         ; 004b0f57
    PUSH EAX                            ; 004b0f59
    MOV EBX,dword ptr [ESP + 0x1028]    ; 004b0f5a
    PUSH EBX                            ; 004b0f61
    MOV ESI,dword ptr [ESP + 0x1028]    ; 004b0f62
    PUSH ESI                            ; 004b0f69
    MOV EDI,dword ptr [ESP + 0x1028]    ; 004b0f6a
    PUSH EDI                            ; 004b0f71
    MOV EBP,dword ptr [ESP + 0x1028]    ; 004b0f72
    PUSH EBP                            ; 004b0f79
    MOV EAX,dword ptr [ESP + 0x1028]    ; 004b0f7a
    PUSH EAX                            ; 004b0f81
    CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_004b0ea0 ; 004b0f82
        ;   XREF to: 004b0ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenter_FUN_004b0ea0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004b0f87
    ADD ESP,0x1000                      ; 004b0f8a
    POP EBP                             ; 004b0f90
    POP EDI                             ; 004b0f91
    POP ESI                             ; 004b0f92
    POP EBX                             ; 004b0f93
    RET                                 ; 004b0f94

