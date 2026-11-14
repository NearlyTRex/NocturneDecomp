; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_arrdtor5_FUN_004144e0(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbf20                       ; 004144e0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_arrdtor5_FUN_004144e0
    PUSH 0x5                            ; 004144e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004144e7
    PUSH EDX                            ; 004144eb
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004144ec
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004144f1
    RET                                 ; 004144f4

