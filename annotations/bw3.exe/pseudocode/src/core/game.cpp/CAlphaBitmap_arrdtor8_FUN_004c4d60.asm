; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl core_game_cpp_CAlphaBitmap_arrdtor8_FUN_004c4d60(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   engine_ncursfx.cpp_CMouse_dtor_FUN_00508b50 at 00508b7c
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbf20                       ; 004c4d60
        ;   Label: core_game.cpp_CAlphaBitmap_arrdtor8_FUN_004c4d60
    PUSH 0x8                            ; 004c4d65
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c4d67
    PUSH EDX                            ; 004c4d6b
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004c4d6c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c4d71
    RET                                 ; 004c4d74

