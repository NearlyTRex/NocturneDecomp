; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004c23a0(CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *format_string)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left_x
; int              Stack[0xc]:4   right_x
; int              Stack[0x10]:4   y
; int              Stack[0x14]:4   color_mode
; int              Stack[0x18]:4   color_value
; char *           Stack[0x1c]:4   format_string
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_menu.cpp_adjustMouseSensitivity_FUN_0050a5e0 at 0050a7be
;   shape_edittool.cpp_FUN_004962b0 at 004963ac
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004c23f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c23a0
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004c23a0
    PUSH ESI                            ; 004c23a1
    PUSH EDI                            ; 004c23a2
    PUSH EBP                            ; 004c23a3
    SUB ESP,0x4                         ; 004c23a4
    LEA EAX,[ESP + 0x34]                ; 004c23a7
    MOV dword ptr [ESP],EAX             ; 004c23ab
    MOV EAX,ESP                         ; 004c23ae
    PUSH EAX                            ; 004c23b0
    MOV EDX,dword ptr [ESP + 0x34]      ; 004c23b1
    PUSH EDX                            ; 004c23b5
    MOV ECX,dword ptr [ESP + 0x34]      ; 004c23b6
    PUSH ECX                            ; 004c23ba
    MOV EBX,dword ptr [ESP + 0x34]      ; 004c23bb
    PUSH EBX                            ; 004c23bf
    MOV ESI,dword ptr [ESP + 0x34]      ; 004c23c0
    PUSH ESI                            ; 004c23c4
    MOV EDI,dword ptr [ESP + 0x34]      ; 004c23c5
    PUSH EDI                            ; 004c23c9
    MOV EBP,dword ptr [ESP + 0x34]      ; 004c23ca
    PUSH EBP                            ; 004c23ce
    MOV EAX,dword ptr [ESP + 0x34]      ; 004c23cf
    PUSH EAX                            ; 004c23d3
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004c23f0 ; 004c23d4
        ;   XREF to: 004c23f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004c23f0(CBitFont * this_ptr, int left_x, int right_x, int y_pos, ...)
    ADD ESP,0x20                        ; 004c23d9
    XOR EDX,EDX                         ; 004c23dc
    MOV dword ptr [ESP],EDX             ; 004c23de
    ADD ESP,0x4                         ; 004c23e1
    POP EBP                             ; 004c23e4
    POP EDI                             ; 004c23e5
    POP ESI                             ; 004c23e6
    POP EBX                             ; 004c23e7
    RET                                 ; 004c23e8

