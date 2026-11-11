; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_SPageResourceBitmap_draw_FUN_004bab40(SPageResourceBitmap *this_ptr)
;
; Parameters:
; SPageResourceBitmap * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bab40
        ;   Label: core_fldnotes.cpp_SPageResourceBitmap_draw_FUN_004bab40
    PUSH 0xffff                         ; 004bab44
    MOV EDX,dword ptr [EAX + 0x4]       ; 004bab49
    PUSH EDX                            ; 004bab4c
    MOV ECX,dword ptr [EAX]             ; 004bab4d
    PUSH ECX                            ; 004bab4f
    ADD EAX,0x18                        ; 004bab50
    PUSH EAX                            ; 004bab53
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004bab54
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004bab59
    RET                                 ; 004bab5c

