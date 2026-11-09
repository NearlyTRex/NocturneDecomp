; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a8780(int *param_1)
;
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a8780
        ;   Label: core_fldnotes.cpp_FUN_004a8780
    PUSH 0xffff                         ; 004a8784
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a8789
    PUSH EDX                            ; 004a878c
    MOV ECX,dword ptr [EAX]             ; 004a878d
    PUSH ECX                            ; 004a878f
    ADD EAX,0x18                        ; 004a8790
    PUSH EAX                            ; 004a8793
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004a8794
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004a8799
    RET                                 ; 004a879c

