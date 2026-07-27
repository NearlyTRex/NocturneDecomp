; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_00490f50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   engine_font.cpp_CBitFont_printCenterFV_FUN_00490f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490f50
        ;   Label: engine_font.cpp_FUN_00490f50
    PUSH ESI                            ; 00490f51
    PUSH EDI                            ; 00490f52
    PUSH EBP                            ; 00490f53
    SUB ESP,0x4                         ; 00490f54
    LEA EAX,[ESP + 0x2c]                ; 00490f57
    MOV dword ptr [ESP],EAX             ; 00490f5b
    MOV EAX,ESP                         ; 00490f5e
    PUSH EAX                            ; 00490f60
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00490f61
    PUSH EDX                            ; 00490f65
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00490f66
    PUSH ECX                            ; 00490f6a
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00490f6b
    PUSH EBX                            ; 00490f6f
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00490f70
    PUSH ESI                            ; 00490f74
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00490f75
    PUSH EDI                            ; 00490f79
    XOR EBP,EBP                         ; 00490f7a
    CALL engine_font.cpp_CBitFont_printCenterFV_FUN_00490f90 ; 00490f7c
        ;   XREF to: 00490f90 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_printCenterFV_FUN_00490f90()
    ADD ESP,0x18                        ; 00490f81
    MOV dword ptr [ESP],EBP             ; 00490f84
    ADD ESP,0x4                         ; 00490f87
    POP EBP                             ; 00490f8a
    POP EDI                             ; 00490f8b
    POP ESI                             ; 00490f8c
    POP EBX                             ; 00490f8d
    RET                                 ; 00490f8e

