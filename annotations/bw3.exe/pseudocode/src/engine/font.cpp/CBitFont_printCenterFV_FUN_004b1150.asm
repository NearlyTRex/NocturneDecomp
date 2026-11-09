; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_printCenterFV_FUN_004b1150(CBitFont *this_ptr,int y,int color_mode,int color_value,undefined4 format_string,undefined4 param_6)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   color_mode
; int              Stack[0x10]:4   color_value
; char *           Stack[0x14]:4   format_string
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005a2898
;   engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004b10b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1150
        ;   Label: engine_font.cpp_CBitFont_printCenterFV_FUN_004b1150
    PUSH ESI                            ; 004b1151
    PUSH EDI                            ; 004b1152
    PUSH EBP                            ; 004b1153
    SUB ESP,0x1000                      ; 004b1154
    MOV EDX,dword ptr [ESP + 0x1028]    ; 004b115a
    PUSH EDX                            ; 004b1161
    MOV ECX,dword ptr [ESP + 0x1028]    ; 004b1162
    PUSH ECX                            ; 004b1169
    LEA EAX,[ESP + 0x8]                 ; 004b116a
    PUSH EAX                            ; 004b116e
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 004b116f
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005a2898()
    ADD ESP,0xc                         ; 004b1174
    MOV EAX,ESP                         ; 004b1177
    PUSH EAX                            ; 004b1179
    MOV EBX,dword ptr [ESP + 0x1024]    ; 004b117a
    PUSH EBX                            ; 004b1181
    MOV ESI,dword ptr [ESP + 0x1024]    ; 004b1182
    PUSH ESI                            ; 004b1189
    MOV EDI,dword ptr [ESP + 0x1024]    ; 004b118a
    PUSH EDI                            ; 004b1191
    MOV EBP,dword ptr [ESP + 0x1024]    ; 004b1192
    PUSH EBP                            ; 004b1199
    CALL engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004b10b0 ; 004b119a
        ;   XREF to: 004b10b0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004b10b0(CBitFont * this_ptr, int y, int color_mode, int color_value, ...)
    ADD ESP,0x14                        ; 004b119f
    ADD ESP,0x1000                      ; 004b11a2
    POP EBP                             ; 004b11a8
    POP EDI                             ; 004b11a9
    POP ESI                             ; 004b11aa
    POP EBX                             ; 004b11ab
    RET                                 ; 004b11ac

