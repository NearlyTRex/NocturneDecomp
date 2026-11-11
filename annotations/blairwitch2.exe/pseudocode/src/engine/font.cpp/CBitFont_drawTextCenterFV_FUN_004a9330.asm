; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextCenterFV_FUN_004a9330(CBitFont *this_ptr,int center_x,int y_pos,int color_mode,int color_value,char *format_string,va_list_t args)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   center_x
; int              Stack[0xc]:4   y_pos
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   format_string
; va_list_t        Stack[0x1c]:4   args
;
; XREF[1]:
;   engine_font.cpp_CBitFont_drawTextCenterF_FUN_004a92e0 at 004a930f
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005b7768
;   engine_font.cpp_CBitFont_drawTextCenter_FUN_004a92a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9330
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterFV_FUN_004a9330
    PUSH ESI                            ; 004a9331
    PUSH EDI                            ; 004a9332
    PUSH EBP                            ; 004a9333
    SUB ESP,0x1000                      ; 004a9334
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004a933a
    PUSH EDX                            ; 004a9341
    MOV ECX,dword ptr [ESP + 0x102c]    ; 004a9342
    PUSH ECX                            ; 004a9349
    LEA EAX,[ESP + 0x8]                 ; 004a934a
    PUSH EAX                            ; 004a934e
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 004a934f
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005b7768()
    ADD ESP,0xc                         ; 004a9354
    MOV EAX,ESP                         ; 004a9357
    PUSH EAX                            ; 004a9359
    MOV EBX,dword ptr [ESP + 0x1028]    ; 004a935a
    PUSH EBX                            ; 004a9361
    MOV ESI,dword ptr [ESP + 0x1028]    ; 004a9362
    PUSH ESI                            ; 004a9369
    MOV EDI,dword ptr [ESP + 0x1028]    ; 004a936a
    PUSH EDI                            ; 004a9371
    MOV EBP,dword ptr [ESP + 0x1028]    ; 004a9372
    PUSH EBP                            ; 004a9379
    MOV EAX,dword ptr [ESP + 0x1028]    ; 004a937a
    PUSH EAX                            ; 004a9381
    CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_004a92a0 ; 004a9382
        ;   XREF to: 004a92a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenter_FUN_004a92a0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004a9387
    ADD ESP,0x1000                      ; 004a938a
    POP EBP                             ; 004a9390
    POP EDI                             ; 004a9391
    POP ESI                             ; 004a9392
    POP EBX                             ; 004a9393
    RET                                 ; 004a9394

