; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_drawKeyBindingEntry_FUN_0049b420(EInputCodeType key_code,char *action_name)
;
; Parameters:
; EInputCodeType   Stack[0x4]:4   key_code
; char *           Stack[0x8]:4   action_name
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; Referenced Globals:
;   TerminatedCString s_s_s_00582402
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   CBitFont* g_CBitFont_PTR_014b9900
;   undefined4 DAT_01c78adc
;   undefined4 DAT_01c78ae0
;   undefined4 DAT_01c78ae4
;
; Called Functions:
;   core_menu.cpp_getKeyDisplayName_FUN_004d2900
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b420
        ;   Label: core_game.cpp_drawKeyBindingEntry_FUN_0049b420
    PUSH ESI                            ; 0049b421
    PUSH EDI                            ; 0049b422
    PUSH EBP                            ; 0049b423
    SUB ESP,0x100                       ; 0049b424
    MOV EDX,dword ptr [ESP + 0x118]     ; 0049b42a
    PUSH EDX                            ; 0049b431
    MOV ECX,dword ptr [ESP + 0x118]     ; 0049b432
    PUSH ECX                            ; 0049b439
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 0049b43a
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004d2900(EInputCodeType key_code)
    ADD ESP,0x4                         ; 0049b43f
    PUSH EAX                            ; 0049b442
    PUSH 0x582402                       ; 0049b443 | = "%s = %s"
    LEA EAX,[ESP + 0xc]                 ; 0049b448
    PUSH EAX                            ; 0049b44c
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049b44d
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0049b452
    PUSH -0x1                           ; 0049b455
    PUSH 0x7                            ; 0049b457
    MOV EBX,dword ptr [0x01c78ae0]      ; 0049b459 | DAT_01c78ae0
    PUSH EBX                            ; 0049b45f
    MOV ESI,dword ptr [0x01c78adc]      ; 0049b460 | DAT_01c78adc
    PUSH ESI                            ; 0049b466
    LEA EAX,[ESP + 0x10]                ; 0049b467
    PUSH EAX                            ; 0049b46b
    MOV EDI,dword ptr [0x014b9900]      ; 0049b46c | g_CBitFont_PTR_014b9900
    PUSH EDI                            ; 0049b472
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049b473
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x01c78ae4]                ; 0049b478 | DAT_01c78ae4
    MOV EBP,dword ptr [0x01c78ae0]      ; 0049b47d | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049b483 | DAT_005b7620
    ADD EBP,EAX                         ; 0049b489
    SHL EAX,0x2                         ; 0049b48b
    ADD ESP,0x18                        ; 0049b48e
    SUB EDX,EAX                         ; 0049b491
    MOV dword ptr [0x01c78ae0],EBP      ; 0049b493 | DAT_01c78ae0
    CMP EDX,EBP                         ; 0049b499
    JL 0x0049b4a8                       ; 0049b49b
        ;   XREF to: 0049b4a8 (CONDITIONAL_JUMP)  ; LAB_0049b4a8
    ADD ESP,0x100                       ; 0049b49d
    POP EBP                             ; 0049b4a3
    POP EDI                             ; 0049b4a4
    POP ESI                             ; 0049b4a5
    POP EBX                             ; 0049b4a6
    RET                                 ; 0049b4a7
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049b4a8 | DAT_01c78ae4
        ;   Label: LAB_0049b4a8
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049b4ae
    SUB EAX,EDX                         ; 0049b4b5
    ADD EAX,EAX                         ; 0049b4b7
    MOV [0x01c78ae0],EAX                ; 0049b4b9 | DAT_01c78ae0
    MOV EAX,[0x005b761c]                ; 0049b4be | DAT_005b761c
    MOV EDX,EAX                         ; 0049b4c3
    MOV ECX,0x3                         ; 0049b4c5
    SAR EDX,0x1f                        ; 0049b4ca
    IDIV ECX                            ; 0049b4cd
    ADD dword ptr [0x01c78adc],EAX      ; 0049b4cf | DAT_01c78adc
    ADD ESP,0x100                       ; 0049b4d5
    POP EBP                             ; 0049b4db
    POP EDI                             ; 0049b4dc
    POP ESI                             ; 0049b4dd
    POP EBX                             ; 0049b4de
    RET                                 ; 0049b4df

