; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_printCenterFV_FUN_004c2500(CBitFont *this_ptr,int y,int color_mode,int color_value,char *format_string,va_list_t args)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   color_mode
; int              Stack[0x10]:4   color_value
; char *           Stack[0x14]:4   format_string
; va_list_t        Stack[0x18]:4   args
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005bfb18
;   engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004c2460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2500
        ;   Label: engine_font.cpp_CBitFont_printCenterFV_FUN_004c2500
    PUSH ESI                            ; 004c2501
    PUSH EDI                            ; 004c2502
    PUSH EBP                            ; 004c2503
    SUB ESP,0x1000                      ; 004c2504
    MOV EDX,dword ptr [ESP + 0x1028]    ; 004c250a
    PUSH EDX                            ; 004c2511
    MOV ECX,dword ptr [ESP + 0x1028]    ; 004c2512
    PUSH ECX                            ; 004c2519
    LEA EAX,[ESP + 0x8]                 ; 004c251a
    PUSH EAX                            ; 004c251e
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 004c251f
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005bfb18(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 004c2524
    MOV EAX,ESP                         ; 004c2527
    PUSH EAX                            ; 004c2529
    MOV EBX,dword ptr [ESP + 0x1024]    ; 004c252a
    PUSH EBX                            ; 004c2531
    MOV ESI,dword ptr [ESP + 0x1024]    ; 004c2532
    PUSH ESI                            ; 004c2539
    MOV EDI,dword ptr [ESP + 0x1024]    ; 004c253a
    PUSH EDI                            ; 004c2541
    MOV EBP,dword ptr [ESP + 0x1024]    ; 004c2542
    PUSH EBP                            ; 004c2549
    CALL engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004c2460 ; 004c254a
        ;   XREF to: 004c2460 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004c2460(CBitFont * this_ptr, int y, int color_mode, int color_value, ...)
    ADD ESP,0x14                        ; 004c254f
    ADD ESP,0x1000                      ; 004c2552
    POP EBP                             ; 004c2558
    POP EDI                             ; 004c2559
    POP ESI                             ; 004c255a
    POP EBX                             ; 004c255b
    RET                                 ; 004c255c

