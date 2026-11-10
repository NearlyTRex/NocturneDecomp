; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_showJoystickCalibrationScreen_FUN_0050a1f0(char *instruction_text,char *message_text)
;
; Parameters:
; char *           Stack[0x4]:4   instruction_text
; char *           Stack[0x8]:4   message_text
;
; Referenced Globals:
;   undefined4 DAT_0152d23c
;   undefined4 DAT_01c51cb0
;   undefined4 DAT_01c51cb4
;   undefined4 DAT_01c51cc0
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0
;   engine_font.cpp_FUN_004c1dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a1f0
        ;   Label: core_menu.cpp_showJoystickCalibrationScreen_FUN_0050a1f0
    PUSH ESI                            ; 0050a1f1
    PUSH EDI                            ; 0050a1f2
    PUSH EBP                            ; 0050a1f3
    SUB ESP,0x100                       ; 0050a1f4
    MOV EDX,dword ptr [ESP + 0x114]     ; 0050a1fa
    PUSH EDX                            ; 0050a201
    MOV ECX,dword ptr [0x0152d23c]      ; 0050a202 | DAT_0152d23c
    PUSH ECX                            ; 0050a208
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 0050a209
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 0050a20e
    SAR EDX,0x1f                        ; 0050a210
    SUB EAX,EDX                         ; 0050a213
    SAR EAX,0x1                         ; 0050a215
    ADD ESP,0x8                         ; 0050a217
    PUSH 0x58                           ; 0050a21a
    MOV ESI,dword ptr [0x0152d23c]      ; 0050a21c | DAT_0152d23c
    MOV EBX,0x140                       ; 0050a222
    PUSH ESI                            ; 0050a227
    SUB EBX,EAX                         ; 0050a228
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 0050a22a
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    MOV EDX,EAX                         ; 0050a22f
    SAR EDX,0x1f                        ; 0050a231
    SUB EAX,EDX                         ; 0050a234
    SAR EAX,0x1                         ; 0050a236
    ADD ESP,0x8                         ; 0050a238
    PUSH 0x0                            ; 0050a23b
    MOV EDX,0xf0                        ; 0050a23d
    PUSH 0x7                            ; 0050a242
    SUB EDX,EAX                         ; 0050a244
    PUSH EDX                            ; 0050a246
    PUSH EBX                            ; 0050a247
    MOV EDI,dword ptr [ESP + 0x124]     ; 0050a248
    PUSH EDI                            ; 0050a24f
    MOV EBP,dword ptr [0x0152d23c]      ; 0050a250 | DAT_0152d23c
    PUSH EBP                            ; 0050a256
    CALL engine_font.cpp_FUN_004c1dd0   ; 0050a257
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 0050a25c
    MOV EAX,[0x01c51cc0]                ; 0050a25f | DAT_01c51cc0
    PUSH EAX                            ; 0050a264
    MOV EDX,dword ptr [0x01c51cb4]      ; 0050a265 | DAT_01c51cb4
    PUSH EDX                            ; 0050a26b
    MOV ECX,dword ptr [0x01c51cb0]      ; 0050a26c | DAT_01c51cb0
    PUSH ECX                            ; 0050a272
    PUSH 0x5e7aae                       ; 0050a273
    LEA EAX,[ESP + 0x10]                ; 0050a278
    PUSH EAX                            ; 0050a27c
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0050a27d
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x14                        ; 0050a282
    PUSH 0x0                            ; 0050a285
    PUSH 0x0                            ; 0050a287
    LEA EAX,[ESP + 0x8]                 ; 0050a289
    PUSH EAX                            ; 0050a28d
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050a28e
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050a293
    ADD ESP,0x100                       ; 0050a296
    POP EBP                             ; 0050a29c
    POP EDI                             ; 0050a29d
    POP ESI                             ; 0050a29e
    POP EBX                             ; 0050a29f
    RET                                 ; 0050a2a0

