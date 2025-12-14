; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30(CBitFont * this_ptr, int left_x, int right_x, int y_pos, int color_mode, int color_value, char * format_string, ...)
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_menu.cpp_adjustMouseSensitivity_FUN_005107c0 at 0051099e
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 at 004a0624
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdf30
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
    PUSH ESI                            ; 004cdf31
    PUSH EDI                            ; 004cdf32
    PUSH EBP                            ; 004cdf33
    SUB ESP,0x4                         ; 004cdf34
    LEA EAX,[ESP + 0x34]                ; 004cdf37
    MOV dword ptr [ESP],EAX             ; 004cdf3b
    MOV EAX,ESP                         ; 004cdf3e
    PUSH EAX                            ; 004cdf40
    MOV EDX,dword ptr [ESP + 0x34]      ; 004cdf41
    PUSH EDX                            ; 004cdf45
    MOV ECX,dword ptr [ESP + 0x34]      ; 004cdf46
    PUSH ECX                            ; 004cdf4a
    MOV EBX,dword ptr [ESP + 0x34]      ; 004cdf4b
    PUSH EBX                            ; 004cdf4f
    MOV ESI,dword ptr [ESP + 0x34]      ; 004cdf50
    PUSH ESI                            ; 004cdf54
    MOV EDI,dword ptr [ESP + 0x34]      ; 004cdf55
    PUSH EDI                            ; 004cdf59
    MOV EBP,dword ptr [ESP + 0x34]      ; 004cdf5a
    PUSH EBP                            ; 004cdf5e
    MOV EAX,dword ptr [ESP + 0x34]      ; 004cdf5f
    PUSH EAX                            ; 004cdf63
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80 ; 004cdf64
        ;   XREF to: 004cdf80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80(CBitFont * this_ptr, int left_x, int right_x, int y_pos, ...)
    ADD ESP,0x20                        ; 004cdf69
    XOR EDX,EDX                         ; 004cdf6c
    MOV dword ptr [ESP],EDX             ; 004cdf6e
    ADD ESP,0x4                         ; 004cdf71
    POP EBP                             ; 004cdf74
    POP EDI                             ; 004cdf75
    POP ESI                             ; 004cdf76
    POP EBX                             ; 004cdf77
    RET                                 ; 004cdf78

