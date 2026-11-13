; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPopcorn * __cdecl core_fire_cpp_CPopcorn_arrdtor256_FUN_0049efe0(CPopcorn *this_ptr,uint flags)
;
; Parameters:
; CPopcorn *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f68b0                       ; 0049efe0
        ;   Label: core_fire.cpp_CPopcorn_arrdtor256_FUN_0049efe0
    PUSH 0x100                          ; 0049efe5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049efea
    PUSH EDX                            ; 0049efee
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0049efef
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049eff4
    RET                                 ; 0049eff7

