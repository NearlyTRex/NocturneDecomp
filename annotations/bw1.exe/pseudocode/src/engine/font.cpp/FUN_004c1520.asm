; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004c1520(int param_1,float param_2)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004c0fa0 at 004c1316
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c1520
        ;   Label: engine_font.cpp_FUN_004c1520
    FLD1                                ; 004c1524
    FDIV float ptr [ESP + 0x8]          ; 004c1526
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c152a
    MOV dword ptr [EAX + 0x4218],EDX    ; 004c152e
    FSTP float ptr [EAX + 0x421c]       ; 004c1534
    RET                                 ; 004c153a

