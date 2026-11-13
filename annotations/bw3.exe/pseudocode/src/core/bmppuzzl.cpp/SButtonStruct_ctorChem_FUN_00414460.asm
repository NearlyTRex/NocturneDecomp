; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SButtonStruct * __cdecl core_bmppuzzl_cpp_SButtonStruct_ctorChem_FUN_00414460(SButtonStruct *this_ptr)
;
; Parameters:
; SButtonStruct *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00414460
        ;   Label: core_bmppuzzl.cpp_SButtonStruct_ctorChem_FUN_00414460
    PUSH EDX                            ; 00414464
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 00414465
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0041446a
    RET                                 ; 0041446d

