; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004a8540(int param_1,float param_2)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004a7fd0 at 004a8330
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a8540
        ;   Label: engine_font.cpp_FUN_004a8540
    FLD1                                ; 004a8544
    FDIV float ptr [ESP + 0x8]          ; 004a8546
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a854a
    MOV dword ptr [EAX + 0x4218],EDX    ; 004a854e
    FSTP float ptr [EAX + 0x421c]       ; 004a8554
    RET                                 ; 004a855a

