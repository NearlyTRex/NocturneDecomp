; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_menu.cpp_adjustMouseSensitivity_FUN_004cfbc0 at 004cfd9e
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760 at 00471859
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_00490e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490e30
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30
    PUSH ESI                            ; 00490e31
    PUSH EDI                            ; 00490e32
    PUSH EBP                            ; 00490e33
    SUB ESP,0x4                         ; 00490e34
    LEA EAX,[ESP + 0x34]                ; 00490e37
    MOV dword ptr [ESP],EAX             ; 00490e3b
    MOV EAX,ESP                         ; 00490e3e
    PUSH EAX                            ; 00490e40
    MOV EDX,dword ptr [ESP + 0x34]      ; 00490e41
    PUSH EDX                            ; 00490e45
    MOV ECX,dword ptr [ESP + 0x34]      ; 00490e46
    PUSH ECX                            ; 00490e4a
    MOV EBX,dword ptr [ESP + 0x34]      ; 00490e4b
    PUSH EBX                            ; 00490e4f
    MOV ESI,dword ptr [ESP + 0x34]      ; 00490e50
    PUSH ESI                            ; 00490e54
    MOV EDI,dword ptr [ESP + 0x34]      ; 00490e55
    PUSH EDI                            ; 00490e59
    MOV EBP,dword ptr [ESP + 0x34]      ; 00490e5a
    PUSH EBP                            ; 00490e5e
    MOV EAX,dword ptr [ESP + 0x34]      ; 00490e5f
    PUSH EAX                            ; 00490e63
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_00490e80 ; 00490e64
        ;   XREF to: 00490e80 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_00490e80()
    ADD ESP,0x20                        ; 00490e69
    XOR EDX,EDX                         ; 00490e6c
    MOV dword ptr [ESP],EDX             ; 00490e6e
    ADD ESP,0x4                         ; 00490e71
    POP EBP                             ; 00490e74
    POP EDI                             ; 00490e75
    POP ESI                             ; 00490e76
    POP EBX                             ; 00490e77
    RET                                 ; 00490e78

