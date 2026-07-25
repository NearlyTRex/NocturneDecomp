; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00476f40(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01bcd070
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;   shape_edittool.cpp_draw3DBorder_FUN_00476260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476f40
        ;   Label: FUN_00476f40
    PUSH ESI                            ; 00476f41
    PUSH EDI                            ; 00476f42
    PUSH EBP                            ; 00476f43
    MOV EBX,dword ptr [ESP + 0x14]      ; 00476f44
    MOV EDX,dword ptr [EBX + 0x14]      ; 00476f48
    PUSH EDX                            ; 00476f4b
    MOV ECX,dword ptr [EBX + 0x10]      ; 00476f4c
    PUSH ECX                            ; 00476f4f
    MOV ESI,dword ptr [EBX + 0xc]       ; 00476f50
    PUSH ESI                            ; 00476f53
    MOV EDI,dword ptr [EBX + 0x8]       ; 00476f54
    PUSH EDI                            ; 00476f57
    MOV EBP,dword ptr [EBX + 0x4]       ; 00476f58
    PUSH EBP                            ; 00476f5b
    CALL shape_edittool.cpp_draw3DBorder_FUN_00476260 ; 00476f5c
        ;   XREF to: 00476260 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_draw3DBorder_FUN_00476260()
    ADD ESP,0x14                        ; 00476f61
    LEA ESI,[EBX + 0x18]                ; 00476f64
    PUSH ESI                            ; 00476f67
    MOV EAX,[0x01bcd070]                ; 00476f68 | DAT_01bcd070
    PUSH EAX                            ; 00476f6d
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 00476f6e
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 00476f73
    PUSH ESI                            ; 00476f76
    MOV EDX,dword ptr [0x01bcd070]      ; 00476f77 | DAT_01bcd070
    PUSH EDX                            ; 00476f7d
    MOV EDI,EAX                         ; 00476f7e
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60 ; 00476f80
        ;   XREF to: 00492e60 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60()
    MOV EDX,dword ptr [EBX + 0x8]       ; 00476f85
    ADD EDX,dword ptr [EBX + 0x10]      ; 00476f88
    SUB EDX,EAX                         ; 00476f8b
    MOV EAX,EDX                         ; 00476f8d
    SAR EDX,0x1f                        ; 00476f8f
    SUB EAX,EDX                         ; 00476f92
    SAR EAX,0x1                         ; 00476f94
    ADD ESP,0x8                         ; 00476f96
    MOV EBP,dword ptr [EBX + 0xc]       ; 00476f99
    MOV EDX,dword ptr [EBX + 0x4]       ; 00476f9c
    PUSH -0x1                           ; 00476f9f
    ADD EDX,EBP                         ; 00476fa1
    PUSH 0x0                            ; 00476fa3
    SUB EDX,EDI                         ; 00476fa5
    PUSH EAX                            ; 00476fa7
    MOV EAX,EDX                         ; 00476fa8
    SAR EDX,0x1f                        ; 00476faa
    SUB EAX,EDX                         ; 00476fad
    SAR EAX,0x1                         ; 00476faf
    PUSH EAX                            ; 00476fb1
    PUSH ESI                            ; 00476fb2
    MOV EAX,[0x01bcd070]                ; 00476fb3 | DAT_01bcd070
    PUSH EAX                            ; 00476fb8
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 00476fb9
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 00476fbe
    POP EBP                             ; 00476fc1
    POP EDI                             ; 00476fc2
    POP ESI                             ; 00476fc3
    POP EBX                             ; 00476fc4
    RET                                 ; 00476fc5

