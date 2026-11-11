; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SButtonStruct * unkafter_superopt_cpp_SButtonStruct_ctor_FUN_00418870(SButtonStruct *this_ptr)
;
; Parameters:
; SButtonStruct *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00418870
        ;   Label: unkafter_superopt.cpp_SButtonStruct_ctor_FUN_00418870
    PUSH EDX                            ; 00418874
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 00418875
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0041887a
    RET                                 ; 0041887d

