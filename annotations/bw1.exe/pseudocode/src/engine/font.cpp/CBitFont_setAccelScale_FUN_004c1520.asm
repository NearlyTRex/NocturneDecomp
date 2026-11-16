; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_setAccelScale_FUN_004c1520(CBitFont *this_ptr,float scale)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   scale
;
; XREF[1]:
;   engine_font.cpp_CBitFont_setAcceleration_FUN_004c0fa0 at 004c1316
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c1520
        ;   Label: engine_font.cpp_CBitFont_setAccelScale_FUN_004c1520
    FLD1                                ; 004c1524
    FDIV float ptr [ESP + 0x8]          ; 004c1526
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c152a
    MOV dword ptr [EAX + 0x4218],EDX    ; 004c152e
    FSTP float ptr [EAX + 0x421c]       ; 004c1534
    RET                                 ; 004c153a

