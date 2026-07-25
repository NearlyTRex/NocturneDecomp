; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_CBitFont_printCenterFV_FUN_00490f90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_00490f50 at 00490f7c
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_00563a08
;   engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_00490ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490f90
        ;   Label: engine_font.cpp_CBitFont_printCenterFV_FUN_00490f90
    PUSH ESI                            ; 00490f91
    PUSH EDI                            ; 00490f92
    PUSH EBP                            ; 00490f93
    SUB ESP,0x1000                      ; 00490f94
    MOV EDX,dword ptr [ESP + 0x1028]    ; 00490f9a
    PUSH EDX                            ; 00490fa1
    MOV ECX,dword ptr [ESP + 0x1028]    ; 00490fa2
    PUSH ECX                            ; 00490fa9
    LEA EAX,[ESP + 0x8]                 ; 00490faa
    PUSH EAX                            ; 00490fae
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 00490faf
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_00563a08()
    ADD ESP,0xc                         ; 00490fb4
    MOV EAX,ESP                         ; 00490fb7
    PUSH EAX                            ; 00490fb9
    MOV EBX,dword ptr [ESP + 0x1024]    ; 00490fba
    PUSH EBX                            ; 00490fc1
    MOV ESI,dword ptr [ESP + 0x1024]    ; 00490fc2
    PUSH ESI                            ; 00490fc9
    MOV EDI,dword ptr [ESP + 0x1024]    ; 00490fca
    PUSH EDI                            ; 00490fd1
    MOV EBP,dword ptr [ESP + 0x1024]    ; 00490fd2
    PUSH EBP                            ; 00490fd9
    CALL engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_00490ef0 ; 00490fda
        ;   XREF to: 00490ef0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_00490ef0()
    ADD ESP,0x14                        ; 00490fdf
    ADD ESP,0x1000                      ; 00490fe2
    POP EBP                             ; 00490fe8
    POP EDI                             ; 00490fe9
    POP ESI                             ; 00490fea
    POP EBX                             ; 00490feb
    RET                                 ; 00490fec

