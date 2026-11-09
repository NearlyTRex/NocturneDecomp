; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_printCenterFV_FUN_004a9550(CBitFont *this_ptr,int y,int color_mode,int color_value,undefined4 format_string,undefined4 param_6)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   color_mode
; int              Stack[0x10]:4   color_value
; char *           Stack[0x14]:4   format_string
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005b7768
;   engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004a94b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9550
        ;   Label: engine_font.cpp_CBitFont_printCenterFV_FUN_004a9550
    PUSH ESI                            ; 004a9551
    PUSH EDI                            ; 004a9552
    PUSH EBP                            ; 004a9553
    SUB ESP,0x1000                      ; 004a9554
    MOV EDX,dword ptr [ESP + 0x1028]    ; 004a955a
    PUSH EDX                            ; 004a9561
    MOV ECX,dword ptr [ESP + 0x1028]    ; 004a9562
    PUSH ECX                            ; 004a9569
    LEA EAX,[ESP + 0x8]                 ; 004a956a
    PUSH EAX                            ; 004a956e
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 004a956f
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005b7768()
    ADD ESP,0xc                         ; 004a9574
    MOV EAX,ESP                         ; 004a9577
    PUSH EAX                            ; 004a9579
    MOV EBX,dword ptr [ESP + 0x1024]    ; 004a957a
    PUSH EBX                            ; 004a9581
    MOV ESI,dword ptr [ESP + 0x1024]    ; 004a9582
    PUSH ESI                            ; 004a9589
    MOV EDI,dword ptr [ESP + 0x1024]    ; 004a958a
    PUSH EDI                            ; 004a9591
    MOV EBP,dword ptr [ESP + 0x1024]    ; 004a9592
    PUSH EBP                            ; 004a9599
    CALL engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004a94b0 ; 004a959a
        ;   XREF to: 004a94b0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004a94b0(CBitFont * this_ptr, int y, int color_mode, int color_value, ...)
    ADD ESP,0x14                        ; 004a959f
    ADD ESP,0x1000                      ; 004a95a2
    POP EBP                             ; 004a95a8
    POP EDI                             ; 004a95a9
    POP ESI                             ; 004a95aa
    POP EBX                             ; 004a95ab
    RET                                 ; 004a95ac

