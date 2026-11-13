; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl core_moon_cpp_CAlphaBitmap_arrdtor30_FUN_004f99d0(CAlphaBitmap *this_ptr,uint flags)
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

    PUSH 0x5dbf20                       ; 004f99d0
        ;   Label: core_moon.cpp_CAlphaBitmap_arrdtor30_FUN_004f99d0
    PUSH 0x1e                           ; 004f99d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f99d7
    PUSH EDX                            ; 004f99db
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004f99dc
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004f99e1
    RET                                 ; 004f99e4

