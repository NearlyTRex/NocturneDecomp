; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_FUN_004b31b0(CBitFont *this_ptr,int value)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   value
;
; XREF[1]:
;   core_dfont.cpp_FUN_00459f50 at 00459ffa
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b31b0
        ;   Label: engine_font.cpp_FUN_004b31b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b31b4
    MOV dword ptr [EDX + 0x4204],EAX    ; 004b31b8
    RET                                 ; 004b31be

