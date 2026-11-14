; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_arrdtor5_FUN_004188d0(CAlphaBitmap *this_ptr,uint flags)
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

    PUSH 0x5fca10                       ; 004188d0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_arrdtor5_FUN_004188d0
    PUSH 0x5                            ; 004188d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004188d7
    PUSH EDX                            ; 004188db
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004188dc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004188e1
    RET                                 ; 004188e4

