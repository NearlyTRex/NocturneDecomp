; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_menu.cpp_showJoystickCalibrationScreen_FUN_00510410(char * instruction_text, char * message_text)
;
; Parameters:
; char *           Stack[0x4]:4   instruction_text
; char *           Stack[0x8]:4   message_text
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; Referenced Globals:
;   TerminatedCString s_d_d_x_006365f8
;   CBitFont* g_MediumFont
;   DWORD g_JoyXPos
;   DWORD g_JoyYPos
;   DWORD g_JoyButtons
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510410
        ;   Label: core_menu.cpp_showJoystickCalibrationScreen_FUN_00510410
    PUSH ESI                            ; 00510411
    PUSH EDI                            ; 00510412
    PUSH EBP                            ; 00510413
    SUB ESP,0x100                       ; 00510414
    MOV EDX,dword ptr [ESP + 0x114]     ; 0051041a
    PUSH EDX                            ; 00510421
    MOV ECX,dword ptr [0x020a5718]      ; 00510422 | g_MediumFont
    PUSH ECX                            ; 00510428
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 00510429
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 0051042e
    SAR EDX,0x1f                        ; 00510430
    SUB EAX,EDX                         ; 00510433
    SAR EAX,0x1                         ; 00510435
    ADD ESP,0x8                         ; 00510437
    PUSH 0x58                           ; 0051043a
    MOV ESI,dword ptr [0x020a5718]      ; 0051043c | g_MediumFont
    MOV EBX,0x140                       ; 00510442
    PUSH ESI                            ; 00510447
    SUB EBX,EAX                         ; 00510448
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 0051044a
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    MOV EDX,EAX                         ; 0051044f
    SAR EDX,0x1f                        ; 00510451
    SUB EAX,EDX                         ; 00510454
    SAR EAX,0x1                         ; 00510456
    ADD ESP,0x8                         ; 00510458
    PUSH 0x0                            ; 0051045b
    MOV EDX,0xf0                        ; 0051045d
    PUSH 0x7                            ; 00510462
    SUB EDX,EAX                         ; 00510464
    PUSH EDX                            ; 00510466
    PUSH EBX                            ; 00510467
    MOV EDI,dword ptr [ESP + 0x124]     ; 00510468
    PUSH EDI                            ; 0051046f
    MOV EBP,dword ptr [0x020a5718]      ; 00510470 | g_MediumFont
    PUSH EBP                            ; 00510476
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 00510477
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
    ADD ESP,0x18                        ; 0051047c
    MOV EAX,[0x02d05208]                ; 0051047f | g_JoyButtons
    PUSH EAX                            ; 00510484
    MOV EDX,dword ptr [0x02d051fc]      ; 00510485 | g_JoyYPos
    PUSH EDX                            ; 0051048b
    MOV ECX,dword ptr [0x02d051f8]      ; 0051048c | g_JoyXPos
    PUSH ECX                            ; 00510492
    PUSH 0x6365f8                       ; 00510493 | = "%d,%d,%x"
    LEA EAX,[ESP + 0x10]                ; 00510498
    PUSH EAX                            ; 0051049c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0051049d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 005104a2
    PUSH 0x0                            ; 005104a5
    PUSH 0x0                            ; 005104a7
    LEA EAX,[ESP + 0x8]                 ; 005104a9
    PUSH EAX                            ; 005104ad
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005104ae
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 005104b3
    ADD ESP,0x100                       ; 005104b6
    POP EBP                             ; 005104bc
    POP EDI                             ; 005104bd
    POP ESI                             ; 005104be
    POP EBX                             ; 005104bf
    RET                                 ; 005104c0

