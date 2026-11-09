; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004b0ff0(CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *format_string)
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
;   core_menu.cpp_adjustMouseSensitivity_FUN_004e80f0 at 004e82ce
;   shape_edittool.cpp_FUN_0047ee50 at 0047ef4c
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004b1040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0ff0
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004b0ff0
    PUSH ESI                            ; 004b0ff1
    PUSH EDI                            ; 004b0ff2
    PUSH EBP                            ; 004b0ff3
    SUB ESP,0x4                         ; 004b0ff4
    LEA EAX,[ESP + 0x34]                ; 004b0ff7
    MOV dword ptr [ESP],EAX             ; 004b0ffb
    MOV EAX,ESP                         ; 004b0ffe
    PUSH EAX                            ; 004b1000
    MOV EDX,dword ptr [ESP + 0x34]      ; 004b1001
    PUSH EDX                            ; 004b1005
    MOV ECX,dword ptr [ESP + 0x34]      ; 004b1006
    PUSH ECX                            ; 004b100a
    MOV EBX,dword ptr [ESP + 0x34]      ; 004b100b
    PUSH EBX                            ; 004b100f
    MOV ESI,dword ptr [ESP + 0x34]      ; 004b1010
    PUSH ESI                            ; 004b1014
    MOV EDI,dword ptr [ESP + 0x34]      ; 004b1015
    PUSH EDI                            ; 004b1019
    MOV EBP,dword ptr [ESP + 0x34]      ; 004b101a
    PUSH EBP                            ; 004b101e
    MOV EAX,dword ptr [ESP + 0x34]      ; 004b101f
    PUSH EAX                            ; 004b1023
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004b1040 ; 004b1024
        ;   XREF to: 004b1040 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004b1040(CBitFont * this_ptr, int left_x, int right_x, int y_pos, ...)
    ADD ESP,0x20                        ; 004b1029
    XOR EDX,EDX                         ; 004b102c
    MOV dword ptr [ESP],EDX             ; 004b102e
    ADD ESP,0x4                         ; 004b1031
    POP EBP                             ; 004b1034
    POP EDI                             ; 004b1035
    POP ESI                             ; 004b1036
    POP EBX                             ; 004b1037
    RET                                 ; 004b1038

