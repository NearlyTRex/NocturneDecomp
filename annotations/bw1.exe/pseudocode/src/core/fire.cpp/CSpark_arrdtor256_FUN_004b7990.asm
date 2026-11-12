; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpark * core_fire_cpp_CSpark_arrdtor256_FUN_004b7990(CSpark *this_ptr,uint flags)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600140                       ; 004b7990
        ;   Label: core_fire.cpp_CSpark_arrdtor256_FUN_004b7990
    PUSH 0x100                          ; 004b7995
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b799a
    PUSH EDX                            ; 004b799e
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004b799f
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b79a4
    RET                                 ; 004b79a7

