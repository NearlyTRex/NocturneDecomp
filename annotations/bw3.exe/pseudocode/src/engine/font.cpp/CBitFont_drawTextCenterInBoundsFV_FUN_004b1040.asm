; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004b1040(CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value,char *format_string,va_list_t args)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left_x
; int              Stack[0xc]:4   right_x
; int              Stack[0x10]:4   y_pos
; int              Stack[0x14]:4   color_mode
; int              Stack[0x18]:4   color_value
; char *           Stack[0x1c]:4   format_string
; va_list_t        Stack[0x20]:4   args
; Local Variables:
; undefined        Stack[-0x1010]:1  local_1010
;
; XREF[1]:
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004b0ff0 at 004b1024
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005a2898
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1040
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004b1040
    PUSH ESI                            ; 004b1041
    PUSH EDI                            ; 004b1042
    PUSH EBP                            ; 004b1043
    SUB ESP,0x1000                      ; 004b1044
    MOV EDX,dword ptr [ESP + 0x1030]    ; 004b104a
    PUSH EDX                            ; 004b1051
    MOV ECX,dword ptr [ESP + 0x1030]    ; 004b1052
    PUSH ECX                            ; 004b1059
    LEA EAX,[ESP + 0x8]                 ; 004b105a
    PUSH EAX                            ; 004b105e
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 004b105f
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005a2898()
    ADD ESP,0xc                         ; 004b1064
    MOV EAX,ESP                         ; 004b1067
    PUSH EAX                            ; 004b1069
    MOV EBX,dword ptr [ESP + 0x102c]    ; 004b106a
    PUSH EBX                            ; 004b1071
    MOV ESI,dword ptr [ESP + 0x102c]    ; 004b1072
    PUSH ESI                            ; 004b1079
    MOV EDI,dword ptr [ESP + 0x102c]    ; 004b107a
    PUSH EDI                            ; 004b1081
    MOV EBP,dword ptr [ESP + 0x102c]    ; 004b1082
    PUSH EBP                            ; 004b1089
    MOV EAX,dword ptr [ESP + 0x102c]    ; 004b108a
    PUSH EAX                            ; 004b1091
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004b1092
    PUSH EDX                            ; 004b1099
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0 ; 004b109a
        ;   XREF to: 004b0fa0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 004b109f
    ADD ESP,0x1000                      ; 004b10a2
    POP EBP                             ; 004b10a8
    POP EDI                             ; 004b10a9
    POP ESI                             ; 004b10aa
    POP EBX                             ; 004b10ab
    RET                                 ; 004b10ac

