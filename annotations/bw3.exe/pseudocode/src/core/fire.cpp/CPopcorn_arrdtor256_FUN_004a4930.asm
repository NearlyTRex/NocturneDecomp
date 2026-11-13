; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPopcorn * __cdecl core_fire_cpp_CPopcorn_arrdtor256_FUN_004a4930(CPopcorn *this_ptr,uint flags)
;
; Parameters:
; CPopcorn *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfc90                       ; 004a4930
        ;   Label: core_fire.cpp_CPopcorn_arrdtor256_FUN_004a4930
    PUSH 0x100                          ; 004a4935
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a493a
    PUSH EDX                            ; 004a493e
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004a493f
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004a4944
    RET                                 ; 004a4947

