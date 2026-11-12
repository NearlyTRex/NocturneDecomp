; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SButtonStruct * core_bmppuzzl_cpp_SButtonStruct_dtor_FUN_00414490(SButtonStruct *this_ptr,uint flags)
;
; Parameters:
; SButtonStruct *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00414490
        ;   Label: core_bmppuzzl.cpp_SButtonStruct_dtor_FUN_00414490
    MOV EDX,dword ptr [ESP + 0x8]       ; 00414492
    PUSH EDX                            ; 00414496
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300 ; 00414497
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041449c
    RET                                 ; 0041449f

