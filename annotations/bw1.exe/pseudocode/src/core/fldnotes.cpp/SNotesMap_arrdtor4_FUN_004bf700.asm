; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNotesMap * core_fldnotes_cpp_SNotesMap_arrdtor4_FUN_004bf700(SNotesMap *this_ptr,uint flags)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x6009a0                       ; 004bf700
        ;   Label: core_fldnotes.cpp_SNotesMap_arrdtor4_FUN_004bf700
    PUSH 0x4                            ; 004bf705
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bf707
    PUSH EDX                            ; 004bf70b
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004bf70c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bf711
    RET                                 ; 004bf714

