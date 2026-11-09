; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004b0170(int param_1,float param_2)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004afbf0 at 004aff66
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b0170
        ;   Label: engine_font.cpp_FUN_004b0170
    FLD1                                ; 004b0174
    FDIV float ptr [ESP + 0x8]          ; 004b0176
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b017a
    MOV dword ptr [EAX + 0x4218],EDX    ; 004b017e
    FSTP float ptr [EAX + 0x421c]       ; 004b0184
    RET                                 ; 004b018a

