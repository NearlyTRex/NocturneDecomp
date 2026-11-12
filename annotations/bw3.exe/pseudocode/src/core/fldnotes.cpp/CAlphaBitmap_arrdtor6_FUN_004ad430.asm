; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * core_fldnotes_cpp_CAlphaBitmap_arrdtor6_FUN_004ad430(CAlphaBitmap *this_ptr,uint flags)
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

    PUSH 0x5dbf20                       ; 004ad430
        ;   Label: core_fldnotes.cpp_CAlphaBitmap_arrdtor6_FUN_004ad430
    PUSH 0x6                            ; 004ad435
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ad437
    PUSH EDX                            ; 004ad43b
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004ad43c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004ad441
    RET                                 ; 004ad444

