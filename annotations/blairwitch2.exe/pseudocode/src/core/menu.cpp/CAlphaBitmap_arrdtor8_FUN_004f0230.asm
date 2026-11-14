; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl core_menu_cpp_CAlphaBitmap_arrdtor8_FUN_004f0230(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   engine_ncursfx.cpp_CMouse_dtor_FUN_00510070 at 0051009c
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6f60                       ; 004f0230
        ;   Label: core_menu.cpp_CAlphaBitmap_arrdtor8_FUN_004f0230
    PUSH 0x8                            ; 004f0235
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f0237
    PUSH EDX                            ; 004f023b
    CALL crt_memory.c___arrfini_FUN_005b854f ; 004f023c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004f0241
    RET                                 ; 004f0244

