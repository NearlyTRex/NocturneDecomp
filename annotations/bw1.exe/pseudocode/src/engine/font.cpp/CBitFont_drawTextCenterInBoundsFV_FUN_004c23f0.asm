; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004c23f0(CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value,undefined4 format_string,undefined4 param_8)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left_x
; int              Stack[0xc]:4   right_x
; int              Stack[0x10]:4   y_pos
; int              Stack[0x14]:4   color_mode
; int              Stack[0x18]:4   color_value
; char *           Stack[0x1c]:4   format_string
; Local Variables:
; undefined        Stack[-0x1010]:1  local_1010
;
; XREF[1]:
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004c23a0 at 004c23d4
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005bfb18
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c23f0
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004c23f0
    PUSH ESI                            ; 004c23f1
    PUSH EDI                            ; 004c23f2
    PUSH EBP                            ; 004c23f3
    SUB ESP,0x1000                      ; 004c23f4
    MOV EDX,dword ptr [ESP + 0x1030]    ; 004c23fa
    PUSH EDX                            ; 004c2401
    MOV ECX,dword ptr [ESP + 0x1030]    ; 004c2402
    PUSH ECX                            ; 004c2409
    LEA EAX,[ESP + 0x8]                 ; 004c240a
    PUSH EAX                            ; 004c240e
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 004c240f
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005bfb18()
    ADD ESP,0xc                         ; 004c2414
    MOV EAX,ESP                         ; 004c2417
    PUSH EAX                            ; 004c2419
    MOV EBX,dword ptr [ESP + 0x102c]    ; 004c241a
    PUSH EBX                            ; 004c2421
    MOV ESI,dword ptr [ESP + 0x102c]    ; 004c2422
    PUSH ESI                            ; 004c2429
    MOV EDI,dword ptr [ESP + 0x102c]    ; 004c242a
    PUSH EDI                            ; 004c2431
    MOV EBP,dword ptr [ESP + 0x102c]    ; 004c2432
    PUSH EBP                            ; 004c2439
    MOV EAX,dword ptr [ESP + 0x102c]    ; 004c243a
    PUSH EAX                            ; 004c2441
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004c2442
    PUSH EDX                            ; 004c2449
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350 ; 004c244a
        ;   XREF to: 004c2350 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 004c244f
    ADD ESP,0x1000                      ; 004c2452
    POP EBP                             ; 004c2458
    POP EDI                             ; 004c2459
    POP ESI                             ; 004c245a
    POP EBX                             ; 004c245b
    RET                                 ; 004c245c

