; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SButtonStruct * core_bmppuzzl_cpp_SButtonStruct_dtor_FUN_0059bf40(SButtonStruct *this_ptr,uint flags)
;
; Parameters:
; SButtonStruct *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0059bf40
        ;   Label: core_bmppuzzl.cpp_SButtonStruct_dtor_FUN_0059bf40
    MOV EDX,dword ptr [ESP + 0x8]       ; 0059bf42
    PUSH EDX                            ; 0059bf46
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440 ; 0059bf47
        ;   XREF to: 0040d440 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059bf4c
    RET                                 ; 0059bf4f

