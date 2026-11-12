; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SButtonStruct * core_bmppuzzl_cpp_SButtonStruct_ctor_FUN_0059bf30(SButtonStruct *this_ptr)
;
; Parameters:
; SButtonStruct *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059bf30
        ;   Label: core_bmppuzzl.cpp_SButtonStruct_ctor_FUN_0059bf30
    PUSH EDX                            ; 0059bf34
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420 ; 0059bf35
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0059bf3a
    RET                                 ; 0059bf3d

