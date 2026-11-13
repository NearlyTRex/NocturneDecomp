; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPopcorn * __cdecl core_fire_cpp_CPopcorn_arrdtor256_FUN_004b7890(CPopcorn *this_ptr,uint flags)
;
; Parameters:
; CPopcorn *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600340                       ; 004b7890
        ;   Label: core_fire.cpp_CPopcorn_arrdtor256_FUN_004b7890
    PUSH 0x100                          ; 004b7895
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b789a
    PUSH EDX                            ; 004b789e
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004b789f
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b78a4
    RET                                 ; 004b78a7

