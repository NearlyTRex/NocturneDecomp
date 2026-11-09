; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004a9440(CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value,undefined4 format_string,undefined4 param_8)
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
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0 at 004a9424
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005b7768
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9440
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004a9440
    PUSH ESI                            ; 004a9441
    PUSH EDI                            ; 004a9442
    PUSH EBP                            ; 004a9443
    SUB ESP,0x1000                      ; 004a9444
    MOV EDX,dword ptr [ESP + 0x1030]    ; 004a944a
    PUSH EDX                            ; 004a9451
    MOV ECX,dword ptr [ESP + 0x1030]    ; 004a9452
    PUSH ECX                            ; 004a9459
    LEA EAX,[ESP + 0x8]                 ; 004a945a
    PUSH EAX                            ; 004a945e
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 004a945f
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005b7768()
    ADD ESP,0xc                         ; 004a9464
    MOV EAX,ESP                         ; 004a9467
    PUSH EAX                            ; 004a9469
    MOV EBX,dword ptr [ESP + 0x102c]    ; 004a946a
    PUSH EBX                            ; 004a9471
    MOV ESI,dword ptr [ESP + 0x102c]    ; 004a9472
    PUSH ESI                            ; 004a9479
    MOV EDI,dword ptr [ESP + 0x102c]    ; 004a947a
    PUSH EDI                            ; 004a9481
    MOV EBP,dword ptr [ESP + 0x102c]    ; 004a9482
    PUSH EBP                            ; 004a9489
    MOV EAX,dword ptr [ESP + 0x102c]    ; 004a948a
    PUSH EAX                            ; 004a9491
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004a9492
    PUSH EDX                            ; 004a9499
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0 ; 004a949a
        ;   XREF to: 004a93a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 004a949f
    ADD ESP,0x1000                      ; 004a94a2
    POP EBP                             ; 004a94a8
    POP EDI                             ; 004a94a9
    POP ESI                             ; 004a94aa
    POP EBX                             ; 004a94ab
    RET                                 ; 004a94ac

