; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_printF_FUN_00490c20(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format,...)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   format
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   engine_font.cpp_CBitFont_printFV_FUN_00490c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490c20
        ;   Label: engine_font.cpp_CBitFont_printF_FUN_00490c20
    PUSH ESI                            ; 00490c21
    PUSH EDI                            ; 00490c22
    PUSH EBP                            ; 00490c23
    SUB ESP,0x4                         ; 00490c24
    LEA EAX,[ESP + 0x30]                ; 00490c27
    MOV dword ptr [ESP],EAX             ; 00490c2b
    MOV EAX,ESP                         ; 00490c2e
    PUSH EAX                            ; 00490c30
    MOV EDX,dword ptr [ESP + 0x30]      ; 00490c31
    PUSH EDX                            ; 00490c35
    MOV ECX,dword ptr [ESP + 0x30]      ; 00490c36
    PUSH ECX                            ; 00490c3a
    MOV EBX,dword ptr [ESP + 0x30]      ; 00490c3b
    PUSH EBX                            ; 00490c3f
    MOV ESI,dword ptr [ESP + 0x30]      ; 00490c40
    PUSH ESI                            ; 00490c44
    MOV EDI,dword ptr [ESP + 0x30]      ; 00490c45
    PUSH EDI                            ; 00490c49
    MOV EBP,dword ptr [ESP + 0x30]      ; 00490c4a
    PUSH EBP                            ; 00490c4e
    CALL engine_font.cpp_CBitFont_printFV_FUN_00490c70 ; 00490c4f
        ;   XREF to: 00490c70 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_printFV_FUN_00490c70(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x1c                        ; 00490c54
    XOR EDX,EDX                         ; 00490c57
    MOV dword ptr [ESP],EDX             ; 00490c59
    ADD ESP,0x4                         ; 00490c5c
    POP EBP                             ; 00490c5f
    POP EDI                             ; 00490c60
    POP ESI                             ; 00490c61
    POP EBX                             ; 00490c62
    RET                                 ; 00490c63

