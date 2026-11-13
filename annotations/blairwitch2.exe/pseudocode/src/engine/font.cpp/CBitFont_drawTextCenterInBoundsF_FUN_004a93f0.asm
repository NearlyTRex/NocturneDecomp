; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0(CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *format_string)
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
; XREF[4]:
;   core_menu.cpp_FUN_004eba50 at 004ebc2e
;   core_menu.cpp_FUN_004ebf10 at 004ecb4b
;   core_menu.cpp_adjustMouseSensitivity_FUN_004eb7c0 at 004eb99e
;   shape_edittool.cpp_FUN_0047dc40 at 0047dd3c
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004a9440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a93f0
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0
    PUSH ESI                            ; 004a93f1
    PUSH EDI                            ; 004a93f2
    PUSH EBP                            ; 004a93f3
    SUB ESP,0x4                         ; 004a93f4
    LEA EAX,[ESP + 0x34]                ; 004a93f7
    MOV dword ptr [ESP],EAX             ; 004a93fb
    MOV EAX,ESP                         ; 004a93fe
    PUSH EAX                            ; 004a9400
    MOV EDX,dword ptr [ESP + 0x34]      ; 004a9401
    PUSH EDX                            ; 004a9405
    MOV ECX,dword ptr [ESP + 0x34]      ; 004a9406
    PUSH ECX                            ; 004a940a
    MOV EBX,dword ptr [ESP + 0x34]      ; 004a940b
    PUSH EBX                            ; 004a940f
    MOV ESI,dword ptr [ESP + 0x34]      ; 004a9410
    PUSH ESI                            ; 004a9414
    MOV EDI,dword ptr [ESP + 0x34]      ; 004a9415
    PUSH EDI                            ; 004a9419
    MOV EBP,dword ptr [ESP + 0x34]      ; 004a941a
    PUSH EBP                            ; 004a941e
    MOV EAX,dword ptr [ESP + 0x34]      ; 004a941f
    PUSH EAX                            ; 004a9423
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004a9440 ; 004a9424
        ;   XREF to: 004a9440 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004a9440(CBitFont * this_ptr, int left_x, int right_x, int y_pos, ...)
    ADD ESP,0x20                        ; 004a9429
    XOR EDX,EDX                         ; 004a942c
    MOV dword ptr [ESP],EDX             ; 004a942e
    ADD ESP,0x4                         ; 004a9431
    POP EBP                             ; 004a9434
    POP EDI                             ; 004a9435
    POP ESI                             ; 004a9436
    POP EBX                             ; 004a9437
    RET                                 ; 004a9438

