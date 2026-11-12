; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl core_game_cpp_CAlphaBitmap_arrdtor8_FUN_004dc1f0(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   engine_ncursfx.cpp_CMouse_dtor_FUN_00531280 at 005312ac
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 004dc1f0
        ;   Label: core_game.cpp_CAlphaBitmap_arrdtor8_FUN_004dc1f0
    PUSH 0x8                            ; 004dc1f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004dc1f7
    PUSH EDX                            ; 004dc1fb
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004dc1fc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004dc201
    RET                                 ; 004dc204

