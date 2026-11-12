; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * core_fldnotes_cpp_CAlphaBitmap_arrdtor6_FUN_004bf6e0(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 004bf6e0
        ;   Label: core_fldnotes.cpp_CAlphaBitmap_arrdtor6_FUN_004bf6e0
    PUSH 0x6                            ; 004bf6e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bf6e7
    PUSH EDX                            ; 004bf6eb
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004bf6ec
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005c1066()
    ADD ESP,0xc                         ; 004bf6f1
    RET                                 ; 004bf6f4

