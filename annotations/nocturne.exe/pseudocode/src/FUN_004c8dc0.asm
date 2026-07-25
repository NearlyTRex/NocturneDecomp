; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c8dc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_014b98f8
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8dc0
        ;   Label: FUN_004c8dc0
    PUSH ESI                            ; 004c8dc1
    PUSH EDI                            ; 004c8dc2
    PUSH EBP                            ; 004c8dc3
    MOV EDX,dword ptr [ESP + 0x14]      ; 004c8dc4
    PUSH EDX                            ; 004c8dc8
    MOV ECX,dword ptr [0x014b98f8]      ; 004c8dc9 | DAT_014b98f8
    PUSH ECX                            ; 004c8dcf
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004c8dd0
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    MOV EDX,EAX                         ; 004c8dd5
    SAR EDX,0x1f                        ; 004c8dd7
    SUB EAX,EDX                         ; 004c8dda
    SAR EAX,0x1                         ; 004c8ddc
    ADD ESP,0x8                         ; 004c8dde
    PUSH 0x0                            ; 004c8de1
    MOV EBX,dword ptr [ESP + 0x24]      ; 004c8de3
    PUSH EBX                            ; 004c8de7
    MOV ESI,dword ptr [ESP + 0x24]      ; 004c8de8
    MOV EDX,0x140                       ; 004c8dec
    PUSH ESI                            ; 004c8df1
    SUB EDX,EAX                         ; 004c8df2
    PUSH EDX                            ; 004c8df4
    MOV EDI,dword ptr [ESP + 0x24]      ; 004c8df5
    PUSH EDI                            ; 004c8df9
    MOV EBP,dword ptr [0x014b98f8]      ; 004c8dfa | DAT_014b98f8
    PUSH EBP                            ; 004c8e00
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004c8e01
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 004c8e06
    POP EBP                             ; 004c8e09
    POP EDI                             ; 004c8e0a
    POP ESI                             ; 004c8e0b
    POP EBX                             ; 004c8e0c
    RET                                 ; 004c8e0d

