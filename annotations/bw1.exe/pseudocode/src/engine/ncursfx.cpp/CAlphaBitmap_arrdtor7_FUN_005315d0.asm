; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_ncursfx_cpp_CAlphaBitmap_arrdtor7_FUN_005315d0(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   engine_ncursfx.cpp_CMouse_dtor_FUN_00531280 at 0053129c
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 005315d0
        ;   Label: engine_ncursfx.cpp_CAlphaBitmap_arrdtor7_FUN_005315d0
    PUSH 0x7                            ; 005315d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005315d7
    PUSH EDX                            ; 005315db
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 005315dc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005315e1
    RET                                 ; 005315e4

