; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SButtonStruct * unkafter_superopt_cpp_SButtonStruct_dtor_FUN_00418880(SButtonStruct *this_ptr,uint flags)
;
; Parameters:
; SButtonStruct *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00418880
        ;   Label: unkafter_superopt.cpp_SButtonStruct_dtor_FUN_00418880
    MOV EDX,dword ptr [ESP + 0x8]       ; 00418882
    PUSH EDX                            ; 00418886
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0 ; 00418887
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041888c
    RET                                 ; 0041888f

