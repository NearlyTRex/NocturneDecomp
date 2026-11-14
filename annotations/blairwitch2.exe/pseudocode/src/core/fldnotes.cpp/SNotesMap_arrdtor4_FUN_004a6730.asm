; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNotesMap * __cdecl core_fldnotes_cpp_SNotesMap_arrdtor4_FUN_004a6730(SNotesMap *this_ptr,uint flags)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6f40                       ; 004a6730
        ;   Label: core_fldnotes.cpp_SNotesMap_arrdtor4_FUN_004a6730
    PUSH 0x4                            ; 004a6735
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a6737
    PUSH EDX                            ; 004a673b
    CALL crt_memory.c___arrfini_FUN_005b854f ; 004a673c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004a6741
    RET                                 ; 004a6744

