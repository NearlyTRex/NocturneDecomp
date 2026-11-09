; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a2270(int *param_1)
;
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a2270
        ;   Label: core_fldnotes.cpp_FUN_004a2270
    PUSH 0xffff                         ; 004a2274
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a2279
    PUSH EDX                            ; 004a227c
    MOV ECX,dword ptr [EAX]             ; 004a227d
    PUSH ECX                            ; 004a227f
    ADD EAX,0x18                        ; 004a2280
    PUSH EAX                            ; 004a2283
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 004a2284
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004a2289
    RET                                 ; 004a228c

