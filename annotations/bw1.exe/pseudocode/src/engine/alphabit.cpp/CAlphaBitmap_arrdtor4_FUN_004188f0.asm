; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * engine_alphabit_cpp_CAlphaBitmap_arrdtor4_FUN_004188f0(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 004188f0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_arrdtor4_FUN_004188f0
    PUSH 0x4                            ; 004188f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004188f7
    PUSH EDX                            ; 004188fb
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004188fc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00418901
    RET                                 ; 00418904

